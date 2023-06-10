'use strict';
import { X3D } from './x3d.mjs';
import fs from 'fs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { Box } from './x3d.mjs';
import { ImageTexture } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
import { ListenerPointSource } from './x3d.mjs';
import { StreamAudioDestination } from './x3d.mjs';
import { Gain } from './x3d.mjs';
import { ChannelMerger } from './x3d.mjs';
import { ChannelSelector } from './x3d.mjs';
import { SFInt32 } from './x3d.mjs';
import { ChannelSplitter } from './x3d.mjs';
import { AudioClip } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("SplitChannels.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner.")}),

            new meta({
              name : new SFString("info"),
              content : new SFString("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("28 October 2020")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("5 December 2021")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("CHANGELOG.txt")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("credit for audio files")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.medialab.hmu.gr/minipages/x3domAudio")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("SplitChannels.x3d")}),

            new NavigationInfo({
              type : ["ON"]}),

            new Background({
              skyColor : new MFColor([0.2,0.2,0.21])}),

            new Viewpoint({
              orientation : new SFRotation([1,0,0,-0.5]),
              position : new SFVec3f([0,500,600]),
              retainUserOffsets : new SFBool(true)}),

            new Transform({
              DEF : new SFString("PowerR"),
              translation : new SFVec3f([100,400,400]),
              children : new MFNode([
                new Transform({
                  rotation : new SFRotation([1,0,0,-0.5]),
                  translation : new SFVec3f([0,40,0]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("audio_emit"),
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,1,0]),
                              emissiveColor : new SFColor([0.8,0.8,0.8]),
                              specularColor : new SFColor([0.01,0.01,0.01])}))})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([10,80,0.01])}))})])}),

                new Transform({
                  rotation : new SFRotation([1,0,0,-0.5]),
                  translation : new SFVec3f([-2.7,37,0]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("audio_emit2"),
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,1,0]),
                              emissiveColor : new SFColor([0.8,0.8,0.8]),
                              specularColor : new SFColor([0.01,0.01,0.01])})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"])}))})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([25,83,0.01])}))})])}),

                new Transform({
                  DEF : new SFString("volumeRight"),
                  rotation : new SFRotation([1,0,0,-0.5]),
                  scale : new SFVec3f([10,10,10]),
                  translation : new SFVec3f([0,-10,0]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.0933),
                              diffuseColor : new SFColor([0.345,0.345,0.882]),
                              shininess : new SFFloat(0.51),
                              specularColor : new SFColor([0.46,0.46,0.46])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["Right Channel Volume"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              family : new MFString(["Times"]),
                              style : new SFString("BOLD")}))}))})])})])}),

            new Transform({
              DEF : new SFString("PowerL"),
              translation : new SFVec3f([-100,400,400]),
              children : new MFNode([
                new Transform({
                  rotation : new SFRotation([1,0,0,-0.5]),
                  translation : new SFVec3f([0,40,0]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("audio_emit3"),
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,1,0]),
                              emissiveColor : new SFColor([0.8,0.8,0.8]),
                              specularColor : new SFColor([0.01,0.01,0.01])}))})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([10,80,0.01])}))})])}),

                new Transform({
                  rotation : new SFRotation([1,0,0,-0.5]),
                  translation : new SFVec3f([13.2,37,0]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("audio_emit4"),
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,1,0]),
                              emissiveColor : new SFColor([0.8,0.8,0.8]),
                              specularColor : new SFColor([0.01,0.01,0.01])})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"])}))})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([25,83,0.01])}))})])}),

                new Transform({
                  DEF : new SFString("volumeLeft"),
                  rotation : new SFRotation([1,0,0,-0.5]),
                  scale : new SFVec3f([10,10,10]),
                  translation : new SFVec3f([0,-10,0]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.0933),
                              diffuseColor : new SFColor([0.345,0.345,0.882]),
                              shininess : new SFFloat(0.51),
                              specularColor : new SFColor([0.46,0.46,0.46])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["Left Channel Volume"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              family : new MFString(["Times"]),
                              style : new SFString("BOLD")}))}))})])})])}),

            new Transform({
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("floor"),
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.1,0.1,0.1]),
                          shininess : new SFFloat(0.8),
                          specularColor : new SFColor([0.5,0.6,0.7])}))})),
                  geometry : new SFNode(
                    new Box({
                      size : new SFVec3f([1500,10,500])}))})])}),

            new ListenerPointSource({
              trackCurrentView : new SFBool(true)}),

            new StreamAudioDestination({
              channelCountMode : new SFString("MAX"),
              channelInterpretation : new SFString("SPEAKERS"),
              children : new MFNode([
                new Gain({
                  channelCountMode : new SFString("MAX"),
                  channelInterpretation : new SFString("SPEAKERS"),
                  children : new MFNode([
                    new ChannelMerger({
                      channelCountMode : new SFString("MAX"),
                      channelInterpretation : new SFString("SPEAKERS"),
                      children : new MFNode([
                        new ChannelSelector({
                          channelCountMode : new SFString("MAX"),
                          channelInterpretation : new SFString("SPEAKERS"),
                          children : new MFNode([
                            new Gain({
                              USE : new SFString("ChannelSplitter")})])}),

                        new ChannelSelector({
                          channelSelection : new SFInt32(1),
                          channelCountMode : new SFString("MAX"),
                          channelInterpretation : new SFString("SPEAKERS"),
                          children : new MFNode([
                            new Gain({
                              USE : new SFString("ChannelSplitter")})])})])})])})])}),

            new ChannelSplitter({
              DEF : new SFString("ChannelSplitter"),
              channelCountMode : new SFString("explicit"),
              channelInterpretation : new SFString("SPEAKERS"),
              outputs : new SFNode(
                new AudioClip({
                  description : new SFString("Violin"),
                  url : new MFString(["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"])}))}),

            new Transform({
              DEF : new SFString("Audio3"),
              rotation : new SFRotation([1,0,0,-0.5]),
              translation : new SFVec3f([0,100,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("audio_emit5"),
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.3,1,0.3]),
                          emissiveColor : new SFColor([0.8,0.8,0.8]),
                          specularColor : new SFColor([0.01,0.01,0.01])})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["images/loudspeaker.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"])}))})),
                  geometry : new SFNode(
                    new Box({
                      size : new SFVec3f([100,100,0.001])}))})])})])}))});
console.log(X3D0.toXMLNode());
