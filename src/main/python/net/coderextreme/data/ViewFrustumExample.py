print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta6.content = "Mon, 09 Feb 2026 07:13:15 GMT"

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
meta14.content = "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
ExternProtoDeclare16 = x3d.ExternProtoDeclare()
ExternProtoDeclare16.name = "ViewFrustum"
ExternProtoDeclare16.appinfo = "Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"
ExternProtoDeclare16.url = ["ViewFrustumPrototype.x3d#ViewFrustum"]
field17 = x3d.field()
field17.accessType = "initializeOnly"
field17.type = "SFNode"
field17.name = "ViewpointNode"
field17.appinfo = "required: insert Viewpoint DEF or USE node for view of interest"

ExternProtoDeclare16.field.append(field17)
field18 = x3d.field()
field18.accessType = "initializeOnly"
field18.type = "SFNode"
field18.name = "NavigationInfoNode"
field18.appinfo = "required: insert NavigationInfo DEF or USE node of interest"

ExternProtoDeclare16.field.append(field18)
field19 = x3d.field()
field19.accessType = "inputOutput"
field19.type = "SFBool"
field19.name = "visible"
field19.appinfo = "whether or not frustum geometry is rendered"

ExternProtoDeclare16.field.append(field19)
field20 = x3d.field()
field20.accessType = "inputOutput"
field20.type = "SFColor"
field20.name = "lineColor"
field20.appinfo = "RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"

ExternProtoDeclare16.field.append(field20)
field21 = x3d.field()
field21.accessType = "inputOutput"
field21.type = "SFColor"
field21.name = "frustumColor"
field21.appinfo = "RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"

ExternProtoDeclare16.field.append(field21)
field22 = x3d.field()
field22.accessType = "inputOutput"
field22.type = "SFFloat"
field22.name = "transparency"
field22.appinfo = "transparency of ViewFrustum hull geometry, default value 0.5"

ExternProtoDeclare16.field.append(field22)
field23 = x3d.field()
field23.accessType = "inputOutput"
field23.type = "SFFloat"
field23.name = "aspectRatio"
field23.appinfo = "assumed ratio height/width, default value 0.75"

ExternProtoDeclare16.field.append(field23)
field24 = x3d.field()
field24.accessType = "initializeOnly"
field24.type = "SFBool"
field24.name = "trace"
field24.appinfo = "debug support, default false"

ExternProtoDeclare16.field.append(field24)

Scene15.children.append(ExternProtoDeclare16)
WorldInfo25 = x3d.WorldInfo()
WorldInfo25.title = "ViewFrustumExample.x3d"

Scene15.children.append(WorldInfo25)
Viewpoint26 = x3d.Viewpoint()
Viewpoint26.description = "ViewFrustum from above, looking down"
Viewpoint26.position = [0,40,0]
Viewpoint26.orientation = [1,0,0,-1.57]

Scene15.children.append(Viewpoint26)
Viewpoint27 = x3d.Viewpoint()
Viewpoint27.description = "ViewFrustum from point of view"

Scene15.children.append(Viewpoint27)
Viewpoint28 = x3d.Viewpoint()
Viewpoint28.description = "ViewFrustum behind point of view"
Viewpoint28.position = [0,0,15]

Scene15.children.append(Viewpoint28)
Viewpoint29 = x3d.Viewpoint()
Viewpoint29.description = "ViewFrustum oblique side view"
Viewpoint29.position = [-5,5,20]
Viewpoint29.orientation = [0.8005,0.5926,0.0898,-0.3743]

Scene15.children.append(Viewpoint29)
NavigationInfo30 = x3d.NavigationInfo()
NavigationInfo30.type = ["EXAMINE","FLY","ANY"]

Scene15.children.append(NavigationInfo30)
ProtoInstance31 = x3d.ProtoInstance()
ProtoInstance31.name = "ViewFrustum"
fieldValue32 = x3d.fieldValue()
fieldValue32.name = "ViewpointNode"
Viewpoint33 = x3d.Viewpoint()
Viewpoint33.description = "ViewFrustum ViewpointNode"

fieldValue32.children.append(Viewpoint33)

ProtoInstance31.fieldValue.append(fieldValue32)
fieldValue34 = x3d.fieldValue()
fieldValue34.name = "NavigationInfoNode"
NavigationInfo35 = x3d.NavigationInfo()
NavigationInfo35.visibilityLimit = 15

fieldValue34.children.append(NavigationInfo35)

ProtoInstance31.fieldValue.append(fieldValue34)
fieldValue36 = x3d.fieldValue()
fieldValue36.name = "visible"
fieldValue36.value = "true"

ProtoInstance31.fieldValue.append(fieldValue36)
fieldValue37 = x3d.fieldValue()
fieldValue37.name = "lineColor"
fieldValue37.value = "0.9 0.9 0.9"

ProtoInstance31.fieldValue.append(fieldValue37)
fieldValue38 = x3d.fieldValue()
fieldValue38.name = "frustumColor"
fieldValue38.value = "0.8 0.8 0.8"

ProtoInstance31.fieldValue.append(fieldValue38)
fieldValue39 = x3d.fieldValue()
fieldValue39.name = "transparency"
fieldValue39.value = "0.75"

ProtoInstance31.fieldValue.append(fieldValue39)
fieldValue40 = x3d.fieldValue()
fieldValue40.name = "trace"
fieldValue40.value = "true"

ProtoInstance31.fieldValue.append(fieldValue40)

Scene15.children.append(ProtoInstance31)
Inline41 = x3d.Inline(DEF="GridXZ")
Inline41.url = ["GridXZ_20x20Fixed.x3d"]

Scene15.children.append(Inline41)
Transform42 = x3d.Transform()
Transform42.scale = [5,5,5]
Inline43 = x3d.Inline(DEF="CoordinateAxes")
Inline43.url = ["CoordinateAxes.x3d"]

Transform42.children.append(Inline43)

Scene15.children.append(Transform42)

X3D0.Scene = Scene15
f = open("../data/ViewFrustumExample.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ViewFrustumExample.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ViewFrustumExample.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
