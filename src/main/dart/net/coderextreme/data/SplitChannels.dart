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
              content_ : SFString('SplitChannels.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner.')),

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
              content_ : SFString('http://www.medialab.hmu.gr/minipages/x3domAudio')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('credit for audio files')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('SplitChannels.x3d')),

            NavigationInfo(),

            Background(
              skyColor_ : MFColor([SFColor(0.2), SFColor(0.2), SFColor(0.21)])),

            Viewpoint(
              position_ : SFVec3f([SFDouble(0), SFDouble(500), SFDouble(600)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.5)]),
              retainUserOffsets_ : true),

            Transform(
              DEF_ : SFString('PowerR'),
              translation_ : SFVec3f([SFDouble(100), SFDouble(400), SFDouble(400)]),
              children_ : [
                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(40), SFDouble(0)]),
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.5)]),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('audio_emit'),
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              specularColor_ : SFColor([SFDouble(0.01), SFDouble(0.01), SFDouble(0.01)]),
                              emissiveColor_ : SFColor([SFDouble(0.8), SFDouble(0.8), SFDouble(0.8)]))),
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(10), SFDouble(80), SFDouble(0.01)])))),

                Transform(
                  translation_ : SFVec3f([SFDouble(-2.7), SFDouble(37), SFDouble(0)]),
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.5)]),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('audio_emit2'),
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              specularColor_ : SFColor([SFDouble(0.01), SFDouble(0.01), SFDouble(0.01)]),
                              emissiveColor_ : SFColor([SFDouble(0.8), SFDouble(0.8), SFDouble(0.8)])),
                          texture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("images/line.png"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png")]))),
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(25), SFDouble(83), SFDouble(0.01)])))),

                Transform(
                  DEF_ : SFString('volumeRight'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(-10), SFDouble(0)]),
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.5)]),
                  scale_ : SFVec3f([SFDouble(10), SFDouble(10), SFDouble(10)]),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              ambientIntensity_ : 0.0933,
                              diffuseColor_ : SFColor([SFDouble(0.345), SFDouble(0.345), SFDouble(0.882)]),
                              specularColor_ : SFColor([SFDouble(0.46), SFDouble(0.46), SFDouble(0.46)]),
                              shininess_ : 0.51)),
                      geometry_ : 
                        Text(
                          fontStyle_ : 
                            FontStyle(
                              family_ : MFString([SFString("Times")]),
                              style_ : SFString('BOLD')))))]),

            Transform(
              DEF_ : SFString('PowerL'),
              translation_ : SFVec3f([SFDouble(-100), SFDouble(400), SFDouble(400)]),
              children_ : [
                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(40), SFDouble(0)]),
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.5)]),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('audio_emit3'),
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              specularColor_ : SFColor([SFDouble(0.01), SFDouble(0.01), SFDouble(0.01)]),
                              emissiveColor_ : SFColor([SFDouble(0.8), SFDouble(0.8), SFDouble(0.8)]))),
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(10), SFDouble(80), SFDouble(0.01)])))),

                Transform(
                  translation_ : SFVec3f([SFDouble(13.2), SFDouble(37), SFDouble(0)]),
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.5)]),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('audio_emit4'),
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              specularColor_ : SFColor([SFDouble(0.01), SFDouble(0.01), SFDouble(0.01)]),
                              emissiveColor_ : SFColor([SFDouble(0.8), SFDouble(0.8), SFDouble(0.8)])),
                          texture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("images/line.png"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png")]))),
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(25), SFDouble(83), SFDouble(0.01)])))),

                Transform(
                  DEF_ : SFString('volumeLeft'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(-10), SFDouble(0)]),
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.5)]),
                  scale_ : SFVec3f([SFDouble(10), SFDouble(10), SFDouble(10)]),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              ambientIntensity_ : 0.0933,
                              diffuseColor_ : SFColor([SFDouble(0.345), SFDouble(0.345), SFDouble(0.882)]),
                              specularColor_ : SFColor([SFDouble(0.46), SFDouble(0.46), SFDouble(0.46)]),
                              shininess_ : 0.51)),
                      geometry_ : 
                        Text(
                          fontStyle_ : 
                            FontStyle(
                              family_ : MFString([SFString("Times")]),
                              style_ : SFString('BOLD')))))]),

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
                    Box(
                      size_ : SFVec3f([SFDouble(1500), SFDouble(10), SFDouble(500)])))),

            ListenerPointSource(
              trackCurrentView_ : true),

            StreamAudioDestination(
              children_ : [
                Gain(
                  children_ : [
                    ChannelMerger(
                      children_ : [
                        ChannelSelector(
                          children_ : [
                            Gain()]),

                        ChannelSelector(
                          channelSelection_ : 1,
                          children_ : [
                            Gain()])])])]),

            ChannelSplitter(
              DEF_ : SFString('ChannelSplitter'),
              channelCountMode_ : SFString('EXPLICIT'),
              outputs_ : 
                AudioClip(
                  description_ : SFString('Violin'),
                  url_ : MFString([SFString("sound/violin.mp3"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3")]))),

            Transform(
              DEF_ : SFString('Audio3'),
              translation_ : SFVec3f([SFDouble(0), SFDouble(100), SFDouble(0)]),
              rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.5)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('audio_emit5'),
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.3), SFDouble(1), SFDouble(0.3)]),
                          specularColor_ : SFColor([SFDouble(0.01), SFDouble(0.01), SFDouble(0.01)]),
                          emissiveColor_ : SFColor([SFDouble(0.8), SFDouble(0.8), SFDouble(0.8)])),
                      texture_ : 
                        ImageTexture(
                          url_ : MFString([SFString("images/loudspeaker.png"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png")]))),
                  geometry_ : 
                    Box(
                      size_ : SFVec3f([SFDouble(100), SFDouble(100), SFDouble(0.001)]))))]));
void main() { exit(0); }
