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
              content_ : SFString('1 May 2023')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Mon, 15 Sep 2025 05:21:02 GMT')),

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
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations'),
              info_ : MFString([SFString("X3D Humanoid LOA3 skeleton plus others"), SFString("Lots points")])),

            NavigationInfo(
              DEF_ : SFString('Start_NavigationInfo')),

            Viewpoint(
              description_ : SFString('Male'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(-2)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)])),

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
              color_ : SFColor([SFDouble(0.8), SFDouble(0.8), SFDouble(1)]),
              ambientIntensity_ : 0.7,
              location_ : SFVec3f([SFDouble(0), SFDouble(3), SFDouble(3)]),
              direction_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
              radius_ : 10,
              beamWidth_ : 1.5,
              cutOffAngle_ : 0.6),

            PointLight(
              DEF_ : SFString('light2'),
              color_ : SFColor([SFDouble(0.8), SFDouble(0.8), SFDouble(1)]),
              ambientIntensity_ : 0.7,
              location_ : SFVec3f([SFDouble(0), SFDouble(10), SFDouble(-7)])),

            Viewpoint(
              DEF_ : SFString('Scene_InclinedView'),
              description_ : SFString('Scene_Inclined View'),
              position_ : SFVec3f([SFDouble(1.62), SFDouble(1.05), SFDouble(3.06)]),
              orientation_ : SFRotation([SFDouble(-0.113), SFDouble(0.993), SFDouble(0.0347), SFDouble(0.671)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.85), SFDouble(0)])),

            Viewpoint(
              DEF_ : SFString('Scene_IFrontView'),
              description_ : SFString('Scene_Front View'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(2.58)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(0)])),

            Viewpoint(
              DEF_ : SFString('Scene_OldMan_ISideView'),
              description_ : SFString('Scene_Side View'),
              position_ : SFVec3f([SFDouble(-2.6), SFDouble(1.5), SFDouble(1)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(0)])),

            Viewpoint(
              DEF_ : SFString('Scene_ISideView'),
              description_ : SFString('Scene_Side View'),
              position_ : SFVec3f([SFDouble(-5), SFDouble(1.5), SFDouble(1)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(0)])),

            Viewpoint(
              DEF_ : SFString('Scene_Full_ISideView'),
              description_ : SFString('Scene_Side View'),
              position_ : SFVec3f([SFDouble(-10), SFDouble(1.5), SFDouble(1)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(0)])),

            Viewpoint(
              DEF_ : SFString('Scene_OneBush_ISideView'),
              description_ : SFString('Scene_Side View'),
              position_ : SFVec3f([SFDouble(-20), SFDouble(1.5), SFDouble(1)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(0)])),

            Viewpoint(
              DEF_ : SFString('Scene_TwoBush_ISideView'),
              description_ : SFString('Scene_Side View'),
              position_ : SFVec3f([SFDouble(-10), SFDouble(1.5), SFDouble(1)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(0)])),

            Viewpoint(
              DEF_ : SFString('Scene_BackView'),
              description_ : SFString('Scene_Back View'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(-5)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.14)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0)])),

            Viewpoint(
              DEF_ : SFString('Scene_OldMan_BackView'),
              description_ : SFString('Scene_Back View'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(-2.5)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.14)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0)])),

            Viewpoint(
              DEF_ : SFString('Scene_Full_BackView'),
              description_ : SFString('Scene_Back View'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(-20)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(15), SFDouble(3.14)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0)])),

            Viewpoint(
              DEF_ : SFString('Scene_TopView'),
              description_ : SFString('Scene_Top View'),
              position_ : SFVec3f([SFDouble(0), SFDouble(3.5), SFDouble(0)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.5708)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0)])),

            Group(
              DEF_ : SFString('OldMan_Humanoid'),
              children_ : [
                HAnimHumanoid(
                  DEF_ : SFString('OldMan'),
                  name_ : SFString('Walk'),
                  loa_ : 3,
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
                      DEF_ : SFString('OldMan_humanoid_root'),
                      name_ : SFString('humanoid_root'),
                      children_ : [
                        HAnimSegment(
                          DEF_ : SFString('OldMan_sacrum'),
                          name_ : SFString('sacrum'),
                          children_ : [
                            HAnimSite(
                              DEF_ : SFString('OldMan_RootBack_view'),
                              name_ : SFString('RootBack_view'),
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
                                      geometry_ : 
                                        IndexedLineSet(
                                          colorPerVertex_ : false,
                                          colorIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2)]),
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                                          color_ : 
                                            Color(
                                              color_ : MFColor([SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0.6), SFColor(0), SFColor(0), SFColor(0), SFColor(1)])),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([1,0,0]),SFVec3f([0,1,0]),SFVec3f([0,0,1])]))))],
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
                          DEF_ : SFString('OldMan_sacroiliac'),
                          name_ : SFString('sacroiliac'),
                          children_ : [
                            HAnimJoint(
                              DEF_ : SFString('OldMan_l_hip'),
                              name_ : SFString('l_hip'),
                              children_ : [
                                HAnimJoint(
                                  DEF_ : SFString('OldMan_l_knee'),
                                  name_ : SFString('l_knee'),
                                  children_ : [
                                    HAnimJoint(
                                      DEF_ : SFString('OldMan_l_talocrural'),
                                      name_ : SFString('l_talocrural'),
                                      children_ : [
                                        HAnimJoint(
                                          DEF_ : SFString('Joe_l_tarsometatarsal_2'),
                                          name_ : SFString('l_tarsometatarsal_2'),
                                          children_ : [
                                            HAnimJoint(
                                              DEF_ : SFString('Joe_l_metatarsophalangeal_2'),
                                              name_ : SFString('l_metatarsophalangeal_2'),
                                              children_ : [
                                                HAnimJoint(
                                                  DEF_ : SFString('Joe_l_tarsal_distal_interphalangeal_2'),
                                                  name_ : SFString('l_tarsal_distal_interphalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(0.115), SFDouble(0.02), SFDouble(0.122)]))])])])]),

                                HAnimJoint(
                                  DEF_ : SFString('OldMan_r_hip'),
                                  name_ : SFString('l_hip'),
                                  children_ : [
                                    HAnimJoint(
                                      DEF_ : SFString('OldMan_r_knee'),
                                      name_ : SFString('l_knee')),

                                    HAnimJoint(
                                      DEF_ : SFString('OldMan_r_talocrural'),
                                      name_ : SFString('l_talocrural'),
                                      children_ : [
                                        HAnimJoint(
                                          DEF_ : SFString('Joe_r_tarsometatarsal_2'),
                                          name_ : SFString('r_tarsometatarsal_2'),
                                          center_ : SFVec3f([SFDouble(-0.1), SFDouble(0.015), SFDouble(-0.01)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(374), SFInt32(375), SFInt32(376)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                          children_ : [
                                            HAnimJoint(
                                              DEF_ : SFString('Joe_r_metatarsophalangeal_2'),
                                              name_ : SFString('r_metatarsophalangeal_2'),
                                              center_ : SFVec3f([SFDouble(-0.115), SFDouble(0.037), SFDouble(0.09)]),
                                              skinCoordIndex_ : MFInt32([SFInt32(377), SFInt32(378), SFInt32(379), SFInt32(380)]),
                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                              children_ : [
                                                HAnimJoint(
                                                  DEF_ : SFString('Joe_r_tarsal_distal_interphalangeal_2'),
                                                  name_ : SFString('r_tarsal_distal_interphalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(-0.1), SFDouble(0.01), SFDouble(0.14)]),
                                                  skinCoordIndex_ : MFInt32([SFInt32(381), SFInt32(382), SFInt32(383), SFInt32(384), SFInt32(385), SFInt32(386), SFInt32(387), SFInt32(388), SFInt32(389)]),
                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]))])])])])]),

                            HAnimJoint(
                              DEF_ : SFString('OldMan_vl5'),
                              name_ : SFString('vl5'),
                              children_ : [
                                HAnimJoint(
                                  DEF_ : SFString('MeshName_vl4'),
                                  name_ : SFString('vl4'),
                                  children_ : [
                                    HAnimJoint(
                                      DEF_ : SFString('OldMan_vl3'),
                                      name_ : SFString('vl3'),
                                      children_ : [
                                        HAnimJoint(
                                          DEF_ : SFString('MeshName_vl2'),
                                          name_ : SFString('vl2'),
                                          children_ : [
                                            HAnimJoint(
                                              DEF_ : SFString('OldMan_vl1'),
                                              name_ : SFString('vl1'),
                                              children_ : [
                                                HAnimJoint(
                                                  DEF_ : SFString('MeshName_vt12'),
                                                  name_ : SFString('vt12'),
                                                  children_ : [
                                                    HAnimJoint(
                                                      DEF_ : SFString('OldMan_vt11'),
                                                      name_ : SFString('vt11'),
                                                      children_ : [
                                                        HAnimJoint(
                                                          DEF_ : SFString('MeshName_vt10'),
                                                          name_ : SFString('vt10'),
                                                          children_ : [
                                                            HAnimJoint(
                                                              DEF_ : SFString('MeshName_vt9'),
                                                              name_ : SFString('vt9'),
                                                              children_ : [
                                                                HAnimJoint(
                                                                  DEF_ : SFString('MeshName_vt8'),
                                                                  name_ : SFString('vt8'),
                                                                  children_ : [
                                                                    HAnimJoint(
                                                                      DEF_ : SFString('OldMan_vt7'),
                                                                      name_ : SFString('vt7'),
                                                                      children_ : [
                                                                        HAnimJoint(
                                                                          DEF_ : SFString('MeshName_vt6'),
                                                                          name_ : SFString('vt6'),
                                                                          children_ : [
                                                                            HAnimJoint(
                                                                              DEF_ : SFString('MeshName_vt5'),
                                                                              name_ : SFString('vt5'),
                                                                              children_ : [
                                                                                HAnimJoint(
                                                                                  DEF_ : SFString('OldMan_vt4'),
                                                                                  name_ : SFString('vt4'),
                                                                                  children_ : [
                                                                                    HAnimJoint(
                                                                                      DEF_ : SFString('MeshName_vt3'),
                                                                                      name_ : SFString('vt3'),
                                                                                      children_ : [
                                                                                        HAnimJoint(
                                                                                          DEF_ : SFString('OldMan_vt2'),
                                                                                          name_ : SFString('vt2'),
                                                                                          children_ : [
                                                                                            HAnimJoint(
                                                                                              DEF_ : SFString('MeshName_vt1'),
                                                                                              name_ : SFString('vt1'),
                                                                                              children_ : [
                                                                                                HAnimJoint(
                                                                                                  DEF_ : SFString('OldMan_vc7'),
                                                                                                  name_ : SFString('vc7'),
                                                                                                  children_ : [
                                                                                                    HAnimJoint(
                                                                                                      DEF_ : SFString('MeshName_vc6'),
                                                                                                      name_ : SFString('vc6'),
                                                                                                      children_ : [
                                                                                                        HAnimJoint(
                                                                                                          DEF_ : SFString('MeshName_vc5'),
                                                                                                          name_ : SFString('vc5'),
                                                                                                          children_ : [
                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('OldMan_vc4'),
                                                                                                              name_ : SFString('vc4'),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('MeshName_vc3'),
                                                                                                                  name_ : SFString('vc3'),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('MeshName_vc2'),
                                                                                                                      name_ : SFString('vc2'),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('OldMan_vc1'),
                                                                                                                          name_ : SFString('vc1'),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              DEF_ : SFString('OldMan_skullbase'),
                                                                                                                              name_ : SFString('skullbase'),
                                                                                                                              displacers_ : 
                                                                                                                                HAnimDisplacer(
                                                                                                                                  DEF_ : SFString('Joe_skull_tip_raiser_action'),
                                                                                                                                  name_ : SFString('skull_tip_raiser_action'),
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(9)]),
                                                                                                                                  displacements_ : MFVec3f([SFVec3f([0,0.15,0]),SFVec3f([0,0,0.15]),SFVec3f([-0.1,0,0.15]),SFVec3f([0.1,0,0.05]),SFVec3f([0,-0.02,0.05]),SFVec3f([-0.15,0,0]),SFVec3f([-0.05,0,0]),SFVec3f([0.15,0,0]),SFVec3f([0.05,0,0]),SFVec3f([0,0,-0.15])])),
                                                                                                                              children_ : [
                                                                                                                                HAnimJoint(
                                                                                                                                  DEF_ : SFString('OldMan_l_eyelid_joint'),
                                                                                                                                  name_ : SFString('l_eyelid_joint')),

                                                                                                                                HAnimJoint(
                                                                                                                                  DEF_ : SFString('OldMan_l_eyeball_joint'),
                                                                                                                                  name_ : SFString('l_eyeball_joint')),

                                                                                                                                HAnimJoint(
                                                                                                                                  DEF_ : SFString('OldMan_l_eyebrow_joint'),
                                                                                                                                  name_ : SFString('l_eyebrow_joint')),

                                                                                                                                HAnimJoint(
                                                                                                                                  DEF_ : SFString('OldMan_r_eyelid_joint'),
                                                                                                                                  name_ : SFString('r_eyelid_joint')),

                                                                                                                                HAnimJoint(
                                                                                                                                  DEF_ : SFString('OldMan_r_eyeball_joint'),
                                                                                                                                  name_ : SFString('r_eyeball_joint')),

                                                                                                                                HAnimJoint(
                                                                                                                                  DEF_ : SFString('OldMan_r_eyebrow_joint'),
                                                                                                                                  name_ : SFString('r_eyebrow_joint')),

                                                                                                                                HAnimJoint(
                                                                                                                                  DEF_ : SFString('OldMan_temporomandibular'),
                                                                                                                                  name_ : SFString('temporomandibular'))])])])])])])])]),

                                                                                                HAnimJoint(
                                                                                                  DEF_ : SFString('OldMan_l_acromioclavicular'),
                                                                                                  name_ : SFString('l_acromioclavicular'),
                                                                                                  children_ : [
                                                                                                    HAnimJoint(
                                                                                                      DEF_ : SFString('OldMan_l_sternoclavicular'),
                                                                                                      name_ : SFString('l_sternoclavicular'),
                                                                                                      children_ : [
                                                                                                        HAnimJoint(
                                                                                                          DEF_ : SFString('OldMan_l_shoulder'),
                                                                                                          name_ : SFString('l_shoulder'),
                                                                                                          children_ : [
                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('OldMan_l_elbow'),
                                                                                                              name_ : SFString('l_elbow'),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('OldMan_l_radiocarpal'),
                                                                                                                  name_ : SFString('l_radiocarpal'),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('OldMan_l_carpometacarpal_1'),
                                                                                                                      name_ : SFString('l_carpometacarpal_1'),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('OldMan_l_metacarpophalangeal_1'),
                                                                                                                          name_ : SFString('l_metacarpophalangeal_1'),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              DEF_ : SFString('OldMan_l_carpal_interphalangeal_1'),
                                                                                                                              name_ : SFString('l_carpal_interphalangeal_1'))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('OldMan_l_carpometacarpal_2'),
                                                                                                                          name_ : SFString('l_carpometacarpal_2'),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              DEF_ : SFString('OldMan_l_metacarpophalangeal_2'),
                                                                                                                              name_ : SFString('l_metacarpophalangeal_2'),
                                                                                                                              children_ : [
                                                                                                                                HAnimJoint(
                                                                                                                                  DEF_ : SFString('OldMan_l_carpal_proximal_interphalangeal_2'),
                                                                                                                                  name_ : SFString('l_carpal_proximal_interphalangeal_2'),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimJoint(
                                                                                                                                      DEF_ : SFString('OldMan_l_carpal_distal_interphalangeal_2'),
                                                                                                                                      name_ : SFString('l_carpal_distal_interphalangeal_2'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              DEF_ : SFString('OldMan_l_carpometacarpal_3'),
                                                                                                                              name_ : SFString('l_carpometacarpal_3'),
                                                                                                                              children_ : [
                                                                                                                                HAnimJoint(
                                                                                                                                  DEF_ : SFString('OldMan_l_metacarpophalangeal_3'),
                                                                                                                                  name_ : SFString('l_metacarpophalangeal_3'),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimJoint(
                                                                                                                                      DEF_ : SFString('OldMan_l_carpal_proximal_interphalangeal_3'),
                                                                                                                                      name_ : SFString('l_carpal_proximal_interphalangeal_3'),
                                                                                                                                      children_ : [
                                                                                                                                        HAnimJoint(
                                                                                                                                          DEF_ : SFString('OldMan_l_carpal_distal_interphalangeal_3'),
                                                                                                                                          name_ : SFString('l_carpal_distal_interphalangeal_3'))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  DEF_ : SFString('OldMan_l_carpometacarpal_4'),
                                                                                                                                  name_ : SFString('l_carpometacarpal_4'),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimJoint(
                                                                                                                                      DEF_ : SFString('OldMan_l_metacarpophalangeal_4'),
                                                                                                                                      name_ : SFString('l_metacarpophalangeal_4'),
                                                                                                                                      children_ : [
                                                                                                                                        HAnimJoint(
                                                                                                                                          DEF_ : SFString('OldMan_l_carpal_proximal_interphalangeal_4'),
                                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_4'),
                                                                                                                                          children_ : [
                                                                                                                                            HAnimJoint(
                                                                                                                                              DEF_ : SFString('OldMan_l_carpal_distal_interphalangeal_4'),
                                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_4'))])]),

                                                                                                                                    HAnimJoint(
                                                                                                                                      DEF_ : SFString('OldMan_l_carpometacarpal_5'),
                                                                                                                                      name_ : SFString('l_carpometacarpal_5'),
                                                                                                                                      children_ : [
                                                                                                                                        HAnimJoint(
                                                                                                                                          DEF_ : SFString('OldMan_l_metacarpophalangeal_5'),
                                                                                                                                          name_ : SFString('l_metacarpophalangeal_5'),
                                                                                                                                          children_ : [
                                                                                                                                            HAnimJoint(
                                                                                                                                              DEF_ : SFString('OldMan_l_carpal_proximal_interphalangeal_5'),
                                                                                                                                              name_ : SFString('l_carpal_proximal_interphalangeal_5'),
                                                                                                                                              children_ : [
                                                                                                                                                HAnimJoint(
                                                                                                                                                  DEF_ : SFString('OldMan_l_carpal_distal_interphalangeal_5'),
                                                                                                                                                  name_ : SFString('l_carpal_distal_interphalangeal_5'))])])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('OldMan_r_sternoclavicular'),
                                                                                                                      name_ : SFString('r_sternoclavicular'),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('OldMan_r_acromioclavicular'),
                                                                                                                          name_ : SFString('r_acromioclavicular'),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              DEF_ : SFString('OldMan_r_shoulder'),
                                                                                                                              name_ : SFString('r_shoulder'),
                                                                                                                              children_ : [
                                                                                                                                HAnimJoint(
                                                                                                                                  DEF_ : SFString('OldMan_r_elbow'),
                                                                                                                                  name_ : SFString('r_elbow'),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimJoint(
                                                                                                                                      DEF_ : SFString('OldMan_r_radiocarpal'),
                                                                                                                                      name_ : SFString('r_radiocarpal'),
                                                                                                                                      children_ : [
                                                                                                                                        HAnimJoint(
                                                                                                                                          DEF_ : SFString('OldMan_r_carpometacarpal_1'),
                                                                                                                                          name_ : SFString('r_carpometacarpal_1'),
                                                                                                                                          children_ : [
                                                                                                                                            HAnimJoint(
                                                                                                                                              DEF_ : SFString('OldMan_r_metacarpophalangeal_1'),
                                                                                                                                              name_ : SFString('r_metacarpophalangeal_1'),
                                                                                                                                              children_ : [
                                                                                                                                                HAnimJoint(
                                                                                                                                                  DEF_ : SFString('OldMan_r_carpal_interphalangeal_1'),
                                                                                                                                                  name_ : SFString('r_carpal_interphalangeal_1'))]),

                                                                                                                                            HAnimJoint(
                                                                                                                                              DEF_ : SFString('OldMan_r_carpometacarpal_2'),
                                                                                                                                              name_ : SFString('r_carpometacarpal_2'),
                                                                                                                                              children_ : [
                                                                                                                                                HAnimJoint(
                                                                                                                                                  DEF_ : SFString('OldMan_r_metacarpophalangeal_2'),
                                                                                                                                                  name_ : SFString('r_metacarpophalangeal_2'),
                                                                                                                                                  children_ : [
                                                                                                                                                    HAnimJoint(
                                                                                                                                                      DEF_ : SFString('OldMan_r_carpal_proximal_interphalangeal_2'),
                                                                                                                                                      name_ : SFString('r_carpal_proximal_interphalangeal_2'),
                                                                                                                                                      children_ : [
                                                                                                                                                        HAnimJoint(
                                                                                                                                                          DEF_ : SFString('OldMan_r_carpal_distal_interphalangeal_2'),
                                                                                                                                                          name_ : SFString('r_carpal_distal_interphalangeal_2'))])]),

                                                                                                                                                HAnimJoint(
                                                                                                                                                  DEF_ : SFString('OldMan_r_carpometacarpal_3'),
                                                                                                                                                  name_ : SFString('r_carpometacarpal_3'),
                                                                                                                                                  children_ : [
                                                                                                                                                    HAnimJoint(
                                                                                                                                                      DEF_ : SFString('OldMan_r_metacarpophalangeal_3'),
                                                                                                                                                      name_ : SFString('r_metacarpophalangeal_3'),
                                                                                                                                                      children_ : [
                                                                                                                                                        HAnimJoint(
                                                                                                                                                          DEF_ : SFString('OldMan_r_carpal_proximal_interphalangeal_3'),
                                                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_3'),
                                                                                                                                                          children_ : [
                                                                                                                                                            HAnimJoint(
                                                                                                                                                              DEF_ : SFString('OldMan_r_carpal_distal_interphalangeal_3'),
                                                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_3'))])]),

                                                                                                                                                    HAnimJoint(
                                                                                                                                                      DEF_ : SFString('OldMan_r_carpometacarpal_4'),
                                                                                                                                                      name_ : SFString('r_carpometacarpal_4'),
                                                                                                                                                      children_ : [
                                                                                                                                                        HAnimJoint(
                                                                                                                                                          DEF_ : SFString('OldMan_r_metacarpophalangeal_4'),
                                                                                                                                                          name_ : SFString('r_metacarpophalangeal_4'),
                                                                                                                                                          children_ : [
                                                                                                                                                            HAnimJoint(
                                                                                                                                                              DEF_ : SFString('OldMan_r_carpal_proximal_interphalangeal_4'),
                                                                                                                                                              name_ : SFString('r_carpal_proximal_interphalangeal_4'),
                                                                                                                                                              children_ : [
                                                                                                                                                                HAnimJoint(
                                                                                                                                                                  DEF_ : SFString('OldMan_r_carpal_distal_interphalangeal_4'),
                                                                                                                                                                  name_ : SFString('r_carpal_distal_interphalangeal_4'))])]),

                                                                                                                                                        HAnimJoint(
                                                                                                                                                          DEF_ : SFString('OldMan_r_carpometacarpal_5'),
                                                                                                                                                          name_ : SFString('r_carpometacarpal_5'),
                                                                                                                                                          children_ : [
                                                                                                                                                            HAnimJoint(
                                                                                                                                                              DEF_ : SFString('OldMan_r_metacarpophalangeal_5'),
                                                                                                                                                              name_ : SFString('r_metacarpophalangeal_5'),
                                                                                                                                                              children_ : [
                                                                                                                                                                HAnimJoint(
                                                                                                                                                                  DEF_ : SFString('OldMan_r_carpal_proximal_interphalangeal_5'),
                                                                                                                                                                  name_ : SFString('r_carpal_proximal_interphalangeal_5'),
                                                                                                                                                                  children_ : [
                                                                                                                                                                    HAnimJoint(
                                                                                                                                                                      DEF_ : SFString('OldMan_r_carpal_distal_interphalangeal_5'),
                                                                                                                                                                      name_ : SFString('r_carpal_distal_interphalangeal_5'))])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])]));
void main() { exit(0); }
