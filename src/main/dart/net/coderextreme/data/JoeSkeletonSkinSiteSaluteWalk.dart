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
              content_ : SFString('JoeSkeletonSkinSaluteSiteWalk.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Comprehensive example showing skeleton, skin, sites and interpolator animation together.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Joe D. Williams')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('9 January 2004')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('4 December 2022')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Tue, 09 Sep 2025 19:38:38 GMT')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('Under development, numerous errors and warnings')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('Provide feedback to tovrmlx3d converter')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegment HAnimSite - improve diagnostics.')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('ensure name prefix \"Joe_\" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('JoeSkeletonSkinSaluteSiteWalk.original.x3dv')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('JoeSkeletonSkinSaluteSiteWalk.modified1.x3dv')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('JoeSkeletonSkinSaluteSiteWalk.modified2.x3dv')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://castle-engine.io/view3dscene.php#section_converting')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png')),

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
              name_ : SFString('drawing'),
              content_ : SFString('JoeSkeletonSkinSiteSaluteWalk_composite.vsdx')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('tovrmlx3d, https://castle-engine.io/convert.php')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Michalis Kamburelis')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Don Brutzman'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3'),
              info_ : MFString([SFString("By Joe for Joe")])),

            WorldInfo(
              title_ : SFString('HAnim V1 LOA3 Skeleton Joint centers Adapted for approximatrion of ManGLoss Site Location Example and ANIM 200x Default Joint Centers, LOA3'),
              info_ : MFString([SFString("By Joe for Joe")])),

            NavigationInfo(
              DEF_ : SFString('HeadlightOnRevealsSkinTextureAndColors')),

            Background(
              skyColor_ : MFColor([SFColor(0), SFColor(0), SFColor(0.1)]),
              groundAngle_ : MFFloat([SFFloat(1.57)]),
              groundColor_ : MFColor([SFColor(0), SFColor(0.1), SFColor(0), SFColor(0), SFColor(0.1), SFColor(0)])),

            Transform(
              DEF_ : SFString('cordsysfloor'),
              scale_ : SFVec3f([SFDouble(0.175), SFDouble(0.175), SFDouble(0.175)]),
              children_ : [
                Inline(
                  DEF_ : SFString('CoordinateAxes'),
                  url_ : MFString([SFString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), SFString("../../../Savage/Tools/Authoring/CoordinateAxes.x3d"), SFString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), SFString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"), SFString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), SFString("../../../Savage/Tools/Authoring/CoordinateAxes.wrl"), SFString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), SFString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl")]))]),

            Group(
              DEF_ : SFString('ViewpointGroup'),
              children_ : [
                Viewpoint(
                  description_ : SFString('Front Up View'),
                  position_ : SFVec3f([SFDouble(-1), SFDouble(2), SFDouble(2.5)]),
                  orientation_ : SFRotation([SFDouble(-1), SFDouble(-1), SFDouble(0), SFDouble(0.55)])),

                Viewpoint(
                  description_ : SFString('From Left View'),
                  position_ : SFVec3f([SFDouble(-2.5), SFDouble(1.5), SFDouble(0)]),
                  orientation_ : SFRotation([SFDouble(0.3), SFDouble(1), SFDouble(0), SFDouble(-1.57)])),

                Viewpoint(
                  description_ : SFString('Front Mid View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(0.5), SFDouble(1.25)])),

                Viewpoint(
                  description_ : SFString('Front Feet View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0.75)])),

                Viewpoint(
                  description_ : SFString('From Right View'),
                  position_ : SFVec3f([SFDouble(1), SFDouble(1), SFDouble(0)]),
                  orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)])),

                Viewpoint(
                  description_ : SFString('Front Head View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(1.65), SFDouble(0.75)]),
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.65), SFDouble(0)])),

                Viewpoint(
                  description_ : SFString('Front Mid View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(1.75)])),

                Viewpoint(
                  description_ : SFString('Rear View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(-4)]),
                  orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.14)])),

                Viewpoint(
                  description_ : SFString('Top View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(4), SFDouble(0)]),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)])),

                Viewpoint(
                  description_ : SFString('Bottom View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(-4), SFDouble(0)]),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)])),

                Viewpoint(
                  description_ : SFString('Right View'),
                  position_ : SFVec3f([SFDouble(4), SFDouble(1.5), SFDouble(0)]),
                  orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]))]),

            Group(
              DEF_ : SFString('VisualizationShapes'),
              children_ : [
                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(2.1), SFDouble(0)]),
                  scale_ : SFVec3f([SFDouble(5), SFDouble(5), SFDouble(5)]),
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
                          creaseAngle_ : 0.1,
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                          color_ : 
                            Color(
                              color_ : MFColor([SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(1), SFColor(0)])),
                          coord_ : 
                            Coordinate(
                              DEF_ : SFString('boxCoords'),
                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.0157]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])]))))),

                Transform(
                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.773), SFDouble(-0.016)]),
                  scale_ : SFVec3f([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
                  child_ : 
                    Shape(
                      DEF_ : SFString('sitebox'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              ambientIntensity_ : 1,
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]),
                              specularColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]),
                              emissiveColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]),
                              shininess_ : 0.7)),
                      geometry_ : 
                        IndexedFaceSet(
                          creaseAngle_ : 0.1,
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('boxCoords'))))),

                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.2), SFDouble(0)]),
                  scale_ : SFVec3f([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('SegmentLine'),
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              specularColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              emissiveColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]))),
                      geometry_ : 
                        IndexedLineSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0.0001,0])]))))),

                Transform(
                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.773), SFDouble(-0.016)]),
                  scale_ : SFVec3f([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
                  child_ : 
                    Shape(
                      DEF_ : SFString('skinsphere'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              ambientIntensity_ : 0.5,
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              specularColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              emissiveColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              shininess_ : 1)),
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
                      DEF_ : SFString('Joe_Human'),
                      name_ : SFString('Human'),
                      info_ : MFString([SFString("humanoidVersion=2.0")]),
                      joints_ : [
                        HAnimJoint(
                          DEF_ : SFString('Joe_HumanoidRoot'),
                          name_ : SFString('humanoid_root'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(-0.0293965), SFDouble(0)]),
                          center_ : SFVec3f([SFDouble(0), SFDouble(0.875), SFDouble(0)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('Joe_sacrum'),
                              name_ : SFString('sacrum'),
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
                              DEF_ : SFString('Joe_sacroiliac'),
                              name_ : SFString('sacroiliac'),
                              center_ : SFVec3f([SFDouble(0), SFDouble(0.92), SFDouble(0)]),
                              skinCoordIndex_ : MFInt32([SFInt32(17), SFInt32(19), SFInt32(20), SFInt32(21), SFInt32(22), SFInt32(23), SFInt32(26), SFInt32(27), SFInt32(73), SFInt32(82), SFInt32(89), SFInt32(91), SFInt32(93)]),
                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.35), SFFloat(0.35), SFFloat(1)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('Joe_pelvis'),
                                  name_ : SFString('pelvis'),
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
                                      DEF_ : SFString('Joe_l_iliocristale'),
                                      name_ : SFString('l_iliocristale'),
                                      translation_ : SFVec3f([SFDouble(0.1425), SFDouble(1.065), SFDouble(0.0033)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      DEF_ : SFString('Joe_l_trochanterion'),
                                      name_ : SFString('l_trochanterion'),
                                      translation_ : SFVec3f([SFDouble(0.15), SFDouble(0.9), SFDouble(-0.01)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      DEF_ : SFString('Joe_r_iliocristale'),
                                      name_ : SFString('r_iliocristale'),
                                      translation_ : SFVec3f([SFDouble(-0.1425), SFDouble(1.065), SFDouble(0.0033)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      DEF_ : SFString('Joe_r_trochanterion'),
                                      name_ : SFString('r_trochanterion'),
                                      translation_ : SFVec3f([SFDouble(-0.15), SFDouble(0.9), SFDouble(-0.01)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      DEF_ : SFString('Joe_l_asis'),
                                      name_ : SFString('l_asis'),
                                      translation_ : SFVec3f([SFDouble(0.0935), SFDouble(1.03), SFDouble(0.075)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      DEF_ : SFString('Joe_r_asis'),
                                      name_ : SFString('r_asis'),
                                      translation_ : SFVec3f([SFDouble(-0.0935), SFDouble(1.03), SFDouble(0.075)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      DEF_ : SFString('Joe_l_psis'),
                                      name_ : SFString('l_psis'),
                                      translation_ : SFVec3f([SFDouble(0.0773), SFDouble(1.019), SFDouble(-0.12)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      DEF_ : SFString('Joe_r_psis'),
                                      name_ : SFString('r_psis'),
                                      translation_ : SFVec3f([SFDouble(-0.0773), SFDouble(1.019), SFDouble(-0.12)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      DEF_ : SFString('Joe_floormarker'),
                                      name_ : SFString('floormarker'),
                                      children_ : [
                                        Transform(
                                          scale_ : SFVec3f([SFDouble(3), SFDouble(3), SFDouble(3)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('sitebox')))]),

                                    HAnimSite(
                                      DEF_ : SFString('Joe_crotch'),
                                      name_ : SFString('crotch'),
                                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.87), SFDouble(-0.022)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))])]),

                                HAnimJoint(
                                  DEF_ : SFString('Joe_l_hip'),
                                  name_ : SFString('l_hip'),
                                  rotation_ : SFRotation([SFDouble(-0.997243499192129), SFDouble(0.0195458722844272), SFDouble(0.0715776654808345), SFDouble(0.536920945834996)]),
                                  center_ : SFVec3f([SFDouble(0.1), SFDouble(0.92), SFDouble(0)]),
                                  skinCoordIndex_ : MFInt32([SFInt32(89), SFInt32(90), SFInt32(94), SFInt32(95), SFInt32(96), SFInt32(97)]),
                                  skinCoordWeight_ : MFFloat([SFFloat(0.65), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('Joe_l_thigh'),
                                      name_ : SFString('l_thigh'),
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
                                          DEF_ : SFString('Joe_l_knee_crease'),
                                          name_ : SFString('l_knee_crease'),
                                          translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.466), SFDouble(-0.055)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))]),

                                        HAnimSite(
                                          DEF_ : SFString('Joe_l_femoral_lateral_epicn'),
                                          name_ : SFString('l_femoral_lateral_epicn'),
                                          translation_ : SFVec3f([SFDouble(0.17), SFDouble(0.466), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))]),

                                        HAnimSite(
                                          DEF_ : SFString('Joe_l_femoral_medial_epicn'),
                                          name_ : SFString('l_femoral_medial_epicn'),
                                          translation_ : SFVec3f([SFDouble(0.05), SFDouble(0.466), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))])]),

                                    HAnimJoint(
                                      DEF_ : SFString('Joe_l_knee'),
                                      name_ : SFString('l_knee'),
                                      rotation_ : SFRotation([SFDouble(1.00000000000001), SFDouble(0), SFDouble(0), SFDouble(0.224421281773429)]),
                                      center_ : SFVec3f([SFDouble(0.115), SFDouble(0.466), SFDouble(0)]),
                                      skinCoordIndex_ : MFInt32([SFInt32(334), SFInt32(335), SFInt32(336), SFInt32(337), SFInt32(338), SFInt32(339), SFInt32(340), SFInt32(341)]),
                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('Joe_l_calf'),
                                          name_ : SFString('l_calf'),
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
                                              DEF_ : SFString('Joe_l_lateral_malleolus'),
                                              name_ : SFString('l_lateral_malleolus'),
                                              translation_ : SFVec3f([SFDouble(0.15), SFDouble(0.07), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))]),

                                            HAnimSite(
                                              DEF_ : SFString('Joe_l_medial_malleolus'),
                                              name_ : SFString('l_medial_malleolus'),
                                              translation_ : SFVec3f([SFDouble(0.085), SFDouble(0.086), SFDouble(0.0125)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))])]),

                                        HAnimJoint(
                                          DEF_ : SFString('Joe_l_ankle'),
                                          name_ : SFString('l_ankle'),
                                          rotation_ : SFRotation([SFDouble(-1.00000000000007), SFDouble(0), SFDouble(0), SFDouble(0.0655639608914055)]),
                                          center_ : SFVec3f([SFDouble(0.115), SFDouble(0.069), SFDouble(0)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(342), SFInt32(343), SFInt32(344), SFInt32(345)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('Joe_l_hindfoot'),
                                              name_ : SFString('l_hindfoot'),
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
                                                  DEF_ : SFString('Joe_l_sphyrion'),
                                                  name_ : SFString('l_sphyrion'),
                                                  translation_ : SFVec3f([SFDouble(0.09), SFDouble(0.056), SFDouble(0.0125)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))]),

                                                HAnimSite(
                                                  DEF_ : SFString('Joe_l_calcaneous_post'),
                                                  name_ : SFString('l_calcaneous_post'),
                                                  translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.04), SFDouble(-0.055)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))])]),

                                            HAnimJoint(
                                              DEF_ : SFString('Joe_l_subtalar'),
                                              name_ : SFString('l_subtalar'),
                                              center_ : SFVec3f([SFDouble(0.115), SFDouble(0.031), SFDouble(0.03)]),
                                              skinCoordIndex_ : MFInt32([SFInt32(346), SFInt32(347), SFInt32(348), SFInt32(71)]),
                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('Joe_l_midproximal'),
                                                  name_ : SFString('l_midproximal'),
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
                                                  DEF_ : SFString('Joe_l_midtarsal'),
                                                  name_ : SFString('l_midtarsal'),
                                                  rotation_ : SFRotation([SFDouble(1.00000000000005), SFDouble(0), SFDouble(0), SFDouble(6.19381467367623)]),
                                                  center_ : SFVec3f([SFDouble(0.115), SFDouble(0.037), SFDouble(0.09)]),
                                                  skinCoordIndex_ : MFInt32([SFInt32(349), SFInt32(350), SFInt32(351), SFInt32(352)]),
                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      DEF_ : SFString('Joe_l_middistal'),
                                                      name_ : SFString('l_middistal'),
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
                                                          DEF_ : SFString('Joe_l_metatarsal_pha1'),
                                                          name_ : SFString('l_metatarsal_pha1'),
                                                          translation_ : SFVec3f([SFDouble(0.087), SFDouble(0.01), SFDouble(0.122)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('sitebox'))])]),

                                                    HAnimJoint(
                                                      DEF_ : SFString('Joe_l_metatarsal'),
                                                      name_ : SFString('l_metatarsal'),
                                                      rotation_ : SFRotation([SFDouble(1.00000000000253), SFDouble(0), SFDouble(0), SFDouble(0.0175699446988144)]),
                                                      center_ : SFVec3f([SFDouble(0.115), SFDouble(0.02), SFDouble(0.122)]),
                                                      skinCoordIndex_ : MFInt32([SFInt32(353), SFInt32(354), SFInt32(355), SFInt32(356), SFInt32(357), SFInt32(358), SFInt32(359), SFInt32(360), SFInt32(361)]),
                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          DEF_ : SFString('Joe_l_forefoot'),
                                                          name_ : SFString('l_forefoot'),
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
                                                              DEF_ : SFString('Joe_l_metatarsal_pha5'),
                                                              name_ : SFString('l_metatarsal_pha5'),
                                                              translation_ : SFVec3f([SFDouble(0.165), SFDouble(0.01), SFDouble(0.12)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('sitebox'))]),

                                                            HAnimSite(
                                                              DEF_ : SFString('Joe_l_digit2'),
                                                              name_ : SFString('l_digit2'),
                                                              translation_ : SFVec3f([SFDouble(0.11), SFDouble(0.011), SFDouble(0.19)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('sitebox'))])])])])])])])]),

                                HAnimJoint(
                                  DEF_ : SFString('Joe_r_hip'),
                                  name_ : SFString('r_hip'),
                                  rotation_ : SFRotation([SFDouble(0.999396359667701), SFDouble(-0.00306481646315883), SFDouble(-0.0346052479115659), SFDouble(0.222463685925696)]),
                                  center_ : SFVec3f([SFDouble(-0.1), SFDouble(0.92), SFDouble(0)]),
                                  skinCoordIndex_ : MFInt32([SFInt32(91), SFInt32(92), SFInt32(98), SFInt32(99), SFInt32(100), SFInt32(101)]),
                                  skinCoordWeight_ : MFFloat([SFFloat(0.65), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('Joe_r_thigh'),
                                      name_ : SFString('r_thigh'),
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
                                          DEF_ : SFString('Joe_r_knee_crease'),
                                          name_ : SFString('r_knee_crease'),
                                          translation_ : SFVec3f([SFDouble(-0.115), SFDouble(0.466), SFDouble(-0.055)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))]),

                                        HAnimSite(
                                          DEF_ : SFString('Joe_r_femoral_lateral_epicn'),
                                          name_ : SFString('r_femoral_lateral_epicn'),
                                          translation_ : SFVec3f([SFDouble(-0.17), SFDouble(0.466), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))]),

                                        HAnimSite(
                                          DEF_ : SFString('Joe_r_femoral_medial_epicn'),
                                          name_ : SFString('r_femoral_medial_epicn'),
                                          translation_ : SFVec3f([SFDouble(-0.05), SFDouble(0.466), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))])]),

                                    HAnimJoint(
                                      DEF_ : SFString('Joe_r_knee'),
                                      name_ : SFString('r_knee'),
                                      rotation_ : SFRotation([SFDouble(0.999999999999952), SFDouble(0), SFDouble(0), SFDouble(0.086543259681602)]),
                                      center_ : SFVec3f([SFDouble(-0.05), SFDouble(0.466), SFDouble(0)]),
                                      skinCoordIndex_ : MFInt32([SFInt32(362), SFInt32(363), SFInt32(364), SFInt32(365), SFInt32(366), SFInt32(367), SFInt32(368), SFInt32(369)]),
                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('Joe_r_calf'),
                                          name_ : SFString('r_calf'),
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
                                              DEF_ : SFString('Joe_r_lateral_malleolus'),
                                              name_ : SFString('r_lateral_malleolus'),
                                              translation_ : SFVec3f([SFDouble(-0.15), SFDouble(0.07), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))]),

                                            HAnimSite(
                                              DEF_ : SFString('Joe_r_medial_malleolus'),
                                              name_ : SFString('r_medial_malleolus'),
                                              translation_ : SFVec3f([SFDouble(-0.085), SFDouble(0.086), SFDouble(0.0125)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))])]),

                                        HAnimJoint(
                                          DEF_ : SFString('Joe_r_ankle'),
                                          name_ : SFString('r_ankle'),
                                          rotation_ : SFRotation([SFDouble(-1.00000000000001), SFDouble(0), SFDouble(0), SFDouble(0.337435958789841)]),
                                          center_ : SFVec3f([SFDouble(-0.115), SFDouble(0.069), SFDouble(0)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(370), SFInt32(371), SFInt32(372), SFInt32(373)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('Joe_r_hindfoot'),
                                              name_ : SFString('r_hindfoot'),
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
                                                  DEF_ : SFString('Joe_r_sphyrion'),
                                                  name_ : SFString('r_sphyrion'),
                                                  translation_ : SFVec3f([SFDouble(-0.09), SFDouble(0.056), SFDouble(0.0125)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))]),

                                                HAnimSite(
                                                  DEF_ : SFString('Joe_r_calcaneous_post'),
                                                  name_ : SFString('r_calcaneous_post'),
                                                  translation_ : SFVec3f([SFDouble(-0.115), SFDouble(0.04), SFDouble(-0.055)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))])]),

                                            HAnimJoint(
                                              DEF_ : SFString('Joe_r_subtalar'),
                                              name_ : SFString('r_subtalar'),
                                              rotation_ : SFRotation([SFDouble(1.00000000000014), SFDouble(0), SFDouble(0), SFDouble(0.0816433505734676)]),
                                              center_ : SFVec3f([SFDouble(-0.1), SFDouble(0.015), SFDouble(-0.01)]),
                                              skinCoordIndex_ : MFInt32([SFInt32(374), SFInt32(375), SFInt32(376)]),
                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('Joe_r_midproximal'),
                                                  name_ : SFString('r_midproximal'),
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
                                                  DEF_ : SFString('Joe_r_midtarsal'),
                                                  name_ : SFString('r_midtarsal'),
                                                  rotation_ : SFRotation([SFDouble(-1.00000000000001), SFDouble(0), SFDouble(0), SFDouble(0.14271113543743)]),
                                                  center_ : SFVec3f([SFDouble(-0.115), SFDouble(0.037), SFDouble(0.09)]),
                                                  skinCoordIndex_ : MFInt32([SFInt32(377), SFInt32(378), SFInt32(379), SFInt32(380)]),
                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      DEF_ : SFString('Joe_r_middistal'),
                                                      name_ : SFString('r_middistal'),
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
                                                          DEF_ : SFString('Joe_r_metatarsal_pha1'),
                                                          name_ : SFString('r_metatarsal_pha1'),
                                                          translation_ : SFVec3f([SFDouble(-0.115), SFDouble(0.02), SFDouble(0.122)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('sitebox'))])]),

                                                    HAnimJoint(
                                                      DEF_ : SFString('Joe_r_metatarsal'),
                                                      name_ : SFString('r_metatarsal'),
                                                      rotation_ : SFRotation([SFDouble(-1.00000000000001), SFDouble(0), SFDouble(0), SFDouble(0.264860122523209)]),
                                                      center_ : SFVec3f([SFDouble(-0.1), SFDouble(0.01), SFDouble(0.14)]),
                                                      skinCoordIndex_ : MFInt32([SFInt32(381), SFInt32(382), SFInt32(383), SFInt32(384), SFInt32(385), SFInt32(386), SFInt32(387), SFInt32(388), SFInt32(389)]),
                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          DEF_ : SFString('Joe_r_forefoot'),
                                                          name_ : SFString('r_forefoot'),
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
                                                              DEF_ : SFString('Joe_r_metatarsal_pha5'),
                                                              name_ : SFString('r_metatarsal_pha5'),
                                                              translation_ : SFVec3f([SFDouble(-0.165), SFDouble(0.01), SFDouble(0.12)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('sitebox'))]),

                                                            HAnimSite(
                                                              DEF_ : SFString('Joe_r_digit2'),
                                                              name_ : SFString('r_digit2'),
                                                              translation_ : SFVec3f([SFDouble(-0.11), SFDouble(0.011), SFDouble(0.19)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('sitebox'))])])])])])])])])]),

                            HAnimJoint(
                              DEF_ : SFString('Joe_vl5'),
                              name_ : SFString('vl5'),
                              rotation_ : SFRotation([SFDouble(-0.0104321818467796), SFDouble(0.961748598508238), SFDouble(-0.273734913464392), SFDouble(0.109829831225253)]),
                              center_ : SFVec3f([SFDouble(0), SFDouble(1.045), SFDouble(-0.095)]),
                              skinCoordIndex_ : MFInt32([SFInt32(28), SFInt32(76)]),
                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('Joe_toPelvisMarker'),
                                  name_ : SFString('toPelvis'),
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
                                  DEF_ : SFString('Joe_l5'),
                                  name_ : SFString('l5'),
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
                                      DEF_ : SFString('Joe_waist_preferred_post'),
                                      name_ : SFString('waist_preferred_post'),
                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.0915), SFDouble(-0.1091)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      DEF_ : SFString('Joe_navel'),
                                      name_ : SFString('navel'),
                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.07225), SFDouble(0.09)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))])]),

                                HAnimJoint(
                                  DEF_ : SFString('Joe_vl4'),
                                  name_ : SFString('vl4'),
                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.068), SFDouble(-0.085)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('Joe_l4'),
                                      name_ : SFString('l4'),
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
                                      DEF_ : SFString('Joe_vl3'),
                                      name_ : SFString('vl3'),
                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.092), SFDouble(-0.0725)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('Joe_l3'),
                                          name_ : SFString('l3'),
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
                                          DEF_ : SFString('Joe_vl2'),
                                          name_ : SFString('vl2'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.12), SFDouble(-0.065)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(16), SFInt32(18), SFInt32(25), SFInt32(83), SFInt32(84), SFInt32(85), SFInt32(86), SFInt32(87), SFInt32(88)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.7), SFFloat(1), SFFloat(0.8)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('Joe_l2'),
                                              name_ : SFString('l2'),
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
                                                  DEF_ : SFString('Joe_r_rib10'),
                                                  name_ : SFString('r_rib10'),
                                                  translation_ : SFVec3f([SFDouble(-0.087), SFDouble(1.19), SFDouble(0.09)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))]),

                                                HAnimSite(
                                                  DEF_ : SFString('Joe_l_rib10'),
                                                  name_ : SFString('l_rib10'),
                                                  translation_ : SFVec3f([SFDouble(0.087), SFDouble(1.19), SFDouble(0.09)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))]),

                                                HAnimSite(
                                                  DEF_ : SFString('Joe_rib10_midspine'),
                                                  name_ : SFString('rib10_midspine'),
                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.1908), SFDouble(-0.1113)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))])]),

                                            HAnimJoint(
                                              DEF_ : SFString('Joe_vl1'),
                                              name_ : SFString('vl1'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.1459), SFDouble(-0.0625)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('Joe_l1'),
                                                  name_ : SFString('l1'),
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
                                                  DEF_ : SFString('Joe_vt12'),
                                                  name_ : SFString('vt12'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.179), SFDouble(-0.068)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      DEF_ : SFString('Joe_t12'),
                                                      name_ : SFString('t12'),
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
                                                      DEF_ : SFString('Joe_vt11'),
                                                      name_ : SFString('vt11'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.2679), SFDouble(-0.081)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          DEF_ : SFString('Joe_t11'),
                                                          name_ : SFString('t11'),
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
                                                          DEF_ : SFString('Joe_vt10'),
                                                          name_ : SFString('vt10'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.242), SFDouble(-0.09)]),
                                                          skinCoordIndex_ : MFInt32([SFInt32(15)]),
                                                          skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              DEF_ : SFString('Joe_t10'),
                                                              name_ : SFString('t10'),
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
                                                                  DEF_ : SFString('Joe_substernale'),
                                                                  name_ : SFString('substernale'),
                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.25), SFDouble(0.113)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      USE_ : SFString('sitebox'))])]),

                                                            HAnimJoint(
                                                              DEF_ : SFString('Joe_vt9'),
                                                              name_ : SFString('vt9'),
                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.268), SFDouble(-0.1)]),
                                                              skinCoordIndex_ : MFInt32([SFInt32(13), SFInt32(14)]),
                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  DEF_ : SFString('Joe_t9'),
                                                                  name_ : SFString('t9'),
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
                                                                      DEF_ : SFString('Joe_r_thelion'),
                                                                      name_ : SFString('r_thelion'),
                                                                      translation_ : SFVec3f([SFDouble(-0.1135), SFDouble(1.318), SFDouble(0.095)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          USE_ : SFString('sitebox'))]),

                                                                    HAnimSite(
                                                                      DEF_ : SFString('Joe_l_thelion'),
                                                                      name_ : SFString('l_thelion'),
                                                                      translation_ : SFVec3f([SFDouble(0.1135), SFDouble(1.318), SFDouble(0.095)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          USE_ : SFString('sitebox'))])]),

                                                                HAnimJoint(
                                                                  DEF_ : SFString('Joe_vt8'),
                                                                  name_ : SFString('vt8'),
                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.294), SFDouble(-0.11)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      DEF_ : SFString('Joe_t8'),
                                                                      name_ : SFString('t8'),
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
                                                                      DEF_ : SFString('Joe_vt7'),
                                                                      name_ : SFString('vt7'),
                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.323), SFDouble(-0.1155)]),
                                                                      children_ : [
                                                                        HAnimSegment(
                                                                          DEF_ : SFString('Joe_t7'),
                                                                          name_ : SFString('t7'),
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
                                                                          DEF_ : SFString('Joe_vt6'),
                                                                          name_ : SFString('vt6'),
                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.352), SFDouble(-0.12)]),
                                                                          children_ : [
                                                                            HAnimSegment(
                                                                              DEF_ : SFString('Joe_t6'),
                                                                              name_ : SFString('t6'),
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
                                                                              DEF_ : SFString('Joe_vt5'),
                                                                              name_ : SFString('vt5'),
                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.381), SFDouble(-0.1235)]),
                                                                              children_ : [
                                                                                HAnimSegment(
                                                                                  DEF_ : SFString('Joe_t5'),
                                                                                  name_ : SFString('t5'),
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
                                                                                  DEF_ : SFString('Joe_vt4'),
                                                                                  name_ : SFString('vt4'),
                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.41), SFDouble(-0.1235)]),
                                                                                  skinCoordIndex_ : MFInt32([SFInt32(81)]),
                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                  children_ : [
                                                                                    HAnimSegment(
                                                                                      DEF_ : SFString('Joe_t4'),
                                                                                      name_ : SFString('t4'),
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
                                                                                      DEF_ : SFString('Joe_vt3'),
                                                                                      name_ : SFString('vt3'),
                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.438), SFDouble(-0.12)]),
                                                                                      children_ : [
                                                                                        HAnimSegment(
                                                                                          DEF_ : SFString('Joe_t3'),
                                                                                          name_ : SFString('t3'),
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
                                                                                          DEF_ : SFString('Joe_vt2'),
                                                                                          name_ : SFString('vt2'),
                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.468), SFDouble(-0.105)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              DEF_ : SFString('Joe_t2'),
                                                                                              name_ : SFString('t2'),
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
                                                                                              DEF_ : SFString('Joe_vt1'),
                                                                                              name_ : SFString('vt1'),
                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.497), SFDouble(-0.09)]),
                                                                                              skinCoordIndex_ : MFInt32([SFInt32(11), SFInt32(24)]),
                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  DEF_ : SFString('Joe_t1'),
                                                                                                  name_ : SFString('t1'),
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
                                                                                                      DEF_ : SFString('Joe_suprasternale'),
                                                                                                      name_ : SFString('suprasternale'),
                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.44), SFDouble(0.03)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                    HAnimSite(
                                                                                                      DEF_ : SFString('Joe_cervicale'),
                                                                                                      name_ : SFString('cervicale'),
                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.53), SFDouble(-0.084)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                HAnimJoint(
                                                                                                  DEF_ : SFString('Joe_vc7'),
                                                                                                  name_ : SFString('vc7'),
                                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.525), SFDouble(-0.072)]),
                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(74), SFInt32(75)]),
                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      DEF_ : SFString('Joe_c7'),
                                                                                                      name_ : SFString('c7'),
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
                                                                                                          DEF_ : SFString('Joe_r_neck_base'),
                                                                                                          name_ : SFString('r_neck_base'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.0646), SFDouble(1.5149), SFDouble(-0.0385)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                        HAnimSite(
                                                                                                          DEF_ : SFString('Joe_l_neck_base'),
                                                                                                          name_ : SFString('l_neck_base'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.0646), SFDouble(1.5149), SFDouble(-0.0385)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('sitebox'))])]),

                                                                                                    HAnimJoint(
                                                                                                      DEF_ : SFString('Joe_vc6'),
                                                                                                      name_ : SFString('vc6'),
                                                                                                      rotation_ : SFRotation([SFDouble(-0.37139068112485), SFDouble(-0.928476688976744), SFDouble(0), SFDouble(0.0468530829448654)]),
                                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.54), SFDouble(-0.05)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          DEF_ : SFString('Joe_c6'),
                                                                                                          name_ : SFString('c6'),
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
                                                                                                          DEF_ : SFString('Joe_vc5'),
                                                                                                          name_ : SFString('vc5'),
                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.552), SFDouble(-0.035)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              DEF_ : SFString('Joe_c5'),
                                                                                                              name_ : SFString('c5'),
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
                                                                                                                          point_ : MFVec3f([SFVec3f([0,1.5675,-0.0256]),SFVec3f([0,1.58225,-0.0185])]))))]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('Joe_vc4'),
                                                                                                              name_ : SFString('vc4'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.5675), SFDouble(-0.0256)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('Joe_c4'),
                                                                                                                  name_ : SFString('c4'),
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
                                                                                                                              point_ : MFVec3f([SFVec3f([0,1.58225,-0.0185]),SFVec3f([0,1.595,-0.0175])])))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.5675), SFDouble(-0.0256)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('jointbox')))]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('Joe_vc3'),
                                                                                                                  name_ : SFString('vc3'),
                                                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.58225), SFDouble(-0.0185)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('Joe_c3'),
                                                                                                                      name_ : SFString('c3'),
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
                                                                                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.58225), SFDouble(-0.0185)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox')))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('Joe_vc2'),
                                                                                                                      name_ : SFString('vc2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.595), SFDouble(-0.0175)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('Joe_c2'),
                                                                                                                          name_ : SFString('c2'),
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
                                                                                                                          DEF_ : SFString('Joe_vc1'),
                                                                                                                          name_ : SFString('vc1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.61), SFDouble(-0.015)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('Joe_c1'),
                                                                                                                              name_ : SFString('c1'),
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
                                                                                                                              DEF_ : SFString('Joe_skullbase'),
                                                                                                                              name_ : SFString('skullbase'),
                                                                                                                              rotation_ : SFRotation([SFDouble(0), SFDouble(-1), SFDouble(0), SFDouble(0.105595270685895)]),
                                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.63), SFDouble(-0.01)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(9)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  DEF_ : SFString('Joe_skull'),
                                                                                                                                  name_ : SFString('skull'),
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
                                                                                                                                      DEF_ : SFString('Joe_skull_tip'),
                                                                                                                                      name_ : SFString('skull_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.77), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      DEF_ : SFString('Joe_sellion'),
                                                                                                                                      name_ : SFString('sellion'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.665), SFDouble(0.09)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      DEF_ : SFString('Joe_r_infraorbitale'),
                                                                                                                                      name_ : SFString('r_infraorbitale'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.033), SFDouble(1.62), SFDouble(0.087)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      DEF_ : SFString('Joe_l_infraorbitale'),
                                                                                                                                      name_ : SFString('l_infraorbitale'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.033), SFDouble(1.62), SFDouble(0.087)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      DEF_ : SFString('Joe_supramenton'),
                                                                                                                                      name_ : SFString('supramenton'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.55), SFDouble(0.097)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      DEF_ : SFString('Joe_r_tragion'),
                                                                                                                                      name_ : SFString('r_tragion'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.077), SFDouble(1.64), SFDouble(-0.01)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      DEF_ : SFString('Joe_r_gonion'),
                                                                                                                                      name_ : SFString('r_gonion'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.052), SFDouble(1.58), SFDouble(0.015)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      DEF_ : SFString('Joe_l_tragion'),
                                                                                                                                      name_ : SFString('l_tragion'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.077), SFDouble(1.64), SFDouble(-0.01)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      DEF_ : SFString('Joe_l_gonion'),
                                                                                                                                      name_ : SFString('l_gonion'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.0631), SFDouble(1.58), SFDouble(0.015)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      DEF_ : SFString('Joe_nuchale'),
                                                                                                                                      name_ : SFString('nuchale'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.625), SFDouble(-0.0925)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  DEF_ : SFString('Joe_l_eyeball_joint'),
                                                                                                                                  name_ : SFString('l_eyeball_joint'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.034), SFDouble(1.659), SFDouble(0.06)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      DEF_ : SFString('Joe_l_eyeball'),
                                                                                                                                      name_ : SFString('l_eyeball'),
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
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.034), SFDouble(1.655), SFDouble(0.065)]),
                                                                                                                                          scale_ : SFVec3f([SFDouble(1), SFDouble(1), SFDouble(1.4)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox')))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  DEF_ : SFString('Joe_r_eyeball_joint'),
                                                                                                                                  name_ : SFString('r_eyeball_joint'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.034), SFDouble(1.659), SFDouble(0.06)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      DEF_ : SFString('Joe_r_eyeball'),
                                                                                                                                      name_ : SFString('r_eyeball'),
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
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.034), SFDouble(1.655), SFDouble(0.065)]),
                                                                                                                                          scale_ : SFVec3f([SFDouble(1), SFDouble(1), SFDouble(1.4)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox')))])])])])])])])])])]),

                                                                                                HAnimJoint(
                                                                                                  DEF_ : SFString('Joe_l_sternoclavicular'),
                                                                                                  name_ : SFString('l_sternoclavicular'),
                                                                                                  center_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(12)]),
                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      DEF_ : SFString('Joe_l_clavicle'),
                                                                                                      name_ : SFString('l_clavicle'),
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
                                                                                                          DEF_ : SFString('Joe_l_clavicale'),
                                                                                                          name_ : SFString('l_clavicale'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.03), SFDouble(1.46), SFDouble(0.035)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('sitebox'))])]),

                                                                                                    HAnimJoint(
                                                                                                      DEF_ : SFString('Joe_l_acromioclavicular'),
                                                                                                      name_ : SFString('l_acromioclavicular'),
                                                                                                      center_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(79)]),
                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          DEF_ : SFString('Joe_l_scapula'),
                                                                                                          name_ : SFString('l_scapula'),
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
                                                                                                              DEF_ : SFString('Joe_l_acromion'),
                                                                                                              name_ : SFString('l_acromion'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.175), SFDouble(1.4825), SFDouble(-0.06)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))]),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('Joe_l_axilla_ant'),
                                                                                                              name_ : SFString('l_axilla_ant'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.17), SFDouble(1.38), SFDouble(0.007)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))]),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('Joe_l_axilla_post'),
                                                                                                              name_ : SFString('l_axilla_post'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.16), SFDouble(1.38), SFDouble(-0.125)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))])]),

                                                                                                        HAnimJoint(
                                                                                                          DEF_ : SFString('Joe_l_shoulder'),
                                                                                                          name_ : SFString('l_shoulder'),
                                                                                                          rotation_ : SFRotation([SFDouble(0.978440403355312), SFDouble(0), SFDouble(0.206529361307055), SFDouble(0.207668332501419)]),
                                                                                                          center_ : SFVec3f([SFDouble(0.2), SFDouble(1.44), SFDouble(-0.04)]),
                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(41), SFInt32(42), SFInt32(44), SFInt32(80), SFInt32(102), SFInt32(103), SFInt32(104), SFInt32(105)]),
                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              DEF_ : SFString('Joe_l_upperarm'),
                                                                                                              name_ : SFString('l_upperarm'),
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
                                                                                                                  DEF_ : SFString('Joe_l_humeral_medial_epicn'),
                                                                                                                  name_ : SFString('l_humeral_medial_epicn'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.165), SFDouble(1.1388), SFDouble(-0.04)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('Joe_l_radiale'),
                                                                                                                  name_ : SFString('l_radiale'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.23), SFDouble(1.133), SFDouble(-0.055)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('Joe_l_humeral_lateral_epicn'),
                                                                                                                  name_ : SFString('l_humeral_lateral_epicn'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.244), SFDouble(1.1388), SFDouble(-0.04)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('Joe_l_elbow'),
                                                                                                              name_ : SFString('l_elbow'),
                                                                                                              rotation_ : SFRotation([SFDouble(-0.999999999999982), SFDouble(0), SFDouble(0), SFDouble(0.139356882713934)]),
                                                                                                              center_ : SFVec3f([SFDouble(0.2), SFDouble(1.1388), SFDouble(-0.04)]),
                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(45), SFInt32(46), SFInt32(47), SFInt32(109), SFInt32(110), SFInt32(111), SFInt32(112), SFInt32(113), SFInt32(115), SFInt32(116), SFInt32(117), SFInt32(118)]),
                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('Joe_l_forearm'),
                                                                                                                  name_ : SFString('l_forearm'),
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
                                                                                                                      DEF_ : SFString('Joe_l_radial_styloid'),
                                                                                                                      name_ : SFString('l_radial_styloid'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1901), SFDouble(0.8645), SFDouble(-0.0415)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                    HAnimSite(
                                                                                                                      DEF_ : SFString('Joe_l_olecranon'),
                                                                                                                      name_ : SFString('l_olecranon'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.2), SFDouble(1.1388), SFDouble(-0.08)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('Joe_l_wrist'),
                                                                                                                  name_ : SFString('l_wrist'),
                                                                                                                  rotation_ : SFRotation([SFDouble(-0.0686990484698033), SFDouble(-0.996963540991216), SFDouble(0.0366624968270793), SFDouble(0.495650570003821)]),
                                                                                                                  center_ : SFVec3f([SFDouble(0.2), SFDouble(0.87), SFDouble(-0.04)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(119), SFInt32(120), SFInt32(121), SFInt32(122), SFInt32(123), SFInt32(124), SFInt32(125), SFInt32(126)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('Joe_l_hand'),
                                                                                                                      name_ : SFString('l_hand'),
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
                                                                                                                          DEF_ : SFString('Joe_l_metacarpal_pha2'),
                                                                                                                          name_ : SFString('l_metacarpal_pha2'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.2009), SFDouble(0.8139), SFDouble(-0.0237)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                                        HAnimSite(
                                                                                                                          DEF_ : SFString('Joe_l_ulnar_styloid'),
                                                                                                                          name_ : SFString('l_ulnar_styloid'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.2142), SFDouble(0.8529), SFDouble(-0.0648)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                                        HAnimSite(
                                                                                                                          DEF_ : SFString('Joe_l_metacarpal_pha5'),
                                                                                                                          name_ : SFString('l_metacarpal_pha5'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1929), SFDouble(0.786), SFDouble(-0.1122)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('sitebox'))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('Joe_l_thumb1'),
                                                                                                                      name_ : SFString('l_thumb1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(127), SFInt32(128)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('Joe_l_thumb_metacarpal'),
                                                                                                                          name_ : SFString('l_thumb_metacarpal'),
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
                                                                                                                          DEF_ : SFString('Joe_l_thumb2'),
                                                                                                                          name_ : SFString('l_thumb2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(138), SFInt32(139), SFInt32(140), SFInt32(141), SFInt32(142), SFInt32(143)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('Joe_l_thumb_proximal'),
                                                                                                                              name_ : SFString('l_thumb_distal'),
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
                                                                                                                              DEF_ : SFString('Joe_l_thumb3'),
                                                                                                                              name_ : SFString('l_thumb3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(144), SFInt32(145), SFInt32(146), SFInt32(147), SFInt32(148), SFInt32(149), SFInt32(150), SFInt32(151), SFInt32(152)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  DEF_ : SFString('Joe_l_thumb_distal'),
                                                                                                                                  name_ : SFString('l_thumb_distal'),
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
                                                                                                                                      DEF_ : SFString('Joe_l_thumb_distal_tip'),
                                                                                                                                      name_ : SFString('l_thumb_distal_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1982), SFDouble(0.8061), SFDouble(0.0759)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('Joe_l_index0'),
                                                                                                                      name_ : SFString('l_index0'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(129), SFInt32(130)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('Joe_l_index_metacarpal'),
                                                                                                                          name_ : SFString('l_index_metacarpal'),
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
                                                                                                                          DEF_ : SFString('Joe_l_index1'),
                                                                                                                          name_ : SFString('l_index1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(138), SFInt32(139), SFInt32(140), SFInt32(153), SFInt32(154), SFInt32(155), SFInt32(163)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('Joe_l_index_proximal'),
                                                                                                                              name_ : SFString('l_index_proximal'),
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
                                                                                                                              DEF_ : SFString('Joe_l_index2'),
                                                                                                                              name_ : SFString('l_index2'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(166), SFInt32(167), SFInt32(168), SFInt32(169)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  DEF_ : SFString('Joe_l_index_middle'),
                                                                                                                                  name_ : SFString('l_index_middle'),
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
                                                                                                                                  DEF_ : SFString('Joe_l_index3'),
                                                                                                                                  name_ : SFString('l_index3'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(170), SFInt32(171), SFInt32(172), SFInt32(173), SFInt32(174), SFInt32(175), SFInt32(176), SFInt32(177), SFInt32(178)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      DEF_ : SFString('Joe_l_index_distal'),
                                                                                                                                      name_ : SFString('l_index_distal'),
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
                                                                                                                                          DEF_ : SFString('Joe_l_index_distal_tip'),
                                                                                                                                          name_ : SFString('l_index_distal_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.2089), SFDouble(0.6858), SFDouble(-0.0245)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                                                        HAnimSite(
                                                                                                                                          DEF_ : SFString('Joe_l_dactylion'),
                                                                                                                                          name_ : SFString('l_dactylion'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.2056), SFDouble(0.6743), SFDouble(-0.0482)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('Joe_l_middle0'),
                                                                                                                      name_ : SFString('l_middle0'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(131), SFInt32(132)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('Joe_l_middle_metacarpal'),
                                                                                                                          name_ : SFString('l_middle_metacarpal'),
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
                                                                                                                          DEF_ : SFString('Joe_l_middle1'),
                                                                                                                          name_ : SFString('l_middle1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(156), SFInt32(157), SFInt32(163), SFInt32(164)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('Joe_l_middle_proximal'),
                                                                                                                              name_ : SFString('l_middle_proximal'),
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
                                                                                                                              DEF_ : SFString('Joe_l_middle2'),
                                                                                                                              name_ : SFString('l_middle2'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(179), SFInt32(180), SFInt32(181), SFInt32(182)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  DEF_ : SFString('Joe_l_middle_middle'),
                                                                                                                                  name_ : SFString('l_middle_middle'),
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
                                                                                                                                  DEF_ : SFString('Joe_l_middle3'),
                                                                                                                                  name_ : SFString('l_middle3'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(183), SFInt32(184), SFInt32(185), SFInt32(186), SFInt32(187), SFInt32(188), SFInt32(189), SFInt32(190), SFInt32(191)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      DEF_ : SFString('Joe_l_middle_distal'),
                                                                                                                                      name_ : SFString('l_middle_distal'),
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
                                                                                                                                          DEF_ : SFString('Joe_l_middle_distal_tip'),
                                                                                                                                          name_ : SFString('l_middle_distal_tip'),
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
                                                                                                                      DEF_ : SFString('Joe_l_ring0'),
                                                                                                                      name_ : SFString('l_ring0'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(133), SFInt32(134)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('Joe_l_ring_metacarpal'),
                                                                                                                          name_ : SFString('l_ring_metacarpal'),
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
                                                                                                                          DEF_ : SFString('Joe_l_ring1'),
                                                                                                                          name_ : SFString('l_ring1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(158), SFInt32(159), SFInt32(164), SFInt32(165)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('Joe_l_ring_proximal'),
                                                                                                                              name_ : SFString('l_ring_proximal'),
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
                                                                                                                              DEF_ : SFString('Joe_l_ring2'),
                                                                                                                              name_ : SFString('l_ring2'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(192), SFInt32(193), SFInt32(194), SFInt32(195)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  DEF_ : SFString('Joe_l_ring_middle'),
                                                                                                                                  name_ : SFString('l_ring_middle'),
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
                                                                                                                                  DEF_ : SFString('Joe_l_ring3'),
                                                                                                                                  name_ : SFString('l_ring3'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(196), SFInt32(197), SFInt32(198), SFInt32(199), SFInt32(200), SFInt32(201), SFInt32(202), SFInt32(203), SFInt32(204)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      DEF_ : SFString('Joe_l_ring_distal'),
                                                                                                                                      name_ : SFString('l_ring_distal'),
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
                                                                                                                                          DEF_ : SFString('Joe_l_ring_distal_tip'),
                                                                                                                                          name_ : SFString('l_ring_distal_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.2035), SFDouble(0.675), SFDouble(-0.0756)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('Joe_l_pinky0'),
                                                                                                                      name_ : SFString('l_pinky0'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(135), SFInt32(136), SFInt32(137), SFInt32(165)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('Joe_l_pinky_metacarpal'),
                                                                                                                          name_ : SFString('l_pinky_metacarpal'),
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
                                                                                                                          DEF_ : SFString('Joe_l_pinky1'),
                                                                                                                          name_ : SFString('l_pinky1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(160), SFInt32(161), SFInt32(162)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('Joe_l_pinky_proximal'),
                                                                                                                              name_ : SFString('l_pinky_proximal'),
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
                                                                                                                              DEF_ : SFString('Joe_l_pinky2'),
                                                                                                                              name_ : SFString('l_pinky2'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(205), SFInt32(206), SFInt32(207), SFInt32(208)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  DEF_ : SFString('Joe_l_pinky_middle'),
                                                                                                                                  name_ : SFString('l_pinky_middle'),
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
                                                                                                                                  DEF_ : SFString('Joe_l_pinky3'),
                                                                                                                                  name_ : SFString('l_pinky3'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(209), SFInt32(210), SFInt32(211), SFInt32(212), SFInt32(213), SFInt32(214), SFInt32(215), SFInt32(216), SFInt32(217)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      DEF_ : SFString('Joe_l_pinky_distal'),
                                                                                                                                      name_ : SFString('l_pinky_distal'),
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
                                                                                                                                          DEF_ : SFString('Joe_l_pinky_distal_tip'),
                                                                                                                                          name_ : SFString('l_pinky_distal_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.2014), SFDouble(0.7009), SFDouble(-0.1012)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])])])])])])]),

                                                                                                HAnimJoint(
                                                                                                  DEF_ : SFString('Joe_r_sternoclavicular'),
                                                                                                  name_ : SFString('r_sternoclavicular'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.03), SFDouble(1.46), SFDouble(0)]),
                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(10)]),
                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      DEF_ : SFString('Joe_r_clavicle'),
                                                                                                      name_ : SFString('r_clavicle'),
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
                                                                                                          DEF_ : SFString('Joe_r_clavicale'),
                                                                                                          name_ : SFString('r_clavicale'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.03), SFDouble(1.46), SFDouble(0.035)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('sitebox'))])]),

                                                                                                    HAnimJoint(
                                                                                                      DEF_ : SFString('Joe_r_acromioclavicular'),
                                                                                                      name_ : SFString('r_acromioclavicular'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.09), SFDouble(1.41), SFDouble(-0.11)]),
                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(77), SFInt32(29)]),
                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(0.9)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          DEF_ : SFString('Joe_r_scapula'),
                                                                                                          name_ : SFString('r_scapula'),
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
                                                                                                              DEF_ : SFString('Joe_r_acromion'),
                                                                                                              name_ : SFString('r_acromion'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.178), SFDouble(1.4825), SFDouble(-0.0625)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))]),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('Joe_r_axilla_ant'),
                                                                                                              name_ : SFString('r_axilla_ant'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.17), SFDouble(1.38), SFDouble(0.007)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))]),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('Joe_r_axilla_post'),
                                                                                                              name_ : SFString('r_axilla_post'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.16), SFDouble(1.38), SFDouble(-0.127)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))])]),

                                                                                                        HAnimJoint(
                                                                                                          DEF_ : SFString('Joe_r_shoulder'),
                                                                                                          name_ : SFString('r_shoulder'),
                                                                                                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(-0.999999999999779), SFDouble(0.0372377698785245)]),
                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(1.44), SFDouble(-0.04)]),
                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(29), SFInt32(30), SFInt32(32), SFInt32(78), SFInt32(218), SFInt32(219), SFInt32(220), SFInt32(221), SFInt32(86), SFInt32(88)]),
                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.3), SFFloat(0.2)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              DEF_ : SFString('Joe_r_upperarm'),
                                                                                                              name_ : SFString('r_upperarm'),
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
                                                                                                                  DEF_ : SFString('Joe_r_humeral_medial_epicn'),
                                                                                                                  name_ : SFString('r_humeral_medial_epicn'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.165), SFDouble(1.1388), SFDouble(-0.04)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('Joe_r_radiale'),
                                                                                                                  name_ : SFString('r_radiale'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.23), SFDouble(1.133), SFDouble(-0.055)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('Joe_r_humeral_lateral_epicn'),
                                                                                                                  name_ : SFString('r_humeral_lateral_epicn'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.244), SFDouble(1.1388), SFDouble(-0.04)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('Joe_r_elbow'),
                                                                                                              name_ : SFString('r_elbow'),
                                                                                                              rotation_ : SFRotation([SFDouble(-0.970142500145333), SFDouble(-0.242535625036333), SFDouble(0), SFDouble(0.149344152360623)]),
                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(1.1388), SFDouble(-0.04)]),
                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(33), SFInt32(34), SFInt32(35), SFInt32(225), SFInt32(226), SFInt32(227), SFInt32(228), SFInt32(229), SFInt32(231), SFInt32(232), SFInt32(233), SFInt32(234)]),
                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('Joe_r_forearm'),
                                                                                                                  name_ : SFString('r_forearm'),
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
                                                                                                                      DEF_ : SFString('Joe_r_radial_styloid'),
                                                                                                                      name_ : SFString('r_radial_styloid'),
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.9), SFDouble(-0.015)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                    HAnimSite(
                                                                                                                      DEF_ : SFString('Joe_r_olecranon'),
                                                                                                                      name_ : SFString('r_olecranon'),
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(1.1388), SFDouble(-0.08)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('Joe_r_wrist'),
                                                                                                                  name_ : SFString('r_wrist'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.89), SFDouble(-0.04)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(235), SFInt32(236), SFInt32(237), SFInt32(238), SFInt32(239), SFInt32(240), SFInt32(241), SFInt32(242)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('Joe_r_hand'),
                                                                                                                      name_ : SFString('r_hand'),
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
                                                                                                                          DEF_ : SFString('Joe_r_ulnar_styloid'),
                                                                                                                          name_ : SFString('r_ulnar_styloid'),
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.9), SFDouble(-0.085)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('sitebox'))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('Joe_r_thumb1'),
                                                                                                                      name_ : SFString('r_thumb1'),
                                                                                                                      rotation_ : SFRotation([SFDouble(0.999999999999976), SFDouble(0), SFDouble(0), SFDouble(0.11171329853783)]),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.85), SFDouble(0)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(243), SFInt32(244)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('Joe_r_thumb_metacarpal'),
                                                                                                                          name_ : SFString('r_thumb_metacarpal'),
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
                                                                                                                          DEF_ : SFString('Joe_r_thumb2'),
                                                                                                                          name_ : SFString('r_thumb2'),
                                                                                                                          rotation_ : SFRotation([SFDouble(0.707106781186553), SFDouble(0.707106781186553), SFDouble(0), SFDouble(0.167569951968385)]),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.82), SFDouble(0.03)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(254), SFInt32(255), SFInt32(256), SFInt32(257), SFInt32(258), SFInt32(259)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('Joe_r_thumb_proximal'),
                                                                                                                              name_ : SFString('r_thumb_proximal'),
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
                                                                                                                              DEF_ : SFString('Joe_r_thumb3'),
                                                                                                                              name_ : SFString('r_thumb3'),
                                                                                                                              rotation_ : SFRotation([SFDouble(0.707106781186553), SFDouble(0.707106781186553), SFDouble(0), SFDouble(0.167569951968385)]),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.8), SFDouble(0.05)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(260), SFInt32(261), SFInt32(262), SFInt32(263), SFInt32(264), SFInt32(265), SFInt32(266), SFInt32(267), SFInt32(268)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  DEF_ : SFString('Joe_r_thumb_distal'),
                                                                                                                                  name_ : SFString('r_thumb_distal'),
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
                                                                                                                                      DEF_ : SFString('Joe_r_thumb_distal_tip'),
                                                                                                                                      name_ : SFString('r_thumb_distal_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.78), SFDouble(0.07)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('Joe_r_index0'),
                                                                                                                      name_ : SFString('r_index0'),
                                                                                                                      rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1.00000000001315), SFDouble(0.0055856647187357)]),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.84), SFDouble(-0.015)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(245), SFInt32(246)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('Joe_r_index_metacarpal'),
                                                                                                                          name_ : SFString('r_index_metacarpal'),
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
                                                                                                                              DEF_ : SFString('Joe_r_metacarpal_pha2'),
                                                                                                                              name_ : SFString('r_metacarpal_pha2'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.793), SFDouble(-0.005)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('sitebox'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('Joe_r_index1'),
                                                                                                                          name_ : SFString('r_index1'),
                                                                                                                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1.00000000001315), SFDouble(0.0055856647187357)]),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.793), SFDouble(-0.015)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(254), SFInt32(255), SFInt32(256), SFInt32(269), SFInt32(270), SFInt32(271), SFInt32(279)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('Joe_r_index_proximal'),
                                                                                                                              name_ : SFString('r_index_proximal'),
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
                                                                                                                              DEF_ : SFString('Joe_r_index2'),
                                                                                                                              name_ : SFString('r_index2'),
                                                                                                                              rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1.00000000001315), SFDouble(0.0055856647187357)]),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.745), SFDouble(-0.015)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(282), SFInt32(283), SFInt32(284), SFInt32(285)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  DEF_ : SFString('Joe_r_index_middle'),
                                                                                                                                  name_ : SFString('r_index_middle'),
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
                                                                                                                                  DEF_ : SFString('Joe_r_index3'),
                                                                                                                                  name_ : SFString('r_index3'),
                                                                                                                                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1.00000000001315), SFDouble(0.0055856647187357)]),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.72), SFDouble(-0.015)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(286), SFInt32(287), SFInt32(288), SFInt32(289), SFInt32(290), SFInt32(291), SFInt32(292), SFInt32(293), SFInt32(294)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      DEF_ : SFString('Joe_r_index_distal'),
                                                                                                                                      name_ : SFString('r_index_distal'),
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
                                                                                                                                          DEF_ : SFString('Joe_r_index_distal_tip'),
                                                                                                                                          name_ : SFString('r_index_distal_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.695), SFDouble(-0.015)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('Joe_r_middle0'),
                                                                                                                      name_ : SFString('r_middle0'),
                                                                                                                      rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1.00000000001315), SFDouble(0.0055856647187357)]),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.835), SFDouble(-0.04)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(247), SFInt32(248)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('Joe_r_middle_metacarpal'),
                                                                                                                          name_ : SFString('r_middle_metacarpal'),
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
                                                                                                                          DEF_ : SFString('Joe_r_middle1'),
                                                                                                                          name_ : SFString('r_middle1'),
                                                                                                                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1.00000000001315), SFDouble(0.0055856647187357)]),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.788), SFDouble(-0.04)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(272), SFInt32(273), SFInt32(279), SFInt32(280)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('Joe_r_middle_proximal'),
                                                                                                                              name_ : SFString('r_middle_proximal'),
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
                                                                                                                              DEF_ : SFString('Joe_r_middle2'),
                                                                                                                              name_ : SFString('r_middle2'),
                                                                                                                              rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1.00000000001315), SFDouble(0.0055856647187357)]),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.74), SFDouble(-0.04)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(295), SFInt32(296), SFInt32(297), SFInt32(298)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  DEF_ : SFString('Joe_r_middle_middle'),
                                                                                                                                  name_ : SFString('r_middle_middle'),
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
                                                                                                                                  DEF_ : SFString('Joe_r_middle3'),
                                                                                                                                  name_ : SFString('r_middle3'),
                                                                                                                                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1.00000000001315), SFDouble(0.0055856647187357)]),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.7142), SFDouble(-0.04)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(299), SFInt32(300), SFInt32(301), SFInt32(302), SFInt32(303), SFInt32(304), SFInt32(305), SFInt32(306), SFInt32(307)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      DEF_ : SFString('Joe_r_middle_distal'),
                                                                                                                                      name_ : SFString('r_middle_distal'),
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
                                                                                                                                          DEF_ : SFString('Joe_r_dactylion'),
                                                                                                                                          name_ : SFString('r_dactylion'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.68), SFDouble(-0.04)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                                                        HAnimSite(
                                                                                                                                          DEF_ : SFString('Joe_r_middle_distal_tip'),
                                                                                                                                          name_ : SFString('r_middle_distal_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.68), SFDouble(-0.04)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('Joe_r_ring0'),
                                                                                                                      name_ : SFString('r_ring0'),
                                                                                                                      rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1.00000000001315), SFDouble(0.0055856647187357)]),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.835), SFDouble(-0.065)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(249), SFInt32(250)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('Joe_r_ring_metacarpal'),
                                                                                                                          name_ : SFString('r_ring_metacarpal'),
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
                                                                                                                          DEF_ : SFString('Joe_r_ring1'),
                                                                                                                          name_ : SFString('r_ring1'),
                                                                                                                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1.00000000001315), SFDouble(0.0055856647187357)]),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.793), SFDouble(-0.065)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(274), SFInt32(275), SFInt32(280), SFInt32(281)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('Joe_r_ring_proximal'),
                                                                                                                              name_ : SFString('r_ring_proximal'),
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
                                                                                                                              DEF_ : SFString('Joe_r_ring2'),
                                                                                                                              name_ : SFString('r_ring2'),
                                                                                                                              rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1.00000000001315), SFDouble(0.0055856647187357)]),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.74), SFDouble(-0.065)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(308), SFInt32(309), SFInt32(310), SFInt32(311)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  DEF_ : SFString('Joe_r_ring_middle'),
                                                                                                                                  name_ : SFString('r_ring_middle'),
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
                                                                                                                                  DEF_ : SFString('Joe_r_ring3'),
                                                                                                                                  name_ : SFString('r_ring3'),
                                                                                                                                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1.00000000001315), SFDouble(0.0055856647187357)]),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.7177), SFDouble(-0.065)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(312), SFInt32(313), SFInt32(314), SFInt32(315), SFInt32(316), SFInt32(317), SFInt32(318), SFInt32(319), SFInt32(320)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      DEF_ : SFString('Joe_r_ring_distal'),
                                                                                                                                      name_ : SFString('r_ring_distal'),
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
                                                                                                                                          DEF_ : SFString('Joe_r_ring_distal_tip'),
                                                                                                                                          name_ : SFString('r_ring_distal_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.695), SFDouble(-0.065)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('Joe_r_pinky0'),
                                                                                                                      name_ : SFString('r_pinky0'),
                                                                                                                      rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1.00000000001315), SFDouble(0.0055856647187357)]),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.84), SFDouble(-0.085)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(251), SFInt32(252), SFInt32(253), SFInt32(281)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('Joe_r_pinky_metacarpal'),
                                                                                                                          name_ : SFString('r_pinky_metacarpal'),
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
                                                                                                                              DEF_ : SFString('Joe_r_metacarpal_pha5'),
                                                                                                                              name_ : SFString('r_metacarpal_pha5'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.79), SFDouble(-0.095)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('sitebox'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('Joe_r_pinky1'),
                                                                                                                          name_ : SFString('r_pinky1'),
                                                                                                                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1.00000000001315), SFDouble(0.0055856647187357)]),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.79), SFDouble(-0.085)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(276), SFInt32(277), SFInt32(278)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('Joe_r_pinky_proximal'),
                                                                                                                              name_ : SFString('r_pinky_proximal'),
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
                                                                                                                              DEF_ : SFString('Joe_r_pinky2'),
                                                                                                                              name_ : SFString('r_pinky2'),
                                                                                                                              rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1.00000000001315), SFDouble(0.0055856647187357)]),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.755), SFDouble(-0.085)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(321), SFInt32(322), SFInt32(323), SFInt32(324)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  DEF_ : SFString('Joe_r_pinky_middle'),
                                                                                                                                  name_ : SFString('r_pinky_middle'),
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
                                                                                                                                  DEF_ : SFString('Joe_r_pinky3'),
                                                                                                                                  name_ : SFString('r_pinky3'),
                                                                                                                                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1.00000000001315), SFDouble(0.0055856647187357)]),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.735), SFDouble(-0.09)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(325), SFInt32(326), SFInt32(327), SFInt32(328), SFInt32(329), SFInt32(330), SFInt32(331), SFInt32(332), SFInt32(333)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      DEF_ : SFString('Joe_r_pinky_distal'),
                                                                                                                                      name_ : SFString('r_pinky_distal'),
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
                                                                                                                                          DEF_ : SFString('Joe_r_pinky_distal_tip'),
                                                                                                                                          name_ : SFString('r_pinky_distal_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.72), SFDouble(-0.085)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])])])])])])])])])])])])])])])])])])])])])])])])]),

                        HAnimJoint(
                          USE_ : SFString('Joe_HumanoidRoot')),

                        HAnimJoint(
                          USE_ : SFString('Joe_sacroiliac')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_hip')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_knee')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_ankle')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_subtalar')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_midtarsal')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_metatarsal')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_hip')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_knee')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_ankle')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_subtalar')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_midtarsal')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_metatarsal')),

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
                          USE_ : SFString('Joe_l_eyeball_joint')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_eyeball_joint')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_sternoclavicular')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_acromioclavicular')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_shoulder')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_elbow')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_wrist')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_thumb1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_thumb2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_thumb3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_index0')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_index1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_index2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_index3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_middle0')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_middle1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_middle2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_middle3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_ring0')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_ring1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_ring2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_ring3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_pinky0')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_pinky1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_pinky2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_l_pinky3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_sternoclavicular')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_acromioclavicular')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_shoulder')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_elbow')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_wrist')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_thumb1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_thumb2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_thumb3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_index0')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_index1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_index2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_index3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_middle0')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_middle1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_middle2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_middle3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_ring0')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_ring1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_ring2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_ring3')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_pinky0')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_pinky1')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_pinky2')),

                        HAnimJoint(
                          USE_ : SFString('Joe_r_pinky3')),
                      skinCoord_ : 
                        Coordinate(
                          DEF_ : SFString('TheSkinCoord'),
                          point_ : MFVec3f([SFVec3f([0,1.77,0]),SFVec3f([0,1.665,0.09]),SFVec3f([-0.033,1.62,0.087]),SFVec3f([0.033,1.62,0.087]),SFVec3f([0,1.55,0.097]),SFVec3f([-0.077,1.64,-0.01]),SFVec3f([-0.0527,1.58,0.015]),SFVec3f([0.077,1.64,-0.01]),SFVec3f([0.0527,1.58,0.015]),SFVec3f([0,1.625,-0.0925]),SFVec3f([-0.03,1.46,0.035]),SFVec3f([0,1.44,0.03]),SFVec3f([0.03,1.46,0.035]),SFVec3f([-0.1135,1.318,0.095]),SFVec3f([0.1135,1.318,0.095]),SFVec3f([0,1.25,0.113]),SFVec3f([-0.087,1.19,0.09]),SFVec3f([-0.0935,1.03,0.075]),SFVec3f([0.087,1.19,0.09]),SFVec3f([0.0935,1.03,0.075]),SFVec3f([-0.1425,1.065,0.0033]),SFVec3f([-0.15,0.9,-0.01]),SFVec3f([0.1425,1.065,0.0033]),SFVec3f([0.15,0.9,-0.01]),SFVec3f([0,1.53,-0.084]),SFVec3f([0.0049,1.1908,-0.1113]),SFVec3f([-0.0773,1.019,-0.12]),SFVec3f([0.0773,1.019,-0.12]),SFVec3f([0.005,1.0915,-0.1091]),SFVec3f([-0.178,1.4825,-0.0625]),SFVec3f([-0.17,1.38,0.007]),SFVec3f([-0.1884,0.8676,-0.036]),SFVec3f([-0.16,1.38,-0.127]),SFVec3f([-0.2,1.1388,-0.08]),SFVec3f([-0.244,1.1388,-0.04]),SFVec3f([-0.165,1.1388,-0.04]),SFVec3f([-0.23,1.133,-0.055]),SFVec3f([-0.1977,0.8169,-0.0177]),SFVec3f([-0.1941,0.6772,-0.0423]),SFVec3f([-0.2117,0.8562,-0.0584]),SFVec3f([-0.1929,0.789,-0.1064]),SFVec3f([0.175,1.4825,-0.06]),SFVec3f([0.17,1.38,0.007]),SFVec3f([0.1901,0.8645,-0.0415]),SFVec3f([0.16,1.38,-0.125]),SFVec3f([0.2,1.1388,-0.08]),SFVec3f([0.165,1.1388,-0.04]),SFVec3f([0.244,1.1388,-0.04]),SFVec3f([0.23,1.133,-0.055]),SFVec3f([0.2009,0.8139,-0.0237]),SFVec3f([0.2056,0.6743,-0.0482]),SFVec3f([0.2142,0.8529,-0.0648]),SFVec3f([0.1929,0.786,-0.1122]),SFVec3f([-0.1,0.4913,-0.03]),SFVec3f([-0.17,0.466,0]),SFVec3f([-0.05,0.466,0]),SFVec3f([-0.165,0.01,0.12]),SFVec3f([-0.15,0.07,0]),SFVec3f([-0.085,0.086,0.0125]),SFVec3f([-0.09,0.056,0.0125]),SFVec3f([-0.115,0.02,0.122]),SFVec3f([-0.115,0.04,-0.055]),SFVec3f([-0.11,0.011,0.19]),SFVec3f([0.0993,0.4881,-0.0309]),SFVec3f([0.17,0.466,0]),SFVec3f([0.05,0.4867,0]),SFVec3f([0.165,0.01,0.12]),SFVec3f([0.15,0.07,0]),SFVec3f([0.085,0.086,0.0125]),SFVec3f([0.09,0.056,0.0125]),SFVec3f([0.115,0.02,0.122]),SFVec3f([0.115,0.04,-0.055]),SFVec3f([0.11,0.011,0.19]),SFVec3f([0,0.875,0]),SFVec3f([-0.0646,1.5149,-0.038]),SFVec3f([0.0646,1.5149,-0.038]),SFVec3f([0,1.07225,0.09]),SFVec3f([-0.11,1.427,-0.1375]),SFVec3f([-0.235,1.42,-0.0625]),SFVec3f([0.11,1.427,-0.1375]),SFVec3f([0.235,1.42,-0.0625]),SFVec3f([0,1.41,-0.145]),SFVec3f([0,0.925,0.08]),SFVec3f([-0.087,1.19,-0.09]),SFVec3f([0.087,1.19,-0.09]),SFVec3f([0.172,1.32,-0.03]),SFVec3f([-0.172,1.32,-0.03]),SFVec3f([0.15,1.23,-0.015]),SFVec3f([-0.15,1.23,-0.015]),SFVec3f([0.079,0.92,-0.14]),SFVec3f([0.1,0.9,0.077]),SFVec3f([-0.079,0.92,-0.14]),SFVec3f([-0.1,0.9,0.075]),SFVec3f([0,0.87,0]),SFVec3f([0.171,0.65,0]),SFVec3f([0.02,0.65,0]),SFVec3f([0.1,0.65,-0.08]),SFVec3f([0.1,0.65,0.07]),SFVec3f([-0.171,0.65,0]),SFVec3f([-0.02,0.65,0]),SFVec3f([-0.1,0.65,-0.08]),SFVec3f([-0.1,0.65,0.07]),SFVec3f([0.25,1.27,-0.04]),SFVec3f([0.17,1.27,-0.04]),SFVec3f([0.2,1.27,-0.09]),SFVec3f([0.2,1.27,0.02]),SFVec3f([0.244,1.1388,-0.04]),SFVec3f([0.165,1.1388,-0.04]),SFVec3f([0.2,1.1388,-0.08]),SFVec3f([0.2,1.1388,-0.013]),SFVec3f([0.225,1,-0.01]),SFVec3f([0.225,1,-0.07]),SFVec3f([0.185,1,-0.01]),SFVec3f([0.185,1,-0.07]),SFVec3f([0.2,1.1388,-0.04]),SFVec3f([0.225,0.92,-0.04]),SFVec3f([0.175,0.92,-0.04]),SFVec3f([0.2,0.92,-0.065]),SFVec3f([0.2,0.92,-0.015]),SFVec3f([0.225,0.89,-0.04]),SFVec3f([0.175,0.89,-0.04]),SFVec3f([0.2,0.89,-0.065]),SFVec3f([0.2,0.89,-0.015]),SFVec3f([0.218,0.86,-0.04]),SFVec3f([0.184,0.86,-0.04]),SFVec3f([0.2,0.87,-0.07]),SFVec3f([0.2,0.87,0]),SFVec3f([0.21,0.85,0]),SFVec3f([0.1854,0.85,0]),SFVec3f([0.212,0.84,-0.015]),SFVec3f([0.183,0.84,-0.015]),SFVec3f([0.213,0.835,-0.04]),SFVec3f([0.19,0.835,-0.04]),SFVec3f([0.211,0.835,-0.065]),SFVec3f([0.192,0.835,-0.065]),SFVec3f([0.208,0.84,-0.085]),SFVec3f([0.19,0.84,-0.085]),SFVec3f([0.2,0.84,-0.095]),SFVec3f([0.215,0.82,0]),SFVec3f([0.193,0.815,0.005]),SFVec3f([0.198,0.8,0.012]),SFVec3f([0.21,0.82,0.03]),SFVec3f([0.19,0.82,0.03]),SFVec3f([0.2,0.835,0.039]),SFVec3f([0.212,0.8,0.05]),SFVec3f([0.188,0.8,0.05]),SFVec3f([0.2,0.807,0.057]),SFVec3f([0.2,0.793,0.035]),SFVec3f([0.2,0.774,0.076]),SFVec3f([0.212,0.78,0.07]),SFVec3f([0.188,0.78,0.07]),SFVec3f([0.2,0.785,0.075]),SFVec3f([0.2,0.77,0.062]),SFVec3f([0.215,0.793,-0.015]),SFVec3f([0.187,0.793,-0.015]),SFVec3f([0.2,0.793,-0.005]),SFVec3f([0.215,0.788,-0.04]),SFVec3f([0.187,0.788,-0.04]),SFVec3f([0.215,0.793,-0.065]),SFVec3f([0.187,0.793,-0.065]),SFVec3f([0.21,0.79,-0.085]),SFVec3f([0.19,0.79,-0.085]),SFVec3f([0.2,0.79,-0.095]),SFVec3f([0.19,0.77,-0.0275]),SFVec3f([0.19,0.77,-0.0525]),SFVec3f([0.19,0.78,-0.0775]),SFVec3f([0.212,0.745,-0.015]),SFVec3f([0.188,0.745,-0.02]),SFVec3f([0.2,0.745,-0.0255]),SFVec3f([0.2,0.745,-0.0045]),SFVec3f([0.211,0.72,-0.015]),SFVec3f([0.189,0.72,-0.015]),SFVec3f([0.2,0.72,-0.0252]),SFVec3f([0.2,0.72,-0.0048]),SFVec3f([0.21,0.695,-0.015]),SFVec3f([0.19,0.695,-0.015]),SFVec3f([0.2,0.695,-0.025]),SFVec3f([0.2,0.695,-0.005]),SFVec3f([0.2,0.685,-0.015]),SFVec3f([0.215,0.74,-0.04]),SFVec3f([0.185,0.74,-0.04]),SFVec3f([0.2,0.74,-0.055]),SFVec3f([0.2,0.74,-0.025]),SFVec3f([0.21,0.7142,-0.04]),SFVec3f([0.19,0.7142,-0.04]),SFVec3f([0.2,0.7142,-0.053]),SFVec3f([0.2,0.7142,-0.027]),SFVec3f([0.21,0.68,-0.04]),SFVec3f([0.19,0.68,-0.04]),SFVec3f([0.2,0.68,-0.05]),SFVec3f([0.2,0.68,-0.03]),SFVec3f([0.2,0.67,-0.04]),SFVec3f([0.212,0.74,-0.065]),SFVec3f([0.188,0.74,-0.065]),SFVec3f([0.2,0.74,-0.0756]),SFVec3f([0.2,0.74,-0.0542]),SFVec3f([0.21,0.7177,-0.065]),SFVec3f([0.19,0.7177,-0.065]),SFVec3f([0.2,0.7177,-0.0751]),SFVec3f([0.2,0.7177,-0.0549]),SFVec3f([0.21,0.695,-0.065]),SFVec3f([0.19,0.695,-0.065]),SFVec3f([0.2,0.695,-0.075]),SFVec3f([0.2,0.695,-0.055]),SFVec3f([0.2,0.685,-0.065]),SFVec3f([0.211,0.755,-0.085]),SFVec3f([0.189,0.755,-0.085]),SFVec3f([0.2,0.755,-0.0952]),SFVec3f([0.2,0.755,-0.0748]),SFVec3f([0.21,0.735,-0.085]),SFVec3f([0.19,0.735,-0.085]),SFVec3f([0.2,0.735,-0.0951]),SFVec3f([0.2,0.735,-0.0749]),SFVec3f([0.21,0.72,-0.085]),SFVec3f([0.19,0.72,-0.085]),SFVec3f([0.2,0.72,-0.095]),SFVec3f([0.2,0.72,-0.075]),SFVec3f([0.2,0.71,-0.085]),SFVec3f([-0.23,1.23,-0.04]),SFVec3f([-0.16,1.23,-0.04]),SFVec3f([-0.2,1.235,-0.105]),SFVec3f([-0.2,1.235,0.02]),SFVec3f([-0.244,1.1388,-0.04]),SFVec3f([-0.165,1.1388,-0.04]),SFVec3f([-0.2,1.1388,-0.08]),SFVec3f([-0.2,1.1388,0.013]),SFVec3f([-0.225,1,-0.01]),SFVec3f([-0.225,1,-0.07]),SFVec3f([-0.185,1,-0.01]),SFVec3f([-0.185,1,-0.07]),SFVec3f([-0.2,1.1388,-0.04]),SFVec3f([-0.225,0.92,-0.04]),SFVec3f([-0.175,0.92,-0.04]),SFVec3f([-0.2,0.92,-0.065]),SFVec3f([-0.2,0.92,-0.015]),SFVec3f([-0.225,0.89,-0.04]),SFVec3f([-0.175,0.89,-0.04]),SFVec3f([-0.2,0.89,-0.065]),SFVec3f([-0.2,0.89,-0.015]),SFVec3f([-0.218,0.86,-0.04]),SFVec3f([-0.184,0.86,-0.04]),SFVec3f([-0.2,0.87,-0.07]),SFVec3f([-0.2,0.87,0]),SFVec3f([-0.21,0.85,0]),SFVec3f([-0.1854,0.85,0]),SFVec3f([-0.212,0.84,-0.015]),SFVec3f([-0.183,0.84,-0.015]),SFVec3f([-0.213,0.835,-0.04]),SFVec3f([-0.19,0.835,-0.04]),SFVec3f([-0.211,0.835,-0.065]),SFVec3f([-0.192,0.835,-0.065]),SFVec3f([-0.208,0.84,-0.085]),SFVec3f([-0.19,0.84,-0.085]),SFVec3f([-0.2,0.84,-0.095]),SFVec3f([-0.215,0.82,0]),SFVec3f([-0.193,0.815,0.005]),SFVec3f([-0.198,0.8,0.012]),SFVec3f([-0.21,0.82,0.03]),SFVec3f([-0.19,0.82,0.03]),SFVec3f([-0.2,0.835,0.039]),SFVec3f([-0.212,0.8,0.05]),SFVec3f([-0.188,0.8,0.05]),SFVec3f([-0.2,0.807,0.057]),SFVec3f([-0.2,0.793,0.035]),SFVec3f([-0.2,0.774,0.076]),SFVec3f([-0.212,0.78,0.07]),SFVec3f([-0.188,0.78,0.07]),SFVec3f([-0.2,0.785,0.075]),SFVec3f([-0.2,0.77,0.062]),SFVec3f([-0.215,0.793,-0.015]),SFVec3f([-0.187,0.793,-0.015]),SFVec3f([-0.2,0.793,-0.005]),SFVec3f([-0.215,0.788,-0.04]),SFVec3f([-0.187,0.788,-0.04]),SFVec3f([-0.215,0.793,-0.065]),SFVec3f([-0.187,0.793,-0.065]),SFVec3f([-0.21,0.79,-0.085]),SFVec3f([-0.19,0.79,-0.085]),SFVec3f([-0.2,0.79,-0.095]),SFVec3f([-0.19,0.77,-0.0275]),SFVec3f([-0.19,0.77,-0.0525]),SFVec3f([-0.19,0.78,-0.0775]),SFVec3f([-0.212,0.745,-0.015]),SFVec3f([-0.188,0.745,-0.02]),SFVec3f([-0.2,0.745,-0.0255]),SFVec3f([-0.2,0.745,-0.0045]),SFVec3f([-0.211,0.72,-0.015]),SFVec3f([-0.189,0.72,-0.015]),SFVec3f([-0.2,0.72,-0.0252]),SFVec3f([-0.2,0.72,-0.0048]),SFVec3f([-0.21,0.695,-0.015]),SFVec3f([-0.19,0.695,-0.015]),SFVec3f([-0.2,0.695,-0.025]),SFVec3f([-0.2,0.695,-0.005]),SFVec3f([-0.2,0.685,-0.015]),SFVec3f([-0.215,0.74,-0.04]),SFVec3f([-0.185,0.74,-0.04]),SFVec3f([-0.2,0.74,-0.055]),SFVec3f([-0.2,0.74,-0.025]),SFVec3f([-0.21,0.7142,-0.04]),SFVec3f([-0.19,0.7142,-0.04]),SFVec3f([-0.2,0.7142,-0.053]),SFVec3f([-0.2,0.7142,-0.027]),SFVec3f([-0.21,0.68,-0.04]),SFVec3f([-0.19,0.68,-0.04]),SFVec3f([-0.2,0.68,-0.05]),SFVec3f([-0.2,0.68,-0.03]),SFVec3f([-0.2,0.67,-0.04]),SFVec3f([-0.212,0.74,-0.065]),SFVec3f([-0.188,0.74,-0.065]),SFVec3f([-0.2,0.74,-0.0756]),SFVec3f([-0.2,0.74,-0.0542]),SFVec3f([-0.21,0.7177,-0.065]),SFVec3f([-0.19,0.7177,-0.065]),SFVec3f([-0.2,0.7177,-0.0751]),SFVec3f([-0.2,0.7177,-0.0549]),SFVec3f([-0.21,0.695,-0.065]),SFVec3f([-0.19,0.695,-0.065]),SFVec3f([-0.2,0.695,-0.075]),SFVec3f([-0.2,0.695,-0.055]),SFVec3f([-0.2,0.685,-0.065]),SFVec3f([-0.211,0.755,-0.085]),SFVec3f([-0.189,0.755,-0.085]),SFVec3f([-0.2,0.755,-0.0952]),SFVec3f([-0.2,0.755,-0.0748]),SFVec3f([-0.21,0.735,-0.085]),SFVec3f([-0.19,0.735,-0.085]),SFVec3f([-0.2,0.735,-0.0951]),SFVec3f([-0.2,0.735,-0.0749]),SFVec3f([-0.21,0.72,-0.085]),SFVec3f([-0.19,0.72,-0.085]),SFVec3f([-0.2,0.72,-0.095]),SFVec3f([-0.2,0.72,-0.075]),SFVec3f([-0.2,0.71,-0.085]),SFVec3f([0.115,0.466,0.06]),SFVec3f([0.115,0.466,-0.055]),SFVec3f([0.15,0.466,0]),SFVec3f([0.05,0.466,0]),SFVec3f([0.17,0.3,0]),SFVec3f([0.06,0.3,0]),SFVec3f([0.1,0.3,-0.05]),SFVec3f([0.1,0.3,0.05]),SFVec3f([0.15,0.07,0]),SFVec3f([0.085,0.086,0.0125]),SFVec3f([0.115,0.069,-0.045]),SFVec3f([0.117,0.0975,0.0615]),SFVec3f([0.1375,0.006,-0.03]),SFVec3f([0.095,0.006,-0.03]),SFVec3f([0.115,0.015,-0.045]),SFVec3f([0.115,0.06,0.1]),SFVec3f([0.115,0,0.07]),SFVec3f([0.165,0,0.07]),SFVec3f([0.095,0,0.07]),SFVec3f([0.115,0.04,0.13]),SFVec3f([0.125,0,0.12]),SFVec3f([0.165,0,0.12]),SFVec3f([0.087,0,0.122]),SFVec3f([0.09,0.012,0.188]),SFVec3f([0.11,0.011,0.19]),SFVec3f([0.128,0.011,0.185]),SFVec3f([0.142,0.011,0.178]),SFVec3f([0.154,0.01,0.168]),SFVec3f([-0.115,0.466,0.06]),SFVec3f([-0.115,0.466,-0.055]),SFVec3f([-0.17,0.466,0]),SFVec3f([-0.05,0.466,0]),SFVec3f([-0.17,0.3,0]),SFVec3f([-0.06,0.3,0]),SFVec3f([-0.1,0.3,-0.05]),SFVec3f([-0.1,0.3,0.05]),SFVec3f([-0.15,0.07,0]),SFVec3f([-0.085,0.086,0.0125]),SFVec3f([-0.115,0.069,-0.045]),SFVec3f([-0.117,0.0975,0.0615]),SFVec3f([-0.1375,0.006,-0.03]),SFVec3f([-0.095,0.006,-0.03]),SFVec3f([-0.095,0.006,-0.03]),SFVec3f([-0.115,0.06,0.1]),SFVec3f([-0.115,0,0.07]),SFVec3f([-0.165,0,0.07]),SFVec3f([-0.095,0,0.07]),SFVec3f([-0.115,0.04,0.13]),SFVec3f([-0.125,0,0.12]),SFVec3f([-0.165,0,0.12]),SFVec3f([-0.087,0,0.122]),SFVec3f([-0.09,0.012,0.188]),SFVec3f([-0.11,0.011,0.19]),SFVec3f([-0.128,0.011,0.185]),SFVec3f([-0.142,0.011,0.178]),SFVec3f([-0.154,0.01,0.168])]))],
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
                              creaseAngle_ : 3.1,
                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(9), SFInt32(5), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(9), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(5), SFInt32(2), SFInt32(-1), SFInt32(1), SFInt32(3), SFInt32(7), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(7), SFInt32(-1), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(2), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(8), SFInt32(-1), SFInt32(6), SFInt32(4), SFInt32(2), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(9), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(4), SFInt32(6), SFInt32(10), SFInt32(-1), SFInt32(4), SFInt32(10), SFInt32(12), SFInt32(-1), SFInt32(4), SFInt32(12), SFInt32(8), SFInt32(-1), SFInt32(10), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(9), SFInt32(75), SFInt32(24), SFInt32(-1), SFInt32(9), SFInt32(24), SFInt32(74), SFInt32(-1), SFInt32(9), SFInt32(8), SFInt32(75), SFInt32(-1), SFInt32(9), SFInt32(74), SFInt32(6), SFInt32(-1), SFInt32(10), SFInt32(6), SFInt32(74), SFInt32(-1), SFInt32(12), SFInt32(75), SFInt32(8), SFInt32(-1), SFInt32(74), SFInt32(24), SFInt32(29), SFInt32(-1), SFInt32(24), SFInt32(77), SFInt32(29), SFInt32(-1), SFInt32(10), SFInt32(74), SFInt32(29), SFInt32(-1), SFInt32(77), SFInt32(32), SFInt32(29), SFInt32(-1), SFInt32(32), SFInt32(78), SFInt32(29), SFInt32(-1), SFInt32(78), SFInt32(30), SFInt32(29), SFInt32(-1), SFInt32(30), SFInt32(10), SFInt32(29), SFInt32(-1), SFInt32(41), SFInt32(24), SFInt32(75), SFInt32(-1), SFInt32(41), SFInt32(75), SFInt32(12), SFInt32(-1), SFInt32(41), SFInt32(12), SFInt32(42), SFInt32(-1), SFInt32(41), SFInt32(42), SFInt32(80), SFInt32(-1), SFInt32(41), SFInt32(80), SFInt32(44), SFInt32(-1), SFInt32(41), SFInt32(44), SFInt32(79), SFInt32(-1), SFInt32(41), SFInt32(79), SFInt32(24), SFInt32(-1), SFInt32(81), SFInt32(24), SFInt32(79), SFInt32(-1), SFInt32(81), SFInt32(77), SFInt32(24), SFInt32(-1), SFInt32(81), SFInt32(25), SFInt32(77), SFInt32(-1), SFInt32(81), SFInt32(79), SFInt32(25), SFInt32(-1), SFInt32(25), SFInt32(79), SFInt32(44), SFInt32(-1), SFInt32(25), SFInt32(32), SFInt32(77), SFInt32(-1), SFInt32(25), SFInt32(83), SFInt32(32), SFInt32(-1), SFInt32(25), SFInt32(26), SFInt32(83), SFInt32(-1), SFInt32(25), SFInt32(27), SFInt32(26), SFInt32(-1), SFInt32(25), SFInt32(84), SFInt32(27), SFInt32(-1), SFInt32(25), SFInt32(44), SFInt32(84), SFInt32(-1), SFInt32(11), SFInt32(10), SFInt32(30), SFInt32(-1), SFInt32(11), SFInt32(30), SFInt32(13), SFInt32(-1), SFInt32(11), SFInt32(13), SFInt32(15), SFInt32(-1), SFInt32(11), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(11), SFInt32(14), SFInt32(42), SFInt32(-1), SFInt32(11), SFInt32(42), SFInt32(12), SFInt32(-1), SFInt32(15), SFInt32(13), SFInt32(16), SFInt32(-1), SFInt32(15), SFInt32(18), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(16), SFInt32(76), SFInt32(-1), SFInt32(15), SFInt32(76), SFInt32(18), SFInt32(-1), SFInt32(76), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(76), SFInt32(17), SFInt32(82), SFInt32(-1), SFInt32(76), SFInt32(82), SFInt32(19), SFInt32(-1), SFInt32(76), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(22), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(22), SFInt32(87), SFInt32(18), SFInt32(-1), SFInt32(22), SFInt32(27), SFInt32(84), SFInt32(-1), SFInt32(22), SFInt32(84), SFInt32(87), SFInt32(-1), SFInt32(87), SFInt32(84), SFInt32(85), SFInt32(-1), SFInt32(85), SFInt32(84), SFInt32(44), SFInt32(-1), SFInt32(85), SFInt32(42), SFInt32(14), SFInt32(-1), SFInt32(87), SFInt32(14), SFInt32(18), SFInt32(-1), SFInt32(87), SFInt32(85), SFInt32(14), SFInt32(-1), SFInt32(20), SFInt32(83), SFInt32(26), SFInt32(-1), SFInt32(20), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(20), SFInt32(16), SFInt32(88), SFInt32(-1), SFInt32(20), SFInt32(88), SFInt32(83), SFInt32(-1), SFInt32(88), SFInt32(16), SFInt32(13), SFInt32(-1), SFInt32(88), SFInt32(13), SFInt32(86), SFInt32(-1), SFInt32(88), SFInt32(86), SFInt32(83), SFInt32(-1), SFInt32(86), SFInt32(13), SFInt32(30), SFInt32(-1), SFInt32(86), SFInt32(32), SFInt32(83), SFInt32(-1), SFInt32(23), SFInt32(89), SFInt32(22), SFInt32(-1), SFInt32(89), SFInt32(27), SFInt32(22), SFInt32(-1), SFInt32(89), SFInt32(91), SFInt32(27), SFInt32(-1), SFInt32(91), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(91), SFInt32(20), SFInt32(26), SFInt32(-1), SFInt32(21), SFInt32(20), SFInt32(91), SFInt32(-1), SFInt32(21), SFInt32(17), SFInt32(20), SFInt32(-1), SFInt32(21), SFInt32(92), SFInt32(17), SFInt32(-1), SFInt32(82), SFInt32(17), SFInt32(92), SFInt32(-1), SFInt32(82), SFInt32(90), SFInt32(19), SFInt32(-1), SFInt32(23), SFInt32(22), SFInt32(19), SFInt32(-1), SFInt32(23), SFInt32(19), SFInt32(90), SFInt32(-1), SFInt32(82), SFInt32(92), SFInt32(101), SFInt32(-1), SFInt32(82), SFInt32(101), SFInt32(99), SFInt32(-1), SFInt32(82), SFInt32(99), SFInt32(93), SFInt32(-1), SFInt32(82), SFInt32(93), SFInt32(95), SFInt32(-1), SFInt32(82), SFInt32(95), SFInt32(97), SFInt32(-1), SFInt32(82), SFInt32(97), SFInt32(90), SFInt32(-1), SFInt32(23), SFInt32(90), SFInt32(97), SFInt32(-1), SFInt32(23), SFInt32(97), SFInt32(94), SFInt32(-1), SFInt32(23), SFInt32(94), SFInt32(89), SFInt32(-1), SFInt32(89), SFInt32(94), SFInt32(96), SFInt32(-1), SFInt32(89), SFInt32(96), SFInt32(95), SFInt32(-1), SFInt32(89), SFInt32(95), SFInt32(93), SFInt32(-1), SFInt32(89), SFInt32(93), SFInt32(91), SFInt32(-1), SFInt32(91), SFInt32(93), SFInt32(99), SFInt32(-1), SFInt32(91), SFInt32(99), SFInt32(100), SFInt32(-1), SFInt32(91), SFInt32(100), SFInt32(98), SFInt32(-1), SFInt32(21), SFInt32(91), SFInt32(98), SFInt32(-1), SFInt32(21), SFInt32(98), SFInt32(101), SFInt32(-1), SFInt32(21), SFInt32(101), SFInt32(92), SFInt32(-1), SFInt32(85), SFInt32(105), SFInt32(42), SFInt32(-1), SFInt32(85), SFInt32(103), SFInt32(105), SFInt32(-1), SFInt32(85), SFInt32(44), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(44), SFInt32(104), SFInt32(-1), SFInt32(80), SFInt32(42), SFInt32(105), SFInt32(-1), SFInt32(80), SFInt32(105), SFInt32(102), SFInt32(-1), SFInt32(80), SFInt32(102), SFInt32(104), SFInt32(-1), SFInt32(80), SFInt32(104), SFInt32(44), SFInt32(-1), SFInt32(105), SFInt32(109), SFInt32(102), SFInt32(-1), SFInt32(102), SFInt32(109), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(104), SFInt32(102), SFInt32(-1), SFInt32(104), SFInt32(47), SFInt32(45), SFInt32(-1), SFInt32(104), SFInt32(45), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(103), SFInt32(46), SFInt32(109), SFInt32(-1), SFInt32(103), SFInt32(109), SFInt32(105), SFInt32(-1), SFInt32(109), SFInt32(112), SFInt32(110), SFInt32(-1), SFInt32(109), SFInt32(110), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(110), SFInt32(111), SFInt32(-1), SFInt32(47), SFInt32(111), SFInt32(45), SFInt32(-1), SFInt32(45), SFInt32(111), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(46), SFInt32(45), SFInt32(-1), SFInt32(46), SFInt32(113), SFInt32(112), SFInt32(-1), SFInt32(112), SFInt32(109), SFInt32(46), SFInt32(-1), SFInt32(112), SFInt32(118), SFInt32(110), SFInt32(-1), SFInt32(110), SFInt32(118), SFInt32(115), SFInt32(-1), SFInt32(110), SFInt32(115), SFInt32(111), SFInt32(-1), SFInt32(111), SFInt32(115), SFInt32(117), SFInt32(-1), SFInt32(111), SFInt32(117), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(117), SFInt32(116), SFInt32(-1), SFInt32(113), SFInt32(116), SFInt32(112), SFInt32(-1), SFInt32(112), SFInt32(116), SFInt32(118), SFInt32(-1), SFInt32(115), SFInt32(118), SFInt32(119), SFInt32(-1), SFInt32(119), SFInt32(118), SFInt32(122), SFInt32(-1), SFInt32(118), SFInt32(116), SFInt32(122), SFInt32(-1), SFInt32(122), SFInt32(116), SFInt32(120), SFInt32(-1), SFInt32(116), SFInt32(117), SFInt32(120), SFInt32(-1), SFInt32(120), SFInt32(117), SFInt32(121), SFInt32(-1), SFInt32(117), SFInt32(115), SFInt32(121), SFInt32(-1), SFInt32(115), SFInt32(119), SFInt32(121), SFInt32(-1), SFInt32(119), SFInt32(127), SFInt32(123), SFInt32(-1), SFInt32(119), SFInt32(122), SFInt32(127), SFInt32(-1), SFInt32(122), SFInt32(126), SFInt32(127), SFInt32(-1), SFInt32(122), SFInt32(128), SFInt32(126), SFInt32(-1), SFInt32(122), SFInt32(120), SFInt32(128), SFInt32(-1), SFInt32(120), SFInt32(124), SFInt32(128), SFInt32(-1), SFInt32(120), SFInt32(121), SFInt32(124), SFInt32(-1), SFInt32(121), SFInt32(125), SFInt32(124), SFInt32(-1), SFInt32(121), SFInt32(119), SFInt32(125), SFInt32(-1), SFInt32(119), SFInt32(123), SFInt32(125), SFInt32(-1), SFInt32(127), SFInt32(129), SFInt32(123), SFInt32(-1), SFInt32(127), SFInt32(126), SFInt32(129), SFInt32(-1), SFInt32(129), SFInt32(126), SFInt32(141), SFInt32(-1), SFInt32(141), SFInt32(126), SFInt32(143), SFInt32(-1), SFInt32(126), SFInt32(142), SFInt32(143), SFInt32(-1), SFInt32(126), SFInt32(128), SFInt32(142), SFInt32(-1), SFInt32(128), SFInt32(124), SFInt32(130), SFInt32(-1), SFInt32(142), SFInt32(128), SFInt32(130), SFInt32(-1), SFInt32(124), SFInt32(132), SFInt32(130), SFInt32(-1), SFInt32(124), SFInt32(134), SFInt32(132), SFInt32(-1), SFInt32(125), SFInt32(134), SFInt32(124), SFInt32(-1), SFInt32(125), SFInt32(136), SFInt32(134), SFInt32(-1), SFInt32(125), SFInt32(137), SFInt32(136), SFInt32(-1), SFInt32(125), SFInt32(135), SFInt32(137), SFInt32(-1), SFInt32(125), SFInt32(133), SFInt32(135), SFInt32(-1), SFInt32(125), SFInt32(123), SFInt32(133), SFInt32(-1), SFInt32(123), SFInt32(131), SFInt32(133), SFInt32(-1), SFInt32(123), SFInt32(129), SFInt32(131), SFInt32(-1), SFInt32(131), SFInt32(129), SFInt32(138), SFInt32(-1), SFInt32(129), SFInt32(141), SFInt32(138), SFInt32(-1), SFInt32(138), SFInt32(141), SFInt32(144), SFInt32(-1), SFInt32(141), SFInt32(143), SFInt32(144), SFInt32(-1), SFInt32(143), SFInt32(146), SFInt32(144), SFInt32(-1), SFInt32(142), SFInt32(146), SFInt32(143), SFInt32(-1), SFInt32(142), SFInt32(145), SFInt32(146), SFInt32(-1), SFInt32(139), SFInt32(145), SFInt32(142), SFInt32(-1), SFInt32(130), SFInt32(139), SFInt32(142), SFInt32(-1), SFInt32(139), SFInt32(130), SFInt32(132), SFInt32(-1), SFInt32(139), SFInt32(132), SFInt32(154), SFInt32(-1), SFInt32(132), SFInt32(157), SFInt32(154), SFInt32(-1), SFInt32(132), SFInt32(159), SFInt32(157), SFInt32(-1), SFInt32(132), SFInt32(134), SFInt32(159), SFInt32(-1), SFInt32(134), SFInt32(136), SFInt32(159), SFInt32(-1), SFInt32(136), SFInt32(161), SFInt32(159), SFInt32(-1), SFInt32(136), SFInt32(137), SFInt32(161), SFInt32(-1), SFInt32(137), SFInt32(162), SFInt32(161), SFInt32(-1), SFInt32(160), SFInt32(162), SFInt32(137), SFInt32(-1), SFInt32(135), SFInt32(160), SFInt32(137), SFInt32(-1), SFInt32(133), SFInt32(160), SFInt32(135), SFInt32(-1), SFInt32(133), SFInt32(158), SFInt32(160), SFInt32(-1), SFInt32(131), SFInt32(158), SFInt32(133), SFInt32(-1), SFInt32(156), SFInt32(158), SFInt32(131), SFInt32(-1), SFInt32(153), SFInt32(156), SFInt32(131), SFInt32(-1), SFInt32(131), SFInt32(138), SFInt32(153), SFInt32(-1), SFInt32(138), SFInt32(155), SFInt32(153), SFInt32(-1), SFInt32(140), SFInt32(155), SFInt32(138), SFInt32(-1), SFInt32(138), SFInt32(144), SFInt32(140), SFInt32(-1), SFInt32(144), SFInt32(147), SFInt32(140), SFInt32(-1), SFInt32(140), SFInt32(147), SFInt32(145), SFInt32(-1), SFInt32(140), SFInt32(145), SFInt32(139), SFInt32(-1), SFInt32(139), SFInt32(155), SFInt32(140), SFInt32(-1), SFInt32(154), SFInt32(155), SFInt32(139), SFInt32(-1), SFInt32(146), SFInt32(149), SFInt32(144), SFInt32(-1), SFInt32(146), SFInt32(151), SFInt32(149), SFInt32(-1), SFInt32(145), SFInt32(151), SFInt32(146), SFInt32(-1), SFInt32(150), SFInt32(151), SFInt32(145), SFInt32(-1), SFInt32(145), SFInt32(152), SFInt32(150), SFInt32(-1), SFInt32(147), SFInt32(152), SFInt32(145), SFInt32(-1), SFInt32(147), SFInt32(149), SFInt32(152), SFInt32(-1), SFInt32(147), SFInt32(144), SFInt32(149), SFInt32(-1), SFInt32(148), SFInt32(149), SFInt32(151), SFInt32(-1), SFInt32(148), SFInt32(152), SFInt32(149), SFInt32(-1), SFInt32(148), SFInt32(150), SFInt32(152), SFInt32(-1), SFInt32(148), SFInt32(151), SFInt32(150), SFInt32(-1), SFInt32(160), SFInt32(207), SFInt32(162), SFInt32(-1), SFInt32(160), SFInt32(205), SFInt32(207), SFInt32(-1), SFInt32(165), SFInt32(208), SFInt32(205), SFInt32(-1), SFInt32(160), SFInt32(165), SFInt32(205), SFInt32(-1), SFInt32(158), SFInt32(165), SFInt32(160), SFInt32(-1), SFInt32(161), SFInt32(162), SFInt32(207), SFInt32(-1), SFInt32(161), SFInt32(207), SFInt32(206), SFInt32(-1), SFInt32(165), SFInt32(206), SFInt32(208), SFInt32(-1), SFInt32(206), SFInt32(165), SFInt32(161), SFInt32(-1), SFInt32(161), SFInt32(165), SFInt32(159), SFInt32(-1), SFInt32(207), SFInt32(209), SFInt32(211), SFInt32(-1), SFInt32(205), SFInt32(209), SFInt32(207), SFInt32(-1), SFInt32(205), SFInt32(212), SFInt32(209), SFInt32(-1), SFInt32(205), SFInt32(208), SFInt32(212), SFInt32(-1), SFInt32(206), SFInt32(212), SFInt32(208), SFInt32(-1), SFInt32(206), SFInt32(210), SFInt32(212), SFInt32(-1), SFInt32(206), SFInt32(207), SFInt32(210), SFInt32(-1), SFInt32(207), SFInt32(211), SFInt32(210), SFInt32(-1), SFInt32(209), SFInt32(212), SFInt32(213), SFInt32(-1), SFInt32(212), SFInt32(216), SFInt32(213), SFInt32(-1), SFInt32(212), SFInt32(214), SFInt32(216), SFInt32(-1), SFInt32(210), SFInt32(214), SFInt32(212), SFInt32(-1), SFInt32(210), SFInt32(215), SFInt32(214), SFInt32(-1), SFInt32(210), SFInt32(211), SFInt32(215), SFInt32(-1), SFInt32(209), SFInt32(215), SFInt32(211), SFInt32(-1), SFInt32(209), SFInt32(213), SFInt32(215), SFInt32(-1), SFInt32(217), SFInt32(213), SFInt32(216), SFInt32(-1), SFInt32(217), SFInt32(215), SFInt32(213), SFInt32(-1), SFInt32(217), SFInt32(214), SFInt32(215), SFInt32(-1), SFInt32(217), SFInt32(216), SFInt32(214), SFInt32(-1), SFInt32(158), SFInt32(194), SFInt32(165), SFInt32(-1), SFInt32(192), SFInt32(194), SFInt32(158), SFInt32(-1), SFInt32(164), SFInt32(195), SFInt32(192), SFInt32(-1), SFInt32(158), SFInt32(164), SFInt32(192), SFInt32(-1), SFInt32(156), SFInt32(164), SFInt32(158), SFInt32(-1), SFInt32(159), SFInt32(194), SFInt32(165), SFInt32(-1), SFInt32(159), SFInt32(194), SFInt32(193), SFInt32(-1), SFInt32(159), SFInt32(193), SFInt32(195), SFInt32(-1), SFInt32(159), SFInt32(195), SFInt32(164), SFInt32(-1), SFInt32(159), SFInt32(164), SFInt32(157), SFInt32(-1), SFInt32(157), SFInt32(164), SFInt32(180), SFInt32(-1), SFInt32(192), SFInt32(198), SFInt32(194), SFInt32(-1), SFInt32(192), SFInt32(196), SFInt32(198), SFInt32(-1), SFInt32(192), SFInt32(195), SFInt32(196), SFInt32(-1), SFInt32(195), SFInt32(199), SFInt32(196), SFInt32(-1), SFInt32(196), SFInt32(199), SFInt32(200), SFInt32(-1), SFInt32(199), SFInt32(203), SFInt32(200), SFInt32(-1), SFInt32(193), SFInt32(199), SFInt32(195), SFInt32(-1), SFInt32(193), SFInt32(197), SFInt32(199), SFInt32(-1), SFInt32(193), SFInt32(198), SFInt32(197), SFInt32(-1), SFInt32(193), SFInt32(194), SFInt32(198), SFInt32(-1), SFInt32(199), SFInt32(201), SFInt32(203), SFInt32(-1), SFInt32(197), SFInt32(201), SFInt32(199), SFInt32(-1), SFInt32(197), SFInt32(198), SFInt32(201), SFInt32(-1), SFInt32(198), SFInt32(202), SFInt32(201), SFInt32(-1), SFInt32(196), SFInt32(202), SFInt32(198), SFInt32(-1), SFInt32(200), SFInt32(202), SFInt32(196), SFInt32(-1), SFInt32(204), SFInt32(202), SFInt32(200), SFInt32(-1), SFInt32(204), SFInt32(201), SFInt32(202), SFInt32(-1), SFInt32(204), SFInt32(203), SFInt32(201), SFInt32(-1), SFInt32(204), SFInt32(200), SFInt32(203), SFInt32(-1), SFInt32(156), SFInt32(181), SFInt32(164), SFInt32(-1), SFInt32(156), SFInt32(179), SFInt32(181), SFInt32(-1), SFInt32(156), SFInt32(182), SFInt32(179), SFInt32(-1), SFInt32(156), SFInt32(163), SFInt32(182), SFInt32(-1), SFInt32(163), SFInt32(180), SFInt32(182), SFInt32(-1), SFInt32(157), SFInt32(180), SFInt32(163), SFInt32(-1), SFInt32(164), SFInt32(181), SFInt32(180), SFInt32(-1), SFInt32(179), SFInt32(182), SFInt32(183), SFInt32(-1), SFInt32(182), SFInt32(186), SFInt32(183), SFInt32(-1), SFInt32(182), SFInt32(184), SFInt32(186), SFInt32(-1), SFInt32(180), SFInt32(184), SFInt32(182), SFInt32(-1), SFInt32(180), SFInt32(181), SFInt32(184), SFInt32(-1), SFInt32(181), SFInt32(185), SFInt32(184), SFInt32(-1), SFInt32(179), SFInt32(185), SFInt32(181), SFInt32(-1), SFInt32(183), SFInt32(185), SFInt32(179), SFInt32(-1), SFInt32(183), SFInt32(186), SFInt32(187), SFInt32(-1), SFInt32(186), SFInt32(190), SFInt32(187), SFInt32(-1), SFInt32(184), SFInt32(190), SFInt32(186), SFInt32(-1), SFInt32(184), SFInt32(188), SFInt32(190), SFInt32(-1), SFInt32(184), SFInt32(185), SFInt32(188), SFInt32(-1), SFInt32(185), SFInt32(189), SFInt32(188), SFInt32(-1), SFInt32(185), SFInt32(183), SFInt32(189), SFInt32(-1), SFInt32(183), SFInt32(187), SFInt32(189), SFInt32(-1), SFInt32(191), SFInt32(189), SFInt32(187), SFInt32(-1), SFInt32(191), SFInt32(188), SFInt32(189), SFInt32(-1), SFInt32(191), SFInt32(190), SFInt32(188), SFInt32(-1), SFInt32(191), SFInt32(187), SFInt32(190), SFInt32(-1), SFInt32(153), SFInt32(163), SFInt32(156), SFInt32(-1), SFInt32(153), SFInt32(168), SFInt32(163), SFInt32(-1), SFInt32(153), SFInt32(166), SFInt32(168), SFInt32(-1), SFInt32(153), SFInt32(169), SFInt32(166), SFInt32(-1), SFInt32(155), SFInt32(169), SFInt32(153), SFInt32(-1), SFInt32(155), SFInt32(167), SFInt32(169), SFInt32(-1), SFInt32(154), SFInt32(167), SFInt32(155), SFInt32(-1), SFInt32(154), SFInt32(163), SFInt32(167), SFInt32(-1), SFInt32(154), SFInt32(157), SFInt32(163), SFInt32(-1), SFInt32(163), SFInt32(168), SFInt32(167), SFInt32(-1), SFInt32(166), SFInt32(169), SFInt32(170), SFInt32(-1), SFInt32(169), SFInt32(173), SFInt32(170), SFInt32(-1), SFInt32(169), SFInt32(171), SFInt32(173), SFInt32(-1), SFInt32(169), SFInt32(167), SFInt32(171), SFInt32(-1), SFInt32(167), SFInt32(168), SFInt32(171), SFInt32(-1), SFInt32(168), SFInt32(172), SFInt32(171), SFInt32(-1), SFInt32(168), SFInt32(170), SFInt32(172), SFInt32(-1), SFInt32(170), SFInt32(168), SFInt32(166), SFInt32(-1), SFInt32(170), SFInt32(173), SFInt32(174), SFInt32(-1), SFInt32(173), SFInt32(177), SFInt32(174), SFInt32(-1), SFInt32(173), SFInt32(175), SFInt32(177), SFInt32(-1), SFInt32(173), SFInt32(171), SFInt32(175), SFInt32(-1), SFInt32(171), SFInt32(172), SFInt32(175), SFInt32(-1), SFInt32(172), SFInt32(176), SFInt32(175), SFInt32(-1), SFInt32(172), SFInt32(174), SFInt32(176), SFInt32(-1), SFInt32(170), SFInt32(174), SFInt32(172), SFInt32(-1), SFInt32(178), SFInt32(176), SFInt32(174), SFInt32(-1), SFInt32(178), SFInt32(175), SFInt32(176), SFInt32(-1), SFInt32(178), SFInt32(177), SFInt32(175), SFInt32(-1), SFInt32(178), SFInt32(174), SFInt32(177), SFInt32(-1), SFInt32(86), SFInt32(30), SFInt32(221), SFInt32(-1), SFInt32(86), SFInt32(221), SFInt32(219), SFInt32(-1), SFInt32(86), SFInt32(219), SFInt32(32), SFInt32(-1), SFInt32(32), SFInt32(219), SFInt32(220), SFInt32(-1), SFInt32(78), SFInt32(32), SFInt32(220), SFInt32(-1), SFInt32(78), SFInt32(220), SFInt32(218), SFInt32(-1), SFInt32(78), SFInt32(218), SFInt32(221), SFInt32(-1), SFInt32(78), SFInt32(221), SFInt32(30), SFInt32(-1), SFInt32(221), SFInt32(225), SFInt32(219), SFInt32(-1), SFInt32(219), SFInt32(225), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(33), SFInt32(219), SFInt32(-1), SFInt32(33), SFInt32(220), SFInt32(219), SFInt32(-1), SFInt32(33), SFInt32(34), SFInt32(220), SFInt32(-1), SFInt32(220), SFInt32(34), SFInt32(218), SFInt32(-1), SFInt32(221), SFInt32(218), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(225), SFInt32(221), SFInt32(-1), SFInt32(225), SFInt32(226), SFInt32(228), SFInt32(-1), SFInt32(225), SFInt32(228), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(228), SFInt32(229), SFInt32(-1), SFInt32(35), SFInt32(229), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(229), SFInt32(227), SFInt32(-1), SFInt32(33), SFInt32(227), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(227), SFInt32(226), SFInt32(-1), SFInt32(34), SFInt32(226), SFInt32(225), SFInt32(-1), SFInt32(226), SFInt32(234), SFInt32(228), SFInt32(-1), SFInt32(228), SFInt32(234), SFInt32(232), SFInt32(-1), SFInt32(232), SFInt32(229), SFInt32(228), SFInt32(-1), SFInt32(232), SFInt32(233), SFInt32(229), SFInt32(-1), SFInt32(229), SFInt32(233), SFInt32(227), SFInt32(-1), SFInt32(227), SFInt32(233), SFInt32(231), SFInt32(-1), SFInt32(227), SFInt32(231), SFInt32(226), SFInt32(-1), SFInt32(226), SFInt32(231), SFInt32(234), SFInt32(-1), SFInt32(231), SFInt32(235), SFInt32(234), SFInt32(-1), SFInt32(235), SFInt32(238), SFInt32(234), SFInt32(-1), SFInt32(234), SFInt32(238), SFInt32(232), SFInt32(-1), SFInt32(238), SFInt32(236), SFInt32(232), SFInt32(-1), SFInt32(232), SFInt32(236), SFInt32(233), SFInt32(-1), SFInt32(236), SFInt32(237), SFInt32(233), SFInt32(-1), SFInt32(233), SFInt32(237), SFInt32(231), SFInt32(-1), SFInt32(231), SFInt32(237), SFInt32(235), SFInt32(-1), SFInt32(235), SFInt32(239), SFInt32(243), SFInt32(-1), SFInt32(235), SFInt32(243), SFInt32(238), SFInt32(-1), SFInt32(238), SFInt32(243), SFInt32(242), SFInt32(-1), SFInt32(238), SFInt32(242), SFInt32(244), SFInt32(-1), SFInt32(238), SFInt32(244), SFInt32(236), SFInt32(-1), SFInt32(236), SFInt32(244), SFInt32(240), SFInt32(-1), SFInt32(236), SFInt32(240), SFInt32(237), SFInt32(-1), SFInt32(237), SFInt32(240), SFInt32(241), SFInt32(-1), SFInt32(237), SFInt32(241), SFInt32(235), SFInt32(-1), SFInt32(235), SFInt32(241), SFInt32(239), SFInt32(-1), SFInt32(243), SFInt32(239), SFInt32(245), SFInt32(-1), SFInt32(243), SFInt32(245), SFInt32(242), SFInt32(-1), SFInt32(245), SFInt32(257), SFInt32(242), SFInt32(-1), SFInt32(257), SFInt32(259), SFInt32(242), SFInt32(-1), SFInt32(242), SFInt32(259), SFInt32(258), SFInt32(-1), SFInt32(242), SFInt32(258), SFInt32(244), SFInt32(-1), SFInt32(244), SFInt32(246), SFInt32(240), SFInt32(-1), SFInt32(258), SFInt32(246), SFInt32(244), SFInt32(-1), SFInt32(240), SFInt32(246), SFInt32(248), SFInt32(-1), SFInt32(240), SFInt32(248), SFInt32(250), SFInt32(-1), SFInt32(241), SFInt32(240), SFInt32(250), SFInt32(-1), SFInt32(241), SFInt32(250), SFInt32(252), SFInt32(-1), SFInt32(241), SFInt32(252), SFInt32(253), SFInt32(-1), SFInt32(241), SFInt32(253), SFInt32(251), SFInt32(-1), SFInt32(241), SFInt32(251), SFInt32(249), SFInt32(-1), SFInt32(241), SFInt32(249), SFInt32(239), SFInt32(-1), SFInt32(239), SFInt32(249), SFInt32(247), SFInt32(-1), SFInt32(239), SFInt32(247), SFInt32(245), SFInt32(-1), SFInt32(247), SFInt32(254), SFInt32(245), SFInt32(-1), SFInt32(245), SFInt32(254), SFInt32(257), SFInt32(-1), SFInt32(254), SFInt32(260), SFInt32(257), SFInt32(-1), SFInt32(257), SFInt32(260), SFInt32(259), SFInt32(-1), SFInt32(259), SFInt32(260), SFInt32(262), SFInt32(-1), SFInt32(258), SFInt32(259), SFInt32(262), SFInt32(-1), SFInt32(258), SFInt32(262), SFInt32(261), SFInt32(-1), SFInt32(255), SFInt32(258), SFInt32(261), SFInt32(-1), SFInt32(246), SFInt32(258), SFInt32(255), SFInt32(-1), SFInt32(255), SFInt32(248), SFInt32(246), SFInt32(-1), SFInt32(255), SFInt32(270), SFInt32(248), SFInt32(-1), SFInt32(248), SFInt32(270), SFInt32(273), SFInt32(-1), SFInt32(248), SFInt32(273), SFInt32(275), SFInt32(-1), SFInt32(248), SFInt32(275), SFInt32(250), SFInt32(-1), SFInt32(250), SFInt32(275), SFInt32(252), SFInt32(-1), SFInt32(252), SFInt32(275), SFInt32(277), SFInt32(-1), SFInt32(252), SFInt32(277), SFInt32(253), SFInt32(-1), SFInt32(253), SFInt32(277), SFInt32(278), SFInt32(-1), SFInt32(276), SFInt32(253), SFInt32(278), SFInt32(-1), SFInt32(251), SFInt32(253), SFInt32(276), SFInt32(-1), SFInt32(249), SFInt32(251), SFInt32(276), SFInt32(-1), SFInt32(249), SFInt32(276), SFInt32(274), SFInt32(-1), SFInt32(247), SFInt32(249), SFInt32(274), SFInt32(-1), SFInt32(272), SFInt32(247), SFInt32(274), SFInt32(-1), SFInt32(269), SFInt32(247), SFInt32(272), SFInt32(-1), SFInt32(247), SFInt32(269), SFInt32(254), SFInt32(-1), SFInt32(254), SFInt32(269), SFInt32(271), SFInt32(-1), SFInt32(256), SFInt32(254), SFInt32(271), SFInt32(-1), SFInt32(254), SFInt32(256), SFInt32(260), SFInt32(-1), SFInt32(260), SFInt32(256), SFInt32(263), SFInt32(-1), SFInt32(256), SFInt32(261), SFInt32(263), SFInt32(-1), SFInt32(256), SFInt32(255), SFInt32(261), SFInt32(-1), SFInt32(255), SFInt32(256), SFInt32(271), SFInt32(-1), SFInt32(270), SFInt32(255), SFInt32(271), SFInt32(-1), SFInt32(262), SFInt32(260), SFInt32(265), SFInt32(-1), SFInt32(262), SFInt32(265), SFInt32(267), SFInt32(-1), SFInt32(261), SFInt32(262), SFInt32(267), SFInt32(-1), SFInt32(266), SFInt32(261), SFInt32(267), SFInt32(-1), SFInt32(261), SFInt32(266), SFInt32(268), SFInt32(-1), SFInt32(263), SFInt32(261), SFInt32(268), SFInt32(-1), SFInt32(263), SFInt32(268), SFInt32(265), SFInt32(-1), SFInt32(263), SFInt32(265), SFInt32(260), SFInt32(-1), SFInt32(264), SFInt32(267), SFInt32(265), SFInt32(-1), SFInt32(264), SFInt32(265), SFInt32(268), SFInt32(-1), SFInt32(264), SFInt32(268), SFInt32(266), SFInt32(-1), SFInt32(264), SFInt32(266), SFInt32(267), SFInt32(-1), SFInt32(276), SFInt32(278), SFInt32(323), SFInt32(-1), SFInt32(276), SFInt32(323), SFInt32(321), SFInt32(-1), SFInt32(281), SFInt32(321), SFInt32(324), SFInt32(-1), SFInt32(276), SFInt32(321), SFInt32(281), SFInt32(-1), SFInt32(274), SFInt32(276), SFInt32(281), SFInt32(-1), SFInt32(277), SFInt32(323), SFInt32(278), SFInt32(-1), SFInt32(277), SFInt32(322), SFInt32(323), SFInt32(-1), SFInt32(281), SFInt32(324), SFInt32(322), SFInt32(-1), SFInt32(322), SFInt32(277), SFInt32(281), SFInt32(-1), SFInt32(277), SFInt32(275), SFInt32(281), SFInt32(-1), SFInt32(323), SFInt32(327), SFInt32(325), SFInt32(-1), SFInt32(321), SFInt32(323), SFInt32(325), SFInt32(-1), SFInt32(321), SFInt32(325), SFInt32(328), SFInt32(-1), SFInt32(321), SFInt32(328), SFInt32(324), SFInt32(-1), SFInt32(322), SFInt32(324), SFInt32(328), SFInt32(-1), SFInt32(322), SFInt32(328), SFInt32(326), SFInt32(-1), SFInt32(322), SFInt32(326), SFInt32(323), SFInt32(-1), SFInt32(323), SFInt32(326), SFInt32(327), SFInt32(-1), SFInt32(325), SFInt32(329), SFInt32(328), SFInt32(-1), SFInt32(328), SFInt32(329), SFInt32(332), SFInt32(-1), SFInt32(328), SFInt32(332), SFInt32(330), SFInt32(-1), SFInt32(326), SFInt32(328), SFInt32(330), SFInt32(-1), SFInt32(326), SFInt32(330), SFInt32(331), SFInt32(-1), SFInt32(326), SFInt32(331), SFInt32(327), SFInt32(-1), SFInt32(325), SFInt32(327), SFInt32(331), SFInt32(-1), SFInt32(325), SFInt32(331), SFInt32(329), SFInt32(-1), SFInt32(333), SFInt32(332), SFInt32(329), SFInt32(-1), SFInt32(333), SFInt32(329), SFInt32(331), SFInt32(-1), SFInt32(333), SFInt32(331), SFInt32(330), SFInt32(-1), SFInt32(333), SFInt32(330), SFInt32(332), SFInt32(-1), SFInt32(274), SFInt32(281), SFInt32(310), SFInt32(-1), SFInt32(308), SFInt32(274), SFInt32(310), SFInt32(-1), SFInt32(280), SFInt32(308), SFInt32(311), SFInt32(-1), SFInt32(274), SFInt32(308), SFInt32(280), SFInt32(-1), SFInt32(272), SFInt32(274), SFInt32(280), SFInt32(-1), SFInt32(275), SFInt32(310), SFInt32(281), SFInt32(-1), SFInt32(275), SFInt32(309), SFInt32(310), SFInt32(-1), SFInt32(275), SFInt32(311), SFInt32(309), SFInt32(-1), SFInt32(275), SFInt32(280), SFInt32(311), SFInt32(-1), SFInt32(275), SFInt32(273), SFInt32(280), SFInt32(-1), SFInt32(273), SFInt32(296), SFInt32(280), SFInt32(-1), SFInt32(308), SFInt32(310), SFInt32(314), SFInt32(-1), SFInt32(308), SFInt32(314), SFInt32(312), SFInt32(-1), SFInt32(308), SFInt32(312), SFInt32(311), SFInt32(-1), SFInt32(311), SFInt32(312), SFInt32(315), SFInt32(-1), SFInt32(312), SFInt32(316), SFInt32(315), SFInt32(-1), SFInt32(315), SFInt32(316), SFInt32(319), SFInt32(-1), SFInt32(309), SFInt32(311), SFInt32(315), SFInt32(-1), SFInt32(309), SFInt32(315), SFInt32(313), SFInt32(-1), SFInt32(309), SFInt32(313), SFInt32(314), SFInt32(-1), SFInt32(309), SFInt32(314), SFInt32(310), SFInt32(-1), SFInt32(315), SFInt32(319), SFInt32(317), SFInt32(-1), SFInt32(313), SFInt32(315), SFInt32(317), SFInt32(-1), SFInt32(313), SFInt32(317), SFInt32(314), SFInt32(-1), SFInt32(314), SFInt32(317), SFInt32(318), SFInt32(-1), SFInt32(312), SFInt32(314), SFInt32(318), SFInt32(-1), SFInt32(316), SFInt32(312), SFInt32(318), SFInt32(-1), SFInt32(320), SFInt32(316), SFInt32(318), SFInt32(-1), SFInt32(320), SFInt32(318), SFInt32(317), SFInt32(-1), SFInt32(320), SFInt32(317), SFInt32(319), SFInt32(-1), SFInt32(320), SFInt32(319), SFInt32(316), SFInt32(-1), SFInt32(272), SFInt32(280), SFInt32(297), SFInt32(-1), SFInt32(272), SFInt32(297), SFInt32(295), SFInt32(-1), SFInt32(272), SFInt32(295), SFInt32(298), SFInt32(-1), SFInt32(272), SFInt32(298), SFInt32(279), SFInt32(-1), SFInt32(279), SFInt32(298), SFInt32(296), SFInt32(-1), SFInt32(273), SFInt32(279), SFInt32(296), SFInt32(-1), SFInt32(280), SFInt32(296), SFInt32(297), SFInt32(-1), SFInt32(295), SFInt32(299), SFInt32(298), SFInt32(-1), SFInt32(298), SFInt32(299), SFInt32(302), SFInt32(-1), SFInt32(298), SFInt32(302), SFInt32(300), SFInt32(-1), SFInt32(296), SFInt32(298), SFInt32(300), SFInt32(-1), SFInt32(296), SFInt32(300), SFInt32(297), SFInt32(-1), SFInt32(297), SFInt32(300), SFInt32(301), SFInt32(-1), SFInt32(295), SFInt32(297), SFInt32(301), SFInt32(-1), SFInt32(299), SFInt32(295), SFInt32(301), SFInt32(-1), SFInt32(299), SFInt32(303), SFInt32(302), SFInt32(-1), SFInt32(302), SFInt32(303), SFInt32(306), SFInt32(-1), SFInt32(300), SFInt32(302), SFInt32(306), SFInt32(-1), SFInt32(300), SFInt32(306), SFInt32(304), SFInt32(-1), SFInt32(300), SFInt32(304), SFInt32(301), SFInt32(-1), SFInt32(301), SFInt32(304), SFInt32(305), SFInt32(-1), SFInt32(301), SFInt32(305), SFInt32(299), SFInt32(-1), SFInt32(299), SFInt32(305), SFInt32(303), SFInt32(-1), SFInt32(307), SFInt32(303), SFInt32(305), SFInt32(-1), SFInt32(307), SFInt32(305), SFInt32(304), SFInt32(-1), SFInt32(307), SFInt32(304), SFInt32(306), SFInt32(-1), SFInt32(307), SFInt32(306), SFInt32(303), SFInt32(-1), SFInt32(269), SFInt32(272), SFInt32(279), SFInt32(-1), SFInt32(269), SFInt32(279), SFInt32(284), SFInt32(-1), SFInt32(269), SFInt32(284), SFInt32(282), SFInt32(-1), SFInt32(269), SFInt32(282), SFInt32(285), SFInt32(-1), SFInt32(271), SFInt32(269), SFInt32(285), SFInt32(-1), SFInt32(271), SFInt32(285), SFInt32(283), SFInt32(-1), SFInt32(270), SFInt32(271), SFInt32(283), SFInt32(-1), SFInt32(270), SFInt32(283), SFInt32(279), SFInt32(-1), SFInt32(270), SFInt32(279), SFInt32(273), SFInt32(-1), SFInt32(279), SFInt32(283), SFInt32(284), SFInt32(-1), SFInt32(282), SFInt32(286), SFInt32(285), SFInt32(-1), SFInt32(285), SFInt32(286), SFInt32(289), SFInt32(-1), SFInt32(285), SFInt32(289), SFInt32(287), SFInt32(-1), SFInt32(285), SFInt32(287), SFInt32(283), SFInt32(-1), SFInt32(283), SFInt32(287), SFInt32(284), SFInt32(-1), SFInt32(284), SFInt32(287), SFInt32(288), SFInt32(-1), SFInt32(284), SFInt32(288), SFInt32(286), SFInt32(-1), SFInt32(286), SFInt32(282), SFInt32(284), SFInt32(-1), SFInt32(286), SFInt32(290), SFInt32(289), SFInt32(-1), SFInt32(289), SFInt32(290), SFInt32(293), SFInt32(-1), SFInt32(289), SFInt32(293), SFInt32(291), SFInt32(-1), SFInt32(289), SFInt32(291), SFInt32(287), SFInt32(-1), SFInt32(287), SFInt32(291), SFInt32(288), SFInt32(-1), SFInt32(288), SFInt32(291), SFInt32(292), SFInt32(-1), SFInt32(288), SFInt32(292), SFInt32(290), SFInt32(-1), SFInt32(286), SFInt32(288), SFInt32(290), SFInt32(-1), SFInt32(294), SFInt32(290), SFInt32(292), SFInt32(-1), SFInt32(294), SFInt32(292), SFInt32(291), SFInt32(-1), SFInt32(294), SFInt32(291), SFInt32(293), SFInt32(-1), SFInt32(294), SFInt32(293), SFInt32(290), SFInt32(-1), SFInt32(97), SFInt32(334), SFInt32(336), SFInt32(-1), SFInt32(97), SFInt32(336), SFInt32(94), SFInt32(-1), SFInt32(94), SFInt32(336), SFInt32(96), SFInt32(-1), SFInt32(336), SFInt32(335), SFInt32(96), SFInt32(-1), SFInt32(96), SFInt32(335), SFInt32(95), SFInt32(-1), SFInt32(95), SFInt32(335), SFInt32(337), SFInt32(-1), SFInt32(95), SFInt32(337), SFInt32(334), SFInt32(-1), SFInt32(95), SFInt32(334), SFInt32(97), SFInt32(-1), SFInt32(334), SFInt32(341), SFInt32(336), SFInt32(-1), SFInt32(336), SFInt32(341), SFInt32(338), SFInt32(-1), SFInt32(336), SFInt32(338), SFInt32(335), SFInt32(-1), SFInt32(335), SFInt32(338), SFInt32(340), SFInt32(-1), SFInt32(335), SFInt32(340), SFInt32(337), SFInt32(-1), SFInt32(337), SFInt32(340), SFInt32(339), SFInt32(-1), SFInt32(337), SFInt32(339), SFInt32(334), SFInt32(-1), SFInt32(334), SFInt32(339), SFInt32(341), SFInt32(-1), SFInt32(341), SFInt32(345), SFInt32(342), SFInt32(-1), SFInt32(341), SFInt32(342), SFInt32(338), SFInt32(-1), SFInt32(338), SFInt32(342), SFInt32(340), SFInt32(-1), SFInt32(340), SFInt32(342), SFInt32(344), SFInt32(-1), SFInt32(340), SFInt32(344), SFInt32(339), SFInt32(-1), SFInt32(339), SFInt32(344), SFInt32(343), SFInt32(-1), SFInt32(339), SFInt32(343), SFInt32(345), SFInt32(-1), SFInt32(339), SFInt32(345), SFInt32(341), SFInt32(-1), SFInt32(345), SFInt32(349), SFInt32(342), SFInt32(-1), SFInt32(342), SFInt32(349), SFInt32(351), SFInt32(-1), SFInt32(342), SFInt32(351), SFInt32(346), SFInt32(-1), SFInt32(342), SFInt32(346), SFInt32(344), SFInt32(-1), SFInt32(71), SFInt32(346), SFInt32(348), SFInt32(-1), SFInt32(71), SFInt32(344), SFInt32(346), SFInt32(-1), SFInt32(71), SFInt32(348), SFInt32(347), SFInt32(-1), SFInt32(71), SFInt32(347), SFInt32(344), SFInt32(-1), SFInt32(344), SFInt32(347), SFInt32(343), SFInt32(-1), SFInt32(343), SFInt32(347), SFInt32(352), SFInt32(-1), SFInt32(343), SFInt32(352), SFInt32(349), SFInt32(-1), SFInt32(343), SFInt32(349), SFInt32(345), SFInt32(-1), SFInt32(349), SFInt32(352), SFInt32(356), SFInt32(-1), SFInt32(349), SFInt32(356), SFInt32(353), SFInt32(-1), SFInt32(349), SFInt32(353), SFInt32(355), SFInt32(-1), SFInt32(349), SFInt32(355), SFInt32(351), SFInt32(-1), SFInt32(354), SFInt32(356), SFInt32(352), SFInt32(-1), SFInt32(354), SFInt32(352), SFInt32(350), SFInt32(-1), SFInt32(354), SFInt32(350), SFInt32(351), SFInt32(-1), SFInt32(354), SFInt32(351), SFInt32(355), SFInt32(-1), SFInt32(353), SFInt32(356), SFInt32(357), SFInt32(-1), SFInt32(353), SFInt32(357), SFInt32(358), SFInt32(-1), SFInt32(353), SFInt32(358), SFInt32(359), SFInt32(-1), SFInt32(353), SFInt32(359), SFInt32(360), SFInt32(-1), SFInt32(353), SFInt32(360), SFInt32(361), SFInt32(-1), SFInt32(353), SFInt32(361), SFInt32(355), SFInt32(-1), SFInt32(354), SFInt32(357), SFInt32(356), SFInt32(-1), SFInt32(350), SFInt32(346), SFInt32(351), SFInt32(-1), SFInt32(348), SFInt32(346), SFInt32(347), SFInt32(-1), SFInt32(350), SFInt32(347), SFInt32(346), SFInt32(-1), SFInt32(350), SFInt32(352), SFInt32(347), SFInt32(-1), SFInt32(354), SFInt32(358), SFInt32(357), SFInt32(-1), SFInt32(354), SFInt32(359), SFInt32(358), SFInt32(-1), SFInt32(354), SFInt32(360), SFInt32(359), SFInt32(-1), SFInt32(354), SFInt32(361), SFInt32(360), SFInt32(-1), SFInt32(354), SFInt32(355), SFInt32(361), SFInt32(-1), SFInt32(101), SFInt32(362), SFInt32(365), SFInt32(-1), SFInt32(101), SFInt32(365), SFInt32(99), SFInt32(-1), SFInt32(99), SFInt32(365), SFInt32(100), SFInt32(-1), SFInt32(100), SFInt32(365), SFInt32(363), SFInt32(-1), SFInt32(100), SFInt32(363), SFInt32(98), SFInt32(-1), SFInt32(98), SFInt32(363), SFInt32(364), SFInt32(-1), SFInt32(98), SFInt32(364), SFInt32(101), SFInt32(-1), SFInt32(101), SFInt32(364), SFInt32(362), SFInt32(-1), SFInt32(362), SFInt32(369), SFInt32(367), SFInt32(-1), SFInt32(362), SFInt32(367), SFInt32(365), SFInt32(-1), SFInt32(365), SFInt32(367), SFInt32(363), SFInt32(-1), SFInt32(363), SFInt32(367), SFInt32(368), SFInt32(-1), SFInt32(363), SFInt32(367), SFInt32(368), SFInt32(-1), SFInt32(363), SFInt32(368), SFInt32(366), SFInt32(-1), SFInt32(363), SFInt32(366), SFInt32(364), SFInt32(-1), SFInt32(364), SFInt32(366), SFInt32(362), SFInt32(-1), SFInt32(362), SFInt32(366), SFInt32(369), SFInt32(-1), SFInt32(369), SFInt32(373), SFInt32(371), SFInt32(-1), SFInt32(369), SFInt32(371), SFInt32(367), SFInt32(-1), SFInt32(367), SFInt32(371), SFInt32(368), SFInt32(-1), SFInt32(368), SFInt32(371), SFInt32(372), SFInt32(-1), SFInt32(368), SFInt32(372), SFInt32(366), SFInt32(-1), SFInt32(366), SFInt32(372), SFInt32(370), SFInt32(-1), SFInt32(366), SFInt32(370), SFInt32(369), SFInt32(-1), SFInt32(369), SFInt32(370), SFInt32(373), SFInt32(-1), SFInt32(373), SFInt32(377), SFInt32(380), SFInt32(-1), SFInt32(373), SFInt32(380), SFInt32(375), SFInt32(-1), SFInt32(373), SFInt32(375), SFInt32(371), SFInt32(-1), SFInt32(371), SFInt32(375), SFInt32(372), SFInt32(-1), SFInt32(372), SFInt32(375), SFInt32(376), SFInt32(-1), SFInt32(372), SFInt32(376), SFInt32(374), SFInt32(-1), SFInt32(372), SFInt32(374), SFInt32(370), SFInt32(-1), SFInt32(370), SFInt32(374), SFInt32(379), SFInt32(-1), SFInt32(373), SFInt32(370), SFInt32(379), SFInt32(-1), SFInt32(373), SFInt32(379), SFInt32(377), SFInt32(-1), SFInt32(377), SFInt32(379), SFInt32(383), SFInt32(-1), SFInt32(377), SFInt32(383), SFInt32(381), SFInt32(-1), SFInt32(377), SFInt32(381), SFInt32(384), SFInt32(-1), SFInt32(377), SFInt32(384), SFInt32(380), SFInt32(-1), SFInt32(381), SFInt32(383), SFInt32(389), SFInt32(-1), SFInt32(381), SFInt32(389), SFInt32(388), SFInt32(-1), SFInt32(381), SFInt32(388), SFInt32(387), SFInt32(-1), SFInt32(381), SFInt32(387), SFInt32(386), SFInt32(-1), SFInt32(381), SFInt32(386), SFInt32(385), SFInt32(-1), SFInt32(381), SFInt32(385), SFInt32(384), SFInt32(-1), SFInt32(376), SFInt32(375), SFInt32(374), SFInt32(-1), SFInt32(378), SFInt32(379), SFInt32(374), SFInt32(-1), SFInt32(378), SFInt32(374), SFInt32(375), SFInt32(-1), SFInt32(378), SFInt32(375), SFInt32(380), SFInt32(-1), SFInt32(382), SFInt32(386), SFInt32(387), SFInt32(-1), SFInt32(382), SFInt32(387), SFInt32(388), SFInt32(-1), SFInt32(382), SFInt32(388), SFInt32(389), SFInt32(-1), SFInt32(382), SFInt32(389), SFInt32(383), SFInt32(-1), SFInt32(382), SFInt32(383), SFInt32(379), SFInt32(-1), SFInt32(382), SFInt32(379), SFInt32(378), SFInt32(-1), SFInt32(382), SFInt32(378), SFInt32(380), SFInt32(-1), SFInt32(382), SFInt32(380), SFInt32(384), SFInt32(-1), SFInt32(382), SFInt32(384), SFInt32(385), SFInt32(-1), SFInt32(382), SFInt32(385), SFInt32(386), SFInt32(-1)]),
                              color_ : 
                                Color(
                                  color_ : MFColor([SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(1)])),
                              coord_ : 
                                Coordinate(
                                  USE_ : SFString('TheSkinCoord')))))])]),

            TimeSensor(
              DEF_ : SFString('Time1'),
              cycleInterval_ : 2.86,
              loop_ : true),

            TimeSensor(
              DEF_ : SFString('Time2'),
              cycleInterval_ : 5.72,
              loop_ : true),

            TimeSensor(
              DEF_ : SFString('Time3'),
              cycleInterval_ : 5.8,
              loop_ : true),

            OrientationInterpolator(
              DEF_ : SFString('Pitch'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.25600004196167), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.51200008392334), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(3.76799988746643), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(5.02400016784668), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(6.28000020980835)])),

            OrientationInterpolator(
              DEF_ : SFString('Yaw'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.25600004196167), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(2.51200008392334), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(3.76799988746643), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(5.02400016784668), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(6.28000020980835)])),

            OrientationInterpolator(
              DEF_ : SFString('Roll'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.25600004196167), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(2.51200008392334), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(3.76799988746643), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(5.02400016784668), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(6.28000020980835)])),

            OrientationInterpolator(
              DEF_ : SFString('vc6Yaw'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.7), SFFloat(0.8), SFFloat(0.9), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.699999988079071), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(-0.400000005960465), SFRotation(-1), SFRotation(0), SFRotation(0.699999988079071), SFRotation(-0.400000005960465), SFRotation(-1), SFRotation(0), SFRotation(0.400000005960465), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('EyeballsRotation'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.2), SFFloat(0.3), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.7), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.200000002980232), SFRotation(0.200000002980232), SFRotation(0.200000002980232), SFRotation(0.200000002980232), SFRotation(-0.200000002980232), SFRotation(0.200000002980232), SFRotation(0.200000002980232), SFRotation(0.200000002980232), SFRotation(-0.200000002980232), SFRotation(-0.200000002980232), SFRotation(0.200000002980232), SFRotation(0.200000002980232), SFRotation(0.200000002980232), SFRotation(-0.200000002980232), SFRotation(0.200000002980232), SFRotation(0.200000002980232), SFRotation(-0.200000002980232), SFRotation(0.200000002980232), SFRotation(-0.200000002980232), SFRotation(0.200000002980232), SFRotation(-0.200000002980232), SFRotation(0.200000002980232), SFRotation(-0.200000002980232), SFRotation(0.200000002980232), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_sternoclavicularRelax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.200000002980232), SFRotation(-1), SFRotation(0), SFRotation(0.109999999403954), SFRotation(0.200000002980232), SFRotation(-1), SFRotation(0), SFRotation(0.109999999403954), SFRotation(0.100000001490116), SFRotation(-1), SFRotation(0), SFRotation(0.100000001490116), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_acromioclavicularRelax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_shoulderRelax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.3), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.400000005960465), SFRotation(-0.699999988079071), SFRotation(-0.550000011920929), SFRotation(0.349999994039536), SFRotation(0.400000005960465), SFRotation(-0.699999988079071), SFRotation(-0.550000011920929), SFRotation(0.349999994039536), SFRotation(0.400000005960465), SFRotation(-0.699999988079071), SFRotation(-0.550000011920929), SFRotation(0.349999994039536), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_elbowRelax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.15), SFFloat(0.4), SFFloat(0.6), SFFloat(0.9), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.200000002980232), SFRotation(0), SFRotation(0.00999999977648258), SFRotation(0.5), SFRotation(-0.200000002980232), SFRotation(0), SFRotation(0.00999999977648258), SFRotation(0.5), SFRotation(-0.200000002980232), SFRotation(0), SFRotation(0.00999999977648258), SFRotation(0.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_wristRelax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.9), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.100000001490116), SFRotation(-0.0900000035762787), SFRotation(0.25), SFRotation(0), SFRotation(0.100000001490116), SFRotation(-0.0900000035762787), SFRotation(0.25), SFRotation(0), SFRotation(0.100000001490116), SFRotation(-0.0900000035762787), SFRotation(0.25), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_index0Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.3), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.25), SFRotation(0.25), SFRotation(-1), SFRotation(0.125), SFRotation(-0.25), SFRotation(0.25), SFRotation(-1), SFRotation(0.125), SFRotation(-0.25), SFRotation(0.25), SFRotation(-1), SFRotation(0.125), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_index1Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.2), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.135000005364418), SFRotation(-0.135000005364418), SFRotation(1), SFRotation(0.35699999332428), SFRotation(-0.158999994397163), SFRotation(-0.152999997138977), SFRotation(1), SFRotation(0.354999989271164), SFRotation(-0.158999994397163), SFRotation(-0.152999997138977), SFRotation(1), SFRotation(0.35699999332428), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_middle0Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.3), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.140000000596046), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.140000000596046), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.140000000596046), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_middle1Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.2), SFFloat(0.3), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.7), SFFloat(0.8), SFFloat(0.9), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0.300000011920929), SFRotation(0.256999999284744), SFRotation(0), SFRotation(0), SFRotation(0.300000011920929), SFRotation(0.370000004768372), SFRotation(0), SFRotation(0), SFRotation(0.300000011920929), SFRotation(0.389999985694885), SFRotation(0), SFRotation(0), SFRotation(0.300000011920929), SFRotation(0.310000002384186), SFRotation(0), SFRotation(0), SFRotation(0.300000011920929), SFRotation(0.319999992847443), SFRotation(0), SFRotation(0), SFRotation(0.300000011920929), SFRotation(0.340000003576279), SFRotation(0), SFRotation(0), SFRotation(0.300000011920929), SFRotation(0.280000001192093), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_ring0Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.3), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.25), SFRotation(0.25), SFRotation(-1), SFRotation(0.100000001490116), SFRotation(0.25), SFRotation(0.25), SFRotation(-1), SFRotation(0.100000001490116), SFRotation(0.25), SFRotation(0.25), SFRotation(-1), SFRotation(0.100000001490116), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_ring1Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.4), SFFloat(0.5), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.135000005364418), SFRotation(0.135000005364418), SFRotation(1), SFRotation(0.270000010728836), SFRotation(0.135000005364418), SFRotation(0.135000005364418), SFRotation(1), SFRotation(0.270000010728836), SFRotation(0.135000005364418), SFRotation(0.150000005960464), SFRotation(1), SFRotation(0.270000010728836), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_pinky0Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.3), SFFloat(0.5), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.349999994039536), SFRotation(0.349999994039536), SFRotation(-0.699999988079071), SFRotation(0.119999997317791), SFRotation(0.349999994039536), SFRotation(0.349999994039536), SFRotation(-0.899999976158142), SFRotation(0.119999997317791), SFRotation(0.349999994039536), SFRotation(0.349999994039536), SFRotation(-0.699999988079071), SFRotation(0.119999997317791), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_pinky1Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.200000002980232), SFRotation(0.25), SFRotation(1), SFRotation(0.270000010728836), SFRotation(0.200000002980232), SFRotation(0.219999998807907), SFRotation(1), SFRotation(0.270000010728836), SFRotation(0.219999998807907), SFRotation(0.200000002980232), SFRotation(1), SFRotation(0.270000010728836), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_thumb1Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.03), SFFloat(0.08), SFFloat(0.2), SFFloat(0.3), SFFloat(0.4), SFFloat(0.5), SFFloat(0.8), SFFloat(0.95), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1), SFRotation(1), SFRotation(0.5), SFRotation(-0.159999996423721), SFRotation(0.159999996423721), SFRotation(0.785000026226044), SFRotation(0.5), SFRotation(-0.159999996423721), SFRotation(0.159999996423721), SFRotation(0.785000026226044), SFRotation(1), SFRotation(1), SFRotation(1), SFRotation(0.75), SFRotation(1), SFRotation(1), SFRotation(1), SFRotation(0.75), SFRotation(1), SFRotation(1), SFRotation(1), SFRotation(0.75), SFRotation(1), SFRotation(1), SFRotation(1), SFRotation(0.75), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_thumb2Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.5), SFFloat(0.6), SFFloat(0.7), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.449999988079071), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.449999988079071), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.449999988079071), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_thumb3Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.5), SFFloat(0.6), SFFloat(0.7), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.449999988079071), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_fingers2Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.2), SFFloat(0.3), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.7), SFFloat(0.8), SFFloat(0.9), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.430000007152557), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.439999997615814), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.46000000834465), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.439999997615814), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.245000004768372), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.239999994635582), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.209999993443489), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.239999994635582), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_fingers3Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.2), SFFloat(0.3), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.7), SFFloat(0.8), SFFloat(0.9), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.370000004768372), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.379999995231628), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.389999985694885), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.379999995231628), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.270000010728836), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.280000001192093), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.270000010728836), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.280000001192093), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_sternoclavicularRoll'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.7), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.100000001490116), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.219999998807907), SFRotation(0), SFRotation(0.5), SFRotation(-1), SFRotation(0.270000010728836), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.100000001490116), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_acromioclavicularRoll'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.0500000007450581), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_shoulderRoll'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.85), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.6599999666214), SFRotation(-0.25), SFRotation(0), SFRotation(-1), SFRotation(1.75999999046326), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.25600004196167), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.0500000007450581), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_ForeArmPitch'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.15), SFFloat(0.3), SFFloat(0.5), SFFloat(0.7), SFFloat(0.9), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.550000011920929), SFRotation(-1), SFRotation(-0.25), SFRotation(0), SFRotation(2.54999995231628), SFRotation(-1), SFRotation(-0.25), SFRotation(0), SFRotation(2.54999995231628), SFRotation(-1), SFRotation(-0.25), SFRotation(0), SFRotation(2.54999995231628), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_wristRoll'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.65), SFFloat(0.75), SFFloat(0.85), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.550000011920929), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.54999995231628), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.54999995231628), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_handPitch'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0.00999999977648258), SFRotation(0.25), SFRotation(0), SFRotation(0), SFRotation(-0.00999999977648258), SFRotation(0.0299999993294477), SFRotation(0), SFRotation(0), SFRotation(0.00999999977648258), SFRotation(0.0500000007450581), SFRotation(0), SFRotation(0), SFRotation(0.00999999977648258), SFRotation(0.00999999977648258), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_thumb1Pitch'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.400000005960465), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.200000002980232), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_thumb2Pitch'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0.300000011920929), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0.300000011920929), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0.600000023841858), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0.300000011920929), SFRotation(0), SFRotation(1), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('l_shoulderRoll'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.85), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0.25), SFRotation(0), SFRotation(1), SFRotation(1.75999999046326), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.6599999666214), SFRotation(0.25), SFRotation(0), SFRotation(1), SFRotation(1.75999999046326), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.25600004196167), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.0500000007450581), SFRotation(0.25), SFRotation(0), SFRotation(1), SFRotation(1.75999999046326)])),

            Group(
              children_ : [
                PositionInterpolator(
                  DEF_ : SFString('HUMANOIDROOT_POSITION_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.04167), SFFloat(0.125), SFFloat(0.1667), SFFloat(0.2083), SFFloat(0.25), SFFloat(0.2917), SFFloat(0.375), SFFloat(0.4583), SFFloat(0.5), SFFloat(0.5417), SFFloat(0.5833), SFFloat(0.625), SFFloat(0.7083), SFFloat(0.75), SFFloat(0.7917), SFFloat(0.875), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,-0.00928,0]),SFVec3f([0,-0.003858,0]),SFVec3f([0,-0.008847,0]),SFVec3f([0,-0.01486,0]),SFVec3f([0,-0.02641,0]),SFVec3f([0,-0.03934,0]),SFVec3f([0,-0.0502,0]),SFVec3f([0,-0.07469,0]),SFVec3f([0,-0.02732,0]),SFVec3f([0,-0.01608,0]),SFVec3f([0,-0.01129,0]),SFVec3f([0,-0.005819,0]),SFVec3f([0,-0.002004,0]),SFVec3f([0,-0.002579,0]),SFVec3f([0,-0.0143,0]),SFVec3f([0,-0.03799,0]),SFVec3f([0,-0.05648,0]),SFVec3f([0,-0.045,0]),SFVec3f([0,-0.00928,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('HUMANOIDROOT_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_HIP_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.873000025749207), SFRotation(0.0609400011599064), SFRotation(0.483999997377396), SFRotation(0.286500006914139), SFRotation(0.996299982070923), SFRotation(-0.0105699999257922), SFRotation(0.0848100036382675), SFRotation(0.248799994587898), SFRotation(0.996500015258789), SFRotation(0.0159099996089935), SFRotation(-0.0822200030088425), SFRotation(0.383599996566772), SFRotation(-0.701799988746643), SFRotation(-0.0322300009429455), SFRotation(-0.711700022220612), SFRotation(0.12890000641346), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.551800012588501), SFRotation(-0.996399998664856), SFRotation(0.0223099999129772), SFRotation(0.0816999971866608), SFRotation(0.535099983215332), SFRotation(-0.98089998960495), SFRotation(0.0491200014948845), SFRotation(0.18809999525547), SFRotation(0.520399987697601), SFRotation(-0.873000025749207), SFRotation(0.0609400011599064), SFRotation(0.483999997377396), SFRotation(0.286500006914139)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_KNEE_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.32260000705719), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.155599996447563), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.086779996752739), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.875100016593933), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.13100004196167), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.0996100008487701), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.394199997186661), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.32260000705719)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_ANKLE_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.6667), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.067100003361702), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.215200006961823), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.318399995565414), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.471700012683868), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.291200011968613), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.222200006246567), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.067100003361702)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_ANKLE_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.4583), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.75), SFFloat(0.78), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.353300005197525), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.107199996709824), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.400000005960465), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.127000004053116), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0179999992251396), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0579999983310699), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.239999994635582), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.349999994039536), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.330000013113022), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_subtalar_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.3), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_MIDTARSAL_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-0.200000002980232), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_metatarsal_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.300000011920929), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.150000005960464), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.300000011920929), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.300000011920929)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_HIP_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.2917), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.583100020885468), SFRotation(0.0351100005209446), SFRotation(0.811600029468536), SFRotation(0.148100003600121), SFRotation(-0.995000004768372), SFRotation(0.0229599997401238), SFRotation(0.0967399999499321), SFRotation(0.468300014734268), SFRotation(-1), SFRotation(0.0019000000320375), SFRotation(0.00796000007539988), SFRotation(0.473199993371964), SFRotation(-0.998000025749207), SFRotation(-0.0157999992370605), SFRotation(-0.0610200017690659), SFRotation(0.50789999961853), SFRotation(-0.991100013256073), SFRotation(-0.0354099981486797), SFRotation(-0.128600001335144), SFRotation(0.541899979114533), SFRotation(-0.913100004196167), SFRotation(-0.0624300017952919), SFRotation(-0.402999997138977), SFRotation(0.33610001206398), SFRotation(-0.430599987506866), SFRotation(-0.0796200037002564), SFRotation(-0.898999989032745), SFRotation(0.0703800022602081), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.257099986076355), SFRotation(0.989099979400635), SFRotation(-0.0280499998480082), SFRotation(0.144400000572205), SFRotation(0.387899994850159), SFRotation(-0.583100020885468), SFRotation(0.0351100005209446), SFRotation(0.811600029468536), SFRotation(0.148100003600121)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_KNEE_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.2917), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.857299983501434), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.892599999904633), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.535099983215332), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.175600007176399), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.119400002062321), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.315299987792969), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.0935399979352951), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.0855799987912178), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.247500002384186), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.857299983501434)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_subtalar_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.225), SFFloat(0.25), SFFloat(0.35), SFFloat(0.45), SFFloat(0.85), SFFloat(0.91)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.25)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_MIDTARSAL_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.22), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-0.200000002980232), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-0.200000002980232)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_metatarsal_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.150000005960464), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.300000011920929), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.300000011920929), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.150000005960464)])),

                OrientationInterpolator(
                  DEF_ : SFString('VL5_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.75), SFFloat(0.8333), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0825999975204468), SFRotation(-0.0197199992835522), SFRotation(-0.597400009632111), SFRotation(0.801699995994568), SFRotation(0.0823099985718727), SFRotation(0.0092960000038147), SFRotation(-0.964800000190735), SFRotation(0.262699991464615), SFRotation(0.17339999973774), SFRotation(-0.0123800002038479), SFRotation(0.954900026321411), SFRotation(-0.29679998755455), SFRotation(0.0873199999332428), SFRotation(-0.00812499970197678), SFRotation(0.969099998474121), SFRotation(-0.246299996972084), SFRotation(0.158000007271767), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0825999975204468)])),

                OrientationInterpolator(
                  DEF_ : SFString('SKULLBASE_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.4167), SFFloat(0.5), SFFloat(0.5833), SFFloat(0.6667), SFFloat(0.75), SFFloat(0.8333), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.0864000022411346), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.182500004768372), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.150499999523163), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.10530000180006), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0439100004732609), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.031190000474453), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.0793600007891655), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.16159999370575), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.155000001192093), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.0864199995994568)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_SHOULDER_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0.400000005960465), SFRotation(0.119999997317791), SFRotation(-1), SFRotation(0), SFRotation(0.400000005960465), SFRotation(0.186000004410744), SFRotation(1), SFRotation(0), SFRotation(0.100000001490116), SFRotation(0.335999995470047), SFRotation(1), SFRotation(0), SFRotation(0.400000005960465), SFRotation(0.119999997317791)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_ELBOW_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0659999996423721), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.488000005483627), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0176999997347593), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.065987803041935)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_WRIST_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.460999995470047), SFRotation(-0.330199986696243), SFRotation(-0.927500009536743), SFRotation(0.175500005483627), SFRotation(0.538800001144409), SFRotation(0.0327773988246918), SFRotation(-0.99931401014328), SFRotation(-0.0172185003757477), SFRotation(0.492033004760742), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.46110001206398)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_SHOULDER_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(-1), SFRotation(0.0920000001788139), SFRotation(1), SFRotation(0), SFRotation(-0.200000002980232), SFRotation(0.319700002670288), SFRotation(-1), SFRotation(0), SFRotation(-0.5), SFRotation(0.156399995088577), SFRotation(-1), SFRotation(0), SFRotation(-1), SFRotation(0.0920000001788139)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_ELBOW_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.411500006914139), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0925000011920929), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.572567999362946), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.411507993936539)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_WRIST_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.812900006771088), SFRotation(0.475899994373322), SFRotation(-0.335700005292892), SFRotation(0.13459999859333), SFRotation(0.153300002217293), SFRotation(-0.987800002098084), SFRotation(0.0258200000971556), SFRotation(0.390199989080429), SFRotation(-0.570100009441376), SFRotation(0.760399997234345), SFRotation(-0.310999989509583), SFRotation(0.36599999666214), SFRotation(-0.812900006771088), SFRotation(0.475899994373322), SFRotation(-0.335700005292892), SFRotation(0.13459999859333)]))]),

            ROUTE(
              fromNode_ : SFString('Time2'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('vc6Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('vc6Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_vc6'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Time3'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('EyeballsRotation'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('EyeballsRotation'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_eyeball_joint'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('EyeballsRotation'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_l_eyeball_joint'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_sternoclavicularRelax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_acromioclavicularRelax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_shoulderRelax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_elbowRelax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_wristRelax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_thumb1Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_thumb2Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_thumb2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_thumb3Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_thumb3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_index0Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_index0'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_index1Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_index1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_fingers2Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_index2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_fingers3Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_index3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_middle0Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_middle0'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_middle1Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_middle1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_fingers2Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_middle2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_fingers3Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_middle3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_ring0Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_ring0'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_ring1Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_ring1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_fingers2Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_ring2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_fingers3Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_ring3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_pinky0Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_pinky0'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_pinky1Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_pinky1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_fingers2Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_pinky2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_fingers3Relax'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_pinky3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Time2'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time2'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time2'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_shoulderRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time2'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_ForeArmPitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time2'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_wristRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time2'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time2'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time2'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_thumb2Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('r_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_shoulderRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_ForeArmPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_wristRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_handPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_index0'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_handPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_index1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_handPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_index2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_handPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_index3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_handPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_middle0'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_handPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_middle1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_handPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_middle2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_handPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_middle3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_handPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_ring0'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_handPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_ring1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_handPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_ring2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_handPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_ring3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_handPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_pinky0'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_handPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_pinky1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_handPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_pinky2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_handPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_pinky3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_thumb2Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_thumb2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_thumb2Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_thumb3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_shoulderRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_l_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('HUMANOIDROOT_POSITION_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('HUMANOIDROOT_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('L_HIP_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('L_KNEE_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('L_ANKLE_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('L_subtalar_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('L_MIDTARSAL_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('L_metatarsal_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('R_HIP_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('R_KNEE_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('R_ANKLE_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('R_subtalar_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('R_MIDTARSAL_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('R_metatarsal_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('VL5_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('SKULLBASE_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('L_SHOULDER_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('L_ELBOW_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Time1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('L_WRIST_ANIMATOR'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('HUMANOIDROOT_POSITION_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_HumanoidRoot'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('HUMANOIDROOT_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_HumanoidRoot'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('L_HIP_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_l_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('L_KNEE_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_l_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('L_ANKLE_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_l_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('L_MIDTARSAL_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_l_midtarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('L_subtalar_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_l_subtalar'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('L_metatarsal_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_l_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('R_HIP_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('R_KNEE_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('R_ANKLE_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('R_subtalar_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_subtalar'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('R_MIDTARSAL_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_midtarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('R_metatarsal_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('VL5_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_vl5'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('SKULLBASE_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_skullbase'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('L_SHOULDER_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_l_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('L_ELBOW_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_l_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('L_WRIST_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_l_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('R_SHOULDER_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('R_ELBOW_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('R_WRIST_ANIMATOR'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Joe_r_wrist'),
              toField_ : SFString('set_rotation'))]));
void main() { exit(0); }
