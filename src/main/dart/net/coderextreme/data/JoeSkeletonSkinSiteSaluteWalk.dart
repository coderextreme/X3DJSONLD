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
              name_ : SFString('H-Anim'),
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
              content_ : SFString('2 January 2023')),

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
              content_ : SFString('HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegmet HAnimSite - improve diagnostics.')),

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
              name_ : SFString('Image'),
              content_ : SFString('JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png')),

            meta(
              name_ : SFString('reference'),
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
              content_ : SFString('X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSaluteSiteWalk.x3d')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              info_ : MFString([SFString("By Joe for Joe")]),
              title_ : SFString('HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3')),

            WorldInfo(
              info_ : MFString([SFString("By Joe for Joe")]),
              title_ : SFString('HAnim V1 LOA3 Skeleton Joint centers Adapted for approximatrion of ManGLoss Site Location Example and ANIM 200x Default Joint Centers, LOA3')),

            NavigationInfo(
              DEF_ : SFString('HeadlightOnRevealsSkinTextureAndColors')),

            Background(
              groundAngle_ : MFFloat([SFFloat(1.57)]),
              groundColor_ : MFColor([SFColor(0), SFColor(0.1), SFColor(0), SFColor(0), SFColor(0.1), SFColor(0)]),
              skyColor_ : MFColor([SFColor(0), SFColor(0), SFColor(0.1)])),

            Transform(
              DEF_ : SFString('cordsysfloor'),
              scale_ : SFVec3f([SFDouble(0.175), SFDouble(0.175), SFDouble(0.175)]),
              children_ : [
                Inline(
                  DEF_ : SFString('CoordinateAxes'),
                  url_ : MFString([SFString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), SFString("../../../Savage/Tools/Authoring/CoordinateAxes.x3d"), SFString("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), SFString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"), SFString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), SFString("../../../Savage/Tools/Authoring/CoordinateAxes.wrl"), SFString("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), SFString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl")]))]),
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
              children_ : [
                Transform(
                  scale_ : SFVec3f([SFDouble(5), SFDouble(5), SFDouble(5)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(2.1), SFDouble(0)]),
                  children_ : [
                    Shape(
                      DEF_ : SFString('jointbox'),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                          creaseAngle_ : 0.10000000149011612,
                          coord_ : 
                            Coordinate(
                              DEF_ : SFString('boxCoords'),
                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.0157]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])),
                          color_ : 
                            Color(
                              color_ : MFColor([SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(1), SFColor(0)]))),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              ambientIntensity_ : 0.5,
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              shininess_ : 1)))]),

                Transform(
                  scale_ : SFVec3f([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.773), SFDouble(-0.016)]),
                  children_ : [
                    Shape(
                      DEF_ : SFString('sitebox'),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                          creaseAngle_ : 0.10000000149011612,
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('boxCoords'))),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              ambientIntensity_ : 1,
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]),
                              emissiveColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]),
                              shininess_ : 0.7,
                              specularColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))))]),

                Transform(
                  scale_ : SFVec3f([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.2), SFDouble(0)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        IndexedLineSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0.0001,0])]))),
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('SegmentLine'),
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              emissiveColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              specularColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]))))]),

                Transform(
                  scale_ : SFVec3f([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.773), SFDouble(-0.016)]),
                  children_ : [
                    Shape(
                      DEF_ : SFString('skinsphere'),
                      geometry_ : 
                        Sphere(
                          radius_ : 0.005),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              ambientIntensity_ : 0.5,
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              emissiveColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              shininess_ : 1,
                              specularColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]))))])]),

            Group(
              DEF_ : SFString('SpecHumanoid'),
              children_ : [
                Group(
                  DEF_ : SFString('JoeISOHumanoid'),
                  children_ : [
                    HAnimHumanoid(
                      name_ : SFString('Human'),
                      DEF_ : SFString('Joe_Human'),
                      info_ : MFString([SFString("humanoidVersion=2.0")]),
                      version_ : SFString('2.0'),
                      /*<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)*/
                      /*</LOD>*/
                      skin_ : 
                        Shape(
                          DEF_ : SFString('SkinShape'),
                          geometry_ : 
                            IndexedFaceSet(
                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(9), SFInt32(5), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(9), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(5), SFInt32(2), SFInt32(-1), SFInt32(1), SFInt32(3), SFInt32(7), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(7), SFInt32(-1), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(2), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(8), SFInt32(-1), SFInt32(6), SFInt32(4), SFInt32(2), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(9), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(4), SFInt32(6), SFInt32(10), SFInt32(-1), SFInt32(4), SFInt32(10), SFInt32(12), SFInt32(-1), SFInt32(4), SFInt32(12), SFInt32(8), SFInt32(-1), SFInt32(10), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(9), SFInt32(75), SFInt32(24), SFInt32(-1), SFInt32(9), SFInt32(24), SFInt32(74), SFInt32(-1), SFInt32(9), SFInt32(8), SFInt32(75), SFInt32(-1), SFInt32(9), SFInt32(74), SFInt32(6), SFInt32(-1), SFInt32(10), SFInt32(6), SFInt32(74), SFInt32(-1), SFInt32(12), SFInt32(75), SFInt32(8), SFInt32(-1), SFInt32(74), SFInt32(24), SFInt32(29), SFInt32(-1), SFInt32(24), SFInt32(77), SFInt32(29), SFInt32(-1), SFInt32(10), SFInt32(74), SFInt32(29), SFInt32(-1), SFInt32(77), SFInt32(32), SFInt32(29), SFInt32(-1), SFInt32(32), SFInt32(78), SFInt32(29), SFInt32(-1), SFInt32(78), SFInt32(30), SFInt32(29), SFInt32(-1), SFInt32(30), SFInt32(10), SFInt32(29), SFInt32(-1), SFInt32(41), SFInt32(24), SFInt32(75), SFInt32(-1), SFInt32(41), SFInt32(75), SFInt32(12), SFInt32(-1), SFInt32(41), SFInt32(12), SFInt32(42), SFInt32(-1), SFInt32(41), SFInt32(42), SFInt32(80), SFInt32(-1), SFInt32(41), SFInt32(80), SFInt32(44), SFInt32(-1), SFInt32(41), SFInt32(44), SFInt32(79), SFInt32(-1), SFInt32(41), SFInt32(79), SFInt32(24), SFInt32(-1), SFInt32(81), SFInt32(24), SFInt32(79), SFInt32(-1), SFInt32(81), SFInt32(77), SFInt32(24), SFInt32(-1), SFInt32(81), SFInt32(25), SFInt32(77), SFInt32(-1), SFInt32(81), SFInt32(79), SFInt32(25), SFInt32(-1), SFInt32(25), SFInt32(79), SFInt32(44), SFInt32(-1), SFInt32(25), SFInt32(32), SFInt32(77), SFInt32(-1), SFInt32(25), SFInt32(83), SFInt32(32), SFInt32(-1), SFInt32(25), SFInt32(26), SFInt32(83), SFInt32(-1), SFInt32(25), SFInt32(27), SFInt32(26), SFInt32(-1), SFInt32(25), SFInt32(84), SFInt32(27), SFInt32(-1), SFInt32(25), SFInt32(44), SFInt32(84), SFInt32(-1), SFInt32(11), SFInt32(10), SFInt32(30), SFInt32(-1), SFInt32(11), SFInt32(30), SFInt32(13), SFInt32(-1), SFInt32(11), SFInt32(13), SFInt32(15), SFInt32(-1), SFInt32(11), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(11), SFInt32(14), SFInt32(42), SFInt32(-1), SFInt32(11), SFInt32(42), SFInt32(12), SFInt32(-1), SFInt32(15), SFInt32(13), SFInt32(16), SFInt32(-1), SFInt32(15), SFInt32(18), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(16), SFInt32(76), SFInt32(-1), SFInt32(15), SFInt32(76), SFInt32(18), SFInt32(-1), SFInt32(76), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(76), SFInt32(17), SFInt32(82), SFInt32(-1), SFInt32(76), SFInt32(82), SFInt32(19), SFInt32(-1), SFInt32(76), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(22), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(22), SFInt32(87), SFInt32(18), SFInt32(-1), SFInt32(22), SFInt32(27), SFInt32(84), SFInt32(-1), SFInt32(22), SFInt32(84), SFInt32(87), SFInt32(-1), SFInt32(87), SFInt32(84), SFInt32(85), SFInt32(-1), SFInt32(85), SFInt32(84), SFInt32(44), SFInt32(-1), SFInt32(85), SFInt32(42), SFInt32(14), SFInt32(-1), SFInt32(87), SFInt32(14), SFInt32(18), SFInt32(-1), SFInt32(87), SFInt32(85), SFInt32(14), SFInt32(-1), SFInt32(20), SFInt32(83), SFInt32(26), SFInt32(-1), SFInt32(20), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(20), SFInt32(16), SFInt32(88), SFInt32(-1), SFInt32(20), SFInt32(88), SFInt32(83), SFInt32(-1), SFInt32(88), SFInt32(16), SFInt32(13), SFInt32(-1), SFInt32(88), SFInt32(13), SFInt32(86), SFInt32(-1), SFInt32(88), SFInt32(86), SFInt32(83), SFInt32(-1), SFInt32(86), SFInt32(13), SFInt32(30), SFInt32(-1), SFInt32(86), SFInt32(32), SFInt32(83), SFInt32(-1), SFInt32(23), SFInt32(89), SFInt32(22), SFInt32(-1), SFInt32(89), SFInt32(27), SFInt32(22), SFInt32(-1), SFInt32(89), SFInt32(91), SFInt32(27), SFInt32(-1), SFInt32(91), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(91), SFInt32(20), SFInt32(26), SFInt32(-1), SFInt32(21), SFInt32(20), SFInt32(91), SFInt32(-1), SFInt32(21), SFInt32(17), SFInt32(20), SFInt32(-1), SFInt32(21), SFInt32(92), SFInt32(17), SFInt32(-1), SFInt32(82), SFInt32(17), SFInt32(92), SFInt32(-1), SFInt32(82), SFInt32(90), SFInt32(19), SFInt32(-1), SFInt32(23), SFInt32(22), SFInt32(19), SFInt32(-1), SFInt32(23), SFInt32(19), SFInt32(90), SFInt32(-1), SFInt32(82), SFInt32(92), SFInt32(101), SFInt32(-1), SFInt32(82), SFInt32(101), SFInt32(99), SFInt32(-1), SFInt32(82), SFInt32(99), SFInt32(93), SFInt32(-1), SFInt32(82), SFInt32(93), SFInt32(95), SFInt32(-1), SFInt32(82), SFInt32(95), SFInt32(97), SFInt32(-1), SFInt32(82), SFInt32(97), SFInt32(90), SFInt32(-1), SFInt32(23), SFInt32(90), SFInt32(97), SFInt32(-1), SFInt32(23), SFInt32(97), SFInt32(94), SFInt32(-1), SFInt32(23), SFInt32(94), SFInt32(89), SFInt32(-1), SFInt32(89), SFInt32(94), SFInt32(96), SFInt32(-1), SFInt32(89), SFInt32(96), SFInt32(95), SFInt32(-1), SFInt32(89), SFInt32(95), SFInt32(93), SFInt32(-1), SFInt32(89), SFInt32(93), SFInt32(91), SFInt32(-1), SFInt32(91), SFInt32(93), SFInt32(99), SFInt32(-1), SFInt32(91), SFInt32(99), SFInt32(100), SFInt32(-1), SFInt32(91), SFInt32(100), SFInt32(98), SFInt32(-1), SFInt32(21), SFInt32(91), SFInt32(98), SFInt32(-1), SFInt32(21), SFInt32(98), SFInt32(101), SFInt32(-1), SFInt32(21), SFInt32(101), SFInt32(92), SFInt32(-1), SFInt32(85), SFInt32(105), SFInt32(42), SFInt32(-1), SFInt32(85), SFInt32(103), SFInt32(105), SFInt32(-1), SFInt32(85), SFInt32(44), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(44), SFInt32(104), SFInt32(-1), SFInt32(80), SFInt32(42), SFInt32(105), SFInt32(-1), SFInt32(80), SFInt32(105), SFInt32(102), SFInt32(-1), SFInt32(80), SFInt32(102), SFInt32(104), SFInt32(-1), SFInt32(80), SFInt32(104), SFInt32(44), SFInt32(-1), SFInt32(105), SFInt32(109), SFInt32(102), SFInt32(-1), SFInt32(102), SFInt32(109), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(104), SFInt32(102), SFInt32(-1), SFInt32(104), SFInt32(47), SFInt32(45), SFInt32(-1), SFInt32(104), SFInt32(45), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(103), SFInt32(46), SFInt32(109), SFInt32(-1), SFInt32(103), SFInt32(109), SFInt32(105), SFInt32(-1), SFInt32(109), SFInt32(112), SFInt32(110), SFInt32(-1), SFInt32(109), SFInt32(110), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(110), SFInt32(111), SFInt32(-1), SFInt32(47), SFInt32(111), SFInt32(45), SFInt32(-1), SFInt32(45), SFInt32(111), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(46), SFInt32(45), SFInt32(-1), SFInt32(46), SFInt32(113), SFInt32(112), SFInt32(-1), SFInt32(112), SFInt32(109), SFInt32(46), SFInt32(-1), SFInt32(112), SFInt32(118), SFInt32(110), SFInt32(-1), SFInt32(110), SFInt32(118), SFInt32(115), SFInt32(-1), SFInt32(110), SFInt32(115), SFInt32(111), SFInt32(-1), SFInt32(111), SFInt32(115), SFInt32(117), SFInt32(-1), SFInt32(111), SFInt32(117), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(117), SFInt32(116), SFInt32(-1), SFInt32(113), SFInt32(116), SFInt32(112), SFInt32(-1), SFInt32(112), SFInt32(116), SFInt32(118), SFInt32(-1), SFInt32(115), SFInt32(118), SFInt32(119), SFInt32(-1), SFInt32(119), SFInt32(118), SFInt32(122), SFInt32(-1), SFInt32(118), SFInt32(116), SFInt32(122), SFInt32(-1), SFInt32(122), SFInt32(116), SFInt32(120), SFInt32(-1), SFInt32(116), SFInt32(117), SFInt32(120), SFInt32(-1), SFInt32(120), SFInt32(117), SFInt32(121), SFInt32(-1), SFInt32(117), SFInt32(115), SFInt32(121), SFInt32(-1), SFInt32(115), SFInt32(119), SFInt32(121), SFInt32(-1), SFInt32(119), SFInt32(127), SFInt32(123), SFInt32(-1), SFInt32(119), SFInt32(122), SFInt32(127), SFInt32(-1), SFInt32(122), SFInt32(126), SFInt32(127), SFInt32(-1), SFInt32(122), SFInt32(128), SFInt32(126), SFInt32(-1), SFInt32(122), SFInt32(120), SFInt32(128), SFInt32(-1), SFInt32(120), SFInt32(124), SFInt32(128), SFInt32(-1), SFInt32(120), SFInt32(121), SFInt32(124), SFInt32(-1), SFInt32(121), SFInt32(125), SFInt32(124), SFInt32(-1), SFInt32(121), SFInt32(119), SFInt32(125), SFInt32(-1), SFInt32(119), SFInt32(123), SFInt32(125), SFInt32(-1), SFInt32(127), SFInt32(129), SFInt32(123), SFInt32(-1), SFInt32(127), SFInt32(126), SFInt32(129), SFInt32(-1), SFInt32(129), SFInt32(126), SFInt32(141), SFInt32(-1), SFInt32(141), SFInt32(126), SFInt32(143), SFInt32(-1), SFInt32(126), SFInt32(142), SFInt32(143), SFInt32(-1), SFInt32(126), SFInt32(128), SFInt32(142), SFInt32(-1), SFInt32(128), SFInt32(124), SFInt32(130), SFInt32(-1), SFInt32(142), SFInt32(128), SFInt32(130), SFInt32(-1), SFInt32(124), SFInt32(132), SFInt32(130), SFInt32(-1), SFInt32(124), SFInt32(134), SFInt32(132), SFInt32(-1), SFInt32(125), SFInt32(134), SFInt32(124), SFInt32(-1), SFInt32(125), SFInt32(136), SFInt32(134), SFInt32(-1), SFInt32(125), SFInt32(137), SFInt32(136), SFInt32(-1), SFInt32(125), SFInt32(135), SFInt32(137), SFInt32(-1), SFInt32(125), SFInt32(133), SFInt32(135), SFInt32(-1), SFInt32(125), SFInt32(123), SFInt32(133), SFInt32(-1), SFInt32(123), SFInt32(131), SFInt32(133), SFInt32(-1), SFInt32(123), SFInt32(129), SFInt32(131), SFInt32(-1), SFInt32(131), SFInt32(129), SFInt32(138), SFInt32(-1), SFInt32(129), SFInt32(141), SFInt32(138), SFInt32(-1), SFInt32(138), SFInt32(141), SFInt32(144), SFInt32(-1), SFInt32(141), SFInt32(143), SFInt32(144), SFInt32(-1), SFInt32(143), SFInt32(146), SFInt32(144), SFInt32(-1), SFInt32(142), SFInt32(146), SFInt32(143), SFInt32(-1), SFInt32(142), SFInt32(145), SFInt32(146), SFInt32(-1), SFInt32(139), SFInt32(145), SFInt32(142), SFInt32(-1), SFInt32(130), SFInt32(139), SFInt32(142), SFInt32(-1), SFInt32(139), SFInt32(130), SFInt32(132), SFInt32(-1), SFInt32(139), SFInt32(132), SFInt32(154), SFInt32(-1), SFInt32(132), SFInt32(157), SFInt32(154), SFInt32(-1), SFInt32(132), SFInt32(159), SFInt32(157), SFInt32(-1), SFInt32(132), SFInt32(134), SFInt32(159), SFInt32(-1), SFInt32(134), SFInt32(136), SFInt32(159), SFInt32(-1), SFInt32(136), SFInt32(161), SFInt32(159), SFInt32(-1), SFInt32(136), SFInt32(137), SFInt32(161), SFInt32(-1), SFInt32(137), SFInt32(162), SFInt32(161), SFInt32(-1), SFInt32(160), SFInt32(162), SFInt32(137), SFInt32(-1), SFInt32(135), SFInt32(160), SFInt32(137), SFInt32(-1), SFInt32(133), SFInt32(160), SFInt32(135), SFInt32(-1), SFInt32(133), SFInt32(158), SFInt32(160), SFInt32(-1), SFInt32(131), SFInt32(158), SFInt32(133), SFInt32(-1), SFInt32(156), SFInt32(158), SFInt32(131), SFInt32(-1), SFInt32(153), SFInt32(156), SFInt32(131), SFInt32(-1), SFInt32(131), SFInt32(138), SFInt32(153), SFInt32(-1), SFInt32(138), SFInt32(155), SFInt32(153), SFInt32(-1), SFInt32(140), SFInt32(155), SFInt32(138), SFInt32(-1), SFInt32(138), SFInt32(144), SFInt32(140), SFInt32(-1), SFInt32(144), SFInt32(147), SFInt32(140), SFInt32(-1), SFInt32(140), SFInt32(147), SFInt32(145), SFInt32(-1), SFInt32(140), SFInt32(145), SFInt32(139), SFInt32(-1), SFInt32(139), SFInt32(155), SFInt32(140), SFInt32(-1), SFInt32(154), SFInt32(155), SFInt32(139), SFInt32(-1), SFInt32(146), SFInt32(149), SFInt32(144), SFInt32(-1), SFInt32(146), SFInt32(151), SFInt32(149), SFInt32(-1), SFInt32(145), SFInt32(151), SFInt32(146), SFInt32(-1), SFInt32(150), SFInt32(151), SFInt32(145), SFInt32(-1), SFInt32(145), SFInt32(152), SFInt32(150), SFInt32(-1), SFInt32(147), SFInt32(152), SFInt32(145), SFInt32(-1), SFInt32(147), SFInt32(149), SFInt32(152), SFInt32(-1), SFInt32(147), SFInt32(144), SFInt32(149), SFInt32(-1), SFInt32(148), SFInt32(149), SFInt32(151), SFInt32(-1), SFInt32(148), SFInt32(152), SFInt32(149), SFInt32(-1), SFInt32(148), SFInt32(150), SFInt32(152), SFInt32(-1), SFInt32(148), SFInt32(151), SFInt32(150), SFInt32(-1), SFInt32(160), SFInt32(207), SFInt32(162), SFInt32(-1), SFInt32(160), SFInt32(205), SFInt32(207), SFInt32(-1), SFInt32(165), SFInt32(208), SFInt32(205), SFInt32(-1), SFInt32(160), SFInt32(165), SFInt32(205), SFInt32(-1), SFInt32(158), SFInt32(165), SFInt32(160), SFInt32(-1), SFInt32(161), SFInt32(162), SFInt32(207), SFInt32(-1), SFInt32(161), SFInt32(207), SFInt32(206), SFInt32(-1), SFInt32(165), SFInt32(206), SFInt32(208), SFInt32(-1), SFInt32(206), SFInt32(165), SFInt32(161), SFInt32(-1), SFInt32(161), SFInt32(165), SFInt32(159), SFInt32(-1), SFInt32(207), SFInt32(209), SFInt32(211), SFInt32(-1), SFInt32(205), SFInt32(209), SFInt32(207), SFInt32(-1), SFInt32(205), SFInt32(212), SFInt32(209), SFInt32(-1), SFInt32(205), SFInt32(208), SFInt32(212), SFInt32(-1), SFInt32(206), SFInt32(212), SFInt32(208), SFInt32(-1), SFInt32(206), SFInt32(210), SFInt32(212), SFInt32(-1), SFInt32(206), SFInt32(207), SFInt32(210), SFInt32(-1), SFInt32(207), SFInt32(211), SFInt32(210), SFInt32(-1), SFInt32(209), SFInt32(212), SFInt32(213), SFInt32(-1), SFInt32(212), SFInt32(216), SFInt32(213), SFInt32(-1), SFInt32(212), SFInt32(214), SFInt32(216), SFInt32(-1), SFInt32(210), SFInt32(214), SFInt32(212), SFInt32(-1), SFInt32(210), SFInt32(215), SFInt32(214), SFInt32(-1), SFInt32(210), SFInt32(211), SFInt32(215), SFInt32(-1), SFInt32(209), SFInt32(215), SFInt32(211), SFInt32(-1), SFInt32(209), SFInt32(213), SFInt32(215), SFInt32(-1), SFInt32(217), SFInt32(213), SFInt32(216), SFInt32(-1), SFInt32(217), SFInt32(215), SFInt32(213), SFInt32(-1), SFInt32(217), SFInt32(214), SFInt32(215), SFInt32(-1), SFInt32(217), SFInt32(216), SFInt32(214), SFInt32(-1), SFInt32(158), SFInt32(194), SFInt32(165), SFInt32(-1), SFInt32(192), SFInt32(194), SFInt32(158), SFInt32(-1), SFInt32(164), SFInt32(195), SFInt32(192), SFInt32(-1), SFInt32(158), SFInt32(164), SFInt32(192), SFInt32(-1), SFInt32(156), SFInt32(164), SFInt32(158), SFInt32(-1), SFInt32(159), SFInt32(194), SFInt32(165), SFInt32(-1), SFInt32(159), SFInt32(194), SFInt32(193), SFInt32(-1), SFInt32(159), SFInt32(193), SFInt32(195), SFInt32(-1), SFInt32(159), SFInt32(195), SFInt32(164), SFInt32(-1), SFInt32(159), SFInt32(164), SFInt32(157), SFInt32(-1), SFInt32(157), SFInt32(164), SFInt32(180), SFInt32(-1), SFInt32(192), SFInt32(198), SFInt32(194), SFInt32(-1), SFInt32(192), SFInt32(196), SFInt32(198), SFInt32(-1), SFInt32(192), SFInt32(195), SFInt32(196), SFInt32(-1), SFInt32(195), SFInt32(199), SFInt32(196), SFInt32(-1), SFInt32(196), SFInt32(199), SFInt32(200), SFInt32(-1), SFInt32(199), SFInt32(203), SFInt32(200), SFInt32(-1), SFInt32(193), SFInt32(199), SFInt32(195), SFInt32(-1), SFInt32(193), SFInt32(197), SFInt32(199), SFInt32(-1), SFInt32(193), SFInt32(198), SFInt32(197), SFInt32(-1), SFInt32(193), SFInt32(194), SFInt32(198), SFInt32(-1), SFInt32(199), SFInt32(201), SFInt32(203), SFInt32(-1), SFInt32(197), SFInt32(201), SFInt32(199), SFInt32(-1), SFInt32(197), SFInt32(198), SFInt32(201), SFInt32(-1), SFInt32(198), SFInt32(202), SFInt32(201), SFInt32(-1), SFInt32(196), SFInt32(202), SFInt32(198), SFInt32(-1), SFInt32(200), SFInt32(202), SFInt32(196), SFInt32(-1), SFInt32(204), SFInt32(202), SFInt32(200), SFInt32(-1), SFInt32(204), SFInt32(201), SFInt32(202), SFInt32(-1), SFInt32(204), SFInt32(203), SFInt32(201), SFInt32(-1), SFInt32(204), SFInt32(200), SFInt32(203), SFInt32(-1), SFInt32(156), SFInt32(181), SFInt32(164), SFInt32(-1), SFInt32(156), SFInt32(179), SFInt32(181), SFInt32(-1), SFInt32(156), SFInt32(182), SFInt32(179), SFInt32(-1), SFInt32(156), SFInt32(163), SFInt32(182), SFInt32(-1), SFInt32(163), SFInt32(180), SFInt32(182), SFInt32(-1), SFInt32(157), SFInt32(180), SFInt32(163), SFInt32(-1), SFInt32(164), SFInt32(181), SFInt32(180), SFInt32(-1), SFInt32(179), SFInt32(182), SFInt32(183), SFInt32(-1), SFInt32(182), SFInt32(186), SFInt32(183), SFInt32(-1), SFInt32(182), SFInt32(184), SFInt32(186), SFInt32(-1), SFInt32(180), SFInt32(184), SFInt32(182), SFInt32(-1), SFInt32(180), SFInt32(181), SFInt32(184), SFInt32(-1), SFInt32(181), SFInt32(185), SFInt32(184), SFInt32(-1), SFInt32(179), SFInt32(185), SFInt32(181), SFInt32(-1), SFInt32(183), SFInt32(185), SFInt32(179), SFInt32(-1), SFInt32(183), SFInt32(186), SFInt32(187), SFInt32(-1), SFInt32(186), SFInt32(190), SFInt32(187), SFInt32(-1), SFInt32(184), SFInt32(190), SFInt32(186), SFInt32(-1), SFInt32(184), SFInt32(188), SFInt32(190), SFInt32(-1), SFInt32(184), SFInt32(185), SFInt32(188), SFInt32(-1), SFInt32(185), SFInt32(189), SFInt32(188), SFInt32(-1), SFInt32(185), SFInt32(183), SFInt32(189), SFInt32(-1), SFInt32(183), SFInt32(187), SFInt32(189), SFInt32(-1), SFInt32(191), SFInt32(189), SFInt32(187), SFInt32(-1), SFInt32(191), SFInt32(188), SFInt32(189), SFInt32(-1), SFInt32(191), SFInt32(190), SFInt32(188), SFInt32(-1), SFInt32(191), SFInt32(187), SFInt32(190), SFInt32(-1), SFInt32(153), SFInt32(163), SFInt32(156), SFInt32(-1), SFInt32(153), SFInt32(168), SFInt32(163), SFInt32(-1), SFInt32(153), SFInt32(166), SFInt32(168), SFInt32(-1), SFInt32(153), SFInt32(169), SFInt32(166), SFInt32(-1), SFInt32(155), SFInt32(169), SFInt32(153), SFInt32(-1), SFInt32(155), SFInt32(167), SFInt32(169), SFInt32(-1), SFInt32(154), SFInt32(167), SFInt32(155), SFInt32(-1), SFInt32(154), SFInt32(163), SFInt32(167), SFInt32(-1), SFInt32(154), SFInt32(157), SFInt32(163), SFInt32(-1), SFInt32(163), SFInt32(168), SFInt32(167), SFInt32(-1), SFInt32(166), SFInt32(169), SFInt32(170), SFInt32(-1), SFInt32(169), SFInt32(173), SFInt32(170), SFInt32(-1), SFInt32(169), SFInt32(171), SFInt32(173), SFInt32(-1), SFInt32(169), SFInt32(167), SFInt32(171), SFInt32(-1), SFInt32(167), SFInt32(168), SFInt32(171), SFInt32(-1), SFInt32(168), SFInt32(172), SFInt32(171), SFInt32(-1), SFInt32(168), SFInt32(170), SFInt32(172), SFInt32(-1), SFInt32(170), SFInt32(168), SFInt32(166), SFInt32(-1), SFInt32(170), SFInt32(173), SFInt32(174), SFInt32(-1), SFInt32(173), SFInt32(177), SFInt32(174), SFInt32(-1), SFInt32(173), SFInt32(175), SFInt32(177), SFInt32(-1), SFInt32(173), SFInt32(171), SFInt32(175), SFInt32(-1), SFInt32(171), SFInt32(172), SFInt32(175), SFInt32(-1), SFInt32(172), SFInt32(176), SFInt32(175), SFInt32(-1), SFInt32(172), SFInt32(174), SFInt32(176), SFInt32(-1), SFInt32(170), SFInt32(174), SFInt32(172), SFInt32(-1), SFInt32(178), SFInt32(176), SFInt32(174), SFInt32(-1), SFInt32(178), SFInt32(175), SFInt32(176), SFInt32(-1), SFInt32(178), SFInt32(177), SFInt32(175), SFInt32(-1), SFInt32(178), SFInt32(174), SFInt32(177), SFInt32(-1), SFInt32(86), SFInt32(30), SFInt32(221), SFInt32(-1), SFInt32(86), SFInt32(221), SFInt32(219), SFInt32(-1), SFInt32(86), SFInt32(219), SFInt32(32), SFInt32(-1), SFInt32(32), SFInt32(219), SFInt32(220), SFInt32(-1), SFInt32(78), SFInt32(32), SFInt32(220), SFInt32(-1), SFInt32(78), SFInt32(220), SFInt32(218), SFInt32(-1), SFInt32(78), SFInt32(218), SFInt32(221), SFInt32(-1), SFInt32(78), SFInt32(221), SFInt32(30), SFInt32(-1), SFInt32(221), SFInt32(225), SFInt32(219), SFInt32(-1), SFInt32(219), SFInt32(225), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(33), SFInt32(219), SFInt32(-1), SFInt32(33), SFInt32(220), SFInt32(219), SFInt32(-1), SFInt32(33), SFInt32(34), SFInt32(220), SFInt32(-1), SFInt32(220), SFInt32(34), SFInt32(218), SFInt32(-1), SFInt32(221), SFInt32(218), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(225), SFInt32(221), SFInt32(-1), SFInt32(225), SFInt32(226), SFInt32(228), SFInt32(-1), SFInt32(225), SFInt32(228), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(228), SFInt32(229), SFInt32(-1), SFInt32(35), SFInt32(229), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(229), SFInt32(227), SFInt32(-1), SFInt32(33), SFInt32(227), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(227), SFInt32(226), SFInt32(-1), SFInt32(34), SFInt32(226), SFInt32(225), SFInt32(-1), SFInt32(226), SFInt32(234), SFInt32(228), SFInt32(-1), SFInt32(228), SFInt32(234), SFInt32(232), SFInt32(-1), SFInt32(232), SFInt32(229), SFInt32(228), SFInt32(-1), SFInt32(232), SFInt32(233), SFInt32(229), SFInt32(-1), SFInt32(229), SFInt32(233), SFInt32(227), SFInt32(-1), SFInt32(227), SFInt32(233), SFInt32(231), SFInt32(-1), SFInt32(227), SFInt32(231), SFInt32(226), SFInt32(-1), SFInt32(226), SFInt32(231), SFInt32(234), SFInt32(-1), SFInt32(231), SFInt32(235), SFInt32(234), SFInt32(-1), SFInt32(235), SFInt32(238), SFInt32(234), SFInt32(-1), SFInt32(234), SFInt32(238), SFInt32(232), SFInt32(-1), SFInt32(238), SFInt32(236), SFInt32(232), SFInt32(-1), SFInt32(232), SFInt32(236), SFInt32(233), SFInt32(-1), SFInt32(236), SFInt32(237), SFInt32(233), SFInt32(-1), SFInt32(233), SFInt32(237), SFInt32(231), SFInt32(-1), SFInt32(231), SFInt32(237), SFInt32(235), SFInt32(-1), SFInt32(235), SFInt32(239), SFInt32(243), SFInt32(-1), SFInt32(235), SFInt32(243), SFInt32(238), SFInt32(-1), SFInt32(238), SFInt32(243), SFInt32(242), SFInt32(-1), SFInt32(238), SFInt32(242), SFInt32(244), SFInt32(-1), SFInt32(238), SFInt32(244), SFInt32(236), SFInt32(-1), SFInt32(236), SFInt32(244), SFInt32(240), SFInt32(-1), SFInt32(236), SFInt32(240), SFInt32(237), SFInt32(-1), SFInt32(237), SFInt32(240), SFInt32(241), SFInt32(-1), SFInt32(237), SFInt32(241), SFInt32(235), SFInt32(-1), SFInt32(235), SFInt32(241), SFInt32(239), SFInt32(-1), SFInt32(243), SFInt32(239), SFInt32(245), SFInt32(-1), SFInt32(243), SFInt32(245), SFInt32(242), SFInt32(-1), SFInt32(245), SFInt32(257), SFInt32(242), SFInt32(-1), SFInt32(257), SFInt32(259), SFInt32(242), SFInt32(-1), SFInt32(242), SFInt32(259), SFInt32(258), SFInt32(-1), SFInt32(242), SFInt32(258), SFInt32(244), SFInt32(-1), SFInt32(244), SFInt32(246), SFInt32(240), SFInt32(-1), SFInt32(258), SFInt32(246), SFInt32(244), SFInt32(-1), SFInt32(240), SFInt32(246), SFInt32(248), SFInt32(-1), SFInt32(240), SFInt32(248), SFInt32(250), SFInt32(-1), SFInt32(241), SFInt32(240), SFInt32(250), SFInt32(-1), SFInt32(241), SFInt32(250), SFInt32(252), SFInt32(-1), SFInt32(241), SFInt32(252), SFInt32(253), SFInt32(-1), SFInt32(241), SFInt32(253), SFInt32(251), SFInt32(-1), SFInt32(241), SFInt32(251), SFInt32(249), SFInt32(-1), SFInt32(241), SFInt32(249), SFInt32(239), SFInt32(-1), SFInt32(239), SFInt32(249), SFInt32(247), SFInt32(-1), SFInt32(239), SFInt32(247), SFInt32(245), SFInt32(-1), SFInt32(247), SFInt32(254), SFInt32(245), SFInt32(-1), SFInt32(245), SFInt32(254), SFInt32(257), SFInt32(-1), SFInt32(254), SFInt32(260), SFInt32(257), SFInt32(-1), SFInt32(257), SFInt32(260), SFInt32(259), SFInt32(-1), SFInt32(259), SFInt32(260), SFInt32(262), SFInt32(-1), SFInt32(258), SFInt32(259), SFInt32(262), SFInt32(-1), SFInt32(258), SFInt32(262), SFInt32(261), SFInt32(-1), SFInt32(255), SFInt32(258), SFInt32(261), SFInt32(-1), SFInt32(246), SFInt32(258), SFInt32(255), SFInt32(-1), SFInt32(255), SFInt32(248), SFInt32(246), SFInt32(-1), SFInt32(255), SFInt32(270), SFInt32(248), SFInt32(-1), SFInt32(248), SFInt32(270), SFInt32(273), SFInt32(-1), SFInt32(248), SFInt32(273), SFInt32(275), SFInt32(-1), SFInt32(248), SFInt32(275), SFInt32(250), SFInt32(-1), SFInt32(250), SFInt32(275), SFInt32(252), SFInt32(-1), SFInt32(252), SFInt32(275), SFInt32(277), SFInt32(-1), SFInt32(252), SFInt32(277), SFInt32(253), SFInt32(-1), SFInt32(253), SFInt32(277), SFInt32(278), SFInt32(-1), SFInt32(276), SFInt32(253), SFInt32(278), SFInt32(-1), SFInt32(251), SFInt32(253), SFInt32(276), SFInt32(-1), SFInt32(249), SFInt32(251), SFInt32(276), SFInt32(-1), SFInt32(249), SFInt32(276), SFInt32(274), SFInt32(-1), SFInt32(247), SFInt32(249), SFInt32(274), SFInt32(-1), SFInt32(272), SFInt32(247), SFInt32(274), SFInt32(-1), SFInt32(269), SFInt32(247), SFInt32(272), SFInt32(-1), SFInt32(247), SFInt32(269), SFInt32(254), SFInt32(-1), SFInt32(254), SFInt32(269), SFInt32(271), SFInt32(-1), SFInt32(256), SFInt32(254), SFInt32(271), SFInt32(-1), SFInt32(254), SFInt32(256), SFInt32(260), SFInt32(-1), SFInt32(260), SFInt32(256), SFInt32(263), SFInt32(-1), SFInt32(256), SFInt32(261), SFInt32(263), SFInt32(-1), SFInt32(256), SFInt32(255), SFInt32(261), SFInt32(-1), SFInt32(255), SFInt32(256), SFInt32(271), SFInt32(-1), SFInt32(270), SFInt32(255), SFInt32(271), SFInt32(-1), SFInt32(262), SFInt32(260), SFInt32(265), SFInt32(-1), SFInt32(262), SFInt32(265), SFInt32(267), SFInt32(-1), SFInt32(261), SFInt32(262), SFInt32(267), SFInt32(-1), SFInt32(266), SFInt32(261), SFInt32(267), SFInt32(-1), SFInt32(261), SFInt32(266), SFInt32(268), SFInt32(-1), SFInt32(263), SFInt32(261), SFInt32(268), SFInt32(-1), SFInt32(263), SFInt32(268), SFInt32(265), SFInt32(-1), SFInt32(263), SFInt32(265), SFInt32(260), SFInt32(-1), SFInt32(264), SFInt32(267), SFInt32(265), SFInt32(-1), SFInt32(264), SFInt32(265), SFInt32(268), SFInt32(-1), SFInt32(264), SFInt32(268), SFInt32(266), SFInt32(-1), SFInt32(264), SFInt32(266), SFInt32(267), SFInt32(-1), SFInt32(276), SFInt32(278), SFInt32(323), SFInt32(-1), SFInt32(276), SFInt32(323), SFInt32(321), SFInt32(-1), SFInt32(281), SFInt32(321), SFInt32(324), SFInt32(-1), SFInt32(276), SFInt32(321), SFInt32(281), SFInt32(-1), SFInt32(274), SFInt32(276), SFInt32(281), SFInt32(-1), SFInt32(277), SFInt32(323), SFInt32(278), SFInt32(-1), SFInt32(277), SFInt32(322), SFInt32(323), SFInt32(-1), SFInt32(281), SFInt32(324), SFInt32(322), SFInt32(-1), SFInt32(322), SFInt32(277), SFInt32(281), SFInt32(-1), SFInt32(277), SFInt32(275), SFInt32(281), SFInt32(-1), SFInt32(323), SFInt32(327), SFInt32(325), SFInt32(-1), SFInt32(321), SFInt32(323), SFInt32(325), SFInt32(-1), SFInt32(321), SFInt32(325), SFInt32(328), SFInt32(-1), SFInt32(321), SFInt32(328), SFInt32(324), SFInt32(-1), SFInt32(322), SFInt32(324), SFInt32(328), SFInt32(-1), SFInt32(322), SFInt32(328), SFInt32(326), SFInt32(-1), SFInt32(322), SFInt32(326), SFInt32(323), SFInt32(-1), SFInt32(323), SFInt32(326), SFInt32(327), SFInt32(-1), SFInt32(325), SFInt32(329), SFInt32(328), SFInt32(-1), SFInt32(328), SFInt32(329), SFInt32(332), SFInt32(-1), SFInt32(328), SFInt32(332), SFInt32(330), SFInt32(-1), SFInt32(326), SFInt32(328), SFInt32(330), SFInt32(-1), SFInt32(326), SFInt32(330), SFInt32(331), SFInt32(-1), SFInt32(326), SFInt32(331), SFInt32(327), SFInt32(-1), SFInt32(325), SFInt32(327), SFInt32(331), SFInt32(-1), SFInt32(325), SFInt32(331), SFInt32(329), SFInt32(-1), SFInt32(333), SFInt32(332), SFInt32(329), SFInt32(-1), SFInt32(333), SFInt32(329), SFInt32(331), SFInt32(-1), SFInt32(333), SFInt32(331), SFInt32(330), SFInt32(-1), SFInt32(333), SFInt32(330), SFInt32(332), SFInt32(-1), SFInt32(274), SFInt32(281), SFInt32(310), SFInt32(-1), SFInt32(308), SFInt32(274), SFInt32(310), SFInt32(-1), SFInt32(280), SFInt32(308), SFInt32(311), SFInt32(-1), SFInt32(274), SFInt32(308), SFInt32(280), SFInt32(-1), SFInt32(272), SFInt32(274), SFInt32(280), SFInt32(-1), SFInt32(275), SFInt32(310), SFInt32(281), SFInt32(-1), SFInt32(275), SFInt32(309), SFInt32(310), SFInt32(-1), SFInt32(275), SFInt32(311), SFInt32(309), SFInt32(-1), SFInt32(275), SFInt32(280), SFInt32(311), SFInt32(-1), SFInt32(275), SFInt32(273), SFInt32(280), SFInt32(-1), SFInt32(273), SFInt32(296), SFInt32(280), SFInt32(-1), SFInt32(308), SFInt32(310), SFInt32(314), SFInt32(-1), SFInt32(308), SFInt32(314), SFInt32(312), SFInt32(-1), SFInt32(308), SFInt32(312), SFInt32(311), SFInt32(-1), SFInt32(311), SFInt32(312), SFInt32(315), SFInt32(-1), SFInt32(312), SFInt32(316), SFInt32(315), SFInt32(-1), SFInt32(315), SFInt32(316), SFInt32(319), SFInt32(-1), SFInt32(309), SFInt32(311), SFInt32(315), SFInt32(-1), SFInt32(309), SFInt32(315), SFInt32(313), SFInt32(-1), SFInt32(309), SFInt32(313), SFInt32(314), SFInt32(-1), SFInt32(309), SFInt32(314), SFInt32(310), SFInt32(-1), SFInt32(315), SFInt32(319), SFInt32(317), SFInt32(-1), SFInt32(313), SFInt32(315), SFInt32(317), SFInt32(-1), SFInt32(313), SFInt32(317), SFInt32(314), SFInt32(-1), SFInt32(314), SFInt32(317), SFInt32(318), SFInt32(-1), SFInt32(312), SFInt32(314), SFInt32(318), SFInt32(-1), SFInt32(316), SFInt32(312), SFInt32(318), SFInt32(-1), SFInt32(320), SFInt32(316), SFInt32(318), SFInt32(-1), SFInt32(320), SFInt32(318), SFInt32(317), SFInt32(-1), SFInt32(320), SFInt32(317), SFInt32(319), SFInt32(-1), SFInt32(320), SFInt32(319), SFInt32(316), SFInt32(-1), SFInt32(272), SFInt32(280), SFInt32(297), SFInt32(-1), SFInt32(272), SFInt32(297), SFInt32(295), SFInt32(-1), SFInt32(272), SFInt32(295), SFInt32(298), SFInt32(-1), SFInt32(272), SFInt32(298), SFInt32(279), SFInt32(-1), SFInt32(279), SFInt32(298), SFInt32(296), SFInt32(-1), SFInt32(273), SFInt32(279), SFInt32(296), SFInt32(-1), SFInt32(280), SFInt32(296), SFInt32(297), SFInt32(-1), SFInt32(295), SFInt32(299), SFInt32(298), SFInt32(-1), SFInt32(298), SFInt32(299), SFInt32(302), SFInt32(-1), SFInt32(298), SFInt32(302), SFInt32(300), SFInt32(-1), SFInt32(296), SFInt32(298), SFInt32(300), SFInt32(-1), SFInt32(296), SFInt32(300), SFInt32(297), SFInt32(-1), SFInt32(297), SFInt32(300), SFInt32(301), SFInt32(-1), SFInt32(295), SFInt32(297), SFInt32(301), SFInt32(-1), SFInt32(299), SFInt32(295), SFInt32(301), SFInt32(-1), SFInt32(299), SFInt32(303), SFInt32(302), SFInt32(-1), SFInt32(302), SFInt32(303), SFInt32(306), SFInt32(-1), SFInt32(300), SFInt32(302), SFInt32(306), SFInt32(-1), SFInt32(300), SFInt32(306), SFInt32(304), SFInt32(-1), SFInt32(300), SFInt32(304), SFInt32(301), SFInt32(-1), SFInt32(301), SFInt32(304), SFInt32(305), SFInt32(-1), SFInt32(301), SFInt32(305), SFInt32(299), SFInt32(-1), SFInt32(299), SFInt32(305), SFInt32(303), SFInt32(-1), SFInt32(307), SFInt32(303), SFInt32(305), SFInt32(-1), SFInt32(307), SFInt32(305), SFInt32(304), SFInt32(-1), SFInt32(307), SFInt32(304), SFInt32(306), SFInt32(-1), SFInt32(307), SFInt32(306), SFInt32(303), SFInt32(-1), SFInt32(269), SFInt32(272), SFInt32(279), SFInt32(-1), SFInt32(269), SFInt32(279), SFInt32(284), SFInt32(-1), SFInt32(269), SFInt32(284), SFInt32(282), SFInt32(-1), SFInt32(269), SFInt32(282), SFInt32(285), SFInt32(-1), SFInt32(271), SFInt32(269), SFInt32(285), SFInt32(-1), SFInt32(271), SFInt32(285), SFInt32(283), SFInt32(-1), SFInt32(270), SFInt32(271), SFInt32(283), SFInt32(-1), SFInt32(270), SFInt32(283), SFInt32(279), SFInt32(-1), SFInt32(270), SFInt32(279), SFInt32(273), SFInt32(-1), SFInt32(279), SFInt32(283), SFInt32(284), SFInt32(-1), SFInt32(282), SFInt32(286), SFInt32(285), SFInt32(-1), SFInt32(285), SFInt32(286), SFInt32(289), SFInt32(-1), SFInt32(285), SFInt32(289), SFInt32(287), SFInt32(-1), SFInt32(285), SFInt32(287), SFInt32(283), SFInt32(-1), SFInt32(283), SFInt32(287), SFInt32(284), SFInt32(-1), SFInt32(284), SFInt32(287), SFInt32(288), SFInt32(-1), SFInt32(284), SFInt32(288), SFInt32(286), SFInt32(-1), SFInt32(286), SFInt32(282), SFInt32(284), SFInt32(-1), SFInt32(286), SFInt32(290), SFInt32(289), SFInt32(-1), SFInt32(289), SFInt32(290), SFInt32(293), SFInt32(-1), SFInt32(289), SFInt32(293), SFInt32(291), SFInt32(-1), SFInt32(289), SFInt32(291), SFInt32(287), SFInt32(-1), SFInt32(287), SFInt32(291), SFInt32(288), SFInt32(-1), SFInt32(288), SFInt32(291), SFInt32(292), SFInt32(-1), SFInt32(288), SFInt32(292), SFInt32(290), SFInt32(-1), SFInt32(286), SFInt32(288), SFInt32(290), SFInt32(-1), SFInt32(294), SFInt32(290), SFInt32(292), SFInt32(-1), SFInt32(294), SFInt32(292), SFInt32(291), SFInt32(-1), SFInt32(294), SFInt32(291), SFInt32(293), SFInt32(-1), SFInt32(294), SFInt32(293), SFInt32(290), SFInt32(-1), SFInt32(97), SFInt32(334), SFInt32(336), SFInt32(-1), SFInt32(97), SFInt32(336), SFInt32(94), SFInt32(-1), SFInt32(94), SFInt32(336), SFInt32(96), SFInt32(-1), SFInt32(336), SFInt32(335), SFInt32(96), SFInt32(-1), SFInt32(96), SFInt32(335), SFInt32(95), SFInt32(-1), SFInt32(95), SFInt32(335), SFInt32(337), SFInt32(-1), SFInt32(95), SFInt32(337), SFInt32(334), SFInt32(-1), SFInt32(95), SFInt32(334), SFInt32(97), SFInt32(-1), SFInt32(334), SFInt32(341), SFInt32(336), SFInt32(-1), SFInt32(336), SFInt32(341), SFInt32(338), SFInt32(-1), SFInt32(336), SFInt32(338), SFInt32(335), SFInt32(-1), SFInt32(335), SFInt32(338), SFInt32(340), SFInt32(-1), SFInt32(335), SFInt32(340), SFInt32(337), SFInt32(-1), SFInt32(337), SFInt32(340), SFInt32(339), SFInt32(-1), SFInt32(337), SFInt32(339), SFInt32(334), SFInt32(-1), SFInt32(334), SFInt32(339), SFInt32(341), SFInt32(-1), SFInt32(341), SFInt32(345), SFInt32(342), SFInt32(-1), SFInt32(341), SFInt32(342), SFInt32(338), SFInt32(-1), SFInt32(338), SFInt32(342), SFInt32(340), SFInt32(-1), SFInt32(340), SFInt32(342), SFInt32(344), SFInt32(-1), SFInt32(340), SFInt32(344), SFInt32(339), SFInt32(-1), SFInt32(339), SFInt32(344), SFInt32(343), SFInt32(-1), SFInt32(339), SFInt32(343), SFInt32(345), SFInt32(-1), SFInt32(339), SFInt32(345), SFInt32(341), SFInt32(-1), SFInt32(345), SFInt32(349), SFInt32(342), SFInt32(-1), SFInt32(342), SFInt32(349), SFInt32(351), SFInt32(-1), SFInt32(342), SFInt32(351), SFInt32(346), SFInt32(-1), SFInt32(342), SFInt32(346), SFInt32(344), SFInt32(-1), SFInt32(71), SFInt32(346), SFInt32(348), SFInt32(-1), SFInt32(71), SFInt32(344), SFInt32(346), SFInt32(-1), SFInt32(71), SFInt32(348), SFInt32(347), SFInt32(-1), SFInt32(71), SFInt32(347), SFInt32(344), SFInt32(-1), SFInt32(344), SFInt32(347), SFInt32(343), SFInt32(-1), SFInt32(343), SFInt32(347), SFInt32(352), SFInt32(-1), SFInt32(343), SFInt32(352), SFInt32(349), SFInt32(-1), SFInt32(343), SFInt32(349), SFInt32(345), SFInt32(-1), SFInt32(349), SFInt32(352), SFInt32(356), SFInt32(-1), SFInt32(349), SFInt32(356), SFInt32(353), SFInt32(-1), SFInt32(349), SFInt32(353), SFInt32(355), SFInt32(-1), SFInt32(349), SFInt32(355), SFInt32(351), SFInt32(-1), SFInt32(354), SFInt32(356), SFInt32(352), SFInt32(-1), SFInt32(354), SFInt32(352), SFInt32(350), SFInt32(-1), SFInt32(354), SFInt32(350), SFInt32(351), SFInt32(-1), SFInt32(354), SFInt32(351), SFInt32(355), SFInt32(-1), SFInt32(353), SFInt32(356), SFInt32(357), SFInt32(-1), SFInt32(353), SFInt32(357), SFInt32(358), SFInt32(-1), SFInt32(353), SFInt32(358), SFInt32(359), SFInt32(-1), SFInt32(353), SFInt32(359), SFInt32(360), SFInt32(-1), SFInt32(353), SFInt32(360), SFInt32(361), SFInt32(-1), SFInt32(353), SFInt32(361), SFInt32(355), SFInt32(-1), SFInt32(354), SFInt32(357), SFInt32(356), SFInt32(-1), SFInt32(350), SFInt32(346), SFInt32(351), SFInt32(-1), SFInt32(348), SFInt32(346), SFInt32(347), SFInt32(-1), SFInt32(350), SFInt32(347), SFInt32(346), SFInt32(-1), SFInt32(350), SFInt32(352), SFInt32(347), SFInt32(-1), SFInt32(354), SFInt32(358), SFInt32(357), SFInt32(-1), SFInt32(354), SFInt32(359), SFInt32(358), SFInt32(-1), SFInt32(354), SFInt32(360), SFInt32(359), SFInt32(-1), SFInt32(354), SFInt32(361), SFInt32(360), SFInt32(-1), SFInt32(354), SFInt32(355), SFInt32(361), SFInt32(-1), SFInt32(101), SFInt32(362), SFInt32(365), SFInt32(-1), SFInt32(101), SFInt32(365), SFInt32(99), SFInt32(-1), SFInt32(99), SFInt32(365), SFInt32(100), SFInt32(-1), SFInt32(100), SFInt32(365), SFInt32(363), SFInt32(-1), SFInt32(100), SFInt32(363), SFInt32(98), SFInt32(-1), SFInt32(98), SFInt32(363), SFInt32(364), SFInt32(-1), SFInt32(98), SFInt32(364), SFInt32(101), SFInt32(-1), SFInt32(101), SFInt32(364), SFInt32(362), SFInt32(-1), SFInt32(362), SFInt32(369), SFInt32(367), SFInt32(-1), SFInt32(362), SFInt32(367), SFInt32(365), SFInt32(-1), SFInt32(365), SFInt32(367), SFInt32(363), SFInt32(-1), SFInt32(363), SFInt32(367), SFInt32(368), SFInt32(-1), SFInt32(363), SFInt32(367), SFInt32(368), SFInt32(-1), SFInt32(363), SFInt32(368), SFInt32(366), SFInt32(-1), SFInt32(363), SFInt32(366), SFInt32(364), SFInt32(-1), SFInt32(364), SFInt32(366), SFInt32(362), SFInt32(-1), SFInt32(362), SFInt32(366), SFInt32(369), SFInt32(-1), SFInt32(369), SFInt32(373), SFInt32(371), SFInt32(-1), SFInt32(369), SFInt32(371), SFInt32(367), SFInt32(-1), SFInt32(367), SFInt32(371), SFInt32(368), SFInt32(-1), SFInt32(368), SFInt32(371), SFInt32(372), SFInt32(-1), SFInt32(368), SFInt32(372), SFInt32(366), SFInt32(-1), SFInt32(366), SFInt32(372), SFInt32(370), SFInt32(-1), SFInt32(366), SFInt32(370), SFInt32(369), SFInt32(-1), SFInt32(369), SFInt32(370), SFInt32(373), SFInt32(-1), SFInt32(373), SFInt32(377), SFInt32(380), SFInt32(-1), SFInt32(373), SFInt32(380), SFInt32(375), SFInt32(-1), SFInt32(373), SFInt32(375), SFInt32(371), SFInt32(-1), SFInt32(371), SFInt32(375), SFInt32(372), SFInt32(-1), SFInt32(372), SFInt32(375), SFInt32(376), SFInt32(-1), SFInt32(372), SFInt32(376), SFInt32(374), SFInt32(-1), SFInt32(372), SFInt32(374), SFInt32(370), SFInt32(-1), SFInt32(370), SFInt32(374), SFInt32(379), SFInt32(-1), SFInt32(373), SFInt32(370), SFInt32(379), SFInt32(-1), SFInt32(373), SFInt32(379), SFInt32(377), SFInt32(-1), SFInt32(377), SFInt32(379), SFInt32(383), SFInt32(-1), SFInt32(377), SFInt32(383), SFInt32(381), SFInt32(-1), SFInt32(377), SFInt32(381), SFInt32(384), SFInt32(-1), SFInt32(377), SFInt32(384), SFInt32(380), SFInt32(-1), SFInt32(381), SFInt32(383), SFInt32(389), SFInt32(-1), SFInt32(381), SFInt32(389), SFInt32(388), SFInt32(-1), SFInt32(381), SFInt32(388), SFInt32(387), SFInt32(-1), SFInt32(381), SFInt32(387), SFInt32(386), SFInt32(-1), SFInt32(381), SFInt32(386), SFInt32(385), SFInt32(-1), SFInt32(381), SFInt32(385), SFInt32(384), SFInt32(-1), SFInt32(376), SFInt32(375), SFInt32(374), SFInt32(-1), SFInt32(378), SFInt32(379), SFInt32(374), SFInt32(-1), SFInt32(378), SFInt32(374), SFInt32(375), SFInt32(-1), SFInt32(378), SFInt32(375), SFInt32(380), SFInt32(-1), SFInt32(382), SFInt32(386), SFInt32(387), SFInt32(-1), SFInt32(382), SFInt32(387), SFInt32(388), SFInt32(-1), SFInt32(382), SFInt32(388), SFInt32(389), SFInt32(-1), SFInt32(382), SFInt32(389), SFInt32(383), SFInt32(-1), SFInt32(382), SFInt32(383), SFInt32(379), SFInt32(-1), SFInt32(382), SFInt32(379), SFInt32(378), SFInt32(-1), SFInt32(382), SFInt32(378), SFInt32(380), SFInt32(-1), SFInt32(382), SFInt32(380), SFInt32(384), SFInt32(-1), SFInt32(382), SFInt32(384), SFInt32(385), SFInt32(-1), SFInt32(382), SFInt32(385), SFInt32(386), SFInt32(-1)]),
                              creaseAngle_ : 3.1,
                              coord_ : 
                                Coordinate(
                                  DEF_ : SFString('TheSkinCoord'),
                                  point_ : MFVec3f([SFVec3f([0,1.77,0]),SFVec3f([0,1.665,0.09]),SFVec3f([-0.033,1.62,0.087]),SFVec3f([0.033,1.62,0.087]),SFVec3f([0,1.55,0.097]),SFVec3f([-0.077,1.64,-0.01]),SFVec3f([-0.0527,1.58,0.015]),SFVec3f([0.077,1.64,-0.01]),SFVec3f([0.0527,1.58,0.015]),SFVec3f([0,1.625,-0.0925]),SFVec3f([-0.03,1.46,0.035]),SFVec3f([0,1.44,0.03]),SFVec3f([0.03,1.46,0.035]),SFVec3f([-0.1135,1.318,0.095]),SFVec3f([0.1135,1.318,0.095]),SFVec3f([0,1.25,0.113]),SFVec3f([-0.087,1.19,0.09]),SFVec3f([-0.0935,1.03,0.075]),SFVec3f([0.087,1.19,0.09]),SFVec3f([0.0935,1.03,0.075]),SFVec3f([-0.1425,1.065,0.0033]),SFVec3f([-0.15,0.9,-0.01]),SFVec3f([0.1425,1.065,0.0033]),SFVec3f([0.15,0.9,-0.01]),SFVec3f([0,1.53,-0.084]),SFVec3f([0.0049,1.1908,-0.1113]),SFVec3f([-0.0773,1.019,-0.12]),SFVec3f([0.0773,1.019,-0.12]),SFVec3f([0.005,1.0915,-0.1091]),SFVec3f([-0.178,1.4825,-0.0625]),SFVec3f([-0.17,1.38,0.007]),SFVec3f([-0.1884,0.8676,-0.036]),SFVec3f([-0.16,1.38,-0.127]),SFVec3f([-0.2,1.1388,-0.08]),SFVec3f([-0.244,1.1388,-0.04]),SFVec3f([-0.165,1.1388,-0.04]),SFVec3f([-0.23,1.133,-0.055]),SFVec3f([-0.1977,0.8169,-0.0177]),SFVec3f([-0.1941,0.6772,-0.0423]),SFVec3f([-0.2117,0.8562,-0.0584]),SFVec3f([-0.1929,0.789,-0.1064]),SFVec3f([0.175,1.4825,-0.06]),SFVec3f([0.17,1.38,0.007]),SFVec3f([0.1901,0.8645,-0.0415]),SFVec3f([0.16,1.38,-0.125]),SFVec3f([0.2,1.1388,-0.08]),SFVec3f([0.165,1.1388,-0.04]),SFVec3f([0.244,1.1388,-0.04]),SFVec3f([0.23,1.133,-0.055]),SFVec3f([0.2009,0.8139,-0.0237]),SFVec3f([0.2056,0.6743,-0.0482]),SFVec3f([0.2142,0.8529,-0.0648]),SFVec3f([0.1929,0.786,-0.1122]),SFVec3f([-0.1,0.4913,-0.03]),SFVec3f([-0.17,0.466,0]),SFVec3f([-0.05,0.466,0]),SFVec3f([-0.165,0.01,0.12]),SFVec3f([-0.15,0.07,0]),SFVec3f([-0.085,0.086,0.0125]),SFVec3f([-0.09,0.056,0.0125]),SFVec3f([-0.115,0.02,0.122]),SFVec3f([-0.115,0.04,-0.055]),SFVec3f([-0.11,0.011,0.19]),SFVec3f([0.0993,0.4881,-0.0309]),SFVec3f([0.17,0.466,0]),SFVec3f([0.05,0.4867,0]),SFVec3f([0.165,0.01,0.12]),SFVec3f([0.15,0.07,0]),SFVec3f([0.085,0.086,0.0125]),SFVec3f([0.09,0.056,0.0125]),SFVec3f([0.115,0.02,0.122]),SFVec3f([0.115,0.04,-0.055]),SFVec3f([0.11,0.011,0.19]),SFVec3f([0,0.875,0]),SFVec3f([-0.0646,1.5149,-0.038]),SFVec3f([0.0646,1.5149,-0.038]),SFVec3f([0,1.07225,0.09]),SFVec3f([-0.11,1.427,-0.1375]),SFVec3f([-0.235,1.42,-0.0625]),SFVec3f([0.11,1.427,-0.1375]),SFVec3f([0.235,1.42,-0.0625]),SFVec3f([0,1.41,-0.145]),SFVec3f([0,0.925,0.08]),SFVec3f([-0.087,1.19,-0.09]),SFVec3f([0.087,1.19,-0.09]),SFVec3f([0.172,1.32,-0.03]),SFVec3f([-0.172,1.32,-0.03]),SFVec3f([0.15,1.23,-0.015]),SFVec3f([-0.15,1.23,-0.015]),SFVec3f([0.079,0.92,-0.14]),SFVec3f([0.1,0.9,0.077]),SFVec3f([-0.079,0.92,-0.14]),SFVec3f([-0.1,0.9,0.075]),SFVec3f([0,0.87,0]),SFVec3f([0.171,0.65,0]),SFVec3f([0.02,0.65,0]),SFVec3f([0.1,0.65,-0.08]),SFVec3f([0.1,0.65,0.07]),SFVec3f([-0.171,0.65,0]),SFVec3f([-0.02,0.65,0]),SFVec3f([-0.1,0.65,-0.08]),SFVec3f([-0.1,0.65,0.07]),SFVec3f([0.25,1.27,-0.04]),SFVec3f([0.17,1.27,-0.04]),SFVec3f([0.2,1.27,-0.09]),SFVec3f([0.2,1.27,0.02]),SFVec3f([0.244,1.1388,-0.04]),SFVec3f([0.165,1.1388,-0.04]),SFVec3f([0.2,1.1388,-0.08]),SFVec3f([0.2,1.1388,-0.013]),SFVec3f([0.225,1,-0.01]),SFVec3f([0.225,1,-0.07]),SFVec3f([0.185,1,-0.01]),SFVec3f([0.185,1,-0.07]),SFVec3f([0.2,1.1388,-0.04]),SFVec3f([0.225,0.92,-0.04]),SFVec3f([0.175,0.92,-0.04]),SFVec3f([0.2,0.92,-0.065]),SFVec3f([0.2,0.92,-0.015]),SFVec3f([0.225,0.89,-0.04]),SFVec3f([0.175,0.89,-0.04]),SFVec3f([0.2,0.89,-0.065]),SFVec3f([0.2,0.89,-0.015]),SFVec3f([0.218,0.86,-0.04]),SFVec3f([0.184,0.86,-0.04]),SFVec3f([0.2,0.87,-0.07]),SFVec3f([0.2,0.87,0]),SFVec3f([0.21,0.85,0]),SFVec3f([0.1854,0.85,0]),SFVec3f([0.212,0.84,-0.015]),SFVec3f([0.183,0.84,-0.015]),SFVec3f([0.213,0.835,-0.04]),SFVec3f([0.19,0.835,-0.04]),SFVec3f([0.211,0.835,-0.065]),SFVec3f([0.192,0.835,-0.065]),SFVec3f([0.208,0.84,-0.085]),SFVec3f([0.19,0.84,-0.085]),SFVec3f([0.2,0.84,-0.095]),SFVec3f([0.215,0.82,0]),SFVec3f([0.193,0.815,0.005]),SFVec3f([0.198,0.8,0.012]),SFVec3f([0.21,0.82,0.03]),SFVec3f([0.19,0.82,0.03]),SFVec3f([0.2,0.835,0.039]),SFVec3f([0.212,0.8,0.05]),SFVec3f([0.188,0.8,0.05]),SFVec3f([0.2,0.807,0.057]),SFVec3f([0.2,0.793,0.035]),SFVec3f([0.2,0.774,0.076]),SFVec3f([0.212,0.78,0.07]),SFVec3f([0.188,0.78,0.07]),SFVec3f([0.2,0.785,0.075]),SFVec3f([0.2,0.77,0.062]),SFVec3f([0.215,0.793,-0.015]),SFVec3f([0.187,0.793,-0.015]),SFVec3f([0.2,0.793,-0.005]),SFVec3f([0.215,0.788,-0.04]),SFVec3f([0.187,0.788,-0.04]),SFVec3f([0.215,0.793,-0.065]),SFVec3f([0.187,0.793,-0.065]),SFVec3f([0.21,0.79,-0.085]),SFVec3f([0.19,0.79,-0.085]),SFVec3f([0.2,0.79,-0.095]),SFVec3f([0.19,0.77,-0.0275]),SFVec3f([0.19,0.77,-0.0525]),SFVec3f([0.19,0.78,-0.0775]),SFVec3f([0.212,0.745,-0.015]),SFVec3f([0.188,0.745,-0.02]),SFVec3f([0.2,0.745,-0.0255]),SFVec3f([0.2,0.745,-0.0045]),SFVec3f([0.211,0.72,-0.015]),SFVec3f([0.189,0.72,-0.015]),SFVec3f([0.2,0.72,-0.0252]),SFVec3f([0.2,0.72,-0.0048]),SFVec3f([0.21,0.695,-0.015]),SFVec3f([0.19,0.695,-0.015]),SFVec3f([0.2,0.695,-0.025]),SFVec3f([0.2,0.695,-0.005]),SFVec3f([0.2,0.685,-0.015]),SFVec3f([0.215,0.74,-0.04]),SFVec3f([0.185,0.74,-0.04]),SFVec3f([0.2,0.74,-0.055]),SFVec3f([0.2,0.74,-0.025]),SFVec3f([0.21,0.7142,-0.04]),SFVec3f([0.19,0.7142,-0.04]),SFVec3f([0.2,0.7142,-0.053]),SFVec3f([0.2,0.7142,-0.027]),SFVec3f([0.21,0.68,-0.04]),SFVec3f([0.19,0.68,-0.04]),SFVec3f([0.2,0.68,-0.05]),SFVec3f([0.2,0.68,-0.03]),SFVec3f([0.2,0.67,-0.04]),SFVec3f([0.212,0.74,-0.065]),SFVec3f([0.188,0.74,-0.065]),SFVec3f([0.2,0.74,-0.0756]),SFVec3f([0.2,0.74,-0.0542]),SFVec3f([0.21,0.7177,-0.065]),SFVec3f([0.19,0.7177,-0.065]),SFVec3f([0.2,0.7177,-0.0751]),SFVec3f([0.2,0.7177,-0.0549]),SFVec3f([0.21,0.695,-0.065]),SFVec3f([0.19,0.695,-0.065]),SFVec3f([0.2,0.695,-0.075]),SFVec3f([0.2,0.695,-0.055]),SFVec3f([0.2,0.685,-0.065]),SFVec3f([0.211,0.755,-0.085]),SFVec3f([0.189,0.755,-0.085]),SFVec3f([0.2,0.755,-0.0952]),SFVec3f([0.2,0.755,-0.0748]),SFVec3f([0.21,0.735,-0.085]),SFVec3f([0.19,0.735,-0.085]),SFVec3f([0.2,0.735,-0.0951]),SFVec3f([0.2,0.735,-0.0749]),SFVec3f([0.21,0.72,-0.085]),SFVec3f([0.19,0.72,-0.085]),SFVec3f([0.2,0.72,-0.095]),SFVec3f([0.2,0.72,-0.075]),SFVec3f([0.2,0.71,-0.085]),SFVec3f([-0.23,1.23,-0.04]),SFVec3f([-0.16,1.23,-0.04]),SFVec3f([-0.2,1.235,-0.105]),SFVec3f([-0.2,1.235,0.02]),SFVec3f([-0.244,1.1388,-0.04]),SFVec3f([-0.165,1.1388,-0.04]),SFVec3f([-0.2,1.1388,-0.08]),SFVec3f([-0.2,1.1388,0.013]),SFVec3f([-0.225,1,-0.01]),SFVec3f([-0.225,1,-0.07]),SFVec3f([-0.185,1,-0.01]),SFVec3f([-0.185,1,-0.07]),SFVec3f([-0.2,1.1388,-0.04]),SFVec3f([-0.225,0.92,-0.04]),SFVec3f([-0.175,0.92,-0.04]),SFVec3f([-0.2,0.92,-0.065]),SFVec3f([-0.2,0.92,-0.015]),SFVec3f([-0.225,0.89,-0.04]),SFVec3f([-0.175,0.89,-0.04]),SFVec3f([-0.2,0.89,-0.065]),SFVec3f([-0.2,0.89,-0.015]),SFVec3f([-0.218,0.86,-0.04]),SFVec3f([-0.184,0.86,-0.04]),SFVec3f([-0.2,0.87,-0.07]),SFVec3f([-0.2,0.87,0]),SFVec3f([-0.21,0.85,0]),SFVec3f([-0.1854,0.85,0]),SFVec3f([-0.212,0.84,-0.015]),SFVec3f([-0.183,0.84,-0.015]),SFVec3f([-0.213,0.835,-0.04]),SFVec3f([-0.19,0.835,-0.04]),SFVec3f([-0.211,0.835,-0.065]),SFVec3f([-0.192,0.835,-0.065]),SFVec3f([-0.208,0.84,-0.085]),SFVec3f([-0.19,0.84,-0.085]),SFVec3f([-0.2,0.84,-0.095]),SFVec3f([-0.215,0.82,0]),SFVec3f([-0.193,0.815,0.005]),SFVec3f([-0.198,0.8,0.012]),SFVec3f([-0.21,0.82,0.03]),SFVec3f([-0.19,0.82,0.03]),SFVec3f([-0.2,0.835,0.039]),SFVec3f([-0.212,0.8,0.05]),SFVec3f([-0.188,0.8,0.05]),SFVec3f([-0.2,0.807,0.057]),SFVec3f([-0.2,0.793,0.035]),SFVec3f([-0.2,0.774,0.076]),SFVec3f([-0.212,0.78,0.07]),SFVec3f([-0.188,0.78,0.07]),SFVec3f([-0.2,0.785,0.075]),SFVec3f([-0.2,0.77,0.062]),SFVec3f([-0.215,0.793,-0.015]),SFVec3f([-0.187,0.793,-0.015]),SFVec3f([-0.2,0.793,-0.005]),SFVec3f([-0.215,0.788,-0.04]),SFVec3f([-0.187,0.788,-0.04]),SFVec3f([-0.215,0.793,-0.065]),SFVec3f([-0.187,0.793,-0.065]),SFVec3f([-0.21,0.79,-0.085]),SFVec3f([-0.19,0.79,-0.085]),SFVec3f([-0.2,0.79,-0.095]),SFVec3f([-0.19,0.77,-0.0275]),SFVec3f([-0.19,0.77,-0.0525]),SFVec3f([-0.19,0.78,-0.0775]),SFVec3f([-0.212,0.745,-0.015]),SFVec3f([-0.188,0.745,-0.02]),SFVec3f([-0.2,0.745,-0.0255]),SFVec3f([-0.2,0.745,-0.0045]),SFVec3f([-0.211,0.72,-0.015]),SFVec3f([-0.189,0.72,-0.015]),SFVec3f([-0.2,0.72,-0.0252]),SFVec3f([-0.2,0.72,-0.0048]),SFVec3f([-0.21,0.695,-0.015]),SFVec3f([-0.19,0.695,-0.015]),SFVec3f([-0.2,0.695,-0.025]),SFVec3f([-0.2,0.695,-0.005]),SFVec3f([-0.2,0.685,-0.015]),SFVec3f([-0.215,0.74,-0.04]),SFVec3f([-0.185,0.74,-0.04]),SFVec3f([-0.2,0.74,-0.055]),SFVec3f([-0.2,0.74,-0.025]),SFVec3f([-0.21,0.7142,-0.04]),SFVec3f([-0.19,0.7142,-0.04]),SFVec3f([-0.2,0.7142,-0.053]),SFVec3f([-0.2,0.7142,-0.027]),SFVec3f([-0.21,0.68,-0.04]),SFVec3f([-0.19,0.68,-0.04]),SFVec3f([-0.2,0.68,-0.05]),SFVec3f([-0.2,0.68,-0.03]),SFVec3f([-0.2,0.67,-0.04]),SFVec3f([-0.212,0.74,-0.065]),SFVec3f([-0.188,0.74,-0.065]),SFVec3f([-0.2,0.74,-0.0756]),SFVec3f([-0.2,0.74,-0.0542]),SFVec3f([-0.21,0.7177,-0.065]),SFVec3f([-0.19,0.7177,-0.065]),SFVec3f([-0.2,0.7177,-0.0751]),SFVec3f([-0.2,0.7177,-0.0549]),SFVec3f([-0.21,0.695,-0.065]),SFVec3f([-0.19,0.695,-0.065]),SFVec3f([-0.2,0.695,-0.075]),SFVec3f([-0.2,0.695,-0.055]),SFVec3f([-0.2,0.685,-0.065]),SFVec3f([-0.211,0.755,-0.085]),SFVec3f([-0.189,0.755,-0.085]),SFVec3f([-0.2,0.755,-0.0952]),SFVec3f([-0.2,0.755,-0.0748]),SFVec3f([-0.21,0.735,-0.085]),SFVec3f([-0.19,0.735,-0.085]),SFVec3f([-0.2,0.735,-0.0951]),SFVec3f([-0.2,0.735,-0.0749]),SFVec3f([-0.21,0.72,-0.085]),SFVec3f([-0.19,0.72,-0.085]),SFVec3f([-0.2,0.72,-0.095]),SFVec3f([-0.2,0.72,-0.075]),SFVec3f([-0.2,0.71,-0.085]),SFVec3f([0.115,0.466,0.06]),SFVec3f([0.115,0.466,-0.055]),SFVec3f([0.15,0.466,0]),SFVec3f([0.05,0.466,0]),SFVec3f([0.17,0.3,0]),SFVec3f([0.06,0.3,0]),SFVec3f([0.1,0.3,-0.05]),SFVec3f([0.1,0.3,0.05]),SFVec3f([0.15,0.07,0]),SFVec3f([0.085,0.086,0.0125]),SFVec3f([0.115,0.069,-0.045]),SFVec3f([0.117,0.0975,0.0615]),SFVec3f([0.1375,0.006,-0.03]),SFVec3f([0.095,0.006,-0.03]),SFVec3f([0.115,0.015,-0.045]),SFVec3f([0.115,0.06,0.1]),SFVec3f([0.115,0,0.07]),SFVec3f([0.165,0,0.07]),SFVec3f([0.095,0,0.07]),SFVec3f([0.115,0.04,0.13]),SFVec3f([0.125,0,0.12]),SFVec3f([0.165,0,0.12]),SFVec3f([0.087,0,0.122]),SFVec3f([0.09,0.012,0.188]),SFVec3f([0.11,0.011,0.19]),SFVec3f([0.128,0.011,0.185]),SFVec3f([0.142,0.011,0.178]),SFVec3f([0.154,0.01,0.168]),SFVec3f([-0.115,0.466,0.06]),SFVec3f([-0.115,0.466,-0.055]),SFVec3f([-0.17,0.466,0]),SFVec3f([-0.05,0.466,0]),SFVec3f([-0.17,0.3,0]),SFVec3f([-0.06,0.3,0]),SFVec3f([-0.1,0.3,-0.05]),SFVec3f([-0.1,0.3,0.05]),SFVec3f([-0.15,0.07,0]),SFVec3f([-0.085,0.086,0.0125]),SFVec3f([-0.115,0.069,-0.045]),SFVec3f([-0.117,0.0975,0.0615]),SFVec3f([-0.1375,0.006,-0.03]),SFVec3f([-0.095,0.006,-0.03]),SFVec3f([-0.095,0.006,-0.03]),SFVec3f([-0.115,0.06,0.1]),SFVec3f([-0.115,0,0.07]),SFVec3f([-0.165,0,0.07]),SFVec3f([-0.095,0,0.07]),SFVec3f([-0.115,0.04,0.13]),SFVec3f([-0.125,0,0.12]),SFVec3f([-0.165,0,0.12]),SFVec3f([-0.087,0,0.122]),SFVec3f([-0.09,0.012,0.188]),SFVec3f([-0.11,0.011,0.19]),SFVec3f([-0.128,0.011,0.185]),SFVec3f([-0.142,0.011,0.178]),SFVec3f([-0.154,0.01,0.168])])),
                              color_ : 
                                Color(
                                  color_ : MFColor([SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(1)]))),
                          appearance_ : 
                            Appearance(
                              DEF_ : SFString('SkinAppearance'),
                              texture_ : 
                                ImageTexture(
                                  DEF_ : SFString('zBlueSpiralBkg2'),
                                  description_ : SFString('Blue Spiral Pattern'),
                                  url_ : MFString([SFString("zBlueSpiralBkg2.gif"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")])),
                              material_ : 
                                Material(
                                  DEF_ : SFString('SkinMaterial'),
                                  ambientIntensity_ : 0.6,
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  shininess_ : 0.6,
                                  transparency_ : 0.2))),
                      skinCoord_ : 
                        Coordinate(
                          USE_ : SFString('TheSkinCoord')),
                      joints_ : [
                        HAnimJoint(
                          name_ : SFString('HumanoidRoot'),
                          DEF_ : SFString('Joe_HumanoidRoot'),
                          center_ : SFVec3f([SFDouble(0), SFDouble(0.875), SFDouble(0)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('sacrum'),
                              DEF_ : SFString('Joe_sacrum'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.875), SFDouble(0)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('jointbox'))]),

                                Shape(
                                  geometry_ : 
                                    IndexedLineSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.875,0]),SFVec3f([0,0.92,0])]))),
                                  appearance_ : 
                                    Appearance(
                                      USE_ : SFString('SegmentLine'))),

                                Transform(
                                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.92), SFDouble(0.08)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('skinsphere'))]),

                                Transform(
                                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.87), SFDouble(-0.022)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('skinsphere'))])]),

                            HAnimJoint(
                              name_ : SFString('sacroiliac'),
                              DEF_ : SFString('Joe_sacroiliac'),
                              center_ : SFVec3f([SFDouble(0), SFDouble(0.92), SFDouble(0)]),
                              skinCoordIndex_ : MFInt32([SFInt32(17), SFInt32(19), SFInt32(20), SFInt32(21), SFInt32(22), SFInt32(23), SFInt32(26), SFInt32(27), SFInt32(73), SFInt32(82), SFInt32(89), SFInt32(91), SFInt32(93)]),
                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.35), SFFloat(0.35), SFFloat(1)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('pelvis'),
                                  DEF_ : SFString('Joe_pelvis'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                                      children_ : [
                                        Transform(
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('jointbox'))])]),

                                    Shape(
                                      geometry_ : 
                                        IndexedLineSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0.92,0]),SFVec3f([0.0961,0.9124,0]),SFVec3f([-0.095,0.9171,0.0029]),SFVec3f([0,1.045,-0.095])]))),
                                      appearance_ : 
                                        Appearance(
                                          USE_ : SFString('SegmentLine'))),

                                    HAnimSite(
                                      name_ : SFString('l_iliocristale'),
                                      DEF_ : SFString('Joe_l_iliocristale'),
                                      translation_ : SFVec3f([SFDouble(0.1425), SFDouble(1.065), SFDouble(0.0033)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('l_trochanterion'),
                                      DEF_ : SFString('Joe_l_trochanterion'),
                                      translation_ : SFVec3f([SFDouble(0.15), SFDouble(0.9), SFDouble(-0.01)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('r_iliocristale'),
                                      DEF_ : SFString('Joe_r_iliocristale'),
                                      translation_ : SFVec3f([SFDouble(-0.1425), SFDouble(1.065), SFDouble(0.0033)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('r_trochanterion'),
                                      DEF_ : SFString('Joe_r_trochanterion'),
                                      translation_ : SFVec3f([SFDouble(-0.15), SFDouble(0.9), SFDouble(-0.01)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('l_asis'),
                                      DEF_ : SFString('Joe_l_asis'),
                                      translation_ : SFVec3f([SFDouble(0.0935), SFDouble(1.03), SFDouble(0.075)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('r_asis'),
                                      DEF_ : SFString('Joe_r_asis'),
                                      translation_ : SFVec3f([SFDouble(-0.0935), SFDouble(1.03), SFDouble(0.075)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('l_psis'),
                                      DEF_ : SFString('Joe_l_psis'),
                                      translation_ : SFVec3f([SFDouble(0.0773), SFDouble(1.019), SFDouble(-0.12)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('r_psis'),
                                      DEF_ : SFString('Joe_r_psis'),
                                      translation_ : SFVec3f([SFDouble(-0.0773), SFDouble(1.019), SFDouble(-0.12)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('floormarker'),
                                      DEF_ : SFString('Joe_floormarker'),
                                      children_ : [
                                        Transform(
                                          scale_ : SFVec3f([SFDouble(3), SFDouble(3), SFDouble(3)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))])]),

                                    HAnimSite(
                                      name_ : SFString('crotch'),
                                      DEF_ : SFString('Joe_crotch'),
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
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l_thigh'),
                                      DEF_ : SFString('Joe_l_thigh'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.92), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('jointbox'))]),

                                        Shape(
                                          geometry_ : 
                                            IndexedLineSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1,0.92,0]),SFVec3f([0.115,0.466,0])]))),
                                          appearance_ : 
                                            Appearance(
                                              USE_ : SFString('SegmentLine'))),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.9), SFDouble(0.0775)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('skinsphere'))]),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.079), SFDouble(0.92), SFDouble(-0.14)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('skinsphere'))]),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.171), SFDouble(0.65), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('skinsphere'))]),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.02), SFDouble(0.65), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('skinsphere'))]),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.65), SFDouble(-0.08)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('skinsphere'))]),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.65), SFDouble(0.07)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('skinsphere'))]),

                                        HAnimSite(
                                          name_ : SFString('l_knee_crease'),
                                          DEF_ : SFString('Joe_l_knee_crease'),
                                          translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.466), SFDouble(-0.055)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))]),

                                        HAnimSite(
                                          name_ : SFString('l_femoral_lateral_epicn'),
                                          DEF_ : SFString('Joe_l_femoral_lateral_epicn'),
                                          translation_ : SFVec3f([SFDouble(0.17), SFDouble(0.466), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))]),

                                        HAnimSite(
                                          name_ : SFString('l_femoral_medial_epicn'),
                                          DEF_ : SFString('Joe_l_femoral_medial_epicn'),
                                          translation_ : SFVec3f([SFDouble(0.05), SFDouble(0.466), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))])]),

                                    HAnimJoint(
                                      name_ : SFString('l_knee'),
                                      DEF_ : SFString('Joe_l_knee'),
                                      center_ : SFVec3f([SFDouble(0.11500000208616257), SFDouble(0.4659999907016754), SFDouble(0)]),
                                      skinCoordIndex_ : MFInt32([SFInt32(334), SFInt32(335), SFInt32(336), SFInt32(337), SFInt32(338), SFInt32(339), SFInt32(340), SFInt32(341)]),
                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l_calf'),
                                          DEF_ : SFString('Joe_l_calf'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.11500000208616257), SFDouble(0.4659999907016754), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('jointbox'))]),

                                            Shape(
                                              geometry_ : 
                                                IndexedLineSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.115,0.466,0]),SFVec3f([0.1,0.069,0])]))),
                                              appearance_ : 
                                                Appearance(
                                                  USE_ : SFString('SegmentLine'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.466), SFDouble(0.06)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('skinsphere'))]),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.466), SFDouble(-0.055)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('skinsphere'))]),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.17), SFDouble(0.466), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('skinsphere'))]),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.05), SFDouble(0.466), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('skinsphere'))]),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.17), SFDouble(0.3), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('skinsphere'))]),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.06), SFDouble(0.3), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('skinsphere'))]),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.3), SFDouble(-0.05)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('skinsphere'))]),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.3), SFDouble(0.05)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('skinsphere'))]),

                                            HAnimSite(
                                              name_ : SFString('l_lateral_malleolus'),
                                              DEF_ : SFString('Joe_l_lateral_malleolus'),
                                              translation_ : SFVec3f([SFDouble(0.15), SFDouble(0.07), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))]),

                                            HAnimSite(
                                              name_ : SFString('l_medial_malleolus'),
                                              DEF_ : SFString('Joe_l_medial_malleolus'),
                                              translation_ : SFVec3f([SFDouble(0.085), SFDouble(0.086), SFDouble(0.0125)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))])]),

                                        HAnimJoint(
                                          name_ : SFString('l_ankle'),
                                          DEF_ : SFString('Joe_l_ankle'),
                                          center_ : SFVec3f([SFDouble(0.115), SFDouble(0.069), SFDouble(0)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(342), SFInt32(343), SFInt32(344), SFInt32(345)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l_hindfoot'),
                                              DEF_ : SFString('Joe_l_hindfoot'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.069), SFDouble(0)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('jointbox'))]),

                                                Shape(
                                                  geometry_ : 
                                                    IndexedLineSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.1,0.069,0]),SFVec3f([0.115,0.031,0.03])]))),
                                                  appearance_ : 
                                                    Appearance(
                                                      USE_ : SFString('SegmentLine'))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.15), SFDouble(0.07), SFDouble(0)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))]),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.085), SFDouble(0.086), SFDouble(0.0125)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))]),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.069), SFDouble(-0.045)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))]),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.117), SFDouble(0.0975), SFDouble(0.0615)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))]),

                                                HAnimSite(
                                                  name_ : SFString('l_sphyrion'),
                                                  DEF_ : SFString('Joe_l_sphyrion'),
                                                  translation_ : SFVec3f([SFDouble(0.09), SFDouble(0.056), SFDouble(0.0125)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))]),

                                                HAnimSite(
                                                  name_ : SFString('l_calcaneous_post'),
                                                  DEF_ : SFString('Joe_l_calcaneous_post'),
                                                  translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.04), SFDouble(-0.055)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))])]),

                                            HAnimJoint(
                                              name_ : SFString('l_subtalar'),
                                              DEF_ : SFString('Joe_l_subtalar'),
                                              center_ : SFVec3f([SFDouble(0.115), SFDouble(0.031), SFDouble(0.03)]),
                                              skinCoordIndex_ : MFInt32([SFInt32(346), SFInt32(347), SFInt32(348), SFInt32(71)]),
                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_midproximal'),
                                                  DEF_ : SFString('Joe_l_midproximal'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.031), SFDouble(0.03)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('jointbox'))]),

                                                    Shape(
                                                      geometry_ : 
                                                        IndexedLineSet(
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.115,0.031,0.03]),SFVec3f([0.115,0.037,0.09])]))),
                                                      appearance_ : 
                                                        Appearance(
                                                          USE_ : SFString('SegmentLine'))),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.1375), SFDouble(0.006), SFDouble(-0.03)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('skinsphere'))]),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.095), SFDouble(0.006), SFDouble(-0.03)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('skinsphere'))]),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.015), SFDouble(-0.045)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('skinsphere'))])]),

                                                HAnimJoint(
                                                  name_ : SFString('l_midtarsal'),
                                                  DEF_ : SFString('Joe_l_midtarsal'),
                                                  center_ : SFVec3f([SFDouble(0.115), SFDouble(0.037), SFDouble(0.09)]),
                                                  skinCoordIndex_ : MFInt32([SFInt32(349), SFInt32(350), SFInt32(351), SFInt32(352)]),
                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('l_middistal'),
                                                      DEF_ : SFString('Joe_l_middistal'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.115), SFDouble(0.037), SFDouble(0.09)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('jointbox'))]),

                                                        Shape(
                                                          geometry_ : 
                                                            IndexedLineSet(
                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.115,0.037,0.09]),SFVec3f([0.115,0.02,0.122])]))),
                                                          appearance_ : 
                                                            Appearance(
                                                              USE_ : SFString('SegmentLine'))),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.11500000208616257), SFDouble(0.05999999865889549), SFDouble(0.10000000149011612)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('skinsphere'))]),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.11500000208616257), SFDouble(0), SFDouble(0.07000000029802322)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('skinsphere'))]),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.16500000655651093), SFDouble(0), SFDouble(0.07000000029802322)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('skinsphere'))]),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.0949999988079071), SFDouble(0), SFDouble(0.07000000029802322)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('skinsphere'))]),

                                                        HAnimSite(
                                                          name_ : SFString('l_metatarsal_pha1'),
                                                          DEF_ : SFString('Joe_l_metatarsal_pha1'),
                                                          translation_ : SFVec3f([SFDouble(0.08699999749660492), SFDouble(0.009999999776482582), SFDouble(0.12200000137090683)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('sitebox'))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_metatarsal'),
                                                      DEF_ : SFString('Joe_l_metatarsal'),
                                                      center_ : SFVec3f([SFDouble(0.11500000208616257), SFDouble(0.019999999552965164), SFDouble(0.12200000137090683)]),
                                                      skinCoordIndex_ : MFInt32([SFInt32(353), SFInt32(354), SFInt32(355), SFInt32(356), SFInt32(357), SFInt32(358), SFInt32(359), SFInt32(360), SFInt32(361)]),
                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('l_forefoot'),
                                                          DEF_ : SFString('Joe_l_forefoot'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.11500000208616257), SFDouble(0.019999999552965164), SFDouble(0.12999999523162842)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('jointbox'))]),

                                                            Shape(
                                                              geometry_ : 
                                                                IndexedLineSet(
                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.11500000208616257,0.019999999552965164,0.12200000137090683]),SFVec3f([0.13199999928474426,0.013000000268220901,0.1899999976158142])]))),
                                                              appearance_ : 
                                                                Appearance(
                                                                  USE_ : SFString('SegmentLine'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.11500000208616257), SFDouble(0.03999999910593033), SFDouble(0.12999999523162842)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.125), SFDouble(0), SFDouble(0.11999999731779099)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.16500000655651093), SFDouble(0), SFDouble(0.11999999731779099)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.08699999749660492), SFDouble(0), SFDouble(0.12200000137090683)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.09000000357627869), SFDouble(0.012000000104308128), SFDouble(0.18799999356269836)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.10999999940395355), SFDouble(0.010999999940395355), SFDouble(0.1899999976158142)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.12800000607967377), SFDouble(0.010999999940395355), SFDouble(0.1850000023841858)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.1420000046491623), SFDouble(0.010999999940395355), SFDouble(0.17800000309944153)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.15399999916553497), SFDouble(0.009999999776482582), SFDouble(0.1679999977350235)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            HAnimSite(
                                                              name_ : SFString('l_metatarsal_pha5'),
                                                              DEF_ : SFString('Joe_l_metatarsal_pha5'),
                                                              translation_ : SFVec3f([SFDouble(0.16500000655651093), SFDouble(0.009999999776482582), SFDouble(0.11999999731779099)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('sitebox'))]),

                                                            HAnimSite(
                                                              name_ : SFString('l_digit2'),
                                                              DEF_ : SFString('Joe_l_digit2'),
                                                              translation_ : SFVec3f([SFDouble(0.10999999940395355), SFDouble(0.010999999940395355), SFDouble(0.1899999976158142)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('sitebox'))])])])])])])])]),

                                HAnimJoint(
                                  name_ : SFString('r_hip'),
                                  DEF_ : SFString('Joe_r_hip'),
                                  center_ : SFVec3f([SFDouble(-0.10000000149011612), SFDouble(0.9200000166893005), SFDouble(0)]),
                                  skinCoordIndex_ : MFInt32([SFInt32(91), SFInt32(92), SFInt32(98), SFInt32(99), SFInt32(100), SFInt32(101)]),
                                  skinCoordWeight_ : MFFloat([SFFloat(0.6499999761581421), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_thigh'),
                                      DEF_ : SFString('Joe_r_thigh'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.10000000149011612), SFDouble(0.9200000166893005), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('jointbox'))]),

                                        Shape(
                                          geometry_ : 
                                            IndexedLineSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.10000000149011612,0.9200000166893005,0]),SFVec3f([-0.10000000149011612,0.49129998683929443,0])]))),
                                          appearance_ : 
                                            Appearance(
                                              USE_ : SFString('SegmentLine'))),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.07900000363588333), SFDouble(0.9200000166893005), SFDouble(-0.14000000059604645)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('skinsphere'))]),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.10000000149011612), SFDouble(0.8999999761581421), SFDouble(0.07500000298023224)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('skinsphere'))]),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.17100000381469727), SFDouble(0.6499999761581421), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('skinsphere'))]),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.019999999552965164), SFDouble(0.6499999761581421), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('skinsphere'))]),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.10000000149011612), SFDouble(0.6499999761581421), SFDouble(-0.07999999821186066)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('skinsphere'))]),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.10000000149011612), SFDouble(0.6499999761581421), SFDouble(0.07000000029802322)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('skinsphere'))]),

                                        HAnimSite(
                                          name_ : SFString('r_knee_crease'),
                                          DEF_ : SFString('Joe_r_knee_crease'),
                                          translation_ : SFVec3f([SFDouble(-0.11500000208616257), SFDouble(0.4659999907016754), SFDouble(-0.054999999701976776)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))]),

                                        HAnimSite(
                                          name_ : SFString('r_femoral_lateral_epicn'),
                                          DEF_ : SFString('Joe_r_femoral_lateral_epicn'),
                                          translation_ : SFVec3f([SFDouble(-0.17000000178813934), SFDouble(0.4659999907016754), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))]),

                                        HAnimSite(
                                          name_ : SFString('r_femoral_medial_epicn'),
                                          DEF_ : SFString('Joe_r_femoral_medial_epicn'),
                                          translation_ : SFVec3f([SFDouble(-0.05000000074505806), SFDouble(0.4659999907016754), SFDouble(0)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('sitebox'))])]),

                                    HAnimJoint(
                                      name_ : SFString('r_knee'),
                                      DEF_ : SFString('Joe_r_knee'),
                                      center_ : SFVec3f([SFDouble(-0.05000000074505806), SFDouble(0.4659999907016754), SFDouble(0)]),
                                      skinCoordIndex_ : MFInt32([SFInt32(362), SFInt32(363), SFInt32(364), SFInt32(365), SFInt32(366), SFInt32(367), SFInt32(368), SFInt32(369)]),
                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('r_calf'),
                                          DEF_ : SFString('Joe_r_calf'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.10000000149011612), SFDouble(0.49129998683929443), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('jointbox'))]),

                                            Shape(
                                              geometry_ : 
                                                IndexedLineSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.10000000149011612,0.49129998683929443,0]),SFVec3f([-0.10000000149011612,0.07119999825954437,0])]))),
                                              appearance_ : 
                                                Appearance(
                                                  USE_ : SFString('SegmentLine'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.11500000208616257), SFDouble(0.4659999907016754), SFDouble(0.05999999865889549)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('skinsphere'))]),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.11500000208616257), SFDouble(0.4659999907016754), SFDouble(-0.054999999701976776)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('skinsphere'))]),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.17000000178813934), SFDouble(0.4659999907016754), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('skinsphere'))]),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.05000000074505806), SFDouble(0.4659999907016754), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('skinsphere'))]),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.17000000178813934), SFDouble(0.30000001192092896), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('skinsphere'))]),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.05999999865889549), SFDouble(0.30000001192092896), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('skinsphere'))]),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.10000000149011612), SFDouble(0.30000001192092896), SFDouble(-0.05000000074505806)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('skinsphere'))]),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.10000000149011612), SFDouble(0.30000001192092896), SFDouble(0.05000000074505806)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('skinsphere'))]),

                                            HAnimSite(
                                              name_ : SFString('r_lateral_malleolus'),
                                              DEF_ : SFString('Joe_r_lateral_malleolus'),
                                              translation_ : SFVec3f([SFDouble(-0.15000000596046448), SFDouble(0.07000000029802322), SFDouble(0)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))]),

                                            HAnimSite(
                                              name_ : SFString('r_medial_malleolus'),
                                              DEF_ : SFString('Joe_r_medial_malleolus'),
                                              translation_ : SFVec3f([SFDouble(-0.08500000089406967), SFDouble(0.0860000029206276), SFDouble(0.012500000186264515)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))])]),

                                        HAnimJoint(
                                          name_ : SFString('r_ankle'),
                                          DEF_ : SFString('Joe_r_ankle'),
                                          center_ : SFVec3f([SFDouble(-0.11500000208616257), SFDouble(0.0689999982714653), SFDouble(0)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(370), SFInt32(371), SFInt32(372), SFInt32(373)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_hindfoot'),
                                              DEF_ : SFString('Joe_r_hindfoot'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.10000000149011612), SFDouble(0.07119999825954437), SFDouble(0)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('jointbox'))]),

                                                Shape(
                                                  geometry_ : 
                                                    IndexedLineSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.10000000149011612,0.07119999825954437,0]),SFVec3f([-0.10000000149011612,0.014999999664723873,-0.009999999776482582])]))),
                                                  appearance_ : 
                                                    Appearance(
                                                      USE_ : SFString('SegmentLine'))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.15000000596046448), SFDouble(0.07000000029802322), SFDouble(0)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))]),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.08500000089406967), SFDouble(0.0860000029206276), SFDouble(0.012500000186264515)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))]),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.11500000208616257), SFDouble(0.0689999982714653), SFDouble(-0.04500000178813934)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))]),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.11699999868869781), SFDouble(0.09749999642372131), SFDouble(0.061500001698732376)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))]),

                                                HAnimSite(
                                                  name_ : SFString('r_sphyrion'),
                                                  DEF_ : SFString('Joe_r_sphyrion'),
                                                  translation_ : SFVec3f([SFDouble(-0.09000000357627869), SFDouble(0.0560000017285347), SFDouble(0.012500000186264515)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))]),

                                                HAnimSite(
                                                  name_ : SFString('r_calcaneous_post'),
                                                  DEF_ : SFString('Joe_r_calcaneous_post'),
                                                  translation_ : SFVec3f([SFDouble(-0.11500000208616257), SFDouble(0.03999999910593033), SFDouble(-0.054999999701976776)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))])]),

                                            HAnimJoint(
                                              name_ : SFString('r_subtalar'),
                                              DEF_ : SFString('Joe_r_subtalar'),
                                              center_ : SFVec3f([SFDouble(-0.10000000149011612), SFDouble(0.014999999664723873), SFDouble(-0.009999999776482582)]),
                                              skinCoordIndex_ : MFInt32([SFInt32(374), SFInt32(375), SFInt32(376)]),
                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_midproximal'),
                                                  DEF_ : SFString('Joe_r_midproximal'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.10000000149011612), SFDouble(0.014999999664723873), SFDouble(-0.009999999776482582)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('jointbox'))]),

                                                    Shape(
                                                      geometry_ : 
                                                        IndexedLineSet(
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.10000000149011612,0.014999999664723873,-0.009999999776482582]),SFVec3f([-0.10000000149011612,0.019999999552965164,0.07000000029802322])]))),
                                                      appearance_ : 
                                                        Appearance(
                                                          USE_ : SFString('SegmentLine'))),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.13750000298023224), SFDouble(0.006000000052154064), SFDouble(-0.029999999329447746)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('skinsphere'))]),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.0949999988079071), SFDouble(0.006000000052154064), SFDouble(-0.029999999329447746)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('skinsphere'))]),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.0949999988079071), SFDouble(0.006000000052154064), SFDouble(-0.029999999329447746)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('skinsphere'))])]),

                                                HAnimJoint(
                                                  name_ : SFString('r_midtarsal'),
                                                  DEF_ : SFString('Joe_r_midtarsal'),
                                                  center_ : SFVec3f([SFDouble(-0.11500000208616257), SFDouble(0.03700000047683716), SFDouble(0.09000000357627869)]),
                                                  skinCoordIndex_ : MFInt32([SFInt32(377), SFInt32(378), SFInt32(379), SFInt32(380)]),
                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('r_middistal'),
                                                      DEF_ : SFString('Joe_r_middistal'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.10000000149011612), SFDouble(0.019999999552965164), SFDouble(0.07000000029802322)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('jointbox'))]),

                                                        Shape(
                                                          geometry_ : 
                                                            IndexedLineSet(
                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-0.10000000149011612,0.019999999552965164,0.07000000029802322]),SFVec3f([-0.10000000149011612,0.009999999776482582,0.14000000059604645])]))),
                                                          appearance_ : 
                                                            Appearance(
                                                              USE_ : SFString('SegmentLine'))),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.11500000208616257), SFDouble(0.05999999865889549), SFDouble(0.10000000149011612)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('skinsphere'))]),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.11500000208616257), SFDouble(0), SFDouble(0.07000000029802322)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('skinsphere'))]),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.16500000655651093), SFDouble(0), SFDouble(0.07000000029802322)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('skinsphere'))]),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.16500000655651093), SFDouble(0), SFDouble(0.07000000029802322)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('skinsphere'))]),

                                                        HAnimSite(
                                                          name_ : SFString('r_metatarsal_pha1'),
                                                          DEF_ : SFString('Joe_r_metatarsal_pha1'),
                                                          translation_ : SFVec3f([SFDouble(-0.11500000208616257), SFDouble(0.019999999552965164), SFDouble(0.12200000137090683)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('sitebox'))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_metatarsal'),
                                                      DEF_ : SFString('Joe_r_metatarsal'),
                                                      center_ : SFVec3f([SFDouble(-0.10000000149011612), SFDouble(0.009999999776482582), SFDouble(0.14000000059604645)]),
                                                      skinCoordIndex_ : MFInt32([SFInt32(381), SFInt32(382), SFInt32(383), SFInt32(384), SFInt32(385), SFInt32(386), SFInt32(387), SFInt32(388), SFInt32(389)]),
                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('r_forefoot'),
                                                          DEF_ : SFString('Joe_r_forefoot'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.10859999805688858), SFDouble(0.009999999776482582), SFDouble(0.14000000059604645)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('jointbox'))]),

                                                            Shape(
                                                              geometry_ : 
                                                                IndexedLineSet(
                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([-0.10000000149011612,0.009999999776482582,0.14000000059604645]),SFVec3f([-0.10429999977350235,0.0015999999595806003,0.20000000298023224])]))),
                                                              appearance_ : 
                                                                Appearance(
                                                                  USE_ : SFString('SegmentLine'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.11500000208616257), SFDouble(0.03999999910593033), SFDouble(0.12999999523162842)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.125), SFDouble(0), SFDouble(0.11999999731779099)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.16500000655651093), SFDouble(0), SFDouble(0.11999999731779099)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.08699999749660492), SFDouble(0), SFDouble(0.12200000137090683)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.09000000357627869), SFDouble(0.012000000104308128), SFDouble(0.18799999356269836)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.10999999940395355), SFDouble(0.010999999940395355), SFDouble(0.1899999976158142)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.12800000607967377), SFDouble(0.010999999940395355), SFDouble(0.1850000023841858)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.1420000046491623), SFDouble(0.010999999940395355), SFDouble(0.17800000309944153)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.15399999916553497), SFDouble(0.009999999776482582), SFDouble(0.1679999977350235)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('skinsphere'))]),

                                                            HAnimSite(
                                                              name_ : SFString('r_metatarsal_pha5'),
                                                              DEF_ : SFString('Joe_r_metatarsal_pha5'),
                                                              translation_ : SFVec3f([SFDouble(-0.16500000655651093), SFDouble(0.009999999776482582), SFDouble(0.11999999731779099)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('sitebox'))]),

                                                            HAnimSite(
                                                              name_ : SFString('r_digit2'),
                                                              DEF_ : SFString('Joe_r_digit2'),
                                                              translation_ : SFVec3f([SFDouble(-0.10999999940395355), SFDouble(0.010999999940395355), SFDouble(0.1899999976158142)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('sitebox'))])])])])])])])])]),

                            HAnimJoint(
                              name_ : SFString('vl5'),
                              DEF_ : SFString('Joe_vl5'),
                              center_ : SFVec3f([SFDouble(0), SFDouble(1.0449999570846558), SFDouble(-0.0949999988079071)]),
                              skinCoordIndex_ : MFInt32([SFInt32(28), SFInt32(76)]),
                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('toPelvis'),
                                  DEF_ : SFString('Joe_toPelvisMarker'),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        IndexedLineSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,1.0449999570846558,-0.0949999988079071]),SFVec3f([0,0.914900004863739,0.0015999999595806003])]))),
                                      appearance_ : 
                                        Appearance(
                                          USE_ : SFString('SegmentLine')))]),

                                HAnimSegment(
                                  name_ : SFString('l5'),
                                  DEF_ : SFString('Joe_l5'),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        IndexedLineSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,1.0449999570846558,-0.0949999988079071]),SFVec3f([0,1.0679999589920044,-0.08500000089406967])]))),
                                      appearance_ : 
                                        Appearance(
                                          USE_ : SFString('SegmentLine'))),

                                    HAnimSite(
                                      name_ : SFString('waist_preferred_post'),
                                      DEF_ : SFString('Joe_waist_preferred_post'),
                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.0915000438690186), SFDouble(-0.10909999907016754)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('navel'),
                                      DEF_ : SFString('Joe_navel'),
                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.0722500085830688), SFDouble(0.09000000357627869)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))])]),

                                HAnimJoint(
                                  name_ : SFString('vl4'),
                                  DEF_ : SFString('Joe_vl4'),
                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.068), SFDouble(-0.085)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l4'),
                                      DEF_ : SFString('Joe_l4'),
                                      children_ : [
                                        Shape(
                                          geometry_ : 
                                            IndexedLineSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,1.0679999589920044,-0.08500000089406967]),SFVec3f([0,1.0920000076293945,-0.07249999791383743])]))),
                                          appearance_ : 
                                            Appearance(
                                              USE_ : SFString('SegmentLine'))),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.068), SFDouble(-0.085)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('jointbox'))])]),

                                    HAnimJoint(
                                      name_ : SFString('vl3'),
                                      DEF_ : SFString('Joe_vl3'),
                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.092), SFDouble(-0.0725)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l3'),
                                          DEF_ : SFString('Joe_l3'),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                IndexedLineSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,1.092,-0.0725]),SFVec3f([0,1.12,-0.065])]))),
                                              appearance_ : 
                                                Appearance(
                                                  USE_ : SFString('SegmentLine'))),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.092), SFDouble(-0.0725)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('jointbox'))])]),

                                        HAnimJoint(
                                          name_ : SFString('vl2'),
                                          DEF_ : SFString('Joe_vl2'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.12), SFDouble(-0.065)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(16), SFInt32(18), SFInt32(25), SFInt32(83), SFInt32(84), SFInt32(85), SFInt32(86), SFInt32(87), SFInt32(88)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.7), SFFloat(1), SFFloat(0.8)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l2'),
                                              DEF_ : SFString('Joe_l2'),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    IndexedLineSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0,1.1200000047683716,-0.06499999761581421]),SFVec3f([0,1.145900011062622,-0.0625])]))),
                                                  appearance_ : 
                                                    Appearance(
                                                      USE_ : SFString('SegmentLine'))),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.1200000047683716), SFDouble(-0.06499999761581421)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('jointbox'))]),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.08699999749660492), SFDouble(1.190000057220459), SFDouble(-0.09000000357627869)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))]),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.08699999749660492), SFDouble(1.190000057220459), SFDouble(-0.09000000357627869)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))]),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.1720000058412552), SFDouble(1.3200000524520874), SFDouble(-0.029999999329447746)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))]),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.1720000058412552), SFDouble(1.3200000524520874), SFDouble(-0.029999999329447746)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))]),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.15000000596046448), SFDouble(1.2300000190734863), SFDouble(-0.014999999664723873)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))]),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.15000000596046448), SFDouble(1.2300000190734863), SFDouble(-0.014999999664723873)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('skinsphere'))]),

                                                HAnimSite(
                                                  name_ : SFString('r_rib10'),
                                                  DEF_ : SFString('Joe_r_rib10'),
                                                  translation_ : SFVec3f([SFDouble(-0.08699999749660492), SFDouble(1.190000057220459), SFDouble(0.09000000357627869)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))]),

                                                HAnimSite(
                                                  name_ : SFString('l_rib10'),
                                                  DEF_ : SFString('Joe_l_rib10'),
                                                  translation_ : SFVec3f([SFDouble(0.08699999749660492), SFDouble(1.190000057220459), SFDouble(0.09000000357627869)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))]),

                                                HAnimSite(
                                                  name_ : SFString('rib10_midspine'),
                                                  DEF_ : SFString('Joe_rib10_midspine'),
                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.1908), SFDouble(-0.1113)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('sitebox'))])]),

                                            HAnimJoint(
                                              name_ : SFString('vl1'),
                                              DEF_ : SFString('Joe_vl1'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.1459), SFDouble(-0.0625)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l1'),
                                                  DEF_ : SFString('Joe_l1'),
                                                  children_ : [
                                                    Shape(
                                                      geometry_ : 
                                                        IndexedLineSet(
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0,1.1459,-0.0625]),SFVec3f([0,1.179,-0.068])]))),
                                                      appearance_ : 
                                                        Appearance(
                                                          USE_ : SFString('SegmentLine'))),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.1459), SFDouble(-0.0625)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('jointbox'))])]),

                                                HAnimJoint(
                                                  name_ : SFString('vt12'),
                                                  DEF_ : SFString('Joe_vt12'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.1790000200271606), SFDouble(-0.06800000369548798)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('t12'),
                                                      DEF_ : SFString('Joe_t12'),
                                                      children_ : [
                                                        Shape(
                                                          geometry_ : 
                                                            IndexedLineSet(
                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0,1.1790000200271606,-0.06800000369548798]),SFVec3f([0,1.2419999837875366,-0.09000000357627869])]))),
                                                          appearance_ : 
                                                            Appearance(
                                                              USE_ : SFString('SegmentLine'))),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.1790000200271606), SFDouble(-0.06800000369548798)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('jointbox'))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('vt11'),
                                                      DEF_ : SFString('Joe_vt11'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.267899990081787), SFDouble(-0.08100000023841858)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('t11'),
                                                          DEF_ : SFString('Joe_t11'),
                                                          children_ : [
                                                            Shape(
                                                              geometry_ : 
                                                                IndexedLineSet(
                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0,1.2144999504089355,-0.0754999965429306]),SFVec3f([0,1.2419999837875366,-0.09000000357627869])]))),
                                                              appearance_ : 
                                                                Appearance(
                                                                  USE_ : SFString('SegmentLine'))),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.2144999504089355), SFDouble(-0.0754999965429306)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('jointbox'))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('vt10'),
                                                          DEF_ : SFString('Joe_vt10'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.2419999837875366), SFDouble(-0.09000000357627869)]),
                                                          skinCoordIndex_ : MFInt32([SFInt32(15)]),
                                                          skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('t10'),
                                                              DEF_ : SFString('Joe_t10'),
                                                              children_ : [
                                                                Shape(
                                                                  geometry_ : 
                                                                    IndexedLineSet(
                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0,1.2419999837875366,-0.09000000357627869]),SFVec3f([0,1.2680000066757202,-0.10000000149011612])]))),
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      USE_ : SFString('SegmentLine'))),

                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.2419999837875366), SFDouble(-0.09000000357627869)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      USE_ : SFString('jointbox'))]),

                                                                HAnimSite(
                                                                  name_ : SFString('substernale'),
                                                                  DEF_ : SFString('Joe_substernale'),
                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.25), SFDouble(0.11299999803304672)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      USE_ : SFString('sitebox'))])]),

                                                            HAnimJoint(
                                                              name_ : SFString('vt9'),
                                                              DEF_ : SFString('Joe_vt9'),
                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.2680000066757202), SFDouble(-0.10000000149011612)]),
                                                              skinCoordIndex_ : MFInt32([SFInt32(13), SFInt32(14)]),
                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('t9'),
                                                                  DEF_ : SFString('Joe_t9'),
                                                                  children_ : [
                                                                    Shape(
                                                                      geometry_ : 
                                                                        IndexedLineSet(
                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0,1.2680000066757202,-0.10000000149011612]),SFVec3f([0,1.2940000295639038,-0.10999999940395355])]))),
                                                                      appearance_ : 
                                                                        Appearance(
                                                                          USE_ : SFString('SegmentLine'))),

                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.2680000066757202), SFDouble(-0.10000000149011612)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          USE_ : SFString('jointbox'))]),

                                                                    HAnimSite(
                                                                      name_ : SFString('r_thelion'),
                                                                      DEF_ : SFString('Joe_r_thelion'),
                                                                      translation_ : SFVec3f([SFDouble(-0.11349999904632568), SFDouble(1.3179999589920044), SFDouble(0.0949999988079071)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          USE_ : SFString('sitebox'))]),

                                                                    HAnimSite(
                                                                      name_ : SFString('l_thelion'),
                                                                      DEF_ : SFString('Joe_l_thelion'),
                                                                      translation_ : SFVec3f([SFDouble(0.11349999904632568), SFDouble(1.3179999589920044), SFDouble(0.0949999988079071)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          USE_ : SFString('sitebox'))])]),

                                                                HAnimJoint(
                                                                  name_ : SFString('vt8'),
                                                                  DEF_ : SFString('Joe_vt8'),
                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.2940000295639038), SFDouble(-0.10999999940395355)]),
                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      name_ : SFString('t8'),
                                                                      DEF_ : SFString('Joe_t8'),
                                                                      children_ : [
                                                                        Shape(
                                                                          geometry_ : 
                                                                            IndexedLineSet(
                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                              coord_ : 
                                                                                Coordinate(
                                                                                  point_ : MFVec3f([SFVec3f([0,1.2940000295639038,-0.10999999940395355]),SFVec3f([0,1.3519999980926514,-0.11999999731779099])]))),
                                                                          appearance_ : 
                                                                            Appearance(
                                                                              USE_ : SFString('SegmentLine'))),

                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.2940000295639038), SFDouble(-0.10999999940395355)]),
                                                                          children_ : [
                                                                            Shape(
                                                                              USE_ : SFString('jointbox'))])]),

                                                                    HAnimJoint(
                                                                      name_ : SFString('vt7'),
                                                                      DEF_ : SFString('Joe_vt7'),
                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.3229999542236328), SFDouble(-0.11550000309944153)]),
                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                      children_ : [
                                                                        HAnimSegment(
                                                                          name_ : SFString('t7'),
                                                                          DEF_ : SFString('Joe_t7'),
                                                                          children_ : [
                                                                            Shape(
                                                                              geometry_ : 
                                                                                IndexedLineSet(
                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                  coord_ : 
                                                                                    Coordinate(
                                                                                      point_ : MFVec3f([SFVec3f([0,1.3519999980926514,-0.11999999731779099]),SFVec3f([0,1.38100004196167,-0.12349999696016312])]))),
                                                                              appearance_ : 
                                                                                Appearance(
                                                                                  USE_ : SFString('SegmentLine'))),

                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.3229999542236328), SFDouble(-0.11550000309944153)]),
                                                                              children_ : [
                                                                                Shape(
                                                                                  USE_ : SFString('jointbox'))])]),

                                                                        HAnimJoint(
                                                                          name_ : SFString('vt6'),
                                                                          DEF_ : SFString('Joe_vt6'),
                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.3519999980926514), SFDouble(-0.11999999731779099)]),
                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                          children_ : [
                                                                            HAnimSegment(
                                                                              name_ : SFString('t6'),
                                                                              DEF_ : SFString('Joe_t6'),
                                                                              children_ : [
                                                                                Shape(
                                                                                  geometry_ : 
                                                                                    IndexedLineSet(
                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                      coord_ : 
                                                                                        Coordinate(
                                                                                          point_ : MFVec3f([SFVec3f([0,1.38100004196167,-0.12349999696016312]),SFVec3f([0,1.409999966621399,-0.12349999696016312])]))),
                                                                                  appearance_ : 
                                                                                    Appearance(
                                                                                      USE_ : SFString('SegmentLine'))),

                                                                                Transform(
                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.3519999980926514), SFDouble(-0.11999999731779099)]),
                                                                                  children_ : [
                                                                                    Shape(
                                                                                      USE_ : SFString('jointbox'))])]),

                                                                            HAnimJoint(
                                                                              name_ : SFString('vt5'),
                                                                              DEF_ : SFString('Joe_vt5'),
                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.38100004196167), SFDouble(-0.12349999696016312)]),
                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                              children_ : [
                                                                                HAnimSegment(
                                                                                  name_ : SFString('t5'),
                                                                                  DEF_ : SFString('Joe_t5'),
                                                                                  children_ : [
                                                                                    Shape(
                                                                                      geometry_ : 
                                                                                        IndexedLineSet(
                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                          coord_ : 
                                                                                            Coordinate(
                                                                                              point_ : MFVec3f([SFVec3f([0,1.409999966621399,-0.12349999696016312]),SFVec3f([0,1.437999963760376,-0.11999999731779099])]))),
                                                                                      appearance_ : 
                                                                                        Appearance(
                                                                                          USE_ : SFString('SegmentLine'))),

                                                                                    Transform(
                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.38100004196167), SFDouble(-0.12349999696016312)]),
                                                                                      children_ : [
                                                                                        Shape(
                                                                                          USE_ : SFString('jointbox'))])]),

                                                                                HAnimJoint(
                                                                                  name_ : SFString('vt4'),
                                                                                  DEF_ : SFString('Joe_vt4'),
                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.409999966621399), SFDouble(-0.12349999696016312)]),
                                                                                  skinCoordIndex_ : MFInt32([SFInt32(81)]),
                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                  children_ : [
                                                                                    HAnimSegment(
                                                                                      name_ : SFString('t4'),
                                                                                      DEF_ : SFString('Joe_t4'),
                                                                                      children_ : [
                                                                                        Shape(
                                                                                          geometry_ : 
                                                                                            IndexedLineSet(
                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                              coord_ : 
                                                                                                Coordinate(
                                                                                                  point_ : MFVec3f([SFVec3f([0,1.409999966621399,-0.12349999696016312]),SFVec3f([0,1.437999963760376,-0.11999999731779099])]))),
                                                                                          appearance_ : 
                                                                                            Appearance(
                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                        Transform(
                                                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.409999966621399), SFDouble(-0.12349999696016312)]),
                                                                                          children_ : [
                                                                                            Shape(
                                                                                              USE_ : SFString('jointbox'))]),

                                                                                        Transform(
                                                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.409999966621399), SFDouble(-0.14499999582767487)]),
                                                                                          children_ : [
                                                                                            Shape(
                                                                                              USE_ : SFString('skinsphere'))])]),

                                                                                    HAnimJoint(
                                                                                      name_ : SFString('vt3'),
                                                                                      DEF_ : SFString('Joe_vt3'),
                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.437999963760376), SFDouble(-0.11999999731779099)]),
                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                      children_ : [
                                                                                        HAnimSegment(
                                                                                          name_ : SFString('t3'),
                                                                                          DEF_ : SFString('Joe_t3'),
                                                                                          children_ : [
                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                IndexedLineSet(
                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0,1.437999963760376,-0.11999999731779099]),SFVec3f([0,1.468000054359436,-0.10499999672174454])]))),
                                                                                              appearance_ : 
                                                                                                Appearance(
                                                                                                  USE_ : SFString('SegmentLine'))),

                                                                                            Transform(
                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.437999963760376), SFDouble(-0.11999999731779099)]),
                                                                                              children_ : [
                                                                                                Shape(
                                                                                                  USE_ : SFString('jointbox'))])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('vt2'),
                                                                                          DEF_ : SFString('Joe_vt2'),
                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.468000054359436), SFDouble(-0.10499999672174454)]),
                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('t2'),
                                                                                              DEF_ : SFString('Joe_t2'),
                                                                                              children_ : [
                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    IndexedLineSet(
                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0,1.468000054359436,-0.10499999672174454]),SFVec3f([0,1.496999979019165,-0.09000000357627869])]))),
                                                                                                  appearance_ : 
                                                                                                    Appearance(
                                                                                                      USE_ : SFString('SegmentLine'))),

                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.468000054359436), SFDouble(-0.10499999672174454)]),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      USE_ : SFString('jointbox'))])]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('vt1'),
                                                                                              DEF_ : SFString('Joe_vt1'),
                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.497), SFDouble(-0.09)]),
                                                                                              skinCoordIndex_ : MFInt32([SFInt32(11), SFInt32(24)]),
                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('t1'),
                                                                                                  DEF_ : SFString('Joe_t1'),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        IndexedLineSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0,1.497,-0.09]),SFVec3f([0,1.525,-0.072])]))),
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          USE_ : SFString('SegmentLine'))),

                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.497), SFDouble(-0.09)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('suprasternale'),
                                                                                                      DEF_ : SFString('Joe_suprasternale'),
                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.440000057220459), SFDouble(0.029999999329447746)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('cervicale'),
                                                                                                      DEF_ : SFString('Joe_cervicale'),
                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.5299999713897705), SFDouble(-0.08399999886751175)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('vc7'),
                                                                                                  DEF_ : SFString('Joe_vc7'),
                                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.524999976158142), SFDouble(-0.07199999690055847)]),
                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(74), SFInt32(75)]),
                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('c7'),
                                                                                                      DEF_ : SFString('Joe_c7'),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            IndexedLineSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0,1.524999976158142,-0.07199999690055847]),SFVec3f([0.0820000022649765,1.448799967765808,-0.03530000150203705]),SFVec3f([-0.029999999329447746,1.4600000381469727,0.019999999552965164]),SFVec3f([0,1.5399999618530273,-0.05000000074505806])]))),
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.524999976158142), SFDouble(-0.07199999690055847)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_neck_base'),
                                                                                                          DEF_ : SFString('Joe_r_neck_base'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.06459999829530716), SFDouble(1.5148999691009521), SFDouble(-0.03849999979138374)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_neck_base'),
                                                                                                          DEF_ : SFString('Joe_l_neck_base'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.06459999829530716), SFDouble(1.5148999691009521), SFDouble(-0.03849999979138374)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('sitebox'))])]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('vc6'),
                                                                                                      DEF_ : SFString('Joe_vc6'),
                                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.5399999618530273), SFDouble(-0.05000000074505806)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('c6'),
                                                                                                          DEF_ : SFString('Joe_c6'),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                IndexedLineSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0,1.5399999618530273,-0.05000000074505806]),SFVec3f([0,1.5674999952316284,-0.025599999353289604])]))),
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  USE_ : SFString('SegmentLine'))),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.5399999618530273), SFDouble(-0.05000000074505806)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('jointbox'))])]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('vc5'),
                                                                                                          DEF_ : SFString('Joe_vc5'),
                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.5520000457763672), SFDouble(-0.03500000014901161)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('c5'),
                                                                                                              DEF_ : SFString('Joe_c5'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.5520000457763672), SFDouble(-0.03500000014901161)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    IndexedLineSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0,1.5674999952316284,-0.025599999353289604]),SFVec3f([0,1.5822499990463257,-0.01850000023841858])]))),
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      USE_ : SFString('SegmentLine')))]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('vc4'),
                                                                                                              DEF_ : SFString('Joe_vc4'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.5674999952316284), SFDouble(-0.025599999353289604)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('c4'),
                                                                                                                  DEF_ : SFString('Joe_c4'),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        IndexedLineSet(
                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0,1.5822499990463257,-0.01850000023841858]),SFVec3f([0,1.5950000286102295,-0.017500000074505806])]))),
                                                                                                                      appearance_ : 
                                                                                                                        Appearance(
                                                                                                                          USE_ : SFString('SegmentLine'))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.5674999952316284), SFDouble(-0.025599999353289604)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('jointbox'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('vc3'),
                                                                                                                  DEF_ : SFString('Joe_vc3'),
                                                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.5822499990463257), SFDouble(-0.01850000023841858)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('c3'),
                                                                                                                      DEF_ : SFString('Joe_c3'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0,1.5950000286102295,-0.017500000074505806]),SFVec3f([0,1.6100000143051147,-0.014999999664723873])]))),
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.5822499990463257), SFDouble(-0.01850000023841858)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('vc2'),
                                                                                                                      DEF_ : SFString('Joe_vc2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.5950000286102295), SFDouble(-0.017500000074505806)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('c2'),
                                                                                                                          DEF_ : SFString('Joe_c2'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0,1.6100000143051147,-0.014999999664723873]),SFVec3f([0,1.614400029182434,-0.0034000000450760126])]))),
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine'))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.5950000286102295), SFDouble(-0.017500000074505806)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('vc1'),
                                                                                                                          DEF_ : SFString('Joe_vc1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.6100000143051147), SFDouble(-0.014999999664723873)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('c1'),
                                                                                                                              DEF_ : SFString('Joe_c1'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,1.614400029182434,-0.0034000000450760126]),SFVec3f([0,1.6299999952316284,-0.009999999776482582])]))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine'))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.6100000143051147), SFDouble(-0.014999999664723873)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('skullbase'),
                                                                                                                              DEF_ : SFString('Joe_skullbase'),
                                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.6299999952316284), SFDouble(-0.009999999776482582)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(9)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('skull'),
                                                                                                                                  DEF_ : SFString('Joe_skull'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0,1.6299999952316284,-0.009999999776482582]),SFVec3f([0.03400000184774399,1.659000039100647,0.05999999865889549]),SFVec3f([-0.03400000184774399,1.6549999713897705,0.06499999761581421])]))),
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine'))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.6299999952316284), SFDouble(-0.009999999776482582)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('skull_tip'),
                                                                                                                                      DEF_ : SFString('Joe_skull_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.7699999809265137), SFDouble(0)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('sellion'),
                                                                                                                                      DEF_ : SFString('Joe_sellion'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.6649999618530273), SFDouble(0.09000000357627869)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_infraorbitale'),
                                                                                                                                      DEF_ : SFString('Joe_r_infraorbitale'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.032999999821186066), SFDouble(1.6200000047683716), SFDouble(0.08699999749660492)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_infraorbitale'),
                                                                                                                                      DEF_ : SFString('Joe_l_infraorbitale'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.032999999821186066), SFDouble(1.6200000047683716), SFDouble(0.08699999749660492)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('supramenton'),
                                                                                                                                      DEF_ : SFString('Joe_supramenton'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.5499999523162842), SFDouble(0.09700000286102295)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_tragion'),
                                                                                                                                      DEF_ : SFString('Joe_r_tragion'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.07699999958276749), SFDouble(1.6399999856948853), SFDouble(-0.009999999776482582)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_gonion'),
                                                                                                                                      DEF_ : SFString('Joe_r_gonion'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.052000001072883606), SFDouble(1.5800000429153442), SFDouble(0.014999999664723873)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_tragion'),
                                                                                                                                      DEF_ : SFString('Joe_l_tragion'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.07699999958276749), SFDouble(1.6399999856948853), SFDouble(-0.009999999776482582)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_gonion'),
                                                                                                                                      DEF_ : SFString('Joe_l_gonion'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.06310000270605087), SFDouble(1.5800000429153442), SFDouble(0.014999999664723873)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('nuchale'),
                                                                                                                                      DEF_ : SFString('Joe_nuchale'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.625), SFDouble(-0.0925000011920929)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_eyeball_joint'),
                                                                                                                                  DEF_ : SFString('Joe_l_eyeball_joint'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.034), SFDouble(1.659), SFDouble(0.06)]),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('l_eyeball'),
                                                                                                                                      DEF_ : SFString('Joe_l_eyeball'),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedLineSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0.034,1.655,0.065]),SFVec3f([-0.034,1.655,0.065])]))),
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                                                                        Transform(
                                                                                                                                          scale_ : SFVec3f([SFDouble(1), SFDouble(1), SFDouble(1.4)]),
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.034), SFDouble(1.655), SFDouble(0.065)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox'))])])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_eyeball_joint'),
                                                                                                                                  DEF_ : SFString('Joe_r_eyeball_joint'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.034), SFDouble(1.659), SFDouble(0.06)]),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('r_eyeball'),
                                                                                                                                      DEF_ : SFString('Joe_r_eyeball'),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedLineSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0.034,1.655,0.065]),SFVec3f([-0.034,1.655,0.065])]))),
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                                                                        Transform(
                                                                                                                                          scale_ : SFVec3f([SFDouble(1), SFDouble(1), SFDouble(1.4)]),
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.034), SFDouble(1.655), SFDouble(0.065)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox'))])])])])])])])])])])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('l_sternoclavicular'),
                                                                                                  DEF_ : SFString('Joe_l_sternoclavicular'),
                                                                                                  center_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(12)]),
                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('l_clavicle'),
                                                                                                      DEF_ : SFString('Joe_l_clavicle'),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            IndexedLineSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.0820000022649765,1.448799967765808,-0.03530000150203705]),SFVec3f([0.09619999676942825,1.426900029182434,-0.042399998754262924])]))),
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0.0820000022649765), SFDouble(1.448799967765808), SFDouble(-0.03530000150203705)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_clavicale'),
                                                                                                          DEF_ : SFString('Joe_l_clavicale'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.029999999329447746), SFDouble(1.4600000381469727), SFDouble(0.03500000014901161)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('sitebox'))])]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('l_acromioclavicular'),
                                                                                                      DEF_ : SFString('Joe_l_acromioclavicular'),
                                                                                                      center_ : SFVec3f([SFDouble(0.09619999676942825), SFDouble(1.426900029182434), SFDouble(-0.042399998754262924)]),
                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(79)]),
                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('l_scapula'),
                                                                                                          DEF_ : SFString('Joe_l_scapula'),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                IndexedLineSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.09619999676942825,1.426900029182434,-0.042399998754262924]),SFVec3f([0.20000000298023224,1.440000057220459,-0.03999999910593033])]))),
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  USE_ : SFString('SegmentLine'))),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.09619999676942825), SFDouble(1.426900029182434), SFDouble(-0.042399998754262924)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.10999999940395355), SFDouble(1.4270000457763672), SFDouble(-0.13750000298023224)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('skinsphere'))]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_acromion'),
                                                                                                              DEF_ : SFString('Joe_l_acromion'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.17499999701976776), SFDouble(1.4824999570846558), SFDouble(-0.05999999865889549)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_axilla_ant'),
                                                                                                              DEF_ : SFString('Joe_l_axilla_ant'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.17000000178813934), SFDouble(1.3799999952316284), SFDouble(0.007000000216066837)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_axilla_post'),
                                                                                                              DEF_ : SFString('Joe_l_axilla_post'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.1599999964237213), SFDouble(1.3799999952316284), SFDouble(-0.125)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))])]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('l_shoulder'),
                                                                                                          DEF_ : SFString('Joe_l_shoulder'),
                                                                                                          center_ : SFVec3f([SFDouble(0.20000000298023224), SFDouble(1.440000057220459), SFDouble(-0.03999999910593033)]),
                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(41), SFInt32(42), SFInt32(44), SFInt32(80), SFInt32(102), SFInt32(103), SFInt32(104), SFInt32(105)]),
                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('l_upperarm'),
                                                                                                              DEF_ : SFString('Joe_l_upperarm'),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    IndexedLineSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.2029000073671341,1.440000057220459,-0.03869999945163727]),SFVec3f([0.20000000298023224,1.138800024986267,-0.03999999910593033])]))),
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      USE_ : SFString('SegmentLine'))),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.20000000298023224), SFDouble(1.440000057220459), SFDouble(-0.03999999910593033)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.23499999940395355), SFDouble(1.4199999570846558), SFDouble(-0.0625)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))]),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.25), SFDouble(1.2699999809265137), SFDouble(-0.03999999910593033)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))]),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.17000000178813934), SFDouble(1.2699999809265137), SFDouble(-0.03999999910593033)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))]),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.20000000298023224), SFDouble(1.2699999809265137), SFDouble(-0.09000000357627869)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))]),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.20000000298023224), SFDouble(1.2699999809265137), SFDouble(0.019999999552965164)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_humeral_medial_epicn'),
                                                                                                                  DEF_ : SFString('Joe_l_humeral_medial_epicn'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.16500000655651093), SFDouble(1.138800024986267), SFDouble(-0.03999999910593033)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_radiale'),
                                                                                                                  DEF_ : SFString('Joe_l_radiale'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.23000000417232513), SFDouble(1.1330000162124634), SFDouble(-0.054999999701976776)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_humeral_lateral_epicn'),
                                                                                                                  DEF_ : SFString('Joe_l_humeral_lateral_epicn'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.24400000274181366), SFDouble(1.138800024986267), SFDouble(-0.03999999910593033)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_elbow'),
                                                                                                              DEF_ : SFString('Joe_l_elbow'),
                                                                                                              center_ : SFVec3f([SFDouble(0.20000000298023224), SFDouble(1.138800024986267), SFDouble(-0.03999999910593033)]),
                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(45), SFInt32(46), SFInt32(47), SFInt32(109), SFInt32(110), SFInt32(111), SFInt32(112), SFInt32(113), SFInt32(115), SFInt32(116), SFInt32(117), SFInt32(118)]),
                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_forearm'),
                                                                                                                  DEF_ : SFString('Joe_l_forearm'),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        IndexedLineSet(
                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.20000000298023224,1.138800024986267,-0.03999999910593033]),SFVec3f([0.20000000298023224,0.8700000047683716,-0.03999999910593033])]))),
                                                                                                                      appearance_ : 
                                                                                                                        Appearance(
                                                                                                                          USE_ : SFString('SegmentLine'))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.20000000298023224), SFDouble(1.138800024986267), SFDouble(-0.03999999910593033)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.20000000298023224), SFDouble(1.138800024986267), SFDouble(-0.013000000268220901)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('skinsphere'))]),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.22499999403953552), SFDouble(1), SFDouble(-0.009999999776482582)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('skinsphere'))]),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.22499999403953552), SFDouble(1), SFDouble(-0.07000000029802322)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('skinsphere'))]),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1850000023841858), SFDouble(1), SFDouble(-0.009999999776482582)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('skinsphere'))]),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1850000023841858), SFDouble(1), SFDouble(-0.07000000029802322)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('skinsphere'))]),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('l_radial_styloid'),
                                                                                                                      DEF_ : SFString('Joe_l_radial_styloid'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.19009999930858612), SFDouble(0.8644999861717224), SFDouble(-0.04149999842047691)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('l_olecranon'),
                                                                                                                      DEF_ : SFString('Joe_l_olecranon'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.20000000298023224), SFDouble(1.138800024986267), SFDouble(-0.07999999821186066)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_wrist'),
                                                                                                                  DEF_ : SFString('Joe_l_wrist'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.20000000298023224), SFDouble(0.8700000047683716), SFDouble(-0.03999999910593033)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(119), SFInt32(120), SFInt32(121), SFInt32(122), SFInt32(123), SFInt32(124), SFInt32(125), SFInt32(126)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_hand'),
                                                                                                                      DEF_ : SFString('Joe_l_hand'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.20000000298023224,0.8700000047683716,-0.03999999910593033]),SFVec3f([0.1923999935388565,0.8471999764442444,-0.05339999869465828]),SFVec3f([0.19830000400543213,0.8023999929428101,-0.02800000086426735]),SFVec3f([0.19869999587535858,0.8029000163078308,-0.05299999937415123]),SFVec3f([0.1956000030040741,0.8019000291824341,-0.07940000295639038]),SFVec3f([0.19249999523162842,0.8065999746322632,-0.10360000282526016])]))),
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.20000000298023224), SFDouble(0.8700000047683716), SFDouble(-0.03999999910593033)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('l_metacarpal_pha2'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpal_pha2'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.20090000331401825), SFDouble(0.8138999938964844), SFDouble(-0.02370000071823597)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('l_ulnar_styloid'),
                                                                                                                          DEF_ : SFString('Joe_l_ulnar_styloid'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.2142000049352646), SFDouble(0.8529000282287598), SFDouble(-0.06480000168085098)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('l_metacarpal_pha5'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpal_pha5'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.19290000200271606), SFDouble(0.7860000133514404), SFDouble(-0.11219999939203262)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('sitebox'))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_thumb1'),
                                                                                                                      DEF_ : SFString('Joe_l_thumb1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1923999935388565), SFDouble(0.8471999764442444), SFDouble(-0.05339999869465828)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(127), SFInt32(128)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_thumb_metacarpal'),
                                                                                                                          DEF_ : SFString('Joe_l_thumb_metacarpal'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1923999935388565,0.8471999764442444,-0.05339999869465828]),SFVec3f([0.19509999454021454,0.8226000070571899,0.02459999918937683])]))),
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine'))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1923999935388565), SFDouble(0.8471999764442444), SFDouble(-0.05339999869465828)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_thumb2'),
                                                                                                                          DEF_ : SFString('Joe_l_thumb2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.19509999454021454), SFDouble(0.8226000070571899), SFDouble(0.02459999918937683)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(138), SFInt32(139), SFInt32(140), SFInt32(141), SFInt32(142), SFInt32(143)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_thumb_distal'),
                                                                                                                              DEF_ : SFString('Joe_l_thumb_proximal'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.19509999454021454,0.8226000070571899,0.02459999918937683]),SFVec3f([0.19550000131130219,0.8159000277519226,0.04639999940991402])]))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine'))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.19509999454021454), SFDouble(0.8226000070571899), SFDouble(0.02459999918937683)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_thumb3'),
                                                                                                                              DEF_ : SFString('Joe_l_thumb3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.19550000131130219), SFDouble(0.8159000277519226), SFDouble(0.04639999940991402)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(144), SFInt32(145), SFInt32(146), SFInt32(147), SFInt32(148), SFInt32(149), SFInt32(150), SFInt32(151), SFInt32(152)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_thumb_distal'),
                                                                                                                                  DEF_ : SFString('Joe_l_thumb_distal'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.19550000131130219,0.8159000277519226,0.04639999940991402]),SFVec3f([0.19820000231266022,0.8061000108718872,0.07590000331401825])]))),
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine'))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.19550000131130219), SFDouble(0.8159000277519226), SFDouble(0.04639999940991402)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_thumb_distal_tip'),
                                                                                                                                      DEF_ : SFString('Joe_l_thumb_distal_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.19820000231266022), SFDouble(0.8061000108718872), SFDouble(0.07590000331401825)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_index0'),
                                                                                                                      DEF_ : SFString('Joe_l_index0'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.19830000400543213), SFDouble(0.8023999929428101), SFDouble(-0.02800000086426735)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(129), SFInt32(130)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_index_metacarpal'),
                                                                                                                          DEF_ : SFString('Joe_l_index_metacarpal'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1983,0.8024,-0.028]),SFVec3f([0.1983,0.7815,-0.028])]))),
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine'))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_index1'),
                                                                                                                          DEF_ : SFString('Joe_l_index1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(138), SFInt32(139), SFInt32(140), SFInt32(153), SFInt32(154), SFInt32(155), SFInt32(163)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_index_proximal'),
                                                                                                                              DEF_ : SFString('Joe_l_index_proximal'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1983,0.7815,-0.028]),SFVec3f([0.2017,0.7363,-0.0248])]))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine'))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_index2'),
                                                                                                                              DEF_ : SFString('Joe_l_index2'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(166), SFInt32(167), SFInt32(168), SFInt32(169)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_index_middle'),
                                                                                                                                  DEF_ : SFString('Joe_l_index_middle'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.2017,0.7363,-0.0248]),SFVec3f([0.2028,0.7139,-0.0236])]))),
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine'))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_index3'),
                                                                                                                                  DEF_ : SFString('Joe_l_index3'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.20280000567436218), SFDouble(0.7139000296592712), SFDouble(-0.023600000888109207)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(170), SFInt32(171), SFInt32(172), SFInt32(173), SFInt32(174), SFInt32(175), SFInt32(176), SFInt32(177), SFInt32(178)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('l_index_distal'),
                                                                                                                                      DEF_ : SFString('Joe_l_index_distal'),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedLineSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0.20280000567436218,0.7139000296592712,-0.023600000888109207]),SFVec3f([0.20890000462532043,0.6858000159263611,-0.02449999935925007])]))),
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.20280000567436218), SFDouble(0.7139000296592712), SFDouble(-0.023600000888109207)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('l_index_distal_tip'),
                                                                                                                                          DEF_ : SFString('Joe_l_index_distal_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.20890000462532043), SFDouble(0.6858000159263611), SFDouble(-0.02449999935925007)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('l_dactylion'),
                                                                                                                                          DEF_ : SFString('Joe_l_dactylion'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.20559999346733093), SFDouble(0.6743000149726868), SFDouble(-0.04820000007748604)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_middle0'),
                                                                                                                      DEF_ : SFString('Joe_l_middle0'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.19869999587535858), SFDouble(0.8029000163078308), SFDouble(-0.05299999937415123)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(131), SFInt32(132)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_middle_metacarpal'),
                                                                                                                          DEF_ : SFString('Joe_l_middle_metacarpal'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.19869999587535858,0.8029000163078308,-0.05299999937415123]),SFVec3f([0.19869999587535858,0.7817999720573425,-0.05299999937415123])]))),
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine'))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.19869999587535858), SFDouble(0.8029000163078308), SFDouble(-0.05299999937415123)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_middle1'),
                                                                                                                          DEF_ : SFString('Joe_l_middle1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.19869999587535858), SFDouble(0.7817999720573425), SFDouble(-0.05299999937415123)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(156), SFInt32(157), SFInt32(163), SFInt32(164)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_middle_proximal'),
                                                                                                                              DEF_ : SFString('Joe_l_middle_proximal'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.19869999587535858,0.7817999720573425,-0.05299999937415123]),SFVec3f([0.2012999951839447,0.7272999882698059,-0.0502999983727932])]))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine'))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.19869999587535858), SFDouble(0.7817999720573425), SFDouble(-0.05299999937415123)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_middle2'),
                                                                                                                              DEF_ : SFString('Joe_l_middle2'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2012999951839447), SFDouble(0.7272999882698059), SFDouble(-0.0502999983727932)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(179), SFInt32(180), SFInt32(181), SFInt32(182)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_middle_middle'),
                                                                                                                                  DEF_ : SFString('Joe_l_middle_middle'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.2012999951839447,0.7272999882698059,-0.0502999983727932]),SFVec3f([0.20260000228881836,0.7010999917984009,-0.049400001764297485])]))),
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine'))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.2012999951839447), SFDouble(0.7272999882698059), SFDouble(-0.0502999983727932)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_middle3'),
                                                                                                                                  DEF_ : SFString('Joe_l_middle3'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.20260000228881836), SFDouble(0.7010999917984009), SFDouble(-0.049400001764297485)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(183), SFInt32(184), SFInt32(185), SFInt32(186), SFInt32(187), SFInt32(188), SFInt32(189), SFInt32(190), SFInt32(191)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('l_middle_distal'),
                                                                                                                                      DEF_ : SFString('Joe_l_middle_distal'),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedLineSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0.20260000228881836,0.7010999917984009,-0.049400001764297485]),SFVec3f([0.20800000429153442,0.6730999946594238,-0.04910000041127205])]))),
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('l_middle_distal_tip'),
                                                                                                                                          DEF_ : SFString('Joe_l_middle_distal_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.20800000429153442), SFDouble(0.6730999946594238), SFDouble(-0.04910000041127205)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.20260000228881836), SFDouble(0.7010999917984009), SFDouble(-0.049400001764297485)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox'))])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_ring0'),
                                                                                                                      DEF_ : SFString('Joe_l_ring0'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1956000030040741), SFDouble(0.8019000291824341), SFDouble(-0.07940000295639038)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(133), SFInt32(134)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_ring_metacarpal'),
                                                                                                                          DEF_ : SFString('Joe_l_ring_metacarpal'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1956000030040741,0.8019000291824341,-0.07940000295639038]),SFVec3f([0.1956000030040741,0.781499981880188,-0.07940000295639038])]))),
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine'))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1956000030040741), SFDouble(0.8019000291824341), SFDouble(-0.07940000295639038)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_ring1'),
                                                                                                                          DEF_ : SFString('Joe_l_ring1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1956000030040741), SFDouble(0.781499981880188), SFDouble(-0.07940000295639038)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(158), SFInt32(159), SFInt32(164), SFInt32(165)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_ring_proximal'),
                                                                                                                              DEF_ : SFString('Joe_l_ring_proximal'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1956000030040741,0.781499981880188,-0.07940000295639038]),SFVec3f([0.1973000019788742,0.7286999821662903,-0.07769999653100967])]))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine'))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1956000030040741), SFDouble(0.781499981880188), SFDouble(-0.07940000295639038)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_ring2'),
                                                                                                                              DEF_ : SFString('Joe_l_ring2'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1973000019788742), SFDouble(0.7286999821662903), SFDouble(-0.07769999653100967)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(192), SFInt32(193), SFInt32(194), SFInt32(195)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_ring_middle'),
                                                                                                                                  DEF_ : SFString('Joe_l_ring_middle'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.1973000019788742,0.7286999821662903,-0.07769999653100967]),SFVec3f([0.19830000400543213,0.7045000195503235,-0.07670000195503235])]))),
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine'))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1973000019788742), SFDouble(0.7286999821662903), SFDouble(-0.07769999653100967)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_ring3'),
                                                                                                                                  DEF_ : SFString('Joe_l_ring3'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.19830000400543213), SFDouble(0.7045000195503235), SFDouble(-0.07670000195503235)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(196), SFInt32(197), SFInt32(198), SFInt32(199), SFInt32(200), SFInt32(201), SFInt32(202), SFInt32(203), SFInt32(204)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('l_ring_distal'),
                                                                                                                                      DEF_ : SFString('Joe_l_ring_distal'),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedLineSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0.19830000400543213,0.7045000195503235,-0.07670000195503235]),SFVec3f([0.20350000262260437,0.675000011920929,-0.07559999823570251])]))),
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.19830000400543213), SFDouble(0.7045000195503235), SFDouble(-0.07670000195503235)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('l_ring_distal_tip'),
                                                                                                                                          DEF_ : SFString('Joe_l_ring_distal_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.20350000262260437), SFDouble(0.675000011920929), SFDouble(-0.07559999823570251)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_pinky0'),
                                                                                                                      DEF_ : SFString('Joe_l_pinky0'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(135), SFInt32(136), SFInt32(137), SFInt32(165)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_pinky_metacarpal'),
                                                                                                                          DEF_ : SFString('Joe_l_pinky_metacarpal'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.19249999523162842,0.8065999746322632,-0.10360000282526016]),SFVec3f([0.19249999523162842,0.7865999937057495,-0.10360000282526016])]))),
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine'))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.19249999523162842), SFDouble(0.8065999746322632), SFDouble(-0.10360000282526016)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_pinky1'),
                                                                                                                          DEF_ : SFString('Joe_l_pinky1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.19249999523162842), SFDouble(0.7865999937057495), SFDouble(-0.10360000282526016)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(160), SFInt32(161), SFInt32(162)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_pinky_proximal'),
                                                                                                                              DEF_ : SFString('Joe_l_pinky_proximal'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.19249999523162842,0.7865999937057495,-0.10360000282526016]),SFVec3f([0.19380000233650208,0.745199978351593,-0.10239999741315842])]))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine'))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.19249999523162842), SFDouble(0.7865999937057495), SFDouble(-0.10360000282526016)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_pinky2'),
                                                                                                                              DEF_ : SFString('Joe_l_pinky2'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.19380000233650208), SFDouble(0.745199978351593), SFDouble(-0.10239999741315842)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(205), SFInt32(206), SFInt32(207), SFInt32(208)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_pinky_middle'),
                                                                                                                                  DEF_ : SFString('Joe_l_pinky_middle'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.19380000233650208,0.745199978351593,-0.10239999741315842]),SFVec3f([0.19480000436306,0.7276999950408936,-0.10170000046491623])]))),
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')))]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_pinky3'),
                                                                                                                                  DEF_ : SFString('Joe_l_pinky3'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.19480000436306), SFDouble(0.7276999950408936), SFDouble(-0.10170000046491623)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(209), SFInt32(210), SFInt32(211), SFInt32(212), SFInt32(213), SFInt32(214), SFInt32(215), SFInt32(216), SFInt32(217)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('l_pinky_distal'),
                                                                                                                                      DEF_ : SFString('Joe_l_pinky_distal'),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          geometry_ : 
                                                                                                                                            IndexedLineSet(
                                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                              coord_ : 
                                                                                                                                                Coordinate(
                                                                                                                                                  point_ : MFVec3f([SFVec3f([0.19480000436306,0.7276999950408936,-0.10170000046491623]),SFVec3f([0.2013999968767166,0.7009000182151794,-0.10119999945163727])]))),
                                                                                                                                          appearance_ : 
                                                                                                                                            Appearance(
                                                                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('l_pinky_distal_tip'),
                                                                                                                                          DEF_ : SFString('Joe_l_pinky_distal_tip'),
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.2013999968767166), SFDouble(0.7009000182151794), SFDouble(-0.10119999945163727)]),
                                                                                                                                          children_ : [
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('sitebox'))])])])])])])])])])])])]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('r_sternoclavicular'),
                                                                                              DEF_ : SFString('Joe_r_sternoclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(-0.029999999329447746), SFDouble(1.4600000381469727), SFDouble(0)]),
                                                                                              skinCoordIndex_ : MFInt32([SFInt32(10)]),
                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('r_clavicle'),
                                                                                                  DEF_ : SFString('Joe_r_clavicle'),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        IndexedLineSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([-0.029999999329447746,1.4600000381469727,0.019999999552965164]),SFVec3f([-0.09000000357627869,1.409999966621399,-0.09000000357627869])]))),
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          USE_ : SFString('SegmentLine'))),

                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(-0.029999999329447746), SFDouble(1.4600000381469727), SFDouble(0.019999999552965164)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_clavicale'),
                                                                                                      DEF_ : SFString('Joe_r_clavicale'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.029999999329447746), SFDouble(1.4600000381469727), SFDouble(0.03500000014901161)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('r_acromioclavicular'),
                                                                                                  DEF_ : SFString('Joe_r_acromioclavicular'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.09000000357627869), SFDouble(1.409999966621399), SFDouble(-0.10999999940395355)]),
                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(77), SFInt32(29)]),
                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(0.8999999761581421)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('r_scapula'),
                                                                                                      DEF_ : SFString('Joe_r_scapula'),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            IndexedLineSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([-0.09000000357627869,1.409999966621399,-0.09000000357627869]),SFVec3f([-0.20000000298023224,1.440000057220459,-0.03999999910593033])]))),
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(-0.09000000357627869), SFDouble(1.409999966621399), SFDouble(-0.09000000357627869)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(-0.10999999940395355), SFDouble(1.4270000457763672), SFDouble(-0.13750000298023224)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('skinsphere'))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_acromion'),
                                                                                                          DEF_ : SFString('Joe_r_acromion'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.17800000309944153), SFDouble(1.4824999570846558), SFDouble(-0.0625)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_axilla_ant'),
                                                                                                          DEF_ : SFString('Joe_r_axilla_ant'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.17000000178813934), SFDouble(1.3799999952316284), SFDouble(0.007000000216066837)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('sitebox'))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_axilla_post'),
                                                                                                          DEF_ : SFString('Joe_r_axilla_post'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.1599999964237213), SFDouble(1.3799999952316284), SFDouble(-0.12700000405311584)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('sitebox'))])]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('r_shoulder'),
                                                                                                      DEF_ : SFString('Joe_r_shoulder'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(1.440000057220459), SFDouble(-0.03999999910593033)]),
                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(29), SFInt32(30), SFInt32(32), SFInt32(78), SFInt32(218), SFInt32(219), SFInt32(220), SFInt32(221), SFInt32(86), SFInt32(88)]),
                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(0.10000000149011612), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.30000001192092896), SFFloat(0.20000000298023224)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('r_upperarm'),
                                                                                                          DEF_ : SFString('Joe_r_upperarm'),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(1.440000057220459), SFDouble(-0.03999999910593033)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                IndexedLineSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.20000000298023224,1.440000057220459,-0.03999999910593033]),SFVec3f([-0.20000000298023224,1.138800024986267,-0.03999999910593033])]))),
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  USE_ : SFString('SegmentLine'))),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.17800000309944153), SFDouble(1.4824999570846558), SFDouble(-0.0625)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('skinsphere'))]),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.17000000178813934), SFDouble(1.3799999952316284), SFDouble(0.007000000216066837)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('skinsphere'))]),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.1599999964237213), SFDouble(1.3799999952316284), SFDouble(-0.12700000405311584)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('skinsphere'))]),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.23499999940395355), SFDouble(1.4199999570846558), SFDouble(-0.0625)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('skinsphere'))]),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.23000000417232513), SFDouble(1.2350000143051147), SFDouble(-0.03999999910593033)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('skinsphere'))]),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.1599999964237213), SFDouble(1.2300000190734863), SFDouble(-0.03999999910593033)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('skinsphere'))]),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(1.2300000190734863), SFDouble(-0.10499999672174454)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('skinsphere'))]),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(1.2350000143051147), SFDouble(0.019999999552965164)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('skinsphere'))]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_humeral_medial_epicn'),
                                                                                                              DEF_ : SFString('Joe_r_humeral_medial_epicn'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.16500000655651093), SFDouble(1.138800024986267), SFDouble(-0.03999999910593033)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_radiale'),
                                                                                                              DEF_ : SFString('Joe_r_radiale'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.23000000417232513), SFDouble(1.1330000162124634), SFDouble(-0.054999999701976776)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_humeral_lateral_epicn'),
                                                                                                              DEF_ : SFString('Joe_r_humeral_lateral_epicn'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.24400000274181366), SFDouble(1.138800024986267), SFDouble(-0.03999999910593033)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))])]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('r_elbow'),
                                                                                                          DEF_ : SFString('Joe_r_elbow'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(1.138800024986267), SFDouble(-0.03999999910593033)]),
                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(33), SFInt32(34), SFInt32(35), SFInt32(225), SFInt32(226), SFInt32(227), SFInt32(228), SFInt32(229), SFInt32(231), SFInt32(232), SFInt32(233), SFInt32(234)]),
                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('r_forearm'),
                                                                                                              DEF_ : SFString('Joe_r_forearm'),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    IndexedLineSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.20000000298023224,1.138800024986267,-0.03999999910593033]),SFVec3f([-0.20000000298023224,0.8899999856948853,-0.03999999910593033])]))),
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      USE_ : SFString('SegmentLine'))),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(1.138800024986267), SFDouble(-0.03999999910593033)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(1.138800024986267), SFDouble(0.013000000268220901)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))]),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.22499999403953552), SFDouble(1), SFDouble(-0.009999999776482582)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))]),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.22499999403953552), SFDouble(1), SFDouble(-0.07000000029802322)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))]),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1850000023841858), SFDouble(1), SFDouble(-0.009999999776482582)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))]),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1850000023841858), SFDouble(1), SFDouble(-0.07000000029802322)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('skinsphere'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_radial_styloid'),
                                                                                                                  DEF_ : SFString('Joe_r_radial_styloid'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.8999999761581421), SFDouble(-0.014999999664723873)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_olecranon'),
                                                                                                                  DEF_ : SFString('Joe_r_olecranon'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(1.138800024986267), SFDouble(-0.07999999821186066)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_wrist'),
                                                                                                              DEF_ : SFString('Joe_r_wrist'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.8899999856948853), SFDouble(-0.03999999910593033)]),
                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(235), SFInt32(236), SFInt32(237), SFInt32(238), SFInt32(239), SFInt32(240), SFInt32(241), SFInt32(242)]),
                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_hand'),
                                                                                                                  DEF_ : SFString('Joe_r_hand'),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        IndexedLineSet(
                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(-1)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.8899999856948853,-0.03999999910593033]),SFVec3f([-0.20000000298023224,0.8500000238418579,0]),SFVec3f([-0.20000000298023224,0.8399999737739563,-0.014999999664723873]),SFVec3f([-0.20000000298023224,0.8349999785423279,-0.03999999910593033]),SFVec3f([-0.20000000298023224,0.8349999785423279,-0.06499999761581421]),SFVec3f([-0.20000000298023224,0.8399999737739563,-0.08500000089406967])]))),
                                                                                                                      appearance_ : 
                                                                                                                        Appearance(
                                                                                                                          USE_ : SFString('SegmentLine'))),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.8899999856948853), SFDouble(-0.03999999910593033)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('r_ulnar_styloid'),
                                                                                                                      DEF_ : SFString('Joe_r_ulnar_styloid'),
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.8999999761581421), SFDouble(-0.08500000089406967)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_thumb1'),
                                                                                                                  DEF_ : SFString('Joe_r_thumb1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.8500000238418579), SFDouble(0)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(243), SFInt32(244)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_thumb_metacarpal'),
                                                                                                                      DEF_ : SFString('Joe_r_thumb_metacarpal'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.8500000238418579,0]),SFVec3f([-0.20000000298023224,0.8199999928474426,0.029999999329447746])]))),
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.8500000238418579), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_thumb2'),
                                                                                                                      DEF_ : SFString('Joe_r_thumb2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.8199999928474426), SFDouble(0.029999999329447746)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(254), SFInt32(255), SFInt32(256), SFInt32(257), SFInt32(258), SFInt32(259)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_thumb_proximal'),
                                                                                                                          DEF_ : SFString('Joe_r_thumb_proximal'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.8199999928474426,0.029999999329447746]),SFVec3f([-0.20000000298023224,0.800000011920929,0.05000000074505806])]))),
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine'))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.8199999928474426), SFDouble(0.029999999329447746)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_thumb3'),
                                                                                                                          DEF_ : SFString('Joe_r_thumb3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.800000011920929), SFDouble(0.05000000074505806)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(260), SFInt32(261), SFInt32(262), SFInt32(263), SFInt32(264), SFInt32(265), SFInt32(266), SFInt32(267), SFInt32(268)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_thumb_distal'),
                                                                                                                              DEF_ : SFString('Joe_r_thumb_distal'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.800000011920929,0.05000000074505806]),SFVec3f([-0.20000000298023224,0.7799999713897705,0.07000000029802322])]))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine'))),

                                                                                                                                Transform(
                                                                                                                                  DEF_ : SFString('Thumbnail'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7850000262260437), SFDouble(0.07500000298023224)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('skinsphere'))]),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.800000011920929), SFDouble(0.05000000074505806)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_thumb_distal_tip'),
                                                                                                                                  DEF_ : SFString('Joe_r_thumb_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7799999713897705), SFDouble(0.07000000029802322)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('sitebox'))])])])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_index0'),
                                                                                                                  DEF_ : SFString('Joe_r_index0'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.8399999737739563), SFDouble(-0.014999999664723873)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(245), SFInt32(246)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_index_metacarpal'),
                                                                                                                      DEF_ : SFString('Joe_r_index_metacarpal'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.8399999737739563,-0.014999999664723873]),SFVec3f([-0.20000000298023224,0.7929999828338623,-0.014999999664723873])]))),
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.8399999737739563), SFDouble(-0.014999999664723873)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('r_metacarpal_pha2'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpal_pha2'),
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7929999828338623), SFDouble(-0.004999999888241291)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('sitebox'))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_index1'),
                                                                                                                      DEF_ : SFString('Joe_r_index1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7929999828338623), SFDouble(-0.014999999664723873)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(254), SFInt32(255), SFInt32(256), SFInt32(269), SFInt32(270), SFInt32(271), SFInt32(279)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_index_proximal'),
                                                                                                                          DEF_ : SFString('Joe_r_index_proximal'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.7929999828338623,-0.014999999664723873]),SFVec3f([-0.20000000298023224,0.7450000047683716,-0.014999999664723873])]))),
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine'))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7929999828338623), SFDouble(-0.014999999664723873)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_index2'),
                                                                                                                          DEF_ : SFString('Joe_r_index2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7450000047683716), SFDouble(-0.014999999664723873)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(282), SFInt32(283), SFInt32(284), SFInt32(285)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_index_middle'),
                                                                                                                              DEF_ : SFString('Joe_r_index_middle'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.7450000047683716,-0.014999999664723873]),SFVec3f([-0.20000000298023224,0.7200000286102295,-0.014999999664723873])]))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine'))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7450000047683716), SFDouble(-0.014999999664723873)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_index3'),
                                                                                                                              DEF_ : SFString('Joe_r_index3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7200000286102295), SFDouble(-0.014999999664723873)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(286), SFInt32(287), SFInt32(288), SFInt32(289), SFInt32(290), SFInt32(291), SFInt32(292), SFInt32(293), SFInt32(294)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_index_distal'),
                                                                                                                                  DEF_ : SFString('Joe_r_index_distal'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.7200000286102295,-0.014999999664723873]),SFVec3f([-0.20000000298023224,0.6949999928474426,-0.014999999664723873])]))),
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine'))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7200000286102295), SFDouble(-0.014999999664723873)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_index_distal_tip'),
                                                                                                                                      DEF_ : SFString('Joe_r_index_distal_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.6949999928474426), SFDouble(-0.014999999664723873)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_middle0'),
                                                                                                                  DEF_ : SFString('Joe_r_middle0'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.8349999785423279), SFDouble(-0.03999999910593033)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(247), SFInt32(248)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_middle_metacarpal'),
                                                                                                                      DEF_ : SFString('Joe_r_middle_metacarpal'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.8349999785423279,-0.03999999910593033]),SFVec3f([-0.20000000298023224,0.7879999876022339,-0.03999999910593033])]))),
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.8349999785423279), SFDouble(-0.03999999910593033)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_middle1'),
                                                                                                                      DEF_ : SFString('Joe_r_middle1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7879999876022339), SFDouble(-0.03999999910593033)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(272), SFInt32(273), SFInt32(279), SFInt32(280)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_middle_proximal'),
                                                                                                                          DEF_ : SFString('Joe_r_middle_proximal'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.7879999876022339,-0.03999999910593033]),SFVec3f([-0.20000000298023224,0.7400000095367432,-0.03999999910593033])]))),
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine'))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7879999876022339), SFDouble(-0.03999999910593033)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_middle2'),
                                                                                                                          DEF_ : SFString('Joe_r_middle2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7400000095367432), SFDouble(-0.03999999910593033)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(295), SFInt32(296), SFInt32(297), SFInt32(298)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_middle_middle'),
                                                                                                                              DEF_ : SFString('Joe_r_middle_middle'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.7400000095367432,-0.03999999910593033]),SFVec3f([-0.20000000298023224,0.7142000198364258,-0.03999999910593033])]))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine'))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7400000095367432), SFDouble(-0.03999999910593033)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_middle3'),
                                                                                                                              DEF_ : SFString('Joe_r_middle3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7142000198364258), SFDouble(-0.03999999910593033)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(299), SFInt32(300), SFInt32(301), SFInt32(302), SFInt32(303), SFInt32(304), SFInt32(305), SFInt32(306), SFInt32(307)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_middle_distal'),
                                                                                                                                  DEF_ : SFString('Joe_r_middle_distal'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.7142000198364258,-0.03999999910593033]),SFVec3f([-0.20000000298023224,0.6758000254631042,-0.03999999910593033])]))),
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine'))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7142000198364258), SFDouble(-0.03999999910593033)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_dactylion'),
                                                                                                                                      DEF_ : SFString('Joe_r_dactylion'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.6800000071525574), SFDouble(-0.03999999910593033)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_middle_distal_tip'),
                                                                                                                                      DEF_ : SFString('Joe_r_middle_distal_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.6800000071525574), SFDouble(-0.03999999910593033)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_ring0'),
                                                                                                                  DEF_ : SFString('Joe_r_ring0'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.835), SFDouble(-0.065)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(249), SFInt32(250)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_ring_metacarpal'),
                                                                                                                      DEF_ : SFString('Joe_r_ring_metacarpal'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.8349999785423279,-0.06499999761581421]),SFVec3f([-0.20000000298023224,0.7929999828338623,-0.06499999761581421])]))),
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.8349999785423279), SFDouble(-0.06499999761581421)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_ring1'),
                                                                                                                      DEF_ : SFString('Joe_r_ring1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7929999828338623), SFDouble(-0.06499999761581421)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(274), SFInt32(275), SFInt32(280), SFInt32(281)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_ring_proximal'),
                                                                                                                          DEF_ : SFString('Joe_r_ring_proximal'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.7929999828338623,-0.06499999761581421]),SFVec3f([-0.20000000298023224,0.7400000095367432,-0.06499999761581421])]))),
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine'))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7929999828338623), SFDouble(-0.06499999761581421)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_ring2'),
                                                                                                                          DEF_ : SFString('Joe_r_ring2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7400000095367432), SFDouble(-0.06499999761581421)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(308), SFInt32(309), SFInt32(310), SFInt32(311)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_ring_middle'),
                                                                                                                              DEF_ : SFString('Joe_r_ring_middle'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.7400000095367432,-0.06499999761581421]),SFVec3f([-0.20000000298023224,0.7177000045776367,-0.06499999761581421])]))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine'))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7400000095367432), SFDouble(-0.06499999761581421)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_ring3'),
                                                                                                                              DEF_ : SFString('Joe_r_ring3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7177000045776367), SFDouble(-0.06499999761581421)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(312), SFInt32(313), SFInt32(314), SFInt32(315), SFInt32(316), SFInt32(317), SFInt32(318), SFInt32(319), SFInt32(320)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_ring_distal'),
                                                                                                                                  DEF_ : SFString('Joe_r_ring_distal'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.7177000045776367,-0.06499999761581421]),SFVec3f([-0.20000000298023224,0.6949999928474426,-0.06499999761581421])]))),
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine'))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7177000045776367), SFDouble(-0.06499999761581421)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_ring_distal_tip'),
                                                                                                                                      DEF_ : SFString('Joe_r_ring_distal_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.6949999928474426), SFDouble(-0.06499999761581421)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_pinky0'),
                                                                                                                  DEF_ : SFString('Joe_r_pinky0'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.8399999737739563), SFDouble(-0.08500000089406967)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(251), SFInt32(252), SFInt32(253), SFInt32(281)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_pinky_metacarpal'),
                                                                                                                      DEF_ : SFString('Joe_r_pinky_metacarpal'),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.8399999737739563,-0.08500000089406967]),SFVec3f([-0.20000000298023224,0.7900000214576721,-0.08500000089406967])]))),
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine'))),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.8399999737739563), SFDouble(-0.08500000089406967)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('r_metacarpal_pha5'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpal_pha5'),
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7900000214576721), SFDouble(-0.0949999988079071)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('sitebox'))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_pinky1'),
                                                                                                                      DEF_ : SFString('Joe_r_pinky1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7900000214576721), SFDouble(-0.08500000089406967)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(276), SFInt32(277), SFInt32(278)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_pinky_proximal'),
                                                                                                                          DEF_ : SFString('Joe_r_pinky_proximal'),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.7900000214576721,-0.08500000089406967]),SFVec3f([-0.20000000298023224,0.7549999952316284,-0.08500000089406967])]))),
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine'))),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7900000214576721), SFDouble(-0.08500000089406967)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_pinky2'),
                                                                                                                          DEF_ : SFString('Joe_r_pinky2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7549999952316284), SFDouble(-0.08500000089406967)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(321), SFInt32(322), SFInt32(323), SFInt32(324)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_pinky_middle'),
                                                                                                                              DEF_ : SFString('Joe_r_pinky_middle'),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.7549999952316284,-0.08500000089406967]),SFVec3f([-0.20000000298023224,0.7350000143051147,-0.08500000089406967])]))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine'))),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7549999952316284), SFDouble(-0.08500000089406967)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_pinky3'),
                                                                                                                              DEF_ : SFString('Joe_r_pinky3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7350000143051147), SFDouble(-0.09000000357627869)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(325), SFInt32(326), SFInt32(327), SFInt32(328), SFInt32(329), SFInt32(330), SFInt32(331), SFInt32(332), SFInt32(333)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_pinky_distal'),
                                                                                                                                  DEF_ : SFString('Joe_r_pinky_distal'),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.20000000298023224,0.7350000143051147,-0.08500000089406967]),SFVec3f([-0.20000000298023224,0.7200000286102295,-0.08500000089406967])]))),
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine'))),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7350000143051147), SFDouble(-0.08500000089406967)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_pinky_distal_tip'),
                                                                                                                                      DEF_ : SFString('Joe_r_pinky_distal_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.20000000298023224), SFDouble(0.7200000286102295), SFDouble(-0.08500000089406967)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])])])])])])])])])])])])])])])])])])])])])])])])]),

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
                          USE_ : SFString('Joe_r_pinky3'))])])]),

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
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.6000000238418579), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.25600004196167), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.51200008392334), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(3.7679998874664307), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(5.02400016784668), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(6.28000020980835)])),

            OrientationInterpolator(
              DEF_ : SFString('Yaw'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.6000000238418579), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.25600004196167), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(2.51200008392334), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(3.7679998874664307), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(5.02400016784668), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(6.28000020980835)])),

            OrientationInterpolator(
              DEF_ : SFString('Roll'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.6000000238418579), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.25600004196167), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(2.51200008392334), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(3.7679998874664307), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(5.02400016784668), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(6.28000020980835)])),

            OrientationInterpolator(
              DEF_ : SFString('vc6Yaw'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.5), SFFloat(0.6000000238418579), SFFloat(0.699999988079071), SFFloat(0.800000011920929), SFFloat(0.8999999761581421), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.699999988079071), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(-0.4000000059604645), SFRotation(-1), SFRotation(0), SFRotation(0.699999988079071), SFRotation(-0.4000000059604645), SFRotation(-1), SFRotation(0), SFRotation(0.4000000059604645), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)])),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time2'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vc6Yaw')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vc6Yaw'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vc6')),

            OrientationInterpolator(
              DEF_ : SFString('EyeballsRotation'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.10000000149011612), SFFloat(0.20000000298023224), SFFloat(0.30000001192092896), SFFloat(0.4000000059604645), SFFloat(0.5), SFFloat(0.6000000238418579), SFFloat(0.699999988079071), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.20000000298023224), SFRotation(0.20000000298023224), SFRotation(0.20000000298023224), SFRotation(0.20000000298023224), SFRotation(-0.20000000298023224), SFRotation(0.20000000298023224), SFRotation(0.20000000298023224), SFRotation(0.20000000298023224), SFRotation(-0.20000000298023224), SFRotation(-0.20000000298023224), SFRotation(0.20000000298023224), SFRotation(0.20000000298023224), SFRotation(0.20000000298023224), SFRotation(-0.20000000298023224), SFRotation(0.20000000298023224), SFRotation(0.20000000298023224), SFRotation(-0.20000000298023224), SFRotation(0.20000000298023224), SFRotation(-0.20000000298023224), SFRotation(0.20000000298023224), SFRotation(-0.20000000298023224), SFRotation(0.20000000298023224), SFRotation(-0.20000000298023224), SFRotation(0.20000000298023224), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time3'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('EyeballsRotation')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('EyeballsRotation'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_eyeball_joint')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('EyeballsRotation'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_eyeball_joint')),

            OrientationInterpolator(
              DEF_ : SFString('r_sternoclavicularRelax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.6000000238418579), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.20000000298023224), SFRotation(-1), SFRotation(0), SFRotation(0.10999999940395355), SFRotation(0.20000000298023224), SFRotation(-1), SFRotation(0), SFRotation(0.10999999940395355), SFRotation(0.10000000149011612), SFRotation(-1), SFRotation(0), SFRotation(0.10000000149011612), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_acromioclavicularRelax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.6000000238418579), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_shoulderRelax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.10000000149011612), SFFloat(0.30000001192092896), SFFloat(0.6000000238418579), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.4000000059604645), SFRotation(-0.699999988079071), SFRotation(-0.550000011920929), SFRotation(0.3499999940395355), SFRotation(0.4000000059604645), SFRotation(-0.699999988079071), SFRotation(-0.550000011920929), SFRotation(0.3499999940395355), SFRotation(0.4000000059604645), SFRotation(-0.699999988079071), SFRotation(-0.550000011920929), SFRotation(0.3499999940395355), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_elbowRelax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.15000000596046448), SFFloat(0.4000000059604645), SFFloat(0.6000000238418579), SFFloat(0.8999999761581421), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.20000000298023224), SFRotation(0), SFRotation(0.009999999776482582), SFRotation(0.5), SFRotation(-0.20000000298023224), SFRotation(0), SFRotation(0.009999999776482582), SFRotation(0.5), SFRotation(-0.20000000298023224), SFRotation(0), SFRotation(0.009999999776482582), SFRotation(0.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_wristRelax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.6000000238418579), SFFloat(0.8999999761581421), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.10000000149011612), SFRotation(-0.09000000357627869), SFRotation(0.25), SFRotation(0), SFRotation(0.10000000149011612), SFRotation(-0.09000000357627869), SFRotation(0.25), SFRotation(0), SFRotation(0.10000000149011612), SFRotation(-0.09000000357627869), SFRotation(0.25), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_index0Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.10000000149011612), SFFloat(0.30000001192092896), SFFloat(0.6000000238418579), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.25), SFRotation(0.25), SFRotation(-1), SFRotation(0.125), SFRotation(-0.25), SFRotation(0.25), SFRotation(-1), SFRotation(0.125), SFRotation(-0.25), SFRotation(0.25), SFRotation(-1), SFRotation(0.125), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_index1Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.10000000149011612), SFFloat(0.20000000298023224), SFFloat(0.6000000238418579), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.13500000536441803), SFRotation(-0.13500000536441803), SFRotation(1), SFRotation(0.3569999933242798), SFRotation(-0.1589999943971634), SFRotation(-0.15299999713897705), SFRotation(1), SFRotation(0.35499998927116394), SFRotation(-0.1589999943971634), SFRotation(-0.15299999713897705), SFRotation(1), SFRotation(0.3569999933242798), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_middle0Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.10000000149011612), SFFloat(0.30000001192092896), SFFloat(0.6000000238418579), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.14000000059604645), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.14000000059604645), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.14000000059604645), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_middle1Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.10000000149011612), SFFloat(0.20000000298023224), SFFloat(0.30000001192092896), SFFloat(0.4000000059604645), SFFloat(0.5), SFFloat(0.6000000238418579), SFFloat(0.699999988079071), SFFloat(0.800000011920929), SFFloat(0.8999999761581421), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0.30000001192092896), SFRotation(0.25699999928474426), SFRotation(0), SFRotation(0), SFRotation(0.30000001192092896), SFRotation(0.3700000047683716), SFRotation(0), SFRotation(0), SFRotation(0.30000001192092896), SFRotation(0.38999998569488525), SFRotation(0), SFRotation(0), SFRotation(0.30000001192092896), SFRotation(0.3100000023841858), SFRotation(0), SFRotation(0), SFRotation(0.30000001192092896), SFRotation(0.3199999928474426), SFRotation(0), SFRotation(0), SFRotation(0.30000001192092896), SFRotation(0.3400000035762787), SFRotation(0), SFRotation(0), SFRotation(0.30000001192092896), SFRotation(0.2800000011920929), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_ring0Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.10000000149011612), SFFloat(0.30000001192092896), SFFloat(0.6000000238418579), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.25), SFRotation(0.25), SFRotation(-1), SFRotation(0.10000000149011612), SFRotation(0.25), SFRotation(0.25), SFRotation(-1), SFRotation(0.10000000149011612), SFRotation(0.25), SFRotation(0.25), SFRotation(-1), SFRotation(0.10000000149011612), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_ring1Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.10000000149011612), SFFloat(0.4000000059604645), SFFloat(0.5), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.13500000536441803), SFRotation(0.13500000536441803), SFRotation(1), SFRotation(0.27000001072883606), SFRotation(0.13500000536441803), SFRotation(0.13500000536441803), SFRotation(1), SFRotation(0.27000001072883606), SFRotation(0.13500000536441803), SFRotation(0.15000000596046448), SFRotation(1), SFRotation(0.27000001072883606), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_pinky0Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.10000000149011612), SFFloat(0.30000001192092896), SFFloat(0.5), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.3499999940395355), SFRotation(0.3499999940395355), SFRotation(-0.699999988079071), SFRotation(0.11999999731779099), SFRotation(0.3499999940395355), SFRotation(0.3499999940395355), SFRotation(-0.8999999761581421), SFRotation(0.11999999731779099), SFRotation(0.3499999940395355), SFRotation(0.3499999940395355), SFRotation(-0.699999988079071), SFRotation(0.11999999731779099), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_pinky1Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.10000000149011612), SFFloat(0.4000000059604645), SFFloat(0.6000000238418579), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.20000000298023224), SFRotation(0.25), SFRotation(1), SFRotation(0.27000001072883606), SFRotation(0.20000000298023224), SFRotation(0.2199999988079071), SFRotation(1), SFRotation(0.27000001072883606), SFRotation(0.2199999988079071), SFRotation(0.20000000298023224), SFRotation(1), SFRotation(0.27000001072883606), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_thumb1Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.029999999329447746), SFFloat(0.07999999821186066), SFFloat(0.20000000298023224), SFFloat(0.30000001192092896), SFFloat(0.4000000059604645), SFFloat(0.5), SFFloat(0.800000011920929), SFFloat(0.949999988079071), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1), SFRotation(1), SFRotation(0.5), SFRotation(-0.1599999964237213), SFRotation(0.1599999964237213), SFRotation(0.7850000262260437), SFRotation(0.5), SFRotation(-0.1599999964237213), SFRotation(0.1599999964237213), SFRotation(0.7850000262260437), SFRotation(1), SFRotation(1), SFRotation(1), SFRotation(0.75), SFRotation(1), SFRotation(1), SFRotation(1), SFRotation(0.75), SFRotation(1), SFRotation(1), SFRotation(1), SFRotation(0.75), SFRotation(1), SFRotation(1), SFRotation(1), SFRotation(0.75), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_thumb2Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.5), SFFloat(0.6000000238418579), SFFloat(0.699999988079071), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.44999998807907104), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.44999998807907104), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.44999998807907104), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_thumb3Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.5), SFFloat(0.6000000238418579), SFFloat(0.699999988079071), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.44999998807907104), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_fingers2Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.10000000149011612), SFFloat(0.20000000298023224), SFFloat(0.30000001192092896), SFFloat(0.4000000059604645), SFFloat(0.5), SFFloat(0.6000000238418579), SFFloat(0.699999988079071), SFFloat(0.800000011920929), SFFloat(0.8999999761581421), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.4300000071525574), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.4399999976158142), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.46000000834465027), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.4399999976158142), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.24500000476837158), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.23999999463558197), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.20999999344348907), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.23999999463558197), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_fingers3Relax'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.10000000149011612), SFFloat(0.20000000298023224), SFFloat(0.30000001192092896), SFFloat(0.4000000059604645), SFFloat(0.5), SFFloat(0.6000000238418579), SFFloat(0.699999988079071), SFFloat(0.800000011920929), SFFloat(0.8999999761581421), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.3700000047683716), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.3799999952316284), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.38999998569488525), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.3799999952316284), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.27000001072883606), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2800000011920929), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.27000001072883606), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2800000011920929), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_sternoclavicularRelax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_sternoclavicular')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_acromioclavicularRelax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_acromioclavicular')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_shoulderRelax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_elbowRelax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_wristRelax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_thumb1Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_thumb1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_thumb2Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_thumb2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_thumb3Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_thumb3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_index0Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_index0')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_index1Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_index1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_fingers2Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_index2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_fingers3Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_index3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_middle0Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_middle0')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_middle1Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_middle1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_fingers2Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_middle2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_fingers3Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_middle3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_ring0Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_ring0')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_ring1Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_ring1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_fingers2Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_ring2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_fingers3Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_ring3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_pinky0Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_pinky0')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_pinky1Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_pinky1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_fingers2Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_pinky2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_fingers3Relax'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_pinky3')),

            OrientationInterpolator(
              DEF_ : SFString('r_sternoclavicularRoll'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.5), SFFloat(0.699999988079071), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.10000000149011612), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.2199999988079071), SFRotation(0), SFRotation(0.5), SFRotation(-1), SFRotation(0.27000001072883606), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.10000000149011612), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_acromioclavicularRoll'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.6000000238418579), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.05000000074505806), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_shoulderRoll'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.5), SFFloat(0.8500000238418579), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.659999966621399), SFRotation(-0.25), SFRotation(0), SFRotation(-1), SFRotation(1.7599999904632568), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.25600004196167), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.05000000074505806), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_ForeArmPitch'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.15000000596046448), SFFloat(0.30000001192092896), SFFloat(0.5), SFFloat(0.699999988079071), SFFloat(0.8999999761581421), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.550000011920929), SFRotation(-1), SFRotation(-0.25), SFRotation(0), SFRotation(2.549999952316284), SFRotation(-1), SFRotation(-0.25), SFRotation(0), SFRotation(2.549999952316284), SFRotation(-1), SFRotation(-0.25), SFRotation(0), SFRotation(2.549999952316284), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_wristRoll'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.6000000238418579), SFFloat(0.6499999761581421), SFFloat(0.75), SFFloat(0.8500000238418579), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.550000011920929), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.5499999523162842), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5499999523162842), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_handPitch'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.6000000238418579), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0.009999999776482582), SFRotation(0.25), SFRotation(0), SFRotation(0), SFRotation(-0.009999999776482582), SFRotation(0.029999999329447746), SFRotation(0), SFRotation(0), SFRotation(0.009999999776482582), SFRotation(0.05000000074505806), SFRotation(0), SFRotation(0), SFRotation(0.009999999776482582), SFRotation(0.009999999776482582), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_thumb1Pitch'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.6000000238418579), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.4000000059604645), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.20000000298023224), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('r_thumb2Pitch'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.6000000238418579), SFFloat(0.800000011920929), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0.30000001192092896), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0.30000001192092896), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0.6000000238418579), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0.30000001192092896), SFRotation(0), SFRotation(1), SFRotation(1), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('l_shoulderRoll'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.5), SFFloat(0.8500000238418579), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0.25), SFRotation(0), SFRotation(1), SFRotation(1.7599999904632568), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.659999966621399), SFRotation(0.25), SFRotation(0), SFRotation(1), SFRotation(1.7599999904632568), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.25600004196167), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.05000000074505806), SFRotation(0.25), SFRotation(0), SFRotation(1), SFRotation(1.7599999904632568)])),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time2'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_sternoclavicularRoll')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time2'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_acromioclavicularRoll')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time2'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_shoulderRoll')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time2'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_ForeArmPitch')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time2'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_wristRoll')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time2'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_handPitch')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time2'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_thumb1Pitch')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time2'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_thumb2Pitch')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_sternoclavicularRoll'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_sternoclavicular')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_acromioclavicularRoll'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_acromioclavicular')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_shoulderRoll'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_ForeArmPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_wristRoll'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_index0')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_index1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_index2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_index3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_middle0')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_middle1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_middle2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_middle3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_ring0')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_ring1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_ring2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_ring3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_pinky0')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_pinky1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_pinky2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_handPitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_pinky3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_thumb1Pitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_thumb1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_thumb2Pitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_thumb2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_thumb2Pitch'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_thumb3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_shoulderRoll'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_shoulder')),

            Group(
              children_ : [
                PositionInterpolator(
                  DEF_ : SFString('HUMANOIDROOT_POSITION_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.041669998317956924), SFFloat(0.125), SFFloat(0.16670000553131104), SFFloat(0.20829999446868896), SFFloat(0.25), SFFloat(0.29170000553131104), SFFloat(0.375), SFFloat(0.45829999446868896), SFFloat(0.5), SFFloat(0.541700005531311), SFFloat(0.583299994468689), SFFloat(0.625), SFFloat(0.708299994468689), SFFloat(0.75), SFFloat(0.791700005531311), SFFloat(0.875), SFFloat(0.916700005531311), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,-0.009279999881982803,0]),SFVec3f([0,-0.0038580000400543213,0]),SFVec3f([0,-0.008847000077366829,0]),SFVec3f([0,-0.01486000046133995,0]),SFVec3f([0,-0.026410000398755074,0]),SFVec3f([0,-0.039340000599622726,0]),SFVec3f([0,-0.050200000405311584,0]),SFVec3f([0,-0.07468999922275543,0]),SFVec3f([0,-0.027319999411702156,0]),SFVec3f([0,-0.01607999950647354,0]),SFVec3f([0,-0.011289999820291996,0]),SFVec3f([0,-0.0058189998380839825,0]),SFVec3f([0,-0.0020039998926222324,0]),SFVec3f([0,-0.0025790000800043344,0]),SFVec3f([0,-0.014299999922513962,0]),SFVec3f([0,-0.03799000009894371,0]),SFVec3f([0,-0.05648000165820122,0]),SFVec3f([0,-0.04500000178813934,0]),SFVec3f([0,-0.009279999881982803,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('HUMANOIDROOT_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_HIP_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.375), SFFloat(0.5), SFFloat(0.666700005531311), SFFloat(0.791700005531311), SFFloat(0.916700005531311), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.8730000257492065), SFRotation(0.06094000115990639), SFRotation(0.48399999737739563), SFRotation(0.2865000069141388), SFRotation(0.9962999820709229), SFRotation(-0.010569999925792217), SFRotation(0.08481000363826752), SFRotation(0.24879999458789825), SFRotation(0.9965000152587891), SFRotation(0.01590999960899353), SFRotation(-0.08222000300884247), SFRotation(0.38359999656677246), SFRotation(-0.7017999887466431), SFRotation(-0.03223000094294548), SFRotation(-0.7117000222206116), SFRotation(0.12890000641345978), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.551800012588501), SFRotation(-0.996399998664856), SFRotation(0.02230999991297722), SFRotation(0.08169999718666077), SFRotation(0.535099983215332), SFRotation(-0.98089998960495), SFRotation(0.04912000149488449), SFRotation(0.18809999525547028), SFRotation(0.5203999876976013), SFRotation(-0.8730000257492065), SFRotation(0.06094000115990639), SFRotation(0.48399999737739563), SFRotation(0.2865000069141388)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_KNEE_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.20829999446868896), SFFloat(0.375), SFFloat(0.5), SFFloat(0.666700005531311), SFFloat(0.791700005531311), SFFloat(0.916700005531311), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.32260000705718994), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.15559999644756317), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.08677999675273895), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8751000165939331), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.13100004196167), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.09961000084877014), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.39419999718666077), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.32260000705718994)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_ANKLE_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.20829999446868896), SFFloat(0.375), SFFloat(0.666700005531311), SFFloat(0.916700005531311), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.06710000336170197), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2152000069618225), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.31839999556541443), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4717000126838684), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.29120001196861267), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.22220000624656677), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.06710000336170197)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_ANKLE_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.20829999446868896), SFFloat(0.375), SFFloat(0.45829999446868896), SFFloat(0.5), SFFloat(0.666700005531311), SFFloat(0.75), SFFloat(0.7799999713897705), SFFloat(0.916700005531311), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.353300005197525), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.10719999670982361), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.4000000059604645), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.12700000405311584), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.017999999225139618), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.057999998331069946), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.23999999463558197), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3499999940395355), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.33000001311302185), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_subtalar_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.30000001192092896), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_MIDTARSAL_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-0.20000000298023224), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_metatarsal_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.800000011920929), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.30000001192092896), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.15000000596046448), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.30000001192092896), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.30000001192092896)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_HIP_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.20829999446868896), SFFloat(0.29170000553131104), SFFloat(0.375), SFFloat(0.5), SFFloat(0.666700005531311), SFFloat(0.791700005531311), SFFloat(0.916700005531311), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.5831000208854675), SFRotation(0.035110000520944595), SFRotation(0.8116000294685364), SFRotation(0.14810000360012054), SFRotation(-0.9950000047683716), SFRotation(0.02295999974012375), SFRotation(0.0967399999499321), SFRotation(0.4683000147342682), SFRotation(-1), SFRotation(0.0019000000320374966), SFRotation(0.007960000075399876), SFRotation(0.4731999933719635), SFRotation(-0.9980000257492065), SFRotation(-0.015799999237060547), SFRotation(-0.06102000176906586), SFRotation(0.5078999996185303), SFRotation(-0.991100013256073), SFRotation(-0.03540999814867973), SFRotation(-0.12860000133514404), SFRotation(0.5418999791145325), SFRotation(-0.913100004196167), SFRotation(-0.0624300017952919), SFRotation(-0.40299999713897705), SFRotation(0.3361000120639801), SFRotation(-0.43059998750686646), SFRotation(-0.07962000370025635), SFRotation(-0.8989999890327454), SFRotation(0.07038000226020813), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.257099986076355), SFRotation(0.9890999794006348), SFRotation(-0.028049999848008156), SFRotation(0.1444000005722046), SFRotation(0.3878999948501587), SFRotation(-0.5831000208854675), SFRotation(0.035110000520944595), SFRotation(0.8116000294685364), SFRotation(0.14810000360012054)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_KNEE_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.20829999446868896), SFFloat(0.29170000553131104), SFFloat(0.375), SFFloat(0.5), SFFloat(0.666700005531311), SFFloat(0.791700005531311), SFFloat(0.916700005531311), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8572999835014343), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8925999999046326), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.535099983215332), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.17560000717639923), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.11940000206232071), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.31529998779296875), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.0935399979352951), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.0855799987912178), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2475000023841858), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8572999835014343)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_subtalar_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.225), SFFloat(0.25), SFFloat(0.35), SFFloat(0.45), SFFloat(0.85), SFFloat(0.91)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.25)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_MIDTARSAL_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2199999988079071), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-0.20000000298023224), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-0.20000000298023224)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_metatarsal_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.20000000298023224), SFFloat(0.4000000059604645), SFFloat(0.800000011920929), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.15000000596046448), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.30000001192092896), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.30000001192092896), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.15000000596046448)])),

                OrientationInterpolator(
                  DEF_ : SFString('VL5_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.20829999446868896), SFFloat(0.375), SFFloat(0.75), SFFloat(0.833299994468689), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.08259999752044678), SFRotation(-0.01971999928355217), SFRotation(-0.5974000096321106), SFRotation(0.8016999959945679), SFRotation(0.08230999857187271), SFRotation(0.009296000003814697), SFRotation(-0.9648000001907349), SFRotation(0.26269999146461487), SFRotation(0.17339999973773956), SFRotation(-0.012380000203847885), SFRotation(0.9549000263214111), SFRotation(-0.29679998755455017), SFRotation(0.0873199999332428), SFRotation(-0.008124999701976776), SFRotation(0.9690999984741211), SFRotation(-0.24629999697208405), SFRotation(0.15800000727176666), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.08259999752044678)])),

                OrientationInterpolator(
                  DEF_ : SFString('SKULLBASE_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.41670000553131104), SFFloat(0.5), SFFloat(0.583299994468689), SFFloat(0.666700005531311), SFFloat(0.75), SFFloat(0.833299994468689), SFFloat(0.916700005531311), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.08640000224113464), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.18250000476837158), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.15049999952316284), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.10530000180006027), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.04391000047326088), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.031190000474452972), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.0793600007891655), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.1615999937057495), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.1550000011920929), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.08641999959945679)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_SHOULDER_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.916700005531311), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0.4000000059604645), SFRotation(0.11999999731779099), SFRotation(-1), SFRotation(0), SFRotation(0.4000000059604645), SFRotation(0.1860000044107437), SFRotation(1), SFRotation(0), SFRotation(0.10000000149011612), SFRotation(0.335999995470047), SFRotation(1), SFRotation(0), SFRotation(0.4000000059604645), SFRotation(0.11999999731779099)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_ELBOW_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.916700005531311), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.06599999964237213), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4880000054836273), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.01769999973475933), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.06598780304193497)])),

                OrientationInterpolator(
                  DEF_ : SFString('L_WRIST_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.916700005531311), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.460999995470047), SFRotation(-0.3301999866962433), SFRotation(-0.9275000095367432), SFRotation(0.17550000548362732), SFRotation(0.5388000011444092), SFRotation(0.03277739882469177), SFRotation(-0.99931401014328), SFRotation(-0.01721850037574768), SFRotation(0.4920330047607422), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.4611000120639801)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_SHOULDER_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.916700005531311), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(-1), SFRotation(0.09200000017881393), SFRotation(1), SFRotation(0), SFRotation(-0.20000000298023224), SFRotation(0.3197000026702881), SFRotation(-1), SFRotation(0), SFRotation(-0.5), SFRotation(0.15639999508857727), SFRotation(-1), SFRotation(0), SFRotation(-1), SFRotation(0.09200000017881393)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_ELBOW_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.916700005531311), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4115000069141388), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0925000011920929), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5725679993629456), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4115079939365387)])),

                OrientationInterpolator(
                  DEF_ : SFString('R_WRIST_ANIMATOR'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.916700005531311), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.8129000067710876), SFRotation(0.47589999437332153), SFRotation(-0.33570000529289246), SFRotation(0.13459999859333038), SFRotation(0.15330000221729279), SFRotation(-0.9878000020980835), SFRotation(0.02582000009715557), SFRotation(0.3901999890804291), SFRotation(-0.5701000094413757), SFRotation(0.7603999972343445), SFRotation(-0.3109999895095825), SFRotation(0.3659999966621399), SFRotation(-0.8129000067710876), SFRotation(0.47589999437332153), SFRotation(-0.33570000529289246), SFRotation(0.13459999859333038)]))]),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('HUMANOIDROOT_POSITION_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('HUMANOIDROOT_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('L_HIP_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('L_KNEE_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('L_ANKLE_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('L_subtalar_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('L_MIDTARSAL_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('L_metatarsal_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('R_HIP_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('R_KNEE_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('R_ANKLE_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('R_subtalar_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('R_MIDTARSAL_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('R_metatarsal_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('VL5_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('SKULLBASE_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('L_SHOULDER_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('L_ELBOW_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Time1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('L_WRIST_ANIMATOR')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('HUMANOIDROOT_POSITION_ANIMATOR'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('Joe_HumanoidRoot')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('HUMANOIDROOT_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_HumanoidRoot')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('L_HIP_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('L_KNEE_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('L_ANKLE_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('L_MIDTARSAL_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_midtarsal')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('L_subtalar_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_subtalar')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('L_metatarsal_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_metatarsal')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('R_HIP_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('R_KNEE_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('R_ANKLE_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('R_subtalar_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_subtalar')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('R_MIDTARSAL_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_midtarsal')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('R_metatarsal_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_metatarsal')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('VL5_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vl5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('SKULLBASE_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_skullbase')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('L_SHOULDER_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('L_ELBOW_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('L_WRIST_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('R_SHOULDER_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('R_ELBOW_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('R_WRIST_ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_wrist'))]));
void main() { exit(0); }
