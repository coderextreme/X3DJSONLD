// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Full'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('InlineSoundSource.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the \"url\" of X3D file.')),

            meta(
              name_ : SFString('info'),
              content_ : SFString('This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('28 October 2020')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('4 August 2021')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('CHANGELOG.txt')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('credit for audio files')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://medialab.hmu.gr/minipages/x3domAudio')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('InlineSoundSource.x3d')),

            NavigationInfo(
              DEF_ : SFString('NAV')),

            Background(
              backUrl_ : MFString([SFString("images/generic/BK1.png"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png")]),
              bottomUrl_ : MFString([SFString("images/generic/DN1.png"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png")]),
              frontUrl_ : MFString([SFString("images/generic/FR1.png"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png")]),
              leftUrl_ : MFString([SFString("images/generic/LF1.png"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png")]),
              rightUrl_ : MFString([SFString("images/generic/RT1.png"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png")]),
              topUrl_ : MFString([SFString("images/generic/UP1.png"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png")])),

            Viewpoint(
              DEF_ : SFString('Camera001'),
              description_ : SFString('Camera001'),
              farDistance_ : 0,
              nearDistance_ : 1,
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.523599)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(2000), SFDouble(3500)])),

            Transform(
              DEF_ : SFString('Floor'),
              translation_ : SFVec3f([SFDouble(1.241), SFDouble(0), SFDouble(0.358)]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('WireColor'),
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.122), SFDouble(0.114), SFDouble(0.125)]))),
                  geometry_ : 
                    IndexedFaceSet(
                      DEF_ : SFString('Box001-GEOMETRY'),
                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(5), SFInt32(-1), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(12), SFInt32(13), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(18), SFInt32(19), SFInt32(20), SFInt32(-1), SFInt32(21), SFInt32(22), SFInt32(23), SFInt32(-1), SFInt32(24), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(27), SFInt32(28), SFInt32(29), SFInt32(-1), SFInt32(30), SFInt32(31), SFInt32(32), SFInt32(-1), SFInt32(33), SFInt32(34), SFInt32(35), SFInt32(-1)]),
                      solid_ : false,
                      coord_ : 
                        Coordinate(
                          point_ : MFVec3f([SFVec3f([-1000,0,1000]),SFVec3f([-1000,0,-1000]),SFVec3f([1000,0,-1000]),SFVec3f([1000,0,-1000]),SFVec3f([1000,0,1000]),SFVec3f([-1000,0,1000]),SFVec3f([-1000,8.031588,1000]),SFVec3f([1000,8.031588,1000]),SFVec3f([1000,8.031588,-1000]),SFVec3f([1000,8.031588,-1000]),SFVec3f([-1000,8.031588,-1000]),SFVec3f([-1000,8.031588,1000]),SFVec3f([-1000,0,1000]),SFVec3f([1000,0,1000]),SFVec3f([1000,8.031588,1000]),SFVec3f([1000,8.031588,1000]),SFVec3f([-1000,8.031588,1000]),SFVec3f([-1000,0,1000]),SFVec3f([1000,0,1000]),SFVec3f([1000,0,-1000]),SFVec3f([1000,8.031588,-1000]),SFVec3f([1000,8.031588,-1000]),SFVec3f([1000,8.031588,1000]),SFVec3f([1000,0,1000]),SFVec3f([1000,0,-1000]),SFVec3f([-1000,0,-1000]),SFVec3f([-1000,8.031588,-1000]),SFVec3f([-1000,8.031588,-1000]),SFVec3f([1000,8.031588,-1000]),SFVec3f([1000,0,-1000]),SFVec3f([-1000,0,-1000]),SFVec3f([-1000,0,1000]),SFVec3f([-1000,8.031588,1000]),SFVec3f([-1000,8.031588,1000]),SFVec3f([-1000,8.031588,-1000]),SFVec3f([-1000,0,-1000])])),
                      normal_ : 
                        Normal(
                          vector_ : MFVec3f([SFVec3f([0,-1,0]),SFVec3f([0,-1,0]),SFVec3f([0,-1,0]),SFVec3f([0,-1,0]),SFVec3f([0,-1,0]),SFVec3f([0,-1,0]),SFVec3f([0,1,0]),SFVec3f([0,1,0]),SFVec3f([0,1,0]),SFVec3f([0,1,0]),SFVec3f([0,1,0]),SFVec3f([0,1,0]),SFVec3f([0,0,1]),SFVec3f([0,0,1]),SFVec3f([0,0,1]),SFVec3f([0,0,1]),SFVec3f([0,0,1]),SFVec3f([0,0,1]),SFVec3f([1,0,0]),SFVec3f([1,0,0]),SFVec3f([1,0,0]),SFVec3f([1,0,0]),SFVec3f([1,0,0]),SFVec3f([1,0,0]),SFVec3f([0,0,-1]),SFVec3f([0,0,-1]),SFVec3f([0,0,-1]),SFVec3f([0,0,-1]),SFVec3f([0,0,-1]),SFVec3f([0,0,-1]),SFVec3f([-1,0,0]),SFVec3f([-1,0,0]),SFVec3f([-1,0,0]),SFVec3f([-1,0,0]),SFVec3f([-1,0,0]),SFVec3f([-1,0,0])]))))]),

            Transform(
              DEF_ : SFString('InlineScene'),
              children_ : [
                Inline(
                  DEF_ : SFString('inline'),
                  url_ : MFString([SFString("x3d/example1.x3d"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d"), SFString("x3d/example1.wrl"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl")]))])]));
void main() { exit(0); }
