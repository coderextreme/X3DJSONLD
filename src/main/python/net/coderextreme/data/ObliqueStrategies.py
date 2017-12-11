# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("ObliqueStrategies.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("description")
meta3.setContent("Text scripting and animation example using Oblique Strategies card set by Brian Eno.")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("creator")
meta4.setContent("Don Brutzman, John Kelly, Ben Cheng")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("created")
meta5.setContent("3 November 2013")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("modified")
meta6.setContent("18 October 2015")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("reference")
meta7.setContent("oblique.html")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("reference")
meta8.setContent("ObliqueStrategies.txt")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("reference")
meta9.setContent("ObliqueStrategiesScript.js")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("reference")
meta10.setContent("http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setName("reference")
meta11.setContent("http://www.eno-web.co.uk/obliques.html")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setName("reference")
meta12.setContent("http://gothpunk.com/haiku-intro.html")

head1.addMeta(meta12)
meta13 = metaObject()
meta13.setName("reference")
meta13.setContent("http://www.rtqe.net/ObliqueStrategies/OSintro.html")

head1.addMeta(meta13)
meta14 = metaObject()
meta14.setName("reference")
meta14.setContent("https://en.wikipedia.org/wiki/Oblique_Strategies")

head1.addMeta(meta14)
meta15 = metaObject()
meta15.setName("subject")
meta15.setContent("Brian Eno, Oblique Strategies")

head1.addMeta(meta15)
meta16 = metaObject()
meta16.setName("Image")
meta16.setContent("images/ObliqueStrategiesEntryScreen.png")

head1.addMeta(meta16)
meta17 = metaObject()
meta17.setName("audio")
meta17.setContent("http://translate.google.com/translate_tts?tl=en&q=hello%20X3D")

head1.addMeta(meta17)
meta18 = metaObject()
meta18.setName("audio")
meta18.setContent("translate_tts_HelloX3D.mp3")

head1.addMeta(meta18)
meta19 = metaObject()
meta19.setName("audio")
meta19.setContent("translate_tts_HelloX3D.wav")

head1.addMeta(meta19)
meta20 = metaObject()
meta20.setName("TODO")
meta20.setContent("multiliingual translation parameter")

head1.addMeta(meta20)
meta21 = metaObject()
meta21.setName("reference")
meta21.setContent("http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech")

head1.addMeta(meta21)
meta22 = metaObject()
meta22.setName("reference")
meta22.setContent("http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html")

head1.addMeta(meta22)
meta23 = metaObject()
meta23.setName("warning")
meta23.setContent("under development, scene Sound/AudioClip triggering (or retrieved file format) not working")

head1.addMeta(meta23)
meta24 = metaObject()
meta24.setName("warning")
meta24.setContent("BSContact error: Script node TextScript: parse error: line 15 \" var strategy = [];")

head1.addMeta(meta24)
meta25 = metaObject()
meta25.setName("identifier")
meta25.setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d")

head1.addMeta(meta25)
meta26 = metaObject()
meta26.setName("generator")
meta26.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta26)
meta27 = metaObject()
meta27.setName("license")
meta27.setContent("../license.html")

head1.addMeta(meta27)
X3D0.setHead(head1)
Scene28 = SceneObject()

NavigationInfo29 = NavigationInfoObject()

Scene28.addChild(NavigationInfo29)
Background30 = BackgroundObject()
Background30.setSkyColor([0.419608,0.427451,1])

Scene28.addChild(Background30)
Transform31 = TransformObject()
Transform31.setScale([0.4,0.4,0.4])
Transform31.setTranslation([0,1,0])

TouchSensor32 = TouchSensorObject()
TouchSensor32.setDEF("RandomTextClickedSensor")
TouchSensor32.setDescription("Select to see a new strategy")

Transform31.addChild(TouchSensor32)
Shape33 = ShapeObject()

Text34 = TextObject()
Text34.setString(["Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"])

FontStyle35 = FontStyleObject()
FontStyle35.setDEF("MessageFont")
FontStyle35.setFamily(["SANS"])
FontStyle35.setJustify(["MIDDLE","MIDDLE"])
FontStyle35.setStyle("BOLD")

Text34.setFontStyle(FontStyle35)
Shape33.setGeometry(Text34)
Appearance36 = AppearanceObject()

Material37 = MaterialObject()
Material37.setDiffuseColor([1,1,1])

Appearance36.setMaterial(Material37)
Shape33.setAppearance(Appearance36)
Transform31.addChild(Shape33)
Transform38 = TransformObject()
Transform38.setScale([10,3,1])

Shape39 = ShapeObject()
Shape39.setDEF("HeadlineClickSurface")

IndexedFaceSet40 = IndexedFaceSetObject()
IndexedFaceSet40.setCoordIndex([0,1,2,3,-1])
IndexedFaceSet40.setSolid(False)

Coordinate41 = CoordinateObject()
Coordinate41.setPoint([1,1,0,1,-1,0,-1,-1,0,-1,1,0])

IndexedFaceSet40.setCoord(Coordinate41)
Shape39.setGeometry(IndexedFaceSet40)
Appearance42 = AppearanceObject()

Material43 = MaterialObject()
Material43.setAmbientIntensity(0.245763)
Material43.setDiffuseColor([0.34773,0.090909,0.005289])
Material43.setShininess(0.07)
Material43.setSpecularColor([0.336735,0.051091,0.051091])
Material43.setTransparency(0.8)

Appearance42.setMaterial(Material43)
Shape39.setAppearance(Appearance42)
Transform38.addChild(Shape39)
Transform31.addChild(Transform38)
Scene28.addChild(Transform31)
Script44 = ScriptObject()
Script44.setDEF("TextScript")
Script44.setUrl(["./ObliqueStrategiesScript.js"])


Script44.addComments(CommentsBlock("""initialize() method includes unit test to printAllStrategies() to console"""))

Script44.addComments(CommentsBlock("""TODO insert field definitions here (index string_changed previous next random) and then animate!"""))
field45 = fieldObject()
field45.setType(fieldObject.TYPE_SFINT32)
field45.setName("index")
field45.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field45.setAppinfo("index for active strategy card, -1 means no selection")
field45.setValue("0")

Script44.addField(field45)
field46 = fieldObject()
field46.setType(fieldObject.TYPE_MFSTRING)
field46.setName("string_changed")
field46.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field46.setAppinfo("latest strategy card value")

Script44.addField(field46)
field47 = fieldObject()
field47.setType(fieldObject.TYPE_MFSTRING)
field47.setName("textToSpeechUrl")
field47.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field47.setAppinfo("url to invoke Google Translate")

Script44.addField(field47)
field48 = fieldObject()
field48.setType(fieldObject.TYPE_SFTIME)
field48.setName("newCardTime")
field48.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field48.setAppinfo("activate Sound node")

Script44.addField(field48)
field49 = fieldObject()
field49.setType(fieldObject.TYPE_SFBOOL)
field49.setName("selectPreviousCard")
field49.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script44.addField(field49)
field50 = fieldObject()
field50.setType(fieldObject.TYPE_SFBOOL)
field50.setName("selectNextCard")
field50.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script44.addField(field50)
field51 = fieldObject()
field51.setType(fieldObject.TYPE_SFBOOL)
field51.setName("selectRandomCard")
field51.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script44.addField(field51)
field52 = fieldObject()
field52.setType(fieldObject.TYPE_SFBOOL)
field52.setName("traceEnabled")
field52.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field52.setAppinfo("controls console tracing")
field52.setValue("true")

Script44.addField(field52)
Scene28.addChild(Script44)
Transform53 = TransformObject()
Transform53.setDEF("CardTransform")
Transform53.setScale([0.4,0.4,0.4])
Transform53.setTranslation([0,-1.5,0])

Shape54 = ShapeObject()

Text55 = TextObject()
Text55.setDEF("CardText")

FontStyle56 = FontStyleObject()
FontStyle56.setFamily(["SANS"])
FontStyle56.setJustify(["MIDDLE","MIDDLE"])
FontStyle56.setStyle("BOLD")

Text55.setFontStyle(FontStyle56)
Shape54.setGeometry(Text55)
Appearance57 = AppearanceObject()

Material58 = MaterialObject()
Material58.setDiffuseColor([1,1,1])

Appearance57.setMaterial(Material58)
Shape54.setAppearance(Appearance57)
Transform53.addChild(Shape54)
ROUTE59 = ROUTEObject()
ROUTE59.setFromField("string_changed")
ROUTE59.setFromNode("TextScript")
ROUTE59.setToField("string")
ROUTE59.setToNode("CardText")

Transform53.addChild(ROUTE59)
Sound60 = SoundObject()
Sound60.setDEF("CardSoundSpatialization")
Sound60.setMaxBack(100)
Sound60.setMaxFront(100)
Sound60.setMinBack(20)
Sound60.setMinFront(20)


Sound60.addComments(CommentsBlock("""Make sure the sound source AudioClip is audible at the user location"""))

Sound60.addComments(CommentsBlock("""Not all X3D players seem to use the .mp3"""))

Sound60.addComments(CommentsBlock("""&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players"""))

Sound60.addComments(CommentsBlock("""%20 is space character used in uri/url encoding"""))
AudioClip61 = AudioClipObject()
AudioClip61.setDEF("TextToSpeechAudioClip")
AudioClip61.setDescription("sends strategy text google translate")
AudioClip61.setUrl(["http://translate.google.com/translate_tts?tl=en&q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav"])

Sound60.setSource(AudioClip61)
Transform53.addChild(Sound60)
ROUTE62 = ROUTEObject()
ROUTE62.setFromField("textToSpeechUrl")
ROUTE62.setFromNode("TextScript")
ROUTE62.setToField("url")
ROUTE62.setToNode("TextToSpeechAudioClip")

Transform53.addChild(ROUTE62)
ROUTE63 = ROUTEObject()
ROUTE63.setFromField("newCardTime")
ROUTE63.setFromNode("TextScript")
ROUTE63.setToField("startTime")
ROUTE63.setToNode("TextToSpeechAudioClip")

Transform53.addChild(ROUTE63)
Scene28.addChild(Transform53)
Transform64 = TransformObject()
Transform64.setScale([0.4,0.4,0.4])
Transform64.setTranslation([-3.2,2.5,0])

TouchSensor65 = TouchSensorObject()
TouchSensor65.setDEF("PreviousTextClickedSensor")
TouchSensor65.setDescription("Select to see previous strategy")

Transform64.addChild(TouchSensor65)
ROUTE66 = ROUTEObject()
ROUTE66.setFromField("isActive")
ROUTE66.setFromNode("PreviousTextClickedSensor")
ROUTE66.setToField("selectPreviousCard")
ROUTE66.setToNode("TextScript")

Transform64.addChild(ROUTE66)
Shape67 = ShapeObject()

Text68 = TextObject()
Text68.setString(["previous"])

FontStyle69 = FontStyleObject()
FontStyle69.setUSE("MessageFont")

Text68.setFontStyle(FontStyle69)
Shape67.setGeometry(Text68)
Appearance70 = AppearanceObject()
Appearance70.setDEF("InterfaceAppearance")

Material71 = MaterialObject()
Material71.setDiffuseColor([1,0,0.6])

Appearance70.setMaterial(Material71)
Shape67.setAppearance(Appearance70)
Transform64.addChild(Shape67)
Transform72 = TransformObject()
Transform72.setScale([2,0.6,1])

Shape73 = ShapeObject()
Shape73.setDEF("TransparentClickSurface")


Shape73.addComments(CommentsBlock("""support Selectable Text with a scalable IFS"""))
IndexedFaceSet74 = IndexedFaceSetObject()
IndexedFaceSet74.setCoordIndex([0,1,2,3,-1])
IndexedFaceSet74.setSolid(False)

Coordinate75 = CoordinateObject()
Coordinate75.setPoint([1,1,0,1,-1,0,-1,-1,0,-1,1,0])

IndexedFaceSet74.setCoord(Coordinate75)
Shape73.setGeometry(IndexedFaceSet74)
Appearance76 = AppearanceObject()

Material77 = MaterialObject()
Material77.setTransparency(1)

Appearance76.setMaterial(Material77)
Shape73.setAppearance(Appearance76)
Transform72.addChild(Shape73)
Transform64.addChild(Transform72)
Scene28.addChild(Transform64)
Transform78 = TransformObject()
Transform78.setScale([0.4,0.4,0.4])
Transform78.setTranslation([3.5,2.5,0])

TouchSensor79 = TouchSensorObject()
TouchSensor79.setDEF("NextTextClickedSensor")
TouchSensor79.setDescription("Select to see next strategy")

Transform78.addChild(TouchSensor79)
ROUTE80 = ROUTEObject()
ROUTE80.setFromField("isActive")
ROUTE80.setFromNode("NextTextClickedSensor")
ROUTE80.setToField("selectNextCard")
ROUTE80.setToNode("TextScript")

Transform78.addChild(ROUTE80)
Shape81 = ShapeObject()

Text82 = TextObject()
Text82.setString(["next"])

FontStyle83 = FontStyleObject()
FontStyle83.setUSE("MessageFont")

Text82.setFontStyle(FontStyle83)
Shape81.setGeometry(Text82)
Appearance84 = AppearanceObject()
Appearance84.setUSE("InterfaceAppearance")

Shape81.setAppearance(Appearance84)
Transform78.addChild(Shape81)
Transform85 = TransformObject()
Transform85.setScale([1.2,0.6,1])

Shape86 = ShapeObject()
Shape86.setUSE("TransparentClickSurface")

Transform85.addChild(Shape86)
Transform78.addChild(Transform85)
Scene28.addChild(Transform78)
Transform87 = TransformObject()
Transform87.setScale([0.4,0.4,0.4])
Transform87.setTranslation([-3.3,-0.5,0])

TouchSensor88 = TouchSensorObject()
TouchSensor88.setUSE("RandomTextClickedSensor")

Transform87.addChild(TouchSensor88)
ROUTE89 = ROUTEObject()
ROUTE89.setFromField("isActive")
ROUTE89.setFromNode("RandomTextClickedSensor")
ROUTE89.setToField("selectRandomCard")
ROUTE89.setToNode("TextScript")

Transform87.addChild(ROUTE89)
Shape90 = ShapeObject()

Text91 = TextObject()
Text91.setString(["random"])

FontStyle92 = FontStyleObject()
FontStyle92.setUSE("MessageFont")

Text91.setFontStyle(FontStyle92)
Shape90.setGeometry(Text91)
Appearance93 = AppearanceObject()
Appearance93.setUSE("InterfaceAppearance")

Shape90.setAppearance(Appearance93)
Transform87.addChild(Shape90)
Transform94 = TransformObject()
Transform94.setScale([1.8,0.6,1])

Shape95 = ShapeObject()
Shape95.setUSE("TransparentClickSurface")

Transform94.addChild(Shape95)
Transform87.addChild(Transform94)
Scene28.addChild(Transform87)
Transform96 = TransformObject()
Transform96.setScale([0.4,0.4,0.4])
Transform96.setTranslation([3.3,-0.5,0])

Anchor97 = AnchorObject()
Anchor97.setDEF("TextToSpeechAnchor")
Anchor97.setDescription("text to speech in browser")
Anchor97.setParameter(["target=_blank"])
Anchor97.setUrl(["http://translate.google.com/translate_tts?tl=en&q=Overtly%20resist%20change"])

ROUTE98 = ROUTEObject()
ROUTE98.setFromField("textToSpeechUrl")
ROUTE98.setFromNode("TextScript")
ROUTE98.setToField("url")
ROUTE98.setToNode("TextToSpeechAnchor")

Anchor97.addChild(ROUTE98)
Shape99 = ShapeObject()

Text100 = TextObject()
Text100.setString(["speech"])

FontStyle101 = FontStyleObject()
FontStyle101.setUSE("MessageFont")

Text100.setFontStyle(FontStyle101)
Shape99.setGeometry(Text100)
Appearance102 = AppearanceObject()
Appearance102.setUSE("InterfaceAppearance")

Shape99.setAppearance(Appearance102)
Anchor97.addChild(Shape99)
Transform103 = TransformObject()
Transform103.setScale([1.8,0.6,1])

Shape104 = ShapeObject()
Shape104.setUSE("TransparentClickSurface")

Transform103.addChild(Shape104)
Anchor97.addChild(Transform103)
Transform96.addChild(Anchor97)
Scene28.addChild(Transform96)
X3D0.setScene(Scene28)

X3D0.toFileX3D("../data/ObliqueStrategies.new.x3d")
