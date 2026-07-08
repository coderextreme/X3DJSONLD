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
              level_ : 2),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('JoeSkeletonSkinSite.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Comprehensive LOA4 example showing skeleton, skin, sites with no interpolator animation, includes EXPORT to enable separate Inline/IMPORT usage. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Joe D. Williams')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Michalis Kamburelis')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Joe D. Williams')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('9 January 2004')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('4 December 2022')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('16 March 2026')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png')),

            meta(
              name_ : SFString('drawing'),
              content_ : SFString('JoeSkeletonSkinSiteSaluteWalk_composite.vsdx')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('JoeSkeletonSkinSiteSaluteWalk_view3dscene.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('JoeSkeletonSkinSiteSaluteWalk_X_ITE.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('JoeSkeletonSkinSiteSaluteWalk_X3DOM.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('JoeSkeletonSkinSiteSaluteWalk_freeWrl.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('JoeSkeletonSkinSiteSaluteWalk_Octaga.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('JoeSkeletonSkinSiteSaluteWalk_vivaty.png')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('tovrmlx3d, https://castle-engine.io/convert.php')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://castle-engine.io/view3dscene.php#section_converting')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Michalis Kamburelis')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Joe D. Williams')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              info_ : MFString([SFString("By Joe for Joe"), SFString("HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3")]),
              title_ : SFString('JoeSkeletonSkinSite.x3d')),

            NavigationInfo(
              DEF_ : SFString('HeadlightOnRevealsSkinTextureAndColors')),

            Background(
              groundAngle_ : MFFloat([SFFloat(1.57)]),
              groundColor_ : MFColor([SFColor(0), SFColor(0.1), SFColor(0), SFColor(0), SFColor(0.1), SFColor(0)]),
              skyColor_ : MFColor([SFColor(0), SFColor(0), SFColor(0.1)])),
          /*Authoring hint: these axes are aligned within local coordinate system*/

            Group(
              DEF_ : SFString('ViewpointGroup'),
              children_ : [
                Viewpoint(
                  description_ : SFString('Front Up View'),
                  orientation_ : SFRotation([SFDouble(-1), SFDouble(-1), SFDouble(0), SFDouble(0.55)]),
                  position_ : SFVec3f([SFDouble(-1), SFDouble(2), SFDouble(2.5)])),

                Viewpoint(
                  description_ : SFString('From Left View'),
                  orientation_ : SFRotation([SFDouble(0.3), SFDouble(1), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3f([SFDouble(-2.5), SFDouble(1.5), SFDouble(0)])),

                Viewpoint(
                  description_ : SFString('Front Mid View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(0.5), SFDouble(1.25)])),

                Viewpoint(
                  description_ : SFString('Front Feet View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0.75)])),

                Viewpoint(
                  description_ : SFString('From Right View'),
                  orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
                  position_ : SFVec3f([SFDouble(1), SFDouble(1), SFDouble(0)])),

                Viewpoint(
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.65), SFDouble(0)]),
                  description_ : SFString('Front Head View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(1.65), SFDouble(0.75)])),

                Viewpoint(
                  description_ : SFString('Front Mid View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(1.75)])),

                Viewpoint(
                  description_ : SFString('Rear View'),
                  orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.14)]),
                  position_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(-4)])),

                Viewpoint(
                  description_ : SFString('Top View'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3f([SFDouble(0), SFDouble(4), SFDouble(0)])),

                Viewpoint(
                  description_ : SFString('Bottom View'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                  position_ : SFVec3f([SFDouble(0), SFDouble(-4), SFDouble(0)])),

                Viewpoint(
                  description_ : SFString('Right View'),
                  orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
                  position_ : SFVec3f([SFDouble(4), SFDouble(1.5), SFDouble(0)]))]),

            Group(
              DEF_ : SFString('VisualizationShapes'),
              visible_ : false,
              children_ : [
                Transform(
                  scale_ : SFVec3f([SFDouble(5), SFDouble(5), SFDouble(5)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(2.1), SFDouble(0)]),
                  child_ : 
                    Shape(
                      DEF_ : SFString('jointbox'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              ambientIntensity_ : 0.5,
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              shininess_ : 1)),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                          creaseAngle_ : 0.1,
                          color_ : 
                            Color(
                              color_ : MFColor([SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(1), SFColor(0)])),
                          coord_ : 
                            Coordinate(
                              DEF_ : SFString('boxCoords'),
                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.0157]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])]))))),

                Transform(
                  scale_ : SFVec3f([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.773), SFDouble(-0.016)]),
                  child_ : 
                    Shape(
                      DEF_ : SFString('sitebox'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              ambientIntensity_ : 1,
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]),
                              emissiveColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]),
                              shininess_ : 0.7,
                              specularColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                          creaseAngle_ : 0.1,
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('boxCoords'))))),

                Transform(
                  scale_ : SFVec3f([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.2), SFDouble(0)]),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('SegmentLine'),
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              emissiveColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              specularColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]))),
                      geometry_ : 
                        IndexedLineSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0.0001,0])]))))),

                Transform(
                  scale_ : SFVec3f([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.773), SFDouble(-0.016)]),
                  child_ : 
                    Shape(
                      DEF_ : SFString('skinsphere'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              ambientIntensity_ : 0.5,
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              emissiveColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              shininess_ : 1,
                              specularColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]))),
                      geometry_ : 
                        Sphere(
                          radius_ : 0.005)))]),

            Group(
              DEF_ : SFString('SpecHumanoid'),
              children_ : [
                Group(
                  DEF_ : SFString('JoeISOHumanoid'),
                  children_ : [
                    HAnimHumanoid(
                      name_ : SFString('Human'),
                      DEF_ : SFString('Joe_Human'),
                      loa_ : 4,
                      version_ : SFString('2.0'),
                      /*original HAnimHumanoid info='\"humanoidVersion=2.0\"'*/
                      /*<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)*/
                      /*</LOD>*/
                      metadata_ : [
                        MetadataSet(
                          name_ : SFString('HAnimHumanoid.info'),
                          reference_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid'),
                          value_ : 
                            MetadataString(
                              name_ : SFString('humanoidVersion'),
                              value_ : MFString([SFString("2.0")]))),
                      joints_ : [
                        HAnimJoint(
                          name_ : SFString('humanoid_root'),
                          DEF_ : SFString('Joe_humanoid_root'),
                          center_ : SFVec3f([SFDouble(0), SFDouble(0.875), SFDouble(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('sacrum'),
                              DEF_ : SFString('Joe_sacrum'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.875), SFDouble(0)]),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('jointbox'))),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      USE_ : SFString('SegmentLine')),
                                  geometry_ : 
                                    IndexedLineSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.875,0]),SFVec3f([0,0.92,0])])))),

                                Transform(
                                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.92), SFDouble(0.08)]),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('skinsphere'))),

                                Transform(
                                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.87), SFDouble(-0.022)]),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('skinsphere')))]),

                            HAnimJoint(
                              name_ : SFString('sacroiliac'),
                              DEF_ : SFString('Joe_sacroiliac'),
                              center_ : SFVec3f([SFDouble(0), SFDouble(0.92), SFDouble(0)]),
                              skinCoordIndex_ : MFInt32([SFInt32(17), SFInt32(19), SFInt32(20), SFInt32(21), SFInt32(22), SFInt32(23), SFInt32(26), SFInt32(27), SFInt32(73), SFInt32(82), SFInt32(89), SFInt32(91), SFInt32(93)]),
                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.35), SFFloat(0.35), SFFloat(1)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('pelvis'),
                                  DEF_ : SFString('Joe_pelvis'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                                      children_ : [
                                        Transform(
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('jointbox')))]),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          USE_ : SFString('SegmentLine')),
                                      geometry_ : 
                                        IndexedLineSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0.92,0]),SFVec3f([0.0961,0.9124,0]),SFVec3f([-0.095,0.9171,0.0029]),SFVec3f([0,1.045,-0.095])])))),

                                    HAnimSite(
                                      name_ : SFString('l_iliocristale_pt'),
                                      DEF_ : SFString('Joe_l_iliocristale_pt'),
                                      translation_ : SFVec3f([SFDouble(0.1425), SFDouble(1.065), SFDouble(0.0033)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('l_trochanterion_pt'),
                                      DEF_ : SFString('Joe_l_trochanterion_pt'),
                                      translation_ : SFVec3f([SFDouble(0.15), SFDouble(0.9), SFDouble(-0.01)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('r_iliocristale_pt'),
                                      DEF_ : SFString('Joe_r_iliocristale_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.1425), SFDouble(1.065), SFDouble(0.0033)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('r_trochanterion_pt'),
                                      DEF_ : SFString('Joe_r_trochanterion_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.15), SFDouble(0.9), SFDouble(-0.01)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('l_asis_pt'),
                                      DEF_ : SFString('Joe_l_asis_pt'),
                                      translation_ : SFVec3f([SFDouble(0.0935), SFDouble(1.03), SFDouble(0.075)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('r_asis_pt'),
                                      DEF_ : SFString('Joe_r_asis_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.0935), SFDouble(1.03), SFDouble(0.075)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('l_psis_pt'),
                                      DEF_ : SFString('Joe_l_psis_pt'),
                                      translation_ : SFVec3f([SFDouble(0.0773), SFDouble(1.019), SFDouble(-0.12)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('r_psis_pt'),
                                      DEF_ : SFString('Joe_r_psis_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.0773), SFDouble(1.019), SFDouble(-0.12)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('floormarker_pt'),
                                      DEF_ : SFString('Joe_floormarker_pt'),
                                      children_ : [
                                        Transform(
                                          scale_ : SFVec3f([SFDouble(3), SFDouble(3), SFDouble(3)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('sitebox')))]),

                                    HAnimSite(
                                      name_ : SFString('crotch_pt'),
                                      DEF_ : SFString('Joe_crotch_pt'),
                                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.87), SFDouble(-0.022)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))])]),

                                HAnimJoint(
                                  name_ : SFString('l_hip'),
                                  DEF_ : SFString('Joe_l_hip'),
                                  center_ : SFVec3f([SFDouble(0.1), SFDouble(0.92), SFDouble(0)]),
                                  skinCoordIndex_ : MFInt32([SFInt32(89), SFInt32(90), SFInt32(94), SFInt32(95), SFInt32(96), SFInt32(97)]),
                                  skinCoordWeight_ : MFFloat([SFFloat(0.65), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l_thigh'),
                                      DEF_ : SFString('Joe_l_thigh'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.92), SFDouble(0)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('jointbox'))),

                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              USE_ : SFString('SegmentLine')),
                                          geometry_ : 
                                            IndexedLineSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1,0.92,0]),SFVec3f([0.115,0.466,0])])))),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.9), SFDouble(0.0775)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('skinsphere'))),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.079), SFDouble(0.92), SFDouble(-0.14)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('skinsphere'))),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.171), SFDouble(0.65), SFDouble(0)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('skinsphere'))),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.02), SFDouble(0.65), SFDouble(0)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('skinsphere'))),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.65), SFDouble(-0.08)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('skinsphere'))),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.65), SFDouble(0.07)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('skinsphere'))),

                                        HAnimSite(
                                          name_ : SFString('l_knee_crease_pt'),
                                          DEF_ : SFString('Joe_l_knee_crease_pt'),
                                          translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.466), SFDouble(-0.055)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))]),

                                        HAnimSite(
                                          name_ : SFString('l_femoral_lateral_epicondyle_pt'),
                                          DEF_ : SFString('Joe_l_femoral_lateral_epicondyle_pt'),
                                          translation_ : SFVec3f([SFDouble(0.17), SFDouble(0.466), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))]),

                                        HAnimSite(
                                          name_ : SFString('l_femoral_medial_epicondyle_pt'),
                                          DEF_ : SFString('Joe_l_femoral_medial_epicondyle_pt'),
                                          translation_ : SFVec3f([SFDouble(0.05), SFDouble(0.466), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))])]),

                                    HAnimJoint(
                                      name_ : SFString('l_knee'),
                                      DEF_ : SFString('Joe_l_knee'),
                                      center_ : SFVec3f([SFDouble(0.115), SFDouble(0.466), SFDouble(0)]),
                                      skinCoordIndex_ : MFInt32([SFInt32(334), SFInt32(335), SFInt32(336), SFInt32(337), SFInt32(338), SFInt32(339), SFInt32(340), SFInt32(341)]),
                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l_calf'),
                                          DEF_ : SFString('Joe_l_calf'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.466), SFDouble(0)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('jointbox'))),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  USE_ : SFString('SegmentLine')),
                                              geometry_ : 
                                                IndexedLineSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.115,0.466,0]),SFVec3f([0.1,0.069,0])])))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.466), SFDouble(0.06)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('skinsphere'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.466), SFDouble(-0.055)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('skinsphere'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.17), SFDouble(0.466), SFDouble(0)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('skinsphere'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.05), SFDouble(0.466), SFDouble(0)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('skinsphere'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.17), SFDouble(0.3), SFDouble(0)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('skinsphere'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.06), SFDouble(0.3), SFDouble(0)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('skinsphere'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.3), SFDouble(-0.05)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('skinsphere'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.3), SFDouble(0.05)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('skinsphere'))),

                                            HAnimSite(
                                              name_ : SFString('l_lateral_malleolus_pt'),
                                              DEF_ : SFString('Joe_l_lateral_malleolus_pt'),
                                              translation_ : SFVec3f([SFDouble(0.15), SFDouble(0.07), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))]),

                                            HAnimSite(
                                              name_ : SFString('l_medial_malleolus_pt'),
                                              DEF_ : SFString('Joe_l_medial_malleolus_pt'),
                                              translation_ : SFVec3f([SFDouble(0.085), SFDouble(0.086), SFDouble(0.0125)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))])]),

                                        HAnimJoint(
                                          name_ : SFString('l_talocrural'),
                                          DEF_ : SFString('Joe_l_talocrural'),
                                          center_ : SFVec3f([SFDouble(0.115), SFDouble(0.069), SFDouble(0)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(342), SFInt32(343), SFInt32(344), SFInt32(345)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l_talus'),
                                              DEF_ : SFString('Joe_l_talus'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.069), SFDouble(0)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('jointbox'))),

                                                Shape(
                                                  appearance_ : 
                                                    Appearance(
                                                      USE_ : SFString('SegmentLine')),
                                                  geometry_ : 
                                                    IndexedLineSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.1,0.069,0]),SFVec3f([0.115,0.031,0.03])])))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.15), SFDouble(0.07), SFDouble(0)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.085), SFDouble(0.086), SFDouble(0.0125)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.069), SFDouble(-0.045)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.117), SFDouble(0.0975), SFDouble(0.0615)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))),

                                                HAnimSite(
                                                  name_ : SFString('l_sphyrion_pt'),
                                                  DEF_ : SFString('Joe_l_sphyrion_pt'),
                                                  translation_ : SFVec3f([SFDouble(0.09), SFDouble(0.056), SFDouble(0.0125)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))]),

                                                HAnimSite(
                                                  name_ : SFString('l_calcaneus_posterior_pt'),
                                                  DEF_ : SFString('Joe_l_calcaneus_posterior_pt'),
                                                  translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.04), SFDouble(-0.055)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))])]),

                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_2'),
                                              DEF_ : SFString('Joe_l_tarsometatarsal_2'),
                                              center_ : SFVec3f([SFDouble(0.115), SFDouble(0.031), SFDouble(0.03)]),
                                              skinCoordIndex_ : MFInt32([SFInt32(346), SFInt32(347), SFInt32(348), SFInt32(71)]),
                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_metatarsal_2'),
                                                  DEF_ : SFString('Joe_l_metatarsal_2'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.031), SFDouble(0.03)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('jointbox'))),

                                                    Shape(
                                                      appearance_ : 
                                                        Appearance(
                                                          USE_ : SFString('SegmentLine')),
                                                      geometry_ : 
                                                        IndexedLineSet(
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.115,0.031,0.03]),SFVec3f([0.115,0.037,0.09])])))),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.1375), SFDouble(0.006), SFDouble(-0.03)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('skinsphere'))),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.095), SFDouble(0.006), SFDouble(-0.03)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('skinsphere'))),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.015), SFDouble(-0.045)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('skinsphere')))]),

                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_2'),
                                                  DEF_ : SFString('Joe_l_metatarsophalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(0.115), SFDouble(0.037), SFDouble(0.09)]),
                                                  skinCoordIndex_ : MFInt32([SFInt32(349), SFInt32(350), SFInt32(351), SFInt32(352)]),
                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('l_tarsal_proximal_phalanx_2'),
                                                      DEF_ : SFString('Joe_l_tarsal_proximal_phalanx_2'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.037), SFDouble(0.09)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('jointbox'))),

                                                        Shape(
                                                          appearance_ : 
                                                            Appearance(
                                                              USE_ : SFString('SegmentLine')),
                                                          geometry_ : 
                                                            IndexedLineSet(
                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.115,0.037,0.09]),SFVec3f([0.115,0.02,0.122])])))),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.06), SFDouble(0.1)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('skinsphere'))),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.115), SFDouble(0), SFDouble(0.07)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('skinsphere'))),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.165), SFDouble(0), SFDouble(0.07)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('skinsphere'))),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.095), SFDouble(0), SFDouble(0.07)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('skinsphere'))),

                                                        HAnimSite(
                                                          name_ : SFString('l_metatarsal_phalanx_1_pt'),
                                                          DEF_ : SFString('Joe_l_metatarsal_phalanx_1_pt'),
                                                          translation_ : SFVec3f([SFDouble(0.087), SFDouble(0.01), SFDouble(0.122)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('sitebox'))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_metatarsal'),
                                                      DEF_ : SFString('Joe_l_metatarsal'),
                                                      center_ : SFVec3f([SFDouble(0.115), SFDouble(0.02), SFDouble(0.122)]),
                                                      skinCoordIndex_ : MFInt32([SFInt32(353), SFInt32(354), SFInt32(355), SFInt32(356), SFInt32(357), SFInt32(358), SFInt32(359), SFInt32(360), SFInt32(361)]),
                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('l_tarsal_distal_phalanx_2'),
                                                          DEF_ : SFString('Joe_l_tarsal_distal_phalanx_2'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.02), SFDouble(0.13)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('jointbox'))),

                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  USE_ : SFString('SegmentLine')),
                                                              geometry_ : 
                                                                IndexedLineSet(
                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.115,0.02,0.122]),SFVec3f([0.132,0.013,0.19])])))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.04), SFDouble(0.13)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.125), SFDouble(0), SFDouble(0.12)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.165), SFDouble(0), SFDouble(0.12)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.087), SFDouble(0), SFDouble(0.122)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.09), SFDouble(0.012), SFDouble(0.188)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.11), SFDouble(0.011), SFDouble(0.19)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.128), SFDouble(0.011), SFDouble(0.185)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.142), SFDouble(0.011), SFDouble(0.178)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.154), SFDouble(0.01), SFDouble(0.168)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            HAnimSite(
                                                              name_ : SFString('l_metatarsal_phalanx_5_pt'),
                                                              DEF_ : SFString('Joe_l_metatarsal_phalanx_5_pt'),
                                                              translation_ : SFVec3f([SFDouble(0.165), SFDouble(0.01), SFDouble(0.12)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('sitebox'))]),

                                                            HAnimSite(
                                                              name_ : SFString('l_tarsal_distal_phalanx_2_pt'),
                                                              DEF_ : SFString('Joe_l_tarsal_distal_phalanx_2_pt'),
                                                              translation_ : SFVec3f([SFDouble(0.11), SFDouble(0.011), SFDouble(0.19)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('sitebox'))])])])])])])])]),

                                HAnimJoint(
                                  name_ : SFString('r_hip'),
                                  DEF_ : SFString('Joe_r_hip'),
                                  center_ : SFVec3f([SFDouble(-0.1), SFDouble(0.92), SFDouble(0)]),
                                  skinCoordIndex_ : MFInt32([SFInt32(91), SFInt32(92), SFInt32(98), SFInt32(99), SFInt32(100), SFInt32(101)]),
                                  skinCoordWeight_ : MFFloat([SFFloat(0.65), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_thigh'),
                                      DEF_ : SFString('Joe_r_thigh'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.1), SFDouble(0.92), SFDouble(0)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('jointbox'))),

                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              USE_ : SFString('SegmentLine')),
                                          geometry_ : 
                                            IndexedLineSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.1,0.92,0]),SFVec3f([-0.1,0.4913,0])])))),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.079), SFDouble(0.92), SFDouble(-0.14)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('skinsphere'))),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.1), SFDouble(0.9), SFDouble(0.075)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('skinsphere'))),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.171), SFDouble(0.65), SFDouble(0)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('skinsphere'))),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.02), SFDouble(0.65), SFDouble(0)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('skinsphere'))),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.1), SFDouble(0.65), SFDouble(-0.08)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('skinsphere'))),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.1), SFDouble(0.65), SFDouble(0.07)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('skinsphere'))),

                                        HAnimSite(
                                          name_ : SFString('r_knee_crease_pt'),
                                          DEF_ : SFString('Joe_r_knee_crease_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.115), SFDouble(0.466), SFDouble(-0.055)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))]),

                                        HAnimSite(
                                          name_ : SFString('r_femoral_lateral_epicondyle_pt'),
                                          DEF_ : SFString('Joe_r_femoral_lateral_epicondyle_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.17), SFDouble(0.466), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))]),

                                        HAnimSite(
                                          name_ : SFString('r_femoral_medial_epicondyle_pt'),
                                          DEF_ : SFString('Joe_r_femoral_medial_epicondyle_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.05), SFDouble(0.466), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))])]),

                                    HAnimJoint(
                                      name_ : SFString('r_knee'),
                                      DEF_ : SFString('Joe_r_knee'),
                                      center_ : SFVec3f([SFDouble(-0.05), SFDouble(0.466), SFDouble(0)]),
                                      skinCoordIndex_ : MFInt32([SFInt32(362), SFInt32(363), SFInt32(364), SFInt32(365), SFInt32(366), SFInt32(367), SFInt32(368), SFInt32(369)]),
                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('r_calf'),
                                          DEF_ : SFString('Joe_r_calf'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.1), SFDouble(0.4913), SFDouble(0)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('jointbox'))),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  USE_ : SFString('SegmentLine')),
                                              geometry_ : 
                                                IndexedLineSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.1,0.4913,0]),SFVec3f([-0.1,0.0712,0])])))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.115), SFDouble(0.466), SFDouble(0.06)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('skinsphere'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.115), SFDouble(0.466), SFDouble(-0.055)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('skinsphere'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.17), SFDouble(0.466), SFDouble(0)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('skinsphere'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.05), SFDouble(0.466), SFDouble(0)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('skinsphere'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.17), SFDouble(0.3), SFDouble(0)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('skinsphere'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.06), SFDouble(0.3), SFDouble(0)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('skinsphere'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.1), SFDouble(0.3), SFDouble(-0.05)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('skinsphere'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.1), SFDouble(0.3), SFDouble(0.05)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('skinsphere'))),

                                            HAnimSite(
                                              name_ : SFString('r_lateral_malleolus_pt'),
                                              DEF_ : SFString('Joe_r_lateral_malleolus_pt'),
                                              translation_ : SFVec3f([SFDouble(-0.15), SFDouble(0.07), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))]),

                                            HAnimSite(
                                              name_ : SFString('r_medial_malleolus_pt'),
                                              DEF_ : SFString('Joe_r_medial_malleolus_pt'),
                                              translation_ : SFVec3f([SFDouble(-0.085), SFDouble(0.086), SFDouble(0.0125)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))])]),

                                        HAnimJoint(
                                          name_ : SFString('r_talocrural'),
                                          DEF_ : SFString('Joe_r_talocrural'),
                                          center_ : SFVec3f([SFDouble(-0.115), SFDouble(0.069), SFDouble(0)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(370), SFInt32(371), SFInt32(372), SFInt32(373)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_talus'),
                                              DEF_ : SFString('Joe_r_talus'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.1), SFDouble(0.0712), SFDouble(0)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('jointbox'))),

                                                Shape(
                                                  appearance_ : 
                                                    Appearance(
                                                      USE_ : SFString('SegmentLine')),
                                                  geometry_ : 
                                                    IndexedLineSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.1,0.0712,0]),SFVec3f([-0.1,0.015,-0.01])])))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.15), SFDouble(0.07), SFDouble(0)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.085), SFDouble(0.086), SFDouble(0.0125)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.115), SFDouble(0.069), SFDouble(-0.045)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.117), SFDouble(0.0975), SFDouble(0.0615)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))),

                                                HAnimSite(
                                                  name_ : SFString('r_sphyrion_pt'),
                                                  DEF_ : SFString('Joe_r_sphyrion_pt'),
                                                  translation_ : SFVec3f([SFDouble(-0.09), SFDouble(0.056), SFDouble(0.0125)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))]),

                                                HAnimSite(
                                                  name_ : SFString('r_calcaneus_posterior_pt'),
                                                  DEF_ : SFString('Joe_r_calcaneus_posterior_pt'),
                                                  translation_ : SFVec3f([SFDouble(-0.115), SFDouble(0.04), SFDouble(-0.055)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))])]),

                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_2'),
                                              DEF_ : SFString('Joe_r_tarsometatarsal_2'),
                                              center_ : SFVec3f([SFDouble(-0.1), SFDouble(0.015), SFDouble(-0.01)]),
                                              skinCoordIndex_ : MFInt32([SFInt32(374), SFInt32(375), SFInt32(376)]),
                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_metatarsal_2'),
                                                  DEF_ : SFString('Joe_r_metatarsal_2'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.1), SFDouble(0.015), SFDouble(-0.01)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('jointbox'))),

                                                    Shape(
                                                      appearance_ : 
                                                        Appearance(
                                                          USE_ : SFString('SegmentLine')),
                                                      geometry_ : 
                                                        IndexedLineSet(
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.1,0.015,-0.01]),SFVec3f([-0.1,0.02,0.07])])))),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.1375), SFDouble(0.006), SFDouble(-0.03)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('skinsphere'))),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.095), SFDouble(0.006), SFDouble(-0.03)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('skinsphere'))),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.095), SFDouble(0.006), SFDouble(-0.03)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('skinsphere')))]),

                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_2'),
                                                  DEF_ : SFString('Joe_r_metatarsophalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(-0.115), SFDouble(0.037), SFDouble(0.09)]),
                                                  skinCoordIndex_ : MFInt32([SFInt32(377), SFInt32(378), SFInt32(379), SFInt32(380)]),
                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('r_tarsal_proximal_phalanx_2'),
                                                      DEF_ : SFString('Joe_r_tarsal_proximal_phalanx_2'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.1), SFDouble(0.02), SFDouble(0.07)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('jointbox'))),

                                                        Shape(
                                                          appearance_ : 
                                                            Appearance(
                                                              USE_ : SFString('SegmentLine')),
                                                          geometry_ : 
                                                            IndexedLineSet(
                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-0.1,0.02,0.07]),SFVec3f([-0.1,0.01,0.14])])))),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.115), SFDouble(0.06), SFDouble(0.1)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('skinsphere'))),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.115), SFDouble(0), SFDouble(0.07)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('skinsphere'))),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.165), SFDouble(0), SFDouble(0.07)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('skinsphere'))),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.165), SFDouble(0), SFDouble(0.07)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('skinsphere'))),

                                                        HAnimSite(
                                                          name_ : SFString('r_metatarsal_phalanx_1_pt'),
                                                          DEF_ : SFString('Joe_r_metatarsal_phalanx_1_pt'),
                                                          translation_ : SFVec3f([SFDouble(-0.115), SFDouble(0.02), SFDouble(0.122)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('sitebox'))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_distal_interphalangeal_2'),
                                                      DEF_ : SFString('Joe_r_tarsal_distal_interphalangeal_2'),
                                                      center_ : SFVec3f([SFDouble(-0.1), SFDouble(0.01), SFDouble(0.14)]),
                                                      skinCoordIndex_ : MFInt32([SFInt32(381), SFInt32(382), SFInt32(383), SFInt32(384), SFInt32(385), SFInt32(386), SFInt32(387), SFInt32(388), SFInt32(389)]),
                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('r_tarsal_distal_phalanx_2'),
                                                          DEF_ : SFString('Joe_r_tarsal_distal_phalanx_2'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.1086), SFDouble(0.01), SFDouble(0.14)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('jointbox'))),

                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  USE_ : SFString('SegmentLine')),
                                                              geometry_ : 
                                                                IndexedLineSet(
                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([-0.1,0.01,0.14]),SFVec3f([-0.1043,0.0016,0.2])])))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.115), SFDouble(0.04), SFDouble(0.13)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.125), SFDouble(0), SFDouble(0.12)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.165), SFDouble(0), SFDouble(0.12)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.087), SFDouble(0), SFDouble(0.122)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.09), SFDouble(0.012), SFDouble(0.188)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.11), SFDouble(0.011), SFDouble(0.19)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.128), SFDouble(0.011), SFDouble(0.185)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.142), SFDouble(0.011), SFDouble(0.178)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.154), SFDouble(0.01), SFDouble(0.168)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))),

                                                            HAnimSite(
                                                              name_ : SFString('r_metatarsal_phalanx_5_pt'),
                                                              DEF_ : SFString('Joe_r_metatarsal_phalanx_5_pt'),
                                                              translation_ : SFVec3f([SFDouble(-0.165), SFDouble(0.01), SFDouble(0.12)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('sitebox'))]),

                                                            HAnimSite(
                                                              name_ : SFString('r_tarsal_distal_phalanx_2_pt'),
                                                              DEF_ : SFString('Joe_r_tarsal_distal_phalanx_2_pt'),
                                                              translation_ : SFVec3f([SFDouble(-0.11), SFDouble(0.011), SFDouble(0.19)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('sitebox'))])])])])])])])])]),

                            HAnimJoint(
                              name_ : SFString('vl5'),
                              DEF_ : SFString('Joe_vl5'),
                              center_ : SFVec3f([SFDouble(0), SFDouble(1.045), SFDouble(-0.095)]),
                              skinCoordIndex_ : MFInt32([SFInt32(28), SFInt32(76)]),
                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('toPelvis'),
                                  DEF_ : SFString('Joe_toPelvis'),
                                  children_ : [
                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          USE_ : SFString('SegmentLine')),
                                      geometry_ : 
                                        IndexedLineSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,1.045,-0.095]),SFVec3f([0,0.9149,0.0016])]))))]),

                                HAnimSegment(
                                  name_ : SFString('l5'),
                                  DEF_ : SFString('Joe_l5'),
                                  children_ : [
                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          USE_ : SFString('SegmentLine')),
                                      geometry_ : 
                                        IndexedLineSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,1.045,-0.095]),SFVec3f([0,1.068,-0.085])])))),

                                    HAnimSite(
                                      name_ : SFString('waist_preferred_posterior_pt'),
                                      DEF_ : SFString('Joe_waist_preferred_posterior_pt'),
                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.0915), SFDouble(-0.1091)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('navel_pt'),
                                      DEF_ : SFString('Joe_navel_pt'),
                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.0723), SFDouble(0.09)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))])]),

                                HAnimJoint(
                                  name_ : SFString('vl4'),
                                  DEF_ : SFString('Joe_vl4'),
                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.068), SFDouble(-0.085)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l4'),
                                      DEF_ : SFString('Joe_l4'),
                                      children_ : [
                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              USE_ : SFString('SegmentLine')),
                                          geometry_ : 
                                            IndexedLineSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,1.068,-0.085]),SFVec3f([0,1.092,-0.0725])])))),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.068), SFDouble(-0.085)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('jointbox')))]),

                                    HAnimJoint(
                                      name_ : SFString('vl3'),
                                      DEF_ : SFString('Joe_vl3'),
                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.092), SFDouble(-0.0725)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l3'),
                                          DEF_ : SFString('Joe_l3'),
                                          children_ : [
                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  USE_ : SFString('SegmentLine')),
                                              geometry_ : 
                                                IndexedLineSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,1.092,-0.0725]),SFVec3f([0,1.12,-0.065])])))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.092), SFDouble(-0.0725)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('jointbox')))]),

                                        HAnimJoint(
                                          name_ : SFString('vl2'),
                                          DEF_ : SFString('Joe_vl2'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.12), SFDouble(-0.065)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(16), SFInt32(18), SFInt32(25), SFInt32(83), SFInt32(84), SFInt32(85), SFInt32(86), SFInt32(87), SFInt32(88)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.7), SFFloat(1), SFFloat(0.8)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l2'),
                                              DEF_ : SFString('Joe_l2'),
                                              children_ : [
                                                Shape(
                                                  appearance_ : 
                                                    Appearance(
                                                      USE_ : SFString('SegmentLine')),
                                                  geometry_ : 
                                                    IndexedLineSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0,1.12,-0.065]),SFVec3f([0,1.1459,-0.0625])])))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.12), SFDouble(-0.065)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('jointbox'))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.087), SFDouble(1.19), SFDouble(-0.09)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.087), SFDouble(1.19), SFDouble(-0.09)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.172), SFDouble(1.32), SFDouble(-0.03)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.172), SFDouble(1.32), SFDouble(-0.03)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.15), SFDouble(1.23), SFDouble(-0.015)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.15), SFDouble(1.23), SFDouble(-0.015)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))),

                                                HAnimSite(
                                                  name_ : SFString('r_rib10_pt'),
                                                  DEF_ : SFString('Joe_r_rib10_pt'),
                                                  translation_ : SFVec3f([SFDouble(-0.087), SFDouble(1.19), SFDouble(0.09)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))]),

                                                HAnimSite(
                                                  name_ : SFString('l_rib10_pt'),
                                                  DEF_ : SFString('Joe_l_rib10_pt'),
                                                  translation_ : SFVec3f([SFDouble(0.087), SFDouble(1.19), SFDouble(0.09)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))]),

                                                HAnimSite(
                                                  name_ : SFString('rib10_midspine_pt'),
                                                  DEF_ : SFString('Joe_rib10_midspine_pt'),
                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.1908), SFDouble(-0.1113)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))])]),

                                            HAnimJoint(
                                              name_ : SFString('vl1'),
                                              DEF_ : SFString('Joe_vl1'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.1459), SFDouble(-0.0625)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l1'),
                                                  DEF_ : SFString('Joe_l1'),
                                                  children_ : [
                                                    Shape(
                                                      appearance_ : 
                                                        Appearance(
                                                          USE_ : SFString('SegmentLine')),
                                                      geometry_ : 
                                                        IndexedLineSet(
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0,1.1459,-0.0625]),SFVec3f([0,1.179,-0.068])])))),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.1459), SFDouble(-0.0625)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('jointbox')))]),

                                                HAnimJoint(
                                                  name_ : SFString('vt12'),
                                                  DEF_ : SFString('Joe_vt12'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.179), SFDouble(-0.068)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('t12'),
                                                      DEF_ : SFString('Joe_t12'),
                                                      children_ : [
                                                        Shape(
                                                          appearance_ : 
                                                            Appearance(
                                                              USE_ : SFString('SegmentLine')),
                                                          geometry_ : 
                                                            IndexedLineSet(
                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0,1.179,-0.068]),SFVec3f([0,1.242,-0.09])])))),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.179), SFDouble(-0.068)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('jointbox')))]),

                                                    HAnimJoint(
                                                      name_ : SFString('vt11'),
                                                      DEF_ : SFString('Joe_vt11'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.2679), SFDouble(-0.081)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('t11'),
                                                          DEF_ : SFString('Joe_t11'),
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  USE_ : SFString('SegmentLine')),
                                                              geometry_ : 
                                                                IndexedLineSet(
                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0,1.2145,-0.0755]),SFVec3f([0,1.242,-0.09])])))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.2145), SFDouble(-0.0755)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('jointbox')))]),

                                                        HAnimJoint(
                                                          name_ : SFString('vt10'),
                                                          DEF_ : SFString('Joe_vt10'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.242), SFDouble(-0.09)]),
                                                          skinCoordIndex_ : MFInt32([SFInt32(15)]),
                                                          skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('t10'),
                                                              DEF_ : SFString('Joe_t10'),
                                                              children_ : [
                                                                Shape(
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      USE_ : SFString('SegmentLine')),
                                                                  geometry_ : 
                                                                    IndexedLineSet(
                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0,1.242,-0.09]),SFVec3f([0,1.268,-0.1])])))),

                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.242), SFDouble(-0.09)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('jointbox'))),

                                                                HAnimSite(
                                                                  name_ : SFString('substernale_pt'),
                                                                  DEF_ : SFString('Joe_substernale_pt'),
                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.25), SFDouble(0.113)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      USE_ : SFString('sitebox'))])]),

                                                            HAnimJoint(
                                                              name_ : SFString('vt9'),
                                                              DEF_ : SFString('Joe_vt9'),
                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.268), SFDouble(-0.1)]),
                                                              skinCoordIndex_ : MFInt32([SFInt32(13), SFInt32(14)]),
                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('t9'),
                                                                  DEF_ : SFString('Joe_t9'),
                                                                  children_ : [
                                                                    Shape(
                                                                      appearance_ : 
                                                                        Appearance(
                                                                          USE_ : SFString('SegmentLine')),
                                                                      geometry_ : 
                                                                        IndexedLineSet(
                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0,1.268,-0.1]),SFVec3f([0,1.294,-0.11])])))),

                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.268), SFDouble(-0.1)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('jointbox'))),

                                                                    HAnimSite(
                                                                      name_ : SFString('r_thelion_pt'),
                                                                      DEF_ : SFString('Joe_r_thelion_pt'),
                                                                      translation_ : SFVec3f([SFDouble(-0.1135), SFDouble(1.318), SFDouble(0.095)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          USE_ : SFString('sitebox'))]),

                                                                    HAnimSite(
                                                                      name_ : SFString('l_thelion_pt'),
                                                                      DEF_ : SFString('Joe_l_thelion_pt'),
                                                                      translation_ : SFVec3f([SFDouble(0.1135), SFDouble(1.318), SFDouble(0.095)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          USE_ : SFString('sitebox'))])]),

                                                                HAnimJoint(
                                                                  name_ : SFString('vt8'),
                                                                  DEF_ : SFString('Joe_vt8'),
                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.294), SFDouble(-0.11)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      name_ : SFString('t8'),
                                                                      DEF_ : SFString('Joe_t8'),
                                                                      children_ : [
                                                                        Shape(
                                                                          appearance_ : 
                                                                            Appearance(
                                                                              USE_ : SFString('SegmentLine')),
                                                                          geometry_ : 
                                                                            IndexedLineSet(
                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                              coord_ : 
                                                                                Coordinate(
                                                                                  point_ : MFVec3f([SFVec3f([0,1.294,-0.11]),SFVec3f([0,1.352,-0.12])])))),

                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.294), SFDouble(-0.11)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('jointbox')))]),

                                                                    HAnimJoint(
                                                                      name_ : SFString('vt7'),
                                                                      DEF_ : SFString('Joe_vt7'),
                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.323), SFDouble(-0.1155)]),
                                                                      children_ : [
                                                                        HAnimSegment(
                                                                          name_ : SFString('t7'),
                                                                          DEF_ : SFString('Joe_t7'),
                                                                          children_ : [
                                                                            Shape(
                                                                              appearance_ : 
                                                                                Appearance(
                                                                                  USE_ : SFString('SegmentLine')),
                                                                              geometry_ : 
                                                                                IndexedLineSet(
                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                  coord_ : 
                                                                                    Coordinate(
                                                                                      point_ : MFVec3f([SFVec3f([0,1.352,-0.12]),SFVec3f([0,1.381,-0.1235])])))),

                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.323), SFDouble(-0.1155)]),
                                                                              child_ : 
                                                                                Shape(
                                                                                  USE_ : SFString('jointbox')))]),

                                                                        HAnimJoint(
                                                                          name_ : SFString('vt6'),
                                                                          DEF_ : SFString('Joe_vt6'),
                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.352), SFDouble(-0.12)]),
                                                                          children_ : [
                                                                            HAnimSegment(
                                                                              name_ : SFString('t6'),
                                                                              DEF_ : SFString('Joe_t6'),
                                                                              children_ : [
                                                                                Shape(
                                                                                  appearance_ : 
                                                                                    Appearance(
                                                                                      USE_ : SFString('SegmentLine')),
                                                                                  geometry_ : 
                                                                                    IndexedLineSet(
                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                      coord_ : 
                                                                                        Coordinate(
                                                                                          point_ : MFVec3f([SFVec3f([0,1.381,-0.1235]),SFVec3f([0,1.41,-0.1235])])))),

                                                                                Transform(
                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.352), SFDouble(-0.12)]),
                                                                                  child_ : 
                                                                                    Shape(
                                                                                      USE_ : SFString('jointbox')))]),

                                                                            HAnimJoint(
                                                                              name_ : SFString('vt5'),
                                                                              DEF_ : SFString('Joe_vt5'),
                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.381), SFDouble(-0.1235)]),
                                                                              children_ : [
                                                                                HAnimSegment(
                                                                                  name_ : SFString('t5'),
                                                                                  DEF_ : SFString('Joe_t5'),
                                                                                  children_ : [
                                                                                    Shape(
                                                                                      appearance_ : 
                                                                                        Appearance(
                                                                                          USE_ : SFString('SegmentLine')),
                                                                                      geometry_ : 
                                                                                        IndexedLineSet(
                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                          coord_ : 
                                                                                            Coordinate(
                                                                                              point_ : MFVec3f([SFVec3f([0,1.41,-0.1235]),SFVec3f([0,1.438,-0.12])])))),

                                                                                    Transform(
                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.381), SFDouble(-0.1235)]),
                                                                                      child_ : 
                                                                                        Shape(
                                                                                          USE_ : SFString('jointbox')))]),

                                                                                HAnimJoint(
                                                                                  name_ : SFString('vt4'),
                                                                                  DEF_ : SFString('Joe_vt4'),
                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.41), SFDouble(-0.1235)]),
                                                                                  skinCoordIndex_ : MFInt32([SFInt32(81)]),
                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                  children_ : [
                                                                                    HAnimSegment(
                                                                                      name_ : SFString('t4'),
                                                                                      DEF_ : SFString('Joe_t4'),
                                                                                      children_ : [
                                                                                        Shape(
                                                                                          appearance_ : 
                                                                                            Appearance(
                                                                                              USE_ : SFString('SegmentLine')),
                                                                                          geometry_ : 
                                                                                            IndexedLineSet(
                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                              coord_ : 
                                                                                                Coordinate(
                                                                                                  point_ : MFVec3f([SFVec3f([0,1.41,-0.1235]),SFVec3f([0,1.438,-0.12])])))),

                                                                                        Transform(
                                                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.41), SFDouble(-0.1235)]),
                                                                                          child_ : 
                                                                                            Shape(
                                                                                              USE_ : SFString('jointbox'))),

                                                                                        Transform(
                                                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.41), SFDouble(-0.145)]),
                                                                                          child_ : 
                                                                                            Shape(
                                                                                              USE_ : SFString('skinsphere')))]),

                                                                                    HAnimJoint(
                                                                                      name_ : SFString('vt3'),
                                                                                      DEF_ : SFString('Joe_vt3'),
                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.438), SFDouble(-0.12)]),
                                                                                      children_ : [
                                                                                        HAnimSegment(
                                                                                          name_ : SFString('t3'),
                                                                                          DEF_ : SFString('Joe_t3'),
                                                                                          children_ : [
                                                                                            Shape(
                                                                                              appearance_ : 
                                                                                                Appearance(
                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                              geometry_ : 
                                                                                                IndexedLineSet(
                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0,1.438,-0.12]),SFVec3f([0,1.468,-0.105])])))),

                                                                                            Transform(
                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.438), SFDouble(-0.12)]),
                                                                                              child_ : 
                                                                                                Shape(
                                                                                                  USE_ : SFString('jointbox')))]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('vt2'),
                                                                                          DEF_ : SFString('Joe_vt2'),
                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.468), SFDouble(-0.105)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('t2'),
                                                                                              DEF_ : SFString('Joe_t2'),
                                                                                              children_ : [
                                                                                                Shape(
                                                                                                  appearance_ : 
                                                                                                    Appearance(
                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                  geometry_ : 
                                                                                                    IndexedLineSet(
                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0,1.468,-0.105]),SFVec3f([0,1.497,-0.09])])))),

                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.468), SFDouble(-0.105)]),
                                                                                                  child_ : 
                                                                                                    Shape(
                                                                                                      USE_ : SFString('jointbox')))]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('vt1'),
                                                                                              DEF_ : SFString('Joe_vt1'),
                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.497), SFDouble(-0.09)]),
                                                                                              skinCoordIndex_ : MFInt32([SFInt32(11), SFInt32(24)]),
                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('t1'),
                                                                                                  DEF_ : SFString('Joe_t1'),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                      geometry_ : 
                                                                                                        IndexedLineSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0,1.497,-0.09]),SFVec3f([0,1.525,-0.072])])))),

                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.497), SFDouble(-0.09)]),
                                                                                                      child_ : 
                                                                                                        Shape(
                                                                                                          USE_ : SFString('jointbox'))),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('suprasternale_pt'),
                                                                                                      DEF_ : SFString('Joe_suprasternale_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.44), SFDouble(0.03)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('cervicale_pt'),
                                                                                                      DEF_ : SFString('Joe_cervicale_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.53), SFDouble(-0.084)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('vc7'),
                                                                                                  DEF_ : SFString('Joe_vc7'),
                                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.525), SFDouble(-0.072)]),
                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(74), SFInt32(75)]),
                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('c7'),
                                                                                                      DEF_ : SFString('Joe_c7'),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                          geometry_ : 
                                                                                                            IndexedLineSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0,1.525,-0.072]),SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([-0.03,1.46,0.02]),SFVec3f([0,1.54,-0.05])])))),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.525), SFDouble(-0.072)]),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              USE_ : SFString('jointbox'))),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_neck_base_pt'),
                                                                                                          DEF_ : SFString('Joe_r_neck_base_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.0646), SFDouble(1.5149), SFDouble(-0.0385)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_neck_base_pt'),
                                                                                                          DEF_ : SFString('Joe_l_neck_base_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.0646), SFDouble(1.5149), SFDouble(-0.0385)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('sitebox'))])]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('vc6'),
                                                                                                      DEF_ : SFString('Joe_vc6'),
                                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.54), SFDouble(-0.05)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('c6'),
                                                                                                          DEF_ : SFString('Joe_c6'),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                              geometry_ : 
                                                                                                                IndexedLineSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0,1.54,-0.05]),SFVec3f([0,1.5675,-0.0256])])))),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.54), SFDouble(-0.05)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('jointbox')))]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('vc5'),
                                                                                                          DEF_ : SFString('Joe_vc5'),
                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.552), SFDouble(-0.035)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('c5'),
                                                                                                              DEF_ : SFString('Joe_c5'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.552), SFDouble(-0.035)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('jointbox'))),

                                                                                                                Shape(
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                  geometry_ : 
                                                                                                                    IndexedLineSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0,1.5675,-0.0256]),SFVec3f([0,1.5823,-0.0185])]))))]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('vc4'),
                                                                                                              DEF_ : SFString('Joe_vc4'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.5675), SFDouble(-0.0256)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('c4'),
                                                                                                                  DEF_ : SFString('Joe_c4'),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      appearance_ : 
                                                                                                                        Appearance(
                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                      geometry_ : 
                                                                                                                        IndexedLineSet(
                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0,1.5823,-0.0185]),SFVec3f([0,1.595,-0.0175])])))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.5675), SFDouble(-0.0256)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('jointbox')))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('vc3'),
                                                                                                                  DEF_ : SFString('Joe_vc3'),
                                                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.5823), SFDouble(-0.0185)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('c3'),
                                                                                                                      DEF_ : SFString('Joe_c3'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0,1.595,-0.0175]),SFVec3f([0,1.61,-0.015])])))),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.5823), SFDouble(-0.0185)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox')))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('vc2'),
                                                                                                                      DEF_ : SFString('Joe_vc2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.595), SFDouble(-0.0175)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('c2'),
                                                                                                                          DEF_ : SFString('Joe_c2'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0,1.61,-0.015]),SFVec3f([0,1.6144,-0.0034])])))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.595), SFDouble(-0.0175)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox')))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('vc1'),
                                                                                                                          DEF_ : SFString('Joe_vc1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.61), SFDouble(-0.015)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('c1'),
                                                                                                                              DEF_ : SFString('Joe_c1'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,1.6144,-0.0034]),SFVec3f([0,1.63,-0.01])])))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.61), SFDouble(-0.015)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox')))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('skullbase'),
                                                                                                                              DEF_ : SFString('Joe_skullbase'),
                                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.63), SFDouble(-0.01)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(9)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('skull'),
                                                                                                                                  DEF_ : SFString('Joe_skull'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0,1.63,-0.01]),SFVec3f([0.034,1.659,0.06]),SFVec3f([-0.034,1.655,0.065])])))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.63), SFDouble(-0.01)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('skull_vertex_tip'),
                                                                                                                                      DEF_ : SFString('Joe_skull_vertex_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.77), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('sellion_pt'),
                                                                                                                                      DEF_ : SFString('Joe_sellion_pt'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.665), SFDouble(0.09)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_infraorbitale_pt'),
                                                                                                                                      DEF_ : SFString('Joe_r_infraorbitale_pt'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.033), SFDouble(1.62), SFDouble(0.087)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_infraorbitale_pt'),
                                                                                                                                      DEF_ : SFString('Joe_l_infraorbitale_pt'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.033), SFDouble(1.62), SFDouble(0.087)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('supramenton_pt'),
                                                                                                                                      DEF_ : SFString('Joe_supramenton_pt'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.55), SFDouble(0.097)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_tragion_pt'),
                                                                                                                                      DEF_ : SFString('Joe_r_tragion_pt'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.077), SFDouble(1.64), SFDouble(-0.01)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_gonion_pt'),
                                                                                                                                      DEF_ : SFString('Joe_r_gonion_pt'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.052), SFDouble(1.58), SFDouble(0.015)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_tragion_pt'),
                                                                                                                                      DEF_ : SFString('Joe_l_tragion_pt'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.077), SFDouble(1.64), SFDouble(-0.01)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_gonion_pt'),
                                                                                                                                      DEF_ : SFString('Joe_l_gonion_pt'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.0631), SFDouble(1.58), SFDouble(0.015)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('nuchale_pt'),
                                                                                                                                      DEF_ : SFString('Joe_nuchale_pt'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.625), SFDouble(-0.0925)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_eyeball_joint'),
                                                                                                                                  DEF_ : SFString('Joe_l_eyeball_joint'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.034), SFDouble(1.659), SFDouble(0.06)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('l_eyeball'),
                                                                                                                                      DEF_ : SFString('Joe_l_eyeball'),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedLineSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0.034,1.655,0.065]),SFVec3f([-0.034,1.655,0.065])])))),

                                                                                                                                        Transform(
                                                                                                                                          scale_ : SFVec3f([SFDouble(1), SFDouble(1), SFDouble(1.4)]),
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.034), SFDouble(1.655), SFDouble(0.065)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox')))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_eyeball_joint'),
                                                                                                                                  DEF_ : SFString('Joe_r_eyeball_joint'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.034), SFDouble(1.659), SFDouble(0.06)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('r_eyeball'),
                                                                                                                                      DEF_ : SFString('Joe_r_eyeball'),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedLineSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0.034,1.655,0.065]),SFVec3f([-0.034,1.655,0.065])])))),

                                                                                                                                        Transform(
                                                                                                                                          scale_ : SFVec3f([SFDouble(1), SFDouble(1), SFDouble(1.4)]),
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.034), SFDouble(1.655), SFDouble(0.065)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox')))])])])])])])])])])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('l_sternoclavicular'),
                                                                                                  DEF_ : SFString('Joe_l_sternoclavicular'),
                                                                                                  center_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(12)]),
                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('l_clavicle'),
                                                                                                      DEF_ : SFString('Joe_l_clavicle'),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                          geometry_ : 
                                                                                                            IndexedLineSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([0.0962,1.4269,-0.0424])])))),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              USE_ : SFString('jointbox'))),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_clavicle_pt'),
                                                                                                          DEF_ : SFString('Joe_l_clavicle_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.03), SFDouble(1.46), SFDouble(0.035)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('sitebox'))])]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('l_acromioclavicular'),
                                                                                                      DEF_ : SFString('Joe_l_acromioclavicular'),
                                                                                                      center_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(79)]),
                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('l_scapula'),
                                                                                                          DEF_ : SFString('Joe_l_scapula'),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                              geometry_ : 
                                                                                                                IndexedLineSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.0962,1.4269,-0.0424]),SFVec3f([0.2,1.44,-0.04])])))),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('jointbox'))),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.11), SFDouble(1.427), SFDouble(-0.1375)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('skinsphere'))),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_acromion_pt'),
                                                                                                              DEF_ : SFString('Joe_l_acromion_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.175), SFDouble(1.4825), SFDouble(-0.06)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_axilla_proximal_pt'),
                                                                                                              DEF_ : SFString('Joe_l_axilla_proximal_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.17), SFDouble(1.38), SFDouble(0.007)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_axilla_distal_pt'),
                                                                                                              DEF_ : SFString('Joe_l_axilla_distal_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.16), SFDouble(1.38), SFDouble(-0.125)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))])]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('l_shoulder'),
                                                                                                          DEF_ : SFString('Joe_l_shoulder'),
                                                                                                          center_ : SFVec3f([SFDouble(0.2), SFDouble(1.44), SFDouble(-0.04)]),
                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(41), SFInt32(42), SFInt32(44), SFInt32(80), SFInt32(102), SFInt32(103), SFInt32(104), SFInt32(105)]),
                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('l_upperarm'),
                                                                                                              DEF_ : SFString('Joe_l_upperarm'),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                  geometry_ : 
                                                                                                                    IndexedLineSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.2029,1.44,-0.0387]),SFVec3f([0.2,1.1388,-0.04])])))),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2), SFDouble(1.44), SFDouble(-0.04)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('jointbox'))),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.235), SFDouble(1.42), SFDouble(-0.0625)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.25), SFDouble(1.27), SFDouble(-0.04)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.17), SFDouble(1.27), SFDouble(-0.04)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2), SFDouble(1.27), SFDouble(-0.09)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2), SFDouble(1.27), SFDouble(0.02)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_humeral_medial_epicondyle_pt'),
                                                                                                                  DEF_ : SFString('Joe_l_humeral_medial_epicondyle_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.165), SFDouble(1.1388), SFDouble(-0.04)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_radiale_pt'),
                                                                                                                  DEF_ : SFString('Joe_l_radiale_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.23), SFDouble(1.133), SFDouble(-0.055)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_humeral_lateral_epicondyle_pt'),
                                                                                                                  DEF_ : SFString('Joe_l_humeral_lateral_epicondyle_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.244), SFDouble(1.1388), SFDouble(-0.04)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_elbow'),
                                                                                                              DEF_ : SFString('Joe_l_elbow'),
                                                                                                              center_ : SFVec3f([SFDouble(0.2), SFDouble(1.1388), SFDouble(-0.04)]),
                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(45), SFInt32(46), SFInt32(47), SFInt32(109), SFInt32(110), SFInt32(111), SFInt32(112), SFInt32(113), SFInt32(115), SFInt32(116), SFInt32(117), SFInt32(118)]),
                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_forearm'),
                                                                                                                  DEF_ : SFString('Joe_l_forearm'),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      appearance_ : 
                                                                                                                        Appearance(
                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                      geometry_ : 
                                                                                                                        IndexedLineSet(
                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.2,1.1388,-0.04]),SFVec3f([0.2,0.87,-0.04])])))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.2), SFDouble(1.1388), SFDouble(-0.04)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('jointbox'))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.2), SFDouble(1.1388), SFDouble(-0.013)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('skinsphere'))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.225), SFDouble(1), SFDouble(-0.01)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('skinsphere'))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.225), SFDouble(1), SFDouble(-0.07)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('skinsphere'))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.185), SFDouble(1), SFDouble(-0.01)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('skinsphere'))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.185), SFDouble(1), SFDouble(-0.07)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('skinsphere'))),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('l_radial_styloid_pt'),
                                                                                                                      DEF_ : SFString('Joe_l_radial_styloid_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1901), SFDouble(0.8645), SFDouble(-0.0415)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('l_olecranon_pt'),
                                                                                                                      DEF_ : SFString('Joe_l_olecranon_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.2), SFDouble(1.1388), SFDouble(-0.08)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_radiocarpal'),
                                                                                                                  DEF_ : SFString('Joe_l_radiocarpal'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.2), SFDouble(0.87), SFDouble(-0.04)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(119), SFInt32(120), SFInt32(121), SFInt32(122), SFInt32(123), SFInt32(124), SFInt32(125), SFInt32(126)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_carpal'),
                                                                                                                      DEF_ : SFString('Joe_l_carpal'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.2,0.87,-0.04]),SFVec3f([0.1924,0.8472,-0.0534]),SFVec3f([0.1983,0.8024,-0.028]),SFVec3f([0.1987,0.8029,-0.053]),SFVec3f([0.1956,0.8019,-0.0794]),SFVec3f([0.1925,0.8066,-0.1036])])))),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.2), SFDouble(0.87), SFDouble(-0.04)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('l_metacarpal_phalanx_2_pt'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpal_phalanx_2_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.2009), SFDouble(0.8139), SFDouble(-0.0237)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('l_ulnar_styloid_pt'),
                                                                                                                          DEF_ : SFString('Joe_l_ulnar_styloid_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.2142), SFDouble(0.8529), SFDouble(-0.0648)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('l_metacarpal_phalanx_5_pt'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpal_phalanx_5_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1929), SFDouble(0.786), SFDouble(-0.1122)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('sitebox'))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpometacarpal_1'),
                                                                                                                      DEF_ : SFString('Joe_l_carpometacarpal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(127), SFInt32(128)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_metacarpal_1'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpal_1'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1924,0.8472,-0.0534]),SFVec3f([0.1951,0.8226,0.0246])])))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox')))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_metacarpophalangeal_1'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpophalangeal_1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(138), SFInt32(139), SFInt32(140), SFInt32(141), SFInt32(142), SFInt32(143)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_proximal_phalanx_1'),
                                                                                                                              DEF_ : SFString('Joe_l_carpal_proximal_phalanx_1'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1951,0.8226,0.0246]),SFVec3f([0.1955,0.8159,0.0464])])))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox')))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_interphalangeal_1'),
                                                                                                                              DEF_ : SFString('Joe_l_carpal_interphalangeal_1'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(144), SFInt32(145), SFInt32(146), SFInt32(147), SFInt32(148), SFInt32(149), SFInt32(150), SFInt32(151), SFInt32(152)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_1'),
                                                                                                                                  DEF_ : SFString('Joe_l_carpal_distal_phalanx_1'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.1955,0.8159,0.0464]),SFVec3f([0.1982,0.8061,0.0759])])))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_carpal_distal_phalanx_1_tip'),
                                                                                                                                      DEF_ : SFString('Joe_l_carpal_distal_phalanx_1_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1982), SFDouble(0.8061), SFDouble(0.0759)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpometacarpal_2'),
                                                                                                                      DEF_ : SFString('Joe_l_carpometacarpal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(129), SFInt32(130)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_metacarpal_2'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpal_2'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1983,0.8024,-0.028]),SFVec3f([0.1983,0.7815,-0.028])])))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox')))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_metacarpophalangeal_2'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpophalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(138), SFInt32(139), SFInt32(140), SFInt32(153), SFInt32(154), SFInt32(155), SFInt32(163)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_proximal_phalanx_2'),
                                                                                                                              DEF_ : SFString('Joe_l_carpal_proximal_phalanx_2'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1983,0.7815,-0.028]),SFVec3f([0.2017,0.7363,-0.0248])])))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox')))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_proximal_interphalangeal_2'),
                                                                                                                              DEF_ : SFString('Joe_l_carpal_proximal_interphalangeal_2'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(166), SFInt32(167), SFInt32(168), SFInt32(169)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_carpal_middle_phalanx_2'),
                                                                                                                                  DEF_ : SFString('Joe_l_carpal_middle_phalanx_2'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.2017,0.7363,-0.0248]),SFVec3f([0.2028,0.7139,-0.0236])])))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox')))]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_carpal_distal_interphalangeal_2'),
                                                                                                                                  DEF_ : SFString('Joe_l_carpal_distal_interphalangeal_2'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(170), SFInt32(171), SFInt32(172), SFInt32(173), SFInt32(174), SFInt32(175), SFInt32(176), SFInt32(177), SFInt32(178)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('l_carpal_distal_phalanx_2'),
                                                                                                                                      DEF_ : SFString('Joe_l_carpal_distal_phalanx_2'),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedLineSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0.2028,0.7139,-0.0236]),SFVec3f([0.2089,0.6858,-0.0245])])))),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('l_carpal_distal_phalanx_2_tip'),
                                                                                                                                          DEF_ : SFString('Joe_l_carpal_distal_phalanx_2_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.2089), SFDouble(0.6858), SFDouble(-0.0245)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('l_dactylion_pt'),
                                                                                                                                          DEF_ : SFString('Joe_l_dactylion_pt'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.2056), SFDouble(0.6743), SFDouble(-0.0482)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpometacarpal_3'),
                                                                                                                      DEF_ : SFString('Joe_l_carpometacarpal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(131), SFInt32(132)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_metacarpal_3'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpal_3'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1987,0.8029,-0.053]),SFVec3f([0.1987,0.7818,-0.053])])))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox')))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_metacarpophalangeal_3'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpophalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(156), SFInt32(157), SFInt32(163), SFInt32(164)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_proximal_phalanx_3'),
                                                                                                                              DEF_ : SFString('Joe_l_carpal_proximal_phalanx_3'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1987,0.7818,-0.053]),SFVec3f([0.2013,0.7273,-0.0503])])))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox')))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_proximal_interphalangeal_3'),
                                                                                                                              DEF_ : SFString('Joe_l_carpal_proximal_interphalangeal_3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(179), SFInt32(180), SFInt32(181), SFInt32(182)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_carpal_middle_phalanx_3'),
                                                                                                                                  DEF_ : SFString('Joe_l_carpal_middle_phalanx_3'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.2013,0.7273,-0.0503]),SFVec3f([0.2026,0.7011,-0.0494])])))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox')))]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_carpal_distal_interphalangeal_3'),
                                                                                                                                  DEF_ : SFString('Joe_l_carpal_distal_interphalangeal_3'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(183), SFInt32(184), SFInt32(185), SFInt32(186), SFInt32(187), SFInt32(188), SFInt32(189), SFInt32(190), SFInt32(191)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('l_carpal_distal_phalanx_3'),
                                                                                                                                      DEF_ : SFString('Joe_l_carpal_distal_phalanx_3'),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedLineSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0.2026,0.7011,-0.0494]),SFVec3f([0.208,0.6731,-0.0491])])))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('l_carpal_distal_phalanx_3_tip'),
                                                                                                                                          DEF_ : SFString('Joe_l_carpal_distal_phalanx_3_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.208), SFDouble(0.6731), SFDouble(-0.0491)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox')))])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpometacarpal_4'),
                                                                                                                      DEF_ : SFString('Joe_l_carpometacarpal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(133), SFInt32(134)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_metacarpal_4'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpal_4'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1956,0.8019,-0.0794]),SFVec3f([0.1956,0.7815,-0.0794])])))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox')))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_metacarpophalangeal_4'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpophalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(158), SFInt32(159), SFInt32(164), SFInt32(165)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_proximal_phalanx_4'),
                                                                                                                              DEF_ : SFString('Joe_l_carpal_proximal_phalanx_4'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1956,0.7815,-0.0794]),SFVec3f([0.1973,0.7287,-0.0777])])))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox')))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_proximal_interphalangeal_4'),
                                                                                                                              DEF_ : SFString('Joe_l_carpal_proximal_interphalangeal_4'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(192), SFInt32(193), SFInt32(194), SFInt32(195)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_carpal_middle_phalanx_4'),
                                                                                                                                  DEF_ : SFString('Joe_l_carpal_middle_phalanx_4'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.1973,0.7287,-0.0777]),SFVec3f([0.1983,0.7045,-0.0767])])))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox')))]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_carpal_distal_interphalangeal_4'),
                                                                                                                                  DEF_ : SFString('Joe_l_carpal_distal_interphalangeal_4'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(196), SFInt32(197), SFInt32(198), SFInt32(199), SFInt32(200), SFInt32(201), SFInt32(202), SFInt32(203), SFInt32(204)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('l_carpal_distal_phalanx_4'),
                                                                                                                                      DEF_ : SFString('Joe_l_carpal_distal_phalanx_4'),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedLineSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1983,0.7045,-0.0767]),SFVec3f([0.2035,0.675,-0.0756])])))),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('l_carpal_distal_phalanx_4_tip'),
                                                                                                                                          DEF_ : SFString('Joe_l_carpal_distal_phalanx_4_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.2035), SFDouble(0.675), SFDouble(-0.0756)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpometacarpal_5'),
                                                                                                                      DEF_ : SFString('Joe_l_carpometacarpal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(135), SFInt32(136), SFInt32(137), SFInt32(165)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_metacarpal_5'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpal_5'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1925,0.8066,-0.1036]),SFVec3f([0.1925,0.7866,-0.1036])])))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox')))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_metacarpophalangeal_5'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpophalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(160), SFInt32(161), SFInt32(162)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_proximal_phalanx_5'),
                                                                                                                              DEF_ : SFString('Joe_l_carpal_proximal_phalanx_5'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1925,0.7866,-0.1036]),SFVec3f([0.1938,0.7452,-0.1024])])))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox')))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_proximal_interphalangeal_5'),
                                                                                                                              DEF_ : SFString('Joe_l_carpal_proximal_interphalangeal_5'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(205), SFInt32(206), SFInt32(207), SFInt32(208)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_carpal_middle_phalanx_5'),
                                                                                                                                  DEF_ : SFString('Joe_l_carpal_middle_phalanx_5'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.1938,0.7452,-0.1024]),SFVec3f([0.1948,0.7277,-0.1017])]))))]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_carpal_distal_interphalangeal_5'),
                                                                                                                                  DEF_ : SFString('Joe_l_carpal_distal_interphalangeal_5'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(209), SFInt32(210), SFInt32(211), SFInt32(212), SFInt32(213), SFInt32(214), SFInt32(215), SFInt32(216), SFInt32(217)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('l_carpal_distal_phalanx_5'),
                                                                                                                                      DEF_ : SFString('Joe_l_carpal_distal_phalanx_5'),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedLineSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1948,0.7277,-0.1017]),SFVec3f([0.2014,0.7009,-0.1012])])))),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('l_carpal_distal_phalanx_5_tip'),
                                                                                                                                          DEF_ : SFString('Joe_l_carpal_distal_phalanx_5_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.2014), SFDouble(0.7009), SFDouble(-0.1012)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])])])])])])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('r_sternoclavicular'),
                                                                                                  DEF_ : SFString('Joe_r_sternoclavicular'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.03), SFDouble(1.46), SFDouble(0)]),
                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(10)]),
                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('r_clavicle'),
                                                                                                      DEF_ : SFString('Joe_r_clavicle'),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                          geometry_ : 
                                                                                                            IndexedLineSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([-0.03,1.46,0.02]),SFVec3f([-0.09,1.41,-0.09])])))),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(-0.03), SFDouble(1.46), SFDouble(0.02)]),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              USE_ : SFString('jointbox'))),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_clavicle_pt'),
                                                                                                          DEF_ : SFString('Joe_r_clavicle_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.03), SFDouble(1.46), SFDouble(0.035)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('sitebox'))])]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('r_acromioclavicular'),
                                                                                                      DEF_ : SFString('Joe_r_acromioclavicular'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.09), SFDouble(1.41), SFDouble(-0.11)]),
                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(77), SFInt32(29)]),
                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(0.9)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('r_scapula'),
                                                                                                          DEF_ : SFString('Joe_r_scapula'),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                              geometry_ : 
                                                                                                                IndexedLineSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.09,1.41,-0.09]),SFVec3f([-0.2,1.44,-0.04])])))),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.09), SFDouble(1.41), SFDouble(-0.09)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('jointbox'))),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.11), SFDouble(1.427), SFDouble(-0.1375)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('skinsphere'))),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_acromion_pt'),
                                                                                                              DEF_ : SFString('Joe_r_acromion_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.178), SFDouble(1.4825), SFDouble(-0.0625)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_axilla_proximal_pt'),
                                                                                                              DEF_ : SFString('Joe_r_axilla_proximal_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.17), SFDouble(1.38), SFDouble(0.007)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_axilla_distal_pt'),
                                                                                                              DEF_ : SFString('Joe_r_axilla_distal_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.16), SFDouble(1.38), SFDouble(-0.127)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))])]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('r_shoulder'),
                                                                                                          DEF_ : SFString('Joe_r_shoulder'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(1.44), SFDouble(-0.04)]),
                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(29), SFInt32(30), SFInt32(32), SFInt32(78), SFInt32(218), SFInt32(219), SFInt32(220), SFInt32(221), SFInt32(86), SFInt32(88)]),
                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.3), SFFloat(0.2)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('r_upperarm'),
                                                                                                              DEF_ : SFString('Joe_r_upperarm'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(1.44), SFDouble(-0.04)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('jointbox'))),

                                                                                                                Shape(
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                  geometry_ : 
                                                                                                                    IndexedLineSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.2,1.44,-0.04]),SFVec3f([-0.2,1.1388,-0.04])])))),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.178), SFDouble(1.4825), SFDouble(-0.0625)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.17), SFDouble(1.38), SFDouble(0.007)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.16), SFDouble(1.38), SFDouble(-0.127)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.235), SFDouble(1.42), SFDouble(-0.0625)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.23), SFDouble(1.235), SFDouble(-0.04)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.16), SFDouble(1.23), SFDouble(-0.04)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(1.23), SFDouble(-0.105)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(1.235), SFDouble(0.02)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_humeral_medial_epicondyle_pt'),
                                                                                                                  DEF_ : SFString('Joe_r_humeral_medial_epicondyle_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.165), SFDouble(1.1388), SFDouble(-0.04)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_radiale_pt'),
                                                                                                                  DEF_ : SFString('Joe_r_radiale_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.23), SFDouble(1.133), SFDouble(-0.055)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_humeral_lateral_epicondyle_pt'),
                                                                                                                  DEF_ : SFString('Joe_r_humeral_lateral_epicondyle_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.244), SFDouble(1.1388), SFDouble(-0.04)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_elbow'),
                                                                                                              DEF_ : SFString('Joe_r_elbow'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(1.1388), SFDouble(-0.04)]),
                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(33), SFInt32(34), SFInt32(35), SFInt32(225), SFInt32(226), SFInt32(227), SFInt32(228), SFInt32(229), SFInt32(231), SFInt32(232), SFInt32(233), SFInt32(234)]),
                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_forearm'),
                                                                                                                  DEF_ : SFString('Joe_r_forearm'),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      appearance_ : 
                                                                                                                        Appearance(
                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                      geometry_ : 
                                                                                                                        IndexedLineSet(
                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.2,1.1388,-0.04]),SFVec3f([-0.2,0.89,-0.04])])))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(1.1388), SFDouble(-0.04)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('jointbox'))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(1.1388), SFDouble(0.013)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('skinsphere'))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.225), SFDouble(1), SFDouble(-0.01)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('skinsphere'))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.225), SFDouble(1), SFDouble(-0.07)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('skinsphere'))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.185), SFDouble(1), SFDouble(-0.01)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('skinsphere'))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.185), SFDouble(1), SFDouble(-0.07)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('skinsphere'))),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('r_radial_styloid_pt'),
                                                                                                                      DEF_ : SFString('Joe_r_radial_styloid_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.9), SFDouble(-0.015)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('r_olecranon_pt'),
                                                                                                                      DEF_ : SFString('Joe_r_olecranon_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(1.1388), SFDouble(-0.08)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_radiocarpal'),
                                                                                                                  DEF_ : SFString('Joe_r_radiocarpal'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.89), SFDouble(-0.04)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(235), SFInt32(236), SFInt32(237), SFInt32(238), SFInt32(239), SFInt32(240), SFInt32(241), SFInt32(242)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_carpal'),
                                                                                                                      DEF_ : SFString('Joe_r_carpal'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.2,0.89,-0.04]),SFVec3f([-0.2,0.85,0]),SFVec3f([-0.2,0.84,-0.015]),SFVec3f([-0.2,0.835,-0.04]),SFVec3f([-0.2,0.835,-0.065]),SFVec3f([-0.2,0.84,-0.085])])))),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.89), SFDouble(-0.04)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('r_ulnar_styloid_pt'),
                                                                                                                          DEF_ : SFString('Joe_r_ulnar_styloid_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.9), SFDouble(-0.085)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('sitebox'))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_carpometacarpal_1'),
                                                                                                                      DEF_ : SFString('Joe_r_carpometacarpal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.85), SFDouble(0)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(243), SFInt32(244)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_metacarpal_1'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpal_1'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2,0.85,0]),SFVec3f([-0.2,0.82,0.03])])))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.85), SFDouble(0)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox')))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_metacarpophalangeal_1'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpophalangeal_1'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.82), SFDouble(0.03)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(254), SFInt32(255), SFInt32(256), SFInt32(257), SFInt32(258), SFInt32(259)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_proximal_phalanx_1'),
                                                                                                                              DEF_ : SFString('Joe_r_carpal_proximal_phalanx_1'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.2,0.82,0.03]),SFVec3f([-0.2,0.8,0.05])])))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.82), SFDouble(0.03)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox')))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_interphalangeal_1'),
                                                                                                                              DEF_ : SFString('Joe_r_carpal_interphalangeal_1'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.8), SFDouble(0.05)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(260), SFInt32(261), SFInt32(262), SFInt32(263), SFInt32(264), SFInt32(265), SFInt32(266), SFInt32(267), SFInt32(268)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_1'),
                                                                                                                                  DEF_ : SFString('Joe_r_carpal_distal_phalanx_1'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.2,0.8,0.05]),SFVec3f([-0.2,0.78,0.07])])))),

                                                                                                                                    Transform(
                                                                                                                                      DEF_ : SFString('Thumbnail'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.785), SFDouble(0.075)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('skinsphere'))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.8), SFDouble(0.05)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_carpal_distal_phalanx_1_tip'),
                                                                                                                                      DEF_ : SFString('Joe_r_carpal_distal_phalanx_1_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.78), SFDouble(0.07)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_carpometacarpal_2'),
                                                                                                                      DEF_ : SFString('Joe_r_carpometacarpal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.84), SFDouble(-0.015)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(245), SFInt32(246)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_metacarpal_2'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpal_2'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2,0.84,-0.015]),SFVec3f([-0.2,0.793,-0.015])])))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.84), SFDouble(-0.015)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_metacarpal_phalanx_2_pt'),
                                                                                                                              DEF_ : SFString('Joe_r_metacarpal_phalanx_2_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.793), SFDouble(-0.005)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('sitebox'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_metacarpophalangeal_2'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpophalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.793), SFDouble(-0.015)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(254), SFInt32(255), SFInt32(256), SFInt32(269), SFInt32(270), SFInt32(271), SFInt32(279)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_proximal_phalanx_2'),
                                                                                                                              DEF_ : SFString('Joe_r_carpal_proximal_phalanx_2'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.2,0.793,-0.015]),SFVec3f([-0.2,0.745,-0.015])])))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.793), SFDouble(-0.015)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox')))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_proximal_interphalangeal_2'),
                                                                                                                              DEF_ : SFString('Joe_r_carpal_proximal_interphalangeal_2'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.745), SFDouble(-0.015)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(282), SFInt32(283), SFInt32(284), SFInt32(285)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_carpal_middle_phalanx_2'),
                                                                                                                                  DEF_ : SFString('Joe_r_carpal_middle_phalanx_2'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.2,0.745,-0.015]),SFVec3f([-0.2,0.72,-0.015])])))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.745), SFDouble(-0.015)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox')))]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_carpal_distal_interphalangeal_2'),
                                                                                                                                  DEF_ : SFString('Joe_r_carpal_distal_interphalangeal_2'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.72), SFDouble(-0.015)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(286), SFInt32(287), SFInt32(288), SFInt32(289), SFInt32(290), SFInt32(291), SFInt32(292), SFInt32(293), SFInt32(294)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('r_carpal_distal_phalanx_2'),
                                                                                                                                      DEF_ : SFString('Joe_r_carpal_distal_phalanx_2'),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedLineSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.2,0.72,-0.015]),SFVec3f([-0.2,0.695,-0.015])])))),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.72), SFDouble(-0.015)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('r_carpal_distal_phalanx_2_tip'),
                                                                                                                                          DEF_ : SFString('Joe_r_carpal_distal_phalanx_2_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.695), SFDouble(-0.015)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_carpometacarpal_3'),
                                                                                                                      DEF_ : SFString('Joe_r_carpometacarpal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.835), SFDouble(-0.04)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(247), SFInt32(248)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_metacarpal_3'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpal_3'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2,0.835,-0.04]),SFVec3f([-0.2,0.788,-0.04])])))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.835), SFDouble(-0.04)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox')))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_metacarpophalangeal_3'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpophalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.788), SFDouble(-0.04)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(272), SFInt32(273), SFInt32(279), SFInt32(280)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_proximal_phalanx_3'),
                                                                                                                              DEF_ : SFString('Joe_r_carpal_proximal_phalanx_3'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.2,0.788,-0.04]),SFVec3f([-0.2,0.74,-0.04])])))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.788), SFDouble(-0.04)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox')))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_proximal_interphalangeal_3'),
                                                                                                                              DEF_ : SFString('Joe_r_carpal_proximal_interphalangeal_3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.74), SFDouble(-0.04)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(295), SFInt32(296), SFInt32(297), SFInt32(298)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_carpal_middle_phalanx_3'),
                                                                                                                                  DEF_ : SFString('Joe_r_carpal_middle_phalanx_3'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.2,0.74,-0.04]),SFVec3f([-0.2,0.7142,-0.04])])))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.74), SFDouble(-0.04)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox')))]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_carpal_distal_interphalangeal_3'),
                                                                                                                                  DEF_ : SFString('Joe_r_carpal_distal_interphalangeal_3'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.7142), SFDouble(-0.04)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(299), SFInt32(300), SFInt32(301), SFInt32(302), SFInt32(303), SFInt32(304), SFInt32(305), SFInt32(306), SFInt32(307)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('r_carpal_distal_phalanx_3'),
                                                                                                                                      DEF_ : SFString('Joe_r_carpal_distal_phalanx_3'),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedLineSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.2,0.7142,-0.04]),SFVec3f([-0.2,0.6758,-0.04])])))),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.7142), SFDouble(-0.04)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('r_dactylion_pt'),
                                                                                                                                          DEF_ : SFString('Joe_r_dactylion_pt'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.68), SFDouble(-0.04)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('r_carpal_distal_phalanx_3_tip'),
                                                                                                                                          DEF_ : SFString('Joe_r_carpal_distal_phalanx_3_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.68), SFDouble(-0.04)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_carpometacarpal_4'),
                                                                                                                      DEF_ : SFString('Joe_r_carpometacarpal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.835), SFDouble(-0.065)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(249), SFInt32(250)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_metacarpal_4'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpal_4'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2,0.835,-0.065]),SFVec3f([-0.2,0.793,-0.065])])))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.835), SFDouble(-0.065)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox')))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_metacarpophalangeal_4'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpophalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.793), SFDouble(-0.065)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(274), SFInt32(275), SFInt32(280), SFInt32(281)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_proximal_phalanx_4'),
                                                                                                                              DEF_ : SFString('Joe_r_carpal_proximal_phalanx_4'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.2,0.793,-0.065]),SFVec3f([-0.2,0.74,-0.065])])))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.793), SFDouble(-0.065)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox')))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_proximal_interphalangeal_4'),
                                                                                                                              DEF_ : SFString('Joe_r_carpal_proximal_interphalangeal_4'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.74), SFDouble(-0.065)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(308), SFInt32(309), SFInt32(310), SFInt32(311)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_carpal_middle_phalanx_4'),
                                                                                                                                  DEF_ : SFString('Joe_r_carpal_middle_phalanx_4'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.2,0.74,-0.065]),SFVec3f([-0.2,0.7177,-0.065])])))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.74), SFDouble(-0.065)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox')))]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_carpal_distal_interphalangeal_4'),
                                                                                                                                  DEF_ : SFString('Joe_r_carpal_distal_interphalangeal_4'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.7177), SFDouble(-0.065)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(312), SFInt32(313), SFInt32(314), SFInt32(315), SFInt32(316), SFInt32(317), SFInt32(318), SFInt32(319), SFInt32(320)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('r_carpal_distal_phalanx_4'),
                                                                                                                                      DEF_ : SFString('Joe_r_carpal_distal_phalanx_4'),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedLineSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.2,0.7177,-0.065]),SFVec3f([-0.2,0.695,-0.065])])))),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.7177), SFDouble(-0.065)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('r_carpal_distal_phalanx_4_tip'),
                                                                                                                                          DEF_ : SFString('Joe_r_carpal_distal_phalanx_4_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.695), SFDouble(-0.065)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_carpometacarpal_5'),
                                                                                                                      DEF_ : SFString('Joe_r_carpometacarpal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.84), SFDouble(-0.085)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(251), SFInt32(252), SFInt32(253), SFInt32(281)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_metacarpal_5'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpal_5'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2,0.84,-0.085]),SFVec3f([-0.2,0.79,-0.085])])))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.84), SFDouble(-0.085)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_metacarpal_phalanx_5_pt'),
                                                                                                                              DEF_ : SFString('Joe_r_metacarpal_phalanx_5_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.79), SFDouble(-0.095)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('sitebox'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_metacarpophalangeal_5'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpophalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.79), SFDouble(-0.085)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(276), SFInt32(277), SFInt32(278)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_proximal_phalanx_5'),
                                                                                                                              DEF_ : SFString('Joe_r_carpal_proximal_phalanx_5'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.2,0.79,-0.085]),SFVec3f([-0.2,0.755,-0.085])])))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.79), SFDouble(-0.085)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox')))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_proximal_interphalangeal_5'),
                                                                                                                              DEF_ : SFString('Joe_r_carpal_proximal_interphalangeal_5'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.755), SFDouble(-0.085)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(321), SFInt32(322), SFInt32(323), SFInt32(324)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_carpal_middle_phalanx_5'),
                                                                                                                                  DEF_ : SFString('Joe_r_carpal_middle_phalanx_5'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.2,0.755,-0.085]),SFVec3f([-0.2,0.735,-0.085])])))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.755), SFDouble(-0.085)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox')))]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_carpal_distal_interphalangeal_5'),
                                                                                                                                  DEF_ : SFString('Joe_r_carpal_distal_interphalangeal_5'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.735), SFDouble(-0.09)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(325), SFInt32(326), SFInt32(327), SFInt32(328), SFInt32(329), SFInt32(330), SFInt32(331), SFInt32(332), SFInt32(333)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('r_carpal_distal_phalanx_5'),
                                                                                                                                      DEF_ : SFString('Joe_r_carpal_distal_phalanx_5'),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedLineSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.2,0.735,-0.085]),SFVec3f([-0.2,0.72,-0.085])])))),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.735), SFDouble(-0.085)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('r_carpal_distal_phalanx_5_tip'),
                                                                                                                                          DEF_ : SFString('Joe_r_carpal_distal_phalanx_5_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.72), SFDouble(-0.085)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])])])])])])])])])])])])])])])])])])])])])])])])]),
                      skin_ : 
                        Shape(
                          DEF_ : SFString('SkinShape'),
                          appearance_ : 
                            Appearance(
                              DEF_ : SFString('SkinAppearance'),
                              material_ : 
                                Material(
                                  DEF_ : SFString('SkinMaterial'),
                                  ambientIntensity_ : 0.6,
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  shininess_ : 0.6,
                                  transparency_ : 0.2),
                              texture_ : 
                                ImageTexture(
                                  DEF_ : SFString('zBlueSpiralBkg2'),
                                  description_ : SFString('Blue Spiral Pattern'),
                                  url_ : MFString([SFString("zBlueSpiralBkg2.gif"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")]))),
                          geometry_ : 
                            IndexedFaceSet(
                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(9), SFInt32(5), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(9), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(5), SFInt32(2), SFInt32(-1), SFInt32(1), SFInt32(3), SFInt32(7), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(7), SFInt32(-1), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(2), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(8), SFInt32(-1), SFInt32(6), SFInt32(4), SFInt32(2), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(9), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(4), SFInt32(6), SFInt32(10), SFInt32(-1), SFInt32(4), SFInt32(10), SFInt32(12), SFInt32(-1), SFInt32(4), SFInt32(12), SFInt32(8), SFInt32(-1), SFInt32(10), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(9), SFInt32(75), SFInt32(24), SFInt32(-1), SFInt32(9), SFInt32(24), SFInt32(74), SFInt32(-1), SFInt32(9), SFInt32(8), SFInt32(75), SFInt32(-1), SFInt32(9), SFInt32(74), SFInt32(6), SFInt32(-1), SFInt32(10), SFInt32(6), SFInt32(74), SFInt32(-1), SFInt32(12), SFInt32(75), SFInt32(8), SFInt32(-1), SFInt32(74), SFInt32(24), SFInt32(29), SFInt32(-1), SFInt32(24), SFInt32(77), SFInt32(29), SFInt32(-1), SFInt32(10), SFInt32(74), SFInt32(29), SFInt32(-1), SFInt32(77), SFInt32(32), SFInt32(29), SFInt32(-1), SFInt32(32), SFInt32(78), SFInt32(29), SFInt32(-1), SFInt32(78), SFInt32(30), SFInt32(29), SFInt32(-1), SFInt32(30), SFInt32(10), SFInt32(29), SFInt32(-1), SFInt32(41), SFInt32(24), SFInt32(75), SFInt32(-1), SFInt32(41), SFInt32(75), SFInt32(12), SFInt32(-1), SFInt32(41), SFInt32(12), SFInt32(42), SFInt32(-1), SFInt32(41), SFInt32(42), SFInt32(80), SFInt32(-1), SFInt32(41), SFInt32(80), SFInt32(44), SFInt32(-1), SFInt32(41), SFInt32(44), SFInt32(79), SFInt32(-1), SFInt32(41), SFInt32(79), SFInt32(24), SFInt32(-1), SFInt32(81), SFInt32(24), SFInt32(79), SFInt32(-1), SFInt32(81), SFInt32(77), SFInt32(24), SFInt32(-1), SFInt32(81), SFInt32(25), SFInt32(77), SFInt32(-1), SFInt32(81), SFInt32(79), SFInt32(25), SFInt32(-1), SFInt32(25), SFInt32(79), SFInt32(44), SFInt32(-1), SFInt32(25), SFInt32(32), SFInt32(77), SFInt32(-1), SFInt32(25), SFInt32(83), SFInt32(32), SFInt32(-1), SFInt32(25), SFInt32(26), SFInt32(83), SFInt32(-1), SFInt32(25), SFInt32(27), SFInt32(26), SFInt32(-1), SFInt32(25), SFInt32(84), SFInt32(27), SFInt32(-1), SFInt32(25), SFInt32(44), SFInt32(84), SFInt32(-1), SFInt32(11), SFInt32(10), SFInt32(30), SFInt32(-1), SFInt32(11), SFInt32(30), SFInt32(13), SFInt32(-1), SFInt32(11), SFInt32(13), SFInt32(15), SFInt32(-1), SFInt32(11), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(11), SFInt32(14), SFInt32(42), SFInt32(-1), SFInt32(11), SFInt32(42), SFInt32(12), SFInt32(-1), SFInt32(15), SFInt32(13), SFInt32(16), SFInt32(-1), SFInt32(15), SFInt32(18), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(16), SFInt32(76), SFInt32(-1), SFInt32(15), SFInt32(76), SFInt32(18), SFInt32(-1), SFInt32(76), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(76), SFInt32(17), SFInt32(82), SFInt32(-1), SFInt32(76), SFInt32(82), SFInt32(19), SFInt32(-1), SFInt32(76), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(22), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(22), SFInt32(87), SFInt32(18), SFInt32(-1), SFInt32(22), SFInt32(27), SFInt32(84), SFInt32(-1), SFInt32(22), SFInt32(84), SFInt32(87), SFInt32(-1), SFInt32(87), SFInt32(84), SFInt32(85), SFInt32(-1), SFInt32(85), SFInt32(84), SFInt32(44), SFInt32(-1), SFInt32(85), SFInt32(42), SFInt32(14), SFInt32(-1), SFInt32(87), SFInt32(14), SFInt32(18), SFInt32(-1), SFInt32(87), SFInt32(85), SFInt32(14), SFInt32(-1), SFInt32(20), SFInt32(83), SFInt32(26), SFInt32(-1), SFInt32(20), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(20), SFInt32(16), SFInt32(88), SFInt32(-1), SFInt32(20), SFInt32(88), SFInt32(83), SFInt32(-1), SFInt32(88), SFInt32(16), SFInt32(13), SFInt32(-1), SFInt32(88), SFInt32(13), SFInt32(86), SFInt32(-1), SFInt32(88), SFInt32(86), SFInt32(83), SFInt32(-1), SFInt32(86), SFInt32(13), SFInt32(30), SFInt32(-1), SFInt32(86), SFInt32(32), SFInt32(83), SFInt32(-1), SFInt32(23), SFInt32(89), SFInt32(22), SFInt32(-1), SFInt32(89), SFInt32(27), SFInt32(22), SFInt32(-1), SFInt32(89), SFInt32(91), SFInt32(27), SFInt32(-1), SFInt32(91), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(91), SFInt32(20), SFInt32(26), SFInt32(-1), SFInt32(21), SFInt32(20), SFInt32(91), SFInt32(-1), SFInt32(21), SFInt32(17), SFInt32(20), SFInt32(-1), SFInt32(21), SFInt32(92), SFInt32(17), SFInt32(-1), SFInt32(82), SFInt32(17), SFInt32(92), SFInt32(-1), SFInt32(82), SFInt32(90), SFInt32(19), SFInt32(-1), SFInt32(23), SFInt32(22), SFInt32(19), SFInt32(-1), SFInt32(23), SFInt32(19), SFInt32(90), SFInt32(-1), SFInt32(82), SFInt32(92), SFInt32(101), SFInt32(-1), SFInt32(82), SFInt32(101), SFInt32(99), SFInt32(-1), SFInt32(82), SFInt32(99), SFInt32(93), SFInt32(-1), SFInt32(82), SFInt32(93), SFInt32(95), SFInt32(-1), SFInt32(82), SFInt32(95), SFInt32(97), SFInt32(-1), SFInt32(82), SFInt32(97), SFInt32(90), SFInt32(-1), SFInt32(23), SFInt32(90), SFInt32(97), SFInt32(-1), SFInt32(23), SFInt32(97), SFInt32(94), SFInt32(-1), SFInt32(23), SFInt32(94), SFInt32(89), SFInt32(-1), SFInt32(89), SFInt32(94), SFInt32(96), SFInt32(-1), SFInt32(89), SFInt32(96), SFInt32(95), SFInt32(-1), SFInt32(89), SFInt32(95), SFInt32(93), SFInt32(-1), SFInt32(89), SFInt32(93), SFInt32(91), SFInt32(-1), SFInt32(91), SFInt32(93), SFInt32(99), SFInt32(-1), SFInt32(91), SFInt32(99), SFInt32(100), SFInt32(-1), SFInt32(91), SFInt32(100), SFInt32(98), SFInt32(-1), SFInt32(21), SFInt32(91), SFInt32(98), SFInt32(-1), SFInt32(21), SFInt32(98), SFInt32(101), SFInt32(-1), SFInt32(21), SFInt32(101), SFInt32(92), SFInt32(-1), SFInt32(85), SFInt32(105), SFInt32(42), SFInt32(-1), SFInt32(85), SFInt32(103), SFInt32(105), SFInt32(-1), SFInt32(85), SFInt32(44), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(44), SFInt32(104), SFInt32(-1), SFInt32(80), SFInt32(42), SFInt32(105), SFInt32(-1), SFInt32(80), SFInt32(105), SFInt32(102), SFInt32(-1), SFInt32(80), SFInt32(102), SFInt32(104), SFInt32(-1), SFInt32(80), SFInt32(104), SFInt32(44), SFInt32(-1), SFInt32(105), SFInt32(109), SFInt32(102), SFInt32(-1), SFInt32(102), SFInt32(109), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(104), SFInt32(102), SFInt32(-1), SFInt32(104), SFInt32(47), SFInt32(45), SFInt32(-1), SFInt32(104), SFInt32(45), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(103), SFInt32(46), SFInt32(109), SFInt32(-1), SFInt32(103), SFInt32(109), SFInt32(105), SFInt32(-1), SFInt32(109), SFInt32(112), SFInt32(110), SFInt32(-1), SFInt32(109), SFInt32(110), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(110), SFInt32(111), SFInt32(-1), SFInt32(47), SFInt32(111), SFInt32(45), SFInt32(-1), SFInt32(45), SFInt32(111), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(46), SFInt32(45), SFInt32(-1), SFInt32(46), SFInt32(113), SFInt32(112), SFInt32(-1), SFInt32(112), SFInt32(109), SFInt32(46), SFInt32(-1), SFInt32(112), SFInt32(118), SFInt32(110), SFInt32(-1), SFInt32(110), SFInt32(118), SFInt32(115), SFInt32(-1), SFInt32(110), SFInt32(115), SFInt32(111), SFInt32(-1), SFInt32(111), SFInt32(115), SFInt32(117), SFInt32(-1), SFInt32(111), SFInt32(117), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(117), SFInt32(116), SFInt32(-1), SFInt32(113), SFInt32(116), SFInt32(112), SFInt32(-1), SFInt32(112), SFInt32(116), SFInt32(118), SFInt32(-1), SFInt32(115), SFInt32(118), SFInt32(119), SFInt32(-1), SFInt32(119), SFInt32(118), SFInt32(122), SFInt32(-1), SFInt32(118), SFInt32(116), SFInt32(122), SFInt32(-1), SFInt32(122), SFInt32(116), SFInt32(120), SFInt32(-1), SFInt32(116), SFInt32(117), SFInt32(120), SFInt32(-1), SFInt32(120), SFInt32(117), SFInt32(121), SFInt32(-1), SFInt32(117), SFInt32(115), SFInt32(121), SFInt32(-1), SFInt32(115), SFInt32(119), SFInt32(121), SFInt32(-1), SFInt32(119), SFInt32(127), SFInt32(123), SFInt32(-1), SFInt32(119), SFInt32(122), SFInt32(127), SFInt32(-1), SFInt32(122), SFInt32(126), SFInt32(127), SFInt32(-1), SFInt32(122), SFInt32(128), SFInt32(126), SFInt32(-1), SFInt32(122), SFInt32(120), SFInt32(128), SFInt32(-1), SFInt32(120), SFInt32(124), SFInt32(128), SFInt32(-1), SFInt32(120), SFInt32(121), SFInt32(124), SFInt32(-1), SFInt32(121), SFInt32(125), SFInt32(124), SFInt32(-1), SFInt32(121), SFInt32(119), SFInt32(125), SFInt32(-1), SFInt32(119), SFInt32(123), SFInt32(125), SFInt32(-1), SFInt32(127), SFInt32(129), SFInt32(123), SFInt32(-1), SFInt32(127), SFInt32(126), SFInt32(129), SFInt32(-1), SFInt32(129), SFInt32(126), SFInt32(141), SFInt32(-1), SFInt32(141), SFInt32(126), SFInt32(143), SFInt32(-1), SFInt32(126), SFInt32(142), SFInt32(143), SFInt32(-1), SFInt32(126), SFInt32(128), SFInt32(142), SFInt32(-1), SFInt32(128), SFInt32(124), SFInt32(130), SFInt32(-1), SFInt32(142), SFInt32(128), SFInt32(130), SFInt32(-1), SFInt32(124), SFInt32(132), SFInt32(130), SFInt32(-1), SFInt32(124), SFInt32(134), SFInt32(132), SFInt32(-1), SFInt32(125), SFInt32(134), SFInt32(124), SFInt32(-1), SFInt32(125), SFInt32(136), SFInt32(134), SFInt32(-1), SFInt32(125), SFInt32(137), SFInt32(136), SFInt32(-1), SFInt32(125), SFInt32(135), SFInt32(137), SFInt32(-1), SFInt32(125), SFInt32(133), SFInt32(135), SFInt32(-1), SFInt32(125), SFInt32(123), SFInt32(133), SFInt32(-1), SFInt32(123), SFInt32(131), SFInt32(133), SFInt32(-1), SFInt32(123), SFInt32(129), SFInt32(131), SFInt32(-1), SFInt32(131), SFInt32(129), SFInt32(138), SFInt32(-1), SFInt32(129), SFInt32(141), SFInt32(138), SFInt32(-1), SFInt32(138), SFInt32(141), SFInt32(144), SFInt32(-1), SFInt32(141), SFInt32(143), SFInt32(144), SFInt32(-1), SFInt32(143), SFInt32(146), SFInt32(144), SFInt32(-1), SFInt32(142), SFInt32(146), SFInt32(143), SFInt32(-1), SFInt32(142), SFInt32(145), SFInt32(146), SFInt32(-1), SFInt32(139), SFInt32(145), SFInt32(142), SFInt32(-1), SFInt32(130), SFInt32(139), SFInt32(142), SFInt32(-1), SFInt32(139), SFInt32(130), SFInt32(132), SFInt32(-1), SFInt32(139), SFInt32(132), SFInt32(154), SFInt32(-1), SFInt32(132), SFInt32(157), SFInt32(154), SFInt32(-1), SFInt32(132), SFInt32(159), SFInt32(157), SFInt32(-1), SFInt32(132), SFInt32(134), SFInt32(159), SFInt32(-1), SFInt32(134), SFInt32(136), SFInt32(159), SFInt32(-1), SFInt32(136), SFInt32(161), SFInt32(159), SFInt32(-1), SFInt32(136), SFInt32(137), SFInt32(161), SFInt32(-1), SFInt32(137), SFInt32(162), SFInt32(161), SFInt32(-1), SFInt32(160), SFInt32(162), SFInt32(137), SFInt32(-1), SFInt32(135), SFInt32(160), SFInt32(137), SFInt32(-1), SFInt32(133), SFInt32(160), SFInt32(135), SFInt32(-1), SFInt32(133), SFInt32(158), SFInt32(160), SFInt32(-1), SFInt32(131), SFInt32(158), SFInt32(133), SFInt32(-1), SFInt32(156), SFInt32(158), SFInt32(131), SFInt32(-1), SFInt32(153), SFInt32(156), SFInt32(131), SFInt32(-1), SFInt32(131), SFInt32(138), SFInt32(153), SFInt32(-1), SFInt32(138), SFInt32(155), SFInt32(153), SFInt32(-1), SFInt32(140), SFInt32(155), SFInt32(138), SFInt32(-1), SFInt32(138), SFInt32(144), SFInt32(140), SFInt32(-1), SFInt32(144), SFInt32(147), SFInt32(140), SFInt32(-1), SFInt32(140), SFInt32(147), SFInt32(145), SFInt32(-1), SFInt32(140), SFInt32(145), SFInt32(139), SFInt32(-1), SFInt32(139), SFInt32(155), SFInt32(140), SFInt32(-1), SFInt32(154), SFInt32(155), SFInt32(139), SFInt32(-1), SFInt32(146), SFInt32(149), SFInt32(144), SFInt32(-1), SFInt32(146), SFInt32(151), SFInt32(149), SFInt32(-1), SFInt32(145), SFInt32(151), SFInt32(146), SFInt32(-1), SFInt32(150), SFInt32(151), SFInt32(145), SFInt32(-1), SFInt32(145), SFInt32(152), SFInt32(150), SFInt32(-1), SFInt32(147), SFInt32(152), SFInt32(145), SFInt32(-1), SFInt32(147), SFInt32(149), SFInt32(152), SFInt32(-1), SFInt32(147), SFInt32(144), SFInt32(149), SFInt32(-1), SFInt32(148), SFInt32(149), SFInt32(151), SFInt32(-1), SFInt32(148), SFInt32(152), SFInt32(149), SFInt32(-1), SFInt32(148), SFInt32(150), SFInt32(152), SFInt32(-1), SFInt32(148), SFInt32(151), SFInt32(150), SFInt32(-1), SFInt32(160), SFInt32(207), SFInt32(162), SFInt32(-1), SFInt32(160), SFInt32(205), SFInt32(207), SFInt32(-1), SFInt32(165), SFInt32(208), SFInt32(205), SFInt32(-1), SFInt32(160), SFInt32(165), SFInt32(205), SFInt32(-1), SFInt32(158), SFInt32(165), SFInt32(160), SFInt32(-1), SFInt32(161), SFInt32(162), SFInt32(207), SFInt32(-1), SFInt32(161), SFInt32(207), SFInt32(206), SFInt32(-1), SFInt32(165), SFInt32(206), SFInt32(208), SFInt32(-1), SFInt32(206), SFInt32(165), SFInt32(161), SFInt32(-1), SFInt32(161), SFInt32(165), SFInt32(159), SFInt32(-1), SFInt32(207), SFInt32(209), SFInt32(211), SFInt32(-1), SFInt32(205), SFInt32(209), SFInt32(207), SFInt32(-1), SFInt32(205), SFInt32(212), SFInt32(209), SFInt32(-1), SFInt32(205), SFInt32(208), SFInt32(212), SFInt32(-1), SFInt32(206), SFInt32(212), SFInt32(208), SFInt32(-1), SFInt32(206), SFInt32(210), SFInt32(212), SFInt32(-1), SFInt32(206), SFInt32(207), SFInt32(210), SFInt32(-1), SFInt32(207), SFInt32(211), SFInt32(210), SFInt32(-1), SFInt32(209), SFInt32(212), SFInt32(213), SFInt32(-1), SFInt32(212), SFInt32(216), SFInt32(213), SFInt32(-1), SFInt32(212), SFInt32(214), SFInt32(216), SFInt32(-1), SFInt32(210), SFInt32(214), SFInt32(212), SFInt32(-1), SFInt32(210), SFInt32(215), SFInt32(214), SFInt32(-1), SFInt32(210), SFInt32(211), SFInt32(215), SFInt32(-1), SFInt32(209), SFInt32(215), SFInt32(211), SFInt32(-1), SFInt32(209), SFInt32(213), SFInt32(215), SFInt32(-1), SFInt32(217), SFInt32(213), SFInt32(216), SFInt32(-1), SFInt32(217), SFInt32(215), SFInt32(213), SFInt32(-1), SFInt32(217), SFInt32(214), SFInt32(215), SFInt32(-1), SFInt32(217), SFInt32(216), SFInt32(214), SFInt32(-1), SFInt32(158), SFInt32(194), SFInt32(165), SFInt32(-1), SFInt32(192), SFInt32(194), SFInt32(158), SFInt32(-1), SFInt32(164), SFInt32(195), SFInt32(192), SFInt32(-1), SFInt32(158), SFInt32(164), SFInt32(192), SFInt32(-1), SFInt32(156), SFInt32(164), SFInt32(158), SFInt32(-1), SFInt32(159), SFInt32(194), SFInt32(165), SFInt32(-1), SFInt32(159), SFInt32(194), SFInt32(193), SFInt32(-1), SFInt32(159), SFInt32(193), SFInt32(195), SFInt32(-1), SFInt32(159), SFInt32(195), SFInt32(164), SFInt32(-1), SFInt32(159), SFInt32(164), SFInt32(157), SFInt32(-1), SFInt32(157), SFInt32(164), SFInt32(180), SFInt32(-1), SFInt32(192), SFInt32(198), SFInt32(194), SFInt32(-1), SFInt32(192), SFInt32(196), SFInt32(198), SFInt32(-1), SFInt32(192), SFInt32(195), SFInt32(196), SFInt32(-1), SFInt32(195), SFInt32(199), SFInt32(196), SFInt32(-1), SFInt32(196), SFInt32(199), SFInt32(200), SFInt32(-1), SFInt32(199), SFInt32(203), SFInt32(200), SFInt32(-1), SFInt32(193), SFInt32(199), SFInt32(195), SFInt32(-1), SFInt32(193), SFInt32(197), SFInt32(199), SFInt32(-1), SFInt32(193), SFInt32(198), SFInt32(197), SFInt32(-1), SFInt32(193), SFInt32(194), SFInt32(198), SFInt32(-1), SFInt32(199), SFInt32(201), SFInt32(203), SFInt32(-1), SFInt32(197), SFInt32(201), SFInt32(199), SFInt32(-1), SFInt32(197), SFInt32(198), SFInt32(201), SFInt32(-1), SFInt32(198), SFInt32(202), SFInt32(201), SFInt32(-1), SFInt32(196), SFInt32(202), SFInt32(198), SFInt32(-1), SFInt32(200), SFInt32(202), SFInt32(196), SFInt32(-1), SFInt32(204), SFInt32(202), SFInt32(200), SFInt32(-1), SFInt32(204), SFInt32(201), SFInt32(202), SFInt32(-1), SFInt32(204), SFInt32(203), SFInt32(201), SFInt32(-1), SFInt32(204), SFInt32(200), SFInt32(203), SFInt32(-1), SFInt32(156), SFInt32(181), SFInt32(164), SFInt32(-1), SFInt32(156), SFInt32(179), SFInt32(181), SFInt32(-1), SFInt32(156), SFInt32(182), SFInt32(179), SFInt32(-1), SFInt32(156), SFInt32(163), SFInt32(182), SFInt32(-1), SFInt32(163), SFInt32(180), SFInt32(182), SFInt32(-1), SFInt32(157), SFInt32(180), SFInt32(163), SFInt32(-1), SFInt32(164), SFInt32(181), SFInt32(180), SFInt32(-1), SFInt32(179), SFInt32(182), SFInt32(183), SFInt32(-1), SFInt32(182), SFInt32(186), SFInt32(183), SFInt32(-1), SFInt32(182), SFInt32(184), SFInt32(186), SFInt32(-1), SFInt32(180), SFInt32(184), SFInt32(182), SFInt32(-1), SFInt32(180), SFInt32(181), SFInt32(184), SFInt32(-1), SFInt32(181), SFInt32(185), SFInt32(184), SFInt32(-1), SFInt32(179), SFInt32(185), SFInt32(181), SFInt32(-1), SFInt32(183), SFInt32(185), SFInt32(179), SFInt32(-1), SFInt32(183), SFInt32(186), SFInt32(187), SFInt32(-1), SFInt32(186), SFInt32(190), SFInt32(187), SFInt32(-1), SFInt32(184), SFInt32(190), SFInt32(186), SFInt32(-1), SFInt32(184), SFInt32(188), SFInt32(190), SFInt32(-1), SFInt32(184), SFInt32(185), SFInt32(188), SFInt32(-1), SFInt32(185), SFInt32(189), SFInt32(188), SFInt32(-1), SFInt32(185), SFInt32(183), SFInt32(189), SFInt32(-1), SFInt32(183), SFInt32(187), SFInt32(189), SFInt32(-1), SFInt32(191), SFInt32(189), SFInt32(187), SFInt32(-1), SFInt32(191), SFInt32(188), SFInt32(189), SFInt32(-1), SFInt32(191), SFInt32(190), SFInt32(188), SFInt32(-1), SFInt32(191), SFInt32(187), SFInt32(190), SFInt32(-1), SFInt32(153), SFInt32(163), SFInt32(156), SFInt32(-1), SFInt32(153), SFInt32(168), SFInt32(163), SFInt32(-1), SFInt32(153), SFInt32(166), SFInt32(168), SFInt32(-1), SFInt32(153), SFInt32(169), SFInt32(166), SFInt32(-1), SFInt32(155), SFInt32(169), SFInt32(153), SFInt32(-1), SFInt32(155), SFInt32(167), SFInt32(169), SFInt32(-1), SFInt32(154), SFInt32(167), SFInt32(155), SFInt32(-1), SFInt32(154), SFInt32(163), SFInt32(167), SFInt32(-1), SFInt32(154), SFInt32(157), SFInt32(163), SFInt32(-1), SFInt32(163), SFInt32(168), SFInt32(167), SFInt32(-1), SFInt32(166), SFInt32(169), SFInt32(170), SFInt32(-1), SFInt32(169), SFInt32(173), SFInt32(170), SFInt32(-1), SFInt32(169), SFInt32(171), SFInt32(173), SFInt32(-1), SFInt32(169), SFInt32(167), SFInt32(171), SFInt32(-1), SFInt32(167), SFInt32(168), SFInt32(171), SFInt32(-1), SFInt32(168), SFInt32(172), SFInt32(171), SFInt32(-1), SFInt32(168), SFInt32(170), SFInt32(172), SFInt32(-1), SFInt32(170), SFInt32(168), SFInt32(166), SFInt32(-1), SFInt32(170), SFInt32(173), SFInt32(174), SFInt32(-1), SFInt32(173), SFInt32(177), SFInt32(174), SFInt32(-1), SFInt32(173), SFInt32(175), SFInt32(177), SFInt32(-1), SFInt32(173), SFInt32(171), SFInt32(175), SFInt32(-1), SFInt32(171), SFInt32(172), SFInt32(175), SFInt32(-1), SFInt32(172), SFInt32(176), SFInt32(175), SFInt32(-1), SFInt32(172), SFInt32(174), SFInt32(176), SFInt32(-1), SFInt32(170), SFInt32(174), SFInt32(172), SFInt32(-1), SFInt32(178), SFInt32(176), SFInt32(174), SFInt32(-1), SFInt32(178), SFInt32(175), SFInt32(176), SFInt32(-1), SFInt32(178), SFInt32(177), SFInt32(175), SFInt32(-1), SFInt32(178), SFInt32(174), SFInt32(177), SFInt32(-1), SFInt32(86), SFInt32(30), SFInt32(221), SFInt32(-1), SFInt32(86), SFInt32(221), SFInt32(219), SFInt32(-1), SFInt32(86), SFInt32(219), SFInt32(32), SFInt32(-1), SFInt32(32), SFInt32(219), SFInt32(220), SFInt32(-1), SFInt32(78), SFInt32(32), SFInt32(220), SFInt32(-1), SFInt32(78), SFInt32(220), SFInt32(218), SFInt32(-1), SFInt32(78), SFInt32(218), SFInt32(221), SFInt32(-1), SFInt32(78), SFInt32(221), SFInt32(30), SFInt32(-1), SFInt32(221), SFInt32(225), SFInt32(219), SFInt32(-1), SFInt32(219), SFInt32(225), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(33), SFInt32(219), SFInt32(-1), SFInt32(33), SFInt32(220), SFInt32(219), SFInt32(-1), SFInt32(33), SFInt32(34), SFInt32(220), SFInt32(-1), SFInt32(220), SFInt32(34), SFInt32(218), SFInt32(-1), SFInt32(221), SFInt32(218), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(225), SFInt32(221), SFInt32(-1), SFInt32(225), SFInt32(226), SFInt32(228), SFInt32(-1), SFInt32(225), SFInt32(228), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(228), SFInt32(229), SFInt32(-1), SFInt32(35), SFInt32(229), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(229), SFInt32(227), SFInt32(-1), SFInt32(33), SFInt32(227), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(227), SFInt32(226), SFInt32(-1), SFInt32(34), SFInt32(226), SFInt32(225), SFInt32(-1), SFInt32(226), SFInt32(234), SFInt32(228), SFInt32(-1), SFInt32(228), SFInt32(234), SFInt32(232), SFInt32(-1), SFInt32(232), SFInt32(229), SFInt32(228), SFInt32(-1), SFInt32(232), SFInt32(233), SFInt32(229), SFInt32(-1), SFInt32(229), SFInt32(233), SFInt32(227), SFInt32(-1), SFInt32(227), SFInt32(233), SFInt32(231), SFInt32(-1), SFInt32(227), SFInt32(231), SFInt32(226), SFInt32(-1), SFInt32(226), SFInt32(231), SFInt32(234), SFInt32(-1), SFInt32(231), SFInt32(235), SFInt32(234), SFInt32(-1), SFInt32(235), SFInt32(238), SFInt32(234), SFInt32(-1), SFInt32(234), SFInt32(238), SFInt32(232), SFInt32(-1), SFInt32(238), SFInt32(236), SFInt32(232), SFInt32(-1), SFInt32(232), SFInt32(236), SFInt32(233), SFInt32(-1), SFInt32(236), SFInt32(237), SFInt32(233), SFInt32(-1), SFInt32(233), SFInt32(237), SFInt32(231), SFInt32(-1), SFInt32(231), SFInt32(237), SFInt32(235), SFInt32(-1), SFInt32(235), SFInt32(239), SFInt32(243), SFInt32(-1), SFInt32(235), SFInt32(243), SFInt32(238), SFInt32(-1), SFInt32(238), SFInt32(243), SFInt32(242), SFInt32(-1), SFInt32(238), SFInt32(242), SFInt32(244), SFInt32(-1), SFInt32(238), SFInt32(244), SFInt32(236), SFInt32(-1), SFInt32(236), SFInt32(244), SFInt32(240), SFInt32(-1), SFInt32(236), SFInt32(240), SFInt32(237), SFInt32(-1), SFInt32(237), SFInt32(240), SFInt32(241), SFInt32(-1), SFInt32(237), SFInt32(241), SFInt32(235), SFInt32(-1), SFInt32(235), SFInt32(241), SFInt32(239), SFInt32(-1), SFInt32(243), SFInt32(239), SFInt32(245), SFInt32(-1), SFInt32(243), SFInt32(245), SFInt32(242), SFInt32(-1), SFInt32(245), SFInt32(257), SFInt32(242), SFInt32(-1), SFInt32(257), SFInt32(259), SFInt32(242), SFInt32(-1), SFInt32(242), SFInt32(259), SFInt32(258), SFInt32(-1), SFInt32(242), SFInt32(258), SFInt32(244), SFInt32(-1), SFInt32(244), SFInt32(246), SFInt32(240), SFInt32(-1), SFInt32(258), SFInt32(246), SFInt32(244), SFInt32(-1), SFInt32(240), SFInt32(246), SFInt32(248), SFInt32(-1), SFInt32(240), SFInt32(248), SFInt32(250), SFInt32(-1), SFInt32(241), SFInt32(240), SFInt32(250), SFInt32(-1), SFInt32(241), SFInt32(250), SFInt32(252), SFInt32(-1), SFInt32(241), SFInt32(252), SFInt32(253), SFInt32(-1), SFInt32(241), SFInt32(253), SFInt32(251), SFInt32(-1), SFInt32(241), SFInt32(251), SFInt32(249), SFInt32(-1), SFInt32(241), SFInt32(249), SFInt32(239), SFInt32(-1), SFInt32(239), SFInt32(249), SFInt32(247), SFInt32(-1), SFInt32(239), SFInt32(247), SFInt32(245), SFInt32(-1), SFInt32(247), SFInt32(254), SFInt32(245), SFInt32(-1), SFInt32(245), SFInt32(254), SFInt32(257), SFInt32(-1), SFInt32(254), SFInt32(260), SFInt32(257), SFInt32(-1), SFInt32(257), SFInt32(260), SFInt32(259), SFInt32(-1), SFInt32(259), SFInt32(260), SFInt32(262), SFInt32(-1), SFInt32(258), SFInt32(259), SFInt32(262), SFInt32(-1), SFInt32(258), SFInt32(262), SFInt32(261), SFInt32(-1), SFInt32(255), SFInt32(258), SFInt32(261), SFInt32(-1), SFInt32(246), SFInt32(258), SFInt32(255), SFInt32(-1), SFInt32(255), SFInt32(248), SFInt32(246), SFInt32(-1), SFInt32(255), SFInt32(270), SFInt32(248), SFInt32(-1), SFInt32(248), SFInt32(270), SFInt32(273), SFInt32(-1), SFInt32(248), SFInt32(273), SFInt32(275), SFInt32(-1), SFInt32(248), SFInt32(275), SFInt32(250), SFInt32(-1), SFInt32(250), SFInt32(275), SFInt32(252), SFInt32(-1), SFInt32(252), SFInt32(275), SFInt32(277), SFInt32(-1), SFInt32(252), SFInt32(277), SFInt32(253), SFInt32(-1), SFInt32(253), SFInt32(277), SFInt32(278), SFInt32(-1), SFInt32(276), SFInt32(253), SFInt32(278), SFInt32(-1), SFInt32(251), SFInt32(253), SFInt32(276), SFInt32(-1), SFInt32(249), SFInt32(251), SFInt32(276), SFInt32(-1), SFInt32(249), SFInt32(276), SFInt32(274), SFInt32(-1), SFInt32(247), SFInt32(249), SFInt32(274), SFInt32(-1), SFInt32(272), SFInt32(247), SFInt32(274), SFInt32(-1), SFInt32(269), SFInt32(247), SFInt32(272), SFInt32(-1), SFInt32(247), SFInt32(269), SFInt32(254), SFInt32(-1), SFInt32(254), SFInt32(269), SFInt32(271), SFInt32(-1), SFInt32(256), SFInt32(254), SFInt32(271), SFInt32(-1), SFInt32(254), SFInt32(256), SFInt32(260), SFInt32(-1), SFInt32(260), SFInt32(256), SFInt32(263), SFInt32(-1), SFInt32(256), SFInt32(261), SFInt32(263), SFInt32(-1), SFInt32(256), SFInt32(255), SFInt32(261), SFInt32(-1), SFInt32(255), SFInt32(256), SFInt32(271), SFInt32(-1), SFInt32(270), SFInt32(255), SFInt32(271), SFInt32(-1), SFInt32(262), SFInt32(260), SFInt32(265), SFInt32(-1), SFInt32(262), SFInt32(265), SFInt32(267), SFInt32(-1), SFInt32(261), SFInt32(262), SFInt32(267), SFInt32(-1), SFInt32(266), SFInt32(261), SFInt32(267), SFInt32(-1), SFInt32(261), SFInt32(266), SFInt32(268), SFInt32(-1), SFInt32(263), SFInt32(261), SFInt32(268), SFInt32(-1), SFInt32(263), SFInt32(268), SFInt32(265), SFInt32(-1), SFInt32(263), SFInt32(265), SFInt32(260), SFInt32(-1), SFInt32(264), SFInt32(267), SFInt32(265), SFInt32(-1), SFInt32(264), SFInt32(265), SFInt32(268), SFInt32(-1), SFInt32(264), SFInt32(268), SFInt32(266), SFInt32(-1), SFInt32(264), SFInt32(266), SFInt32(267), SFInt32(-1), SFInt32(276), SFInt32(278), SFInt32(323), SFInt32(-1), SFInt32(276), SFInt32(323), SFInt32(321), SFInt32(-1), SFInt32(281), SFInt32(321), SFInt32(324), SFInt32(-1), SFInt32(276), SFInt32(321), SFInt32(281), SFInt32(-1), SFInt32(274), SFInt32(276), SFInt32(281), SFInt32(-1), SFInt32(277), SFInt32(323), SFInt32(278), SFInt32(-1), SFInt32(277), SFInt32(322), SFInt32(323), SFInt32(-1), SFInt32(281), SFInt32(324), SFInt32(322), SFInt32(-1), SFInt32(322), SFInt32(277), SFInt32(281), SFInt32(-1), SFInt32(277), SFInt32(275), SFInt32(281), SFInt32(-1), SFInt32(323), SFInt32(327), SFInt32(325), SFInt32(-1), SFInt32(321), SFInt32(323), SFInt32(325), SFInt32(-1), SFInt32(321), SFInt32(325), SFInt32(328), SFInt32(-1), SFInt32(321), SFInt32(328), SFInt32(324), SFInt32(-1), SFInt32(322), SFInt32(324), SFInt32(328), SFInt32(-1), SFInt32(322), SFInt32(328), SFInt32(326), SFInt32(-1), SFInt32(322), SFInt32(326), SFInt32(323), SFInt32(-1), SFInt32(323), SFInt32(326), SFInt32(327), SFInt32(-1), SFInt32(325), SFInt32(329), SFInt32(328), SFInt32(-1), SFInt32(328), SFInt32(329), SFInt32(332), SFInt32(-1), SFInt32(328), SFInt32(332), SFInt32(330), SFInt32(-1), SFInt32(326), SFInt32(328), SFInt32(330), SFInt32(-1), SFInt32(326), SFInt32(330), SFInt32(331), SFInt32(-1), SFInt32(326), SFInt32(331), SFInt32(327), SFInt32(-1), SFInt32(325), SFInt32(327), SFInt32(331), SFInt32(-1), SFInt32(325), SFInt32(331), SFInt32(329), SFInt32(-1), SFInt32(333), SFInt32(332), SFInt32(329), SFInt32(-1), SFInt32(333), SFInt32(329), SFInt32(331), SFInt32(-1), SFInt32(333), SFInt32(331), SFInt32(330), SFInt32(-1), SFInt32(333), SFInt32(330), SFInt32(332), SFInt32(-1), SFInt32(274), SFInt32(281), SFInt32(310), SFInt32(-1), SFInt32(308), SFInt32(274), SFInt32(310), SFInt32(-1), SFInt32(280), SFInt32(308), SFInt32(311), SFInt32(-1), SFInt32(274), SFInt32(308), SFInt32(280), SFInt32(-1), SFInt32(272), SFInt32(274), SFInt32(280), SFInt32(-1), SFInt32(275), SFInt32(310), SFInt32(281), SFInt32(-1), SFInt32(275), SFInt32(309), SFInt32(310), SFInt32(-1), SFInt32(275), SFInt32(311), SFInt32(309), SFInt32(-1), SFInt32(275), SFInt32(280), SFInt32(311), SFInt32(-1), SFInt32(275), SFInt32(273), SFInt32(280), SFInt32(-1), SFInt32(273), SFInt32(296), SFInt32(280), SFInt32(-1), SFInt32(308), SFInt32(310), SFInt32(314), SFInt32(-1), SFInt32(308), SFInt32(314), SFInt32(312), SFInt32(-1), SFInt32(308), SFInt32(312), SFInt32(311), SFInt32(-1), SFInt32(311), SFInt32(312), SFInt32(315), SFInt32(-1), SFInt32(312), SFInt32(316), SFInt32(315), SFInt32(-1), SFInt32(315), SFInt32(316), SFInt32(319), SFInt32(-1), SFInt32(309), SFInt32(311), SFInt32(315), SFInt32(-1), SFInt32(309), SFInt32(315), SFInt32(313), SFInt32(-1), SFInt32(309), SFInt32(313), SFInt32(314), SFInt32(-1), SFInt32(309), SFInt32(314), SFInt32(310), SFInt32(-1), SFInt32(315), SFInt32(319), SFInt32(317), SFInt32(-1), SFInt32(313), SFInt32(315), SFInt32(317), SFInt32(-1), SFInt32(313), SFInt32(317), SFInt32(314), SFInt32(-1), SFInt32(314), SFInt32(317), SFInt32(318), SFInt32(-1), SFInt32(312), SFInt32(314), SFInt32(318), SFInt32(-1), SFInt32(316), SFInt32(312), SFInt32(318), SFInt32(-1), SFInt32(320), SFInt32(316), SFInt32(318), SFInt32(-1), SFInt32(320), SFInt32(318), SFInt32(317), SFInt32(-1), SFInt32(320), SFInt32(317), SFInt32(319), SFInt32(-1), SFInt32(320), SFInt32(319), SFInt32(316), SFInt32(-1), SFInt32(272), SFInt32(280), SFInt32(297), SFInt32(-1), SFInt32(272), SFInt32(297), SFInt32(295), SFInt32(-1), SFInt32(272), SFInt32(295), SFInt32(298), SFInt32(-1), SFInt32(272), SFInt32(298), SFInt32(279), SFInt32(-1), SFInt32(279), SFInt32(298), SFInt32(296), SFInt32(-1), SFInt32(273), SFInt32(279), SFInt32(296), SFInt32(-1), SFInt32(280), SFInt32(296), SFInt32(297), SFInt32(-1), SFInt32(295), SFInt32(299), SFInt32(298), SFInt32(-1), SFInt32(298), SFInt32(299), SFInt32(302), SFInt32(-1), SFInt32(298), SFInt32(302), SFInt32(300), SFInt32(-1), SFInt32(296), SFInt32(298), SFInt32(300), SFInt32(-1), SFInt32(296), SFInt32(300), SFInt32(297), SFInt32(-1), SFInt32(297), SFInt32(300), SFInt32(301), SFInt32(-1), SFInt32(295), SFInt32(297), SFInt32(301), SFInt32(-1), SFInt32(299), SFInt32(295), SFInt32(301), SFInt32(-1), SFInt32(299), SFInt32(303), SFInt32(302), SFInt32(-1), SFInt32(302), SFInt32(303), SFInt32(306), SFInt32(-1), SFInt32(300), SFInt32(302), SFInt32(306), SFInt32(-1), SFInt32(300), SFInt32(306), SFInt32(304), SFInt32(-1), SFInt32(300), SFInt32(304), SFInt32(301), SFInt32(-1), SFInt32(301), SFInt32(304), SFInt32(305), SFInt32(-1), SFInt32(301), SFInt32(305), SFInt32(299), SFInt32(-1), SFInt32(299), SFInt32(305), SFInt32(303), SFInt32(-1), SFInt32(307), SFInt32(303), SFInt32(305), SFInt32(-1), SFInt32(307), SFInt32(305), SFInt32(304), SFInt32(-1), SFInt32(307), SFInt32(304), SFInt32(306), SFInt32(-1), SFInt32(307), SFInt32(306), SFInt32(303), SFInt32(-1), SFInt32(269), SFInt32(272), SFInt32(279), SFInt32(-1), SFInt32(269), SFInt32(279), SFInt32(284), SFInt32(-1), SFInt32(269), SFInt32(284), SFInt32(282), SFInt32(-1), SFInt32(269), SFInt32(282), SFInt32(285), SFInt32(-1), SFInt32(271), SFInt32(269), SFInt32(285), SFInt32(-1), SFInt32(271), SFInt32(285), SFInt32(283), SFInt32(-1), SFInt32(270), SFInt32(271), SFInt32(283), SFInt32(-1), SFInt32(270), SFInt32(283), SFInt32(279), SFInt32(-1), SFInt32(270), SFInt32(279), SFInt32(273), SFInt32(-1), SFInt32(279), SFInt32(283), SFInt32(284), SFInt32(-1), SFInt32(282), SFInt32(286), SFInt32(285), SFInt32(-1), SFInt32(285), SFInt32(286), SFInt32(289), SFInt32(-1), SFInt32(285), SFInt32(289), SFInt32(287), SFInt32(-1), SFInt32(285), SFInt32(287), SFInt32(283), SFInt32(-1), SFInt32(283), SFInt32(287), SFInt32(284), SFInt32(-1), SFInt32(284), SFInt32(287), SFInt32(288), SFInt32(-1), SFInt32(284), SFInt32(288), SFInt32(286), SFInt32(-1), SFInt32(286), SFInt32(282), SFInt32(284), SFInt32(-1), SFInt32(286), SFInt32(290), SFInt32(289), SFInt32(-1), SFInt32(289), SFInt32(290), SFInt32(293), SFInt32(-1), SFInt32(289), SFInt32(293), SFInt32(291), SFInt32(-1), SFInt32(289), SFInt32(291), SFInt32(287), SFInt32(-1), SFInt32(287), SFInt32(291), SFInt32(288), SFInt32(-1), SFInt32(288), SFInt32(291), SFInt32(292), SFInt32(-1), SFInt32(288), SFInt32(292), SFInt32(290), SFInt32(-1), SFInt32(286), SFInt32(288), SFInt32(290), SFInt32(-1), SFInt32(294), SFInt32(290), SFInt32(292), SFInt32(-1), SFInt32(294), SFInt32(292), SFInt32(291), SFInt32(-1), SFInt32(294), SFInt32(291), SFInt32(293), SFInt32(-1), SFInt32(294), SFInt32(293), SFInt32(290), SFInt32(-1), SFInt32(97), SFInt32(334), SFInt32(336), SFInt32(-1), SFInt32(97), SFInt32(336), SFInt32(94), SFInt32(-1), SFInt32(94), SFInt32(336), SFInt32(96), SFInt32(-1), SFInt32(336), SFInt32(335), SFInt32(96), SFInt32(-1), SFInt32(96), SFInt32(335), SFInt32(95), SFInt32(-1), SFInt32(95), SFInt32(335), SFInt32(337), SFInt32(-1), SFInt32(95), SFInt32(337), SFInt32(334), SFInt32(-1), SFInt32(95), SFInt32(334), SFInt32(97), SFInt32(-1), SFInt32(334), SFInt32(341), SFInt32(336), SFInt32(-1), SFInt32(336), SFInt32(341), SFInt32(338), SFInt32(-1), SFInt32(336), SFInt32(338), SFInt32(335), SFInt32(-1), SFInt32(335), SFInt32(338), SFInt32(340), SFInt32(-1), SFInt32(335), SFInt32(340), SFInt32(337), SFInt32(-1), SFInt32(337), SFInt32(340), SFInt32(339), SFInt32(-1), SFInt32(337), SFInt32(339), SFInt32(334), SFInt32(-1), SFInt32(334), SFInt32(339), SFInt32(341), SFInt32(-1), SFInt32(341), SFInt32(345), SFInt32(342), SFInt32(-1), SFInt32(341), SFInt32(342), SFInt32(338), SFInt32(-1), SFInt32(338), SFInt32(342), SFInt32(340), SFInt32(-1), SFInt32(340), SFInt32(342), SFInt32(344), SFInt32(-1), SFInt32(340), SFInt32(344), SFInt32(339), SFInt32(-1), SFInt32(339), SFInt32(344), SFInt32(343), SFInt32(-1), SFInt32(339), SFInt32(343), SFInt32(345), SFInt32(-1), SFInt32(339), SFInt32(345), SFInt32(341), SFInt32(-1), SFInt32(345), SFInt32(349), SFInt32(342), SFInt32(-1), SFInt32(342), SFInt32(349), SFInt32(351), SFInt32(-1), SFInt32(342), SFInt32(351), SFInt32(346), SFInt32(-1), SFInt32(342), SFInt32(346), SFInt32(344), SFInt32(-1), SFInt32(71), SFInt32(346), SFInt32(348), SFInt32(-1), SFInt32(71), SFInt32(344), SFInt32(346), SFInt32(-1), SFInt32(71), SFInt32(348), SFInt32(347), SFInt32(-1), SFInt32(71), SFInt32(347), SFInt32(344), SFInt32(-1), SFInt32(344), SFInt32(347), SFInt32(343), SFInt32(-1), SFInt32(343), SFInt32(347), SFInt32(352), SFInt32(-1), SFInt32(343), SFInt32(352), SFInt32(349), SFInt32(-1), SFInt32(343), SFInt32(349), SFInt32(345), SFInt32(-1), SFInt32(349), SFInt32(352), SFInt32(356), SFInt32(-1), SFInt32(349), SFInt32(356), SFInt32(353), SFInt32(-1), SFInt32(349), SFInt32(353), SFInt32(355), SFInt32(-1), SFInt32(349), SFInt32(355), SFInt32(351), SFInt32(-1), SFInt32(354), SFInt32(356), SFInt32(352), SFInt32(-1), SFInt32(354), SFInt32(352), SFInt32(350), SFInt32(-1), SFInt32(354), SFInt32(350), SFInt32(351), SFInt32(-1), SFInt32(354), SFInt32(351), SFInt32(355), SFInt32(-1), SFInt32(353), SFInt32(356), SFInt32(357), SFInt32(-1), SFInt32(353), SFInt32(357), SFInt32(358), SFInt32(-1), SFInt32(353), SFInt32(358), SFInt32(359), SFInt32(-1), SFInt32(353), SFInt32(359), SFInt32(360), SFInt32(-1), SFInt32(353), SFInt32(360), SFInt32(361), SFInt32(-1), SFInt32(353), SFInt32(361), SFInt32(355), SFInt32(-1), SFInt32(354), SFInt32(357), SFInt32(356), SFInt32(-1), SFInt32(350), SFInt32(346), SFInt32(351), SFInt32(-1), SFInt32(348), SFInt32(346), SFInt32(347), SFInt32(-1), SFInt32(350), SFInt32(347), SFInt32(346), SFInt32(-1), SFInt32(350), SFInt32(352), SFInt32(347), SFInt32(-1), SFInt32(354), SFInt32(358), SFInt32(357), SFInt32(-1), SFInt32(354), SFInt32(359), SFInt32(358), SFInt32(-1), SFInt32(354), SFInt32(360), SFInt32(359), SFInt32(-1), SFInt32(354), SFInt32(361), SFInt32(360), SFInt32(-1), SFInt32(354), SFInt32(355), SFInt32(361), SFInt32(-1), SFInt32(101), SFInt32(362), SFInt32(365), SFInt32(-1), SFInt32(101), SFInt32(365), SFInt32(99), SFInt32(-1), SFInt32(99), SFInt32(365), SFInt32(100), SFInt32(-1), SFInt32(100), SFInt32(365), SFInt32(363), SFInt32(-1), SFInt32(100), SFInt32(363), SFInt32(98), SFInt32(-1), SFInt32(98), SFInt32(363), SFInt32(364), SFInt32(-1), SFInt32(98), SFInt32(364), SFInt32(101), SFInt32(-1), SFInt32(101), SFInt32(364), SFInt32(362), SFInt32(-1), SFInt32(362), SFInt32(369), SFInt32(367), SFInt32(-1), SFInt32(362), SFInt32(367), SFInt32(365), SFInt32(-1), SFInt32(365), SFInt32(367), SFInt32(363), SFInt32(-1), SFInt32(363), SFInt32(367), SFInt32(368), SFInt32(-1), SFInt32(363), SFInt32(367), SFInt32(368), SFInt32(-1), SFInt32(363), SFInt32(368), SFInt32(366), SFInt32(-1), SFInt32(363), SFInt32(366), SFInt32(364), SFInt32(-1), SFInt32(364), SFInt32(366), SFInt32(362), SFInt32(-1), SFInt32(362), SFInt32(366), SFInt32(369), SFInt32(-1), SFInt32(369), SFInt32(373), SFInt32(371), SFInt32(-1), SFInt32(369), SFInt32(371), SFInt32(367), SFInt32(-1), SFInt32(367), SFInt32(371), SFInt32(368), SFInt32(-1), SFInt32(368), SFInt32(371), SFInt32(372), SFInt32(-1), SFInt32(368), SFInt32(372), SFInt32(366), SFInt32(-1), SFInt32(366), SFInt32(372), SFInt32(370), SFInt32(-1), SFInt32(366), SFInt32(370), SFInt32(369), SFInt32(-1), SFInt32(369), SFInt32(370), SFInt32(373), SFInt32(-1), SFInt32(373), SFInt32(377), SFInt32(380), SFInt32(-1), SFInt32(373), SFInt32(380), SFInt32(375), SFInt32(-1), SFInt32(373), SFInt32(375), SFInt32(371), SFInt32(-1), SFInt32(371), SFInt32(375), SFInt32(372), SFInt32(-1), SFInt32(372), SFInt32(375), SFInt32(376), SFInt32(-1), SFInt32(372), SFInt32(376), SFInt32(374), SFInt32(-1), SFInt32(372), SFInt32(374), SFInt32(370), SFInt32(-1), SFInt32(370), SFInt32(374), SFInt32(379), SFInt32(-1), SFInt32(373), SFInt32(370), SFInt32(379), SFInt32(-1), SFInt32(373), SFInt32(379), SFInt32(377), SFInt32(-1), SFInt32(377), SFInt32(379), SFInt32(383), SFInt32(-1), SFInt32(377), SFInt32(383), SFInt32(381), SFInt32(-1), SFInt32(377), SFInt32(381), SFInt32(384), SFInt32(-1), SFInt32(377), SFInt32(384), SFInt32(380), SFInt32(-1), SFInt32(381), SFInt32(383), SFInt32(389), SFInt32(-1), SFInt32(381), SFInt32(389), SFInt32(388), SFInt32(-1), SFInt32(381), SFInt32(388), SFInt32(387), SFInt32(-1), SFInt32(381), SFInt32(387), SFInt32(386), SFInt32(-1), SFInt32(381), SFInt32(386), SFInt32(385), SFInt32(-1), SFInt32(381), SFInt32(385), SFInt32(384), SFInt32(-1), SFInt32(376), SFInt32(375), SFInt32(374), SFInt32(-1), SFInt32(378), SFInt32(379), SFInt32(374), SFInt32(-1), SFInt32(378), SFInt32(374), SFInt32(375), SFInt32(-1), SFInt32(378), SFInt32(375), SFInt32(380), SFInt32(-1), SFInt32(382), SFInt32(386), SFInt32(387), SFInt32(-1), SFInt32(382), SFInt32(387), SFInt32(388), SFInt32(-1), SFInt32(382), SFInt32(388), SFInt32(389), SFInt32(-1), SFInt32(382), SFInt32(389), SFInt32(383), SFInt32(-1), SFInt32(382), SFInt32(383), SFInt32(379), SFInt32(-1), SFInt32(382), SFInt32(379), SFInt32(378), SFInt32(-1), SFInt32(382), SFInt32(378), SFInt32(380), SFInt32(-1), SFInt32(382), SFInt32(380), SFInt32(384), SFInt32(-1), SFInt32(382), SFInt32(384), SFInt32(385), SFInt32(-1), SFInt32(382), SFInt32(385), SFInt32(386), SFInt32(-1)]),
                              creaseAngle_ : 3.1,
                              color_ : 
                                Color(
                                  color_ : MFColor([SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(1)])),
                              coord_ : 
                                Coordinate(
                                  DEF_ : SFString('TheSkinCoord'),
                                  point_ : MFVec3f([SFVec3f([0,1.77,0]),SFVec3f([0,1.665,0.09]),SFVec3f([-0.033,1.62,0.087]),SFVec3f([0.033,1.62,0.087]),SFVec3f([0,1.55,0.097]),SFVec3f([-0.077,1.64,-0.01]),SFVec3f([-0.0527,1.58,0.015]),SFVec3f([0.077,1.64,-0.01]),SFVec3f([0.0527,1.58,0.015]),SFVec3f([0,1.625,-0.0925]),SFVec3f([-0.03,1.46,0.035]),SFVec3f([0,1.44,0.03]),SFVec3f([0.03,1.46,0.035]),SFVec3f([-0.1135,1.318,0.095]),SFVec3f([0.1135,1.318,0.095]),SFVec3f([0,1.25,0.113]),SFVec3f([-0.087,1.19,0.09]),SFVec3f([-0.0935,1.03,0.075]),SFVec3f([0.087,1.19,0.09]),SFVec3f([0.0935,1.03,0.075]),SFVec3f([-0.1425,1.065,0.0033]),SFVec3f([-0.15,0.9,-0.01]),SFVec3f([0.1425,1.065,0.0033]),SFVec3f([0.15,0.9,-0.01]),SFVec3f([0,1.53,-0.084]),SFVec3f([0.0049,1.1908,-0.1113]),SFVec3f([-0.0773,1.019,-0.12]),SFVec3f([0.0773,1.019,-0.12]),SFVec3f([0.005,1.0915,-0.1091]),SFVec3f([-0.178,1.4825,-0.0625]),SFVec3f([-0.17,1.38,0.007]),SFVec3f([-0.1884,0.8676,-0.036]),SFVec3f([-0.16,1.38,-0.127]),SFVec3f([-0.2,1.1388,-0.08]),SFVec3f([-0.244,1.1388,-0.04]),SFVec3f([-0.165,1.1388,-0.04]),SFVec3f([-0.23,1.133,-0.055]),SFVec3f([-0.1977,0.8169,-0.0177]),SFVec3f([-0.1941,0.6772,-0.0423]),SFVec3f([-0.2117,0.8562,-0.0584]),SFVec3f([-0.1929,0.789,-0.1064]),SFVec3f([0.175,1.4825,-0.06]),SFVec3f([0.17,1.38,0.007]),SFVec3f([0.1901,0.8645,-0.0415]),SFVec3f([0.16,1.38,-0.125]),SFVec3f([0.2,1.1388,-0.08]),SFVec3f([0.165,1.1388,-0.04]),SFVec3f([0.244,1.1388,-0.04]),SFVec3f([0.23,1.133,-0.055]),SFVec3f([0.2009,0.8139,-0.0237]),SFVec3f([0.2056,0.6743,-0.0482]),SFVec3f([0.2142,0.8529,-0.0648]),SFVec3f([0.1929,0.786,-0.1122]),SFVec3f([-0.1,0.4913,-0.03]),SFVec3f([-0.17,0.466,0]),SFVec3f([-0.05,0.466,0]),SFVec3f([-0.165,0.01,0.12]),SFVec3f([-0.15,0.07,0]),SFVec3f([-0.085,0.086,0.0125]),SFVec3f([-0.09,0.056,0.0125]),SFVec3f([-0.115,0.02,0.122]),SFVec3f([-0.115,0.04,-0.055]),SFVec3f([-0.11,0.011,0.19]),SFVec3f([0.0993,0.4881,-0.0309]),SFVec3f([0.17,0.466,0]),SFVec3f([0.05,0.4867,0]),SFVec3f([0.165,0.01,0.12]),SFVec3f([0.15,0.07,0]),SFVec3f([0.085,0.086,0.0125]),SFVec3f([0.09,0.056,0.0125]),SFVec3f([0.115,0.02,0.122]),SFVec3f([0.115,0.04,-0.055]),SFVec3f([0.11,0.011,0.19]),SFVec3f([0,0.875,0]),SFVec3f([-0.0646,1.5149,-0.038]),SFVec3f([0.0646,1.5149,-0.038]),SFVec3f([0,1.0723,0.09]),SFVec3f([-0.11,1.427,-0.1375]),SFVec3f([-0.235,1.42,-0.0625]),SFVec3f([0.11,1.427,-0.1375]),SFVec3f([0.235,1.42,-0.0625]),SFVec3f([0,1.41,-0.145]),SFVec3f([0,0.925,0.08]),SFVec3f([-0.087,1.19,-0.09]),SFVec3f([0.087,1.19,-0.09]),SFVec3f([0.172,1.32,-0.03]),SFVec3f([-0.172,1.32,-0.03]),SFVec3f([0.15,1.23,-0.015]),SFVec3f([-0.15,1.23,-0.015]),SFVec3f([0.079,0.92,-0.14]),SFVec3f([0.1,0.9,0.077]),SFVec3f([-0.079,0.92,-0.14]),SFVec3f([-0.1,0.9,0.075]),SFVec3f([0,0.87,0]),SFVec3f([0.171,0.65,0]),SFVec3f([0.02,0.65,0]),SFVec3f([0.1,0.65,-0.08]),SFVec3f([0.1,0.65,0.07]),SFVec3f([-0.171,0.65,0]),SFVec3f([-0.02,0.65,0]),SFVec3f([-0.1,0.65,-0.08]),SFVec3f([-0.1,0.65,0.07]),SFVec3f([0.25,1.27,-0.04]),SFVec3f([0.17,1.27,-0.04]),SFVec3f([0.2,1.27,-0.09]),SFVec3f([0.2,1.27,0.02]),SFVec3f([0.244,1.1388,-0.04]),SFVec3f([0.165,1.1388,-0.04]),SFVec3f([0.2,1.1388,-0.08]),SFVec3f([0.2,1.1388,-0.013]),SFVec3f([0.225,1,-0.01]),SFVec3f([0.225,1,-0.07]),SFVec3f([0.185,1,-0.01]),SFVec3f([0.185,1,-0.07]),SFVec3f([0.2,1.1388,-0.04]),SFVec3f([0.225,0.92,-0.04]),SFVec3f([0.175,0.92,-0.04]),SFVec3f([0.2,0.92,-0.065]),SFVec3f([0.2,0.92,-0.015]),SFVec3f([0.225,0.89,-0.04]),SFVec3f([0.175,0.89,-0.04]),SFVec3f([0.2,0.89,-0.065]),SFVec3f([0.2,0.89,-0.015]),SFVec3f([0.218,0.86,-0.04]),SFVec3f([0.184,0.86,-0.04]),SFVec3f([0.2,0.87,-0.07]),SFVec3f([0.2,0.87,0]),SFVec3f([0.21,0.85,0]),SFVec3f([0.1854,0.85,0]),SFVec3f([0.212,0.84,-0.015]),SFVec3f([0.183,0.84,-0.015]),SFVec3f([0.213,0.835,-0.04]),SFVec3f([0.19,0.835,-0.04]),SFVec3f([0.211,0.835,-0.065]),SFVec3f([0.192,0.835,-0.065]),SFVec3f([0.208,0.84,-0.085]),SFVec3f([0.19,0.84,-0.085]),SFVec3f([0.2,0.84,-0.095]),SFVec3f([0.215,0.82,0]),SFVec3f([0.193,0.815,0.005]),SFVec3f([0.198,0.8,0.012]),SFVec3f([0.21,0.82,0.03]),SFVec3f([0.19,0.82,0.03]),SFVec3f([0.2,0.835,0.039]),SFVec3f([0.212,0.8,0.05]),SFVec3f([0.188,0.8,0.05]),SFVec3f([0.2,0.807,0.057]),SFVec3f([0.2,0.793,0.035]),SFVec3f([0.2,0.774,0.076]),SFVec3f([0.212,0.78,0.07]),SFVec3f([0.188,0.78,0.07]),SFVec3f([0.2,0.785,0.075]),SFVec3f([0.2,0.77,0.062]),SFVec3f([0.215,0.793,-0.015]),SFVec3f([0.187,0.793,-0.015]),SFVec3f([0.2,0.793,-0.005]),SFVec3f([0.215,0.788,-0.04]),SFVec3f([0.187,0.788,-0.04]),SFVec3f([0.215,0.793,-0.065]),SFVec3f([0.187,0.793,-0.065]),SFVec3f([0.21,0.79,-0.085]),SFVec3f([0.19,0.79,-0.085]),SFVec3f([0.2,0.79,-0.095]),SFVec3f([0.19,0.77,-0.0275]),SFVec3f([0.19,0.77,-0.0525]),SFVec3f([0.19,0.78,-0.0775]),SFVec3f([0.212,0.745,-0.015]),SFVec3f([0.188,0.745,-0.02]),SFVec3f([0.2,0.745,-0.0255]),SFVec3f([0.2,0.745,-0.0045]),SFVec3f([0.211,0.72,-0.015]),SFVec3f([0.189,0.72,-0.015]),SFVec3f([0.2,0.72,-0.0252]),SFVec3f([0.2,0.72,-0.0048]),SFVec3f([0.21,0.695,-0.015]),SFVec3f([0.19,0.695,-0.015]),SFVec3f([0.2,0.695,-0.025]),SFVec3f([0.2,0.695,-0.005]),SFVec3f([0.2,0.685,-0.015]),SFVec3f([0.215,0.74,-0.04]),SFVec3f([0.185,0.74,-0.04]),SFVec3f([0.2,0.74,-0.055]),SFVec3f([0.2,0.74,-0.025]),SFVec3f([0.21,0.7142,-0.04]),SFVec3f([0.19,0.7142,-0.04]),SFVec3f([0.2,0.7142,-0.053]),SFVec3f([0.2,0.7142,-0.027]),SFVec3f([0.21,0.68,-0.04]),SFVec3f([0.19,0.68,-0.04]),SFVec3f([0.2,0.68,-0.05]),SFVec3f([0.2,0.68,-0.03]),SFVec3f([0.2,0.67,-0.04]),SFVec3f([0.212,0.74,-0.065]),SFVec3f([0.188,0.74,-0.065]),SFVec3f([0.2,0.74,-0.0756]),SFVec3f([0.2,0.74,-0.0542]),SFVec3f([0.21,0.7177,-0.065]),SFVec3f([0.19,0.7177,-0.065]),SFVec3f([0.2,0.7177,-0.0751]),SFVec3f([0.2,0.7177,-0.0549]),SFVec3f([0.21,0.695,-0.065]),SFVec3f([0.19,0.695,-0.065]),SFVec3f([0.2,0.695,-0.075]),SFVec3f([0.2,0.695,-0.055]),SFVec3f([0.2,0.685,-0.065]),SFVec3f([0.211,0.755,-0.085]),SFVec3f([0.189,0.755,-0.085]),SFVec3f([0.2,0.755,-0.0952]),SFVec3f([0.2,0.755,-0.0748]),SFVec3f([0.21,0.735,-0.085]),SFVec3f([0.19,0.735,-0.085]),SFVec3f([0.2,0.735,-0.0951]),SFVec3f([0.2,0.735,-0.0749]),SFVec3f([0.21,0.72,-0.085]),SFVec3f([0.19,0.72,-0.085]),SFVec3f([0.2,0.72,-0.095]),SFVec3f([0.2,0.72,-0.075]),SFVec3f([0.2,0.71,-0.085]),SFVec3f([-0.23,1.23,-0.04]),SFVec3f([-0.16,1.23,-0.04]),SFVec3f([-0.2,1.235,-0.105]),SFVec3f([-0.2,1.235,0.02]),SFVec3f([-0.244,1.1388,-0.04]),SFVec3f([-0.165,1.1388,-0.04]),SFVec3f([-0.2,1.1388,-0.08]),SFVec3f([-0.2,1.1388,0.013]),SFVec3f([-0.225,1,-0.01]),SFVec3f([-0.225,1,-0.07]),SFVec3f([-0.185,1,-0.01]),SFVec3f([-0.185,1,-0.07]),SFVec3f([-0.2,1.1388,-0.04]),SFVec3f([-0.225,0.92,-0.04]),SFVec3f([-0.175,0.92,-0.04]),SFVec3f([-0.2,0.92,-0.065]),SFVec3f([-0.2,0.92,-0.015]),SFVec3f([-0.225,0.89,-0.04]),SFVec3f([-0.175,0.89,-0.04]),SFVec3f([-0.2,0.89,-0.065]),SFVec3f([-0.2,0.89,-0.015]),SFVec3f([-0.218,0.86,-0.04]),SFVec3f([-0.184,0.86,-0.04]),SFVec3f([-0.2,0.87,-0.07]),SFVec3f([-0.2,0.87,0]),SFVec3f([-0.21,0.85,0]),SFVec3f([-0.1854,0.85,0]),SFVec3f([-0.212,0.84,-0.015]),SFVec3f([-0.183,0.84,-0.015]),SFVec3f([-0.213,0.835,-0.04]),SFVec3f([-0.19,0.835,-0.04]),SFVec3f([-0.211,0.835,-0.065]),SFVec3f([-0.192,0.835,-0.065]),SFVec3f([-0.208,0.84,-0.085]),SFVec3f([-0.19,0.84,-0.085]),SFVec3f([-0.2,0.84,-0.095]),SFVec3f([-0.215,0.82,0]),SFVec3f([-0.193,0.815,0.005]),SFVec3f([-0.198,0.8,0.012]),SFVec3f([-0.21,0.82,0.03]),SFVec3f([-0.19,0.82,0.03]),SFVec3f([-0.2,0.835,0.039]),SFVec3f([-0.212,0.8,0.05]),SFVec3f([-0.188,0.8,0.05]),SFVec3f([-0.2,0.807,0.057]),SFVec3f([-0.2,0.793,0.035]),SFVec3f([-0.2,0.774,0.076]),SFVec3f([-0.212,0.78,0.07]),SFVec3f([-0.188,0.78,0.07]),SFVec3f([-0.2,0.785,0.075]),SFVec3f([-0.2,0.77,0.062]),SFVec3f([-0.215,0.793,-0.015]),SFVec3f([-0.187,0.793,-0.015]),SFVec3f([-0.2,0.793,-0.005]),SFVec3f([-0.215,0.788,-0.04]),SFVec3f([-0.187,0.788,-0.04]),SFVec3f([-0.215,0.793,-0.065]),SFVec3f([-0.187,0.793,-0.065]),SFVec3f([-0.21,0.79,-0.085]),SFVec3f([-0.19,0.79,-0.085]),SFVec3f([-0.2,0.79,-0.095]),SFVec3f([-0.19,0.77,-0.0275]),SFVec3f([-0.19,0.77,-0.0525]),SFVec3f([-0.19,0.78,-0.0775]),SFVec3f([-0.212,0.745,-0.015]),SFVec3f([-0.188,0.745,-0.02]),SFVec3f([-0.2,0.745,-0.0255]),SFVec3f([-0.2,0.745,-0.0045]),SFVec3f([-0.211,0.72,-0.015]),SFVec3f([-0.189,0.72,-0.015]),SFVec3f([-0.2,0.72,-0.0252]),SFVec3f([-0.2,0.72,-0.0048]),SFVec3f([-0.21,0.695,-0.015]),SFVec3f([-0.19,0.695,-0.015]),SFVec3f([-0.2,0.695,-0.025]),SFVec3f([-0.2,0.695,-0.005]),SFVec3f([-0.2,0.685,-0.015]),SFVec3f([-0.215,0.74,-0.04]),SFVec3f([-0.185,0.74,-0.04]),SFVec3f([-0.2,0.74,-0.055]),SFVec3f([-0.2,0.74,-0.025]),SFVec3f([-0.21,0.7142,-0.04]),SFVec3f([-0.19,0.7142,-0.04]),SFVec3f([-0.2,0.7142,-0.053]),SFVec3f([-0.2,0.7142,-0.027]),SFVec3f([-0.21,0.68,-0.04]),SFVec3f([-0.19,0.68,-0.04]),SFVec3f([-0.2,0.68,-0.05]),SFVec3f([-0.2,0.68,-0.03]),SFVec3f([-0.2,0.67,-0.04]),SFVec3f([-0.212,0.74,-0.065]),SFVec3f([-0.188,0.74,-0.065]),SFVec3f([-0.2,0.74,-0.0756]),SFVec3f([-0.2,0.74,-0.0542]),SFVec3f([-0.21,0.7177,-0.065]),SFVec3f([-0.19,0.7177,-0.065]),SFVec3f([-0.2,0.7177,-0.0751]),SFVec3f([-0.2,0.7177,-0.0549]),SFVec3f([-0.21,0.695,-0.065]),SFVec3f([-0.19,0.695,-0.065]),SFVec3f([-0.2,0.695,-0.075]),SFVec3f([-0.2,0.695,-0.055]),SFVec3f([-0.2,0.685,-0.065]),SFVec3f([-0.211,0.755,-0.085]),SFVec3f([-0.189,0.755,-0.085]),SFVec3f([-0.2,0.755,-0.0952]),SFVec3f([-0.2,0.755,-0.0748]),SFVec3f([-0.21,0.735,-0.085]),SFVec3f([-0.19,0.735,-0.085]),SFVec3f([-0.2,0.735,-0.0951]),SFVec3f([-0.2,0.735,-0.0749]),SFVec3f([-0.21,0.72,-0.085]),SFVec3f([-0.19,0.72,-0.085]),SFVec3f([-0.2,0.72,-0.095]),SFVec3f([-0.2,0.72,-0.075]),SFVec3f([-0.2,0.71,-0.085]),SFVec3f([0.115,0.466,0.06]),SFVec3f([0.115,0.466,-0.055]),SFVec3f([0.15,0.466,0]),SFVec3f([0.05,0.466,0]),SFVec3f([0.17,0.3,0]),SFVec3f([0.06,0.3,0]),SFVec3f([0.1,0.3,-0.05]),SFVec3f([0.1,0.3,0.05]),SFVec3f([0.15,0.07,0]),SFVec3f([0.085,0.086,0.0125]),SFVec3f([0.115,0.069,-0.045]),SFVec3f([0.117,0.0975,0.0615]),SFVec3f([0.1375,0.006,-0.03]),SFVec3f([0.095,0.006,-0.03]),SFVec3f([0.115,0.015,-0.045]),SFVec3f([0.115,0.06,0.1]),SFVec3f([0.115,0,0.07]),SFVec3f([0.165,0,0.07]),SFVec3f([0.095,0,0.07]),SFVec3f([0.115,0.04,0.13]),SFVec3f([0.125,0,0.12]),SFVec3f([0.165,0,0.12]),SFVec3f([0.087,0,0.122]),SFVec3f([0.09,0.012,0.188]),SFVec3f([0.11,0.011,0.19]),SFVec3f([0.128,0.011,0.185]),SFVec3f([0.142,0.011,0.178]),SFVec3f([0.154,0.01,0.168]),SFVec3f([-0.115,0.466,0.06]),SFVec3f([-0.115,0.466,-0.055]),SFVec3f([-0.17,0.466,0]),SFVec3f([-0.05,0.466,0]),SFVec3f([-0.17,0.3,0]),SFVec3f([-0.06,0.3,0]),SFVec3f([-0.1,0.3,-0.05]),SFVec3f([-0.1,0.3,0.05]),SFVec3f([-0.15,0.07,0]),SFVec3f([-0.085,0.086,0.0125]),SFVec3f([-0.115,0.069,-0.045]),SFVec3f([-0.117,0.0975,0.0615]),SFVec3f([-0.1375,0.006,-0.03]),SFVec3f([-0.095,0.006,-0.03]),SFVec3f([-0.095,0.006,-0.03]),SFVec3f([-0.115,0.06,0.1]),SFVec3f([-0.115,0,0.07]),SFVec3f([-0.165,0,0.07]),SFVec3f([-0.095,0,0.07]),SFVec3f([-0.115,0.04,0.13]),SFVec3f([-0.125,0,0.12]),SFVec3f([-0.165,0,0.12]),SFVec3f([-0.087,0,0.122]),SFVec3f([-0.09,0.012,0.188]),SFVec3f([-0.11,0.011,0.19]),SFVec3f([-0.128,0.011,0.185]),SFVec3f([-0.142,0.011,0.178]),SFVec3f([-0.154,0.01,0.168])]))))],
                      skinCoord_ : 
                        Coordinate(
                          USE_ : SFString('TheSkinCoord')),

                        HAnimJoint(
                          USE_ : SFString('Joe_humanoid_root')),

                        HAnimJoint(
                          USE_ : SFString('Joe_sacroiliac')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vl5')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vl4')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vl3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vl2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vl1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vt12')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vt11')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vt10')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vt9')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vt8')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vt7')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vt6')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vt5')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vt4')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vt3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vt2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vt1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vc7')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vc6')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vc5')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vc4')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vc3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vc2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_vc1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_skullbase')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_acromioclavicular')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_acromioclavicular')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_carpal_distal_interphalangeal_2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_carpal_distal_interphalangeal_2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_carpal_distal_interphalangeal_3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_carpal_distal_interphalangeal_3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_carpal_distal_interphalangeal_4')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_carpal_distal_interphalangeal_4')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_carpal_distal_interphalangeal_5')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_carpal_distal_interphalangeal_5')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_carpal_interphalangeal_1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_carpal_interphalangeal_1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_carpal_proximal_interphalangeal_2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_carpal_proximal_interphalangeal_2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_carpal_proximal_interphalangeal_3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_carpal_proximal_interphalangeal_3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_carpal_proximal_interphalangeal_4')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_carpal_proximal_interphalangeal_4')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_carpal_proximal_interphalangeal_5')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_carpal_proximal_interphalangeal_5')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_carpometacarpal_1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_carpometacarpal_1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_carpometacarpal_2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_carpometacarpal_2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_carpometacarpal_3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_carpometacarpal_3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_carpometacarpal_4')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_carpometacarpal_4')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_carpometacarpal_5')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_carpometacarpal_5')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_elbow')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_elbow')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_eyeball_joint')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_eyeball_joint')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_hip')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_hip')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_knee')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_knee')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_metacarpophalangeal_1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_metacarpophalangeal_1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_metacarpophalangeal_2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_metacarpophalangeal_2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_metacarpophalangeal_3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_metacarpophalangeal_3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_metacarpophalangeal_4')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_metacarpophalangeal_4')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_metacarpophalangeal_5')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_metacarpophalangeal_5')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_metatarsal')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_metatarsophalangeal_2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_metatarsophalangeal_2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_radiocarpal')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_radiocarpal')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_shoulder')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_shoulder')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_sternoclavicular')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_sternoclavicular')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_talocrural')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_talocrural')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_tarsal_distal_interphalangeal_2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_tarsometatarsal_2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_tarsometatarsal_2')),
                      segments_ : [
                        HAnimSegment(
                          USE_ : SFString('Joe_c1')),

                        HAnimSegment(
                          USE_ : SFString('Joe_c2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_c3')),

                        HAnimSegment(
                          USE_ : SFString('Joe_c4')),

                        HAnimSegment(
                          USE_ : SFString('Joe_c5')),

                        HAnimSegment(
                          USE_ : SFString('Joe_c6')),

                        HAnimSegment(
                          USE_ : SFString('Joe_c7')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l1')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l3')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l4')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l5')),

                        HAnimSegment(
                          USE_ : SFString('Joe_pelvis')),

                        HAnimSegment(
                          USE_ : SFString('Joe_sacrum')),

                        HAnimSegment(
                          USE_ : SFString('Joe_skull')),

                        HAnimSegment(
                          USE_ : SFString('Joe_t1')),

                        HAnimSegment(
                          USE_ : SFString('Joe_t10')),

                        HAnimSegment(
                          USE_ : SFString('Joe_t11')),

                        HAnimSegment(
                          USE_ : SFString('Joe_t12')),

                        HAnimSegment(
                          USE_ : SFString('Joe_t2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_t3')),

                        HAnimSegment(
                          USE_ : SFString('Joe_t4')),

                        HAnimSegment(
                          USE_ : SFString('Joe_t5')),

                        HAnimSegment(
                          USE_ : SFString('Joe_t6')),

                        HAnimSegment(
                          USE_ : SFString('Joe_t7')),

                        HAnimSegment(
                          USE_ : SFString('Joe_t8')),

                        HAnimSegment(
                          USE_ : SFString('Joe_t9')),

                        HAnimSegment(
                          USE_ : SFString('Joe_toPelvis')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_calf')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_calf')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_carpal')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_carpal')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_carpal_distal_phalanx_1')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_carpal_distal_phalanx_1')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_carpal_distal_phalanx_2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_carpal_distal_phalanx_2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_carpal_distal_phalanx_3')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_carpal_distal_phalanx_3')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_carpal_distal_phalanx_4')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_carpal_distal_phalanx_4')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_carpal_distal_phalanx_5')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_carpal_distal_phalanx_5')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_carpal_middle_phalanx_2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_carpal_middle_phalanx_2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_carpal_middle_phalanx_3')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_carpal_middle_phalanx_3')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_carpal_middle_phalanx_4')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_carpal_middle_phalanx_4')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_carpal_middle_phalanx_5')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_carpal_middle_phalanx_5')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_carpal_proximal_phalanx_1')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_carpal_proximal_phalanx_1')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_carpal_proximal_phalanx_2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_carpal_proximal_phalanx_2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_carpal_proximal_phalanx_3')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_carpal_proximal_phalanx_3')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_carpal_proximal_phalanx_4')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_carpal_proximal_phalanx_4')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_carpal_proximal_phalanx_5')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_carpal_proximal_phalanx_5')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_clavicle')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_clavicle')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_eyeball')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_eyeball')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_forearm')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_forearm')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_metacarpal_1')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_metacarpal_1')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_metacarpal_2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_metacarpal_2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_metacarpal_3')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_metacarpal_3')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_metacarpal_4')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_metacarpal_4')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_metacarpal_5')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_metacarpal_5')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_metatarsal_2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_metatarsal_2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_scapula')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_scapula')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_talus')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_talus')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_tarsal_distal_phalanx_2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_tarsal_distal_phalanx_2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_tarsal_proximal_phalanx_2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_tarsal_proximal_phalanx_2')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_thigh')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_thigh')),

                        HAnimSegment(
                          USE_ : SFString('Joe_l_upperarm')),

                        HAnimSegment(
                          USE_ : SFString('Joe_r_upperarm')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_cervicale_pt'))],
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_crotch_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_floormarker_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_navel_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_nuchale_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_rib10_midspine_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_sellion_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_skull_vertex_tip')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_substernale_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_supramenton_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_suprasternale_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_waist_preferred_posterior_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_acromion_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_acromion_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_asis_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_asis_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_axilla_distal_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_axilla_distal_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_axilla_proximal_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_axilla_proximal_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_calcaneus_posterior_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_calcaneus_posterior_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_carpal_distal_phalanx_1_tip')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_carpal_distal_phalanx_1_tip')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_carpal_distal_phalanx_2_tip')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_carpal_distal_phalanx_2_tip')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_carpal_distal_phalanx_3_tip')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_carpal_distal_phalanx_3_tip')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_carpal_distal_phalanx_4_tip')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_carpal_distal_phalanx_4_tip')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_carpal_distal_phalanx_5_tip')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_carpal_distal_phalanx_5_tip')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_clavicle_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_clavicle_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_dactylion_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_dactylion_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_femoral_lateral_epicondyle_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_femoral_lateral_epicondyle_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_femoral_medial_epicondyle_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_femoral_medial_epicondyle_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_gonion_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_gonion_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_humeral_lateral_epicondyle_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_humeral_lateral_epicondyle_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_humeral_medial_epicondyle_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_humeral_medial_epicondyle_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_iliocristale_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_iliocristale_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_infraorbitale_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_infraorbitale_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_knee_crease_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_knee_crease_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_lateral_malleolus_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_lateral_malleolus_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_medial_malleolus_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_medial_malleolus_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_metacarpal_phalanx_2_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_metacarpal_phalanx_2_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_metacarpal_phalanx_5_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_metacarpal_phalanx_5_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_metatarsal_phalanx_1_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_metatarsal_phalanx_1_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_metatarsal_phalanx_5_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_metatarsal_phalanx_5_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_neck_base_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_neck_base_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_olecranon_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_olecranon_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_psis_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_psis_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_radial_styloid_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_radial_styloid_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_radiale_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_radiale_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_rib10_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_rib10_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_sphyrion_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_sphyrion_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_tarsal_distal_phalanx_2_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_tarsal_distal_phalanx_2_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_thelion_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_thelion_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_tragion_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_tragion_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_trochanterion_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_trochanterion_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_l_ulnar_styloid_pt')),
                      viewpoints_ : 
                        HAnimSite(
                          USE_ : SFString('Joe_r_ulnar_styloid_pt')))])]),
          /*expected best practice: EXPORT AS='fileName' for clarity*/

            EXPORT(
              aS_ : SFString('JoeSkeletonSkinSite'),
              localDEF_ : SFString('Joe_Human'))]));
void main() { exit(0); }
