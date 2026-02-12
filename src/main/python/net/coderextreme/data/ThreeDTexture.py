print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "ThreeDTexture.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "generator"
meta4.content = "manual"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "identifier"
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/ThreeDTexture.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "a kind of ThreeDTexture cube with spheres"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()
NavigationInfo8.type = ["EXAMINE"]

Scene7.children.append(NavigationInfo8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.description = "Rubiks Cube"
Viewpoint9.position = [0,0,12]

Scene7.children.append(Viewpoint9)
ProtoDeclare10 = x3d.ProtoDeclare()
ProtoDeclare10.name = "sphereproto"
ProtoInterface11 = x3d.ProtoInterface()
field12 = x3d.field()
field12.name = "xtranslation"
field12.accessType = "inputOutput"
field12.type = "SFVec3f"
field12.value = [0,0,0]

ProtoInterface11.field.append(field12)

ProtoDeclare10.ProtoInterface = ProtoInterface11
ProtoBody13 = x3d.ProtoBody()
Transform14 = x3d.Transform()
IS15 = x3d.IS()
connect16 = x3d.connect()
connect16.nodeField = "translation"
connect16.protoField = "xtranslation"

IS15.connect.append(connect16)

Transform14.IS = IS15
Shape17 = x3d.Shape()
Sphere18 = x3d.Sphere()

Shape17.geometry = Sphere18
Appearance19 = x3d.Appearance()
Material20 = x3d.Material()
Material20.diffuseColor = [1,1,1]

Appearance19.material = Material20

Shape17.appearance = Appearance19

Transform14.children.append(Shape17)

ProtoBody13.children.append(Transform14)

ProtoDeclare10.ProtoBody = ProtoBody13

Scene7.children.append(ProtoDeclare10)
ProtoDeclare21 = x3d.ProtoDeclare()
ProtoDeclare21.name = "three"
ProtoInterface22 = x3d.ProtoInterface()
field23 = x3d.field()
field23.name = "ytranslation"
field23.accessType = "inputOutput"
field23.type = "SFVec3f"
field23.value = [0,0,0]

ProtoInterface22.field.append(field23)

ProtoDeclare21.ProtoInterface = ProtoInterface22
ProtoBody24 = x3d.ProtoBody()
Transform25 = x3d.Transform()
IS26 = x3d.IS()
connect27 = x3d.connect()
connect27.nodeField = "translation"
connect27.protoField = "ytranslation"

IS26.connect.append(connect27)

Transform25.IS = IS26
ProtoInstance28 = x3d.ProtoInstance()
ProtoInstance28.name = "sphereproto"
fieldValue29 = x3d.fieldValue()
fieldValue29.name = "xtranslation"
fieldValue29.value = "0 0 0"

ProtoInstance28.fieldValue.append(fieldValue29)

Transform25.children.append(ProtoInstance28)
ProtoInstance30 = x3d.ProtoInstance()
ProtoInstance30.name = "sphereproto"
fieldValue31 = x3d.fieldValue()
fieldValue31.name = "xtranslation"
fieldValue31.value = "2 0 0"

ProtoInstance30.fieldValue.append(fieldValue31)

Transform25.children.append(ProtoInstance30)
ProtoInstance32 = x3d.ProtoInstance()
ProtoInstance32.name = "sphereproto"
fieldValue33 = x3d.fieldValue()
fieldValue33.name = "xtranslation"
fieldValue33.value = "-2 0 0"

ProtoInstance32.fieldValue.append(fieldValue33)

Transform25.children.append(ProtoInstance32)

ProtoBody24.children.append(Transform25)

ProtoDeclare21.ProtoBody = ProtoBody24

Scene7.children.append(ProtoDeclare21)
ProtoDeclare34 = x3d.ProtoDeclare()
ProtoDeclare34.name = "nine"
ProtoInterface35 = x3d.ProtoInterface()
field36 = x3d.field()
field36.name = "ztranslation"
field36.accessType = "inputOutput"
field36.type = "SFVec3f"
field36.value = [0,0,0]

ProtoInterface35.field.append(field36)

ProtoDeclare34.ProtoInterface = ProtoInterface35
ProtoBody37 = x3d.ProtoBody()
Transform38 = x3d.Transform()
IS39 = x3d.IS()
connect40 = x3d.connect()
connect40.nodeField = "translation"
connect40.protoField = "ztranslation"

IS39.connect.append(connect40)

Transform38.IS = IS39
ProtoInstance41 = x3d.ProtoInstance()
ProtoInstance41.name = "three"
fieldValue42 = x3d.fieldValue()
fieldValue42.name = "ytranslation"
fieldValue42.value = "0 0 0"

ProtoInstance41.fieldValue.append(fieldValue42)

Transform38.children.append(ProtoInstance41)
ProtoInstance43 = x3d.ProtoInstance()
ProtoInstance43.name = "three"
fieldValue44 = x3d.fieldValue()
fieldValue44.name = "ytranslation"
fieldValue44.value = "0 2 0"

ProtoInstance43.fieldValue.append(fieldValue44)

Transform38.children.append(ProtoInstance43)
ProtoInstance45 = x3d.ProtoInstance()
ProtoInstance45.name = "three"
fieldValue46 = x3d.fieldValue()
fieldValue46.name = "ytranslation"
fieldValue46.value = "0 -2 0"

ProtoInstance45.fieldValue.append(fieldValue46)

Transform38.children.append(ProtoInstance45)

ProtoBody37.children.append(Transform38)

ProtoDeclare34.ProtoBody = ProtoBody37

Scene7.children.append(ProtoDeclare34)
ProtoDeclare47 = x3d.ProtoDeclare()
ProtoDeclare47.name = "twentyseven"
ProtoInterface48 = x3d.ProtoInterface()
field49 = x3d.field()
field49.name = "ttranslation"
field49.accessType = "inputOutput"
field49.type = "SFVec3f"
field49.value = [0,0,0]

ProtoInterface48.field.append(field49)

ProtoDeclare47.ProtoInterface = ProtoInterface48
ProtoBody50 = x3d.ProtoBody()
Transform51 = x3d.Transform()
IS52 = x3d.IS()
connect53 = x3d.connect()
connect53.nodeField = "translation"
connect53.protoField = "ttranslation"

IS52.connect.append(connect53)

Transform51.IS = IS52
ProtoInstance54 = x3d.ProtoInstance()
ProtoInstance54.name = "nine"
fieldValue55 = x3d.fieldValue()
fieldValue55.name = "ztranslation"
fieldValue55.value = "0 0 0"

ProtoInstance54.fieldValue.append(fieldValue55)

Transform51.children.append(ProtoInstance54)
ProtoInstance56 = x3d.ProtoInstance()
ProtoInstance56.name = "nine"
fieldValue57 = x3d.fieldValue()
fieldValue57.name = "ztranslation"
fieldValue57.value = "0 0 2"

ProtoInstance56.fieldValue.append(fieldValue57)

Transform51.children.append(ProtoInstance56)
ProtoInstance58 = x3d.ProtoInstance()
ProtoInstance58.name = "nine"
fieldValue59 = x3d.fieldValue()
fieldValue59.name = "ztranslation"
fieldValue59.value = "0 0 -2"

ProtoInstance58.fieldValue.append(fieldValue59)

Transform51.children.append(ProtoInstance58)

ProtoBody50.children.append(Transform51)

ProtoDeclare47.ProtoBody = ProtoBody50

Scene7.children.append(ProtoDeclare47)
ProtoInstance60 = x3d.ProtoInstance()
ProtoInstance60.name = "twentyseven"
fieldValue61 = x3d.fieldValue()
fieldValue61.name = "ttranslation"
fieldValue61.value = "0 0 0"

ProtoInstance60.fieldValue.append(fieldValue61)

Scene7.children.append(ProtoInstance60)

X3D0.Scene = Scene7
f = open("../data/ThreeDTexture.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ThreeDTexture.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ThreeDTexture.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
