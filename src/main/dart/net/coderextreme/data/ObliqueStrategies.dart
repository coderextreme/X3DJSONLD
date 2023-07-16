// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
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
              name_ : SFString('TODO'),
              content_ : SFString('multiliingual translation parameter')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('under development, scene Sound/AudioClip triggering (or retrieved file format) not working')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://gist.github.com/alotaiba/1728771')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api')),

            meta(
              name_ : SFString('Sound'),
              content_ : SFString('https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4')),

            meta(
              name_ : SFString('Sound'),
              content_ : SFString('translate_tts_HelloX3D4.mp3')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://cloud.google.com/translate/docs/basic/translating-text')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d')),

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
              title_ : SFString('ObliqueStrategies.x3d')),

            NavigationInfo(
              type_ : MFString([SFString("NONE")])),

            Background(
              skyColor_ : MFColor([SFColor(0.419608), SFColor(0.427451), SFColor(1)])),

            Transform(
              scale_ : SFVec3f([SFDouble(0.4), SFDouble(0.4), SFDouble(0.4)]),
              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
              children_ : [
                TouchSensor(
                  DEF_ : SFString('RandomTextClickedSensor'),
                  description_ : SFString('Select to see a new strategy')),

                Shape(
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("Oblique Strategies"), SFString(""), SFString("(Over One Hundred Worthwhile Dilemmas)"), SFString(""), SFString("by Brian Eno and Peter Schmidt")]),
                      fontStyle_ : 
                        FontStyle(
                          DEF_ : SFString('MessageFont'),
                          family_ : MFString([SFString("SANS")]),
                          justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                          style_ : SFString('BOLD'))),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)])))),

                Transform(
                  scale_ : SFVec3f([SFDouble(10), SFDouble(3), SFDouble(1)]),
                  children_ : [
                    Shape(
                      DEF_ : SFString('HeadlineClickSurface'),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([1,1,0]),SFVec3f([1,-1,0]),SFVec3f([-1,-1,0]),SFVec3f([-1,1,0])]))),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              ambientIntensity_ : 0.245763,
                              diffuseColor_ : SFColor([SFDouble(0.34773), SFDouble(0.090909), SFDouble(0.005289)]),
                              shininess_ : 0.07,
                              specularColor_ : SFColor([SFDouble(0.336735), SFDouble(0.051091), SFDouble(0.051091)]),
                              transparency_ : 0.8)))])]),

            Script(
              DEF_ : SFString('TextScript'),
              url_ : MFString([SFString("ObliqueStrategiesScript.js"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js")]),
              /*initialize() method includes unit test to printAllStrategies() to console*/
              /*TODO insert field definitions here (index string_changed previous next random) and then animate!*/
              field_ : [
                field(
                  type_ : SFString("SFInt32"),
                  name_ : SFString('index'),
                  accessType_ : SFString("initializeOnly"),
                  appinfo_ : SFString('index for active strategy card, -1 means no selection'),
                  value_ : SFString('0')),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('string_changed'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('latest strategy card value')),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('textToSpeechUrl'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('\"url to invoke Google Translate\"')),

                field(
                  type_ : SFString("SFTime"),
                  name_ : SFString('newCardTime'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('activate Sound node')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('selectPreviousCard'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('selectNextCard'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('selectRandomCard'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('traceEnabled'),
                  accessType_ : SFString("initializeOnly"),
                  appinfo_ : SFString('controls console tracing'),
                  value_ : SFString('true'))]),

            Transform(
              DEF_ : SFString('CardTransform'),
              scale_ : SFVec3f([SFDouble(0.4), SFDouble(0.4), SFDouble(0.4)]),
              translation_ : SFVec3f([SFDouble(0), SFDouble(-1.5), SFDouble(0)]),
              children_ : [
                Shape(
                  geometry_ : 
                    Text(
                      DEF_ : SFString('CardText'),
                      fontStyle_ : 
                        FontStyle(
                          family_ : MFString([SFString("SANS")]),
                          justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                          style_ : SFString('BOLD'))),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)])))),

                ROUTE(
                  fromField_ : SFString('string_changed'),
                  fromNode_ : SFString('TextScript'),
                  toField_ : SFString('string'),
                  toNode_ : SFString('CardText')),

                Sound(
                  DEF_ : SFString('CardSoundSpatialization'),
                  maxBack_ : 100,
                  maxFront_ : 100,
                  minBack_ : 20,
                  minFront_ : 20,
                  /*Make sure the sound source AudioClip is audible at the user location*/
                  /*Not all X3D players seem to use the .mp3*/
                  /*&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players*/
                  /*%20 is space character used in uri/url encoding*/
                  source_ : 
                    AudioClip(
                      DEF_ : SFString('TextToSpeechAudioClip'),
                      description_ : SFString('sends strategy text google translate'),
                      url_ : MFString([SFString("http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium"), SFString("translate_tts_mp3FileFormatNotSupported.wav"), SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav")]))),

                ROUTE(
                  fromField_ : SFString('textToSpeechUrl'),
                  fromNode_ : SFString('TextScript'),
                  toField_ : SFString('url'),
                  toNode_ : SFString('TextToSpeechAudioClip')),

                ROUTE(
                  fromField_ : SFString('newCardTime'),
                  fromNode_ : SFString('TextScript'),
                  toField_ : SFString('startTime'),
                  toNode_ : SFString('TextToSpeechAudioClip'))]),

            Transform(
              scale_ : SFVec3f([SFDouble(0.4), SFDouble(0.4), SFDouble(0.4)]),
              translation_ : SFVec3f([SFDouble(-3.2), SFDouble(2.5), SFDouble(0)]),
              children_ : [
                TouchSensor(
                  DEF_ : SFString('PreviousTextClickedSensor'),
                  description_ : SFString('Select to see previous strategy')),

                ROUTE(
                  fromField_ : SFString('isActive'),
                  fromNode_ : SFString('PreviousTextClickedSensor'),
                  toField_ : SFString('selectPreviousCard'),
                  toNode_ : SFString('TextScript')),

                Shape(
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("previous")]),
                      fontStyle_ : 
                        FontStyle(
                          USE_ : SFString('MessageFont'))),
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('InterfaceAppearance'),
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0.6)])))),

                Transform(
                  scale_ : SFVec3f([SFDouble(2), SFDouble(0.6), SFDouble(1)]),
                  children_ : [
                    Shape(
                      DEF_ : SFString('TransparentClickSurface'),
                      /*support Selectable Text with a scalable IFS*/
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([1,1,0]),SFVec3f([1,-1,0]),SFVec3f([-1,-1,0]),SFVec3f([-1,1,0])]))),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              transparency_ : 1)))])]),

            Transform(
              scale_ : SFVec3f([SFDouble(0.4), SFDouble(0.4), SFDouble(0.4)]),
              translation_ : SFVec3f([SFDouble(3.5), SFDouble(2.5), SFDouble(0)]),
              children_ : [
                TouchSensor(
                  DEF_ : SFString('NextTextClickedSensor'),
                  description_ : SFString('Select to see next strategy')),

                ROUTE(
                  fromField_ : SFString('isActive'),
                  fromNode_ : SFString('NextTextClickedSensor'),
                  toField_ : SFString('selectNextCard'),
                  toNode_ : SFString('TextScript')),

                Shape(
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("next")]),
                      fontStyle_ : 
                        FontStyle(
                          USE_ : SFString('MessageFont'))),
                  appearance_ : 
                    Appearance(
                      USE_ : SFString('InterfaceAppearance'))),

                Transform(
                  scale_ : SFVec3f([SFDouble(1.2), SFDouble(0.6), SFDouble(1)]),
                  children_ : [
                    Shape(
                      USE_ : SFString('TransparentClickSurface'))])]),

            Transform(
              scale_ : SFVec3f([SFDouble(0.4), SFDouble(0.4), SFDouble(0.4)]),
              translation_ : SFVec3f([SFDouble(-3.3), SFDouble(-0.5), SFDouble(0)]),
              children_ : [
                TouchSensor(
                  USE_ : SFString('RandomTextClickedSensor')),

                ROUTE(
                  fromField_ : SFString('isActive'),
                  fromNode_ : SFString('RandomTextClickedSensor'),
                  toField_ : SFString('selectRandomCard'),
                  toNode_ : SFString('TextScript')),

                Shape(
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("random")]),
                      fontStyle_ : 
                        FontStyle(
                          USE_ : SFString('MessageFont'))),
                  appearance_ : 
                    Appearance(
                      USE_ : SFString('InterfaceAppearance'))),

                Transform(
                  scale_ : SFVec3f([SFDouble(1.8), SFDouble(0.6), SFDouble(1)]),
                  children_ : [
                    Shape(
                      USE_ : SFString('TransparentClickSurface'))])]),

            Transform(
              scale_ : SFVec3f([SFDouble(0.4), SFDouble(0.4), SFDouble(0.4)]),
              translation_ : SFVec3f([SFDouble(3.3), SFDouble(-0.5), SFDouble(0)]),
              children_ : [
                Anchor(
                  DEF_ : SFString('TextToSpeechAnchor'),
                  description_ : SFString('text to speech in browser'),
                  parameter_ : MFString([SFString("target=_blank")]),
                  url_ : MFString([SFString("http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change")]),
                  children_ : [
                    ROUTE(
                      fromField_ : SFString('textToSpeechUrl'),
                      fromNode_ : SFString('TextScript'),
                      toField_ : SFString('url'),
                      toNode_ : SFString('TextToSpeechAnchor')),

                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("speech")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('MessageFont'))),
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('InterfaceAppearance'))),

                    Transform(
                      scale_ : SFVec3f([SFDouble(1.8), SFDouble(0.6), SFDouble(1)]),
                      children_ : [
                        Shape(
                          USE_ : SFString('TransparentClickSurface'))])])])]));
void main() { exit(0); }
