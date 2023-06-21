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
import { MFString } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { PositionInterpolator } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { OrientationInterpolator } from './x3d.mjs';
import { MFRotation } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { Box } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { Billboard } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
import { ListenerPointSource } from './x3d.mjs';
import { undefined } from './x3d.mjs';
import { StreamAudioDestination } from './x3d.mjs';
import { SpatialSound } from './x3d.mjs';
import { Gain } from './x3d.mjs';
import { AudioClip } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("SpatialAudioCameraAnimation.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world.")}),

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
              content : new SFString("7 August 2021")}),

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
              content : new SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d")}),

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
              title : new SFString("SpatialAudioCameraAnimation.x3d")}),

            new NavigationInfo({}),

            new Background({
              backUrl : new MFString(["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"]),
              bottomUrl : new MFString(["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"]),
              frontUrl : new MFString(["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"]),
              leftUrl : new MFString(["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"]),
              rightUrl : new MFString(["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"]),
              topUrl : new MFString(["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"])}),

            new Viewpoint({
              DEF : new SFString("Camera001"),
              description : new SFString("Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view"),
              farDistance : new SFFloat(0),
              nearDistance : new SFFloat(1),
              orientation : new SFRotation([1,0,0,-0.523599]),
              position : new SFVec3f([0,2000,3500])}),

            new TimeSensor({
              DEF : new SFString("TIMER"),
              cycleInterval : new SFTime(33.333332),
              loop : new SFBool(true)}),

            new PositionInterpolator({
              DEF : new SFString("Camera001-POS-INTERP"),
              key : new MFFloat([0,0.25,0.5,0.75,1]),
              keyValue : new MFVec3f([0,2000,3500,0,2000,0,0,2000,-3500,0,2000,0,0,2000,3500])}),

            new OrientationInterpolator({
              DEF : new SFString("Camera001-ROT-INTERP"),
              key : new MFFloat([0,0.25,0.5,0.75,1]),
              keyValue : new MFRotation([1,0,0,-0.523599,0.99999,0.003554,0.002727,-1.309007,0,-0.965926,-0.258819,-3.141593,0.002282,-0.793351,-0.60876,-3.135645,1,-0.000001,0,-0.523599])}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("TIMER"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Camera001-POS-INTERP")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Camera001-POS-INTERP"),
              toField : new SFString("set_position"),
              toNode : new SFString("Camera001")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("TIMER"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Camera001-ROT-INTERP")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Camera001-ROT-INTERP"),
              toField : new SFString("set_orientation"),
              toNode : new SFString("Camera001")}),

            new Transform({
              DEF : new SFString("Floor"),
              translation : new SFVec3f([1.241,0,0.358]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("WireColor"),
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.122,0.114,0.125])}))})),
                  geometry : new SFNode(
                    new Box({
                      size : new SFVec3f([2000,1,2000])}))})])}),

            new Transform({
              DEF : new SFString("Audio1Transform"),
              translation : new SFVec3f([-933.123474,0,-926.253235]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("WireColor_1"),
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.690196,0.101961,0.101961])}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(100)}))}),

                new Billboard({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("violin"),
                      rotation : new SFRotation([1,0,0,-0.5]),
                      scale : new SFVec3f([100,100,100]),
                      translation : new SFVec3f([0,100,0]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  ambientIntensity : new SFFloat(0.0933),
                                  diffuseColor : new SFColor([1,1,1]),
                                  shininess : new SFFloat(0.51),
                                  specularColor : new SFColor([0.46,0.46,0.46])}))})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString(["Violin"]),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  style : new SFString("BOLD")}))}))})])})])})])}),

            new Transform({
              DEF : new SFString("Audio2"),
              translation : new SFVec3f([933.475586,0,924.423218]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("WireColor_2"),
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.105882,0.694118,0.580392])}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(100)}))}),

                new Billboard({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("saxophone"),
                      rotation : new SFRotation([1,0,0,-0.5]),
                      scale : new SFVec3f([100,100,100]),
                      translation : new SFVec3f([0,100,0]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  ambientIntensity : new SFFloat(0.0933),
                                  diffuseColor : new SFColor([1,1,1]),
                                  shininess : new SFFloat(0.51),
                                  specularColor : new SFColor([0.46,0.46,0.46])}))})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString(["Saxophone"]),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  family : new MFString(["Times"]),
                                  style : new SFString("BOLD")}))}))})])})])})])}),

            new ListenerPointSource({
              trackCurrentView : new SFBool(true),
              dopplerEnabled : new undefined("false")}),

            new StreamAudioDestination({
              channelCountMode : new SFString("MAX"),
              channelInterpretation : new SFString("SPEAKERS"),
              children : new MFNode([
                new SpatialSound({
                  DEF : new SFString("Audio1"),
                  distanceModel : new SFString("INVERSE"),
                  dopplerEnabled : new undefined("false"),
                  children : new MFNode([
                    new Gain({
                      channelCountMode : new SFString("MAX"),
                      channelInterpretation : new SFString("SPEAKERS"),
                      children : new MFNode([
                        new AudioClip({
                          loop : new SFBool(true),
                          pauseTime : new SFTime(-1),
                          resumeTime : new SFTime(-1),
                          stopTime : new SFTime(-1),
                          url : new MFString(["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"])})])})])}),

                new SpatialSound({
                  DEF : new SFString("Audio2"),
                  distanceModel : new SFString("INVERSE"),
                  dopplerEnabled : new undefined("false"),
                  children : new MFNode([
                    new Gain({
                      channelCountMode : new SFString("MAX"),
                      channelInterpretation : new SFString("SPEAKERS"),
                      children : new MFNode([
                        new AudioClip({
                          loop : new SFBool(true),
                          pauseTime : new SFTime(-1),
                          resumeTime : new SFTime(-1),
                          stopTime : new SFTime(-1),
                          url : new MFString(["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"])})])})])})])})])}))});
console.log(X3D0.toXMLNode());
