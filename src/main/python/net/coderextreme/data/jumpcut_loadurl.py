import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("jumpcut_loadurl.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("reference")
meta3.setContent("http://www.nist.gov/vrml.html")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("reference")
meta4.setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("disclaimer")
meta6.setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("info")
meta7.setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("translator")
meta8.setContent("Michael Kass NIST, Don Brutzman NPS")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("translated")
meta9.setContent("21 January 2001")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("modified")
meta10.setContent("20 October 2019")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("description")
meta11.setContent("Test jumpcut Viewpoint transition using Script loadUrl method. A NavigationInfo type of ANY is NOT included in the NavigationInfo node field in this world. Consequently, a Script node with a call to the \"loadURL\" method, with a url corresponding to the MFString \"Top_View\" (the name of a Viewpoint in this world) should create a \"jump cut\" transition of views when the Box geometry in this world is indicated by the pointing device. As a result, indicating the Box geometry should result in a Viewpoint transition to the top view of the Box geometry.")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("identifier")
meta12.setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("generator")
meta13.setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("generator")
meta14.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("license")
meta15.setContent("../../license.html")

head1.addMeta(meta15)

X3D0.setHead(head1)
Scene16 = x3d.Scene()
WorldInfo17 = x3d.WorldInfo()
WorldInfo17.setTitle("jumpcut_loadurl.x3d")

Scene16.addChildren(WorldInfo17)
Background18 = x3d.Background()
Background18.setGroundAngle([1.57])
Background18.setGroundColor([0,0.5,0,0,0.5,0])
Background18.setSkyColor([0,0,1])

Scene16.addChildren(Background18)
NavigationInfo19 = x3d.NavigationInfo()
NavigationInfo19.setType(["EXAMINE","WALK","FLY","ANY"])

Scene16.addChildren(NavigationInfo19)
Viewpoint20 = x3d.Viewpoint()
Viewpoint20.setDEF("Front_View")
Viewpoint20.setDescription("Front View")

Scene16.addChildren(Viewpoint20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.setDEF("Top_View")
Viewpoint21.setDescription("Top View")
Viewpoint21.setOrientation([1,0,0,-1.57])
Viewpoint21.setPosition([0,10,0])

Scene16.addChildren(Viewpoint21)
TouchSensor22 = x3d.TouchSensor()
TouchSensor22.setDEF("STARTER")
TouchSensor22.setDescription("touch to activate")

Scene16.addChildren(TouchSensor22)
Transform23 = x3d.Transform()
Transform23.setDEF("ROOT")
Shape24 = x3d.Shape()
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()

Appearance25.setMaterial(Material26)

Shape24.setAppearance(Appearance25)
Box27 = x3d.Box()

Shape24.setGeometry(Box27)

Transform23.addChild(Shape24)

Scene16.addChildren(Transform23)
Script28 = x3d.Script()
Script28.setDEF("MYSCRIPT")
Script28.setUrl(["jumpcut_loadurl.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js"])
field29 = x3d.field()
field29.setName("myParameter")
field29.setAccessType("initializeOnly")
field29.setType("MFString")
field29.setValue("\"Top_View\"")

Script28.addField(field29)
field30 = x3d.field()
field30.setName("myUrl")
field30.setAccessType("initializeOnly")
field30.setType("MFString")
field30.setValue("\"jumpcut_loadurl.x3d#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View\" \"jumpcut_loadurl.wrl#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View\"")

Script28.addField(field30)
field31 = x3d.field()
field31.setName("trigger_event")
field31.setAccessType("inputOnly")
field31.setType("SFBool")

Script28.addField(field31)

Scene16.addChildren(Script28)
ROUTE32 = x3d.ROUTE()
ROUTE32.setFromField("isActive")
ROUTE32.setFromNode("STARTER")
ROUTE32.setToField("trigger_event")
ROUTE32.setToNode("MYSCRIPT")

Scene16.addChildren(ROUTE32)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../data/jumpcut_loadurl.new.python.x3d")
X3D0.toFileJSON("../data/jumpcut_loadurl.new.python.json")
