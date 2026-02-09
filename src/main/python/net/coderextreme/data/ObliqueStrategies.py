print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta6.content = "Mon, 09 Feb 2026 07:12:54 GMT"

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

X3D0.head = head1
Scene31 = x3d.Scene()
WorldInfo32 = x3d.WorldInfo()
WorldInfo32.title = "ObliqueStrategies.x3d"

Scene31.children.append(WorldInfo32)
NavigationInfo33 = x3d.NavigationInfo()
NavigationInfo33.type = ["NONE"]

Scene31.children.append(NavigationInfo33)
Background34 = x3d.Background()
Background34.skyColor = [(0.419608, 0.427451, 1)]

Scene31.children.append(Background34)
Transform35 = x3d.Transform()
Transform35.translation = [0,1,0]
Transform35.scale = [0.4,0.4,0.4]
TouchSensor36 = x3d.TouchSensor(DEF="RandomTextClickedSensor")
TouchSensor36.description = "Select to see a new strategy"

Transform35.children.append(TouchSensor36)
Shape37 = x3d.Shape()
Appearance38 = x3d.Appearance()
Material39 = x3d.Material()
Material39.diffuseColor = [1,1,1]

Appearance38.material = Material39

Shape37.appearance = Appearance38
Text40 = x3d.Text()
Text40.string = ["Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"]
FontStyle41 = x3d.FontStyle(DEF="MessageFont")
FontStyle41.family = ["SANS"]
FontStyle41.style = "BOLD"
FontStyle41.justify = ["MIDDLE","MIDDLE"]

Text40.fontStyle = FontStyle41

Shape37.geometry = Text40

Transform35.children.append(Shape37)
Transform42 = x3d.Transform()
Transform42.scale = [10,3,1]
Shape43 = x3d.Shape(DEF="HeadlineClickSurface")
Appearance44 = x3d.Appearance()
Material45 = x3d.Material()
Material45.ambientIntensity = 0.245763
Material45.diffuseColor = [0.34773,0.090909,0.005289]
Material45.specularColor = [0.336735,0.051091,0.051091]
Material45.shininess = 0.07
Material45.transparency = 0.8

Appearance44.material = Material45

Shape43.appearance = Appearance44
IndexedFaceSet46 = x3d.IndexedFaceSet()
IndexedFaceSet46.solid = False
IndexedFaceSet46.coordIndex = [0,1,2,3,-1]
Coordinate47 = x3d.Coordinate()
Coordinate47.point = [(1, 1, 0),(1, -1, 0),(-1, -1, 0),(-1, 1, 0)]

IndexedFaceSet46.coord = Coordinate47

Shape43.geometry = IndexedFaceSet46

Transform42.children.append(Shape43)

Transform35.children.append(Transform42)

Scene31.children.append(Transform35)
Script48 = x3d.Script(DEF="TextScript")
Script48.url = ["ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"]
field49 = x3d.field()
field49.accessType = "initializeOnly"
field49.type = "SFInt32"
field49.name = "index"
field49.appinfo = "index for active strategy card, -1 means no selection"

Script48.field.append(field49)
field50 = x3d.field()
field50.accessType = "outputOnly"
field50.type = "MFString"
field50.name = "string_changed"
field50.appinfo = "latest strategy card value"

Script48.field.append(field50)
field51 = x3d.field()
field51.accessType = "outputOnly"
field51.type = "MFString"
field51.name = "textToSpeechUrl"
field51.appinfo = "\"url to invoke Google Translate\""

Script48.field.append(field51)
field52 = x3d.field()
field52.accessType = "outputOnly"
field52.type = "SFTime"
field52.name = "newCardTime"
field52.appinfo = "activate Sound node"

Script48.field.append(field52)
field53 = x3d.field()
field53.accessType = "inputOnly"
field53.type = "SFBool"
field53.name = "selectPreviousCard"

Script48.field.append(field53)
field54 = x3d.field()
field54.accessType = "inputOnly"
field54.type = "SFBool"
field54.name = "selectNextCard"

Script48.field.append(field54)
field55 = x3d.field()
field55.accessType = "inputOnly"
field55.type = "SFBool"
field55.name = "selectRandomCard"

Script48.field.append(field55)
field56 = x3d.field()
field56.accessType = "initializeOnly"
field56.type = "SFBool"
field56.name = "traceEnabled"
field56.value = True
field56.appinfo = "controls console tracing"

Script48.field.append(field56)

Scene31.children.append(Script48)
Transform57 = x3d.Transform(DEF="CardTransform")
Transform57.translation = [0,-1.5,0]
Transform57.scale = [0.4,0.4,0.4]
Shape58 = x3d.Shape()
Appearance59 = x3d.Appearance()
Material60 = x3d.Material()
Material60.diffuseColor = [1,1,1]

Appearance59.material = Material60

Shape58.appearance = Appearance59
Text61 = x3d.Text(DEF="CardText")
FontStyle62 = x3d.FontStyle()
FontStyle62.family = ["SANS"]
FontStyle62.style = "BOLD"
FontStyle62.justify = ["MIDDLE","MIDDLE"]

Text61.fontStyle = FontStyle62

Shape58.geometry = Text61

Transform57.children.append(Shape58)
Sound63 = x3d.Sound(DEF="CardSoundSpatialization")
Sound63.minBack = 20
Sound63.minFront = 20
Sound63.maxBack = 100
Sound63.maxFront = 100
AudioClip64 = x3d.AudioClip(DEF="TextToSpeechAudioClip")
AudioClip64.description = "sends strategy text google translate"
AudioClip64.url = ["http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"]

Sound63.source = AudioClip64

Transform57.children.append(Sound63)

Scene31.children.append(Transform57)
Transform65 = x3d.Transform()
Transform65.translation = [-3.2,2.5,0]
Transform65.scale = [0.4,0.4,0.4]
TouchSensor66 = x3d.TouchSensor(DEF="PreviousTextClickedSensor")
TouchSensor66.description = "Select to see previous strategy"

Transform65.children.append(TouchSensor66)
Shape67 = x3d.Shape()
Appearance68 = x3d.Appearance(DEF="InterfaceAppearance")
Material69 = x3d.Material()
Material69.diffuseColor = [1,0,0.6]

Appearance68.material = Material69

Shape67.appearance = Appearance68
Text70 = x3d.Text()
Text70.string = ["previous"]
FontStyle71 = x3d.FontStyle(USE="MessageFont")

Text70.fontStyle = FontStyle71

Shape67.geometry = Text70

Transform65.children.append(Shape67)
Transform72 = x3d.Transform()
Transform72.scale = [2,0.6,1]
Shape73 = x3d.Shape(DEF="TransparentClickSurface")
Appearance74 = x3d.Appearance()
Material75 = x3d.Material()
Material75.transparency = 1

Appearance74.material = Material75

Shape73.appearance = Appearance74
IndexedFaceSet76 = x3d.IndexedFaceSet()
IndexedFaceSet76.solid = False
IndexedFaceSet76.coordIndex = [0,1,2,3,-1]
Coordinate77 = x3d.Coordinate()
Coordinate77.point = [(1, 1, 0),(1, -1, 0),(-1, -1, 0),(-1, 1, 0)]

IndexedFaceSet76.coord = Coordinate77

Shape73.geometry = IndexedFaceSet76

Transform72.children.append(Shape73)

Transform65.children.append(Transform72)

Scene31.children.append(Transform65)
Transform78 = x3d.Transform()
Transform78.translation = [3.5,2.5,0]
Transform78.scale = [0.4,0.4,0.4]
TouchSensor79 = x3d.TouchSensor(DEF="NextTextClickedSensor")
TouchSensor79.description = "Select to see next strategy"

Transform78.children.append(TouchSensor79)
Shape80 = x3d.Shape()
Appearance81 = x3d.Appearance(USE="InterfaceAppearance")

Shape80.appearance = Appearance81
Text82 = x3d.Text()
Text82.string = ["next"]
FontStyle83 = x3d.FontStyle(USE="MessageFont")

Text82.fontStyle = FontStyle83

Shape80.geometry = Text82

Transform78.children.append(Shape80)
Transform84 = x3d.Transform()
Transform84.scale = [1.2,0.6,1]
Shape85 = x3d.Shape(USE="TransparentClickSurface")

Transform84.children.append(Shape85)

Transform78.children.append(Transform84)

Scene31.children.append(Transform78)
Transform86 = x3d.Transform()
Transform86.translation = [-3.3,-0.5,0]
Transform86.scale = [0.4,0.4,0.4]
TouchSensor87 = x3d.TouchSensor(USE="RandomTextClickedSensor")

Transform86.children.append(TouchSensor87)
Shape88 = x3d.Shape()
Appearance89 = x3d.Appearance(USE="InterfaceAppearance")

Shape88.appearance = Appearance89
Text90 = x3d.Text()
Text90.string = ["random"]
FontStyle91 = x3d.FontStyle(USE="MessageFont")

Text90.fontStyle = FontStyle91

Shape88.geometry = Text90

Transform86.children.append(Shape88)
Transform92 = x3d.Transform()
Transform92.scale = [1.8,0.6,1]
Shape93 = x3d.Shape(USE="TransparentClickSurface")

Transform92.children.append(Shape93)

Transform86.children.append(Transform92)

Scene31.children.append(Transform86)
Transform94 = x3d.Transform()
Transform94.translation = [3.3,-0.5,0]
Transform94.scale = [0.4,0.4,0.4]
Anchor95 = x3d.Anchor(DEF="TextToSpeechAnchor")
Anchor95.description = "text to speech in browser"
Anchor95.url = ["http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"]
Anchor95.parameter = ["target=_blank"]
Shape96 = x3d.Shape()
Appearance97 = x3d.Appearance(USE="InterfaceAppearance")

Shape96.appearance = Appearance97
Text98 = x3d.Text()
Text98.string = ["speech"]
FontStyle99 = x3d.FontStyle(USE="MessageFont")

Text98.fontStyle = FontStyle99

Shape96.geometry = Text98

Anchor95.children.append(Shape96)
Transform100 = x3d.Transform()
Transform100.scale = [1.8,0.6,1]
Shape101 = x3d.Shape(USE="TransparentClickSurface")

Transform100.children.append(Shape101)

Anchor95.children.append(Transform100)

Transform94.children.append(Anchor95)

Scene31.children.append(Transform94)
ROUTE102 = x3d.ROUTE()
ROUTE102.fromNode = "TextScript"
ROUTE102.fromField = "string_changed"
ROUTE102.toNode = "CardText"
ROUTE102.toField = "set_string"

Scene31.children.append(ROUTE102)
ROUTE103 = x3d.ROUTE()
ROUTE103.fromNode = "TextScript"
ROUTE103.fromField = "textToSpeechUrl"
ROUTE103.toNode = "TextToSpeechAudioClip"
ROUTE103.toField = "set_url"

Scene31.children.append(ROUTE103)
ROUTE104 = x3d.ROUTE()
ROUTE104.fromNode = "TextScript"
ROUTE104.fromField = "newCardTime"
ROUTE104.toNode = "TextToSpeechAudioClip"
ROUTE104.toField = "set_startTime"

Scene31.children.append(ROUTE104)
ROUTE105 = x3d.ROUTE()
ROUTE105.fromNode = "PreviousTextClickedSensor"
ROUTE105.fromField = "isActive"
ROUTE105.toNode = "TextScript"
ROUTE105.toField = "selectPreviousCard"

Scene31.children.append(ROUTE105)
ROUTE106 = x3d.ROUTE()
ROUTE106.fromNode = "NextTextClickedSensor"
ROUTE106.fromField = "isActive"
ROUTE106.toNode = "TextScript"
ROUTE106.toField = "selectNextCard"

Scene31.children.append(ROUTE106)
ROUTE107 = x3d.ROUTE()
ROUTE107.fromNode = "RandomTextClickedSensor"
ROUTE107.fromField = "isActive"
ROUTE107.toNode = "TextScript"
ROUTE107.toField = "selectRandomCard"

Scene31.children.append(ROUTE107)
ROUTE108 = x3d.ROUTE()
ROUTE108.fromNode = "TextScript"
ROUTE108.fromField = "textToSpeechUrl"
ROUTE108.toNode = "TextToSpeechAnchor"
ROUTE108.toField = "set_url"

Scene31.children.append(ROUTE108)

X3D0.Scene = Scene31
f = open("../data/ObliqueStrategies.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ObliqueStrategies.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ObliqueStrategies.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
