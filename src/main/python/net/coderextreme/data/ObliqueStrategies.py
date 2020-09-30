import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
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
Background36.setSkyColor([0.419608,0.427451,1])
Background36.setTransparency(0)

Scene33.addChildren(Background36)
Transform37 = x3d.Transform()
Transform37.setScale([0.4,0.4,0.4])
Transform37.setTranslation([0,1,0])
Transform37.setBboxCenter([0,0,0])
Transform37.setBboxSize([-1,-1,-1])
TouchSensor38 = x3d.TouchSensor()
TouchSensor38.setDEF("RandomTextClickedSensor")
TouchSensor38.setDescription("Select to see a new strategy")

Transform37.addChildren(TouchSensor38)
Shape39 = x3d.Shape()
Shape39.setBboxCenter([0,0,0])
Shape39.setBboxSize([-1,-1,-1])
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
Material43.setDiffuseColor([1,1,1])

Appearance42.setMaterial(Material43)

Shape39.setAppearance(Appearance42)

Transform37.addChildren(Shape39)
Transform44 = x3d.Transform()
Transform44.setScale([10,3,1])
Transform44.setBboxCenter([0,0,0])
Transform44.setBboxSize([-1,-1,-1])
Shape45 = x3d.Shape()
Shape45.setDEF("HeadlineClickSurface")
Shape45.setBboxCenter([0,0,0])
Shape45.setBboxSize([-1,-1,-1])
IndexedFaceSet46 = x3d.IndexedFaceSet()
IndexedFaceSet46.setCoordIndex([0,1,2,3,-1])
IndexedFaceSet46.setSolid(False)
Coordinate47 = x3d.Coordinate()
Coordinate47.setPoint([1,1,0,1,-1,0,-1,-1,0,-1,1,0])

IndexedFaceSet46.setCoord(Coordinate47)

Shape45.setGeometry(IndexedFaceSet46)
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.setAmbientIntensity(0.245763)
Material49.setDiffuseColor([0.34773,0.090909,0.005289])
Material49.setShininess(0.07)
Material49.setSpecularColor([0.336735,0.051091,0.051091])
Material49.setTransparency(0.8)

Appearance48.setMaterial(Material49)

Shape45.setAppearance(Appearance48)

Transform44.addChildren(Shape45)

Transform37.addChildren(Transform44)

Scene33.addChildren(Transform37)
Transform50 = x3d.Transform()
Transform50.setDEF("CardTransform")
Transform50.setScale([0.4,0.4,0.4])
Transform50.setTranslation([0,-1.5,0])
Transform50.setBboxCenter([0,0,0])
Transform50.setBboxSize([-1,-1,-1])
Shape51 = x3d.Shape()
Shape51.setBboxCenter([0,0,0])
Shape51.setBboxSize([-1,-1,-1])
Text52 = x3d.Text()
Text52.setDEF("CardText")
FontStyle53 = x3d.FontStyle()
FontStyle53.setFamily(["SANS"])
FontStyle53.setJustify(["MIDDLE","MIDDLE"])
FontStyle53.setStyle("BOLD")

Text52.setFontStyle(FontStyle53)

Shape51.setGeometry(Text52)
Appearance54 = x3d.Appearance()
Material55 = x3d.Material()
Material55.setDiffuseColor([1,1,1])

Appearance54.setMaterial(Material55)

Shape51.setAppearance(Appearance54)

Transform50.addChildren(Shape51)
ROUTE56 = x3d.ROUTE()
ROUTE56.setFromField("string_changed")
ROUTE56.setFromNode("TextScript")
ROUTE56.setToField("string")
ROUTE56.setToNode("CardText")

Transform50.addChildren(ROUTE56)
Sound57 = x3d.Sound()
Sound57.setDEF("CardSoundSpatialization")
Sound57.setMaxBack(100)
Sound57.setMaxFront(100)
Sound57.setMinBack(20)
Sound57.setMinFront(20)
#Make sure the sound source AudioClip is audible at the user location
#Not all X3D players seem to use the .mp3
#&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players
#%20 is space character used in uri/url encoding
AudioClip58 = x3d.AudioClip()
AudioClip58.setDEF("TextToSpeechAudioClip")
AudioClip58.setDescription("sends strategy text google translate")
AudioClip58.setUrl(["http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"])
AudioClip58.setLoop(False)
AudioClip58.setPitch(1)
AudioClip58.setStartTime(0)
AudioClip58.setStopTime(0)
AudioClip58.setPauseTime(0)
AudioClip58.setResumeTime(0)

Sound57.setSource(AudioClip58)

Transform50.addChildren(Sound57)
ROUTE59 = x3d.ROUTE()
ROUTE59.setFromField("textToSpeechUrl")
ROUTE59.setFromNode("TextScript")
ROUTE59.setToField("url")
ROUTE59.setToNode("TextToSpeechAudioClip")

Transform50.addChildren(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.setFromField("newCardTime")
ROUTE60.setFromNode("TextScript")
ROUTE60.setToField("startTime")
ROUTE60.setToNode("TextToSpeechAudioClip")

Transform50.addChildren(ROUTE60)

Scene33.addChildren(Transform50)
Transform61 = x3d.Transform()
Transform61.setScale([0.4,0.4,0.4])
Transform61.setTranslation([-3.2,2.5,0])
Transform61.setBboxCenter([0,0,0])
Transform61.setBboxSize([-1,-1,-1])
TouchSensor62 = x3d.TouchSensor()
TouchSensor62.setDEF("PreviousTextClickedSensor")
TouchSensor62.setDescription("Select to see previous strategy")

Transform61.addChildren(TouchSensor62)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromField("isActive")
ROUTE63.setFromNode("PreviousTextClickedSensor")
ROUTE63.setToField("selectPreviousCard")
ROUTE63.setToNode("TextScript")

Transform61.addChildren(ROUTE63)
Shape64 = x3d.Shape()
Shape64.setBboxCenter([0,0,0])
Shape64.setBboxSize([-1,-1,-1])
Text65 = x3d.Text()
Text65.setString(["previous"])
FontStyle66 = x3d.FontStyle()
FontStyle66.setUSE("MessageFont")

Text65.setFontStyle(FontStyle66)

Shape64.setGeometry(Text65)
Appearance67 = x3d.Appearance()
Appearance67.setDEF("InterfaceAppearance")
Material68 = x3d.Material()
Material68.setDiffuseColor([1,0,0.6])

Appearance67.setMaterial(Material68)

Shape64.setAppearance(Appearance67)

Transform61.addChildren(Shape64)
Transform69 = x3d.Transform()
Transform69.setScale([2,0.6,1])
Transform69.setBboxCenter([0,0,0])
Transform69.setBboxSize([-1,-1,-1])
Shape70 = x3d.Shape()
Shape70.setDEF("TransparentClickSurface")
Shape70.setBboxCenter([0,0,0])
Shape70.setBboxSize([-1,-1,-1])
#support Selectable Text with a scalable IFS
IndexedFaceSet71 = x3d.IndexedFaceSet()
IndexedFaceSet71.setCoordIndex([0,1,2,3,-1])
IndexedFaceSet71.setSolid(False)
Coordinate72 = x3d.Coordinate()
Coordinate72.setPoint([1,1,0,1,-1,0,-1,-1,0,-1,1,0])

IndexedFaceSet71.setCoord(Coordinate72)

Shape70.setGeometry(IndexedFaceSet71)
Appearance73 = x3d.Appearance()
Material74 = x3d.Material()
Material74.setTransparency(1)

Appearance73.setMaterial(Material74)

Shape70.setAppearance(Appearance73)

Transform69.addChildren(Shape70)

Transform61.addChildren(Transform69)

Scene33.addChildren(Transform61)
Transform75 = x3d.Transform()
Transform75.setScale([0.4,0.4,0.4])
Transform75.setTranslation([3.5,2.5,0])
Transform75.setBboxCenter([0,0,0])
Transform75.setBboxSize([-1,-1,-1])
TouchSensor76 = x3d.TouchSensor()
TouchSensor76.setDEF("NextTextClickedSensor")
TouchSensor76.setDescription("Select to see next strategy")

Transform75.addChildren(TouchSensor76)
ROUTE77 = x3d.ROUTE()
ROUTE77.setFromField("isActive")
ROUTE77.setFromNode("NextTextClickedSensor")
ROUTE77.setToField("selectNextCard")
ROUTE77.setToNode("TextScript")

Transform75.addChildren(ROUTE77)
Shape78 = x3d.Shape()
Shape78.setBboxCenter([0,0,0])
Shape78.setBboxSize([-1,-1,-1])
Text79 = x3d.Text()
Text79.setString(["next"])
FontStyle80 = x3d.FontStyle()
FontStyle80.setUSE("MessageFont")

Text79.setFontStyle(FontStyle80)

Shape78.setGeometry(Text79)
Appearance81 = x3d.Appearance()
Appearance81.setUSE("InterfaceAppearance")

Shape78.setAppearance(Appearance81)

Transform75.addChildren(Shape78)
Transform82 = x3d.Transform()
Transform82.setScale([1.2,0.6,1])
Transform82.setBboxCenter([0,0,0])
Transform82.setBboxSize([-1,-1,-1])
Shape83 = x3d.Shape()
Shape83.setUSE("TransparentClickSurface")

Transform82.addChildren(Shape83)

Transform75.addChildren(Transform82)

Scene33.addChildren(Transform75)
Transform84 = x3d.Transform()
Transform84.setScale([0.4,0.4,0.4])
Transform84.setTranslation([-3.3,-0.5,0])
Transform84.setBboxCenter([0,0,0])
Transform84.setBboxSize([-1,-1,-1])
TouchSensor85 = x3d.TouchSensor()
TouchSensor85.setUSE("RandomTextClickedSensor")

Transform84.addChildren(TouchSensor85)
ROUTE86 = x3d.ROUTE()
ROUTE86.setFromField("isActive")
ROUTE86.setFromNode("RandomTextClickedSensor")
ROUTE86.setToField("selectRandomCard")
ROUTE86.setToNode("TextScript")

Transform84.addChildren(ROUTE86)
Shape87 = x3d.Shape()
Shape87.setBboxCenter([0,0,0])
Shape87.setBboxSize([-1,-1,-1])
Text88 = x3d.Text()
Text88.setString(["random"])
FontStyle89 = x3d.FontStyle()
FontStyle89.setUSE("MessageFont")

Text88.setFontStyle(FontStyle89)

Shape87.setGeometry(Text88)
Appearance90 = x3d.Appearance()
Appearance90.setUSE("InterfaceAppearance")

Shape87.setAppearance(Appearance90)

Transform84.addChildren(Shape87)
Transform91 = x3d.Transform()
Transform91.setScale([1.8,0.6,1])
Transform91.setBboxCenter([0,0,0])
Transform91.setBboxSize([-1,-1,-1])
Shape92 = x3d.Shape()
Shape92.setUSE("TransparentClickSurface")

Transform91.addChildren(Shape92)

Transform84.addChildren(Transform91)

Scene33.addChildren(Transform84)
Transform93 = x3d.Transform()
Transform93.setScale([0.4,0.4,0.4])
Transform93.setTranslation([3.3,-0.5,0])
Transform93.setBboxCenter([0,0,0])
Transform93.setBboxSize([-1,-1,-1])
Anchor94 = x3d.Anchor()
Anchor94.setDEF("TextToSpeechAnchor")
Anchor94.setDescription("text to speech in browser")
Anchor94.setParameter(["target=_blank"])
Anchor94.setUrl(["http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"])
Anchor94.setBboxCenter([0,0,0])
Anchor94.setBboxSize([-1,-1,-1])
ROUTE95 = x3d.ROUTE()
ROUTE95.setFromField("textToSpeechUrl")
ROUTE95.setFromNode("TextScript")
ROUTE95.setToField("url")
ROUTE95.setToNode("TextToSpeechAnchor")

Anchor94.addChildren(ROUTE95)
Shape96 = x3d.Shape()
Shape96.setBboxCenter([0,0,0])
Shape96.setBboxSize([-1,-1,-1])
Text97 = x3d.Text()
Text97.setString(["speech"])
FontStyle98 = x3d.FontStyle()
FontStyle98.setUSE("MessageFont")

Text97.setFontStyle(FontStyle98)

Shape96.setGeometry(Text97)
Appearance99 = x3d.Appearance()
Appearance99.setUSE("InterfaceAppearance")

Shape96.setAppearance(Appearance99)

Anchor94.addChildren(Shape96)
Transform100 = x3d.Transform()
Transform100.setScale([1.8,0.6,1])
Transform100.setBboxCenter([0,0,0])
Transform100.setBboxSize([-1,-1,-1])
Shape101 = x3d.Shape()
Shape101.setUSE("TransparentClickSurface")

Transform100.addChildren(Shape101)

Anchor94.addChildren(Transform100)

Transform93.addChildren(Anchor94)

Scene33.addChildren(Transform93)

X3D0.setScene(Scene33)
X3D0.toFileX3D("../data/ObliqueStrategies_RoundTrip.x3d")
