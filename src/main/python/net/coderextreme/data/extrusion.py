import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("creator")
meta2.setContent("John W Carlson")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("created")
meta3.setContent("December 13 2015")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("title")
meta4.setContent("extrusion.x3d")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/force.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("beginnings of a force directed graph in 3D")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("generator")
meta7.setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta7)

X3D0.setHead(head1)
Scene8 = x3d.Scene()
Group9 = x3d.Group()
Group9.setBboxCenter([0,0,0])
Group9.setBboxSize([-1,-1,-1])
Shape10 = x3d.Shape()
Shape10.setBboxCenter([0,0,0])
Shape10.setBboxSize([-1,-1,-1])
Extrusion11 = x3d.Extrusion()
Extrusion11.setDEF("extrusion")
Extrusion11.setSpine([-50,-50,0,50,50,0])
Extrusion11.setCreaseAngle(0.785)
Extrusion11.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])

Shape10.setGeometry(Extrusion11)
Appearance12 = x3d.Appearance()
Material13 = x3d.Material()
Material13.setDiffuseColor([0,1,0])

Appearance12.setMaterial(Material13)

Shape10.setAppearance(Appearance12)

Group9.addChildren(Shape10)
TimeSensor14 = x3d.TimeSensor()
TimeSensor14.setDEF("TourTime")
TimeSensor14.setLoop(True)

Group9.addChildren(TimeSensor14)
ROUTE15 = x3d.ROUTE()
ROUTE15.setFromNode("TourTime")
ROUTE15.setFromField("cycleTime")
ROUTE15.setToNode("MoveCylinder")
ROUTE15.setToField("set_cycle")

Group9.addChildren(ROUTE15)
ROUTE16 = x3d.ROUTE()
ROUTE16.setFromNode("MoveCylinder")
ROUTE16.setFromField("spine_changed")
ROUTE16.setToNode("extrusion")
ROUTE16.setToField("spine")

Group9.addChildren(ROUTE16)
X3DScript17 = x3d.X3DScript()
X3DScript17.setDEF("MoveCylinder")
field18 = x3d.field()
field18.setName("set_cycle")
field18.setAccessType("inputOnly")
field18.setType("SFTime")

X3DScript17.addField(field18)
field19 = x3d.field()
field19.setName("spine")
field19.setAccessType("inputOutput")
field19.setType("MFVec3f")
field19.setValue("-50 -50 0 50 50 0")

X3DScript17.addField(field19)

Group9.addX3DScript(X3DScript17)

Scene8.addChildren(Group9)

X3D0.setScene(Scene8)
X3D0.toFileX3D("../data/extrusion_RoundTrip.x3d")
