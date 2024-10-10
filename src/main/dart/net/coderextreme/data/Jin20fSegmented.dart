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
              content_ : SFString('JinScaledV2L1LOA4MinimumSkeleton20f.x3d'))]),
      Scene_ : 
        Scene(
          /*https://www.web3d.org/documents/specifications/19774/V2.0/index.html*/
          /*0 0 0 at floor between feet, default I pose (relaxed attention) model gaze toward +Z, +x to model left, +y up, right-hand rule.*/
          children_ : [
            WorldInfo(
              title_ : SFString('20f Jin v2 loa4 Level 1, Joints, Segments, Sites')),

            Transform(
              DEF_ : SFString('ContainerScene000'),
              child_ : 
                Shape(
                  DEF_ : SFString('AxisLinesShape'),
                  /*Red +X, Green +Y, Blue +Z*/
                  geometry_ : 
                    IndexedLineSet(
                      colorIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2)]),
                      colorPerVertex_ : false,
                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                      color_ : 
                        Color(
                          color_ : MFColor([SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0.6), SFColor(0), SFColor(0), SFColor(0), SFColor(1)])),
                      coord_ : 
                        Coordinate(
                          point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.1,0,0]),SFVec3f([0,0.1,0]),SFVec3f([0,0,0.1])]))))),

            HAnimHumanoid(
              name_ : SFString('JinLOA4S'),
              DEF_ : SFString('hanim_JinLOA4S'),
              loa_ : 4,
              version_ : SFString('2.0'),
              joints_ : [
                HAnimJoint(
                  name_ : SFString('humanoid_root'),
                  DEF_ : SFString('hanim_humanoid_root'),
                  center_ : SFVec3f([SFDouble(0), SFDouble(0.77), SFDouble(0)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  children_ : [
                    HAnimSegment(
                      name_ : SFString('sacrum'),
                      DEF_ : SFString('hanim_sacrum'),
                      children_ : [
                        Transform(
                          DEF_ : SFString('Humanoid000'),
                          child_ : 
                            Shape(
                              USE_ : SFString('AxisLinesShape')))]),

                    HAnimJoint(
                      name_ : SFString('sacroiliac'),
                      DEF_ : SFString('hanim_sacroiliac'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(0.826), SFDouble(0.02)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('pelvis'),
                          DEF_ : SFString('hanim_pelvis'),
                          children_ : [
                            HAnimSite(
                              name_ : SFString('l_iliocristale'),
                              DEF_ : SFString('hanim_l_iliocristale_pt'),
                              translation_ : SFVec3f([SFDouble(0.13), SFDouble(0.92), SFDouble(0.0035)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite 33 hanim_l_iliocristale_pt')),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      solid_ : false,
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                Billboard(
                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        Text(
                                          string_ : MFString([SFString("33")]),
                                          fontStyle_ : 
                                            FontStyle(
                                              size_ : 0.035)))])]),

                            HAnimSite(
                              name_ : SFString('r_iliocristale'),
                              DEF_ : SFString('hanim_r_iliocristale_pt'),
                              translation_ : SFVec3f([SFDouble(-0.13), SFDouble(0.92), SFDouble(0.0035)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite 36 hanim_r_iliocristale_pt')),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      solid_ : false,
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                Billboard(
                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        Text(
                                          string_ : MFString([SFString("36")]),
                                          fontStyle_ : 
                                            FontStyle(
                                              size_ : 0.035)))])]),

                            HAnimSite(
                              name_ : SFString('l_trochanterion'),
                              DEF_ : SFString('hanim_l_trochanterion_pt'),
                              translation_ : SFVec3f([SFDouble(0.14), SFDouble(0.8), SFDouble(0.0035)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite 42 hanim_l_trochanterion_pt')),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      solid_ : false,
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                Billboard(
                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        Text(
                                          string_ : MFString([SFString("42")]),
                                          fontStyle_ : 
                                            FontStyle(
                                              size_ : 0.035)))])]),

                            HAnimSite(
                              name_ : SFString('r_trochanterion'),
                              DEF_ : SFString('hanim_r_trochanterion_pt'),
                              translation_ : SFVec3f([SFDouble(-0.14), SFDouble(0.8), SFDouble(0.0035)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite 46 hanim_r_trochanterion_pt')),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      solid_ : false,
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                Billboard(
                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        Text(
                                          string_ : MFString([SFString("46")]),
                                          fontStyle_ : 
                                            FontStyle(
                                              size_ : 0.035)))])]),

                            HAnimSite(
                              name_ : SFString('l_asis'),
                              DEF_ : SFString('hanim_l_asis_pt'),
                              translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.86), SFDouble(0.0035)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite 32 hanim_l_asis_pt')),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      solid_ : false,
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                Billboard(
                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        Text(
                                          string_ : MFString([SFString("32")]),
                                          fontStyle_ : 
                                            FontStyle(
                                              size_ : 0.035)))])]),

                            HAnimSite(
                              name_ : SFString('r_asis'),
                              DEF_ : SFString('hanim_r_asis_pt'),
                              translation_ : SFVec3f([SFDouble(-0.1), SFDouble(0.86), SFDouble(0.0035)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite 35 hanim_r_asis_pt')),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      solid_ : false,
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                Billboard(
                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        Text(
                                          string_ : MFString([SFString("35")]),
                                          fontStyle_ : 
                                            FontStyle(
                                              size_ : 0.035)))])]),

                            HAnimSite(
                              name_ : SFString('l_psis'),
                              DEF_ : SFString('hanim_l_psis_pt'),
                              translation_ : SFVec3f([SFDouble(0.05), SFDouble(0.84), SFDouble(-0.11)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite 34 hanim_l_psis_pt')),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      solid_ : false,
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                Billboard(
                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        Text(
                                          string_ : MFString([SFString("34")]),
                                          fontStyle_ : 
                                            FontStyle(
                                              size_ : 0.035)))])]),

                            HAnimSite(
                              name_ : SFString('r_psis'),
                              DEF_ : SFString('hanim_r_psis_pt'),
                              translation_ : SFVec3f([SFDouble(-0.05), SFDouble(0.84), SFDouble(-0.11)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite 37 hanim_r_psis_pt')),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      solid_ : false,
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                Billboard(
                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        Text(
                                          string_ : MFString([SFString("37")]),
                                          fontStyle_ : 
                                            FontStyle(
                                              size_ : 0.035)))])]),

                            HAnimSite(
                              name_ : SFString('crotch'),
                              DEF_ : SFString('hanim_crotch_pt'),
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.703), SFDouble(0)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite 38 hanim_crotch_pt')),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      solid_ : false,
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                Billboard(
                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        Text(
                                          string_ : MFString([SFString("38")]),
                                          fontStyle_ : 
                                            FontStyle(
                                              size_ : 0.035)))])]),

                            HAnimSite(
                              name_ : SFString('buttocks_standing_wall_contact_point'),
                              DEF_ : SFString('hanim_buttocks_standing_wall_contact_point_pt'),
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(-0.15)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite 93 hanim_buttocks_standing_wall_contact_point_pt')),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      solid_ : false,
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                Billboard(
                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        Text(
                                          string_ : MFString([SFString("93")]),
                                          fontStyle_ : 
                                            FontStyle(
                                              size_ : 0.035)))])]),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.826,0.02]),SFVec3f([0,0.77,0])]))))]),

                        HAnimJoint(
                          name_ : SFString('l_hip'),
                          DEF_ : SFString('hanim_l_hip'),
                          center_ : SFVec3f([SFDouble(0.095), SFDouble(0.8266), SFDouble(-0.0183)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('l_thigh'),
                              DEF_ : SFString('hanim_l_thigh'),
                              children_ : [
                                HAnimSite(
                                  name_ : SFString('l_knee_crease'),
                                  DEF_ : SFString('hanim_l_knee_crease_pt'),
                                  translation_ : SFVec3f([SFDouble(0.09), SFDouble(0.41), SFDouble(-0.056)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite 90 hanim_l_knee_crease_pt')),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          solid_ : false,
                                          color_ : 
                                            ColorRGBA(
                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                    Billboard(
                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      children_ : [
                                        Shape(
                                          geometry_ : 
                                            Text(
                                              string_ : MFString([SFString("90")]),
                                              fontStyle_ : 
                                                FontStyle(
                                                  size_ : 0.035)))])]),

                                HAnimSite(
                                  name_ : SFString('l_femoral_medial_epicondyle'),
                                  DEF_ : SFString('hanim_l_femoral_medial_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(0.039), SFDouble(0.41), SFDouble(-0.01)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite 40 hanim_l_femoral_medial_epicondyle_pt')),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          solid_ : false,
                                          color_ : 
                                            ColorRGBA(
                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                    Billboard(
                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      children_ : [
                                        Shape(
                                          geometry_ : 
                                            Text(
                                              string_ : MFString([SFString("40")]),
                                              fontStyle_ : 
                                                FontStyle(
                                                  size_ : 0.035)))])]),

                                HAnimSite(
                                  name_ : SFString('l_femoral_lateral_epicondyle'),
                                  DEF_ : SFString('hanim_l_femoral_lateral_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(0.127), SFDouble(0.41), SFDouble(-0.01)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite 39 hanim_l_femoral_lateral_epicondyle_pt')),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          solid_ : false,
                                          color_ : 
                                            ColorRGBA(
                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                    Billboard(
                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      children_ : [
                                        Shape(
                                          geometry_ : 
                                            Text(
                                              string_ : MFString([SFString("39")]),
                                              fontStyle_ : 
                                                FontStyle(
                                                  size_ : 0.035)))])]),

                                HAnimSite(
                                  name_ : SFString('l_suprapatella'),
                                  DEF_ : SFString('hanim_l_suprapatella_pt'),
                                  translation_ : SFVec3f([SFDouble(0.085), SFDouble(0.41), SFDouble(0.042)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite 41 hanim_l_suprapatella_pt')),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          solid_ : false,
                                          color_ : 
                                            ColorRGBA(
                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                    Billboard(
                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      children_ : [
                                        Shape(
                                          geometry_ : 
                                            Text(
                                              string_ : MFString([SFString("41")]),
                                              fontStyle_ : 
                                                FontStyle(
                                                  size_ : 0.035)))])]),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.095,0.8266,-0.0183]),SFVec3f([0,0.826,0.02])]))))]),

                            HAnimJoint(
                              name_ : SFString('l_knee'),
                              DEF_ : SFString('hanim_l_knee'),
                              center_ : SFVec3f([SFDouble(0.0926), SFDouble(0.4088), SFDouble(-0.01944)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('l_calf'),
                                  DEF_ : SFString('hanim_l_calf'),
                                  children_ : [
                                    HAnimSite(
                                      name_ : SFString('l_tibiale'),
                                      DEF_ : SFString('hanim_l_tibiale_pt'),
                                      translation_ : SFVec3f([SFDouble(0.09), SFDouble(0.31), SFDouble(0.038)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite 47 hanim_l_tibiale_pt')),

                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                          geometry_ : 
                                            IndexedFaceSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                              creaseAngle_ : 0.5,
                                              solid_ : false,
                                              color_ : 
                                                ColorRGBA(
                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                        Billboard(
                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                Text(
                                                  string_ : MFString([SFString("47")]),
                                                  fontStyle_ : 
                                                    FontStyle(
                                                      size_ : 0.035)))])]),

                                    HAnimSite(
                                      name_ : SFString('l_medial_malleolus'),
                                      DEF_ : SFString('hanim_l_medial_malleolus_pt'),
                                      translation_ : SFVec3f([SFDouble(0.061), SFDouble(0.095), SFDouble(-0.02)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite 48 hanim_l_medial_malleolus_pt')),

                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                          geometry_ : 
                                            IndexedFaceSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                              creaseAngle_ : 0.5,
                                              solid_ : false,
                                              color_ : 
                                                ColorRGBA(
                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                        Billboard(
                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                Text(
                                                  string_ : MFString([SFString("48")]),
                                                  fontStyle_ : 
                                                    FontStyle(
                                                      size_ : 0.035)))])]),

                                    HAnimSite(
                                      name_ : SFString('l_lateral_malleolus'),
                                      DEF_ : SFString('hanim_l_lateral_malleolus_pt'),
                                      translation_ : SFVec3f([SFDouble(0.12), SFDouble(0.095), SFDouble(-0.02)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite 49 hanim_l_lateral_malleolus_pt')),

                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                          geometry_ : 
                                            IndexedFaceSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                              creaseAngle_ : 0.5,
                                              solid_ : false,
                                              color_ : 
                                                ColorRGBA(
                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                        Billboard(
                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                Text(
                                                  string_ : MFString([SFString("49")]),
                                                  fontStyle_ : 
                                                    FontStyle(
                                                      size_ : 0.035)))])]),

                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          color_ : 
                                            ColorRGBA(
                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.0926,0.4088,-0.01944]),SFVec3f([0.095,0.8266,-0.0183])]))))]),

                                HAnimJoint(
                                  name_ : SFString('l_talocrural'),
                                  DEF_ : SFString('hanim_l_talocrural'),
                                  center_ : SFVec3f([SFDouble(0.0888), SFDouble(0.09545), SFDouble(-0.01045)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l_talus'),
                                      DEF_ : SFString('hanim_l_talus'),
                                      children_ : [
                                        HAnimSite(
                                          name_ : SFString('l_sphyrion'),
                                          DEF_ : SFString('hanim_l_sphyrion_pt'),
                                          translation_ : SFVec3f([SFDouble(0.054), SFDouble(0.065), SFDouble(-0.02)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite 50 hanim_l_sphyrion_pt')),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  solid_ : false,
                                                  color_ : 
                                                    ColorRGBA(
                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                            Billboard(
                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    Text(
                                                      string_ : MFString([SFString("50")]),
                                                      fontStyle_ : 
                                                        FontStyle(
                                                          size_ : 0.035)))])]),

                                        HAnimSite(
                                          name_ : SFString('l_calcaneus_posterior'),
                                          DEF_ : SFString('hanim_l_calcaneus_posterior_pt'),
                                          translation_ : SFVec3f([SFDouble(0.09), SFDouble(0.03), SFDouble(-0.06)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite 58 hanim_l_calcaneus_posterior_pt')),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  solid_ : false,
                                                  color_ : 
                                                    ColorRGBA(
                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                            Billboard(
                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    Text(
                                                      string_ : MFString([SFString("58")]),
                                                      fontStyle_ : 
                                                        FontStyle(
                                                          size_ : 0.035)))])]),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.0888,0.09545,-0.01045]),SFVec3f([0.0926,0.4088,-0.01944])]))))]),

                                    HAnimJoint(
                                      name_ : SFString('l_talocalcaneonavicular'),
                                      DEF_ : SFString('hanim_l_talocalcaneonavicular'),
                                      center_ : SFVec3f([SFDouble(0.0783), SFDouble(0.0369), SFDouble(0.0049)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l_navicular'),
                                          DEF_ : SFString('hanim_l_navicular'),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.0783,0.0369,0.0049]),SFVec3f([0.0888,0.09545,-0.01045])]))))]),

                                        HAnimJoint(
                                          name_ : SFString('l_cuneonavicular_1'),
                                          DEF_ : SFString('hanim_l_cuneonavicular_1'),
                                          center_ : SFVec3f([SFDouble(0.0674), SFDouble(0.0321), SFDouble(0.0184)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l_cuneiform_1'),
                                              DEF_ : SFString('hanim_l_cuneiform_1'),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.0674,0.0321,0.0184]),SFVec3f([0.0783,0.0369,0.0049])]))))]),

                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_1'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_1'),
                                              center_ : SFVec3f([SFDouble(0.0646), SFDouble(0.02324), SFDouble(0.0442)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_metatarsal_1'),
                                                  DEF_ : SFString('hanim_l_metatarsal_1'),
                                                  children_ : [
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.0646,0.02324,0.0442]),SFVec3f([0.0674,0.0321,0.0184])]))))]),

                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_1'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_1'),
                                                  center_ : SFVec3f([SFDouble(0.0621), SFDouble(0.01442), SFDouble(0.0936)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('l_tarsal_proximal_phalanx_1'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_1'),
                                                      children_ : [
                                                        HAnimSite(
                                                          name_ : SFString('l_metatarsal_phalanx_1'),
                                                          DEF_ : SFString('hanim_l_metatarsal_phalanx_1_pt'),
                                                          translation_ : SFVec3f([SFDouble(0.062), SFDouble(0.012), SFDouble(0.1)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite 55 hanim_l_metatarsal_phalanx_1_pt')),

                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  material_ : 
                                                                    Material(
                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                              geometry_ : 
                                                                IndexedFaceSet(
                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                  creaseAngle_ : 0.5,
                                                                  solid_ : false,
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                            Billboard(
                                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                              children_ : [
                                                                Shape(
                                                                  geometry_ : 
                                                                    Text(
                                                                      string_ : MFString([SFString("55")]),
                                                                      fontStyle_ : 
                                                                        FontStyle(
                                                                          size_ : 0.035)))])]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.0621,0.01442,0.0936]),SFVec3f([0.0646,0.02324,0.0442])]))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_interphalangeal_1'),
                                                      DEF_ : SFString('hanim_l_tarsal_interphalangeal_1'),
                                                      center_ : SFVec3f([SFDouble(0.062), SFDouble(0.012), SFDouble(0.115)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('l_tarsal_distal_phalanx_1'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_phalanx_1'),
                                                          children_ : [
                                                            HAnimSite(
                                                              name_ : SFString('l_tarsal_distal_phalanx_1'),
                                                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_1_tip'),
                                                              translation_ : SFVec3f([SFDouble(0.062), SFDouble(0.012), SFDouble(0.134)]),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite 111 hanim_l_tarsal_distal_phalanx_1_tip')),

                                                                Shape(
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      material_ : 
                                                                        Material(
                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                  geometry_ : 
                                                                    IndexedFaceSet(
                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                      creaseAngle_ : 0.5,
                                                                      solid_ : false,
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                Billboard(
                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      geometry_ : 
                                                                        Text(
                                                                          string_ : MFString([SFString("111")]),
                                                                          fontStyle_ : 
                                                                            FontStyle(
                                                                              size_ : 0.035)))])]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.062,0.012,0.115]),SFVec3f([0.0621,0.01442,0.0936])]))))])])])])]),

                                        HAnimJoint(
                                          name_ : SFString('l_cuneonavicular_2'),
                                          DEF_ : SFString('hanim_l_cuneonavicular_2'),
                                          center_ : SFVec3f([SFDouble(0.0814), SFDouble(0.0335), SFDouble(0.02143)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l_cuneiform_2'),
                                              DEF_ : SFString('hanim_l_cuneiform_2'),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.0814,0.0335,0.02143]),SFVec3f([0.0783,0.0369,0.0049])]))))]),

                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_2'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_2'),
                                              center_ : SFVec3f([SFDouble(0.0802), SFDouble(0.0261), SFDouble(0.0411)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_metatarsal_2'),
                                                  DEF_ : SFString('hanim_l_metatarsal_2'),
                                                  children_ : [
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.0802,0.0261,0.0411]),SFVec3f([0.0814,0.0335,0.02143])]))))]),

                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_2'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(0.0825), SFDouble(0.01497), SFDouble(0.09783)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('l_tarsal_proximal_phalanx_2'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_2'),
                                                      children_ : [
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.0825,0.01497,0.09783]),SFVec3f([0.0802,0.0261,0.0411])]))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_2'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_2'),
                                                      center_ : SFVec3f([SFDouble(0.0843), SFDouble(0.01265), SFDouble(0.114)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('l_tarsal_middle_phalanx_2'),
                                                          DEF_ : SFString('hanim_l_tarsal_middle_phalanx_2'),
                                                          children_ : [
                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.0843,0.01265,0.114]),SFVec3f([0.0825,0.01497,0.09783])]))))]),

                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_2'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_2'),
                                                          center_ : SFVec3f([SFDouble(0.0843), SFDouble(0.00982), SFDouble(0.123435)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('l_tarsal_distal_phalanx_2'),
                                                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2'),
                                                              children_ : [
                                                                HAnimSite(
                                                                  name_ : SFString('l_tarsal_distal_phalanx_2'),
                                                                  DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2_tip'),
                                                                  translation_ : SFVec3f([SFDouble(0.08), SFDouble(0.016), SFDouble(0.14)]),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('HAnimSite 112 hanim_l_tarsal_distal_phalanx_2_tip')),

                                                                    Shape(
                                                                      appearance_ : 
                                                                        Appearance(
                                                                          material_ : 
                                                                            Material(
                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                      geometry_ : 
                                                                        IndexedFaceSet(
                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                          creaseAngle_ : 0.5,
                                                                          solid_ : false,
                                                                          color_ : 
                                                                            ColorRGBA(
                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                    Billboard(
                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          geometry_ : 
                                                                            Text(
                                                                              string_ : MFString([SFString("112")]),
                                                                              fontStyle_ : 
                                                                                FontStyle(
                                                                                  size_ : 0.035)))])]),

                                                                Shape(
                                                                  geometry_ : 
                                                                    LineSet(
                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0.0843,0.00982,0.123435]),SFVec3f([0.0843,0.01265,0.114])]))))])])])])])]),

                                        HAnimJoint(
                                          name_ : SFString('l_cuneonavicular_3'),
                                          DEF_ : SFString('hanim_l_cuneonavicular_3'),
                                          center_ : SFVec3f([SFDouble(0.09297), SFDouble(0.0334), SFDouble(0.01982)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l_cuneiform_3'),
                                              DEF_ : SFString('hanim_l_cuneiform_3'),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.09297,0.0334,0.01982]),SFVec3f([0.0783,0.0369,0.0049])]))))]),

                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_3'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_3'),
                                              center_ : SFVec3f([SFDouble(0.09459), SFDouble(0.0261), SFDouble(0.0394)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_metatarsal_3'),
                                                  DEF_ : SFString('hanim_l_metatarsal_3'),
                                                  children_ : [
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.09459,0.0261,0.0394]),SFVec3f([0.09297,0.0334,0.01982])]))))]),

                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_3'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_3'),
                                                  center_ : SFVec3f([SFDouble(0.0965), SFDouble(0.01505), SFDouble(0.0954)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('l_tarsal_proximal_phalanx_3'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_3'),
                                                      children_ : [
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.0965,0.01505,0.0954]),SFVec3f([0.09459,0.0261,0.0394])]))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_3'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_3'),
                                                      center_ : SFVec3f([SFDouble(0.09886), SFDouble(0.01192), SFDouble(0.11047)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('l_tarsal_middle_phalanx_3'),
                                                          DEF_ : SFString('hanim_l_tarsal_middle_phalanx_3'),
                                                          children_ : [
                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.09886,0.01192,0.11047]),SFVec3f([0.0965,0.01505,0.0954])]))))]),

                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_3'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_3'),
                                                          center_ : SFVec3f([SFDouble(0.1004), SFDouble(0.00983), SFDouble(0.1197)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('l_tarsal_distal_phalanx_3'),
                                                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_3'),
                                                              children_ : [
                                                                HAnimSite(
                                                                  name_ : SFString('l_tarsal_distal_phalanx_3'),
                                                                  DEF_ : SFString('hanim_l_tarsal_distal_phalanx_3_tip'),
                                                                  translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.016), SFDouble(0.14)]),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('HAnimSite 113 hanim_l_tarsal_distal_phalanx_3_tip')),

                                                                    Shape(
                                                                      appearance_ : 
                                                                        Appearance(
                                                                          material_ : 
                                                                            Material(
                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                      geometry_ : 
                                                                        IndexedFaceSet(
                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                          creaseAngle_ : 0.5,
                                                                          solid_ : false,
                                                                          color_ : 
                                                                            ColorRGBA(
                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                    Billboard(
                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          geometry_ : 
                                                                            Text(
                                                                              string_ : MFString([SFString("113")]),
                                                                              fontStyle_ : 
                                                                                FontStyle(
                                                                                  size_ : 0.035)))])]),

                                                                Shape(
                                                                  geometry_ : 
                                                                    LineSet(
                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0.1004,0.00983,0.1197]),SFVec3f([0.09886,0.01192,0.11047])]))))])])])])])])]),

                                    HAnimJoint(
                                      name_ : SFString('l_calcaneocuboid'),
                                      DEF_ : SFString('hanim_l_calcaneocuboid'),
                                      center_ : SFVec3f([SFDouble(0.0891), SFDouble(0.05798), SFDouble(-0.0259)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l_calcaneus'),
                                          DEF_ : SFString('hanim_l_calcaneus'),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.0891,0.05798,-0.0259]),SFVec3f([0.0888,0.09545,-0.01045])]))))]),

                                        HAnimJoint(
                                          name_ : SFString('l_transversetarsal'),
                                          DEF_ : SFString('hanim_l_transversetarsal'),
                                          center_ : SFVec3f([SFDouble(0.11063), SFDouble(0.03528), SFDouble(0.0021)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l_cuboid'),
                                              DEF_ : SFString('hanim_l_cuboid'),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.11063,0.03528,0.0021]),SFVec3f([0.0891,0.05798,-0.0259])]))))]),

                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_4'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_4'),
                                              center_ : SFVec3f([SFDouble(0.10649), SFDouble(0.02454), SFDouble(0.03843)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_metatarsal_4'),
                                                  DEF_ : SFString('hanim_l_metatarsal_4'),
                                                  children_ : [
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.10649,0.02454,0.03843]),SFVec3f([0.11063,0.03528,0.0021])]))))]),

                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_4'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_4'),
                                                  center_ : SFVec3f([SFDouble(0.109867), SFDouble(0.01435), SFDouble(0.09117)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('l_tarsal_proximal_phalanx_4'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_4'),
                                                      children_ : [
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.109867,0.01435,0.09117]),SFVec3f([0.10649,0.02454,0.03843])]))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_4'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_4'),
                                                      center_ : SFVec3f([SFDouble(0.11416), SFDouble(0.01224), SFDouble(0.10631)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('l_tarsal_middle_phalanx_4'),
                                                          DEF_ : SFString('hanim_l_tarsal_middle_phalanx_4'),
                                                          children_ : [
                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.11416,0.01224,0.10631]),SFVec3f([0.109867,0.01435,0.09117])]))))]),

                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_4'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_4'),
                                                          center_ : SFVec3f([SFDouble(0.11567), SFDouble(0.00936), SFDouble(0.11369)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('l_tarsal_distal_phalanx_4'),
                                                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_4'),
                                                              children_ : [
                                                                HAnimSite(
                                                                  name_ : SFString('l_tarsal_distal_phalanx_4'),
                                                                  DEF_ : SFString('hanim_l_tarsal_distal_phalanx_4_tip'),
                                                                  translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.016), SFDouble(0.13)]),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('HAnimSite 114 hanim_l_tarsal_distal_phalanx_4_tip')),

                                                                    Shape(
                                                                      appearance_ : 
                                                                        Appearance(
                                                                          material_ : 
                                                                            Material(
                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                      geometry_ : 
                                                                        IndexedFaceSet(
                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                          creaseAngle_ : 0.5,
                                                                          solid_ : false,
                                                                          color_ : 
                                                                            ColorRGBA(
                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                    Billboard(
                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          geometry_ : 
                                                                            Text(
                                                                              string_ : MFString([SFString("114")]),
                                                                              fontStyle_ : 
                                                                                FontStyle(
                                                                                  size_ : 0.035)))])]),

                                                                Shape(
                                                                  geometry_ : 
                                                                    LineSet(
                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0.11567,0.00936,0.11369]),SFVec3f([0.11416,0.01224,0.10631])]))))])])])])]),

                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_5'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_5'),
                                              center_ : SFVec3f([SFDouble(0.1208), SFDouble(0.02094), SFDouble(0.03474)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_metatarsal_5'),
                                                  DEF_ : SFString('hanim_l_metatarsal_5'),
                                                  children_ : [
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.1208,0.02094,0.03474]),SFVec3f([0.11063,0.03528,0.0021])]))))]),

                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_5'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_5'),
                                                  center_ : SFVec3f([SFDouble(0.124065), SFDouble(0.01367), SFDouble(0.08656)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('l_tarsal_proximal_phalanx_5'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_5'),
                                                      children_ : [
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.124065,0.01367,0.08656]),SFVec3f([0.1208,0.02094,0.03474])]))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_5'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_5'),
                                                      center_ : SFVec3f([SFDouble(0.12638), SFDouble(0.01086), SFDouble(0.09414)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('l_tarsal_middle_phalanx_5'),
                                                          DEF_ : SFString('hanim_l_tarsal_middle_phalanx_5'),
                                                          children_ : [
                                                            HAnimSite(
                                                              name_ : SFString('l_metatarsal_phalanx_5'),
                                                              DEF_ : SFString('hanim_l_metatarsal_phalanx_5_pt'),
                                                              translation_ : SFVec3f([SFDouble(0.12), SFDouble(0.02), SFDouble(0.04)]),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite 56 hanim_l_metatarsal_phalanx_5_pt')),

                                                                Shape(
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      material_ : 
                                                                        Material(
                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                  geometry_ : 
                                                                    IndexedFaceSet(
                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                      creaseAngle_ : 0.5,
                                                                      solid_ : false,
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                Billboard(
                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      geometry_ : 
                                                                        Text(
                                                                          string_ : MFString([SFString("56")]),
                                                                          fontStyle_ : 
                                                                            FontStyle(
                                                                              size_ : 0.035)))])]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.12638,0.01086,0.09414]),SFVec3f([0.124065,0.01367,0.08656])]))))]),

                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_5'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_5'),
                                                          center_ : SFVec3f([SFDouble(0.12728), SFDouble(0.00856), SFDouble(0.10188)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('l_tarsal_distal_phalanx_5'),
                                                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_5'),
                                                              children_ : [
                                                                HAnimSite(
                                                                  name_ : SFString('l_tarsal_distal_phalanx_5'),
                                                                  DEF_ : SFString('hanim_l_tarsal_distal_phalanx_5_tip'),
                                                                  translation_ : SFVec3f([SFDouble(0.125), SFDouble(0.016), SFDouble(0.115)]),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('HAnimSite 115 hanim_l_tarsal_distal_phalanx_5_tip')),

                                                                    Shape(
                                                                      appearance_ : 
                                                                        Appearance(
                                                                          material_ : 
                                                                            Material(
                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                      geometry_ : 
                                                                        IndexedFaceSet(
                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                          creaseAngle_ : 0.5,
                                                                          solid_ : false,
                                                                          color_ : 
                                                                            ColorRGBA(
                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                    Billboard(
                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          geometry_ : 
                                                                            Text(
                                                                              string_ : MFString([SFString("115")]),
                                                                              fontStyle_ : 
                                                                                FontStyle(
                                                                                  size_ : 0.035)))])]),

                                                                Shape(
                                                                  geometry_ : 
                                                                    LineSet(
                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0.12728,0.00856,0.10188]),SFVec3f([0.12638,0.01086,0.09414])]))))])])])])])])])])])]),

                        HAnimJoint(
                          name_ : SFString('r_hip'),
                          DEF_ : SFString('hanim_r_hip'),
                          center_ : SFVec3f([SFDouble(-0.09466), SFDouble(0.82665), SFDouble(-0.01835)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('r_thigh'),
                              DEF_ : SFString('hanim_r_thigh'),
                              children_ : [
                                HAnimSite(
                                  name_ : SFString('r_knee_crease'),
                                  DEF_ : SFString('hanim_r_knee_crease_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.09), SFDouble(0.41), SFDouble(-0.056)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite 91 hanim_r_knee_crease_pt')),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          solid_ : false,
                                          color_ : 
                                            ColorRGBA(
                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                    Billboard(
                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      children_ : [
                                        Shape(
                                          geometry_ : 
                                            Text(
                                              string_ : MFString([SFString("91")]),
                                              fontStyle_ : 
                                                FontStyle(
                                                  size_ : 0.035)))])]),

                                HAnimSite(
                                  name_ : SFString('r_femoral_medial_epicondyle'),
                                  DEF_ : SFString('hanim_r_femoral_medial_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.039), SFDouble(0.41), SFDouble(-0.01)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite 44 hanim_r_femoral_medial_epicondyle_pt')),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          solid_ : false,
                                          color_ : 
                                            ColorRGBA(
                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                    Billboard(
                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      children_ : [
                                        Shape(
                                          geometry_ : 
                                            Text(
                                              string_ : MFString([SFString("44")]),
                                              fontStyle_ : 
                                                FontStyle(
                                                  size_ : 0.035)))])]),

                                HAnimSite(
                                  name_ : SFString('r_femoral_lateral_epicondyle'),
                                  DEF_ : SFString('hanim_r_femoral_lateral_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.127), SFDouble(0.41), SFDouble(-0.01)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite 43 hanim_r_femoral_lateral_epicondyle_pt')),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          solid_ : false,
                                          color_ : 
                                            ColorRGBA(
                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                    Billboard(
                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      children_ : [
                                        Shape(
                                          geometry_ : 
                                            Text(
                                              string_ : MFString([SFString("43")]),
                                              fontStyle_ : 
                                                FontStyle(
                                                  size_ : 0.035)))])]),

                                HAnimSite(
                                  name_ : SFString('r_suprapatella'),
                                  DEF_ : SFString('hanim_r_suprapatella_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.085), SFDouble(0.41), SFDouble(0.042)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite 45 hanim_r_suprapatella_pt')),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          solid_ : false,
                                          color_ : 
                                            ColorRGBA(
                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                    Billboard(
                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      children_ : [
                                        Shape(
                                          geometry_ : 
                                            Text(
                                              string_ : MFString([SFString("45")]),
                                              fontStyle_ : 
                                                FontStyle(
                                                  size_ : 0.035)))])]),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-0.09466,0.82665,-0.01835]),SFVec3f([0,0.826,0.02])]))))]),

                            HAnimJoint(
                              name_ : SFString('r_knee'),
                              DEF_ : SFString('hanim_r_knee'),
                              center_ : SFVec3f([SFDouble(-0.0926), SFDouble(0.408825), SFDouble(-0.01944)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('r_calf'),
                                  DEF_ : SFString('hanim_r_calf'),
                                  children_ : [
                                    HAnimSite(
                                      name_ : SFString('r_tibiale'),
                                      DEF_ : SFString('hanim_r_tibiale_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.09), SFDouble(0.31), SFDouble(0.038)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite 51 hanim_r_tibiale_pt')),

                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                          geometry_ : 
                                            IndexedFaceSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                              creaseAngle_ : 0.5,
                                              solid_ : false,
                                              color_ : 
                                                ColorRGBA(
                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                        Billboard(
                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                Text(
                                                  string_ : MFString([SFString("51")]),
                                                  fontStyle_ : 
                                                    FontStyle(
                                                      size_ : 0.035)))])]),

                                    HAnimSite(
                                      name_ : SFString('r_medial_malleolus'),
                                      DEF_ : SFString('hanim_r_medial_malleolus_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.061), SFDouble(0.095), SFDouble(-0.02)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite 52 hanim_r_medial_malleolus_pt')),

                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                          geometry_ : 
                                            IndexedFaceSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                              creaseAngle_ : 0.5,
                                              solid_ : false,
                                              color_ : 
                                                ColorRGBA(
                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                        Billboard(
                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                Text(
                                                  string_ : MFString([SFString("52")]),
                                                  fontStyle_ : 
                                                    FontStyle(
                                                      size_ : 0.035)))])]),

                                    HAnimSite(
                                      name_ : SFString('r_lateral_malleolus'),
                                      DEF_ : SFString('hanim_r_lateral_malleolus_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.12), SFDouble(0.095), SFDouble(-0.02)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite 53 hanim_r_lateral_malleolus_pt')),

                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                          geometry_ : 
                                            IndexedFaceSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                              creaseAngle_ : 0.5,
                                              solid_ : false,
                                              color_ : 
                                                ColorRGBA(
                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                        Billboard(
                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                Text(
                                                  string_ : MFString([SFString("53")]),
                                                  fontStyle_ : 
                                                    FontStyle(
                                                      size_ : 0.035)))])]),

                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          color_ : 
                                            ColorRGBA(
                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.0926,0.408825,-0.01944]),SFVec3f([-0.09466,0.82665,-0.01835])]))))]),

                                HAnimJoint(
                                  name_ : SFString('r_talocrural'),
                                  DEF_ : SFString('hanim_r_talocrural'),
                                  center_ : SFVec3f([SFDouble(-0.08845), SFDouble(0.09544), SFDouble(-0.01045)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_talus'),
                                      DEF_ : SFString('hanim_r_talus'),
                                      children_ : [
                                        HAnimSite(
                                          name_ : SFString('r_sphyrion'),
                                          DEF_ : SFString('hanim_r_sphyrion_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.054), SFDouble(0.065), SFDouble(-0.02)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite 54 hanim_r_sphyrion_pt')),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  solid_ : false,
                                                  color_ : 
                                                    ColorRGBA(
                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                            Billboard(
                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    Text(
                                                      string_ : MFString([SFString("54")]),
                                                      fontStyle_ : 
                                                        FontStyle(
                                                          size_ : 0.035)))])]),

                                        HAnimSite(
                                          name_ : SFString('r_calcaneus_posterior'),
                                          DEF_ : SFString('hanim_r_calcaneus_posterior_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.09), SFDouble(0.03), SFDouble(-0.06)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite 62 hanim_r_calcaneus_posterior_pt')),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  solid_ : false,
                                                  color_ : 
                                                    ColorRGBA(
                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                            Billboard(
                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    Text(
                                                      string_ : MFString([SFString("62")]),
                                                      fontStyle_ : 
                                                        FontStyle(
                                                          size_ : 0.035)))])]),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.08845,0.09544,-0.01045]),SFVec3f([-0.0926,0.408825,-0.01944])]))))]),

                                    HAnimJoint(
                                      name_ : SFString('r_talocalcaneonavicular'),
                                      DEF_ : SFString('hanim_r_talocalcaneonavicular'),
                                      center_ : SFVec3f([SFDouble(-0.07794), SFDouble(0.0369), SFDouble(0.00486)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('r_navicular'),
                                          DEF_ : SFString('hanim_r_navicular'),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.07794,0.0369,0.00486]),SFVec3f([-0.08845,0.09544,-0.01045])]))))]),

                                        HAnimJoint(
                                          name_ : SFString('r_cuneonavicular_1'),
                                          DEF_ : SFString('hanim_r_cuneonavicular_1'),
                                          center_ : SFVec3f([SFDouble(-0.06698), SFDouble(0.032107), SFDouble(0.01839)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_cuneiform_1'),
                                              DEF_ : SFString('hanim_r_cuneiform_1'),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.06698,0.032107,0.01839]),SFVec3f([-0.07794,0.0369,0.00486])]))))]),

                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_1'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_1'),
                                              center_ : SFVec3f([SFDouble(-0.064), SFDouble(0.02324), SFDouble(0.04419)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_metatarsal_1'),
                                                  DEF_ : SFString('hanim_r_metatarsal_1'),
                                                  children_ : [
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.064,0.02324,0.04419]),SFVec3f([-0.06698,0.032107,0.01839])]))))]),

                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_1'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_1'),
                                                  center_ : SFVec3f([SFDouble(-0.06176), SFDouble(0.014425), SFDouble(0.09362)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('r_tarsal_proximal_phalanx_1'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_1'),
                                                      children_ : [
                                                        HAnimSite(
                                                          name_ : SFString('r_metatarsal_phalanx_1'),
                                                          DEF_ : SFString('hanim_r_metatarsal_phalanx_1_pt'),
                                                          translation_ : SFVec3f([SFDouble(-0.062), SFDouble(0.012), SFDouble(0.1)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite 59 hanim_r_metatarsal_phalanx_1_pt')),

                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  material_ : 
                                                                    Material(
                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                              geometry_ : 
                                                                IndexedFaceSet(
                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                  creaseAngle_ : 0.5,
                                                                  solid_ : false,
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                            Billboard(
                                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                              children_ : [
                                                                Shape(
                                                                  geometry_ : 
                                                                    Text(
                                                                      string_ : MFString([SFString("59")]),
                                                                      fontStyle_ : 
                                                                        FontStyle(
                                                                          size_ : 0.035)))])]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-0.06176,0.014425,0.09362]),SFVec3f([-0.064,0.02324,0.04419])]))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_interphalangeal_1'),
                                                      DEF_ : SFString('hanim_r_tarsal_interphalangeal_1'),
                                                      center_ : SFVec3f([SFDouble(-0.06174), SFDouble(0.0121), SFDouble(0.1153)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('r_tarsal_distal_phalanx_1'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_phalanx_1'),
                                                          children_ : [
                                                            HAnimSite(
                                                              name_ : SFString('r_tarsal_distal_phalanx_1'),
                                                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_1_tip'),
                                                              translation_ : SFVec3f([SFDouble(-0.06), SFDouble(0.012), SFDouble(0.14)]),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite 116 hanim_r_tarsal_distal_phalanx_1_tip')),

                                                                Shape(
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      material_ : 
                                                                        Material(
                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                  geometry_ : 
                                                                    IndexedFaceSet(
                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                      creaseAngle_ : 0.5,
                                                                      solid_ : false,
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                Billboard(
                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      geometry_ : 
                                                                        Text(
                                                                          string_ : MFString([SFString("116")]),
                                                                          fontStyle_ : 
                                                                            FontStyle(
                                                                              size_ : 0.035)))])]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([-0.06174,0.0121,0.1153]),SFVec3f([-0.06176,0.014425,0.09362])]))))])])])])]),

                                        HAnimJoint(
                                          name_ : SFString('r_cuneonavicular_2'),
                                          DEF_ : SFString('hanim_r_cuneonavicular_2'),
                                          center_ : SFVec3f([SFDouble(-0.081), SFDouble(0.0335), SFDouble(0.02142)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_cuneiform_2'),
                                              DEF_ : SFString('hanim_r_cuneiform_2'),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.081,0.0335,0.02142]),SFVec3f([-0.07794,0.0369,0.00486])]))))]),

                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_2'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_2'),
                                              center_ : SFVec3f([SFDouble(-0.07983), SFDouble(0.0261), SFDouble(0.04106)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_metatarsal_2'),
                                                  DEF_ : SFString('hanim_r_metatarsal_2'),
                                                  children_ : [
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.07983,0.0261,0.04106]),SFVec3f([-0.081,0.0335,0.02142])]))))]),

                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_2'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(-0.0821), SFDouble(0.01497), SFDouble(0.09783)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('r_tarsal_proximal_phalanx_2'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_2'),
                                                      children_ : [
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-0.0821,0.01497,0.09783]),SFVec3f([-0.07983,0.0261,0.04106])]))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_2'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_2'),
                                                      center_ : SFVec3f([SFDouble(-0.0839), SFDouble(0.012647), SFDouble(0.114)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('r_tarsal_middle_phalanx_2'),
                                                          DEF_ : SFString('hanim_r_tarsal_middle_phalanx_2'),
                                                          children_ : [
                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([-0.0839,0.012647,0.114]),SFVec3f([-0.0821,0.01497,0.09783])]))))]),

                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_2'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_2'),
                                                          center_ : SFVec3f([SFDouble(-0.0839), SFDouble(0.009825), SFDouble(0.123435)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('r_tarsal_distal_phalanx_2'),
                                                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_2'),
                                                              children_ : [
                                                                HAnimSite(
                                                                  name_ : SFString('r_tarsal_distal_phalanx_2'),
                                                                  DEF_ : SFString('hanim_r_tarsal_distal_phalanx_2_tip'),
                                                                  translation_ : SFVec3f([SFDouble(-0.08), SFDouble(0.016), SFDouble(0.14)]),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('HAnimSite 117 hanim_r_tarsal_distal_phalanx_2_tip')),

                                                                    Shape(
                                                                      appearance_ : 
                                                                        Appearance(
                                                                          material_ : 
                                                                            Material(
                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                      geometry_ : 
                                                                        IndexedFaceSet(
                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                          creaseAngle_ : 0.5,
                                                                          solid_ : false,
                                                                          color_ : 
                                                                            ColorRGBA(
                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                    Billboard(
                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          geometry_ : 
                                                                            Text(
                                                                              string_ : MFString([SFString("117")]),
                                                                              fontStyle_ : 
                                                                                FontStyle(
                                                                                  size_ : 0.035)))])]),

                                                                Shape(
                                                                  geometry_ : 
                                                                    LineSet(
                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([-0.0839,0.009825,0.123435]),SFVec3f([-0.0839,0.012647,0.114])]))))])])])])])]),

                                        HAnimJoint(
                                          name_ : SFString('r_cuneonavicular_3'),
                                          DEF_ : SFString('hanim_r_cuneonavicular_3'),
                                          center_ : SFVec3f([SFDouble(-0.09261), SFDouble(0.03339), SFDouble(0.01982)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_cuneiform_3'),
                                              DEF_ : SFString('hanim_r_cuneiform_3'),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.09261,0.03339,0.01982]),SFVec3f([-0.07794,0.0369,0.00486])]))))]),

                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_3'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_3'),
                                              center_ : SFVec3f([SFDouble(-0.09423), SFDouble(0.0261), SFDouble(0.0394)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_metatarsal_3'),
                                                  DEF_ : SFString('hanim_r_metatarsal_3'),
                                                  children_ : [
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.09423,0.0261,0.0394]),SFVec3f([-0.09261,0.03339,0.01982])]))))]),

                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_3'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_3'),
                                                  center_ : SFVec3f([SFDouble(-0.0961), SFDouble(0.01505), SFDouble(0.09542)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('r_tarsal_proximal_phalanx_3'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_3'),
                                                      children_ : [
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-0.0961,0.01505,0.09542]),SFVec3f([-0.09423,0.0261,0.0394])]))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_3'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_3'),
                                                      center_ : SFVec3f([SFDouble(-0.0985), SFDouble(0.01192), SFDouble(0.11047)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('r_tarsal_middle_phalanx_3'),
                                                          DEF_ : SFString('hanim_r_tarsal_middle_phalanx_3'),
                                                          children_ : [
                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([-0.0985,0.01192,0.11047]),SFVec3f([-0.0961,0.01505,0.09542])]))))]),

                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_3'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_3'),
                                                          center_ : SFVec3f([SFDouble(-0.100035), SFDouble(0.00982), SFDouble(0.1197)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('r_tarsal_distal_phalanx_3'),
                                                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_3'),
                                                              children_ : [
                                                                HAnimSite(
                                                                  name_ : SFString('r_tarsal_distal_phalanx_3'),
                                                                  DEF_ : SFString('hanim_r_tarsal_distal_phalanx_3_tip'),
                                                                  translation_ : SFVec3f([SFDouble(-0.1), SFDouble(0.016), SFDouble(0.14)]),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('HAnimSite 118 hanim_r_tarsal_distal_phalanx_3_tip')),

                                                                    Shape(
                                                                      appearance_ : 
                                                                        Appearance(
                                                                          material_ : 
                                                                            Material(
                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                      geometry_ : 
                                                                        IndexedFaceSet(
                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                          creaseAngle_ : 0.5,
                                                                          solid_ : false,
                                                                          color_ : 
                                                                            ColorRGBA(
                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                    Billboard(
                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          geometry_ : 
                                                                            Text(
                                                                              string_ : MFString([SFString("118")]),
                                                                              fontStyle_ : 
                                                                                FontStyle(
                                                                                  size_ : 0.035)))])]),

                                                                Shape(
                                                                  geometry_ : 
                                                                    LineSet(
                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([-0.100035,0.00982,0.1197]),SFVec3f([-0.0985,0.01192,0.11047])]))))])])])])])])]),

                                    HAnimJoint(
                                      name_ : SFString('r_calcaneocuboid'),
                                      DEF_ : SFString('hanim_r_calcaneocuboid'),
                                      center_ : SFVec3f([SFDouble(-0.088717), SFDouble(0.05798), SFDouble(-0.025965)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('r_calcaneus'),
                                          DEF_ : SFString('hanim_r_calcaneus'),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.088717,0.05798,-0.025965]),SFVec3f([-0.08845,0.09544,-0.01045])]))))]),

                                        HAnimJoint(
                                          name_ : SFString('r_transversetarsal'),
                                          DEF_ : SFString('hanim_r_transversetarsal'),
                                          center_ : SFVec3f([SFDouble(-0.11027), SFDouble(0.03528), SFDouble(0.0021)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_cuboid'),
                                              DEF_ : SFString('hanim_r_cuboid'),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.11027,0.03528,0.0021]),SFVec3f([-0.088717,0.05798,-0.025965])]))))]),

                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_4'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_4'),
                                              center_ : SFVec3f([SFDouble(-0.10613), SFDouble(0.02454), SFDouble(0.03843)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_metatarsal_4'),
                                                  DEF_ : SFString('hanim_r_metatarsal_4'),
                                                  children_ : [
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.10613,0.02454,0.03843]),SFVec3f([-0.11027,0.03528,0.0021])]))))]),

                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_4'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_4'),
                                                  center_ : SFVec3f([SFDouble(-0.1095), SFDouble(0.01435), SFDouble(0.09117)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('r_tarsal_proximal_phalanx_4'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_4'),
                                                      children_ : [
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-0.1095,0.01435,0.09117]),SFVec3f([-0.10613,0.02454,0.03843])]))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_4'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_4'),
                                                      center_ : SFVec3f([SFDouble(-0.11378), SFDouble(0.01224), SFDouble(0.1063)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('r_tarsal_middle_phalanx_4'),
                                                          DEF_ : SFString('hanim_r_tarsal_middle_phalanx_4'),
                                                          children_ : [
                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([-0.11378,0.01224,0.1063]),SFVec3f([-0.1095,0.01435,0.09117])]))))]),

                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_4'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_4'),
                                                          center_ : SFVec3f([SFDouble(-0.1153), SFDouble(0.00937), SFDouble(0.11369)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('r_tarsal_distal_phalanx_4'),
                                                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_4'),
                                                              children_ : [
                                                                HAnimSite(
                                                                  name_ : SFString('r_tarsal_distal_phalanx_4'),
                                                                  DEF_ : SFString('hanim_r_tarsal_distal_phalanx_4_tip'),
                                                                  translation_ : SFVec3f([SFDouble(-0.115), SFDouble(0.016), SFDouble(0.13)]),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('HAnimSite 119 hanim_r_tarsal_distal_phalanx_4_tip')),

                                                                    Shape(
                                                                      appearance_ : 
                                                                        Appearance(
                                                                          material_ : 
                                                                            Material(
                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                      geometry_ : 
                                                                        IndexedFaceSet(
                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                          creaseAngle_ : 0.5,
                                                                          solid_ : false,
                                                                          color_ : 
                                                                            ColorRGBA(
                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                    Billboard(
                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          geometry_ : 
                                                                            Text(
                                                                              string_ : MFString([SFString("119")]),
                                                                              fontStyle_ : 
                                                                                FontStyle(
                                                                                  size_ : 0.035)))])]),

                                                                Shape(
                                                                  geometry_ : 
                                                                    LineSet(
                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([-0.1153,0.00937,0.11369]),SFVec3f([-0.11378,0.01224,0.1063])]))))])])])])]),

                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_5'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_5'),
                                              center_ : SFVec3f([SFDouble(-0.12044), SFDouble(0.020945), SFDouble(0.03474)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_metatarsal_5'),
                                                  DEF_ : SFString('hanim_r_metatarsal_5'),
                                                  children_ : [
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.12044,0.020945,0.03474]),SFVec3f([-0.11027,0.03528,0.0021])]))))]),

                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_5'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_5'),
                                                  center_ : SFVec3f([SFDouble(-0.12368), SFDouble(0.01367), SFDouble(0.08656)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('r_tarsal_proximal_phalanx_5'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_5'),
                                                      children_ : [
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-0.12368,0.01367,0.08656]),SFVec3f([-0.12044,0.020945,0.03474])]))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_5'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_5'),
                                                      center_ : SFVec3f([SFDouble(-0.126), SFDouble(0.01086), SFDouble(0.09414)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('r_tarsal_middle_phalanx_5'),
                                                          DEF_ : SFString('hanim_r_tarsal_middle_phalanx_5'),
                                                          children_ : [
                                                            HAnimSite(
                                                              name_ : SFString('r_metatarsal_phalanx_5'),
                                                              DEF_ : SFString('hanim_r_metatarsal_phalanx_5_pt'),
                                                              translation_ : SFVec3f([SFDouble(-0.12), SFDouble(0.02), SFDouble(0.04)]),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite 60 hanim_r_metatarsal_phalanx_5_pt')),

                                                                Shape(
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      material_ : 
                                                                        Material(
                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                  geometry_ : 
                                                                    IndexedFaceSet(
                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                      creaseAngle_ : 0.5,
                                                                      solid_ : false,
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                Billboard(
                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      geometry_ : 
                                                                        Text(
                                                                          string_ : MFString([SFString("60")]),
                                                                          fontStyle_ : 
                                                                            FontStyle(
                                                                              size_ : 0.035)))])]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([-0.126,0.01086,0.09414]),SFVec3f([-0.12368,0.01367,0.08656])]))))]),

                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_5'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_5'),
                                                          center_ : SFVec3f([SFDouble(-0.1269), SFDouble(0.00856), SFDouble(0.10188)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('r_tarsal_distal_phalanx_5'),
                                                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_5'),
                                                              children_ : [
                                                                HAnimSite(
                                                                  name_ : SFString('r_tarsal_distal_phalanx_5'),
                                                                  DEF_ : SFString('hanim_r_tarsal_distal_phalanx_5_tip'),
                                                                  translation_ : SFVec3f([SFDouble(-0.125), SFDouble(0.016), SFDouble(0.115)]),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('HAnimSite 120 hanim_r_tarsal_distal_phalanx_5_tip')),

                                                                    Shape(
                                                                      appearance_ : 
                                                                        Appearance(
                                                                          material_ : 
                                                                            Material(
                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                      geometry_ : 
                                                                        IndexedFaceSet(
                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                          creaseAngle_ : 0.5,
                                                                          solid_ : false,
                                                                          color_ : 
                                                                            ColorRGBA(
                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                    Billboard(
                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          geometry_ : 
                                                                            Text(
                                                                              string_ : MFString([SFString("120")]),
                                                                              fontStyle_ : 
                                                                                FontStyle(
                                                                                  size_ : 0.035)))])]),

                                                                Shape(
                                                                  geometry_ : 
                                                                    LineSet(
                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([-0.1269,0.00856,0.10188]),SFVec3f([-0.126,0.01086,0.09414])]))))])])])])])])])])])])]),

                    HAnimJoint(
                      name_ : SFString('vl5'),
                      DEF_ : SFString('hanim_vl5'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(0.9254), SFDouble(-0.01376)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('l5'),
                          DEF_ : SFString('hanim_l5'),
                          children_ : [
                            HAnimSite(
                              name_ : SFString('spine_1_middle_back'),
                              DEF_ : SFString('hanim_spine_1_middle_back_pt'),
                              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(-0.1)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite 24 hanim_spine_1_middle_back_pt')),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      solid_ : false,
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                Billboard(
                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        Text(
                                          string_ : MFString([SFString("24")]),
                                          fontStyle_ : 
                                            FontStyle(
                                              size_ : 0.035)))])]),

                            HAnimSite(
                              name_ : SFString('spine_2_lower_back'),
                              DEF_ : SFString('hanim_spine_2_lower_back_pt'),
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.95), SFDouble(-0.1)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite 25 hanim_spine_2_lower_back_pt')),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      solid_ : false,
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                Billboard(
                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        Text(
                                          string_ : MFString([SFString("25")]),
                                          fontStyle_ : 
                                            FontStyle(
                                              size_ : 0.035)))])]),

                            HAnimSite(
                              name_ : SFString('waist_preferred_anterior'),
                              DEF_ : SFString('hanim_waist_preferred_anterior_pt'),
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0.1)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite 26 hanim_waist_preferred_anterior_pt')),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      solid_ : false,
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                Billboard(
                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        Text(
                                          string_ : MFString([SFString("26")]),
                                          fontStyle_ : 
                                            FontStyle(
                                              size_ : 0.035)))])]),

                            HAnimSite(
                              name_ : SFString('waist_preferred_posterior'),
                              DEF_ : SFString('hanim_waist_preferred_posterior_pt'),
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(-0.1)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite 27 hanim_waist_preferred_posterior_pt')),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      solid_ : false,
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                Billboard(
                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        Text(
                                          string_ : MFString([SFString("27")]),
                                          fontStyle_ : 
                                            FontStyle(
                                              size_ : 0.035)))])]),

                            HAnimSite(
                              name_ : SFString('navel'),
                              DEF_ : SFString('hanim_navel_pt'),
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(-0.1)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite 84 hanim_navel_pt')),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      solid_ : false,
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                Billboard(
                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        Text(
                                          string_ : MFString([SFString("84")]),
                                          fontStyle_ : 
                                            FontStyle(
                                              size_ : 0.035)))])]),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9254,-0.01376]),SFVec3f([0,0.77,0])]))))]),

                        HAnimJoint(
                          name_ : SFString('vl4'),
                          DEF_ : SFString('hanim_vl4'),
                          center_ : SFVec3f([SFDouble(0), SFDouble(0.9497), SFDouble(-0.01376)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('l4'),
                              DEF_ : SFString('hanim_l4'),
                              children_ : [
                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.9497,-0.01376]),SFVec3f([0,0.9254,-0.01376])]))))]),

                            HAnimJoint(
                              name_ : SFString('vl3'),
                              DEF_ : SFString('hanim_vl3'),
                              center_ : SFVec3f([SFDouble(0), SFDouble(0.9659), SFDouble(-0.01376)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('l3'),
                                  DEF_ : SFString('hanim_l3'),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          color_ : 
                                            ColorRGBA(
                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0.9659,-0.01376]),SFVec3f([0,0.9497,-0.01376])]))))]),

                                HAnimJoint(
                                  name_ : SFString('vl2'),
                                  DEF_ : SFString('hanim_vl2'),
                                  center_ : SFVec3f([SFDouble(0), SFDouble(0.98235), SFDouble(-0.01376)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l2'),
                                      DEF_ : SFString('hanim_l2'),
                                      children_ : [
                                        HAnimSite(
                                          name_ : SFString('l_rib10'),
                                          DEF_ : SFString('hanim_l_rib10_pt'),
                                          translation_ : SFVec3f([SFDouble(0.09), SFDouble(1), SFDouble(0.04)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite 28 hanim_l_rib10_pt')),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  solid_ : false,
                                                  color_ : 
                                                    ColorRGBA(
                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                            Billboard(
                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    Text(
                                                      string_ : MFString([SFString("28")]),
                                                      fontStyle_ : 
                                                        FontStyle(
                                                          size_ : 0.035)))])]),

                                        HAnimSite(
                                          name_ : SFString('r_rib10'),
                                          DEF_ : SFString('hanim_r_rib10_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.09), SFDouble(1), SFDouble(0.04)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite 30 hanim_r_rib10_pt')),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  solid_ : false,
                                                  color_ : 
                                                    ColorRGBA(
                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                            Billboard(
                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    Text(
                                                      string_ : MFString([SFString("30")]),
                                                      fontStyle_ : 
                                                        FontStyle(
                                                          size_ : 0.035)))])]),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,0.98235,-0.01376]),SFVec3f([0,0.9659,-0.01376])]))))]),

                                    HAnimJoint(
                                      name_ : SFString('vl1'),
                                      DEF_ : SFString('hanim_vl1'),
                                      center_ : SFVec3f([SFDouble(0), SFDouble(0.99967), SFDouble(-0.01376)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l1'),
                                          DEF_ : SFString('hanim_l1'),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,0.99967,-0.01376]),SFVec3f([0,0.98235,-0.01376])]))))]),

                                        HAnimJoint(
                                          name_ : SFString('vt12'),
                                          DEF_ : SFString('hanim_vt12'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.0231), SFDouble(-0.01376)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('t12'),
                                              DEF_ : SFString('hanim_t12'),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0,1.0231,-0.01376]),SFVec3f([0,0.99967,-0.01376])]))))]),

                                            HAnimJoint(
                                              name_ : SFString('vt11'),
                                              DEF_ : SFString('hanim_vt11'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.0467), SFDouble(-0.01376)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('t11'),
                                                  DEF_ : SFString('hanim_t11'),
                                                  children_ : [
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0,1.0467,-0.01376]),SFVec3f([0,1.0231,-0.01376])]))))]),

                                                HAnimJoint(
                                                  name_ : SFString('vt10'),
                                                  DEF_ : SFString('hanim_vt10'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.0638), SFDouble(-0.01378)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('t10'),
                                                      DEF_ : SFString('hanim_t10'),
                                                      children_ : [
                                                        HAnimSite(
                                                          name_ : SFString('substernale'),
                                                          DEF_ : SFString('hanim_substernale_pt'),
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.08), SFDouble(0.076)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite 13 hanim_substernale_pt')),

                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  material_ : 
                                                                    Material(
                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                              geometry_ : 
                                                                IndexedFaceSet(
                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                  creaseAngle_ : 0.5,
                                                                  solid_ : false,
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                            Billboard(
                                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                              children_ : [
                                                                Shape(
                                                                  geometry_ : 
                                                                    Text(
                                                                      string_ : MFString([SFString("13")]),
                                                                      fontStyle_ : 
                                                                        FontStyle(
                                                                          size_ : 0.035)))])]),

                                                        HAnimSite(
                                                          name_ : SFString('mesosternale'),
                                                          DEF_ : SFString('hanim_mesosternale_pt'),
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.15), SFDouble(0.076)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite 88 hanim_mesosternale_pt')),

                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  material_ : 
                                                                    Material(
                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                              geometry_ : 
                                                                IndexedFaceSet(
                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                  creaseAngle_ : 0.5,
                                                                  solid_ : false,
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                            Billboard(
                                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                              children_ : [
                                                                Shape(
                                                                  geometry_ : 
                                                                    Text(
                                                                      string_ : MFString([SFString("88")]),
                                                                      fontStyle_ : 
                                                                        FontStyle(
                                                                          size_ : 0.035)))])]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0,1.0638,-0.01378]),SFVec3f([0,1.0467,-0.01376])]))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('vt9'),
                                                      DEF_ : SFString('hanim_vt9'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.0784), SFDouble(-0.01376)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('t9'),
                                                          DEF_ : SFString('hanim_t9'),
                                                          children_ : [
                                                            HAnimSite(
                                                              name_ : SFString('l_thelion'),
                                                              DEF_ : SFString('hanim_l_thelion_pt'),
                                                              translation_ : SFVec3f([SFDouble(0.07), SFDouble(1.12), SFDouble(0.09)]),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite 29 hanim_l_thelion_pt')),

                                                                Shape(
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      material_ : 
                                                                        Material(
                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                  geometry_ : 
                                                                    IndexedFaceSet(
                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                      creaseAngle_ : 0.5,
                                                                      solid_ : false,
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                Billboard(
                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      geometry_ : 
                                                                        Text(
                                                                          string_ : MFString([SFString("29")]),
                                                                          fontStyle_ : 
                                                                            FontStyle(
                                                                              size_ : 0.035)))])]),

                                                            HAnimSite(
                                                              name_ : SFString('r_thelion'),
                                                              DEF_ : SFString('hanim_r_thelion_pt'),
                                                              translation_ : SFVec3f([SFDouble(-0.07), SFDouble(1.12), SFDouble(0.09)]),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite 31 hanim_r_thelion_pt')),

                                                                Shape(
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      material_ : 
                                                                        Material(
                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                  geometry_ : 
                                                                    IndexedFaceSet(
                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                      creaseAngle_ : 0.5,
                                                                      solid_ : false,
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                Billboard(
                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      geometry_ : 
                                                                        Text(
                                                                          string_ : MFString([SFString("31")]),
                                                                          fontStyle_ : 
                                                                            FontStyle(
                                                                              size_ : 0.035)))])]),

                                                            HAnimSite(
                                                              name_ : SFString('rear_center_midsagittal_plane'),
                                                              DEF_ : SFString('hanim_rear_center_midsagittal_plane_pt'),
                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.1), SFDouble(-0.1)]),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite 92 hanim_rear_center_midsagittal_plane_pt')),

                                                                Shape(
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      material_ : 
                                                                        Material(
                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                  geometry_ : 
                                                                    IndexedFaceSet(
                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                      creaseAngle_ : 0.5,
                                                                      solid_ : false,
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                Billboard(
                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      geometry_ : 
                                                                        Text(
                                                                          string_ : MFString([SFString("92")]),
                                                                          fontStyle_ : 
                                                                            FontStyle(
                                                                              size_ : 0.035)))])]),

                                                            HAnimSite(
                                                              name_ : SFString('l_chest_midsagittal_plane'),
                                                              DEF_ : SFString('hanim_l_chest_midsagittal_plane_pt'),
                                                              translation_ : SFVec3f([SFDouble(0.13), SFDouble(1.12), SFDouble(0)]),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite 94 hanim_l_chest_midsagittal_plane_pt')),

                                                                Shape(
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      material_ : 
                                                                        Material(
                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                  geometry_ : 
                                                                    IndexedFaceSet(
                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                      creaseAngle_ : 0.5,
                                                                      solid_ : false,
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                Billboard(
                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      geometry_ : 
                                                                        Text(
                                                                          string_ : MFString([SFString("94")]),
                                                                          fontStyle_ : 
                                                                            FontStyle(
                                                                              size_ : 0.035)))])]),

                                                            HAnimSite(
                                                              name_ : SFString('r_chest_midsagittal_plane'),
                                                              DEF_ : SFString('hanim_r_chest_midsagittal_plane_pt'),
                                                              translation_ : SFVec3f([SFDouble(-0.13), SFDouble(1.12), SFDouble(0)]),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite 95 hanim_r_chest_midsagittal_plane_pt')),

                                                                Shape(
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      material_ : 
                                                                        Material(
                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                  geometry_ : 
                                                                    IndexedFaceSet(
                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                      creaseAngle_ : 0.5,
                                                                      solid_ : false,
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                Billboard(
                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      geometry_ : 
                                                                        Text(
                                                                          string_ : MFString([SFString("95")]),
                                                                          fontStyle_ : 
                                                                            FontStyle(
                                                                              size_ : 0.035)))])]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0,1.0784,-0.01376]),SFVec3f([0,1.0638,-0.01378])]))))]),

                                                        HAnimJoint(
                                                          name_ : SFString('vt8'),
                                                          DEF_ : SFString('hanim_vt8'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.093), SFDouble(-0.01376)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('t8'),
                                                              DEF_ : SFString('hanim_t8'),
                                                              children_ : [
                                                                Shape(
                                                                  geometry_ : 
                                                                    LineSet(
                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0,1.093,-0.01376]),SFVec3f([0,1.0784,-0.01376])]))))]),

                                                            HAnimJoint(
                                                              name_ : SFString('vt7'),
                                                              DEF_ : SFString('hanim_vt7'),
                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.1088), SFDouble(-0.01376)]),
                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('t7'),
                                                                  DEF_ : SFString('hanim_t7'),
                                                                  children_ : [
                                                                    Shape(
                                                                      geometry_ : 
                                                                        LineSet(
                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                          color_ : 
                                                                            ColorRGBA(
                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0,1.1088,-0.01376]),SFVec3f([0,1.093,-0.01376])]))))]),

                                                                HAnimJoint(
                                                                  name_ : SFString('vt6'),
                                                                  DEF_ : SFString('hanim_vt6'),
                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.1216), SFDouble(-0.01376)]),
                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      name_ : SFString('t6'),
                                                                      DEF_ : SFString('hanim_t6'),
                                                                      children_ : [
                                                                        Shape(
                                                                          geometry_ : 
                                                                            LineSet(
                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                              color_ : 
                                                                                ColorRGBA(
                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                              coord_ : 
                                                                                Coordinate(
                                                                                  point_ : MFVec3f([SFVec3f([0,1.1216,-0.01376]),SFVec3f([0,1.1088,-0.01376])]))))]),

                                                                    HAnimJoint(
                                                                      name_ : SFString('vt5'),
                                                                      DEF_ : SFString('hanim_vt5'),
                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.137), SFDouble(-0.01376)]),
                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                      children_ : [
                                                                        HAnimSegment(
                                                                          name_ : SFString('t5'),
                                                                          DEF_ : SFString('hanim_t5'),
                                                                          children_ : [
                                                                            Shape(
                                                                              geometry_ : 
                                                                                LineSet(
                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                  color_ : 
                                                                                    ColorRGBA(
                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                  coord_ : 
                                                                                    Coordinate(
                                                                                      point_ : MFVec3f([SFVec3f([0,1.137,-0.01376]),SFVec3f([0,1.1216,-0.01376])]))))]),

                                                                        HAnimJoint(
                                                                          name_ : SFString('vt4'),
                                                                          DEF_ : SFString('hanim_vt4'),
                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.1524), SFDouble(-0.01376)]),
                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                          children_ : [
                                                                            HAnimSegment(
                                                                              name_ : SFString('t4'),
                                                                              DEF_ : SFString('hanim_t4'),
                                                                              children_ : [
                                                                                Shape(
                                                                                  geometry_ : 
                                                                                    LineSet(
                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                      color_ : 
                                                                                        ColorRGBA(
                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                      coord_ : 
                                                                                        Coordinate(
                                                                                          point_ : MFVec3f([SFVec3f([0,1.1524,-0.01376]),SFVec3f([0,1.137,-0.01376])]))))]),

                                                                            HAnimJoint(
                                                                              name_ : SFString('vt3'),
                                                                              DEF_ : SFString('hanim_vt3'),
                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.1709), SFDouble(-0.01376)]),
                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                              children_ : [
                                                                                HAnimSegment(
                                                                                  name_ : SFString('t3'),
                                                                                  DEF_ : SFString('hanim_t3'),
                                                                                  children_ : [
                                                                                    Shape(
                                                                                      geometry_ : 
                                                                                        LineSet(
                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                          color_ : 
                                                                                            ColorRGBA(
                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                          coord_ : 
                                                                                            Coordinate(
                                                                                              point_ : MFVec3f([SFVec3f([0,1.1709,-0.01376]),SFVec3f([0,1.1524,-0.01376])]))))]),

                                                                                HAnimJoint(
                                                                                  name_ : SFString('vt2'),
                                                                                  DEF_ : SFString('hanim_vt2'),
                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.1956), SFDouble(-0.01378)]),
                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                  children_ : [
                                                                                    HAnimSegment(
                                                                                      name_ : SFString('t2'),
                                                                                      DEF_ : SFString('hanim_t2'),
                                                                                      children_ : [
                                                                                        Shape(
                                                                                          geometry_ : 
                                                                                            LineSet(
                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                              color_ : 
                                                                                                ColorRGBA(
                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                              coord_ : 
                                                                                                Coordinate(
                                                                                                  point_ : MFVec3f([SFVec3f([0,1.1956,-0.01378]),SFVec3f([0,1.1709,-0.01376])]))))]),

                                                                                    HAnimJoint(
                                                                                      name_ : SFString('vt1'),
                                                                                      DEF_ : SFString('hanim_vt1'),
                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.22), SFDouble(-0.0138)]),
                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                      children_ : [
                                                                                        HAnimSegment(
                                                                                          name_ : SFString('t1'),
                                                                                          DEF_ : SFString('hanim_t1'),
                                                                                          children_ : [
                                                                                            HAnimSite(
                                                                                              name_ : SFString('suprasternale'),
                                                                                              DEF_ : SFString('hanim_suprasternale_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.22), SFDouble(0.08)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite 12 hanim_suprasternale_pt')),

                                                                                                Shape(
                                                                                                  appearance_ : 
                                                                                                    Appearance(
                                                                                                      material_ : 
                                                                                                        Material(
                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                  geometry_ : 
                                                                                                    IndexedFaceSet(
                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                      creaseAngle_ : 0.5,
                                                                                                      solid_ : false,
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                Billboard(
                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        Text(
                                                                                                          string_ : MFString([SFString("12")]),
                                                                                                          fontStyle_ : 
                                                                                                            FontStyle(
                                                                                                              size_ : 0.035)))])]),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('cervicale'),
                                                                                              DEF_ : SFString('hanim_cervicale_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.22), SFDouble(-0.08)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite 10 hanim_cervicale_pt')),

                                                                                                Shape(
                                                                                                  appearance_ : 
                                                                                                    Appearance(
                                                                                                      material_ : 
                                                                                                        Material(
                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                  geometry_ : 
                                                                                                    IndexedFaceSet(
                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                      creaseAngle_ : 0.5,
                                                                                                      solid_ : false,
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                Billboard(
                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        Text(
                                                                                                          string_ : MFString([SFString("10")]),
                                                                                                          fontStyle_ : 
                                                                                                            FontStyle(
                                                                                                              size_ : 0.035)))])]),

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0,1.22,-0.0138]),SFVec3f([0,1.1956,-0.01378])]))))]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('vc7'),
                                                                                          DEF_ : SFString('hanim_vc7'),
                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.2453), SFDouble(-0.01506)]),
                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('c7'),
                                                                                              DEF_ : SFString('hanim_c7'),
                                                                                              children_ : [
                                                                                                HAnimSite(
                                                                                                  name_ : SFString('l_neck_base'),
                                                                                                  DEF_ : SFString('hanim_l_neck_base_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.06), SFDouble(1.26), SFDouble(0)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite 82 hanim_l_neck_base_pt')),

                                                                                                    Shape(
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          material_ : 
                                                                                                            Material(
                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                      geometry_ : 
                                                                                                        IndexedFaceSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                          creaseAngle_ : 0.5,
                                                                                                          solid_ : false,
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                    Billboard(
                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            Text(
                                                                                                              string_ : MFString([SFString("82")]),
                                                                                                              fontStyle_ : 
                                                                                                                FontStyle(
                                                                                                                  size_ : 0.035)))])]),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('r_neck_base'),
                                                                                                  DEF_ : SFString('hanim_r_neck_base_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.06), SFDouble(1.26), SFDouble(0)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite 83 hanim_r_neck_base_pt')),

                                                                                                    Shape(
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          material_ : 
                                                                                                            Material(
                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                      geometry_ : 
                                                                                                        IndexedFaceSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                          creaseAngle_ : 0.5,
                                                                                                          solid_ : false,
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                    Billboard(
                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            Text(
                                                                                                              string_ : MFString([SFString("83")]),
                                                                                                              fontStyle_ : 
                                                                                                                FontStyle(
                                                                                                                  size_ : 0.035)))])]),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0,1.2453,-0.01506]),SFVec3f([0,1.22,-0.0138])]))))]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('vc6'),
                                                                                              DEF_ : SFString('hanim_vc6'),
                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.2575), SFDouble(-0.01506)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('c6'),
                                                                                                  DEF_ : SFString('hanim_c6'),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0,1.2575,-0.01506]),SFVec3f([0,1.2453,-0.01506])]))))]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('vc5'),
                                                                                                  DEF_ : SFString('hanim_vc5'),
                                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.2699), SFDouble(-0.01506)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('c5'),
                                                                                                      DEF_ : SFString('hanim_c5'),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0,1.2699,-0.01506]),SFVec3f([0,1.2575,-0.01506])]))))]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('vc4'),
                                                                                                      DEF_ : SFString('hanim_vc4'),
                                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.28227), SFDouble(-0.01506)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('c4'),
                                                                                                          DEF_ : SFString('hanim_c4'),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0,1.28227,-0.01506]),SFVec3f([0,1.2699,-0.01506])]))))]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('vc3'),
                                                                                                          DEF_ : SFString('hanim_vc3'),
                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.2951), SFDouble(-0.01506)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('c3'),
                                                                                                              DEF_ : SFString('hanim_c3'),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0,1.2951,-0.01506]),SFVec3f([0,1.28227,-0.01506])]))))]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('vc2'),
                                                                                                              DEF_ : SFString('hanim_vc2'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.307), SFDouble(-0.015)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('c2'),
                                                                                                                  DEF_ : SFString('hanim_c2'),
                                                                                                                  children_ : [
                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('adams_apple'),
                                                                                                                      DEF_ : SFString('hanim_adams_apple_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.29), SFDouble(0.04)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite 11 hanim_adams_apple_pt')),

                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              material_ : 
                                                                                                                                Material(
                                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedFaceSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                              creaseAngle_ : 0.5,
                                                                                                                              solid_ : false,
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                        Billboard(
                                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                Text(
                                                                                                                                  string_ : MFString([SFString("11")]),
                                                                                                                                  fontStyle_ : 
                                                                                                                                    FontStyle(
                                                                                                                                      size_ : 0.035)))])]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0,1.307,-0.015]),SFVec3f([0,1.2951,-0.01506])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('vc1'),
                                                                                                                  DEF_ : SFString('hanim_vc1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.3185), SFDouble(-0.0151)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('c1'),
                                                                                                                      DEF_ : SFString('hanim_c1'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0,1.3185,-0.0151]),SFVec3f([0,1.307,-0.015])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('skullbase'),
                                                                                                                      DEF_ : SFString('hanim_skullbase'),
                                                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.3126), SFDouble(-0.0154)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('skull'),
                                                                                                                          DEF_ : SFString('hanim_skull'),
                                                                                                                          children_ : [
                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('skull_vertex'),
                                                                                                                              DEF_ : SFString('hanim_skull_vertex_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.612), SFDouble(-0.03)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite 0 hanim_skull_vertex_pt')),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      solid_ : false,
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                Billboard(
                                                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        Text(
                                                                                                                                          string_ : MFString([SFString("0")]),
                                                                                                                                          fontStyle_ : 
                                                                                                                                            FontStyle(
                                                                                                                                              size_ : 0.035)))])]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('glabella'),
                                                                                                                              DEF_ : SFString('hanim_glabella_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.454), SFDouble(0.128)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite 1 hanim_glabella_pt')),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      solid_ : false,
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                Billboard(
                                                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        Text(
                                                                                                                                          string_ : MFString([SFString("1")]),
                                                                                                                                          fontStyle_ : 
                                                                                                                                            FontStyle(
                                                                                                                                              size_ : 0.035)))])]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('sellion'),
                                                                                                                              DEF_ : SFString('hanim_sellion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.4), SFDouble(0.12)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite 2 hanim_sellion_pt')),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      solid_ : false,
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                Billboard(
                                                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        Text(
                                                                                                                                          string_ : MFString([SFString("2")]),
                                                                                                                                          fontStyle_ : 
                                                                                                                                            FontStyle(
                                                                                                                                              size_ : 0.035)))])]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_infraorbitale'),
                                                                                                                              DEF_ : SFString('hanim_l_infraorbitale_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.039), SFDouble(1.38), SFDouble(0.09)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite 3 hanim_l_infraorbitale_pt')),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      solid_ : false,
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                Billboard(
                                                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        Text(
                                                                                                                                          string_ : MFString([SFString("3")]),
                                                                                                                                          fontStyle_ : 
                                                                                                                                            FontStyle(
                                                                                                                                              size_ : 0.035)))])]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_tragion'),
                                                                                                                              DEF_ : SFString('hanim_l_tragion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1), SFDouble(1.38), SFDouble(0.0282)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite 4 hanim_l_tragion_pt')),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      solid_ : false,
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                Billboard(
                                                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        Text(
                                                                                                                                          string_ : MFString([SFString("4")]),
                                                                                                                                          fontStyle_ : 
                                                                                                                                            FontStyle(
                                                                                                                                              size_ : 0.035)))])]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_infraorbitale'),
                                                                                                                              DEF_ : SFString('hanim_r_infraorbitale_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.039), SFDouble(1.38), SFDouble(0.09)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite 6 hanim_r_infraorbitale_pt')),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      solid_ : false,
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                Billboard(
                                                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        Text(
                                                                                                                                          string_ : MFString([SFString("6")]),
                                                                                                                                          fontStyle_ : 
                                                                                                                                            FontStyle(
                                                                                                                                              size_ : 0.035)))])]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_tragion'),
                                                                                                                              DEF_ : SFString('hanim_r_tragion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1), SFDouble(1.38), SFDouble(0.0282)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite 7 hanim_r_tragion_pt')),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      solid_ : false,
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                Billboard(
                                                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        Text(
                                                                                                                                          string_ : MFString([SFString("7")]),
                                                                                                                                          fontStyle_ : 
                                                                                                                                            FontStyle(
                                                                                                                                              size_ : 0.035)))])]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('nuchale'),
                                                                                                                              DEF_ : SFString('hanim_nuchale_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0039), SFDouble(1.35), SFDouble(-0.16)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite 81 hanim_nuchale_pt')),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      solid_ : false,
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                Billboard(
                                                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        Text(
                                                                                                                                          string_ : MFString([SFString("81")]),
                                                                                                                                          fontStyle_ : 
                                                                                                                                            FontStyle(
                                                                                                                                              size_ : 0.035)))])]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('opisthocranion'),
                                                                                                                              DEF_ : SFString('hanim_opisthocranion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0039), SFDouble(1.4588), SFDouble(-0.18)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite 89 hanim_opisthocranion_pt')),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      solid_ : false,
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                Billboard(
                                                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        Text(
                                                                                                                                          string_ : MFString([SFString("89")]),
                                                                                                                                          fontStyle_ : 
                                                                                                                                            FontStyle(
                                                                                                                                              size_ : 0.035)))])]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_ectocanthus'),
                                                                                                                              DEF_ : SFString('hanim_l_ectocanthus_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.086), SFDouble(1.399), SFDouble(0.074)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite 85 hanim_l_ectocanthus_pt')),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      solid_ : false,
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                Billboard(
                                                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        Text(
                                                                                                                                          string_ : MFString([SFString("85")]),
                                                                                                                                          fontStyle_ : 
                                                                                                                                            FontStyle(
                                                                                                                                              size_ : 0.035)))])]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_ectocanthus'),
                                                                                                                              DEF_ : SFString('hanim_r_ectocanthus_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.086), SFDouble(1.399), SFDouble(0.074)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite 86 hanim_r_ectocanthus_pt')),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      solid_ : false,
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                Billboard(
                                                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        Text(
                                                                                                                                          string_ : MFString([SFString("86")]),
                                                                                                                                          fontStyle_ : 
                                                                                                                                            FontStyle(
                                                                                                                                              size_ : 0.035)))])]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0,1.3126,-0.0154]),SFVec3f([0,1.3185,-0.0151])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyelid_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0505), SFDouble(1.42425), SFDouble(0.03294)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_eyelid'),
                                                                                                                              DEF_ : SFString('hanim_l_eyelid'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_eyelid_tip'),
                                                                                                                                  DEF_ : SFString('hanim_l_eyelid_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(2.64), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_eyelid_tip hanim_l_eyelid_tip')),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          material_ : 
                                                                                                                                            Material(
                                                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedFaceSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                                          solid_ : false,
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                    Billboard(
                                                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            Text(
                                                                                                                                              string_ : MFString([SFString("l_eyelid_tip")]),
                                                                                                                                              fontStyle_ : 
                                                                                                                                                FontStyle(
                                                                                                                                                  size_ : 0.035)))])]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.0505,1.42425,0.03294]),SFVec3f([0,1.3126,-0.0154])]))))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyelid_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0505), SFDouble(1.42425), SFDouble(0.03294)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_eyelid'),
                                                                                                                              DEF_ : SFString('hanim_r_eyelid'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_eyelid_tip'),
                                                                                                                                  DEF_ : SFString('hanim_r_eyelid_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(2.68), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_eyelid_tip hanim_r_eyelid_tip')),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          material_ : 
                                                                                                                                            Material(
                                                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedFaceSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                                          solid_ : false,
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                    Billboard(
                                                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            Text(
                                                                                                                                              string_ : MFString([SFString("r_eyelid_tip")]),
                                                                                                                                              fontStyle_ : 
                                                                                                                                                FontStyle(
                                                                                                                                                  size_ : 0.035)))])]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.0505,1.42425,0.03294]),SFVec3f([0,1.3126,-0.0154])]))))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyeball_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.048127), SFDouble(1.4049), SFDouble(0.08305)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_eyeball'),
                                                                                                                              DEF_ : SFString('hanim_l_eyeball'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_eyeball_tip'),
                                                                                                                                  DEF_ : SFString('hanim_l_eyeball_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(2.72), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_eyeball_tip hanim_l_eyeball_tip')),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          material_ : 
                                                                                                                                            Material(
                                                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedFaceSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                                          solid_ : false,
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                    Billboard(
                                                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            Text(
                                                                                                                                              string_ : MFString([SFString("l_eyeball_tip")]),
                                                                                                                                              fontStyle_ : 
                                                                                                                                                FontStyle(
                                                                                                                                                  size_ : 0.035)))])]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.048127,1.4049,0.08305]),SFVec3f([0,1.3126,-0.0154])]))))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyeball_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.04813), SFDouble(1.4049), SFDouble(0.08305)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_eyeball'),
                                                                                                                              DEF_ : SFString('hanim_r_eyeball'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_eyeball_tip'),
                                                                                                                                  DEF_ : SFString('hanim_r_eyeball_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(2.76), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_eyeball_tip hanim_r_eyeball_tip')),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          material_ : 
                                                                                                                                            Material(
                                                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedFaceSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                                          solid_ : false,
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                    Billboard(
                                                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            Text(
                                                                                                                                              string_ : MFString([SFString("r_eyeball_tip")]),
                                                                                                                                              fontStyle_ : 
                                                                                                                                                FontStyle(
                                                                                                                                                  size_ : 0.035)))])]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.04813,1.4049,0.08305]),SFVec3f([0,1.3126,-0.0154])]))))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyebrow_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.02175), SFDouble(1.4139), SFDouble(0.1069)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_eyebrow'),
                                                                                                                              DEF_ : SFString('hanim_l_eyebrow'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_eyebrow_tip'),
                                                                                                                                  DEF_ : SFString('hanim_l_eyebrow_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(2.8), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_eyebrow_tip hanim_l_eyebrow_tip')),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          material_ : 
                                                                                                                                            Material(
                                                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedFaceSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                                          solid_ : false,
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                    Billboard(
                                                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            Text(
                                                                                                                                              string_ : MFString([SFString("l_eyebrow_tip")]),
                                                                                                                                              fontStyle_ : 
                                                                                                                                                FontStyle(
                                                                                                                                                  size_ : 0.035)))])]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.02175,1.4139,0.1069]),SFVec3f([0,1.3126,-0.0154])]))))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyebrow_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.02175), SFDouble(1.4139), SFDouble(0.10694)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_eyebrow'),
                                                                                                                              DEF_ : SFString('hanim_r_eyebrow'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_eyebrow_tip'),
                                                                                                                                  DEF_ : SFString('hanim_r_eyebrow_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(2.84), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_eyebrow_tip hanim_r_eyebrow_tip')),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          material_ : 
                                                                                                                                            Material(
                                                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedFaceSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                                          solid_ : false,
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                    Billboard(
                                                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            Text(
                                                                                                                                              string_ : MFString([SFString("r_eyebrow_tip")]),
                                                                                                                                              fontStyle_ : 
                                                                                                                                                FontStyle(
                                                                                                                                                  size_ : 0.035)))])]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.02175,1.4139,0.10694]),SFVec3f([0,1.3126,-0.0154])]))))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('temporomandibular'),
                                                                                                                          DEF_ : SFString('hanim_temporomandibular'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.3128), SFDouble(0.01538)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('jaw'),
                                                                                                                              DEF_ : SFString('hanim_jaw'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_gonion'),
                                                                                                                                  DEF_ : SFString('hanim_l_gonion_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.068), SFDouble(1.346), SFDouble(0.033)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite 5 hanim_l_gonion_pt')),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          material_ : 
                                                                                                                                            Material(
                                                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedFaceSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                                          solid_ : false,
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                    Billboard(
                                                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            Text(
                                                                                                                                              string_ : MFString([SFString("5")]),
                                                                                                                                              fontStyle_ : 
                                                                                                                                                FontStyle(
                                                                                                                                                  size_ : 0.035)))])]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_gonion'),
                                                                                                                                  DEF_ : SFString('hanim_r_gonion_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.068), SFDouble(1.346), SFDouble(0.033)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite 8 hanim_r_gonion_pt')),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          material_ : 
                                                                                                                                            Material(
                                                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedFaceSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                                          solid_ : false,
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                    Billboard(
                                                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            Text(
                                                                                                                                              string_ : MFString([SFString("8")]),
                                                                                                                                              fontStyle_ : 
                                                                                                                                                FontStyle(
                                                                                                                                                  size_ : 0.035)))])]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('supramenton'),
                                                                                                                                  DEF_ : SFString('hanim_supramenton_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.32), SFDouble(0.086)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite 9 hanim_supramenton_pt')),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          material_ : 
                                                                                                                                            Material(
                                                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedFaceSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                                          solid_ : false,
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                    Billboard(
                                                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            Text(
                                                                                                                                              string_ : MFString([SFString("9")]),
                                                                                                                                              fontStyle_ : 
                                                                                                                                                FontStyle(
                                                                                                                                                  size_ : 0.035)))])]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('menton'),
                                                                                                                                  DEF_ : SFString('hanim_menton_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.3), SFDouble(0.08)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite 87 hanim_menton_pt')),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          material_ : 
                                                                                                                                            Material(
                                                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedFaceSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                                          solid_ : false,
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                    Billboard(
                                                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            Text(
                                                                                                                                              string_ : MFString([SFString("87")]),
                                                                                                                                              fontStyle_ : 
                                                                                                                                                FontStyle(
                                                                                                                                                  size_ : 0.035)))])]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,1.3128,0.01538]),SFVec3f([0,1.3126,-0.0154])]))))])])])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('l_sternoclavicular'),
                                                                                          DEF_ : SFString('hanim_l_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(0.03847), SFDouble(1.2087), SFDouble(-0.01378)]),
                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('l_clavicle'),
                                                                                              DEF_ : SFString('hanim_l_clavicle'),
                                                                                              children_ : [
                                                                                                HAnimSite(
                                                                                                  name_ : SFString('l_clavicale'),
                                                                                                  DEF_ : SFString('hanim_l_clavicale_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.03), SFDouble(1.2), SFDouble(0.04)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite l_clavicale hanim_l_clavicale_pt')),

                                                                                                    Shape(
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          material_ : 
                                                                                                            Material(
                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                      geometry_ : 
                                                                                                        IndexedFaceSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                          creaseAngle_ : 0.5,
                                                                                                          solid_ : false,
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                    Billboard(
                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            Text(
                                                                                                              string_ : MFString([SFString("l_clavicale")]),
                                                                                                              fontStyle_ : 
                                                                                                                FontStyle(
                                                                                                                  size_ : 0.035)))])]),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.03847,1.2087,-0.01378]),SFVec3f([0,1.22,-0.0138])]))))]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('l_acromioclavicular'),
                                                                                              DEF_ : SFString('hanim_l_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(0.12294), SFDouble(1.191825), SFDouble(-0.0129)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('l_scapula'),
                                                                                                  DEF_ : SFString('hanim_l_scapula'),
                                                                                                  children_ : [
                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_acromion'),
                                                                                                      DEF_ : SFString('hanim_l_acromion_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.15), SFDouble(1.222), SFDouble(-0.02)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite 15 hanim_l_acromion_pt')),

                                                                                                        Shape(
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              solid_ : false,
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                        Billboard(
                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                Text(
                                                                                                                  string_ : MFString([SFString("15")]),
                                                                                                                  fontStyle_ : 
                                                                                                                    FontStyle(
                                                                                                                      size_ : 0.035)))])]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_axilla_proximal'),
                                                                                                      DEF_ : SFString('hanim_l_axilla_proximal_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.15), SFDouble(1.16), SFDouble(0.04)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite 16 hanim_l_axilla_proximal_pt')),

                                                                                                        Shape(
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              solid_ : false,
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                        Billboard(
                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                Text(
                                                                                                                  string_ : MFString([SFString("16")]),
                                                                                                                  fontStyle_ : 
                                                                                                                    FontStyle(
                                                                                                                      size_ : 0.035)))])]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_axilla_distal'),
                                                                                                      DEF_ : SFString('hanim_l_axilla_distal_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.17), SFDouble(1.14), SFDouble(0)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite 17 hanim_l_axilla_distal_pt')),

                                                                                                        Shape(
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              solid_ : false,
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                        Billboard(
                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                Text(
                                                                                                                  string_ : MFString([SFString("17")]),
                                                                                                                  fontStyle_ : 
                                                                                                                    FontStyle(
                                                                                                                      size_ : 0.035)))])]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_axilla_posterior_folds'),
                                                                                                      DEF_ : SFString('hanim_l_axilla_posterior_folds_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.15), SFDouble(1.145), SFDouble(-0.04)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite 18 hanim_l_axilla_posterior_folds_pt')),

                                                                                                        Shape(
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              solid_ : false,
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                        Billboard(
                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                Text(
                                                                                                                  string_ : MFString([SFString("18")]),
                                                                                                                  fontStyle_ : 
                                                                                                                    FontStyle(
                                                                                                                      size_ : 0.035)))])]),

                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0.12294,1.191825,-0.0129]),SFVec3f([0.03847,1.2087,-0.01378])]))))]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('l_shoulder'),
                                                                                                  DEF_ : SFString('hanim_l_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(0.16506), SFDouble(1.17855), SFDouble(-0.00327)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('l_upperarm'),
                                                                                                      DEF_ : SFString('hanim_l_upperarm'),
                                                                                                      children_ : [
                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_humeral_lateral_epicondyle'),
                                                                                                          DEF_ : SFString('hanim_l_humeral_lateral_epicondyle_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.2), SFDouble(0.95), SFDouble(-0.03)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite 63 hanim_l_humeral_lateral_epicondyle_pt')),

                                                                                                            Shape(
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  solid_ : false,
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                            Billboard(
                                                                                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    Text(
                                                                                                                      string_ : MFString([SFString("63")]),
                                                                                                                      fontStyle_ : 
                                                                                                                        FontStyle(
                                                                                                                          size_ : 0.035)))])]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_humeral_medial_epicondyle'),
                                                                                                          DEF_ : SFString('hanim_l_humeral_medial_epicondyle_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.18), SFDouble(0.93), SFDouble(-0.03)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite 64 hanim_l_humeral_medial_epicondyle_pt')),

                                                                                                            Shape(
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  solid_ : false,
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                            Billboard(
                                                                                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    Text(
                                                                                                                      string_ : MFString([SFString("64")]),
                                                                                                                      fontStyle_ : 
                                                                                                                        FontStyle(
                                                                                                                          size_ : 0.035)))])]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_radiale'),
                                                                                                          DEF_ : SFString('hanim_l_radiale_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.2), SFDouble(0.91), SFDouble(-0.03)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite 69 hanim_l_radiale_pt')),

                                                                                                            Shape(
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  solid_ : false,
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                            Billboard(
                                                                                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    Text(
                                                                                                                      string_ : MFString([SFString("69")]),
                                                                                                                      fontStyle_ : 
                                                                                                                        FontStyle(
                                                                                                                          size_ : 0.035)))])]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_bideltoid'),
                                                                                                          DEF_ : SFString('hanim_l_bideltoid_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.225), SFDouble(1.185), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite 96 hanim_l_bideltoid_pt')),

                                                                                                            Shape(
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  solid_ : false,
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                            Billboard(
                                                                                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    Text(
                                                                                                                      string_ : MFString([SFString("96")]),
                                                                                                                      fontStyle_ : 
                                                                                                                        FontStyle(
                                                                                                                          size_ : 0.035)))])]),

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.16506,1.17855,-0.00327]),SFVec3f([0.12294,1.191825,-0.0129])]))))]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('l_elbow'),
                                                                                                      DEF_ : SFString('hanim_l_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(0.18209), SFDouble(0.9288), SFDouble(-0.00563)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('l_forearm'),
                                                                                                          DEF_ : SFString('hanim_l_forearm'),
                                                                                                          children_ : [
                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_radial_styloid'),
                                                                                                              DEF_ : SFString('hanim_l_radial_styloid_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.18), SFDouble(0.725), SFDouble(0.025)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite 71 hanim_l_radial_styloid_pt')),

                                                                                                                Shape(
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      material_ : 
                                                                                                                        Material(
                                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                  geometry_ : 
                                                                                                                    IndexedFaceSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                      solid_ : false,
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                Billboard(
                                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        Text(
                                                                                                                          string_ : MFString([SFString("71")]),
                                                                                                                          fontStyle_ : 
                                                                                                                            FontStyle(
                                                                                                                              size_ : 0.035)))])]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_olecranon'),
                                                                                                              DEF_ : SFString('hanim_l_olecranon_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.2), SFDouble(0.92), SFDouble(-0.03)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite 65 hanim_l_olecranon_pt')),

                                                                                                                Shape(
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      material_ : 
                                                                                                                        Material(
                                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                  geometry_ : 
                                                                                                                    IndexedFaceSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                      solid_ : false,
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                Billboard(
                                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        Text(
                                                                                                                          string_ : MFString([SFString("65")]),
                                                                                                                          fontStyle_ : 
                                                                                                                            FontStyle(
                                                                                                                              size_ : 0.035)))])]),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.18209,0.9288,-0.00563]),SFVec3f([0.16506,1.17855,-0.00327])]))))]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('l_radiocarpal'),
                                                                                                          DEF_ : SFString('hanim_l_radiocarpal'),
                                                                                                          center_ : SFVec3f([SFDouble(0.1819), SFDouble(0.72427), SFDouble(-0.005)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('l_carpal'),
                                                                                                              DEF_ : SFString('hanim_l_carpal'),
                                                                                                              children_ : [
                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_ulnar_styloid'),
                                                                                                                  DEF_ : SFString('hanim_l_ulnar_styloid_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2), SFDouble(0.725), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite 70 hanim_l_ulnar_styloid_pt')),

                                                                                                                    Shape(
                                                                                                                      appearance_ : 
                                                                                                                        Appearance(
                                                                                                                          material_ : 
                                                                                                                            Material(
                                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                      geometry_ : 
                                                                                                                        IndexedFaceSet(
                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                          solid_ : false,
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                    Billboard(
                                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            Text(
                                                                                                                              string_ : MFString([SFString("70")]),
                                                                                                                              fontStyle_ : 
                                                                                                                                FontStyle(
                                                                                                                                  size_ : 0.035)))])]),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1819,0.72427,-0.005]),SFVec3f([0.18209,0.9288,-0.00563])]))))]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_midcarpal_1'),
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_1'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1813), SFDouble(0.706), SFDouble(0.0193)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_trapezium'),
                                                                                                                  DEF_ : SFString('hanim_l_trapezium'),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1813,0.706,0.0193]),SFVec3f([0.1819,0.72427,-0.005])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_1'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1805), SFDouble(0.69255), SFDouble(0.026)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_metacarpal_1'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_1'),
                                                                                                                      children_ : [
                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('l_metacarpal_phalanx_2'),
                                                                                                                          DEF_ : SFString('hanim_l_metacarpal_phalanx_2_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.2), SFDouble(0.665), SFDouble(0.012)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite 75 hanim_l_metacarpal_phalanx_2_pt')),

                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  material_ : 
                                                                                                                                    Material(
                                                                                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedFaceSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                                  solid_ : false,
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                            Billboard(
                                                                                                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    Text(
                                                                                                                                      string_ : MFString([SFString("75")]),
                                                                                                                                      fontStyle_ : 
                                                                                                                                        FontStyle(
                                                                                                                                          size_ : 0.035)))])]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1805,0.69255,0.026]),SFVec3f([0.1813,0.706,0.0193])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_1'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.181), SFDouble(0.6727), SFDouble(0.03577)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_carpal_proximal_phalanx_1'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_phalanx_1'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.181,0.6727,0.03577]),SFVec3f([0.1805,0.69255,0.026])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_interphalangeal_1'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_interphalangeal_1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1826), SFDouble(0.654), SFDouble(0.04966)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_1'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_1'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_1'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_1_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.18), SFDouble(0.64), SFDouble(0.06)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite 101 hanim_l_carpal_distal_phalanx_1_tip')),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          material_ : 
                                                                                                                                            Material(
                                                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedFaceSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                                          solid_ : false,
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                    Billboard(
                                                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            Text(
                                                                                                                                              string_ : MFString([SFString("101")]),
                                                                                                                                              fontStyle_ : 
                                                                                                                                                FontStyle(
                                                                                                                                                  size_ : 0.035)))])]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1826,0.654,0.04966]),SFVec3f([0.181,0.6727,0.03577])]))))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_midcarpal_2'),
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_2'),
                                                                                                              center_ : SFVec3f([SFDouble(0.18128), SFDouble(0.70695), SFDouble(0.00842)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_trapezoid'),
                                                                                                                  DEF_ : SFString('hanim_l_trapezoid'),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.18128,0.70695,0.00842]),SFVec3f([0.1819,0.72427,-0.005])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_2'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_2'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.18128), SFDouble(0.6876), SFDouble(0.0098)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_metacarpal_2'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_2'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.18128,0.6876,0.0098]),SFVec3f([0.18128,0.70695,0.00842])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_2'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1837), SFDouble(0.6372), SFDouble(0.01507)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_carpal_proximal_phalanx_2'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_phalanx_2'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1837,0.6372,0.01507]),SFVec3f([0.18128,0.6876,0.0098])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_2'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.18171), SFDouble(0.6068), SFDouble(0.01418)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_middle_phalanx_2'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_middle_phalanx_2'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.18171,0.6068,0.01418]),SFVec3f([0.1837,0.6372,0.01507])]))))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_2'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_2'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.18067), SFDouble(0.5816), SFDouble(0.01338)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_2'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_2'),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_dactylion'),
                                                                                                                                      DEF_ : SFString('hanim_l_dactylion_pt'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.17), SFDouble(0.558), SFDouble(0.017)]),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('HAnimSite 57 hanim_l_dactylion_pt')),

                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              material_ : 
                                                                                                                                                Material(
                                                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedFaceSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                              creaseAngle_ : 0.5,
                                                                                                                                              solid_ : false,
                                                                                                                                              color_ : 
                                                                                                                                                ColorRGBA(
                                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                        Billboard(
                                                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              geometry_ : 
                                                                                                                                                Text(
                                                                                                                                                  string_ : MFString([SFString("57")]),
                                                                                                                                                  fontStyle_ : 
                                                                                                                                                    FontStyle(
                                                                                                                                                      size_ : 0.035)))])]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_carpal_distal_phalanx_2'),
                                                                                                                                      DEF_ : SFString('hanim_l_carpal_distal_phalanx_2_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.172), SFDouble(0.558), SFDouble(0.017)]),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('HAnimSite 102 hanim_l_carpal_distal_phalanx_2_tip')),

                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              material_ : 
                                                                                                                                                Material(
                                                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedFaceSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                              creaseAngle_ : 0.5,
                                                                                                                                              solid_ : false,
                                                                                                                                              color_ : 
                                                                                                                                                ColorRGBA(
                                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                        Billboard(
                                                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              geometry_ : 
                                                                                                                                                Text(
                                                                                                                                                  string_ : MFString([SFString("102")]),
                                                                                                                                                  fontStyle_ : 
                                                                                                                                                    FontStyle(
                                                                                                                                                      size_ : 0.035)))])]),

                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        LineSet(
                                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.18067,0.5816,0.01338]),SFVec3f([0.18171,0.6068,0.01418])]))))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_midcarpal_3'),
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_3'),
                                                                                                              center_ : SFVec3f([SFDouble(0.18108), SFDouble(0.708525), SFDouble(-0.0048)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_capitate'),
                                                                                                                  DEF_ : SFString('hanim_l_capitate'),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.18108,0.708525,-0.0048]),SFVec3f([0.1819,0.72427,-0.005])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_3'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_3'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.18108), SFDouble(0.6858), SFDouble(-0.00625)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_metacarpal_3'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_3'),
                                                                                                                      children_ : [
                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('l_metacarpal_phalanx_3'),
                                                                                                                          DEF_ : SFString('hanim_l_metacarpal_phalanx_3_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.2), SFDouble(0.665), SFDouble(-0.039)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite 76 hanim_l_metacarpal_phalanx_3_pt')),

                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  material_ : 
                                                                                                                                    Material(
                                                                                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedFaceSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                                  solid_ : false,
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                            Billboard(
                                                                                                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    Text(
                                                                                                                                      string_ : MFString([SFString("76")]),
                                                                                                                                      fontStyle_ : 
                                                                                                                                        FontStyle(
                                                                                                                                          size_ : 0.035)))])]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.18108,0.6858,-0.00625]),SFVec3f([0.18108,0.708525,-0.0048])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_3'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.18369), SFDouble(0.6349), SFDouble(-0.0039)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_carpal_proximal_phalanx_3'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_phalanx_3'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.18369,0.6349,-0.0039]),SFVec3f([0.18108,0.6858,-0.00625])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_3'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.18171), SFDouble(0.6032), SFDouble(-0.0035)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_middle_phalanx_3'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_middle_phalanx_3'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.18171,0.6032,-0.0035]),SFVec3f([0.18369,0.6349,-0.0039])]))))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_3'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1807), SFDouble(0.5753), SFDouble(-0.0037)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_3'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_3'),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_carpal_distal_phalanx_3'),
                                                                                                                                      DEF_ : SFString('hanim_l_carpal_distal_phalanx_3_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.172), SFDouble(0.555), SFDouble(-0.006)]),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('HAnimSite 103 hanim_l_carpal_distal_phalanx_3_tip')),

                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              material_ : 
                                                                                                                                                Material(
                                                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedFaceSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                              creaseAngle_ : 0.5,
                                                                                                                                              solid_ : false,
                                                                                                                                              color_ : 
                                                                                                                                                ColorRGBA(
                                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                        Billboard(
                                                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              geometry_ : 
                                                                                                                                                Text(
                                                                                                                                                  string_ : MFString([SFString("103")]),
                                                                                                                                                  fontStyle_ : 
                                                                                                                                                    FontStyle(
                                                                                                                                                      size_ : 0.035)))])]),

                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        LineSet(
                                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.1807,0.5753,-0.0037]),SFVec3f([0.18171,0.6032,-0.0035])]))))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_midcarpal_4_5'),
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_4_5'),
                                                                                                              center_ : SFVec3f([SFDouble(0.18108), SFDouble(0.70582), SFDouble(-0.02574)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_hamate'),
                                                                                                                  DEF_ : SFString('hanim_l_hamate'),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.18108,0.70582,-0.02574]),SFVec3f([0.1819,0.72427,-0.005])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_4'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_4'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1811), SFDouble(0.68625), SFDouble(-0.0199)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_metacarpal_4'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_4'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1811,0.68625,-0.0199]),SFVec3f([0.18108,0.70582,-0.02574])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_4'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.18369), SFDouble(0.63405), SFDouble(-0.02144)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_carpal_proximal_phalanx_4'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_phalanx_4'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.18369,0.63405,-0.02144]),SFVec3f([0.1811,0.68625,-0.0199])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_4'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1817), SFDouble(0.6066), SFDouble(-0.02064)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_middle_phalanx_4'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_middle_phalanx_4'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1817,0.6066,-0.02064]),SFVec3f([0.18369,0.63405,-0.02144])]))))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_4'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_4'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.18067), SFDouble(0.580725), SFDouble(-0.01977)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_4'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_4'),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_carpal_distal_phalanx_4'),
                                                                                                                                      DEF_ : SFString('hanim_l_carpal_distal_phalanx_4_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.172), SFDouble(0.559), SFDouble(-0.024)]),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('HAnimSite 104 hanim_l_carpal_distal_phalanx_4_tip')),

                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              material_ : 
                                                                                                                                                Material(
                                                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedFaceSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                              creaseAngle_ : 0.5,
                                                                                                                                              solid_ : false,
                                                                                                                                              color_ : 
                                                                                                                                                ColorRGBA(
                                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                        Billboard(
                                                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              geometry_ : 
                                                                                                                                                Text(
                                                                                                                                                  string_ : MFString([SFString("104")]),
                                                                                                                                                  fontStyle_ : 
                                                                                                                                                    FontStyle(
                                                                                                                                                      size_ : 0.035)))])]),

                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        LineSet(
                                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.18067,0.580725,-0.01977]),SFVec3f([0.1817,0.6066,-0.02064])]))))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_carpometacarpal_5'),
                                                                                                              DEF_ : SFString('hanim_l_carpometacarpal_5'),
                                                                                                              center_ : SFVec3f([SFDouble(0.18164), SFDouble(0.68827), SFDouble(-0.03278)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_metacarpal_5'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_5'),
                                                                                                                  children_ : [
                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('l_metacarpal_phalanx_5'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_phalanx_5_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.2), SFDouble(0.665), SFDouble(-0.036)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite 77 hanim_l_metacarpal_phalanx_5_pt')),

                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              material_ : 
                                                                                                                                Material(
                                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedFaceSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                              creaseAngle_ : 0.5,
                                                                                                                              solid_ : false,
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                        Billboard(
                                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                Text(
                                                                                                                                  string_ : MFString([SFString("77")]),
                                                                                                                                  fontStyle_ : 
                                                                                                                                    FontStyle(
                                                                                                                                      size_ : 0.035)))])]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.18164,0.68827,-0.03278]),SFVec3f([0.1819,0.72427,-0.005])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_metacarpophalangeal_5'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpophalangeal_5'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1833), SFDouble(0.6381), SFDouble(-0.037)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_carpal_proximal_phalanx_5'),
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_phalanx_5'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1833,0.6381,-0.037]),SFVec3f([0.18164,0.68827,-0.03278])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpal_proximal_interphalangeal_5'),
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.18166), SFDouble(0.621), SFDouble(-0.03715)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_carpal_middle_phalanx_5'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_middle_phalanx_5'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.18166,0.621,-0.03715]),SFVec3f([0.1833,0.6381,-0.037])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_distal_interphalangeal_5'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1808), SFDouble(0.6023), SFDouble(-0.0369)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_5'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_5'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_5'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_5_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.172), SFDouble(0.58), SFDouble(-0.039)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite 105 hanim_l_carpal_distal_phalanx_5_tip')),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          material_ : 
                                                                                                                                            Material(
                                                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedFaceSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                                          solid_ : false,
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                    Billboard(
                                                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            Text(
                                                                                                                                              string_ : MFString([SFString("105")]),
                                                                                                                                              fontStyle_ : 
                                                                                                                                                FontStyle(
                                                                                                                                                  size_ : 0.035)))])]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1808,0.6023,-0.0369]),SFVec3f([0.18166,0.621,-0.03715])]))))])])])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('r_sternoclavicular'),
                                                                                          DEF_ : SFString('hanim_r_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(-0.03847), SFDouble(1.2087), SFDouble(-0.0138)]),
                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('r_clavicle'),
                                                                                              DEF_ : SFString('hanim_r_clavicle'),
                                                                                              children_ : [
                                                                                                HAnimSite(
                                                                                                  name_ : SFString('r_clavicale'),
                                                                                                  DEF_ : SFString('hanim_r_clavicale_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.03), SFDouble(1.2), SFDouble(0.04)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite r_clavicale hanim_r_clavicale_pt')),

                                                                                                    Shape(
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          material_ : 
                                                                                                            Material(
                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                      geometry_ : 
                                                                                                        IndexedFaceSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                          creaseAngle_ : 0.5,
                                                                                                          solid_ : false,
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                    Billboard(
                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            Text(
                                                                                                              string_ : MFString([SFString("r_clavicale")]),
                                                                                                              fontStyle_ : 
                                                                                                                FontStyle(
                                                                                                                  size_ : 0.035)))])]),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([-0.03847,1.2087,-0.0138]),SFVec3f([0,1.22,-0.0138])]))))]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('r_acromioclavicular'),
                                                                                              DEF_ : SFString('hanim_r_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(-0.1229), SFDouble(1.19182), SFDouble(-0.0129)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('r_scapula'),
                                                                                                  DEF_ : SFString('hanim_r_scapula'),
                                                                                                  children_ : [
                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_acromion'),
                                                                                                      DEF_ : SFString('hanim_r_acromion_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.15), SFDouble(1.222), SFDouble(-0.02)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite 20 hanim_r_acromion_pt')),

                                                                                                        Shape(
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              solid_ : false,
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                        Billboard(
                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                Text(
                                                                                                                  string_ : MFString([SFString("20")]),
                                                                                                                  fontStyle_ : 
                                                                                                                    FontStyle(
                                                                                                                      size_ : 0.035)))])]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_axilla_proximal'),
                                                                                                      DEF_ : SFString('hanim_r_axilla_proximal_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.15), SFDouble(1.16), SFDouble(0.04)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite 21 hanim_r_axilla_proximal_pt')),

                                                                                                        Shape(
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              solid_ : false,
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                        Billboard(
                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                Text(
                                                                                                                  string_ : MFString([SFString("21")]),
                                                                                                                  fontStyle_ : 
                                                                                                                    FontStyle(
                                                                                                                      size_ : 0.035)))])]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_axilla_distal'),
                                                                                                      DEF_ : SFString('hanim_r_axilla_distal_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.17), SFDouble(1.14), SFDouble(0)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite 22 hanim_r_axilla_distal_pt')),

                                                                                                        Shape(
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              solid_ : false,
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                        Billboard(
                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                Text(
                                                                                                                  string_ : MFString([SFString("22")]),
                                                                                                                  fontStyle_ : 
                                                                                                                    FontStyle(
                                                                                                                      size_ : 0.035)))])]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_axilla_posterior_folds'),
                                                                                                      DEF_ : SFString('hanim_r_axilla_posterior_folds_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.15), SFDouble(1.145), SFDouble(-0.04)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite 23 hanim_r_axilla_posterior_folds_pt')),

                                                                                                        Shape(
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              solid_ : false,
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                        Billboard(
                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                Text(
                                                                                                                  string_ : MFString([SFString("23")]),
                                                                                                                  fontStyle_ : 
                                                                                                                    FontStyle(
                                                                                                                      size_ : 0.035)))])]),

                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([-0.1229,1.19182,-0.0129]),SFVec3f([-0.03847,1.2087,-0.0138])]))))]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('r_shoulder'),
                                                                                                  DEF_ : SFString('hanim_r_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.1647), SFDouble(1.17855), SFDouble(-0.00327)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('r_upperarm'),
                                                                                                      DEF_ : SFString('hanim_r_upperarm'),
                                                                                                      children_ : [
                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_humeral_lateral_epicondyle'),
                                                                                                          DEF_ : SFString('hanim_r_humeral_lateral_epicondyle_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.95), SFDouble(-0.03)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite 66 hanim_r_humeral_lateral_epicondyle_pt')),

                                                                                                            Shape(
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  solid_ : false,
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                            Billboard(
                                                                                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    Text(
                                                                                                                      string_ : MFString([SFString("66")]),
                                                                                                                      fontStyle_ : 
                                                                                                                        FontStyle(
                                                                                                                          size_ : 0.035)))])]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_humeral_medial_epicondyle'),
                                                                                                          DEF_ : SFString('hanim_r_humeral_medial_epicondyle_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.18), SFDouble(0.93), SFDouble(-0.03)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite 67 hanim_r_humeral_medial_epicondyle_pt')),

                                                                                                            Shape(
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  solid_ : false,
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                            Billboard(
                                                                                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    Text(
                                                                                                                      string_ : MFString([SFString("67")]),
                                                                                                                      fontStyle_ : 
                                                                                                                        FontStyle(
                                                                                                                          size_ : 0.035)))])]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_radiale'),
                                                                                                          DEF_ : SFString('hanim_r_radiale_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.91), SFDouble(-0.03)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite 72 hanim_r_radiale_pt')),

                                                                                                            Shape(
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  solid_ : false,
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                            Billboard(
                                                                                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    Text(
                                                                                                                      string_ : MFString([SFString("72")]),
                                                                                                                      fontStyle_ : 
                                                                                                                        FontStyle(
                                                                                                                          size_ : 0.035)))])]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_bideltoid'),
                                                                                                          DEF_ : SFString('hanim_r_bideltoid_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.225), SFDouble(1.185), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite 97 hanim_r_bideltoid_pt')),

                                                                                                            Shape(
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  solid_ : false,
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                            Billboard(
                                                                                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    Text(
                                                                                                                      string_ : MFString([SFString("97")]),
                                                                                                                      fontStyle_ : 
                                                                                                                        FontStyle(
                                                                                                                          size_ : 0.035)))])]),

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1647,1.17855,-0.00327]),SFVec3f([-0.1229,1.19182,-0.0129])]))))]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('r_elbow'),
                                                                                                      DEF_ : SFString('hanim_r_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.1817), SFDouble(0.9288), SFDouble(-0.00564)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('r_forearm'),
                                                                                                          DEF_ : SFString('hanim_r_forearm'),
                                                                                                          children_ : [
                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_radial_styloid'),
                                                                                                              DEF_ : SFString('hanim_r_radial_styloid_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.18), SFDouble(0.725), SFDouble(0.025)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite 74 hanim_r_radial_styloid_pt')),

                                                                                                                Shape(
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      material_ : 
                                                                                                                        Material(
                                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                  geometry_ : 
                                                                                                                    IndexedFaceSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                      solid_ : false,
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                Billboard(
                                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        Text(
                                                                                                                          string_ : MFString([SFString("74")]),
                                                                                                                          fontStyle_ : 
                                                                                                                            FontStyle(
                                                                                                                              size_ : 0.035)))])]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_olecranon'),
                                                                                                              DEF_ : SFString('hanim_r_olecranon_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.92), SFDouble(-0.03)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite 68 hanim_r_olecranon_pt')),

                                                                                                                Shape(
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      material_ : 
                                                                                                                        Material(
                                                                                                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                  geometry_ : 
                                                                                                                    IndexedFaceSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                      solid_ : false,
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                Billboard(
                                                                                                                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        Text(
                                                                                                                          string_ : MFString([SFString("68")]),
                                                                                                                          fontStyle_ : 
                                                                                                                            FontStyle(
                                                                                                                              size_ : 0.035)))])]),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1817,0.9288,-0.00564]),SFVec3f([-0.1647,1.17855,-0.00327])]))))]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('r_radiocarpal'),
                                                                                                          DEF_ : SFString('hanim_r_radiocarpal'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.1816), SFDouble(0.7242), SFDouble(-0.005)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('r_carpal'),
                                                                                                              DEF_ : SFString('hanim_r_carpal'),
                                                                                                              children_ : [
                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_ulnar_styloid'),
                                                                                                                  DEF_ : SFString('hanim_r_ulnar_styloid_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.725), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite 73 hanim_r_ulnar_styloid_pt')),

                                                                                                                    Shape(
                                                                                                                      appearance_ : 
                                                                                                                        Appearance(
                                                                                                                          material_ : 
                                                                                                                            Material(
                                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                      geometry_ : 
                                                                                                                        IndexedFaceSet(
                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                          solid_ : false,
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                    Billboard(
                                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            Text(
                                                                                                                              string_ : MFString([SFString("73")]),
                                                                                                                              fontStyle_ : 
                                                                                                                                FontStyle(
                                                                                                                                  size_ : 0.035)))])]),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1816,0.7242,-0.005]),SFVec3f([-0.1817,0.9288,-0.00564])]))))]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_midcarpal_1'),
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_1'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.18097), SFDouble(0.70605), SFDouble(0.0193)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_trapezium'),
                                                                                                                  DEF_ : SFString('hanim_r_trapezium'),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.18097,0.70605,0.0193]),SFVec3f([-0.1816,0.7242,-0.005])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_1'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.18), SFDouble(0.69255), SFDouble(0.02598)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_metacarpal_1'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_1'),
                                                                                                                      children_ : [
                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('r_metacarpal_phalanx_2'),
                                                                                                                          DEF_ : SFString('hanim_r_metacarpal_phalanx_2_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.665), SFDouble(0.012)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite 78 hanim_r_metacarpal_phalanx_2_pt')),

                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  material_ : 
                                                                                                                                    Material(
                                                                                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedFaceSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                                  solid_ : false,
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                            Billboard(
                                                                                                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    Text(
                                                                                                                                      string_ : MFString([SFString("78")]),
                                                                                                                                      fontStyle_ : 
                                                                                                                                        FontStyle(
                                                                                                                                          size_ : 0.035)))])]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.18,0.69255,0.02598]),SFVec3f([-0.18097,0.70605,0.0193])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_1'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.18065), SFDouble(0.67275), SFDouble(0.03577)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_carpal_proximal_phalanx_1'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_phalanx_1'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.18065,0.67275,0.03577]),SFVec3f([-0.18,0.69255,0.02598])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_interphalangeal_1'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_interphalangeal_1'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.18227), SFDouble(0.654), SFDouble(0.0496)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_1'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_1'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_1'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_1_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.18), SFDouble(0.64), SFDouble(0.06)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite 106 hanim_r_carpal_distal_phalanx_1_tip')),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          material_ : 
                                                                                                                                            Material(
                                                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedFaceSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                                          solid_ : false,
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                    Billboard(
                                                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            Text(
                                                                                                                                              string_ : MFString([SFString("106")]),
                                                                                                                                              fontStyle_ : 
                                                                                                                                                FontStyle(
                                                                                                                                                  size_ : 0.035)))])]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.18227,0.654,0.0496]),SFVec3f([-0.18065,0.67275,0.03577])]))))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_midcarpal_2'),
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_2'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.18097), SFDouble(0.70695), SFDouble(0.0084)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_trapezoid'),
                                                                                                                  DEF_ : SFString('hanim_r_trapezoid'),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.18097,0.70695,0.0084]),SFVec3f([-0.1816,0.7242,-0.005])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_2'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_2'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1809), SFDouble(0.6876), SFDouble(0.0097)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_metacarpal_2'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_2'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1809,0.6876,0.0097]),SFVec3f([-0.18097,0.70695,0.0084])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_2'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.18335), SFDouble(0.6372), SFDouble(0.01507)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_carpal_proximal_phalanx_2'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_phalanx_2'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.18335,0.6372,0.01507]),SFVec3f([-0.1809,0.6876,0.0097])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_2'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1813), SFDouble(0.6068), SFDouble(0.01418)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_middle_phalanx_2'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_middle_phalanx_2'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1813,0.6068,0.01418]),SFVec3f([-0.18335,0.6372,0.01507])]))))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_2'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_2'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1803), SFDouble(0.5816), SFDouble(0.01338)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_2'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_2'),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_dactylion'),
                                                                                                                                      DEF_ : SFString('hanim_r_dactylion_pt'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.17), SFDouble(0.558), SFDouble(0.017)]),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('HAnimSite 61 hanim_r_dactylion_pt')),

                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              material_ : 
                                                                                                                                                Material(
                                                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedFaceSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                              creaseAngle_ : 0.5,
                                                                                                                                              solid_ : false,
                                                                                                                                              color_ : 
                                                                                                                                                ColorRGBA(
                                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                        Billboard(
                                                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              geometry_ : 
                                                                                                                                                Text(
                                                                                                                                                  string_ : MFString([SFString("61")]),
                                                                                                                                                  fontStyle_ : 
                                                                                                                                                    FontStyle(
                                                                                                                                                      size_ : 0.035)))])]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_carpal_distal_phalanx_2'),
                                                                                                                                      DEF_ : SFString('hanim_r_carpal_distal_phalanx_2_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.172), SFDouble(0.558), SFDouble(0.017)]),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('HAnimSite 107 hanim_r_carpal_distal_phalanx_2_tip')),

                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              material_ : 
                                                                                                                                                Material(
                                                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedFaceSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                              creaseAngle_ : 0.5,
                                                                                                                                              solid_ : false,
                                                                                                                                              color_ : 
                                                                                                                                                ColorRGBA(
                                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                        Billboard(
                                                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              geometry_ : 
                                                                                                                                                Text(
                                                                                                                                                  string_ : MFString([SFString("107")]),
                                                                                                                                                  fontStyle_ : 
                                                                                                                                                    FontStyle(
                                                                                                                                                      size_ : 0.035)))])]),

                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        LineSet(
                                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1803,0.5816,0.01338]),SFVec3f([-0.1813,0.6068,0.01418])]))))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_midcarpal_3'),
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_3'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.18072), SFDouble(0.708525), SFDouble(-0.004797)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_capitate'),
                                                                                                                  DEF_ : SFString('hanim_r_capitate'),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.18072,0.708525,-0.004797]),SFVec3f([-0.1816,0.7242,-0.005])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_3'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_3'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.18072), SFDouble(0.6858), SFDouble(-0.00625)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_metacarpal_3'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_3'),
                                                                                                                      children_ : [
                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('r_metacarpal_phalanx_3'),
                                                                                                                          DEF_ : SFString('hanim_r_metacarpal_phalanx_3_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.665), SFDouble(0.016)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite 79 hanim_r_metacarpal_phalanx_3_pt')),

                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  material_ : 
                                                                                                                                    Material(
                                                                                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedFaceSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                                  solid_ : false,
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                            Billboard(
                                                                                                                              axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    Text(
                                                                                                                                      string_ : MFString([SFString("79")]),
                                                                                                                                      fontStyle_ : 
                                                                                                                                        FontStyle(
                                                                                                                                          size_ : 0.035)))])]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.18072,0.6858,-0.00625]),SFVec3f([-0.18072,0.708525,-0.004797])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_3'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1833), SFDouble(0.63495), SFDouble(-0.0039)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_carpal_proximal_phalanx_3'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_phalanx_3'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1833,0.63495,-0.0039]),SFVec3f([-0.18072,0.6858,-0.00625])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_3'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1813), SFDouble(0.6032), SFDouble(-0.0035)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_middle_phalanx_3'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_middle_phalanx_3'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1813,0.6032,-0.0035]),SFVec3f([-0.1833,0.63495,-0.0039])]))))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_3'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.18029), SFDouble(0.5753), SFDouble(-0.00375)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_3'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_3'),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_carpal_distal_phalanx_3'),
                                                                                                                                      DEF_ : SFString('hanim_r_carpal_distal_phalanx_3_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.17), SFDouble(0.555), SFDouble(-0.006)]),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('HAnimSite 108 hanim_r_carpal_distal_phalanx_3_tip')),

                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              material_ : 
                                                                                                                                                Material(
                                                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedFaceSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                              creaseAngle_ : 0.5,
                                                                                                                                              solid_ : false,
                                                                                                                                              color_ : 
                                                                                                                                                ColorRGBA(
                                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                        Billboard(
                                                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              geometry_ : 
                                                                                                                                                Text(
                                                                                                                                                  string_ : MFString([SFString("108")]),
                                                                                                                                                  fontStyle_ : 
                                                                                                                                                    FontStyle(
                                                                                                                                                      size_ : 0.035)))])]),

                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        LineSet(
                                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.18029,0.5753,-0.00375]),SFVec3f([-0.1813,0.6032,-0.0035])]))))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_midcarpal_4_5'),
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_4_5'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.18072), SFDouble(0.70583), SFDouble(-0.02574)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_hamate'),
                                                                                                                  DEF_ : SFString('hanim_r_hamate'),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.18072,0.70583,-0.02574]),SFVec3f([-0.1816,0.7242,-0.005])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_4'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_4'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.18072), SFDouble(0.68625), SFDouble(-0.01992)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_metacarpal_4'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_4'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.18072,0.68625,-0.01992]),SFVec3f([-0.18072,0.70583,-0.02574])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_4'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1833), SFDouble(0.63405), SFDouble(-0.02144)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_carpal_proximal_phalanx_4'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_phalanx_4'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1833,0.63405,-0.02144]),SFVec3f([-0.18072,0.68625,-0.01992])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_4'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1813), SFDouble(0.6066), SFDouble(-0.02064)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_middle_phalanx_4'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_middle_phalanx_4'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1813,0.6066,-0.02064]),SFVec3f([-0.1833,0.63405,-0.02144])]))))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_4'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_4'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.18029), SFDouble(0.5807), SFDouble(-0.01978)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_4'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_4'),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_carpal_distal_phalanx_4'),
                                                                                                                                      DEF_ : SFString('hanim_r_carpal_distal_phalanx_4_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.172), SFDouble(0.559), SFDouble(-0.024)]),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('HAnimSite 109 hanim_r_carpal_distal_phalanx_4_tip')),

                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              material_ : 
                                                                                                                                                Material(
                                                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedFaceSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                              creaseAngle_ : 0.5,
                                                                                                                                              solid_ : false,
                                                                                                                                              color_ : 
                                                                                                                                                ColorRGBA(
                                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                        Billboard(
                                                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              geometry_ : 
                                                                                                                                                Text(
                                                                                                                                                  string_ : MFString([SFString("109")]),
                                                                                                                                                  fontStyle_ : 
                                                                                                                                                    FontStyle(
                                                                                                                                                      size_ : 0.035)))])]),

                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        LineSet(
                                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.18029,0.5807,-0.01978]),SFVec3f([-0.1813,0.6066,-0.02064])]))))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_carpometacarpal_5'),
                                                                                                              DEF_ : SFString('hanim_r_carpometacarpal_5'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.18126), SFDouble(0.68827), SFDouble(-0.03278)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_metacarpal_5'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_5'),
                                                                                                                  children_ : [
                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('r_metacarpal_phalanx_5'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_phalanx_5_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.665), SFDouble(-0.036)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite 80 hanim_r_metacarpal_phalanx_5_pt')),

                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              material_ : 
                                                                                                                                Material(
                                                                                                                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedFaceSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                              creaseAngle_ : 0.5,
                                                                                                                              solid_ : false,
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                        Billboard(
                                                                                                                          axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                Text(
                                                                                                                                  string_ : MFString([SFString("80")]),
                                                                                                                                  fontStyle_ : 
                                                                                                                                    FontStyle(
                                                                                                                                      size_ : 0.035)))])]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.18126,0.68827,-0.03278]),SFVec3f([-0.1816,0.7242,-0.005])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_metacarpophalangeal_5'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpophalangeal_5'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.18297), SFDouble(0.6381), SFDouble(-0.0371)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_carpal_proximal_phalanx_5'),
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_phalanx_5'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.18297,0.6381,-0.0371]),SFVec3f([-0.18126,0.68827,-0.03278])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_carpal_proximal_interphalangeal_5'),
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1813), SFDouble(0.621), SFDouble(-0.03715)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_carpal_middle_phalanx_5'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_middle_phalanx_5'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1813,0.621,-0.03715]),SFVec3f([-0.18297,0.6381,-0.0371])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_distal_interphalangeal_5'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.18045), SFDouble(0.602325), SFDouble(-0.03697)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_5'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_5'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_5'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_5_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.172), SFDouble(0.58), SFDouble(-0.039)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite 110 hanim_r_carpal_distal_phalanx_5_tip')),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          material_ : 
                                                                                                                                            Material(
                                                                                                                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedFaceSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                                          solid_ : false,
                                                                                                                                          color_ : 
                                                                                                                                            ColorRGBA(
                                                                                                                                              color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))),

                                                                                                                                    Billboard(
                                                                                                                                      axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            Text(
                                                                                                                                              string_ : MFString([SFString("110")]),
                                                                                                                                              fontStyle_ : 
                                                                                                                                                FontStyle(
                                                                                                                                                  size_ : 0.035)))])]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.18045,0.602325,-0.03697]),SFVec3f([-0.1813,0.621,-0.03715])]))))])])])])])])])])])])])])])])])])])])])])])])])])])])])])]),

            NavigationInfo(
              headlight_ : false),

            Background(
              DEF_ : SFString('Background1'),
              groundColor_ : MFColor([SFColor(0.5), SFColor(0.5), SFColor(0.5)]),
              skyColor_ : MFColor([SFColor(0.4), SFColor(0.4), SFColor(0.4)])),

            DirectionalLight(
              global_ : true),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
              description_ : SFString('JinLOA4'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(3)])),

            Transform(
              DEF_ : SFString('Landmark000'),
              /*Another Parent Scene 0 0 0 landmark*/
              child_ : 
                Shape(
                  DEF_ : SFString('HAnim000Landmark'),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                          emissiveColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]))),
                  geometry_ : 
                    Sphere(
                      radius_ : 0.01)))]));
void main() { exit(0); }
