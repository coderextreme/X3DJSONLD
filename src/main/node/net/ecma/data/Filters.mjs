'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
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
import { Sphere } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Cylinder } from './x3d.mjs';
import { ListenerPointSource } from './x3d.mjs';
import { StreamAudioDestination } from './x3d.mjs';
import { DynamicsCompressor } from './x3d.mjs';
import { Gain } from './x3d.mjs';
import { SpatialSound } from './x3d.mjs';
import { Analyser } from './x3d.mjs';
import { BiquadFilter } from './x3d.mjs';
import { AudioClip } from './x3d.mjs';
import { MFString } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("Filters.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects.")}),

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
              content : new SFString("https://www.medialab.hmu.gr/minipages/x3domAudio")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d")}),

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
              title : new SFString("Filters.x3d")}),

            new NavigationInfo({}),

            new Background({
              skyColor : new MFColor([0.2,0.2,0.2])}),

            new Viewpoint({
              description : new SFString("View entire audio model"),
              orientation : new SFRotation([1,0,0,-0.5]),
              position : new SFVec3f([0,500,600]),
              retainUserOffsets : new SFBool(true)}),

            new Transform({
              DEF : new SFString("TransformAudio1"),
              translation : new SFVec3f([-200,50,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("audio_emit"),
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.1,0.1,0.1]),
                          emissiveColor : new SFColor([0.8,0.8,0.8]),
                          specularColor : new SFColor([0.01,0.01,0.01])}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(30)}))})])}),

            new Transform({
              DEF : new SFString("TransformAudio2"),
              translation : new SFVec3f([0,50,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("audio_emit2"),
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.1,0.1,0.1]),
                          emissiveColor : new SFColor([0.8,0.8,0.8]),
                          specularColor : new SFColor([0.01,0.01,0.01])}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(30)}))})])}),

            new Transform({
              DEF : new SFString("TransformAudio3"),
              translation : new SFVec3f([200,50,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("audio_emit3"),
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.1,0.1,0.1]),
                          emissiveColor : new SFColor([0.8,0.8,0.8]),
                          specularColor : new SFColor([0.01,0.01,0.01])}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(30)}))})])}),

            new Transform({
              DEF : new SFString("AnimData"),
              translation : new SFVec3f([0,50,0])}),

            new Transform({
              DEF : new SFString("AnimDataBoxH"),
              translation : new SFVec3f([0,100,0])}),

            new Transform({
              DEF : new SFString("AnimDataBoxM"),
              translation : new SFVec3f([15,100,0])}),

            new Transform({
              DEF : new SFString("AnimDataBoxL"),
              translation : new SFVec3f([30,100,0])}),

            new Transform({
              DEF : new SFString("AnimDataBoxMM"),
              translation : new SFVec3f([-15,100,0])}),

            new Transform({
              DEF : new SFString("AnimDataBoxLM"),
              translation : new SFVec3f([-30,100,0])}),

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
                    new Cylinder({
                      radius : new SFFloat(500)}))})])}),

            new ListenerPointSource({
              trackCurrentView : new SFBool(true)}),

            new StreamAudioDestination({
              channelCountMode : new SFString("MAX"),
              channelInterpretation : new SFString("SPEAKERS"),
              children : new MFNode([
                new DynamicsCompressor({
                  channelCountMode : new SFString("MAX"),
                  channelInterpretation : new SFString("SPEAKERS"),
                  children : new MFNode([
                    new Gain({
                      channelCountMode : new SFString("MAX"),
                      channelInterpretation : new SFString("SPEAKERS"),
                      children : new MFNode([
                        new SpatialSound({
                          DEF : new SFString("Audio1"),
                          distanceModel : new SFString("INVERSE"),
                          children : new MFNode([
                            new Gain({
                              channelCountMode : new SFString("MAX"),
                              channelInterpretation : new SFString("SPEAKERS"),
                              children : new MFNode([
                                new Analyser({
                                  channelCountMode : new SFString("MAX"),
                                  channelInterpretation : new SFString("SPEAKERS"),
                                  children : new MFNode([
                                    new BiquadFilter({
                                      type : field.TYPE_ALLPASS,
                                      detune : new SFFloat(50),
                                      frequency : new SFFloat(600),
                                      qualityFactor : new SFFloat(30),
                                      channelCountMode : new SFString("MAX"),
                                      channelInterpretation : new SFString("SPEAKERS"),
                                      children : new MFNode([
                                        new AudioClip({
                                          description : new SFString("Techno beat"),
                                          loop : new SFBool(true),
                                          url : new MFString(["sound/techno_beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3"])})])})])})])})])}),

                        new SpatialSound({
                          DEF : new SFString("Audio2"),
                          distanceModel : new SFString("INVERSE"),
                          children : new MFNode([
                            new Gain({
                              channelCountMode : new SFString("MAX"),
                              channelInterpretation : new SFString("SPEAKERS"),
                              children : new MFNode([
                                new Analyser({
                                  channelCountMode : new SFString("MAX"),
                                  channelInterpretation : new SFString("SPEAKERS"),
                                  children : new MFNode([
                                    new BiquadFilter({
                                      type : field.TYPE_ALLPASS,
                                      detune : new SFFloat(15),
                                      frequency : new SFFloat(600),
                                      qualityFactor : new SFFloat(15),
                                      channelCountMode : new SFString("MAX"),
                                      channelInterpretation : new SFString("SPEAKERS"),
                                      children : new MFNode([
                                        new AudioClip({
                                          description : new SFString("Simple beat"),
                                          loop : new SFBool(true),
                                          url : new MFString(["sound/beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3"])})])})])})])})])}),

                        new SpatialSound({
                          DEF : new SFString("Audio3"),
                          distanceModel : new SFString("INVERSE"),
                          children : new MFNode([
                            new Gain({
                              channelCountMode : new SFString("MAX"),
                              channelInterpretation : new SFString("SPEAKERS"),
                              children : new MFNode([
                                new Analyser({
                                  channelCountMode : new SFString("MAX"),
                                  channelInterpretation : new SFString("SPEAKERS"),
                                  children : new MFNode([
                                    new BiquadFilter({
                                      type : field.TYPE_ALLPASS,
                                      frequency : new SFFloat(1000),
                                      qualityFactor : new SFFloat(0),
                                      channelCountMode : new SFString("MAX"),
                                      channelInterpretation : new SFString("SPEAKERS"),
                                      children : new MFNode([
                                        new AudioClip({
                                          description : new SFString("Wobble loop"),
                                          loop : new SFBool(true),
                                          url : new MFString(["sound/wobble_loop.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3"])})])})])})])})])})])})])})])})])}))});
console.log(X3D0.toXMLNode());
