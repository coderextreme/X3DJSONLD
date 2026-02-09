print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "HAnimPoseExternProtoDeclare.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Define ExternProtoDeclare for an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "created"
meta4.content = "1 November 2025"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "modified"
meta5.content = "Mon, 09 Feb 2026 07:11:17 GMT"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "creator"
meta6.content = "Don Brutzman"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "creator"
meta7.content = "Joe Williams"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "contributor"
meta8.content = "Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "specificationSection"
meta9.content = "HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "specificationUrl"
meta10.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "specificationSection"
meta11.content = "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "specificationUrl"
meta12.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "specificationSection"
meta13.content = "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "specificationUrl"
meta14.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "reference"
meta15.content = "Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "generator"
meta16.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "generator"
meta17.content = "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta17)

X3D0.head = head1
Scene18 = x3d.Scene()
ExternProtoDeclare19 = x3d.ExternProtoDeclare()
ExternProtoDeclare19.name = "HAnimPose"
ExternProtoDeclare19.appinfo = "Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values."
ExternProtoDeclare19.url = ["Filename.x3d#HAnimPose","https://some.address.org/Filename.x3d#HAnimPose"]
field20 = x3d.field()
field20.accessType = "inputOutput"
field20.type = "SFNode"
field20.name = "parentHAnimHumanoid"
field20.appinfo = "HAnimHumanoid for this Pose to act upon"

ExternProtoDeclare19.field.append(field20)
field21 = x3d.field()
field21.accessType = "inputOutput"
field21.type = "SFString"
field21.name = "name"
field21.appinfo = "name of this pose"

ExternProtoDeclare19.field.append(field21)
field22 = x3d.field()
field22.accessType = "inputOutput"
field22.type = "MFNode"
field22.name = "children"
field22.appinfo = "joint values to apply to HAnimHumanoid"

ExternProtoDeclare19.field.append(field22)
field23 = x3d.field()
field23.accessType = "inputOutput"
field23.type = "SFString"
field23.name = "description"
field23.appinfo = "explanation of purpose"

ExternProtoDeclare19.field.append(field23)
field24 = x3d.field()
field24.accessType = "inputOutput"
field24.type = "SFBool"
field24.name = "enabled"
field24.appinfo = "default value true"

ExternProtoDeclare19.field.append(field24)
field25 = x3d.field()
field25.accessType = "initializeOnly"
field25.type = "SFInt32"
field25.name = "loa"
field25.appinfo = "default is no loa"

ExternProtoDeclare19.field.append(field25)
field26 = x3d.field()
field26.accessType = "inputOutput"
field26.type = "SFTime"
field26.name = "transitionDuration"
field26.appinfo = "how many seconds to achieve the pose"

ExternProtoDeclare19.field.append(field26)
field27 = x3d.field()
field27.accessType = "inputOutput"
field27.type = "SFNode"
field27.name = "metadata"
field27.appinfo = "single Metadata* node"

ExternProtoDeclare19.field.append(field27)
field28 = x3d.field()
field28.accessType = "outputOnly"
field28.type = "SFBool"
field28.name = "isActive"
field28.appinfo = "event indicating when pose transition is active"

ExternProtoDeclare19.field.append(field28)
field29 = x3d.field()
field29.accessType = "inputOnly"
field29.type = "SFBool"
field29.name = "commencePose"
field29.appinfo = "this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"

ExternProtoDeclare19.field.append(field29)
field30 = x3d.field()
field30.accessType = "inputOnly"
field30.type = "SFBool"
field30.name = "resetAllJoints"
field30.appinfo = "reset the skeleton to I pose with all joints zeroed"

ExternProtoDeclare19.field.append(field30)
field31 = x3d.field()
field31.accessType = "inputOnly"
field31.type = "SFFloat"
field31.name = "set_fraction"
field31.appinfo = "allows transition to proceed incrementally from fraction [0..10"

ExternProtoDeclare19.field.append(field31)
field32 = x3d.field()
field32.accessType = "inputOnly"
field32.type = "SFTime"
field32.name = "set_startTime"
field32.appinfo = "starts the animation clock"

ExternProtoDeclare19.field.append(field32)
field33 = x3d.field()
field33.accessType = "inputOnly"
field33.type = "SFBool"
field33.name = "isLoaded"
field33.appinfo = "possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"

ExternProtoDeclare19.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOutput"
field34.type = "SFBool"
field34.name = "traceEnabled"
field34.appinfo = "debug trace to Browser output console this is a local prototype field"

ExternProtoDeclare19.field.append(field34)

Scene18.children.append(ExternProtoDeclare19)
WorldInfo35 = x3d.WorldInfo(DEF="ModelInfo")
WorldInfo35.title = "HAnimPoseExternProtoDeclare"
WorldInfo35.info = ["Design to illustrate a potential HAnimPose node"]

Scene18.children.append(WorldInfo35)
Background36 = x3d.Background()
Background36.skyColor = [(0.6, 0.6, 0.8)]

Scene18.children.append(Background36)
NavigationInfo37 = x3d.NavigationInfo()

Scene18.children.append(NavigationInfo37)
Viewpoint38 = x3d.Viewpoint()
Viewpoint38.description = "HAnimPoseExternProtoDeclare description"
Viewpoint38.position = [0,1,4]

Scene18.children.append(Viewpoint38)
Transform39 = x3d.Transform(DEF="DisplayHeader1")
Transform39.translation = [0,1.5,0]
Anchor40 = x3d.Anchor()
Anchor40.description = "go to HAnimPoseExternProtoDeclareIndex page"
Anchor40.url = ["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclareIndex.html"]
Anchor40.parameter = ["target=_blank"]
Shape41 = x3d.Shape()
Appearance42 = x3d.Appearance(DEF="PoseTextAppearance")
Material43 = x3d.Material()
Material43.diffuseColor = [0.1,0.3,0.5]

Appearance42.material = Material43

Shape41.appearance = Appearance42
Text44 = x3d.Text()
Text44.string = ["Utility scene","HAnimPoseExternProtoDeclare.x3d"]
FontStyle45 = x3d.FontStyle(DEF="HeaderFont")
FontStyle45.family = ["SANS"]
FontStyle45.style = "BOLD"
FontStyle45.size = 0.15
FontStyle45.justify = ["MIDDLE","MIDDLE"]

Text44.fontStyle = FontStyle45

Shape41.geometry = Text44

Anchor40.children.append(Shape41)
Shape46 = x3d.Shape()
Appearance47 = x3d.Appearance(DEF="TransparentAppearance")
Material48 = x3d.Material()
Material48.transparency = 1

Appearance47.material = Material48

Shape46.appearance = Appearance47
Box49 = x3d.Box()
Box49.size = [3.5,0.5,0.001]

Shape46.geometry = Box49

Anchor40.children.append(Shape46)

Transform39.children.append(Anchor40)

Scene18.children.append(Transform39)
Transform50 = x3d.Transform(DEF="DisplayHeader2")
Transform50.translation = [0,0.5,0]
Anchor51 = x3d.Anchor()
Anchor51.description = "go to HAnimPosePrototypeIndex page"
Anchor51.url = ["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeIndex.html"]
Anchor51.parameter = ["target=_blank"]
Shape52 = x3d.Shape()
Appearance53 = x3d.Appearance(USE="PoseTextAppearance")

Shape52.appearance = Appearance53
Text54 = x3d.Text()
Text54.string = ["This model supports","HAnimPosePrototype.x3d"]
FontStyle55 = x3d.FontStyle(USE="HeaderFont")

Text54.fontStyle = FontStyle55

Shape52.geometry = Text54

Anchor51.children.append(Shape52)

Transform50.children.append(Anchor51)
Shape56 = x3d.Shape()
Appearance57 = x3d.Appearance(USE="TransparentAppearance")

Shape56.appearance = Appearance57
Box58 = x3d.Box()
Box58.size = [2.6,0.5,0.001]

Shape56.geometry = Box58

Transform50.children.append(Shape56)

Scene18.children.append(Transform50)

X3D0.Scene = Scene18
f = open("../data/HAnimPoseExternProtoDeclare.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimPoseExternProtoDeclare.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimPoseExternProtoDeclare.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
