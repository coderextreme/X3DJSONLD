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
var NavigationInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var Sound = require('./x3d.mjs');
var AudioClip = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("ObliqueStrategies.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Text scripting and animation example using Oblique Strategies card set by Brian Eno.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman, John Kelly, Ben Cheng")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("3 November 2013")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("10 November 2019")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("oblique.html")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("ObliqueStrategies.txt")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("ObliqueStrategiesScript.js")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.eno-web.co.uk/obliques.html")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://gothpunk.com/haiku-intro.html")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.rtqe.net/ObliqueStrategies/OSintro.html")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://en.wikipedia.org/wiki/Oblique_Strategies")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("Brian Eno, Oblique Strategies")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/ObliqueStrategiesEntryScreen.png")}),

            new meta({
              name : new SFString("Sound"),
              content : new SFString("http://translate.google.com/translate_tts?tl=en&q=hello%20X3D")}),

            new meta({
              name : new SFString("Sound"),
              content : new SFString("translate_tts_HelloX3D.mp3")}),

            new meta({
              name : new SFString("Sound"),
              content : new SFString("translate_tts_HelloX3D.wav")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("multiliingual translation parameter")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("under development, scene Sound/AudioClip triggering (or retrieved file format) not working")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://gist.github.com/alotaiba/1728771")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api")}),

            new meta({
              name : new SFString("Sound"),
              content : new SFString("https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4")}),

            new meta({
              name : new SFString("Sound"),
              content : new SFString("translate_tts_HelloX3D4.mp3")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://cloud.google.com/translate/docs/basic/translating-text")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d")}),

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
              title : new SFString("ObliqueStrategies.x3d")}),

            new NavigationInfo({
              type : ["NONE"]}),

            new Background({
              skyColor : new MFColor([0.419608,0.427451,1])}),

            new Transform({
              scale : new SFVec3f([0.4,0.4,0.4]),
              translation : new SFVec3f([0,1,0]),
              children : new MFNode([
                new TouchSensor({
                  DEF : new SFString("RandomTextClickedSensor"),
                  description : new SFString("Select to see a new strategy")}),
              child : new SFNode(
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          DEF : new SFString("MessageFont"),
                          family : new MFString(["SANS"]),
                          justify : new MFString(["MIDDLE","MIDDLE"]),
                          style : new SFString("BOLD")}))})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,1,1])}))}))})]),

                new Transform({
                  scale : new SFVec3f([10,3,1]),
                  child : new SFNode(
                    new Shape({
                      DEF : new SFString("HeadlineClickSurface"),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          solid : new SFBool(false),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([1,1,0,1,-1,0,-1,-1,0,-1,1,0])}))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.245763),
                              diffuseColor : new SFColor([0.34773,0.090909,0.005289]),
                              shininess : new SFFloat(0.07),
                              specularColor : new SFColor([0.336735,0.051091,0.051091]),
                              transparency : new SFFloat(0.8)}))}))}))})}),

            new Script({
              DEF : new SFString("TextScript"),
              url : new MFString(["ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"]),
              /*initialize() method includes unit test to printAllStrategies() to console*/
              /*TODO insert field definitions here (index string_changed previous next random) and then animate!*/
              field : new MFNode([
                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("index"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("index for active strategy card, -1 means no selection"),
                  value : new SFString("0")}),

                new field({
                  type : field.TYPE_MFSTRING,
                  name : new SFString("string_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("latest strategy card value")}),

                new field({
                  type : field.TYPE_MFSTRING,
                  name : new SFString("textToSpeechUrl"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("\"url to invoke Google Translate\"")}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("newCardTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("activate Sound node")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("selectPreviousCard"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("selectNextCard"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("selectRandomCard"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("traceEnabled"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("controls console tracing"),
                  value : new SFString("true")})])}),

            new Transform({
              DEF : new SFString("CardTransform"),
              scale : new SFVec3f([0.4,0.4,0.4]),
              translation : new SFVec3f([0,-1.5,0]),
              child : new SFNode(
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      DEF : new SFString("CardText"),
                      fontStyle : new SFNode(
                        new FontStyle({
                          family : new MFString(["SANS"]),
                          justify : new MFString(["MIDDLE","MIDDLE"]),
                          style : new SFString("BOLD")}))})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,1,1])}))}))})),
              children : new MFNode([
                new ROUTE({
                  fromField : new SFString("string_changed"),
                  fromNode : new SFString("TextScript"),
                  toField : new SFString("string"),
                  toNode : new SFString("CardText")}),

                new Sound({
                  DEF : new SFString("CardSoundSpatialization"),
                  maxBack : new SFFloat(100),
                  maxFront : new SFFloat(100),
                  minBack : new SFFloat(20),
                  minFront : new SFFloat(20),
                  /*Make sure the sound source AudioClip is audible at the user location*/
                  /*Not all X3D players seem to use the .mp3*/
                  /*&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players*/
                  /*%20 is space character used in uri/url encoding*/
                  source : new SFNode(
                    new AudioClip({
                      DEF : new SFString("TextToSpeechAudioClip"),
                      description : new SFString("sends strategy text google translate"),
                      url : new MFString(["http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"])}))}),

                new ROUTE({
                  fromField : new SFString("textToSpeechUrl"),
                  fromNode : new SFString("TextScript"),
                  toField : new SFString("url"),
                  toNode : new SFString("TextToSpeechAudioClip")}),

                new ROUTE({
                  fromField : new SFString("newCardTime"),
                  fromNode : new SFString("TextScript"),
                  toField : new SFString("startTime"),
                  toNode : new SFString("TextToSpeechAudioClip")})])}),

            new Transform({
              scale : new SFVec3f([0.4,0.4,0.4]),
              translation : new SFVec3f([-3.2,2.5,0]),
              children : new MFNode([
                new TouchSensor({
                  DEF : new SFString("PreviousTextClickedSensor"),
                  description : new SFString("Select to see previous strategy")}),

                new ROUTE({
                  fromField : new SFString("isActive"),
                  fromNode : new SFString("PreviousTextClickedSensor"),
                  toField : new SFString("selectPreviousCard"),
                  toNode : new SFString("TextScript")}),
              child : new SFNode(
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["previous"]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          USE : new SFString("MessageFont")}))})),
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("InterfaceAppearance"),
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0,0.6])}))}))})]),

                new Transform({
                  scale : new SFVec3f([2,0.6,1]),
                  child : new SFNode(
                    new Shape({
                      DEF : new SFString("TransparentClickSurface"),
                      /*support Selectable Text with a scalable IFS*/
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          solid : new SFBool(false),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([1,1,0,1,-1,0,-1,-1,0,-1,1,0])}))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              transparency : new SFFloat(1)}))}))}))})}),

            new Transform({
              scale : new SFVec3f([0.4,0.4,0.4]),
              translation : new SFVec3f([3.5,2.5,0]),
              children : new MFNode([
                new TouchSensor({
                  DEF : new SFString("NextTextClickedSensor"),
                  description : new SFString("Select to see next strategy")}),

                new ROUTE({
                  fromField : new SFString("isActive"),
                  fromNode : new SFString("NextTextClickedSensor"),
                  toField : new SFString("selectNextCard"),
                  toNode : new SFString("TextScript")}),
              child : new SFNode(
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["next"]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          USE : new SFString("MessageFont")}))})),
                  appearance : new SFNode(
                    new Appearance({
                      USE : new SFString("InterfaceAppearance")}))})]),

                new Transform({
                  scale : new SFVec3f([1.2,0.6,1]),
                  child : new SFNode(
                    new Shape({
                      USE : new SFString("TransparentClickSurface")}))})}),

            new Transform({
              scale : new SFVec3f([0.4,0.4,0.4]),
              translation : new SFVec3f([-3.3,-0.5,0]),
              children : new MFNode([
                new TouchSensor({
                  USE : new SFString("RandomTextClickedSensor")}),

                new ROUTE({
                  fromField : new SFString("isActive"),
                  fromNode : new SFString("RandomTextClickedSensor"),
                  toField : new SFString("selectRandomCard"),
                  toNode : new SFString("TextScript")}),
              child : new SFNode(
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["random"]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          USE : new SFString("MessageFont")}))})),
                  appearance : new SFNode(
                    new Appearance({
                      USE : new SFString("InterfaceAppearance")}))})]),

                new Transform({
                  scale : new SFVec3f([1.8,0.6,1]),
                  child : new SFNode(
                    new Shape({
                      USE : new SFString("TransparentClickSurface")}))})}),

            new Transform({
              scale : new SFVec3f([0.4,0.4,0.4]),
              translation : new SFVec3f([3.3,-0.5,0]),
              children : new MFNode([
                new Anchor({
                  DEF : new SFString("TextToSpeechAnchor"),
                  description : new SFString("text to speech in browser"),
                  parameter : new MFString(["target=_blank"]),
                  url : new MFString(["http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"]),
                  children : new MFNode([
                    new ROUTE({
                      fromField : new SFString("textToSpeechUrl"),
                      fromNode : new SFString("TextScript"),
                      toField : new SFString("url"),
                      toNode : new SFString("TextToSpeechAnchor")}),

                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["speech"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              USE : new SFString("MessageFont")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("InterfaceAppearance")}))}),

                    new Transform({
                      scale : new SFVec3f([1.8,0.6,1]),
                      child : new SFNode(
                        new Shape({
                          USE : new SFString("TransparentClickSurface")}))})])})])})])}))});
console.log(X3D0.toXMLNode());
