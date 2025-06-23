import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setVersion("3.0")
X3D0.setProfile("Immersive")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("Scripting.x3d")

head1.addMeta(meta2)

X3D0.setHead(head1)
Scene3 = x3d.Scene()
Script4 = x3d.Script()
Script4.setDEF("OpenVault")
field5 = x3d.field()
field5.setName("openVault")
field5.setType("SFTime")
field5.setAccessType("inputOnly")

Script4.addField(field5)
field6 = x3d.field()
field6.setName("combinationEntered")
field6.setType("SFBool")
field6.setAccessType("inputOnly")

Script4.addField(field6)
field7 = x3d.field()
field7.setName("vaultUnlocked")
field7.setType("SFTime")
field7.setAccessType("outputOnly")

Script4.addField(field7)
field8 = x3d.field()
field8.setName("unlocked")
field8.setType("SFBool")
field8.setValue("false")
field8.setAccessType("initializeOnly")

Script4.addField(field8)

Script4.setSourceCode('''ecmascript:\n"+
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
"      }''')

Scene3.addChildren(Script4)
Shape9 = x3d.Shape()
Appearance10 = x3d.Appearance()
Material11 = x3d.Material()
Material11.setDiffuseColor([1,0,0])

Appearance10.setMaterial(Material11)

Shape9.setAppearance(Appearance10)
Sphere12 = x3d.Sphere()

Shape9.setGeometry(Sphere12)

Scene3.addChildren(Shape9)
Sound13 = x3d.Sound()
Sound13.setMaxBack(1000)
Sound13.setMaxFront(1000)
Sound13.setMinBack(1000)
Sound13.setMinFront(1000)
AudioClip14 = x3d.AudioClip()
AudioClip14.setDEF("Click")
AudioClip14.setStopTime(1)
AudioClip14.setDescription("clicking sound")
AudioClip14.setUrl(["../resources/chandubabamusic1.wav"])

Sound13.setSource(AudioClip14)

Scene3.addChildren(Sound13)
TouchSensor15 = x3d.TouchSensor()
TouchSensor15.setDEF("TS")

Scene3.addChildren(TouchSensor15)
ROUTE16 = x3d.ROUTE()
ROUTE16.setFromNode("TS")
ROUTE16.setFromField("isOver")
ROUTE16.setToNode("OpenVault")
ROUTE16.setToField("combinationEntered")

Scene3.addChildren(ROUTE16)
ROUTE17 = x3d.ROUTE()
ROUTE17.setFromNode("TS")
ROUTE17.setFromField("touchTime")
ROUTE17.setToNode("OpenVault")
ROUTE17.setToField("openVault")

Scene3.addChildren(ROUTE17)
ROUTE18 = x3d.ROUTE()
ROUTE18.setFromNode("OpenVault")
ROUTE18.setFromField("vaultUnlocked")
ROUTE18.setToNode("Click")
ROUTE18.setToField("startTime")

Scene3.addChildren(ROUTE18)

X3D0.setScene(Scene3)
X3D0.toFileX3D("../data/JoeExample.new.python.x3d")
X3D0.toFileJSON("../data/JoeExample.new.python.json")
