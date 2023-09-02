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
              content_ : SFString('WinterAndSpringTest.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('May through September 2023')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('2 June 2023')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              info_ : MFString([SFString("X3D Humanoid LOA3 skeleton plus others"), SFString("Lots points")]),
              title_ : SFString('X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations')),

            NavigationInfo(
              DEF_ : SFString('Start_NavigationInfo'),
              headlight_ : false),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
              description_ : SFString('Male'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(-2)])),

            Background(
              DEF_ : SFString('gray_Background')),

            Background(
              DEF_ : SFString('dark_gray_Background')),

            Background(
              DEF_ : SFString('black_Background')),

            Background(
              DEF_ : SFString('blue_Background')),

            SpotLight(
              DEF_ : SFString('light1'),
              ambientIntensity_ : 0.7,
              beamWidth_ : 1.5,
              color_ : SFColor([SFDouble(0.8), SFDouble(0.8), SFDouble(1)]),
              cutOffAngle_ : 0.6,
              direction_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
              location_ : SFVec3f([SFDouble(0), SFDouble(3), SFDouble(3)]),
              radius_ : 10),

            PointLight(
              DEF_ : SFString('light2'),
              ambientIntensity_ : 0.7,
              color_ : SFColor([SFDouble(0.8), SFDouble(0.8), SFDouble(1)]),
              location_ : SFVec3f([SFDouble(0), SFDouble(10), SFDouble(-7)])),
          /*External from the Humanoid viewpoints*/

            Viewpoint(
              DEF_ : SFString('Scene_InclinedView'),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.85), SFDouble(0)]),
              description_ : SFString('Scene_Inclined View'),
              orientation_ : SFRotation([SFDouble(-0.113), SFDouble(0.993), SFDouble(0.0347), SFDouble(0.671)]),
              position_ : SFVec3f([SFDouble(1.62), SFDouble(1.05), SFDouble(3.06)])),

            Viewpoint(
              DEF_ : SFString('Scene_IFrontView'),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(0)]),
              description_ : SFString('Scene_Front View'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(2.58)])),

            Viewpoint(
              DEF_ : SFString('Scene_OldMan_ISideView'),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(0)]),
              description_ : SFString('Scene_Side View'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
              position_ : SFVec3f([SFDouble(-2.6), SFDouble(1.5), SFDouble(1)])),

            Viewpoint(
              DEF_ : SFString('Scene_ISideView'),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(0)]),
              description_ : SFString('Scene_Side View'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
              position_ : SFVec3f([SFDouble(-5), SFDouble(1.5), SFDouble(1)])),

            Viewpoint(
              DEF_ : SFString('Scene_Full_ISideView'),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(0)]),
              description_ : SFString('Scene_Side View'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
              position_ : SFVec3f([SFDouble(-10), SFDouble(1.5), SFDouble(1)])),

            Viewpoint(
              DEF_ : SFString('Scene_OneBush_ISideView'),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(0)]),
              description_ : SFString('Scene_Side View'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
              position_ : SFVec3f([SFDouble(-20), SFDouble(1.5), SFDouble(1)])),

            Viewpoint(
              DEF_ : SFString('Scene_TwoBush_ISideView'),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(0)]),
              description_ : SFString('Scene_Side View'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
              position_ : SFVec3f([SFDouble(-10), SFDouble(1.5), SFDouble(1)])),

            Viewpoint(
              DEF_ : SFString('Scene_BackView'),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0)]),
              description_ : SFString('Scene_Back View'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.14)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(-5)])),

            Viewpoint(
              DEF_ : SFString('Scene_OldMan_BackView'),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0)]),
              description_ : SFString('Scene_Back View'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.14)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(-2.5)])),

            Viewpoint(
              DEF_ : SFString('Scene_Full_BackView'),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0)]),
              description_ : SFString('Scene_Back View'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(15), SFDouble(3.14)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(-20)])),

            Viewpoint(
              DEF_ : SFString('Scene_TopView'),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0)]),
              description_ : SFString('Scene_Top View'),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.5708)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(3.5), SFDouble(0)])),

            Group(
              DEF_ : SFString('OldMan_Humanoid'),
              children_ : [
                HAnimHumanoid(
                  name_ : SFString('Walk'),
                  DEF_ : SFString('OldMan'),
                  loa_ : 3,
                  version_ : SFString('2.0'),
                  metadata_ : [
                    MetadataSet(
                      name_ : SFString('warnings'),
                      reference_ : SFString('HAnim'),
                      value_ : 
                        MetadataString(
                          name_ : SFString('SymmetricalLeftRight'),
                          reference_ : SFString('correction options: ignore, warn, average, left, right, largest, smallest'),
                          value_ : MFString([SFString("ignore")]))),
                  joints_ : [
                    HAnimJoint(
                      name_ : SFString('humanoid_root'),
                      DEF_ : SFString('OldMan_humanoid_root'),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      /*TODO center='x 0.9155 z'*/
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('sacrum'),
                          DEF_ : SFString('OldMan_sacrum'),
                          children_ : [
                            HAnimSite(
                              name_ : SFString('RootBack_view'),
                              DEF_ : SFString('OldMan_RootBack_view'),
                              children_ : [
                                Transform(
                                  DEF_ : SFString('hanimcordsys'),
                                  scale_ : SFVec3f([SFDouble(0.175), SFDouble(0.175), SFDouble(0.175)]),
                                  children_ : [
                                    Viewpoint(
                                      DEF_ : SFString('ViewBodyRootAxes'),
                                      description_ : SFString('Joe_HAnim Root HAnimSite Coordinate Axes View')),
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
                                              point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([1,0,0]),SFVec3f([0,1,0]),SFVec3f([0,0,1])])),
                                          color_ : 
                                            Color(
                                              color_ : MFColor([SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0.6), SFColor(0), SFColor(0), SFColor(0), SFColor(1)]))))],
                                  child_ : 
                                    Shape(
                                      DEF_ : SFString('OldMan_Shape'),
                                      appearance_ : 
                                        Appearance(
                                          DEF_ : SFString('OldMan_skin_Appearance'),
                                          material_ : 
                                            Material(
                                              DEF_ : SFString('OldMan_skin_Material'),
                                              diffuseColor_ : SFColor([SFDouble(0.3), SFDouble(0.3), SFDouble(0.6)]),
                                              emissiveColor_ : SFColor([SFDouble(0.3), SFDouble(0.3), SFDouble(0.6)])),
                                          texture_ : 
                                            ImageTexture(
                                              DEF_ : SFString('OldManSkinImageTexture'),
                                              url_ : MFString([SFString("OldManBodyTexture29.png"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png")])),
                                          textureTransform_ : 
                                            TextureTransform(
                                              DEF_ : SFString('KickTextureTransform'))),
                                      geometry_ : 
                                        IndexedFaceSet(
                                          DEF_ : SFString('OldMan_skin_IndexedFaceSet'))))])]),

                        HAnimJoint(
                          name_ : SFString('sacroiliac'),
                          DEF_ : SFString('OldMan_sacroiliac'),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          /*TODO center='x 0.952 z'*/
                          /*High hip*/
                          children_ : [
                            HAnimJoint(
                              name_ : SFString('l_hip'),
                              DEF_ : SFString('OldMan_l_hip'),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              /*TODO center='x 0.879 z' Low hip*/
                              children_ : [
                                HAnimJoint(
                                  name_ : SFString('l_knee'),
                                  DEF_ : SFString('OldMan_l_knee'),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  /*center='x 0.461 z'*/
                                  children_ : [
                                    HAnimJoint(
                                      name_ : SFString('l_talocrural'),
                                      DEF_ : SFString('OldMan_l_talocrural'),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      /*Ankle*/
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('l_tarsometatarsal_2'),
                                          DEF_ : SFString('Joe_l_tarsometatarsal_2'),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('l_metatarsophalangeal_2'),
                                              DEF_ : SFString('Joe_l_metatarsophalangeal_2'),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('l_tarsal_distal_interphalangeal_2'),
                                                  DEF_ : SFString('Joe_l_tarsal_distal_interphalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(0.115), SFDouble(0.02), SFDouble(0.122)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])]),

                                HAnimJoint(
                                  name_ : SFString('l_hip'),
                                  DEF_ : SFString('OldMan_r_hip'),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  /*Low hip*/
                                  children_ : [
                                    HAnimJoint(
                                      name_ : SFString('l_knee'),
                                      DEF_ : SFString('OldMan_r_knee'),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                    HAnimJoint(
                                      name_ : SFString('l_talocrural'),
                                      DEF_ : SFString('OldMan_r_talocrural'),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      /*Ankle*/
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('r_tarsometatarsal_2'),
                                          DEF_ : SFString('Joe_r_tarsometatarsal_2'),
                                          center_ : SFVec3f([SFDouble(-0.1), SFDouble(0.015), SFDouble(-0.01)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(374), SFInt32(375), SFInt32(376)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('r_metatarsophalangeal_2'),
                                              DEF_ : SFString('Joe_r_metatarsophalangeal_2'),
                                              center_ : SFVec3f([SFDouble(-0.115), SFDouble(0.037), SFDouble(0.09)]),
                                              skinCoordIndex_ : MFInt32([SFInt32(377), SFInt32(378), SFInt32(379), SFInt32(380)]),
                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('r_tarsal_distal_interphalangeal_2'),
                                                  DEF_ : SFString('Joe_r_tarsal_distal_interphalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(-0.1), SFDouble(0.01), SFDouble(0.14)]),
                                                  skinCoordIndex_ : MFInt32([SFInt32(381), SFInt32(382), SFInt32(383), SFInt32(384), SFInt32(385), SFInt32(386), SFInt32(387), SFInt32(388), SFInt32(389)]),
                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])]),

                            HAnimJoint(
                              name_ : SFString('vl5'),
                              DEF_ : SFString('OldMan_vl5'),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              /*Abdomen*/
                              children_ : [
                                HAnimJoint(
                                  name_ : SFString('vl4'),
                                  DEF_ : SFString('MeshName_vl4'),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimJoint(
                                      name_ : SFString('vl3'),
                                      DEF_ : SFString('OldMan_vl3'),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      /*center='x 1.098 z'*/
                                      /*Low=' ist='*/
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('vl2'),
                                          DEF_ : SFString('MeshName_vl2'),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('vl1'),
                                              DEF_ : SFString('OldMan_vl1'),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              /*center='x 1.171 z'*/
                                              /*High waist*/
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('vt12'),
                                                  DEF_ : SFString('MeshName_vt12'),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('vt11'),
                                                      DEF_ : SFString('OldMan_vt11'),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      /*Ribcage='*/
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('vt10'),
                                                          DEF_ : SFString('MeshName_vt10'),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          children_ : [
                                                            HAnimJoint(
                                                              name_ : SFString('vt9'),
                                                              DEF_ : SFString('MeshName_vt9'),
                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                              children_ : [
                                                                HAnimJoint(
                                                                  name_ : SFString('vt8'),
                                                                  DEF_ : SFString('MeshName_vt8'),
                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                  children_ : [
                                                                    HAnimJoint(
                                                                      name_ : SFString('vt7'),
                                                                      DEF_ : SFString('OldMan_vt7'),
                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                      /*Sternum='*/
                                                                      children_ : [
                                                                        HAnimJoint(
                                                                          name_ : SFString('vt6'),
                                                                          DEF_ : SFString('MeshName_vt6'),
                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                          children_ : [
                                                                            HAnimJoint(
                                                                              name_ : SFString('vt5'),
                                                                              DEF_ : SFString('MeshName_vt5'),
                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                              children_ : [
                                                                                HAnimJoint(
                                                                                  name_ : SFString('vt4'),
                                                                                  DEF_ : SFString('OldMan_vt4'),
                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                  /*Chest*/
                                                                                  children_ : [
                                                                                    HAnimJoint(
                                                                                      name_ : SFString('vt3'),
                                                                                      DEF_ : SFString('MeshName_vt3'),
                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                      children_ : [
                                                                                        HAnimJoint(
                                                                                          name_ : SFString('vt2'),
                                                                                          DEF_ : SFString('OldMan_vt2'),
                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          /*High Chest*/
                                                                                          children_ : [
                                                                                            HAnimJoint(
                                                                                              name_ : SFString('vt1'),
                                                                                              DEF_ : SFString('MeshName_vt1'),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              children_ : [
                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('vc7'),
                                                                                                  DEF_ : SFString('OldMan_vc7'),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  /*Low neck*/
                                                                                                  children_ : [
                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('vc6'),
                                                                                                      DEF_ : SFString('MeshName_vc6'),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('vc5'),
                                                                                                          DEF_ : SFString('MeshName_vc5'),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('vc4'),
                                                                                                              DEF_ : SFString('OldMan_vc4'),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              /*Mid=' ck='*/
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('vc3'),
                                                                                                                  DEF_ : SFString('MeshName_vc3'),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('vc2'),
                                                                                                                      DEF_ : SFString('MeshName_vc2'),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('vc1'),
                                                                                                                          DEF_ : SFString('OldMan_vc1'),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          /*High=' ck='*/
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('skullbase'),
                                                                                                                              DEF_ : SFString('OldMan_skullbase'),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              displacers_ : 
                                                                                                                                HAnimDisplacer(
                                                                                                                                  name_ : SFString('skull_tip_raiser_action'),
                                                                                                                                  DEF_ : SFString('Joe_skull_tip_raiser_action'),
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(9)]),
                                                                                                                                  displacements_ : MFVec3f([SFVec3f([0,0.15,0]),SFVec3f([0,0,0.15]),SFVec3f([-0.1,0,0.15]),SFVec3f([0.1,0,0.05]),SFVec3f([0,-0.02,0.05]),SFVec3f([-0.15,0,0]),SFVec3f([-0.05,0,0]),SFVec3f([0.15,0,0]),SFVec3f([0.05,0,0]),SFVec3f([0,0,-0.15])])),
                                                                                                                              children_ : [
                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_eyelid_joint'),
                                                                                                                                  DEF_ : SFString('OldMan_l_eyelid_joint'),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_eyeball_joint'),
                                                                                                                                  DEF_ : SFString('OldMan_l_eyeball_joint'),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_eyebrow_joint'),
                                                                                                                                  DEF_ : SFString('OldMan_l_eyebrow_joint'),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_eyelid_joint'),
                                                                                                                                  DEF_ : SFString('OldMan_r_eyelid_joint'),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_eyeball_joint'),
                                                                                                                                  DEF_ : SFString('OldMan_r_eyeball_joint'),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_eyebrow_joint'),
                                                                                                                                  DEF_ : SFString('OldMan_r_eyebrow_joint'),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('temporomandibular'),
                                                                                                                                  DEF_ : SFString('OldMan_temporomandibular'),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])]),

                                                                                                HAnimJoint(
                                                                                                  DEF_ : SFString('OldMan_l_acromioclavicular'),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('l_acromioclavicular'),
                                                                                                      DEF_ : SFString('OldMan_l_sternoclavicular'),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('l_shoulder'),
                                                                                                          DEF_ : SFString('OldMan_l_shoulder'),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_elbow'),
                                                                                                              DEF_ : SFString('OldMan_l_elbow'),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_radiocarpal'),
                                                                                                                  DEF_ : SFString('OldMan_l_radiocarpal'),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpometacarpal_1'),
                                                                                                                      DEF_ : SFString('OldMan_l_carpometacarpal_1'),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_metacarpophalangeal_1'),
                                                                                                                          DEF_ : SFString('OldMan_l_metacarpophalangeal_1'),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_interphalangeal_1'),
                                                                                                                              DEF_ : SFString('OldMan_l_carpal_interphalangeal_1'),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpometacarpal_2'),
                                                                                                                          DEF_ : SFString('OldMan_l_carpometacarpal_2'),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_metacarpophalangeal_2'),
                                                                                                                              DEF_ : SFString('OldMan_l_metacarpophalangeal_2'),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_carpal_proximal_interphalangeal_2'),
                                                                                                                                  DEF_ : SFString('OldMan_l_carpal_proximal_interphalangeal_2'),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimJoint(
                                                                                                                                      name_ : SFString('l_carpal_distal_interphalangeal_2'),
                                                                                                                                      DEF_ : SFString('OldMan_l_carpal_distal_interphalangeal_2'),
                                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpometacarpal_3'),
                                                                                                                              DEF_ : SFString('OldMan_l_carpometacarpal_3'),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_metacarpophalangeal_3'),
                                                                                                                                  DEF_ : SFString('OldMan_l_metacarpophalangeal_3'),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimJoint(
                                                                                                                                      name_ : SFString('l_carpal_proximal_interphalangeal_3'),
                                                                                                                                      DEF_ : SFString('OldMan_l_carpal_proximal_interphalangeal_3'),
                                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        HAnimJoint(
                                                                                                                                          name_ : SFString('l_carpal_distal_interphalangeal_3'),
                                                                                                                                          DEF_ : SFString('OldMan_l_carpal_distal_interphalangeal_3'),
                                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_carpometacarpal_4'),
                                                                                                                                  DEF_ : SFString('OldMan_l_carpometacarpal_4'),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimJoint(
                                                                                                                                      name_ : SFString('l_metacarpophalangeal_4'),
                                                                                                                                      DEF_ : SFString('OldMan_l_metacarpophalangeal_4'),
                                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        HAnimJoint(
                                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_4'),
                                                                                                                                          DEF_ : SFString('OldMan_l_carpal_proximal_interphalangeal_4'),
                                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                          children_ : [
                                                                                                                                            HAnimJoint(
                                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_4'),
                                                                                                                                              DEF_ : SFString('OldMan_l_carpal_distal_interphalangeal_4'),
                                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])]),

                                                                                                                                    HAnimJoint(
                                                                                                                                      name_ : SFString('l_carpometacarpal_5'),
                                                                                                                                      DEF_ : SFString('OldMan_l_carpometacarpal_5'),
                                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        HAnimJoint(
                                                                                                                                          name_ : SFString('l_metacarpophalangeal_5'),
                                                                                                                                          DEF_ : SFString('OldMan_l_metacarpophalangeal_5'),
                                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                          children_ : [
                                                                                                                                            HAnimJoint(
                                                                                                                                              name_ : SFString('l_carpal_proximal_interphalangeal_5'),
                                                                                                                                              DEF_ : SFString('OldMan_l_carpal_proximal_interphalangeal_5'),
                                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                              children_ : [
                                                                                                                                                HAnimJoint(
                                                                                                                                                  name_ : SFString('l_carpal_distal_interphalangeal_5'),
                                                                                                                                                  DEF_ : SFString('OldMan_l_carpal_distal_interphalangeal_5'),
                                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_sternoclavicular'),
                                                                                                                      DEF_ : SFString('OldMan_r_sternoclavicular'),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_acromioclavicular'),
                                                                                                                          DEF_ : SFString('OldMan_r_acromioclavicular'),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_shoulder'),
                                                                                                                              DEF_ : SFString('OldMan_r_shoulder'),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_elbow'),
                                                                                                                                  DEF_ : SFString('OldMan_r_elbow'),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimJoint(
                                                                                                                                      name_ : SFString('r_radiocarpal'),
                                                                                                                                      DEF_ : SFString('OldMan_r_radiocarpal'),
                                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        HAnimJoint(
                                                                                                                                          name_ : SFString('r_carpometacarpal_1'),
                                                                                                                                          DEF_ : SFString('OldMan_r_carpometacarpal_1'),
                                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                          children_ : [
                                                                                                                                            HAnimJoint(
                                                                                                                                              name_ : SFString('r_metacarpophalangeal_1'),
                                                                                                                                              DEF_ : SFString('OldMan_r_metacarpophalangeal_1'),
                                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                              children_ : [
                                                                                                                                                HAnimJoint(
                                                                                                                                                  name_ : SFString('r_carpal_interphalangeal_1'),
                                                                                                                                                  DEF_ : SFString('OldMan_r_carpal_interphalangeal_1'),
                                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))]),

                                                                                                                                            HAnimJoint(
                                                                                                                                              name_ : SFString('r_carpometacarpal_2'),
                                                                                                                                              DEF_ : SFString('OldMan_r_carpometacarpal_2'),
                                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                              children_ : [
                                                                                                                                                HAnimJoint(
                                                                                                                                                  name_ : SFString('r_metacarpophalangeal_2'),
                                                                                                                                                  DEF_ : SFString('OldMan_r_metacarpophalangeal_2'),
                                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                  children_ : [
                                                                                                                                                    HAnimJoint(
                                                                                                                                                      name_ : SFString('r_carpal_proximal_interphalangeal_2'),
                                                                                                                                                      DEF_ : SFString('OldMan_r_carpal_proximal_interphalangeal_2'),
                                                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                      children_ : [
                                                                                                                                                        HAnimJoint(
                                                                                                                                                          name_ : SFString('r_carpal_distal_interphalangeal_2'),
                                                                                                                                                          DEF_ : SFString('OldMan_r_carpal_distal_interphalangeal_2'),
                                                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])]),

                                                                                                                                                HAnimJoint(
                                                                                                                                                  name_ : SFString('r_carpometacarpal_3'),
                                                                                                                                                  DEF_ : SFString('OldMan_r_carpometacarpal_3'),
                                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                  children_ : [
                                                                                                                                                    HAnimJoint(
                                                                                                                                                      name_ : SFString('r_metacarpophalangeal_3'),
                                                                                                                                                      DEF_ : SFString('OldMan_r_metacarpophalangeal_3'),
                                                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                      children_ : [
                                                                                                                                                        HAnimJoint(
                                                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_3'),
                                                                                                                                                          DEF_ : SFString('OldMan_r_carpal_proximal_interphalangeal_3'),
                                                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                          children_ : [
                                                                                                                                                            HAnimJoint(
                                                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_3'),
                                                                                                                                                              DEF_ : SFString('OldMan_r_carpal_distal_interphalangeal_3'),
                                                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])]),

                                                                                                                                                    HAnimJoint(
                                                                                                                                                      name_ : SFString('r_carpometacarpal_4'),
                                                                                                                                                      DEF_ : SFString('OldMan_r_carpometacarpal_4'),
                                                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                      children_ : [
                                                                                                                                                        HAnimJoint(
                                                                                                                                                          name_ : SFString('r_metacarpophalangeal_4'),
                                                                                                                                                          DEF_ : SFString('OldMan_r_metacarpophalangeal_4'),
                                                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                          children_ : [
                                                                                                                                                            HAnimJoint(
                                                                                                                                                              name_ : SFString('r_carpal_proximal_interphalangeal_4'),
                                                                                                                                                              DEF_ : SFString('OldMan_r_carpal_proximal_interphalangeal_4'),
                                                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                              children_ : [
                                                                                                                                                                HAnimJoint(
                                                                                                                                                                  name_ : SFString('r_carpal_distal_interphalangeal_4'),
                                                                                                                                                                  DEF_ : SFString('OldMan_r_carpal_distal_interphalangeal_4'),
                                                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])]),

                                                                                                                                                        HAnimJoint(
                                                                                                                                                          name_ : SFString('r_carpometacarpal_5'),
                                                                                                                                                          DEF_ : SFString('OldMan_r_carpometacarpal_5'),
                                                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                          children_ : [
                                                                                                                                                            HAnimJoint(
                                                                                                                                                              name_ : SFString('r_metacarpophalangeal_5'),
                                                                                                                                                              DEF_ : SFString('OldMan_r_metacarpophalangeal_5'),
                                                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                              children_ : [
                                                                                                                                                                HAnimJoint(
                                                                                                                                                                  name_ : SFString('r_carpal_proximal_interphalangeal_5'),
                                                                                                                                                                  DEF_ : SFString('OldMan_r_carpal_proximal_interphalangeal_5'),
                                                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                                  children_ : [
                                                                                                                                                                    HAnimJoint(
                                                                                                                                                                      name_ : SFString('r_carpal_distal_interphalangeal_5'),
                                                                                                                                                                      DEF_ : SFString('OldMan_r_carpal_distal_interphalangeal_5'),
                                                                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])]));
void main() { exit(0); }
