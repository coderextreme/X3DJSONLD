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
              content_ : SFString('Filters.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects.')),

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
              content_ : SFString('https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('Filters.x3d')),

            NavigationInfo(),

            Background(
              skyColor_ : MFColor([SFColor(0.2), SFColor(0.2), SFColor(0.2)])),

            Viewpoint(
              description_ : SFString('View entire audio model'),
              position_ : SFVec3f([SFDouble(0), SFDouble(500), SFDouble(600)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.5)]),
              retainUserOffsets_ : true),

            Transform(
              DEF_ : SFString('TransformAudio1'),
              translation_ : SFVec3f([SFDouble(-200), SFDouble(50), SFDouble(0)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('audio_emit'),
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
                          specularColor_ : SFColor([SFDouble(0.01), SFDouble(0.01), SFDouble(0.01)]),
                          emissiveColor_ : SFColor([SFDouble(0.8), SFDouble(0.8), SFDouble(0.8)]))),
                  geometry_ : 
                    Sphere(
                      radius_ : 30))),

            Transform(
              DEF_ : SFString('TransformAudio2'),
              translation_ : SFVec3f([SFDouble(0), SFDouble(50), SFDouble(0)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('audio_emit2'),
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
                          specularColor_ : SFColor([SFDouble(0.01), SFDouble(0.01), SFDouble(0.01)]),
                          emissiveColor_ : SFColor([SFDouble(0.8), SFDouble(0.8), SFDouble(0.8)]))),
                  geometry_ : 
                    Sphere(
                      radius_ : 30))),

            Transform(
              DEF_ : SFString('TransformAudio3'),
              translation_ : SFVec3f([SFDouble(200), SFDouble(50), SFDouble(0)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('audio_emit3'),
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
                          specularColor_ : SFColor([SFDouble(0.01), SFDouble(0.01), SFDouble(0.01)]),
                          emissiveColor_ : SFColor([SFDouble(0.8), SFDouble(0.8), SFDouble(0.8)]))),
                  geometry_ : 
                    Sphere(
                      radius_ : 30))),

            Transform(
              DEF_ : SFString('AnimData'),
              translation_ : SFVec3f([SFDouble(0), SFDouble(50), SFDouble(0)])),

            Transform(
              DEF_ : SFString('AnimDataBoxH'),
              translation_ : SFVec3f([SFDouble(0), SFDouble(100), SFDouble(0)])),

            Transform(
              DEF_ : SFString('AnimDataBoxM'),
              translation_ : SFVec3f([SFDouble(15), SFDouble(100), SFDouble(0)])),

            Transform(
              DEF_ : SFString('AnimDataBoxL'),
              translation_ : SFVec3f([SFDouble(30), SFDouble(100), SFDouble(0)])),

            Transform(
              DEF_ : SFString('AnimDataBoxMM'),
              translation_ : SFVec3f([SFDouble(-15), SFDouble(100), SFDouble(0)])),

            Transform(
              DEF_ : SFString('AnimDataBoxLM'),
              translation_ : SFVec3f([SFDouble(-30), SFDouble(100), SFDouble(0)])),

            Transform(
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('floor'),
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
                          specularColor_ : SFColor([SFDouble(0.5), SFDouble(0.6), SFDouble(0.7)]),
                          shininess_ : 0.8)),
                  geometry_ : 
                    Cylinder(
                      radius_ : 500))),

            ListenerPointSource(
              trackCurrentView_ : true),

            StreamAudioDestination(
              children_ : [
                DynamicsCompressor(
                  children_ : [
                    Gain(
                      children_ : [
                        SpatialSound(
                          DEF_ : SFString('Audio1'),
                          children_ : [
                            Gain(
                              children_ : [
                                Analyser(
                                  children_ : [
                                    BiquadFilter(
                                      type_ : SFString("ALLPASS"),
                                      detune_ : 50,
                                      frequency_ : 600,
                                      qualityFactor_ : 30,
                                      children_ : [
                                        AudioClip(
                                          description_ : SFString('Techno beat'),
                                          url_ : MFString([SFString("sound/techno_beat.mp3"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3")]),
                                          loop_ : true)])])])]),

                        SpatialSound(
                          DEF_ : SFString('Audio2'),
                          children_ : [
                            Gain(
                              children_ : [
                                Analyser(
                                  children_ : [
                                    BiquadFilter(
                                      type_ : SFString("ALLPASS"),
                                      detune_ : 15,
                                      frequency_ : 600,
                                      qualityFactor_ : 15,
                                      children_ : [
                                        AudioClip(
                                          description_ : SFString('Simple beat'),
                                          url_ : MFString([SFString("sound/beat.mp3"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3")]),
                                          loop_ : true)])])])]),

                        SpatialSound(
                          DEF_ : SFString('Audio3'),
                          children_ : [
                            Gain(
                              children_ : [
                                Analyser(
                                  children_ : [
                                    BiquadFilter(
                                      type_ : SFString("ALLPASS"),
                                      frequency_ : 1000,
                                      qualityFactor_ : 0,
                                      children_ : [
                                        AudioClip(
                                          description_ : SFString('Wobble loop'),
                                          url_ : MFString([SFString("sound/wobble_loop.mp3"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3")]),
                                          loop_ : true)])])])])])])])]));
void main() { exit(0); }
