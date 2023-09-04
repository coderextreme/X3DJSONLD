// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('ObliqueStrategies.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Text scripting and animation example using Oblique Strategies card set by Brian Eno.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman, John Kelly, Ben Cheng')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('3 November 2013')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('10 November 2019')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('oblique.html')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('ObliqueStrategies.txt')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('ObliqueStrategiesScript.js')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.eno-web.co.uk/obliques.html')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://gothpunk.com/haiku-intro.html')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.rtqe.net/ObliqueStrategies/OSintro.html')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://en.wikipedia.org/wiki/Oblique_Strategies')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://gist.github.com/alotaiba/1728771')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://cloud.google.com/translate/docs/basic/translating-text')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('Brian Eno, Oblique Strategies')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/ObliqueStrategiesEntryScreen.png')),

            meta(
              name_ : SFString('Sound'),
              content_ : SFString('http://translate.google.com/translate_tts?tl=en&q=hello%20X3D')),

            meta(
              name_ : SFString('Sound'),
              content_ : SFString('translate_tts_HelloX3D.mp3')),

            meta(
              name_ : SFString('Sound'),
              content_ : SFString('translate_tts_HelloX3D.wav')),

            meta(
              name_ : SFString('Sound'),
              content_ : SFString('https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4')),

            meta(
              name_ : SFString('Sound'),
              content_ : SFString('translate_tts_HelloX3D4.mp3')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('multiliingual translation parameter')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('under development, scene Sound/AudioClip triggering (or retrieved file format) not working')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('ObliqueStrategies.x3d')),

            NavigationInfo(
              type_ : MFString([SFString("NONE")])),

            Background(
              skyColor_ : MFColor([SFColor(0.419608), SFColor(0.427451), SFColor(1)])),

            Transform(
              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
              scale_ : SFVec3f([SFDouble(0.4), SFDouble(0.4), SFDouble(0.4)]),
              children_ : [
                TouchSensor(
                  DEF_ : SFString('RandomTextClickedSensor'),
                  description_ : SFString('Select to see a new strategy')),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("Oblique Strategies"), SFString(""), SFString("(Over One Hundred Worthwhile Dilemmas)"), SFString(""), SFString("by Brian Eno and Peter Schmidt")]),
                      fontStyle_ : 
                        FontStyle(
                          DEF_ : SFString('MessageFont'),
                          family_ : MFString([SFString("SANS")]),
                          style_ : SFString('BOLD'),
                          justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],

                Transform(
                  scale_ : SFVec3f([SFDouble(10), SFDouble(3), SFDouble(1)]),
                  child_ : 
                    Shape(
                      DEF_ : SFString('HeadlineClickSurface'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              ambientIntensity_ : 0.245763,
                              diffuseColor_ : SFColor([SFDouble(0.34773), SFDouble(0.090909), SFDouble(0.005289)]),
                              specularColor_ : SFColor([SFDouble(0.336735), SFDouble(0.051091), SFDouble(0.051091)]),
                              shininess_ : 0.07,
                              transparency_ : 0.8)),
                      geometry_ : 
                        IndexedFaceSet(
                          solid_ : false,
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([1,1,0]),SFVec3f([1,-1,0]),SFVec3f([-1,-1,0]),SFVec3f([-1,1,0])])))))),

            Script(
              DEF_ : SFString('TextScript'),
              url_ : MFString([SFString("ObliqueStrategiesScript.js"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js")]),
              field_ : [
                field(
                  type_ : SFString("SFInt32"),
                  accessType_ : SFString("initializeOnly"),
                  name_ : SFString('index')),

                field(
                  type_ : SFString("MFString"),
                  accessType_ : SFString("outputOnly"),
                  name_ : SFString('string_changed')),

                field(
                  type_ : SFString("MFString"),
                  accessType_ : SFString("outputOnly"),
                  name_ : SFString('textToSpeechUrl')),

                field(
                  type_ : SFString("SFTime"),
                  accessType_ : SFString("outputOnly"),
                  name_ : SFString('newCardTime')),

                field(
                  type_ : SFString("SFBool"),
                  accessType_ : SFString("inputOnly"),
                  name_ : SFString('selectPreviousCard')),

                field(
                  type_ : SFString("SFBool"),
                  accessType_ : SFString("inputOnly"),
                  name_ : SFString('selectNextCard')),

                field(
                  type_ : SFString("SFBool"),
                  accessType_ : SFString("inputOnly"),
                  name_ : SFString('selectRandomCard')),

                field(
                  type_ : SFString("SFBool"),
                  accessType_ : SFString("initializeOnly"),
                  name_ : SFString('traceEnabled'),
                  value_ : SFString('true'))]),

            Transform(
              DEF_ : SFString('CardTransform'),
              translation_ : SFVec3f([SFDouble(0), SFDouble(-1.5), SFDouble(0)]),
              scale_ : SFVec3f([SFDouble(0.4), SFDouble(0.4), SFDouble(0.4)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                  geometry_ : 
                    Text(
                      DEF_ : SFString('CardText'),
                      string_ : MFString([SFString("Remove specifics and convert to ambiguities")]),
                      fontStyle_ : 
                        FontStyle(
                          family_ : MFString([SFString("SANS")]),
                          style_ : SFString('BOLD'),
                          justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")])))),
              children_ : [
                Sound(
                  DEF_ : SFString('CardSoundSpatialization'),
                  minBack_ : 20,
                  minFront_ : 20,
                  maxBack_ : 100,
                  maxFront_ : 100,
                  source_ : 
                    AudioClip(
                      DEF_ : SFString('TextToSpeechAudioClip'),
                      description_ : SFString('sends strategy text google translate'),
                      url_ : MFString([SFString("http://translate.google.com/translate_tts?tl=en&q=Remove%20specifics%20and%20convert%20to%20ambiguities")])))]),

            Transform(
              translation_ : SFVec3f([SFDouble(-3.2), SFDouble(2.5), SFDouble(0)]),
              scale_ : SFVec3f([SFDouble(0.4), SFDouble(0.4), SFDouble(0.4)]),
              children_ : [
                TouchSensor(
                  DEF_ : SFString('PreviousTextClickedSensor'),
                  description_ : SFString('Select to see previous strategy')),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('InterfaceAppearance'),
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0.6)]))),
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("previous")]),
                      fontStyle_ : 
                        FontStyle(
                          USE_ : SFString('MessageFont'))))],

                Transform(
                  scale_ : SFVec3f([SFDouble(2), SFDouble(0.6), SFDouble(1)]),
                  child_ : 
                    Shape(
                      DEF_ : SFString('TransparentClickSurface'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              transparency_ : 1)),
                      geometry_ : 
                        IndexedFaceSet(
                          solid_ : false,
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([1,1,0]),SFVec3f([1,-1,0]),SFVec3f([-1,-1,0]),SFVec3f([-1,1,0])])))))),

            Transform(
              translation_ : SFVec3f([SFDouble(3.5), SFDouble(2.5), SFDouble(0)]),
              scale_ : SFVec3f([SFDouble(0.4), SFDouble(0.4), SFDouble(0.4)]),
              children_ : [
                TouchSensor(
                  DEF_ : SFString('NextTextClickedSensor'),
                  description_ : SFString('Select to see next strategy')),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      USE_ : SFString('InterfaceAppearance')),
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("next")]),
                      fontStyle_ : 
                        FontStyle(
                          USE_ : SFString('MessageFont'))))],

                Transform(
                  scale_ : SFVec3f([SFDouble(1.2), SFDouble(0.6), SFDouble(1)]),
                  child_ : 
                    Shape(
                      USE_ : SFString('TransparentClickSurface')))),

            Transform(
              translation_ : SFVec3f([SFDouble(-3.3), SFDouble(-0.5), SFDouble(0)]),
              scale_ : SFVec3f([SFDouble(0.4), SFDouble(0.4), SFDouble(0.4)]),
              children_ : [
                TouchSensor(
                  USE_ : SFString('RandomTextClickedSensor')),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      USE_ : SFString('InterfaceAppearance')),
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("random")]),
                      fontStyle_ : 
                        FontStyle(
                          USE_ : SFString('MessageFont'))))],

                Transform(
                  scale_ : SFVec3f([SFDouble(1.8), SFDouble(0.6), SFDouble(1)]),
                  child_ : 
                    Shape(
                      USE_ : SFString('TransparentClickSurface')))),

            Transform(
              translation_ : SFVec3f([SFDouble(3.3), SFDouble(-0.5), SFDouble(0)]),
              scale_ : SFVec3f([SFDouble(0.4), SFDouble(0.4), SFDouble(0.4)]),
              children_ : [
                Anchor(
                  DEF_ : SFString('TextToSpeechAnchor'),
                  description_ : SFString('text to speech in browser'),
                  url_ : MFString([SFString("http://translate.google.com/translate_tts?tl=en&q=Remove%20specifics%20and%20convert%20to%20ambiguities")]),
                  parameter_ : MFString([SFString("target=_blank")]),
                  children_ : [
                    Shape(
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('InterfaceAppearance')),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("speech")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('MessageFont')))),

                    Transform(
                      scale_ : SFVec3f([SFDouble(1.8), SFDouble(0.6), SFDouble(1)]),
                      child_ : 
                        Shape(
                          USE_ : SFString('TransparentClickSurface')))])]),

            ROUTE(
              fromNode_ : SFString('TextScript'),
              fromField_ : SFString('string_changed'),
              toNode_ : SFString('CardText'),
              toField_ : SFString('string')),

            ROUTE(
              fromNode_ : SFString('TextScript'),
              fromField_ : SFString('textToSpeechUrl'),
              toNode_ : SFString('TextToSpeechAudioClip'),
              toField_ : SFString('url')),

            ROUTE(
              fromNode_ : SFString('TextScript'),
              fromField_ : SFString('newCardTime'),
              toNode_ : SFString('TextToSpeechAudioClip'),
              toField_ : SFString('startTime')),

            ROUTE(
              fromNode_ : SFString('PreviousTextClickedSensor'),
              fromField_ : SFString('isActive'),
              toNode_ : SFString('TextScript'),
              toField_ : SFString('selectPreviousCard')),

            ROUTE(
              fromNode_ : SFString('NextTextClickedSensor'),
              fromField_ : SFString('isActive'),
              toNode_ : SFString('TextScript'),
              toField_ : SFString('selectNextCard')),

            ROUTE(
              fromNode_ : SFString('RandomTextClickedSensor'),
              fromField_ : SFString('isActive'),
              toNode_ : SFString('TextScript'),
              toField_ : SFString('selectRandomCard')),

            ROUTE(
              fromNode_ : SFString('TextScript'),
              fromField_ : SFString('textToSpeechUrl'),
              toNode_ : SFString('TextToSpeechAnchor'),
              toField_ : SFString('url'))]));
void main() { exit(0); }
