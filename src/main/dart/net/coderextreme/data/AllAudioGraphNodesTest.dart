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
              content_ : SFString('AllAudioGraphNodesTest.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('25 October 2020')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('4 August 2021')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('Developmental test, no actual 3D model expected')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('AllAudioGraphNodes.x3d')),

            Shape(
              geometry_ : 
                Box(),
              appearance_ : 
                Appearance(
                  acousticProperties_ : 
                    AcousticProperties(),
                  material_ : 
                    Material())),

            SpatialSound(
              dopplerEnabled_ : "false",
              children_ : [
                Analyser(
                  children_ : [
                    AudioDestination(
                      children_ : [
                        BiquadFilter(
                          children_ : [
                            ChannelMerger(
                              children_ : [
                                ChannelSelector(
                                  children_ : [
                                    ChannelSplitter(
                                      outputs_ : 
                                        Convolver(
                                          children_ : [
                                            Delay(
                                              children_ : [
                                                DynamicsCompressor(
                                                  children_ : [
                                                    Gain(
                                                      children_ : [
                                                        StreamAudioDestination(
                                                          children_ : [
                                                            WaveShaper(
                                                              /*The following X3DSoundSourceNode nodes have no audio-graph children*/
                                                              children_ : [
                                                                BufferAudioSource(),

                                                                ListenerPointSource(
                                                                  dopplerEnabled_ : "false"),

                                                                MicrophoneSource(),

                                                                OscillatorSource(),

                                                                StreamAudioSource()])])])])])]))])])])])])]),

            Sound(
              location_ : SFVec3f([SFDouble(0), SFDouble(1.6), SFDouble(0)]),
              source_ : 
                AudioClip(
                  description_ : SFString('testing'),
                  url_ : MFString([SFString("sound/saxophone.mp3"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3")]))),

            Sound(
              location_ : SFVec3f([SFDouble(0), SFDouble(1.6), SFDouble(0)]),
              source_ : 
                MovieTexture(
                  description_ : SFString('testing'),
                  url_ : MFString([SFString("bogus.mpg"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg")])))]));
void main() { exit(0); }
