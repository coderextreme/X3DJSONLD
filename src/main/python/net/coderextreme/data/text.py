# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("creator")
meta2.setContent("John W Carlson")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("created")
meta3.setContent("December 13 2015")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("title")
meta4.setContent("text.x3d")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/text.x3d")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("test \\n text")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("generator")
meta7.setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta7)
X3D0.setHead(head1)
Scene8 = SceneObject()

Transform9 = TransformObject()

Shape10 = ShapeObject()

Text11 = TextObject()
Text11.setString(["Node\"\"\""])

FontStyle12 = FontStyleObject()

Text11.setFontStyle(FontStyle12)
Shape10.setGeometry(Text11)
Appearance13 = AppearanceObject()

Material14 = MaterialObject()

Appearance13.setMaterial(Material14)
Shape10.setAppearance(Appearance13)
Transform9.addChild(Shape10)
Shape15 = ShapeObject()

Text16 = TextObject()
Text16.setString(["Node2","\\","\\\\","Node2"])

FontStyle17 = FontStyleObject()

Text16.setFontStyle(FontStyle17)
Shape15.setGeometry(Text16)
Appearance18 = AppearanceObject()

Material19 = MaterialObject()

Appearance18.setMaterial(Material19)
Shape15.setAppearance(Appearance18)
Transform9.addChild(Shape15)
Shape20 = ShapeObject()

Text21 = TextObject()
Text21.setString(["Node3 \\\\ \\","Node3\"\"\""])

FontStyle22 = FontStyleObject()

Text21.setFontStyle(FontStyle22)
Shape20.setGeometry(Text21)
Appearance23 = AppearanceObject()

Material24 = MaterialObject()

Appearance23.setMaterial(Material24)
Shape20.setAppearance(Appearance23)
Transform9.addChild(Shape20)
Script25 = ScriptObject()

field26 = fieldObject()
field26.setType(fieldObject.TYPE_MFSTRING)
field26.setName("frontUrls")
field26.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
field26.setValue("\"rnl_front.png\" \"uffizi_front.png\"")

Script25.addField(field26)

Script25.setSourceCode("ecmascript:\n"+
"			    var me = '\"1\" \"\"2\" \"\\n3\"';\n"+
"")
Transform9.addChild(Script25)
Scene8.addChild(Transform9)
X3D0.setScene(Scene8)

X3D0.toFileX3D("../data/text.new.x3d")
