print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta4.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "generator"
meta5.content = "manual"

head1.children.append(meta5)

X3D0.head = head1
Scene6 = x3d.Scene()
ProtoDeclare7 = x3d.ProtoDeclare()
ProtoDeclare7.name = "sphereproto"
ProtoInterface8 = x3d.ProtoInterface()
field9 = x3d.field()
field9.accessType = "inputOutput"
field9.type = "SFVec3f"
field9.name = "xtranslation"

ProtoInterface8.field.append(field9)

ProtoDeclare7.ProtoInterface = ProtoInterface8
ProtoBody10 = x3d.ProtoBody()
Transform11 = x3d.Transform()
Shape12 = x3d.Shape()
Appearance13 = x3d.Appearance()
Material14 = x3d.Material()
Material14.diffuseColor = [1,1,1]

Appearance13.material = Material14

Shape12.appearance = Appearance13
Sphere15 = x3d.Sphere()

Shape12.geometry = Sphere15

Transform11.children.append(Shape12)
IS16 = x3d.IS()
connect17 = x3d.connect()
connect17.nodeField = "translation"
connect17.protoField = "xtranslation"

IS16.connect.append(connect17)

Transform11.IS = IS16

ProtoBody10.children.append(Transform11)

ProtoDeclare7.ProtoBody = ProtoBody10

Scene6.children.append(ProtoDeclare7)
ProtoDeclare18 = x3d.ProtoDeclare()
ProtoDeclare18.name = "three"
ProtoInterface19 = x3d.ProtoInterface()
field20 = x3d.field()
field20.accessType = "inputOutput"
field20.type = "SFVec3f"
field20.name = "ytranslation"

ProtoInterface19.field.append(field20)

ProtoDeclare18.ProtoInterface = ProtoInterface19
ProtoBody21 = x3d.ProtoBody()
Transform22 = x3d.Transform()
ProtoInstance23 = x3d.ProtoInstance()
ProtoInstance23.name = "sphereproto"

Transform22.children.append(ProtoInstance23)
ProtoInstance24 = x3d.ProtoInstance()
ProtoInstance24.name = "sphereproto"
fieldValue25 = x3d.fieldValue()
fieldValue25.name = "xtranslation"
fieldValue25.value = "2 0 0"

ProtoInstance24.fieldValue.append(fieldValue25)

Transform22.children.append(ProtoInstance24)
ProtoInstance26 = x3d.ProtoInstance()
ProtoInstance26.name = "sphereproto"
fieldValue27 = x3d.fieldValue()
fieldValue27.name = "xtranslation"
fieldValue27.value = "-2 0 0"

ProtoInstance26.fieldValue.append(fieldValue27)

Transform22.children.append(ProtoInstance26)
IS28 = x3d.IS()
connect29 = x3d.connect()
connect29.nodeField = "translation"
connect29.protoField = "ytranslation"

IS28.connect.append(connect29)

Transform22.IS = IS28

ProtoBody21.children.append(Transform22)

ProtoDeclare18.ProtoBody = ProtoBody21

Scene6.children.append(ProtoDeclare18)
ProtoDeclare30 = x3d.ProtoDeclare()
ProtoDeclare30.name = "nine"
ProtoInterface31 = x3d.ProtoInterface()
field32 = x3d.field()
field32.accessType = "inputOutput"
field32.type = "SFVec3f"
field32.name = "ztranslation"

ProtoInterface31.field.append(field32)

ProtoDeclare30.ProtoInterface = ProtoInterface31
ProtoBody33 = x3d.ProtoBody()
Transform34 = x3d.Transform()
ProtoInstance35 = x3d.ProtoInstance()
ProtoInstance35.name = "three"

Transform34.children.append(ProtoInstance35)
ProtoInstance36 = x3d.ProtoInstance()
ProtoInstance36.name = "three"
fieldValue37 = x3d.fieldValue()
fieldValue37.name = "ytranslation"
fieldValue37.value = "0 2 0"

ProtoInstance36.fieldValue.append(fieldValue37)

Transform34.children.append(ProtoInstance36)
ProtoInstance38 = x3d.ProtoInstance()
ProtoInstance38.name = "three"
fieldValue39 = x3d.fieldValue()
fieldValue39.name = "ytranslation"
fieldValue39.value = "0 -2 0"

ProtoInstance38.fieldValue.append(fieldValue39)

Transform34.children.append(ProtoInstance38)
IS40 = x3d.IS()
connect41 = x3d.connect()
connect41.nodeField = "translation"
connect41.protoField = "ztranslation"

IS40.connect.append(connect41)

Transform34.IS = IS40

ProtoBody33.children.append(Transform34)

ProtoDeclare30.ProtoBody = ProtoBody33

Scene6.children.append(ProtoDeclare30)
ProtoDeclare42 = x3d.ProtoDeclare()
ProtoDeclare42.name = "twentyseven"
ProtoInterface43 = x3d.ProtoInterface()
field44 = x3d.field()
field44.accessType = "inputOutput"
field44.type = "SFVec3f"
field44.name = "ttranslation"

ProtoInterface43.field.append(field44)

ProtoDeclare42.ProtoInterface = ProtoInterface43
ProtoBody45 = x3d.ProtoBody()
Transform46 = x3d.Transform()
ProtoInstance47 = x3d.ProtoInstance()
ProtoInstance47.name = "nine"

Transform46.children.append(ProtoInstance47)
ProtoInstance48 = x3d.ProtoInstance()
ProtoInstance48.name = "nine"
fieldValue49 = x3d.fieldValue()
fieldValue49.name = "ztranslation"
fieldValue49.value = "0 0 2"

ProtoInstance48.fieldValue.append(fieldValue49)

Transform46.children.append(ProtoInstance48)
ProtoInstance50 = x3d.ProtoInstance()
ProtoInstance50.name = "nine"
fieldValue51 = x3d.fieldValue()
fieldValue51.name = "ztranslation"
fieldValue51.value = "0 0 -2"

ProtoInstance50.fieldValue.append(fieldValue51)

Transform46.children.append(ProtoInstance50)
IS52 = x3d.IS()
connect53 = x3d.connect()
connect53.nodeField = "translation"
connect53.protoField = "ttranslation"

IS52.connect.append(connect53)

Transform46.IS = IS52

ProtoBody45.children.append(Transform46)

ProtoDeclare42.ProtoBody = ProtoBody45

Scene6.children.append(ProtoDeclare42)
NavigationInfo54 = x3d.NavigationInfo()
NavigationInfo54.type = ["EXAMINE"]

Scene6.children.append(NavigationInfo54)
Viewpoint55 = x3d.Viewpoint()
Viewpoint55.description = "Rubiks Cube"
Viewpoint55.position = [0,0,12]

Scene6.children.append(Viewpoint55)
ProtoInstance56 = x3d.ProtoInstance()
ProtoInstance56.name = "twentyseven"

Scene6.children.append(ProtoInstance56)

X3D0.Scene = Scene6
f = open("../data/ThreeDTexture.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ThreeDTexture.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ThreeDTexture.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
