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
import { Shape } from './x3d.mjs';
import { Box } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { AcousticProperties } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SpatialSound } from './x3d.mjs';
import { undefined } from './x3d.mjs';
import { Analyser } from './x3d.mjs';
import { AudioDestination } from './x3d.mjs';
import { BiquadFilter } from './x3d.mjs';
import { ChannelMerger } from './x3d.mjs';
import { ChannelSelector } from './x3d.mjs';
import { ChannelSplitter } from './x3d.mjs';
import { Convolver } from './x3d.mjs';
import { Delay } from './x3d.mjs';
import { DynamicsCompressor } from './x3d.mjs';
import { Gain } from './x3d.mjs';
import { StreamAudioDestination } from './x3d.mjs';
import { WaveShaper } from './x3d.mjs';
import { BufferAudioSource } from './x3d.mjs';
import { ListenerPointSource } from './x3d.mjs';
import { MicrophoneSource } from './x3d.mjs';
import { OscillatorSource } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { StreamAudioSource } from './x3d.mjs';
import { Sound } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { AudioClip } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { MovieTexture } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("AllAudioGraphNodesTest.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("25 October 2020")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("4 August 2021")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("Developmental test, no actual 3D model expected")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("AllAudioGraphNodes.x3d")}),

            new Shape({
              geometry : new SFNode(
                new Box({})),
              appearance : new SFNode(
                new Appearance({
                  acousticProperties : new SFNode(
                    new AcousticProperties({})),
                  material : new SFNode(
                    new Material({}))}))}),

            new SpatialSound({
              distanceModel : new SFString("INVERSE"),
              dopplerEnabled : new undefined("false"),
              children : new MFNode([
                new Analyser({
                  channelCountMode : new SFString("MAX"),
                  channelInterpretation : new SFString("SPEAKERS"),
                  children : new MFNode([
                    new AudioDestination({
                      channelCountMode : new SFString("MAX"),
                      channelInterpretation : new SFString("SPEAKERS"),
                      children : new MFNode([
                        new BiquadFilter({
                          type : field.TYPE_LOWPASS,
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
                                    new ChannelSplitter({
                                      channelCountMode : new SFString("MAX"),
                                      channelInterpretation : new SFString("SPEAKERS"),
                                      outputs : new SFNode(
                                        new Convolver({
                                          channelCountMode : new SFString("MAX"),
                                          channelInterpretation : new SFString("SPEAKERS"),
                                          children : new MFNode([
                                            new Delay({
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
                                                        new StreamAudioDestination({
                                                          channelCountMode : new SFString("MAX"),
                                                          channelInterpretation : new SFString("SPEAKERS"),
                                                          children : new MFNode([
                                                            new WaveShaper({
                                                              channelCountMode : new SFString("MAX"),
                                                              channelInterpretation : new SFString("SPEAKERS"),
                                                              /*The following X3DSoundSourceNode nodes have no audio-graph children*/
                                                              children : new MFNode([
                                                                new BufferAudioSource({
                                                                  channelCountMode : new SFString("MAX"),
                                                                  channelInterpretation : new SFString("SPEAKERS")}),

                                                                new ListenerPointSource({
                                                                  dopplerEnabled : new undefined("false")}),

                                                                new MicrophoneSource({}),

                                                                new OscillatorSource({
                                                                  frequency : new SFFloat(440)}),

                                                                new StreamAudioSource({
                                                                  channelCountMode : new SFString("MAX"),
                                                                  channelInterpretation : new SFString("SPEAKERS")})])})])})])})])})])})])}))})])})])})])})])})])})])}),

            new Sound({
              location : new SFVec3f([0,1.6,0]),
              source : new SFNode(
                new AudioClip({
                  description : new SFString("testing"),
                  url : new MFString(["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"])}))}),

            new Sound({
              location : new SFVec3f([0,1.6,0]),
              source : new SFNode(
                new MovieTexture({
                  description : new SFString("testing"),
                  url : new MFString(["bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"])}))})])}))});
console.log(X3D0.toXMLNode());
