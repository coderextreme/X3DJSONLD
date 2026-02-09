print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta10.content = "Mon, 09 Feb 2026 07:12:07 GMT"

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
meta13.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta13)

X3D0.head = head1
Scene14 = x3d.Scene()
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.title = "jumpcut_loadurl.x3d"

Scene14.children.append(WorldInfo15)
Background16 = x3d.Background()
Background16.skyColor = [(0, 0, 1)]
Background16.groundAngle = [1.57]
Background16.groundColor = [(0, 0.5, 0),(0, 0.5, 0)]

Scene14.children.append(Background16)
NavigationInfo17 = x3d.NavigationInfo()
NavigationInfo17.type = ["EXAMINE","WALK","FLY","ANY"]

Scene14.children.append(NavigationInfo17)
Viewpoint18 = x3d.Viewpoint(DEF="Front_View")
Viewpoint18.description = "Front View"

Scene14.children.append(Viewpoint18)
Viewpoint19 = x3d.Viewpoint(DEF="Top_View")
Viewpoint19.description = "Top View"
Viewpoint19.position = [0,10,0]
Viewpoint19.orientation = [1,0,0,-1.57]

Scene14.children.append(Viewpoint19)
TouchSensor20 = x3d.TouchSensor(DEF="STARTER")
TouchSensor20.description = "touch to activate"

Scene14.children.append(TouchSensor20)
Transform21 = x3d.Transform(DEF="ROOT")
Shape22 = x3d.Shape()
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()

Appearance23.material = Material24

Shape22.appearance = Appearance23
Box25 = x3d.Box()

Shape22.geometry = Box25

Transform21.children.append(Shape22)

Scene14.children.append(Transform21)
Script26 = x3d.Script(DEF="MYSCRIPT")
Script26.url = ["jumpcut_loadurl.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js"]
field27 = x3d.field()
field27.accessType = "initializeOnly"
field27.type = "MFString"
field27.name = "myParameter"
field27.value = ["Top_View"]

Script26.field.append(field27)
field28 = x3d.field()
field28.accessType = "initializeOnly"
field28.type = "MFString"
field28.name = "myUrl"
field28.value = ["jumpcut_loadurl.x3d#Top_View","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View","jumpcut_loadurl.wrl#Top_View","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View"]

Script26.field.append(field28)
field29 = x3d.field()
field29.accessType = "inputOnly"
field29.type = "SFBool"
field29.name = "trigger_event"

Script26.field.append(field29)

Scene14.children.append(Script26)
ROUTE30 = x3d.ROUTE()
ROUTE30.fromNode = "STARTER"
ROUTE30.fromField = "isActive"
ROUTE30.toNode = "MYSCRIPT"
ROUTE30.toField = "trigger_event"

Scene14.children.append(ROUTE30)

X3D0.Scene = Scene14
f = open("../data/jumpcut_loadurl.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/jumpcut_loadurl.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/jumpcut_loadurl.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
