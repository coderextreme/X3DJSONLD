print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "ObliqueStrategies.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Text scripting and animation example using Oblique Strategies card set by Brian Eno."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Don Brutzman, John Kelly, Ben Cheng"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "created"
meta5.content = "3 November 2013"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "modified"
meta6.content = "10 November 2019"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "reference"
meta7.content = "oblique.html"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "ObliqueStrategies.txt"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "ObliqueStrategiesScript.js"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "http://www.eno-web.co.uk/obliques.html"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "http://gothpunk.com/haiku-intro.html"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "http://www.rtqe.net/ObliqueStrategies/OSintro.html"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "https://en.wikipedia.org/wiki/Oblique_Strategies"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "subject"
meta15.content = "Brian Eno, Oblique Strategies"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "Image"
meta16.content = "images/ObliqueStrategiesEntryScreen.png"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "Sound"
meta17.content = "http://translate.google.com/translate_tts?tl=en&q=hello%20X3D"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "Sound"
meta18.content = "translate_tts_HelloX3D.mp3"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "Sound"
meta19.content = "translate_tts_HelloX3D.wav"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "TODO"
meta20.content = "multiliingual translation parameter"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "reference"
meta21.content = "http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "reference"
meta22.content = "http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "warning"
meta23.content = "under development, scene Sound/AudioClip triggering (or retrieved file format) not working"

head1.children.append(meta23)
meta24 = x3d.meta()
meta24.name = "warning"
meta24.content = "TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];"

head1.children.append(meta24)
meta25 = x3d.meta()
meta25.name = "reference"
meta25.content = "https://gist.github.com/alotaiba/1728771"

head1.children.append(meta25)
meta26 = x3d.meta()
meta26.name = "reference"
meta26.content = "https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api"

head1.children.append(meta26)
meta27 = x3d.meta()
meta27.name = "Sound"
meta27.content = "https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4"

head1.children.append(meta27)
meta28 = x3d.meta()
meta28.name = "Sound"
meta28.content = "translate_tts_HelloX3D4.mp3"

head1.children.append(meta28)
meta29 = x3d.meta()
meta29.name = "reference"
meta29.content = "https://cloud.google.com/translate/docs/basic/translating-text"

head1.children.append(meta29)
meta30 = x3d.meta()
meta30.name = "identifier"
meta30.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d"

head1.children.append(meta30)
meta31 = x3d.meta()
meta31.name = "generator"
meta31.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta31)
meta32 = x3d.meta()
meta32.name = "license"
meta32.content = "../license.html"

head1.children.append(meta32)

X3D0.head = head1
Scene33 = x3d.Scene()
WorldInfo34 = x3d.WorldInfo()
WorldInfo34.title = "ObliqueStrategies.x3d"

Scene33.children.append(WorldInfo34)
NavigationInfo35 = x3d.NavigationInfo()
NavigationInfo35.type = ["NONE"]

Scene33.children.append(NavigationInfo35)
Background36 = x3d.Background()
Background36.skyColor = [(0.419608, 0.427451, 1)]

Scene33.children.append(Background36)
Transform37 = x3d.Transform()
Transform37.scale = [0.4,0.4,0.4]
Transform37.translation = [0,1,0]
TouchSensor38 = x3d.TouchSensor()
TouchSensor38.DEF = "RandomTextClickedSensor"
TouchSensor38.description = "Select to see a new strategy"

Transform37.children.append(TouchSensor38)
Shape39 = x3d.Shape()
Text40 = x3d.Text()
Text40.string = ["Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"]
FontStyle41 = x3d.FontStyle()
FontStyle41.DEF = "MessageFont"
FontStyle41.family = ["SANS"]
FontStyle41.justify = ["MIDDLE","MIDDLE"]
FontStyle41.style = "BOLD"

Text40.fontStyle = FontStyle41

Shape39.geometry = Text40
Appearance42 = x3d.Appearance()
Material43 = x3d.Material()
Material43.diffuseColor = [1,1,1]

Appearance42.material = Material43

Shape39.appearance = Appearance42

Transform37.children.append(Shape39)
Transform44 = x3d.Transform()
Transform44.scale = [10,3,1]
Shape45 = x3d.Shape()
Shape45.DEF = "HeadlineClickSurface"
IndexedFaceSet46 = x3d.IndexedFaceSet()
IndexedFaceSet46.coordIndex = [0,1,2,3,-1]
IndexedFaceSet46.solid = False
Coordinate47 = x3d.Coordinate()
Coordinate47.point = [(1, 1, 0),(1, -1, 0),(-1, -1, 0),(-1, 1, 0)]

IndexedFaceSet46.coord = Coordinate47

Shape45.geometry = IndexedFaceSet46
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.ambientIntensity = 0.245763
Material49.diffuseColor = [0.34773,0.090909,0.005289]
Material49.shininess = 0.07
Material49.specularColor = [0.336735,0.051091,0.051091]
Material49.transparency = 0.8

Appearance48.material = Material49

Shape45.appearance = Appearance48

Transform44.children.append(Shape45)

Transform37.children.append(Transform44)

Scene33.children.append(Transform37)
Script50 = x3d.Script()
Script50.DEF = "TextScript"
Script50.url = ["ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"]
"""initialize() method includes unit test to printAllStrategies() to console"""
"""TODO insert field definitions here (index string_changed previous next random) and then animate!"""
field51 = x3d.field()
field51.name = "index"
field51.accessType = "initializeOnly"
field51.appinfo = "index for active strategy card, -1 means no selection"
field51.type = "SFInt32"
field51.value = 0

Script50.field.append(field51)
field52 = x3d.field()
field52.name = "string_changed"
field52.accessType = "outputOnly"
field52.appinfo = "latest strategy card value"
field52.type = "MFString"

Script50.field.append(field52)
field53 = x3d.field()
field53.name = "textToSpeechUrl"
field53.accessType = "outputOnly"
field53.appinfo = "\"url to invoke Google Translate\""
field53.type = "MFString"

Script50.field.append(field53)
field54 = x3d.field()
field54.name = "newCardTime"
field54.accessType = "outputOnly"
field54.appinfo = "activate Sound node"
field54.type = "SFTime"

Script50.field.append(field54)
field55 = x3d.field()
field55.name = "selectPreviousCard"
field55.accessType = "inputOnly"
field55.type = "SFBool"

Script50.field.append(field55)
field56 = x3d.field()
field56.name = "selectNextCard"
field56.accessType = "inputOnly"
field56.type = "SFBool"

Script50.field.append(field56)
field57 = x3d.field()
field57.name = "selectRandomCard"
field57.accessType = "inputOnly"
field57.type = "SFBool"

Script50.field.append(field57)
field58 = x3d.field()
field58.name = "traceEnabled"
field58.accessType = "initializeOnly"
field58.appinfo = "controls console tracing"
field58.type = "SFBool"
field58.value = True

Script50.field.append(field58)

Scene33.children.append(Script50)
Transform59 = x3d.Transform()
Transform59.DEF = "CardTransform"
Transform59.scale = [0.4,0.4,0.4]
Transform59.translation = [0,-1.5,0]
Shape60 = x3d.Shape()
Text61 = x3d.Text()
Text61.DEF = "CardText"
FontStyle62 = x3d.FontStyle()
FontStyle62.family = ["SANS"]
FontStyle62.justify = ["MIDDLE","MIDDLE"]
FontStyle62.style = "BOLD"

Text61.fontStyle = FontStyle62

Shape60.geometry = Text61
Appearance63 = x3d.Appearance()
Material64 = x3d.Material()
Material64.diffuseColor = [1,1,1]

Appearance63.material = Material64

Shape60.appearance = Appearance63

Transform59.children.append(Shape60)
ROUTE65 = x3d.ROUTE()
ROUTE65.fromField = "string_changed"
ROUTE65.fromNode = "TextScript"
ROUTE65.toField = "string"
ROUTE65.toNode = "CardText"

Transform59.children.append(ROUTE65)
Sound66 = x3d.Sound()
Sound66.DEF = "CardSoundSpatialization"
Sound66.maxBack = 100
Sound66.maxFront = 100
Sound66.minBack = 20
Sound66.minFront = 20
"""Make sure the sound source AudioClip is audible at the user location"""
"""Not all X3D players seem to use the .mp3"""
"""&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players"""
"""%20 is space character used in uri/url encoding"""
AudioClip67 = x3d.AudioClip()
AudioClip67.DEF = "TextToSpeechAudioClip"
AudioClip67.description = "sends strategy text google translate"
AudioClip67.url = ["http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"]

Sound66.source = AudioClip67

Transform59.children.append(Sound66)
ROUTE68 = x3d.ROUTE()
ROUTE68.fromField = "textToSpeechUrl"
ROUTE68.fromNode = "TextScript"
ROUTE68.toField = "url"
ROUTE68.toNode = "TextToSpeechAudioClip"

Transform59.children.append(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromField = "newCardTime"
ROUTE69.fromNode = "TextScript"
ROUTE69.toField = "startTime"
ROUTE69.toNode = "TextToSpeechAudioClip"

Transform59.children.append(ROUTE69)

Scene33.children.append(Transform59)
Transform70 = x3d.Transform()
Transform70.scale = [0.4,0.4,0.4]
Transform70.translation = [-3.2,2.5,0]
TouchSensor71 = x3d.TouchSensor()
TouchSensor71.DEF = "PreviousTextClickedSensor"
TouchSensor71.description = "Select to see previous strategy"

Transform70.children.append(TouchSensor71)
ROUTE72 = x3d.ROUTE()
ROUTE72.fromField = "isActive"
ROUTE72.fromNode = "PreviousTextClickedSensor"
ROUTE72.toField = "selectPreviousCard"
ROUTE72.toNode = "TextScript"

Transform70.children.append(ROUTE72)
Shape73 = x3d.Shape()
Text74 = x3d.Text()
Text74.string = ["previous"]
FontStyle75 = x3d.FontStyle()
FontStyle75.USE = "MessageFont"

Text74.fontStyle = FontStyle75

Shape73.geometry = Text74
Appearance76 = x3d.Appearance()
Appearance76.DEF = "InterfaceAppearance"
Material77 = x3d.Material()
Material77.diffuseColor = [1,0,0.6]

Appearance76.material = Material77

Shape73.appearance = Appearance76

Transform70.children.append(Shape73)
Transform78 = x3d.Transform()
Transform78.scale = [2,0.6,1]
Shape79 = x3d.Shape()
Shape79.DEF = "TransparentClickSurface"
"""support Selectable Text with a scalable IFS"""
IndexedFaceSet80 = x3d.IndexedFaceSet()
IndexedFaceSet80.coordIndex = [0,1,2,3,-1]
IndexedFaceSet80.solid = False
Coordinate81 = x3d.Coordinate()
Coordinate81.point = [(1, 1, 0),(1, -1, 0),(-1, -1, 0),(-1, 1, 0)]

IndexedFaceSet80.coord = Coordinate81

Shape79.geometry = IndexedFaceSet80
Appearance82 = x3d.Appearance()
Material83 = x3d.Material()
Material83.transparency = 1

Appearance82.material = Material83

Shape79.appearance = Appearance82

Transform78.children.append(Shape79)

Transform70.children.append(Transform78)

Scene33.children.append(Transform70)
Transform84 = x3d.Transform()
Transform84.scale = [0.4,0.4,0.4]
Transform84.translation = [3.5,2.5,0]
TouchSensor85 = x3d.TouchSensor()
TouchSensor85.DEF = "NextTextClickedSensor"
TouchSensor85.description = "Select to see next strategy"

Transform84.children.append(TouchSensor85)
ROUTE86 = x3d.ROUTE()
ROUTE86.fromField = "isActive"
ROUTE86.fromNode = "NextTextClickedSensor"
ROUTE86.toField = "selectNextCard"
ROUTE86.toNode = "TextScript"

Transform84.children.append(ROUTE86)
Shape87 = x3d.Shape()
Text88 = x3d.Text()
Text88.string = ["next"]
FontStyle89 = x3d.FontStyle()
FontStyle89.USE = "MessageFont"

Text88.fontStyle = FontStyle89

Shape87.geometry = Text88
Appearance90 = x3d.Appearance()
Appearance90.USE = "InterfaceAppearance"

Shape87.appearance = Appearance90

Transform84.children.append(Shape87)
Transform91 = x3d.Transform()
Transform91.scale = [1.2,0.6,1]
Shape92 = x3d.Shape()
Shape92.USE = "TransparentClickSurface"

Transform91.children.append(Shape92)

Transform84.children.append(Transform91)

Scene33.children.append(Transform84)
Transform93 = x3d.Transform()
Transform93.scale = [0.4,0.4,0.4]
Transform93.translation = [-3.3,-0.5,0]
TouchSensor94 = x3d.TouchSensor()
TouchSensor94.USE = "RandomTextClickedSensor"

Transform93.children.append(TouchSensor94)
ROUTE95 = x3d.ROUTE()
ROUTE95.fromField = "isActive"
ROUTE95.fromNode = "RandomTextClickedSensor"
ROUTE95.toField = "selectRandomCard"
ROUTE95.toNode = "TextScript"

Transform93.children.append(ROUTE95)
Shape96 = x3d.Shape()
Text97 = x3d.Text()
Text97.string = ["random"]
FontStyle98 = x3d.FontStyle()
FontStyle98.USE = "MessageFont"

Text97.fontStyle = FontStyle98

Shape96.geometry = Text97
Appearance99 = x3d.Appearance()
Appearance99.USE = "InterfaceAppearance"

Shape96.appearance = Appearance99

Transform93.children.append(Shape96)
Transform100 = x3d.Transform()
Transform100.scale = [1.8,0.6,1]
Shape101 = x3d.Shape()
Shape101.USE = "TransparentClickSurface"

Transform100.children.append(Shape101)

Transform93.children.append(Transform100)

Scene33.children.append(Transform93)
Transform102 = x3d.Transform()
Transform102.scale = [0.4,0.4,0.4]
Transform102.translation = [3.3,-0.5,0]
Anchor103 = x3d.Anchor()
Anchor103.DEF = "TextToSpeechAnchor"
Anchor103.description = "text to speech in browser"
Anchor103.parameter = ["target=_blank"]
Anchor103.url = ["http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"]
ROUTE104 = x3d.ROUTE()
ROUTE104.fromField = "textToSpeechUrl"
ROUTE104.fromNode = "TextScript"
ROUTE104.toField = "url"
ROUTE104.toNode = "TextToSpeechAnchor"

Anchor103.children.append(ROUTE104)
Shape105 = x3d.Shape()
Text106 = x3d.Text()
Text106.string = ["speech"]
FontStyle107 = x3d.FontStyle()
FontStyle107.USE = "MessageFont"

Text106.fontStyle = FontStyle107

Shape105.geometry = Text106
Appearance108 = x3d.Appearance()
Appearance108.USE = "InterfaceAppearance"

Shape105.appearance = Appearance108

Anchor103.children.append(Shape105)
Transform109 = x3d.Transform()
Transform109.scale = [1.8,0.6,1]
Shape110 = x3d.Shape()
Shape110.USE = "TransparentClickSurface"

Transform109.children.append(Shape110)

Anchor103.children.append(Transform109)

Transform102.children.append(Anchor103)

Scene33.children.append(Transform102)

X3D0.Scene = Scene33
f = open("../data/ObliqueStrategies.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ObliqueStrategies.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ObliqueStrategies.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
