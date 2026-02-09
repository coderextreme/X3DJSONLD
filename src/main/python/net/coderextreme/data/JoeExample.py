print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "Scripting.x3d"

head1.children.append(meta2)

X3D0.head = head1
Scene3 = x3d.Scene()
Script4 = x3d.Script(DEF="OpenVault")
field5 = x3d.field()
field5.name = "openVault"
field5.type = "SFTime"
field5.accessType = "inputOnly"

Script4.field.append(field5)
field6 = x3d.field()
field6.name = "combinationEntered"
field6.type = "SFBool"
field6.accessType = "inputOnly"

Script4.field.append(field6)
field7 = x3d.field()
field7.name = "vaultUnlocked"
field7.type = "SFTime"
field7.accessType = "outputOnly"

Script4.field.append(field7)
field8 = x3d.field()
field8.name = "unlocked"
field8.type = "SFBool"
field8.value = False
field8.accessType = "initializeOnly"

Script4.field.append(field8)

Script4.sourceCode = '''ecmascript:\n"+
"\n"+
"      function combinationEntered (value) {\n"+
"\n"+
"        unlocked = value;\n"+
"\n"+
"      }\n"+
"\n"+
"      function openVault(value) {\n"+
"\n"+
"      if (unlocked) vaultUnlocked = value;\n"+
"\n"+
"      }'''

Scene3.children.append(Script4)
Shape9 = x3d.Shape()
Appearance10 = x3d.Appearance()
Material11 = x3d.Material()
Material11.diffuseColor = [1,0,0]

Appearance10.material = Material11

Shape9.appearance = Appearance10
Sphere12 = x3d.Sphere()

Shape9.geometry = Sphere12

Scene3.children.append(Shape9)
Sound13 = x3d.Sound()
Sound13.maxBack = 1000
Sound13.maxFront = 1000
Sound13.minBack = 1000
Sound13.minFront = 1000
AudioClip14 = x3d.AudioClip(DEF="Click")
AudioClip14.stopTime = 1
AudioClip14.description = "clicking sound"
AudioClip14.url = ["../resources/chandubabamusic1.wav"]

Sound13.source = AudioClip14

Scene3.children.append(Sound13)
TouchSensor15 = x3d.TouchSensor(DEF="TS")

Scene3.children.append(TouchSensor15)
ROUTE16 = x3d.ROUTE()
ROUTE16.fromNode = "TS"
ROUTE16.fromField = "isOver"
ROUTE16.toNode = "OpenVault"
ROUTE16.toField = "combinationEntered"

Scene3.children.append(ROUTE16)
ROUTE17 = x3d.ROUTE()
ROUTE17.fromNode = "TS"
ROUTE17.fromField = "touchTime"
ROUTE17.toNode = "OpenVault"
ROUTE17.toField = "openVault"

Scene3.children.append(ROUTE17)
ROUTE18 = x3d.ROUTE()
ROUTE18.fromNode = "OpenVault"
ROUTE18.fromField = "vaultUnlocked"
ROUTE18.toNode = "Click"
ROUTE18.toField = "startTime"

Scene3.children.append(ROUTE18)

X3D0.Scene = Scene3
f = open("../data/JoeExample.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JoeExample.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/JoeExample.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
