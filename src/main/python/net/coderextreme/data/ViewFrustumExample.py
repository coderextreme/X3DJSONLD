import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("ViewFrustumExample.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Don Brutzman")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("translated")
meta5.setContent("16 August 2008")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("20 October 2019")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("reference")
meta7.setContent("ViewFrustumPrototype.x3d")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("drawing")
meta8.setContent("ViewFrustumComputation.png")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("Image")
meta9.setContent("ViewFrustumOverheadView.png")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("Image")
meta10.setContent("ViewFrustumObliqueView.png")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("Image")
meta11.setContent("ViewpointCalculator.png")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("Image")
meta12.setContent("ViewpointCalculatorComposed.png")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("subject")
meta13.setContent("view culling frustum")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("generator")
meta15.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("license")
meta16.setContent("../license.html")

head1.addMeta(meta16)

X3D0.setHead(head1)
Scene17 = x3d.Scene()
WorldInfo18 = x3d.WorldInfo()
WorldInfo18.setTitle("ViewFrustumExample.x3d")

Scene17.addChildren(WorldInfo18)
Viewpoint19 = x3d.Viewpoint()
Viewpoint19.setDescription("ViewFrustum from above, looking down")
Viewpoint19.setOrientation([1,0,0,-1.57])
Viewpoint19.setPosition([0,40,0])

Scene17.addChildren(Viewpoint19)
Viewpoint20 = x3d.Viewpoint()
Viewpoint20.setDescription("ViewFrustum from point of view")

Scene17.addChildren(Viewpoint20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.setDescription("ViewFrustum behind point of view")
Viewpoint21.setPosition([0,0,15])

Scene17.addChildren(Viewpoint21)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.setDescription("ViewFrustum oblique side view")
Viewpoint22.setOrientation([0.8005,0.5926,0.0898,-0.3743])
Viewpoint22.setPosition([-5,5,20])

Scene17.addChildren(Viewpoint22)
NavigationInfo23 = x3d.NavigationInfo()
NavigationInfo23.setType(["EXAMINE","FLY","ANY"])

Scene17.addChildren(NavigationInfo23)
ExternProtoDeclare24 = x3d.ExternProtoDeclare()
ExternProtoDeclare24.setName("ViewFrustum")
ExternProtoDeclare24.setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes")
ExternProtoDeclare24.setUrl(["ViewFrustumPrototype.x3d#ViewFrustum"])
field25 = x3d.field()
field25.setName("ViewpointNode")
field25.setAccessType("initializeOnly")
field25.setAppinfo("required: insert Viewpoint DEF or USE node for view of interest")
field25.setType("SFNode")

ExternProtoDeclare24.addField(field25)
field26 = x3d.field()
field26.setName("NavigationInfoNode")
field26.setAccessType("initializeOnly")
field26.setAppinfo("required: insert NavigationInfo DEF or USE node of interest")
field26.setType("SFNode")

ExternProtoDeclare24.addField(field26)
field27 = x3d.field()
field27.setName("visible")
field27.setAccessType("inputOutput")
field27.setAppinfo("whether or not frustum geometry is rendered")
field27.setType("SFBool")

ExternProtoDeclare24.addField(field27)
field28 = x3d.field()
field28.setName("lineColor")
field28.setAccessType("inputOutput")
field28.setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9")
field28.setType("SFColor")

ExternProtoDeclare24.addField(field28)
field29 = x3d.field()
field29.setName("frustumColor")
field29.setAccessType("inputOutput")
field29.setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8")
field29.setType("SFColor")

ExternProtoDeclare24.addField(field29)
field30 = x3d.field()
field30.setName("transparency")
field30.setAccessType("inputOutput")
field30.setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5")
field30.setType("SFFloat")

ExternProtoDeclare24.addField(field30)
field31 = x3d.field()
field31.setName("aspectRatio")
field31.setAccessType("inputOutput")
field31.setAppinfo("assumed ratio height/width, default value 0.75")
field31.setType("SFFloat")

ExternProtoDeclare24.addField(field31)
field32 = x3d.field()
field32.setName("trace")
field32.setAccessType("initializeOnly")
field32.setAppinfo("debug support, default false")
field32.setType("SFBool")

ExternProtoDeclare24.addField(field32)

Scene17.addChildren(ExternProtoDeclare24)
#Example use
ProtoInstance33 = x3d.ProtoInstance()
ProtoInstance33.setName("ViewFrustum")
fieldValue34 = x3d.fieldValue()
fieldValue34.setName("ViewpointNode")
#prefer empty description to prevent entry in player's ViewpointList
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.setDescription("ViewFrustum ViewpointNode")

fieldValue34.addChildren(Viewpoint35)

ProtoInstance33.addFieldValue(fieldValue34)
fieldValue36 = x3d.fieldValue()
fieldValue36.setName("NavigationInfoNode")
NavigationInfo37 = x3d.NavigationInfo()
NavigationInfo37.setVisibilityLimit(15)

fieldValue36.addChildren(NavigationInfo37)

ProtoInstance33.addFieldValue(fieldValue36)
fieldValue38 = x3d.fieldValue()
fieldValue38.setName("visible")
fieldValue38.setValue("true")

ProtoInstance33.addFieldValue(fieldValue38)
fieldValue39 = x3d.fieldValue()
fieldValue39.setName("lineColor")
fieldValue39.setValue("0.9 0.9 0.9")

ProtoInstance33.addFieldValue(fieldValue39)
fieldValue40 = x3d.fieldValue()
fieldValue40.setName("frustumColor")
fieldValue40.setValue("0.8 0.8 0.8")

ProtoInstance33.addFieldValue(fieldValue40)
fieldValue41 = x3d.fieldValue()
fieldValue41.setName("transparency")
fieldValue41.setValue("0.75")

ProtoInstance33.addFieldValue(fieldValue41)
fieldValue42 = x3d.fieldValue()
fieldValue42.setName("trace")
fieldValue42.setValue("true")

ProtoInstance33.addFieldValue(fieldValue42)

Scene17.addChildren(ProtoInstance33)
#Visualization assists
Inline43 = x3d.Inline()
Inline43.setDEF("GridXZ")
Inline43.setUrl(["GridXZ_20x20Fixed.x3d"])

Scene17.addChildren(Inline43)
Transform44 = x3d.Transform()
Transform44.setScale([5,5,5])
Inline45 = x3d.Inline()
Inline45.setDEF("CoordinateAxes")
Inline45.setUrl(["CoordinateAxes.x3d"])

Transform44.addChildren(Inline45)

Scene17.addChildren(Transform44)

X3D0.setScene(Scene17)
X3D0.toFileX3D("../data/ViewFrustumExample.new.python.x3d")
X3D0.toFileJSON("../data/ViewFrustumExample.new.python.json")
