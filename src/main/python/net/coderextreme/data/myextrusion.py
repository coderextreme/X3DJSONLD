import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
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
meta4.setName("modified")
meta4.setContent("November 9 2024")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("title")
meta5.setContent("myextrusion.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("description")
meta7.setContent("beginnings of a force directed graph in 3D")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("generator")
meta8.setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta8)

X3D0.setHead(head1)
Scene9 = x3d.Scene()
Group10 = x3d.Group()
Shape11 = x3d.Shape()
Extrusion12 = x3d.Extrusion()
Extrusion12.setDEF("myextrusion")
Extrusion12.setSpine([-50,-50,0,50,50,0])
Extrusion12.setCreaseAngle(0.785)
Extrusion12.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])

Shape11.setGeometry(Extrusion12)
Appearance13 = x3d.Appearance()
Material14 = x3d.Material()
Material14.setDiffuseColor([0,1,0])

Appearance13.setMaterial(Material14)

Shape11.setAppearance(Appearance13)

Group10.addChildren(Shape11)
TimeSensor15 = x3d.TimeSensor()
TimeSensor15.setDEF("TourTime")
TimeSensor15.setLoop(True)

Group10.addChildren(TimeSensor15)
Script16 = x3d.Script()
Script16.setDEF("MoveCylinder")
field17 = x3d.field()
field17.setName("set_cycle")
field17.setAccessType("inputOnly")
field17.setType("SFTime")

Script16.addField(field17)
field18 = x3d.field()
field18.setName("spine")
field18.setAccessType("inputOutput")
field18.setType("MFVec3f")
field18.setValue("-50 -50 0 50 50 0")

Script16.addField(field18)

Script16.setSourceCode('''ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"                        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = endA;\n"+
"			tmpspine[1] = endB;\n"+
"                        spine = tmpspine;\n"+
"                }''')

Group10.addChildren(Script16)
ROUTE19 = x3d.ROUTE()
ROUTE19.setFromNode("TourTime")
ROUTE19.setFromField("cycleTime")
ROUTE19.setToNode("MoveCylinder")
ROUTE19.setToField("set_cycle")

Group10.addChildren(ROUTE19)
ROUTE20 = x3d.ROUTE()
ROUTE20.setFromNode("MoveCylinder")
ROUTE20.setFromField("spine_changed")
ROUTE20.setToNode("myextrusion")
ROUTE20.setToField("set_spine")

Group10.addChildren(ROUTE20)

Scene9.addChildren(Group10)

X3D0.setScene(Scene9)
X3D0.toFileX3D("../data/myextrusion.new.python.x3d")
X3D0.toFileJSON("../data/myextrusion.new.python.json")
