import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("ObliqueStrategies.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Text scripting and animation example using Oblique Strategies card set by Brian Eno.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Don Brutzman, John Kelly, Ben Cheng")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("3 November 2013")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("10 November 2019")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("reference")
meta7.setContent("oblique.html")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("ObliqueStrategies.txt")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("ObliqueStrategiesScript.js")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("http://www.eno-web.co.uk/obliques.html")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("http://gothpunk.com/haiku-intro.html")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("http://www.rtqe.net/ObliqueStrategies/OSintro.html")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("reference")
meta14.setContent("https://en.wikipedia.org/wiki/Oblique_Strategies")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("subject")
meta15.setContent("Brian Eno, Oblique Strategies")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("Image")
meta16.setContent("images/ObliqueStrategiesEntryScreen.png")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("Sound")
meta17.setContent("http://translate.google.com/translate_tts?tl=en&q=hello%20X3D")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("Sound")
meta18.setContent("translate_tts_HelloX3D.mp3")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("Sound")
meta19.setContent("translate_tts_HelloX3D.wav")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("TODO")
meta20.setContent("multiliingual translation parameter")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("reference")
meta21.setContent("http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("reference")
meta22.setContent("http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("warning")
meta23.setContent("under development, scene Sound/AudioClip triggering (or retrieved file format) not working")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("warning")
meta24.setContent("TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("reference")
meta25.setContent("https://gist.github.com/alotaiba/1728771")

head1.addMeta(meta25)
meta26 = x3d.meta()
meta26.setName("reference")
meta26.setContent("https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api")

head1.addMeta(meta26)
meta27 = x3d.meta()
meta27.setName("Sound")
meta27.setContent("https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4")

head1.addMeta(meta27)
meta28 = x3d.meta()
meta28.setName("Sound")
meta28.setContent("translate_tts_HelloX3D4.mp3")

head1.addMeta(meta28)
meta29 = x3d.meta()
meta29.setName("reference")
meta29.setContent("https://cloud.google.com/translate/docs/basic/translating-text")

head1.addMeta(meta29)
meta30 = x3d.meta()
meta30.setName("identifier")
meta30.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d")

head1.addMeta(meta30)
meta31 = x3d.meta()
meta31.setName("generator")
meta31.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta31)
meta32 = x3d.meta()
meta32.setName("license")
meta32.setContent("../license.html")

head1.addMeta(meta32)

X3D0.setHead(head1)
Scene33 = x3d.Scene()
WorldInfo34 = x3d.WorldInfo()
WorldInfo34.setTitle("ObliqueStrategies.x3d")

Scene33.addChildren(WorldInfo34)
NavigationInfo35 = x3d.NavigationInfo()
NavigationInfo35.setType(["NONE"])

Scene33.addChildren(NavigationInfo35)
Background36 = x3d.Background()
Background36.setSkyColor(x3d.doubleToFloat([0.419608,0.427451,1]))

Scene33.addChildren(Background36)
Transform37 = x3d.Transform()
Transform37.setScale(x3d.doubleToFloat([0.4,0.4,0.4]))
Transform37.setTranslation(x3d.doubleToFloat([0,1,0]))
TouchSensor38 = x3d.TouchSensor()
TouchSensor38.setDEF("RandomTextClickedSensor")
TouchSensor38.setDescription("Select to see a new strategy")

Transform37.addChildren(TouchSensor38)
Shape39 = x3d.Shape()
Text40 = x3d.Text()
Text40.setString(["Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"])
FontStyle41 = x3d.FontStyle()
FontStyle41.setDEF("MessageFont")
FontStyle41.setFamily(["SANS"])
FontStyle41.setJustify(["MIDDLE","MIDDLE"])
FontStyle41.setStyle("BOLD")

Text40.setFontStyle(FontStyle41)

Shape39.setGeometry(Text40)
Appearance42 = x3d.Appearance()
Material43 = x3d.Material()
Material43.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance42.setMaterial(Material43)

Shape39.setAppearance(Appearance42)

Transform37.addChild(Shape39)
Transform44 = x3d.Transform()
Transform44.setScale(x3d.doubleToFloat([10,3,1]))
Shape45 = x3d.Shape()
Shape45.setDEF("HeadlineClickSurface")
IndexedFaceSet46 = x3d.IndexedFaceSet()
IndexedFaceSet46.setCoordIndex([0,1,2,3,-1])
IndexedFaceSet46.setSolid(False)
Coordinate47 = x3d.Coordinate()
Coordinate47.setPoint(x3d.doubleToFloat([1,1,0,1,-1,0,-1,-1,0,-1,1,0]))

IndexedFaceSet46.setCoord(Coordinate47)

Shape45.setGeometry(IndexedFaceSet46)
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.setAmbientIntensity(0.245763)
Material49.setDiffuseColor(x3d.doubleToFloat([0.34773,0.090909,0.005289]))
Material49.setShininess(0.07)
Material49.setSpecularColor(x3d.doubleToFloat([0.336735,0.051091,0.051091]))
Material49.setTransparency(0.8)

Appearance48.setMaterial(Material49)

Shape45.setAppearance(Appearance48)

Transform44.addChild(Shape45)

Transform37.addChildren(Transform44)

Scene33.addChildren(Transform37)
Script50 = x3d.Script()
Script50.setDEF("TextScript")
Script50.setUrl(["ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"])
#initialize() method includes unit test to printAllStrategies() to console
#TODO insert field definitions here (index string_changed previous next random) and then animate!
field51 = x3d.field()
field51.setName("index")
field51.setAccessType("initializeOnly")
field51.setAppinfo("index for active strategy card, -1 means no selection")
field51.setType("SFInt32")
field51.setValue("0")

Script50.addField(field51)
field52 = x3d.field()
field52.setName("string_changed")
field52.setAccessType("outputOnly")
field52.setAppinfo("latest strategy card value")
field52.setType("MFString")

Script50.addField(field52)
field53 = x3d.field()
field53.setName("textToSpeechUrl")
field53.setAccessType("outputOnly")
field53.setAppinfo("\"url to invoke Google Translate\"")
field53.setType("MFString")

Script50.addField(field53)
field54 = x3d.field()
field54.setName("newCardTime")
field54.setAccessType("outputOnly")
field54.setAppinfo("activate Sound node")
field54.setType("SFTime")

Script50.addField(field54)
field55 = x3d.field()
field55.setName("selectPreviousCard")
field55.setAccessType("inputOnly")
field55.setType("SFBool")

Script50.addField(field55)
field56 = x3d.field()
field56.setName("selectNextCard")
field56.setAccessType("inputOnly")
field56.setType("SFBool")

Script50.addField(field56)
field57 = x3d.field()
field57.setName("selectRandomCard")
field57.setAccessType("inputOnly")
field57.setType("SFBool")

Script50.addField(field57)
field58 = x3d.field()
field58.setName("traceEnabled")
field58.setAccessType("initializeOnly")
field58.setAppinfo("controls console tracing")
field58.setType("SFBool")
field58.setValue("true")

Script50.addField(field58)

Scene33.addChildren(Script50)
Transform59 = x3d.Transform()
Transform59.setDEF("CardTransform")
Transform59.setScale(x3d.doubleToFloat([0.4,0.4,0.4]))
Transform59.setTranslation(x3d.doubleToFloat([0,-1.5,0]))
Shape60 = x3d.Shape()
Text61 = x3d.Text()
Text61.setDEF("CardText")
FontStyle62 = x3d.FontStyle()
FontStyle62.setFamily(["SANS"])
FontStyle62.setJustify(["MIDDLE","MIDDLE"])
FontStyle62.setStyle("BOLD")

Text61.setFontStyle(FontStyle62)

Shape60.setGeometry(Text61)
Appearance63 = x3d.Appearance()
Material64 = x3d.Material()
Material64.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance63.setMaterial(Material64)

Shape60.setAppearance(Appearance63)

Transform59.addChild(Shape60)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromField("string_changed")
ROUTE65.setFromNode("TextScript")
ROUTE65.setToField("string")
ROUTE65.setToNode("CardText")

Transform59.addChildren(ROUTE65)
Sound66 = x3d.Sound()
Sound66.setDEF("CardSoundSpatialization")
Sound66.setMaxBack(100)
Sound66.setMaxFront(100)
Sound66.setMinBack(20)
Sound66.setMinFront(20)
#Make sure the sound source AudioClip is audible at the user location
#Not all X3D players seem to use the .mp3
#&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players
#%20 is space character used in uri/url encoding
AudioClip67 = x3d.AudioClip()
AudioClip67.setDEF("TextToSpeechAudioClip")
AudioClip67.setDescription("sends strategy text google translate")
AudioClip67.setUrl(["http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"])

Sound66.setSource(AudioClip67)

Transform59.addChildren(Sound66)
ROUTE68 = x3d.ROUTE()
ROUTE68.setFromField("textToSpeechUrl")
ROUTE68.setFromNode("TextScript")
ROUTE68.setToField("url")
ROUTE68.setToNode("TextToSpeechAudioClip")

Transform59.addChildren(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.setFromField("newCardTime")
ROUTE69.setFromNode("TextScript")
ROUTE69.setToField("startTime")
ROUTE69.setToNode("TextToSpeechAudioClip")

Transform59.addChildren(ROUTE69)

Scene33.addChildren(Transform59)
Transform70 = x3d.Transform()
Transform70.setScale(x3d.doubleToFloat([0.4,0.4,0.4]))
Transform70.setTranslation(x3d.doubleToFloat([-3.2,2.5,0]))
TouchSensor71 = x3d.TouchSensor()
TouchSensor71.setDEF("PreviousTextClickedSensor")
TouchSensor71.setDescription("Select to see previous strategy")

Transform70.addChildren(TouchSensor71)
ROUTE72 = x3d.ROUTE()
ROUTE72.setFromField("isActive")
ROUTE72.setFromNode("PreviousTextClickedSensor")
ROUTE72.setToField("selectPreviousCard")
ROUTE72.setToNode("TextScript")

Transform70.addChildren(ROUTE72)
Shape73 = x3d.Shape()
Text74 = x3d.Text()
Text74.setString(["previous"])
FontStyle75 = x3d.FontStyle()
FontStyle75.setUSE("MessageFont")

Text74.setFontStyle(FontStyle75)

Shape73.setGeometry(Text74)
Appearance76 = x3d.Appearance()
Appearance76.setDEF("InterfaceAppearance")
Material77 = x3d.Material()
Material77.setDiffuseColor(x3d.doubleToFloat([1,0,0.6]))

Appearance76.setMaterial(Material77)

Shape73.setAppearance(Appearance76)

Transform70.addChild(Shape73)
Transform78 = x3d.Transform()
Transform78.setScale(x3d.doubleToFloat([2,0.6,1]))
Shape79 = x3d.Shape()
Shape79.setDEF("TransparentClickSurface")
#support Selectable Text with a scalable IFS
IndexedFaceSet80 = x3d.IndexedFaceSet()
IndexedFaceSet80.setCoordIndex([0,1,2,3,-1])
IndexedFaceSet80.setSolid(False)
Coordinate81 = x3d.Coordinate()
Coordinate81.setPoint(x3d.doubleToFloat([1,1,0,1,-1,0,-1,-1,0,-1,1,0]))

IndexedFaceSet80.setCoord(Coordinate81)

Shape79.setGeometry(IndexedFaceSet80)
Appearance82 = x3d.Appearance()
Material83 = x3d.Material()
Material83.setTransparency(1)

Appearance82.setMaterial(Material83)

Shape79.setAppearance(Appearance82)

Transform78.addChild(Shape79)

Transform70.addChildren(Transform78)

Scene33.addChildren(Transform70)
Transform84 = x3d.Transform()
Transform84.setScale(x3d.doubleToFloat([0.4,0.4,0.4]))
Transform84.setTranslation(x3d.doubleToFloat([3.5,2.5,0]))
TouchSensor85 = x3d.TouchSensor()
TouchSensor85.setDEF("NextTextClickedSensor")
TouchSensor85.setDescription("Select to see next strategy")

Transform84.addChildren(TouchSensor85)
ROUTE86 = x3d.ROUTE()
ROUTE86.setFromField("isActive")
ROUTE86.setFromNode("NextTextClickedSensor")
ROUTE86.setToField("selectNextCard")
ROUTE86.setToNode("TextScript")

Transform84.addChildren(ROUTE86)
Shape87 = x3d.Shape()
Text88 = x3d.Text()
Text88.setString(["next"])
FontStyle89 = x3d.FontStyle()
FontStyle89.setUSE("MessageFont")

Text88.setFontStyle(FontStyle89)

Shape87.setGeometry(Text88)
Appearance90 = x3d.Appearance()
Appearance90.setUSE("InterfaceAppearance")

Shape87.setAppearance(Appearance90)

Transform84.addChild(Shape87)
Transform91 = x3d.Transform()
Transform91.setScale(x3d.doubleToFloat([1.2,0.6,1]))
Shape92 = x3d.Shape()
Shape92.setUSE("TransparentClickSurface")

Transform91.addChild(Shape92)

Transform84.addChildren(Transform91)

Scene33.addChildren(Transform84)
Transform93 = x3d.Transform()
Transform93.setScale(x3d.doubleToFloat([0.4,0.4,0.4]))
Transform93.setTranslation(x3d.doubleToFloat([-3.3,-0.5,0]))
TouchSensor94 = x3d.TouchSensor()
TouchSensor94.setUSE("RandomTextClickedSensor")

Transform93.addChildren(TouchSensor94)
ROUTE95 = x3d.ROUTE()
ROUTE95.setFromField("isActive")
ROUTE95.setFromNode("RandomTextClickedSensor")
ROUTE95.setToField("selectRandomCard")
ROUTE95.setToNode("TextScript")

Transform93.addChildren(ROUTE95)
Shape96 = x3d.Shape()
Text97 = x3d.Text()
Text97.setString(["random"])
FontStyle98 = x3d.FontStyle()
FontStyle98.setUSE("MessageFont")

Text97.setFontStyle(FontStyle98)

Shape96.setGeometry(Text97)
Appearance99 = x3d.Appearance()
Appearance99.setUSE("InterfaceAppearance")

Shape96.setAppearance(Appearance99)

Transform93.addChild(Shape96)
Transform100 = x3d.Transform()
Transform100.setScale(x3d.doubleToFloat([1.8,0.6,1]))
Shape101 = x3d.Shape()
Shape101.setUSE("TransparentClickSurface")

Transform100.addChild(Shape101)

Transform93.addChildren(Transform100)

Scene33.addChildren(Transform93)
Transform102 = x3d.Transform()
Transform102.setScale(x3d.doubleToFloat([0.4,0.4,0.4]))
Transform102.setTranslation(x3d.doubleToFloat([3.3,-0.5,0]))
Anchor103 = x3d.Anchor()
Anchor103.setDEF("TextToSpeechAnchor")
Anchor103.setDescription("text to speech in browser")
Anchor103.setParameter(["target=_blank"])
Anchor103.setUrl(["http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"])
ROUTE104 = x3d.ROUTE()
ROUTE104.setFromField("textToSpeechUrl")
ROUTE104.setFromNode("TextScript")
ROUTE104.setToField("url")
ROUTE104.setToNode("TextToSpeechAnchor")

Anchor103.addChildren(ROUTE104)
Shape105 = x3d.Shape()
Text106 = x3d.Text()
Text106.setString(["speech"])
FontStyle107 = x3d.FontStyle()
FontStyle107.setUSE("MessageFont")

Text106.setFontStyle(FontStyle107)

Shape105.setGeometry(Text106)
Appearance108 = x3d.Appearance()
Appearance108.setUSE("InterfaceAppearance")

Shape105.setAppearance(Appearance108)

Anchor103.addChildren(Shape105)
Transform109 = x3d.Transform()
Transform109.setScale(x3d.doubleToFloat([1.8,0.6,1]))
Shape110 = x3d.Shape()
Shape110.setUSE("TransparentClickSurface")

Transform109.addChild(Shape110)

Anchor103.addChildren(Transform109)

Transform102.addChildren(Anchor103)

Scene33.addChildren(Transform102)

X3D0.setScene(Scene33)
X3D0.toFileX3D("../data/ObliqueStrategies.new.python.x3d")
X3D0.toFileJSON("../data/ObliqueStrategies.new.python.json")
