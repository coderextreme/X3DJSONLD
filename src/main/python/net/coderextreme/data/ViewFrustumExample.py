print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "ViewFrustumExample.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Don Brutzman"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "translated"
meta5.content = "16 August 2008"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "modified"
meta6.content = "20 October 2019"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "reference"
meta7.content = "ViewFrustumPrototype.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "drawing"
meta8.content = "ViewFrustumComputation.png"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "Image"
meta9.content = "ViewFrustumOverheadView.png"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "Image"
meta10.content = "ViewFrustumObliqueView.png"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "Image"
meta11.content = "ViewpointCalculator.png"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "Image"
meta12.content = "ViewpointCalculatorComposed.png"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "subject"
meta13.content = "view culling frustum"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "identifier"
meta14.content = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "generator"
meta15.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "license"
meta16.content = "../license.html"

head1.children.append(meta16)

X3D0.head = head1
Scene17 = x3d.Scene()
WorldInfo18 = x3d.WorldInfo()
WorldInfo18.title = "ViewFrustumExample.x3d"

Scene17.children.append(WorldInfo18)
Viewpoint19 = x3d.Viewpoint()
Viewpoint19.description = "ViewFrustum from above, looking down"
Viewpoint19.orientation = [1,0,0,-1.57]
Viewpoint19.position = [0,40,0]

Scene17.children.append(Viewpoint19)
Viewpoint20 = x3d.Viewpoint()
Viewpoint20.description = "ViewFrustum from point of view"

Scene17.children.append(Viewpoint20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.description = "ViewFrustum behind point of view"
Viewpoint21.position = [0,0,15]

Scene17.children.append(Viewpoint21)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.description = "ViewFrustum oblique side view"
Viewpoint22.orientation = [0.8005,0.5926,0.0898,-0.3743]
Viewpoint22.position = [-5,5,20]

Scene17.children.append(Viewpoint22)
NavigationInfo23 = x3d.NavigationInfo()
NavigationInfo23.type = ["EXAMINE","FLY","ANY"]

Scene17.children.append(NavigationInfo23)
ExternProtoDeclare24 = x3d.ExternProtoDeclare()
ExternProtoDeclare24.name = "ViewFrustum"
ExternProtoDeclare24.appinfo = "Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"
ExternProtoDeclare24.url = ["ViewFrustumPrototype.x3d#ViewFrustum"]
field25 = x3d.field()
field25.name = "ViewpointNode"
field25.accessType = "initializeOnly"
field25.appinfo = "required: insert Viewpoint DEF or USE node for view of interest"
field25.type = "SFNode"

ExternProtoDeclare24.field.append(field25)
field26 = x3d.field()
field26.name = "NavigationInfoNode"
field26.accessType = "initializeOnly"
field26.appinfo = "required: insert NavigationInfo DEF or USE node of interest"
field26.type = "SFNode"

ExternProtoDeclare24.field.append(field26)
field27 = x3d.field()
field27.name = "visible"
field27.accessType = "inputOutput"
field27.appinfo = "whether or not frustum geometry is rendered"
field27.type = "SFBool"

ExternProtoDeclare24.field.append(field27)
field28 = x3d.field()
field28.name = "lineColor"
field28.accessType = "inputOutput"
field28.appinfo = "RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"
field28.type = "SFColor"

ExternProtoDeclare24.field.append(field28)
field29 = x3d.field()
field29.name = "frustumColor"
field29.accessType = "inputOutput"
field29.appinfo = "RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"
field29.type = "SFColor"

ExternProtoDeclare24.field.append(field29)
field30 = x3d.field()
field30.name = "transparency"
field30.accessType = "inputOutput"
field30.appinfo = "transparency of ViewFrustum hull geometry, default value 0.5"
field30.type = "SFFloat"

ExternProtoDeclare24.field.append(field30)
field31 = x3d.field()
field31.name = "aspectRatio"
field31.accessType = "inputOutput"
field31.appinfo = "assumed ratio height/width, default value 0.75"
field31.type = "SFFloat"

ExternProtoDeclare24.field.append(field31)
field32 = x3d.field()
field32.name = "trace"
field32.accessType = "initializeOnly"
field32.appinfo = "debug support, default false"
field32.type = "SFBool"

ExternProtoDeclare24.field.append(field32)

Scene17.children.append(ExternProtoDeclare24)
"""Example use"""
ProtoInstance33 = x3d.ProtoInstance()
ProtoInstance33.name = "ViewFrustum"
fieldValue34 = x3d.fieldValue()
fieldValue34.name = "ViewpointNode"
"""prefer empty description to prevent entry in player's ViewpointList"""
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.description = "ViewFrustum ViewpointNode"

fieldValue34.children.append(Viewpoint35)

ProtoInstance33.fieldValue.append(fieldValue34)
fieldValue36 = x3d.fieldValue()
fieldValue36.name = "NavigationInfoNode"
NavigationInfo37 = x3d.NavigationInfo()
NavigationInfo37.visibilityLimit = 15

fieldValue36.children.append(NavigationInfo37)

ProtoInstance33.fieldValue.append(fieldValue36)
fieldValue38 = x3d.fieldValue()
fieldValue38.name = "visible"
fieldValue38.value = "true"

ProtoInstance33.fieldValue.append(fieldValue38)
fieldValue39 = x3d.fieldValue()
fieldValue39.name = "lineColor"
fieldValue39.value = "0.9 0.9 0.9"

ProtoInstance33.fieldValue.append(fieldValue39)
fieldValue40 = x3d.fieldValue()
fieldValue40.name = "frustumColor"
fieldValue40.value = "0.8 0.8 0.8"

ProtoInstance33.fieldValue.append(fieldValue40)
fieldValue41 = x3d.fieldValue()
fieldValue41.name = "transparency"
fieldValue41.value = "0.75"

ProtoInstance33.fieldValue.append(fieldValue41)
fieldValue42 = x3d.fieldValue()
fieldValue42.name = "trace"
fieldValue42.value = "true"

ProtoInstance33.fieldValue.append(fieldValue42)

Scene17.children.append(ProtoInstance33)
"""Visualization assists"""
Inline43 = x3d.Inline()
Inline43.DEF = "GridXZ"
Inline43.url = ["GridXZ_20x20Fixed.x3d"]

Scene17.children.append(Inline43)
Transform44 = x3d.Transform()
Transform44.scale = [5,5,5]
Inline45 = x3d.Inline()
Inline45.DEF = "CoordinateAxes"
Inline45.url = ["CoordinateAxes.x3d"]

Transform44.children.append(Inline45)

Scene17.children.append(Transform44)

X3D0.Scene = Scene17
f = open("../data/ViewFrustumExample.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ViewFrustumExample.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
