print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "jumpcut_loadurl.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "reference"
meta3.content = "http://www.nist.gov/vrml.html"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "reference"
meta4.content = "http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "http://www.itl.nist.gov/div897/ctg/vrml/members.html"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "disclaimer"
meta6.content = "This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "info"
meta7.content = "Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "translator"
meta8.content = "Michael Kass NIST, Don Brutzman NPS"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "translated"
meta9.content = "21 January 2001"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "modified"
meta10.content = "20 October 2019"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "description"
meta11.content = "Test jumpcut Viewpoint transition using Script loadUrl method. A NavigationInfo type of ANY is NOT included in the NavigationInfo node field in this world. Consequently, a Script node with a call to the \"loadURL\" method, with a url corresponding to the MFString \"Top_View\" (the name of a Viewpoint in this world) should create a \"jump cut\" transition of views when the Box geometry in this world is indicated by the pointing device. As a result, indicating the Box geometry should result in a Viewpoint transition to the top view of the Box geometry."

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "identifier"
meta12.content = "https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "generator"
meta13.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "generator"
meta14.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "license"
meta15.content = "../../license.html"

head1.children.append(meta15)

X3D0.head = head1
Scene16 = x3d.Scene()
WorldInfo17 = x3d.WorldInfo()
WorldInfo17.title = "jumpcut_loadurl.x3d"

Scene16.children.append(WorldInfo17)
Background18 = x3d.Background()
Background18.groundAngle = [1.57]

Scene16.children.append(Background18)
NavigationInfo19 = x3d.NavigationInfo()
NavigationInfo19.type = ["EXAMINE","WALK","FLY","ANY"]

Scene16.children.append(NavigationInfo19)
Viewpoint20 = x3d.Viewpoint()
Viewpoint20.DEF = "Front_View"
Viewpoint20.description = "Front View"

Scene16.children.append(Viewpoint20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.DEF = "Top_View"
Viewpoint21.description = "Top View"
Viewpoint21.orientation = [1,0,0,-1.57]
Viewpoint21.position = [0,10,0]

Scene16.children.append(Viewpoint21)
TouchSensor22 = x3d.TouchSensor()
TouchSensor22.DEF = "STARTER"
TouchSensor22.description = "touch to activate"

Scene16.children.append(TouchSensor22)
Transform23 = x3d.Transform()
Transform23.DEF = "ROOT"
Shape24 = x3d.Shape()
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()

Appearance25.material = Material26

Shape24.appearance = Appearance25
Box27 = x3d.Box()

Shape24.geometry = Box27

Transform23.children.append(Shape24)

Scene16.children.append(Transform23)
Script28 = x3d.Script()
Script28.DEF = "MYSCRIPT"
Script28.url = ["jumpcut_loadurl.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js"]
field29 = x3d.field()
field29.name = "myParameter"
field29.accessType = "initializeOnly"
field29.type = "MFString"
field29.value = ["Top_View"]

Script28.field.append(field29)
field30 = x3d.field()
field30.name = "myUrl"
field30.accessType = "initializeOnly"
field30.type = "MFString"
field30.value = ["jumpcut_loadurl.x3d#Top_View","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View","jumpcut_loadurl.wrl#Top_View","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View"]

Script28.field.append(field30)
field31 = x3d.field()
field31.name = "trigger_event"
field31.accessType = "inputOnly"
field31.type = "SFBool"

Script28.field.append(field31)

Scene16.children.append(Script28)
ROUTE32 = x3d.ROUTE()
ROUTE32.fromField = "isActive"
ROUTE32.fromNode = "STARTER"
ROUTE32.toField = "trigger_event"
ROUTE32.toNode = "MYSCRIPT"

Scene16.children.append(ROUTE32)

X3D0.Scene = Scene16
f = open("../data/jumpcut_loadurl.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/jumpcut_loadurl.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
