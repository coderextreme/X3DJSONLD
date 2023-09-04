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
              content_ : SFString('SpatialAudioCameraAnimation.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world.')),

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
              content_ : SFString('5 December 2021')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('CHANGELOG.txt')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.medialab.hmu.gr/minipages/x3domAudio')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('credit for audio files')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('SpatialAudioCameraAnimation.x3d')),

            NavigationInfo(),

            Background(
              frontUrl_ : MFString([SFString("images/generic/FR1.png"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png")]),
              backUrl_ : MFString([SFString("images/generic/BK1.png"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png")]),
              leftUrl_ : MFString([SFString("images/generic/LF1.png"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png")]),
              rightUrl_ : MFString([SFString("images/generic/RT1.png"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png")]),
              topUrl_ : MFString([SFString("images/generic/UP1.png"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png")]),
              bottomUrl_ : MFString([SFString("images/generic/DN1.png"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png")])),

            Viewpoint(
              DEF_ : SFString('Camera001'),
              description_ : SFString('Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view'),
              position_ : SFVec3f([SFDouble(0), SFDouble(2000), SFDouble(3500)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.523599)])),

            TimeSensor(
              DEF_ : SFString('TIMER'),
              cycleInterval_ : 33.333332,
              loop_ : true),

            PositionInterpolator(
              DEF_ : SFString('Camera001-POS-INTERP'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([0,2000,3500]),SFVec3f([0,2000,0]),SFVec3f([0,2000,-3500]),SFVec3f([0,2000,0]),SFVec3f([0,2000,3500])])),

            OrientationInterpolator(
              DEF_ : SFString('Camera001-ROT-INTERP'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-0.523599), SFRotation(0.99999), SFRotation(0.003554), SFRotation(0.002727), SFRotation(-1.309007), SFRotation(0), SFRotation(-0.965926), SFRotation(-0.258819), SFRotation(-3.141593), SFRotation(0.002282), SFRotation(-0.793351), SFRotation(-0.60876), SFRotation(-3.135645), SFRotation(1), SFRotation(-0.000001), SFRotation(0), SFRotation(-0.523599)])),

            Transform(
              DEF_ : SFString('Floor'),
              translation_ : SFVec3f([SFDouble(1.241), SFDouble(0), SFDouble(0.358)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('WireColor'),
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.122), SFDouble(0.114), SFDouble(0.125)]))),
                  geometry_ : 
                    Box(
                      size_ : SFVec3f([SFDouble(2000), SFDouble(1), SFDouble(2000)])))),

            Transform(
              DEF_ : SFString('TransformAudio1'),
              translation_ : SFVec3f([SFDouble(-933.1235), SFDouble(0), SFDouble(-926.2532)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('WireColor_1'),
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.690196), SFDouble(0.101961), SFDouble(0.101961)]))),
                  geometry_ : 
                    Sphere(
                      radius_ : 100)),
              children_ : [
                Billboard(
                  children_ : [
                    Transform(
                      DEF_ : SFString('violin'),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(100), SFDouble(0)]),
                      rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.5)]),
                      scale_ : SFVec3f([SFDouble(100), SFDouble(100), SFDouble(100)]),
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  ambientIntensity_ : 0.0933,
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  specularColor_ : SFColor([SFDouble(0.46), SFDouble(0.46), SFDouble(0.46)]),
                                  shininess_ : 0.51)),
                          geometry_ : 
                            Text(
                              string_ : MFString([SFString("Violin")]),
                              fontStyle_ : 
                                FontStyle(
                                  DEF_ : SFString('ModelFontStyle'),
                                  family_ : MFString([SFString("Times"), SFString("SERIF")]),
                                  style_ : SFString('BOLD')))))])]),

            Transform(
              DEF_ : SFString('TransformAudio2'),
              translation_ : SFVec3f([SFDouble(933.4756), SFDouble(0), SFDouble(924.4232)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('WireColor_2'),
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.105882), SFDouble(0.694118), SFDouble(0.580392)]))),
                  geometry_ : 
                    Sphere(
                      radius_ : 100)),
              children_ : [
                Billboard(
                  children_ : [
                    Transform(
                      DEF_ : SFString('saxophone'),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(100), SFDouble(0)]),
                      rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.5)]),
                      scale_ : SFVec3f([SFDouble(100), SFDouble(100), SFDouble(100)]),
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  ambientIntensity_ : 0.0933,
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  specularColor_ : SFColor([SFDouble(0.46), SFDouble(0.46), SFDouble(0.46)]),
                                  shininess_ : 0.51)),
                          geometry_ : 
                            Text(
                              string_ : MFString([SFString("Saxophone")]),
                              fontStyle_ : 
                                FontStyle(
                                  USE_ : SFString('ModelFontStyle')))))])]),

            ListenerPointSource(
              trackCurrentView_ : true),

            StreamAudioDestination(
              children_ : [
                SpatialSound(
                  DEF_ : SFString('Audio1'),
                  children_ : [
                    Gain(
                      children_ : [
                        AudioClip(
                          description_ : SFString('Violin'),
                          url_ : MFString([SFString("sound/violin.mp3"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3")]),
                          loop_ : true)])]),

                SpatialSound(
                  DEF_ : SFString('Audio2'),
                  children_ : [
                    Gain(
                      children_ : [
                        AudioClip(
                          description_ : SFString('Saxophone'),
                          url_ : MFString([SFString("sound/saxophone.mp3"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3")]),
                          loop_ : true)])])]),

            ROUTE(
              fromNode_ : SFString('TIMER'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Camera001-POS-INTERP'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Camera001-POS-INTERP'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Camera001'),
              toField_ : SFString('position')),

            ROUTE(
              fromNode_ : SFString('TIMER'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Camera001-ROT-INTERP'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Camera001-ROT-INTERP'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Camera001'),
              toField_ : SFString('orientation'))]));
void main() { exit(0); }
