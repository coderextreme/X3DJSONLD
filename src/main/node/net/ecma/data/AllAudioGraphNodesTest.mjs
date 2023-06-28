'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var AcousticProperties = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var Sound = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var AudioClip = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MovieTexture = require('./x3d.mjs');
var SpatialSound = require('./x3d.mjs');
var Analyser = require('./x3d.mjs');
var StreamAudioDestination = require('./x3d.mjs');
var BiquadFilter = require('./x3d.mjs');
var ChannelMerger = require('./x3d.mjs');
var ChannelSelector = require('./x3d.mjs');
var ChannelSplitter = require('./x3d.mjs');
var Convolver = require('./x3d.mjs');
var Delay = require('./x3d.mjs');
var DynamicsCompressor = require('./x3d.mjs');
var Gain = require('./x3d.mjs');
var WaveShaper = require('./x3d.mjs');
var BufferAudioSource = require('./x3d.mjs');
var ListenerPointSource = require('./x3d.mjs');
var MicrophoneSource = require('./x3d.mjs');
var OscillatorSource = require('./x3d.mjs');
var StreamAudioSource = require('./x3d.mjs');
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
              content : new SFString("26 November 2021")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("Developmental test, no actual 3D model expected")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d")}),

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
              title : new SFString("AllAudioGraphNodes.x3d")}),

            new Shape({
              geometry : new SFNode(
                new Box({})),
              appearance : new SFNode(
                new Appearance({
                  acousticProperties : new SFNode(
                    new AcousticProperties({
                      description : new SFString("Testing of X3D4 nodes demonstrating W3C Audio API in progress"),
                      diffuse : new SFFloat(0.25),
                      refraction : new SFFloat(0.5),
                      specular : new SFFloat(1)})),
                  material : new SFNode(
                    new Material({}))}))}),

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
                  url : new MFString(["bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"])}))}),

            new SpatialSound({
              distanceModel : new SFString("INVERSE"),
              children : new MFNode([
                new Analyser({
                  channelCountMode : new SFString("MAX"),
                  channelInterpretation : new SFString("SPEAKERS"),
                  children : new MFNode([
                    new StreamAudioDestination({
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

                                                                new ListenerPointSource({}),

                                                                new MicrophoneSource({}),

                                                                new OscillatorSource({
                                                                  frequency : new SFFloat(440)}),

                                                                new StreamAudioSource({
                                                                  channelCountMode : new SFString("MAX"),
                                                                  channelInterpretation : new SFString("SPEAKERS")})])})])})])})])})])})])}))})])})])})])})])})])})])})])}))});
console.log(X3D0.toXMLNode());
