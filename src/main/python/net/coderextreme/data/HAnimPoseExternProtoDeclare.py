print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.0"
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
meta5.content = "14 December 2025"

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
meta16.content = "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "generator"
meta17.content = "Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "identifier"
meta18.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclare.x3d"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "license"
meta19.content = "https://www.web3d.org/x3d/content/examples/license.html"

head1.children.append(meta19)

X3D0.head = head1
Scene20 = x3d.Scene()
WorldInfo21 = x3d.WorldInfo(DEF="ModelInfo")
WorldInfo21.info = ["Design to illustrate a potential HAnimPose node"]
WorldInfo21.title = "HAnimPoseExternProtoDeclare"

Scene20.children.append(WorldInfo21)
Background22 = x3d.Background()
Background22.skyColor = [(0.6, 0.6, 0.8)]

Scene20.children.append(Background22)
NavigationInfo23 = x3d.NavigationInfo()

Scene20.children.append(NavigationInfo23)
ExternProtoDeclare24 = x3d.ExternProtoDeclare()
ExternProtoDeclare24.name = "HAnimPose"
ExternProtoDeclare24.appinfo = "Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values."
ExternProtoDeclare24.url = ["Filename.x3d#HAnimPose","https://some.address.org/Filename.x3d#HAnimPose"]
field25 = x3d.field()
field25.name = "parentHAnimHumanoid"
field25.accessType = "inputOutput"
field25.appinfo = "HAnimHumanoid for this Pose to act upon"
field25.type = "SFNode"

ExternProtoDeclare24.field.append(field25)
field26 = x3d.field()
field26.name = "name"
field26.accessType = "inputOutput"
field26.appinfo = "name of this pose"
field26.type = "SFString"

ExternProtoDeclare24.field.append(field26)
field27 = x3d.field()
field27.name = "children"
field27.accessType = "inputOutput"
field27.appinfo = "joint values to apply to HAnimHumanoid"
field27.type = "MFNode"
field27.children.append(x3d.Comment("""initializating Joint nodes (if any) go here"""))

ExternProtoDeclare24.field.append(field27)
field28 = x3d.field()
field28.name = "description"
field28.accessType = "inputOutput"
field28.appinfo = "explanation of purpose"
field28.type = "SFString"

ExternProtoDeclare24.field.append(field28)
field29 = x3d.field()
field29.name = "enabled"
field29.accessType = "inputOutput"
field29.appinfo = "default value true"
field29.type = "SFBool"

ExternProtoDeclare24.field.append(field29)
field30 = x3d.field()
field30.name = "loa"
field30.accessType = "initializeOnly"
field30.appinfo = "default is no loa"
field30.type = "SFInt32"

ExternProtoDeclare24.field.append(field30)
field31 = x3d.field()
field31.name = "transitionDuration"
field31.accessType = "inputOutput"
field31.appinfo = "how many seconds to achieve the pose"
field31.type = "SFTime"

ExternProtoDeclare24.field.append(field31)
field32 = x3d.field()
field32.name = "metadata"
field32.accessType = "inputOutput"
field32.appinfo = "single Metadata* node"
field32.type = "SFNode"

ExternProtoDeclare24.field.append(field32)
field33 = x3d.field()
field33.name = "isActive"
field33.accessType = "outputOnly"
field33.appinfo = "event indicating when pose transition is active"
field33.type = "SFBool"

ExternProtoDeclare24.field.append(field33)
field34 = x3d.field()
field34.name = "commencePose"
field34.accessType = "inputOnly"
field34.appinfo = "this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"
field34.type = "SFBool"

ExternProtoDeclare24.field.append(field34)
field35 = x3d.field()
field35.name = "resetAllJoints"
field35.accessType = "inputOnly"
field35.appinfo = "reset the skeleton to I pose with all joints zeroed"
field35.type = "SFBool"

ExternProtoDeclare24.field.append(field35)
field36 = x3d.field()
field36.name = "set_fraction"
field36.accessType = "inputOnly"
field36.appinfo = "allows transition to proceed incrementally from fraction [0..10"
field36.type = "SFFloat"

ExternProtoDeclare24.field.append(field36)
field37 = x3d.field()
field37.name = "set_startTime"
field37.accessType = "inputOnly"
field37.appinfo = "starts the animation clock"
field37.type = "SFTime"

ExternProtoDeclare24.field.append(field37)
field38 = x3d.field()
field38.name = "isLoaded"
field38.accessType = "inputOnly"
field38.appinfo = "possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"
field38.type = "SFBool"

ExternProtoDeclare24.field.append(field38)
field39 = x3d.field()
field39.name = "traceEnabled"
field39.accessType = "inputOutput"
field39.appinfo = "debug trace to Browser output console this is a local prototype field"
field39.type = "SFBool"

ExternProtoDeclare24.field.append(field39)

Scene20.children.append(ExternProtoDeclare24)
Viewpoint40 = x3d.Viewpoint()
Viewpoint40.description = "HAnimPoseExternProtoDeclare description"
Viewpoint40.position = [0,1,4]

Scene20.children.append(Viewpoint40)
Transform41 = x3d.Transform(DEF="DisplayHeader1")
Transform41.translation = [0,1.5,0]
Anchor42 = x3d.Anchor()
Anchor42.description = "go to HAnimPoseExternProtoDeclareIndex page"
Anchor42.parameter = ["target=_blank"]
Anchor42.url = ["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclareIndex.html"]
Shape43 = x3d.Shape()
Text44 = x3d.Text()
Text44.string = ["Utility scene","HAnimPoseExternProtoDeclare.x3d"]
FontStyle45 = x3d.FontStyle(DEF="HeaderFont")
FontStyle45.family = ["SANS"]
FontStyle45.justify = ["MIDDLE","MIDDLE"]
FontStyle45.size = 0.15
FontStyle45.style = "BOLD"

Text44.fontStyle = FontStyle45

Shape43.geometry = Text44
Appearance46 = x3d.Appearance(DEF="PoseTextAppearance")
Material47 = x3d.Material()
Material47.diffuseColor = [0.1,0.3,0.5]

Appearance46.material = Material47

Shape43.appearance = Appearance46

Anchor42.children.append(Shape43)
Shape48 = x3d.Shape()
Box49 = x3d.Box()
Box49.size = [3.5,0.5,0.001]

Shape48.geometry = Box49
Appearance50 = x3d.Appearance(DEF="TransparentAppearance")
Material51 = x3d.Material()
Material51.transparency = 1

Appearance50.material = Material51

Shape48.appearance = Appearance50

Anchor42.children.append(Shape48)

Transform41.children.append(Anchor42)

Scene20.children.append(Transform41)
Transform52 = x3d.Transform(DEF="DisplayHeader2")
Transform52.translation = [0,0.5,0]
Anchor53 = x3d.Anchor()
Anchor53.description = "go to HAnimPosePrototypeIndex page"
Anchor53.parameter = ["target=_blank"]
Anchor53.url = ["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeIndex.html"]
Shape54 = x3d.Shape()
Text55 = x3d.Text()
Text55.string = ["This model supports","HAnimPosePrototype.x3d"]
FontStyle56 = x3d.FontStyle(USE="HeaderFont")

Text55.fontStyle = FontStyle56

Shape54.geometry = Text55
Appearance57 = x3d.Appearance(USE="PoseTextAppearance")

Shape54.appearance = Appearance57

Anchor53.children.append(Shape54)

Transform52.children.append(Anchor53)
Shape58 = x3d.Shape()
Box59 = x3d.Box()
Box59.size = [2.6,0.5,0.001]

Shape58.geometry = Box59
Appearance60 = x3d.Appearance(USE="TransparentAppearance")

Shape58.appearance = Appearance60

Transform52.children.append(Shape58)

Scene20.children.append(Transform52)

X3D0.Scene = Scene20
f = open("../data/HAnimPoseExternProtoDeclare.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimPoseExternProtoDeclare.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimPoseExternProtoDeclare.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
