# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("TextSpecialCharacters.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("description")
meta3.setContent("Text node demonstration of quotation, apostrophe, ampersand and backslash characters using X3D MFString escaping for XML character entities")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("creator")
meta4.setContent("Don Brutzman")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("created")
meta5.setContent("12 July 2008")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("modified")
meta6.setContent("2 April 2017")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("reference")
meta7.setContent("Character entity references in HTML 4")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("reference")
meta8.setContent("http://www.w3.org/TR/REC-html40/sgml/entities.html")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("rights")
meta9.setContent("Copyright (c) Don Brutzman and Leonard Daly, 2008")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("identifier")
meta10.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/TextSpecialCharacters.x3d")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setName("generator")
meta11.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setName("license")
meta12.setContent("../license.html")

head1.addMeta(meta12)
X3D0.setHead(head1)
Scene13 = SceneObject()

Background14 = BackgroundObject()
Background14.setSkyColor([1,1,1])

Scene13.addChild(Background14)
Viewpoint15 = ViewpointObject()
Viewpoint15.setDescription("Default View")
Viewpoint15.setPosition([0,0,15])

Scene13.addChild(Viewpoint15)
Shape16 = ShapeObject()


Shape16.addComments(CommentsBlock("""Empty string \"\" means to skip a line"""))

Shape16.addComments(CommentsBlock("""The ampersand escape characters are based on XML rules"""))

Shape16.addComments(CommentsBlock("""apostrophe ' is &apos; and needs to be escaped in single-quote delimiters used for string='value' attribute"""))

Shape16.addComments(CommentsBlock("""ampersand & is &amp; and needs to be escaped"""))

Shape16.addComments(CommentsBlock("""quotation \" is &quot; and isn't needed if single-quote delimiters used for string='value' attribute"""))

Shape16.addComments(CommentsBlock("""quotation \" can be used within an X3D string if escaped with backslash \\ as \\\""""))

Shape16.addComments(CommentsBlock("""backslash \\ is used as escape character for \" (and itself) in X3D"""))

Shape16.addComments(CommentsBlock("""character entities are listed in HTML specification and are good for any XML"""))
Text17 = TextObject()
Text17.setDEF("DefaultText")
Text17.setString(["Character entity substitutions:","empty string \"\" skips a line:","","apostrophe ' is &apos;","ampersand & is &amp;","quote mark \" is &quot;","backslash \\ is X3D escape character","double backslash \\\\ is X3D backslash \\ character","Pi Π is &#928; XML character entity"])

FontStyle18 = FontStyleObject()
FontStyle18.setDEF("CenteredFontStyle")
FontStyle18.setJustify(["MIDDLE","MIDDLE"])

Text17.setFontStyle(FontStyle18)
Shape16.setGeometry(Text17)
Appearance19 = AppearanceObject()

Material20 = MaterialObject()
Material20.setDEF("DefaultMaterial")
Material20.setDiffuseColor([0.2,0.2,0.2])

Appearance19.setMaterial(Material20)
Shape16.setAppearance(Appearance19)
Scene13.addChild(Shape16)
X3D0.setScene(Scene13)

X3D0.toFileX3D("../data/TextSpecialCharacters.new.x3d")
