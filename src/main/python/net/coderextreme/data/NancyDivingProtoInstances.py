import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("NancyDivingProtoInstances.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Nancy having fun scuba diving - developmental model using ProtoInstance instead of HAnim native tags, do not use this pattern.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("warning")
meta4.setContent("This is a developmental example, use HAnim native tags as shown in other examples instead of the prototypes and ProtoInstances shown here.")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("Etsuko Lippi")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("translators")
meta6.setContent("Tom Miller and Don Brutzman, NPS")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("created")
meta7.setContent("19 November 2001")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("modified")
meta8.setContent("4 July 2020")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("TODO")
meta9.setContent("left arm motion still has a problem")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("creator")
meta10.setContent("Cindy Ballreich cindy@ballreich.net 3Name3D")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("rights")
meta11.setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("identifier")
meta12.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDivingProtoInstances.x3d")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("generator")
meta13.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("license")
meta14.setContent("../license.html")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
ExternProtoDeclare16 = x3d.ExternProtoDeclare()
ExternProtoDeclare16.setName("Joint")
ExternProtoDeclare16.setAppinfo("The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.")
ExternProtoDeclare16.setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Joint.html")
ExternProtoDeclare16.setUrl(["NancyPrototypes.x3d#Joint","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Joint","NancyPrototypes.wrl#Joint","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Joint"])
field17 = x3d.field()
field17.setName("center")
field17.setAccessType("inputOutput")
field17.setType("SFVec3f")

ExternProtoDeclare16.addField(field17)
field18 = x3d.field()
field18.setName("children")
field18.setAccessType("inputOutput")
field18.setType("MFNode")

ExternProtoDeclare16.addField(field18)
field19 = x3d.field()
field19.setName("llimit")
field19.setAccessType("inputOutput")
field19.setType("MFFloat")

ExternProtoDeclare16.addField(field19)
field20 = x3d.field()
field20.setName("limitOrientation")
field20.setAccessType("inputOutput")
field20.setType("SFRotation")

ExternProtoDeclare16.addField(field20)
field21 = x3d.field()
field21.setName("name")
field21.setAccessType("inputOutput")
field21.setType("SFString")

ExternProtoDeclare16.addField(field21)
field22 = x3d.field()
field22.setName("rotation")
field22.setAccessType("inputOutput")
field22.setType("SFRotation")

ExternProtoDeclare16.addField(field22)
field23 = x3d.field()
field23.setName("scale")
field23.setAccessType("inputOutput")
field23.setType("SFVec3f")

ExternProtoDeclare16.addField(field23)
field24 = x3d.field()
field24.setName("scaleOrientation")
field24.setAccessType("inputOutput")
field24.setType("SFRotation")

ExternProtoDeclare16.addField(field24)
field25 = x3d.field()
field25.setName("stiffness")
field25.setAccessType("inputOutput")
field25.setType("MFFloat")

ExternProtoDeclare16.addField(field25)
field26 = x3d.field()
field26.setName("translation")
field26.setAccessType("inputOutput")
field26.setType("SFVec3f")

ExternProtoDeclare16.addField(field26)
field27 = x3d.field()
field27.setName("ulimit")
field27.setAccessType("inputOutput")
field27.setType("MFFloat")

ExternProtoDeclare16.addField(field27)
field28 = x3d.field()
field28.setName("removeChildren")
field28.setAccessType("inputOnly")
field28.setType("MFNode")

ExternProtoDeclare16.addField(field28)
field29 = x3d.field()
field29.setName("bboxSize")
field29.setAccessType("initializeOnly")
field29.setType("SFVec3f")

ExternProtoDeclare16.addField(field29)
field30 = x3d.field()
field30.setName("skinCoordIndex")
field30.setAccessType("inputOutput")
field30.setType("MFInt32")

ExternProtoDeclare16.addField(field30)
field31 = x3d.field()
field31.setName("bboxCenter")
field31.setAccessType("initializeOnly")
field31.setType("SFVec3f")

ExternProtoDeclare16.addField(field31)
field32 = x3d.field()
field32.setName("skinCoordWeight")
field32.setAccessType("inputOutput")
field32.setType("MFFloat")

ExternProtoDeclare16.addField(field32)
field33 = x3d.field()
field33.setName("addChildren")
field33.setAccessType("inputOnly")
field33.setType("MFNode")

ExternProtoDeclare16.addField(field33)

Scene15.addChildren(ExternProtoDeclare16)
ExternProtoDeclare34 = x3d.ExternProtoDeclare()
ExternProtoDeclare34.setName("Segment")
ExternProtoDeclare34.setAppinfo("The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node.")
ExternProtoDeclare34.setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Segment.html")
ExternProtoDeclare34.setUrl(["NancyPrototypes.x3d#Segment","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Segment","NancyPrototypes.wrl#Segment","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Segment"])
field35 = x3d.field()
field35.setName("bboxCenter")
field35.setAccessType("initializeOnly")
field35.setType("SFVec3f")

ExternProtoDeclare34.addField(field35)
field36 = x3d.field()
field36.setName("bboxSize")
field36.setAccessType("initializeOnly")
field36.setType("SFVec3f")

ExternProtoDeclare34.addField(field36)
field37 = x3d.field()
field37.setName("centerOfMass")
field37.setAccessType("inputOutput")
field37.setType("SFVec3f")

ExternProtoDeclare34.addField(field37)
field38 = x3d.field()
field38.setName("children")
field38.setAccessType("inputOutput")
field38.setType("MFNode")

ExternProtoDeclare34.addField(field38)
field39 = x3d.field()
field39.setName("coord")
field39.setAccessType("inputOutput")
field39.setAppinfo("contains Coordinate nodes")
field39.setType("SFNode")

ExternProtoDeclare34.addField(field39)
field40 = x3d.field()
field40.setName("displacers")
field40.setAccessType("inputOutput")
field40.setAppinfo("contains Displacer nodes")
field40.setType("MFNode")

ExternProtoDeclare34.addField(field40)
field41 = x3d.field()
field41.setName("mass")
field41.setAccessType("inputOutput")
field41.setType("SFFloat")

ExternProtoDeclare34.addField(field41)
field42 = x3d.field()
field42.setName("momentsOfInertia")
field42.setAccessType("inputOutput")
field42.setType("MFFloat")

ExternProtoDeclare34.addField(field42)
field43 = x3d.field()
field43.setName("name")
field43.setAccessType("inputOutput")
field43.setType("SFString")

ExternProtoDeclare34.addField(field43)
field44 = x3d.field()
field44.setName("addChildren")
field44.setAccessType("inputOnly")
field44.setType("MFNode")

ExternProtoDeclare34.addField(field44)
field45 = x3d.field()
field45.setName("removeChildren")
field45.setAccessType("inputOnly")
field45.setType("MFNode")

ExternProtoDeclare34.addField(field45)

Scene15.addChildren(ExternProtoDeclare34)
ExternProtoDeclare46 = x3d.ExternProtoDeclare()
ExternProtoDeclare46.setName("Humanoid")
ExternProtoDeclare46.setAppinfo("The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.")
ExternProtoDeclare46.setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html")
ExternProtoDeclare46.setUrl(["NancyPrototypes.x3d#Humanoid","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Humanoid","NancyPrototypes.wrl#Humanoid","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Humanoid"])
field47 = x3d.field()
field47.setName("bboxCenter")
field47.setAccessType("initializeOnly")
field47.setType("SFVec3f")

ExternProtoDeclare46.addField(field47)
field48 = x3d.field()
field48.setName("bboxSize")
field48.setAccessType("initializeOnly")
field48.setType("SFVec3f")

ExternProtoDeclare46.addField(field48)
field49 = x3d.field()
field49.setName("center")
field49.setAccessType("inputOutput")
field49.setType("SFVec3f")

ExternProtoDeclare46.addField(field49)
field50 = x3d.field()
field50.setName("humanoidBody")
field50.setAccessType("inputOutput")
field50.setAppinfo("HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton")
field50.setDocumentation("http://HAnim.org/Specifications/HAnim1.1/#humanoid")
field50.setType("MFNode")

ExternProtoDeclare46.addField(field50)
field51 = x3d.field()
field51.setName("info")
field51.setAccessType("inputOutput")
field51.setType("MFString")

ExternProtoDeclare46.addField(field51)
field52 = x3d.field()
field52.setName("joints")
field52.setAccessType("inputOutput")
field52.setAppinfo("Container field for Joint nodes")
field52.setType("MFNode")

ExternProtoDeclare46.addField(field52)
field53 = x3d.field()
field53.setName("name")
field53.setAccessType("inputOutput")
field53.setType("SFString")

ExternProtoDeclare46.addField(field53)
field54 = x3d.field()
field54.setName("rotation")
field54.setAccessType("inputOutput")
field54.setType("SFRotation")

ExternProtoDeclare46.addField(field54)
field55 = x3d.field()
field55.setName("scale")
field55.setAccessType("inputOutput")
field55.setType("SFVec3f")

ExternProtoDeclare46.addField(field55)
field56 = x3d.field()
field56.setName("scaleOrientation")
field56.setAccessType("inputOutput")
field56.setType("SFRotation")

ExternProtoDeclare46.addField(field56)
field57 = x3d.field()
field57.setName("segments")
field57.setAccessType("inputOutput")
field57.setAppinfo("Container field for Segment nodes")
field57.setType("MFNode")

ExternProtoDeclare46.addField(field57)
field58 = x3d.field()
field58.setName("sites")
field58.setAccessType("inputOutput")
field58.setAppinfo("Container field for Site nodes")
field58.setType("MFNode")

ExternProtoDeclare46.addField(field58)
field59 = x3d.field()
field59.setName("translation")
field59.setAccessType("inputOutput")
field59.setType("SFVec3f")

ExternProtoDeclare46.addField(field59)
field60 = x3d.field()
field60.setName("version")
field60.setAccessType("inputOutput")
field60.setAppinfo("legal values: 1.1 or 2.0")
field60.setType("SFString")

ExternProtoDeclare46.addField(field60)
field61 = x3d.field()
field61.setName("viewpoints")
field61.setAccessType("inputOutput")
field61.setAppinfo("Container field for Viewpoint nodes")
field61.setType("MFNode")

ExternProtoDeclare46.addField(field61)
field62 = x3d.field()
field62.setName("skinNormal")
field62.setAccessType("inputOutput")
field62.setAppinfo("Hint: HAnim version 2.0")
field62.setType("SFNode")

ExternProtoDeclare46.addField(field62)
field63 = x3d.field()
field63.setName("humanoidVersion")
field63.setAccessType("inputOutput")
field63.setAppinfo("Version of the humanoid being modeled. Hint: HAnim version 2.0")
field63.setType("SFString")

ExternProtoDeclare46.addField(field63)
field64 = x3d.field()
field64.setName("skeleton")
field64.setAccessType("inputOutput")
field64.setAppinfo("HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody")
field64.setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html")
field64.setType("MFNode")

ExternProtoDeclare46.addField(field64)
field65 = x3d.field()
field65.setName("skinCoord")
field65.setAccessType("inputOutput")
field65.setAppinfo("Hint: HAnim version 2.0")
field65.setType("SFNode")

ExternProtoDeclare46.addField(field65)

Scene15.addChildren(ExternProtoDeclare46)
#====================
ExternProtoDeclare66 = x3d.ExternProtoDeclare()
ExternProtoDeclare66.setName("ViewPositionOrientation")
ExternProtoDeclare66.setAppinfo("ViewPositionOrientation provides provides console output of local position and orientation as user navigates")
ExternProtoDeclare66.setUrl(["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"])
field67 = x3d.field()
field67.setName("enabled")
field67.setAccessType("inputOutput")
field67.setAppinfo("Whether or not ViewPositionOrientation sends output to console")
field67.setType("SFBool")

ExternProtoDeclare66.addField(field67)
field68 = x3d.field()
field68.setName("traceEnabled")
field68.setAccessType("initializeOnly")
field68.setAppinfo("Output internal trace messages for debugging this node, intended for developer use only")
field68.setType("SFBool")

ExternProtoDeclare66.addField(field68)
field69 = x3d.field()
field69.setName("set_traceEnabled")
field69.setAccessType("inputOnly")
field69.setAppinfo("Ability to turn output tracing on/off at runtime")
field69.setType("SFBool")

ExternProtoDeclare66.addField(field69)
field70 = x3d.field()
field70.setName("position_changed")
field70.setAccessType("outputOnly")
field70.setAppinfo("Output local position")
field70.setType("SFVec3f")

ExternProtoDeclare66.addField(field70)
field71 = x3d.field()
field71.setName("orientation_changed")
field71.setAccessType("outputOnly")
field71.setAppinfo("Output local orientation")
field71.setType("SFRotation")

ExternProtoDeclare66.addField(field71)
field72 = x3d.field()
field72.setName("outputViewpointString")
field72.setAccessType("outputOnly")
field72.setAppinfo("MFString value of new Viewpoint, suitable for use in string field of a Text node")
field72.setType("MFString")

ExternProtoDeclare66.addField(field72)

Scene15.addChildren(ExternProtoDeclare66)
ProtoInstance73 = x3d.ProtoInstance()
ProtoInstance73.setName("ViewPositionOrientation")
ProtoInstance73.setDEF("ExampleViewPositionOrientation")
fieldValue74 = x3d.fieldValue()
fieldValue74.setName("enabled")
fieldValue74.setValue("true")

ProtoInstance73.addFieldValue(fieldValue74)

Scene15.addChildren(ProtoInstance73)
#Example use: https://savage.nps.edu/Savage/Tools/Animation/ViewPositionOrientationExample.x3d
#====================
#Start scene graph.
ProtoInstance75 = x3d.ProtoInstance()
ProtoInstance75.setName("ViewPositionOrientation")
fieldValue76 = x3d.fieldValue()
fieldValue76.setName("enabled")
fieldValue76.setValue("true")

ProtoInstance75.addFieldValue(fieldValue76)

Scene15.addChildren(ProtoInstance75)
Background77 = x3d.Background()
Background77.setSkyColor([0,0.4,1])

Scene15.addChildren(Background77)
NavigationInfo78 = x3d.NavigationInfo()
NavigationInfo78.setAvatarSize([0.15,1.53,0.75])
NavigationInfo78.setSpeed(0.5)
NavigationInfo78.setType(["EXAMINE"])

Scene15.addChildren(NavigationInfo78)
Viewpoint79 = x3d.Viewpoint()
Viewpoint79.setDescription("Nancy diving default viewpoint")
Viewpoint79.setPosition([-0.8,0,3.1])

Scene15.addChildren(Viewpoint79)
LOD80 = x3d.LOD()
Group81 = x3d.Group()
Group81.setDEF("Viewpoint")
#High Resolution
Viewpoint82 = x3d.Viewpoint()
Viewpoint82.setDescription("Nancy front viewpoint")
Viewpoint82.setOrientation([-0.354,0.878,-0.321,4.5485])
Viewpoint82.setPosition([-2.2,-0.7,0])

Group81.addChildren(Viewpoint82)
Viewpoint83 = x3d.Viewpoint()
Viewpoint83.setDescription("Nancy above viewpoint")
Viewpoint83.setOrientation([-0.126,-0.978,-0.168,1.5385])
Viewpoint83.setPosition([-3,0.5,0])

Group81.addChildren(Viewpoint83)
Viewpoint84 = x3d.Viewpoint()
Viewpoint84.setDescription("Nancy back viewpoint")
Viewpoint84.setOrientation([0.037,0.999,-0.011,1.572])
Viewpoint84.setPosition([0.7,0.1,0])

Group81.addChildren(Viewpoint84)
Viewpoint85 = x3d.Viewpoint()
Viewpoint85.setDescription("Nancy side viewpoint")
Viewpoint85.setOrientation([0.121,0.987,-0.105,3.2682])
Viewpoint85.setPosition([-1.2,-0.2,-1.5])

Group81.addChildren(Viewpoint85)
Viewpoint86 = x3d.Viewpoint()
Viewpoint86.setDescription("Nancy viewpoint through her goggles")
Viewpoint86.setOrientation([-0.357,0.872,0.335,1.5225])
Viewpoint86.setPosition([-1.5,0.1,0])

Group81.addChildren(Viewpoint86)
Group87 = x3d.Group()
Group87.setDEF("HighResolution")
Transform88 = x3d.Transform()
Transform88.setRotation([1,0,0,1.57])
Transform89 = x3d.Transform()
Transform89.setRotation([0,0,1,1.57])
WorldInfo90 = x3d.WorldInfo()
WorldInfo90.setInfo(["Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."])
WorldInfo90.setTitle("Nancy - an HAnim compliant avatar by 3Name3D")

Transform89.addChildren(WorldInfo90)
ProtoInstance91 = x3d.ProtoInstance()
ProtoInstance91.setName("Humanoid")
ProtoInstance91.setDEF("Humanoid")
fieldValue92 = x3d.fieldValue()
fieldValue92.setName("humanoidBody")
ProtoInstance93 = x3d.ProtoInstance()
ProtoInstance93.setName("Joint")
ProtoInstance93.setDEF("hanim_humanoid_root")
fieldValue94 = x3d.fieldValue()
fieldValue94.setName("name")
fieldValue94.setValue("humanoid_root")

ProtoInstance93.addFieldValue(fieldValue94)
fieldValue95 = x3d.fieldValue()
fieldValue95.setName("center")
fieldValue95.setValue("-0.00405 0.855 -0.000113")

ProtoInstance93.addFieldValue(fieldValue95)
fieldValue96 = x3d.fieldValue()
fieldValue96.setName("children")
ProtoInstance97 = x3d.ProtoInstance()
ProtoInstance97.setName("Joint")
ProtoInstance97.setDEF("hanim_sacroiliac")
fieldValue98 = x3d.fieldValue()
fieldValue98.setName("name")
fieldValue98.setValue("sacroiliac")

ProtoInstance97.addFieldValue(fieldValue98)
fieldValue99 = x3d.fieldValue()
fieldValue99.setName("center")
fieldValue99.setValue("0 1.01 -0.0204")

ProtoInstance97.addFieldValue(fieldValue99)
fieldValue100 = x3d.fieldValue()
fieldValue100.setName("children")
ProtoInstance101 = x3d.ProtoInstance()
ProtoInstance101.setName("Segment")
ProtoInstance101.setDEF("hanim_pelvis")
fieldValue102 = x3d.fieldValue()
fieldValue102.setName("name")
fieldValue102.setValue("pelvis")

ProtoInstance101.addFieldValue(fieldValue102)
fieldValue103 = x3d.fieldValue()
fieldValue103.setName("children")
Shape104 = x3d.Shape()
Appearance105 = x3d.Appearance()
Material106 = x3d.Material()
Material106.setDEF("Pants_Color")
Material106.setDiffuseColor([0,0,0.502])

Appearance105.setMaterial(Material106)

Shape104.setAppearance(Appearance105)
IndexedFaceSet107 = x3d.IndexedFaceSet()
IndexedFaceSet107.setCoordIndex([0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1])
IndexedFaceSet107.setCreaseAngle(1.14)
Coordinate108 = x3d.Coordinate()
Coordinate108.setPoint([0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1,-0.0309,0.117,1,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1,-0.0309,-0.144,1,-0.011,-0.117,1,0.0164,-0.0314,0.999,0.0502,0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0,0.863,-0.00456,-0.166,0.862,-0.0459,0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0,0.839,-0.0217,0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0,0.831,-0.0626,-0.0599,0.812,-0.0545])

IndexedFaceSet107.setCoord(Coordinate108)

Shape104.setGeometry(IndexedFaceSet107)

fieldValue103.addChildren(Shape104)

ProtoInstance101.addFieldValue(fieldValue103)

fieldValue100.addChildren(ProtoInstance101)
ProtoInstance109 = x3d.ProtoInstance()
ProtoInstance109.setName("Joint")
ProtoInstance109.setDEF("hanim_l_hip")
fieldValue110 = x3d.fieldValue()
fieldValue110.setName("name")
fieldValue110.setValue("l_hip")

ProtoInstance109.addFieldValue(fieldValue110)
fieldValue111 = x3d.fieldValue()
fieldValue111.setName("center")
fieldValue111.setValue("0.122 0.888271 -0.0693267")

ProtoInstance109.addFieldValue(fieldValue111)
fieldValue112 = x3d.fieldValue()
fieldValue112.setName("children")
ProtoInstance113 = x3d.ProtoInstance()
ProtoInstance113.setName("Segment")
ProtoInstance113.setDEF("hanim_l_thigh")
fieldValue114 = x3d.fieldValue()
fieldValue114.setName("name")
fieldValue114.setValue("l_thigh")

ProtoInstance113.addFieldValue(fieldValue114)
fieldValue115 = x3d.fieldValue()
fieldValue115.setName("children")
Shape116 = x3d.Shape()
Appearance117 = x3d.Appearance()
Material118 = x3d.Material()
Material118.setUSE("Pants_Color")

Appearance117.setMaterial(Material118)

Shape116.setAppearance(Appearance117)
IndexedFaceSet119 = x3d.IndexedFaceSet()
IndexedFaceSet119.setCoordIndex([0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1])
IndexedFaceSet119.setCreaseAngle(1.32)
Coordinate120 = x3d.Coordinate()
Coordinate120.setPoint([0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108])

IndexedFaceSet119.setCoord(Coordinate120)

Shape116.setGeometry(IndexedFaceSet119)

fieldValue115.addChildren(Shape116)

ProtoInstance113.addFieldValue(fieldValue115)

fieldValue112.addChildren(ProtoInstance113)
ProtoInstance121 = x3d.ProtoInstance()
ProtoInstance121.setName("Joint")
ProtoInstance121.setDEF("hanim_l_knee")
fieldValue122 = x3d.fieldValue()
fieldValue122.setName("name")
fieldValue122.setValue("l_knee")

ProtoInstance121.addFieldValue(fieldValue122)
fieldValue123 = x3d.fieldValue()
fieldValue123.setName("center")
fieldValue123.setValue("0.0738 0.517 -0.0284")

ProtoInstance121.addFieldValue(fieldValue123)
fieldValue124 = x3d.fieldValue()
fieldValue124.setName("children")
ProtoInstance125 = x3d.ProtoInstance()
ProtoInstance125.setName("Segment")
ProtoInstance125.setDEF("hanim_l_calf")
fieldValue126 = x3d.fieldValue()
fieldValue126.setName("name")
fieldValue126.setValue("l_calf")

ProtoInstance125.addFieldValue(fieldValue126)
fieldValue127 = x3d.fieldValue()
fieldValue127.setName("children")
Shape128 = x3d.Shape()
Appearance129 = x3d.Appearance()
Material130 = x3d.Material()
Material130.setUSE("Pants_Color")

Appearance129.setMaterial(Material130)

Shape128.setAppearance(Appearance129)
IndexedFaceSet131 = x3d.IndexedFaceSet()
IndexedFaceSet131.setCoordIndex([2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1])
IndexedFaceSet131.setCreaseAngle(1.57)
Coordinate132 = x3d.Coordinate()
Coordinate132.setPoint([0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835])

IndexedFaceSet131.setCoord(Coordinate132)

Shape128.setGeometry(IndexedFaceSet131)

fieldValue127.addChildren(Shape128)

ProtoInstance125.addFieldValue(fieldValue127)

fieldValue124.addChildren(ProtoInstance125)
ProtoInstance133 = x3d.ProtoInstance()
ProtoInstance133.setName("Joint")
ProtoInstance133.setDEF("hanim_l_ankle")
fieldValue134 = x3d.fieldValue()
fieldValue134.setName("name")
fieldValue134.setValue("l_ankle")

ProtoInstance133.addFieldValue(fieldValue134)
fieldValue135 = x3d.fieldValue()
fieldValue135.setName("center")
fieldValue135.setValue("0.0645 0.0719 -0.048")

ProtoInstance133.addFieldValue(fieldValue135)
fieldValue136 = x3d.fieldValue()
fieldValue136.setName("children")
ProtoInstance137 = x3d.ProtoInstance()
ProtoInstance137.setName("Segment")
ProtoInstance137.setDEF("hanim_l_hindfoot")
fieldValue138 = x3d.fieldValue()
fieldValue138.setName("name")
fieldValue138.setValue("l_hindfoot")

ProtoInstance137.addFieldValue(fieldValue138)
fieldValue139 = x3d.fieldValue()
fieldValue139.setName("children")
Shape140 = x3d.Shape()
Appearance141 = x3d.Appearance()
Material142 = x3d.Material()
Material142.setDEF("Shoe_Color")
Material142.setAmbientIntensity(0.25)
Material142.setDiffuseColor([0.753,1,0.243])

Appearance141.setMaterial(Material142)

Shape140.setAppearance(Appearance141)
IndexedFaceSet143 = x3d.IndexedFaceSet()
IndexedFaceSet143.setCoordIndex([2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1])
IndexedFaceSet143.setCreaseAngle(1.57)
Coordinate144 = x3d.Coordinate()
Coordinate144.setPoint([0.0529,0,-0.0923,0.0863,0,-0.0862,0.0727,0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0,-0.0594,0.1,0.0219,-0.0594,0.113,0,0.0645,0.113,0.0219,0.0645,0.112,0,0.117,0.112,0.0156,0.117,0.0701,0,0.146,0.0701,0.0156,0.146,0.0468,0,0.153,0.0468,0.0156,0.153,0.0215,0,0.146,0.0215,0.0156,0.146,0.0165,0,0.125,0.0165,0.0156,0.125,0.0211,0,0.0377,0.0211,0.0219,0.0377,0.0393,0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608])

IndexedFaceSet143.setCoord(Coordinate144)

Shape140.setGeometry(IndexedFaceSet143)

fieldValue139.addChildren(Shape140)
Transform145 = x3d.Transform()
Transform145.setScale([0.015,0.015,0.015])
Transform146 = x3d.Transform()
Transform146.setRotation([0,0,1,1.57])
Transform146.setTranslation([6,-0.5,-7.5])
Shape147 = x3d.Shape()
Appearance148 = x3d.Appearance()
Material149 = x3d.Material()
Material149.setDiffuseColor([0.753,1,0.243])

Appearance148.setMaterial(Material149)

Shape147.setAppearance(Appearance148)
Extrusion150 = x3d.Extrusion()
Extrusion150.setDEF("Finl")
Extrusion150.setCcw(False)
Extrusion150.setCreaseAngle(3.14)
Extrusion150.setCrossSection([-1,0,-0.8,2,-0.7,3,0,5.2,0.7,3,0.8,2,1,0,0.8,-2,0.7,-3,0,-5.2,-0.7,-3,-0.8,-2,-1,0])
Extrusion150.setScale([0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35])
Extrusion150.setSpine([0,0,1,0,0,5,0,0,8,0,0,12,0,0,15,0.5,0,18,1.5,0,25,2.5,0,30,4,0,34])

Shape147.setGeometry(Extrusion150)

Transform146.addChildren(Shape147)

Transform145.addChildren(Transform146)

fieldValue139.addChildren(Transform145)

ProtoInstance137.addFieldValue(fieldValue139)

fieldValue136.addChildren(ProtoInstance137)

ProtoInstance133.addFieldValue(fieldValue136)

fieldValue124.addChildren(ProtoInstance133)

ProtoInstance121.addFieldValue(fieldValue124)

fieldValue112.addChildren(ProtoInstance121)

ProtoInstance109.addFieldValue(fieldValue112)

fieldValue100.addChildren(ProtoInstance109)
ProtoInstance151 = x3d.ProtoInstance()
ProtoInstance151.setName("Joint")
ProtoInstance151.setDEF("hanim_r_hip")
fieldValue152 = x3d.fieldValue()
fieldValue152.setName("name")
fieldValue152.setValue("r_hip")

ProtoInstance151.addFieldValue(fieldValue152)
fieldValue153 = x3d.fieldValue()
fieldValue153.setName("center")
fieldValue153.setValue("-0.11 0.892362 -0.0732533")

ProtoInstance151.addFieldValue(fieldValue153)
fieldValue154 = x3d.fieldValue()
fieldValue154.setName("children")
ProtoInstance155 = x3d.ProtoInstance()
ProtoInstance155.setName("Segment")
ProtoInstance155.setDEF("hanim_r_thigh")
fieldValue156 = x3d.fieldValue()
fieldValue156.setName("name")
fieldValue156.setValue("r_thigh")

ProtoInstance155.addFieldValue(fieldValue156)
fieldValue157 = x3d.fieldValue()
fieldValue157.setName("children")
Shape158 = x3d.Shape()
Appearance159 = x3d.Appearance()
Material160 = x3d.Material()
Material160.setUSE("Pants_Color")

Appearance159.setMaterial(Material160)

Shape158.setAppearance(Appearance159)
IndexedFaceSet161 = x3d.IndexedFaceSet()
IndexedFaceSet161.setCoordIndex([5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1])
IndexedFaceSet161.setCreaseAngle(1.61)
Coordinate162 = x3d.Coordinate()
Coordinate162.setPoint([-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018])

IndexedFaceSet161.setCoord(Coordinate162)

Shape158.setGeometry(IndexedFaceSet161)

fieldValue157.addChildren(Shape158)

ProtoInstance155.addFieldValue(fieldValue157)

fieldValue154.addChildren(ProtoInstance155)
ProtoInstance163 = x3d.ProtoInstance()
ProtoInstance163.setName("Joint")
ProtoInstance163.setDEF("hanim_r_knee")
fieldValue164 = x3d.fieldValue()
fieldValue164.setName("name")
fieldValue164.setValue("r_knee")

ProtoInstance163.addFieldValue(fieldValue164)
fieldValue165 = x3d.fieldValue()
fieldValue165.setName("center")
fieldValue165.setValue("-0.0699 0.51 -0.0166")

ProtoInstance163.addFieldValue(fieldValue165)
fieldValue166 = x3d.fieldValue()
fieldValue166.setName("children")
ProtoInstance167 = x3d.ProtoInstance()
ProtoInstance167.setName("Segment")
ProtoInstance167.setDEF("hanim_r_calf")
fieldValue168 = x3d.fieldValue()
fieldValue168.setName("name")
fieldValue168.setValue("r_calf")

ProtoInstance167.addFieldValue(fieldValue168)
fieldValue169 = x3d.fieldValue()
fieldValue169.setName("children")
Shape170 = x3d.Shape()
Appearance171 = x3d.Appearance()
Material172 = x3d.Material()
Material172.setUSE("Pants_Color")

Appearance171.setMaterial(Material172)

Shape170.setAppearance(Appearance171)
IndexedFaceSet173 = x3d.IndexedFaceSet()
IndexedFaceSet173.setCoordIndex([14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1])
IndexedFaceSet173.setCreaseAngle(1.57)
Coordinate174 = x3d.Coordinate()
Coordinate174.setPoint([-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375])

IndexedFaceSet173.setCoord(Coordinate174)

Shape170.setGeometry(IndexedFaceSet173)

fieldValue169.addChildren(Shape170)

ProtoInstance167.addFieldValue(fieldValue169)

fieldValue166.addChildren(ProtoInstance167)
ProtoInstance175 = x3d.ProtoInstance()
ProtoInstance175.setName("Joint")
ProtoInstance175.setDEF("hanim_r_ankle")
fieldValue176 = x3d.fieldValue()
fieldValue176.setName("name")
fieldValue176.setValue("r_ankle")

ProtoInstance175.addFieldValue(fieldValue176)
fieldValue177 = x3d.fieldValue()
fieldValue177.setName("center")
fieldValue177.setValue("-0.064 0.0753 -0.0412")

ProtoInstance175.addFieldValue(fieldValue177)
fieldValue178 = x3d.fieldValue()
fieldValue178.setName("children")
ProtoInstance179 = x3d.ProtoInstance()
ProtoInstance179.setName("Segment")
ProtoInstance179.setDEF("hanim_r_hindfoot")
fieldValue180 = x3d.fieldValue()
fieldValue180.setName("name")
fieldValue180.setValue("r_hindfoot")

ProtoInstance179.addFieldValue(fieldValue180)
fieldValue181 = x3d.fieldValue()
fieldValue181.setName("children")
Shape182 = x3d.Shape()
Appearance183 = x3d.Appearance()
Material184 = x3d.Material()
Material184.setUSE("Shoe_Color")

Appearance183.setMaterial(Material184)

Shape182.setAppearance(Appearance183)
IndexedFaceSet185 = x3d.IndexedFaceSet()
IndexedFaceSet185.setCoordIndex([6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1])
IndexedFaceSet185.setCreaseAngle(1.57)
Coordinate186 = x3d.Coordinate()
Coordinate186.setPoint([-0.0727,0,-0.0994,-0.1,0,-0.0594,-0.0701,0,0.146,-0.0468,0,0.153,-0.0215,0,0.146,-0.0433,0,-0.0534,-0.0529,0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0,0.125,-0.112,0,0.117,-0.0165,0,0.0777,-0.0393,0,-0.0129,-0.108,0,-0.00479,-0.0863,0,-0.0862])

IndexedFaceSet185.setCoord(Coordinate186)

Shape182.setGeometry(IndexedFaceSet185)

fieldValue181.addChildren(Shape182)
Transform187 = x3d.Transform()
Transform187.setScale([0.015,0.015,0.015])
Transform188 = x3d.Transform()
Transform188.setRotation([0,0,1,1.57])
Transform188.setTranslation([-5,-0.5,-7.5])
Shape189 = x3d.Shape()
Appearance190 = x3d.Appearance()
Material191 = x3d.Material()
Material191.setDiffuseColor([0.753,1,0.243])

Appearance190.setMaterial(Material191)

Shape189.setAppearance(Appearance190)
Extrusion192 = x3d.Extrusion()
Extrusion192.setDEF("Finr")
Extrusion192.setCcw(False)
Extrusion192.setCreaseAngle(3.14)
Extrusion192.setCrossSection([-1,0,-0.8,2,-0.7,3,0,5.2,0.7,3,0.8,2,1,0,0.8,-2,0.7,-3,0,-5.2,-0.7,-3,-0.8,-2,-1,0])
Extrusion192.setScale([0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35])
Extrusion192.setSpine([0,0,1,0,0,5,0,0,8,0,0,12,0,0,15,0.5,0,18,1.5,0,25,2.5,0,30,4,0,34])

Shape189.setGeometry(Extrusion192)

Transform188.addChildren(Shape189)

Transform187.addChildren(Transform188)

fieldValue181.addChildren(Transform187)

ProtoInstance179.addFieldValue(fieldValue181)

fieldValue178.addChildren(ProtoInstance179)

ProtoInstance175.addFieldValue(fieldValue178)

fieldValue166.addChildren(ProtoInstance175)

ProtoInstance163.addFieldValue(fieldValue166)

fieldValue154.addChildren(ProtoInstance163)

ProtoInstance151.addFieldValue(fieldValue154)

fieldValue100.addChildren(ProtoInstance151)

ProtoInstance97.addFieldValue(fieldValue100)

fieldValue96.addChildren(ProtoInstance97)
#Fins animation
ProximitySensor193 = x3d.ProximitySensor()
ProximitySensor193.setDEF("FinTriggerProximitySensor")
ProximitySensor193.setSize([5,5,5])

fieldValue96.addChildren(ProximitySensor193)
TimeSensor194 = x3d.TimeSensor()
TimeSensor194.setDEF("FinClock")
TimeSensor194.setCycleInterval(7)
TimeSensor194.setLoop(True)

fieldValue96.addChildren(TimeSensor194)
Group195 = x3d.Group()
Script196 = x3d.Script()
Script196.setDEF("FinScript")
field197 = x3d.field()
field197.setName("keyValueR")
field197.setAccessType("outputOnly")
field197.setType("MFVec3f")

Script196.addField(field197)
field198 = x3d.field()
field198.setName("keyValueL")
field198.setAccessType("outputOnly")
field198.setType("MFVec3f")

Script196.addField(field198)
field199 = x3d.field()
field199.setName("set_fraction")
field199.setAccessType("inputOnly")
field199.setType("SFFloat")

Script196.addField(field199)
field200 = x3d.field()
field200.setName("finL")
field200.setAccessType("inputOnly")
field200.setType("SFBool")

Script196.addField(field200)
field201 = x3d.field()
field201.setName("finR")
field201.setAccessType("inputOnly")
field201.setType("SFBool")

Script196.addField(field201)
field202 = x3d.field()
field202.setName("traceEnabled")
field202.setAccessType("initializeOnly")
field202.setType("SFBool")
field202.setValue("true")

Script196.addField(field202)

Script196.setSourceCode('''ecmascript:\n"+
"\n"+
"var finWarpL;\n"+
"var finWarpR;\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	finWarpL = 0;\n"+
"	finWarpR = 0;\n"+
"}\n"+
"\n"+
"function finL(value, timeStamp)\n"+
"{\n"+
"	if (value == 0)\n"+
"	{\n"+
"		finWarpL = 0;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		finWarpL = 1;\n"+
"	}\n"+
"	//print ('finWarpL' + finWarpL);\n"+
"}			 \n"+
"\n"+
"function finR(value, timeStamp)\n"+
"{\n"+
"	if (value == 0)\n"+
"	{\n"+
"		finWarpR = 0;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		finWarpR = 1;\n"+
"	}\n"+
"	//print ('finWarpR' + finWarpR);\n"+
"}\n"+
"function finMove(fraction, timeStamp)\n"+
" {  	\n"+
"	if (finWarpL == 1)\n"+
"	{\n"+
"		// level 3 (warp outside) Left					\n"+
"		kVL7 = new SFVec3f(1.25, 0, 25);  \n"+
"     		kVL8 = new SFVec3f(2.5, 0, 30);\n"+
"      		kVL9 = new SFVec3f(3.25, 0, 34);			\n"+
"	}	\n"+
"	else \n"+
"	{		\n"+
"		// level -2 (warp inside) Left					\n"+
"		kVL7 = new SFVec3f(-1.25, 0, 25);  \n"+
"     		kVL8 = new SFVec3f(-2.5, 0, 30);\n"+
"      		kVL9 = new SFVec3f(-3.25, 0, 34);	\n"+
"	}\n"+
"\n"+
"	if (finWarpR == 0)\n"+
"	{		\n"+
"		// level  1 (warp outside ) Right    			\n"+
"		kVR7 = new SFVec3f(1.25, 0, 25);  \n"+
"     		kVR8 = new SFVec3f(2.5, 0, 30);\n"+
"      		kVR9 = new SFVec3f(3.25, 0, 34);	  	\n"+
"	\n"+
"	}	\n"+
"	else \n"+
"	{		\n"+
"		// level  -2 ( warp inside) Right      				\n"+
"		kVR7 = new SFVec3f(-1.25, 0, 25);  \n"+
"     		kVR8 = new SFVec3f(-2.5, 0, 30);\n"+
"      		kVR9 = new SFVec3f(-3.25, 0, 34);\n"+
"	}\n"+
"\n"+
"	// Left Fin (fixed spine)\n"+
"	kVL1 = new SFVec3f(0, 0, 1);  \n"+
"     	kVL2 = new SFVec3f(0, 0, 5);\n"+
"      	kVL3 = new SFVec3f(0, 0, 8);\n"+
"	kVL4 = new SFVec3f(0, 0, 12); \n"+
"	kVL5 = new SFVec3f(0, 0, 15); 	\n"+
"	kVL6 = new SFVec3f(0, 0, 18);			\n"+
"      	keyValueL = new MFVec3f(kVL1, kVL2, kVL3, kVL4, kVL5, kVL6, kVL7, kVL8, kVL9);  \n"+
"	\n"+
"	// Right Fin (fixed spine)\n"+
"	kVR1 = new SFVec3f(0, 0, 1);  \n"+
"     	kVR2 = new SFVec3f(0, 0, 5);\n"+
"      	kVR3 = new SFVec3f(0, 0, 8);\n"+
"	kVR4 = new SFVec3f(0, 0, 12);  	\n"+
"	kVR5 = new SFVec3f(0, 0, 15);\n"+
"	kVR6 = new SFVec3f(0, 0, 18);			\n"+
"      	keyValueR = new MFVec3f(kVR1, kVR2, kVR3, kVR4, kVR5, kVR6, kVR7, kVR8, kVR9);  \n"+
"      	\n"+
"	//tracePrint ('[keyValueL = ]' + keyValueL);     \n"+
"	//tracePrint ('[keyValueR = ]' + keyValueR);     \n"+
"			\n"+
"}\n"+
"\n"+
"function set_fraction (value, timeStamp)\n"+
"{\n"+
"	finMove(value);\n"+
"	//tracePrint('time fraction =' + value);\n"+
"	\n"+
"}\n"+
"\n"+
"function tracePrint (outputString)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[Fin Move]' + outputString);\n"+
"}''')

Group195.addChildren(Script196)
ROUTE203 = x3d.ROUTE()
ROUTE203.setFromField("isActive")
ROUTE203.setFromNode("FinTriggerProximitySensor")
ROUTE203.setToField("enabled")
ROUTE203.setToNode("FinClock")

Group195.addChildren(ROUTE203)
ROUTE204 = x3d.ROUTE()
ROUTE204.setFromField("fraction_changed")
ROUTE204.setFromNode("FinClock")
ROUTE204.setToField("set_fraction")
ROUTE204.setToNode("FinScript")

Group195.addChildren(ROUTE204)
ROUTE205 = x3d.ROUTE()
ROUTE205.setFromField("keyValueR")
ROUTE205.setFromNode("FinScript")
ROUTE205.setToField("set_spine")
ROUTE205.setToNode("Finr")

Group195.addChildren(ROUTE205)
ROUTE206 = x3d.ROUTE()
ROUTE206.setFromField("keyValueL")
ROUTE206.setFromNode("FinScript")
ROUTE206.setToField("set_spine")
ROUTE206.setToNode("Finl")

Group195.addChildren(ROUTE206)

fieldValue96.addChildren(Group195)
ProtoInstance207 = x3d.ProtoInstance()
ProtoInstance207.setName("Joint")
ProtoInstance207.setDEF("hanim_vl1")
fieldValue208 = x3d.fieldValue()
fieldValue208.setName("name")
fieldValue208.setValue("vl1")

ProtoInstance207.addFieldValue(fieldValue208)
fieldValue209 = x3d.fieldValue()
fieldValue209.setName("center")
fieldValue209.setValue("-0.00405 1.07 -0.0275")

ProtoInstance207.addFieldValue(fieldValue209)
fieldValue210 = x3d.fieldValue()
fieldValue210.setName("children")
ProtoInstance211 = x3d.ProtoInstance()
ProtoInstance211.setName("Segment")
ProtoInstance211.setDEF("hanim_c7")
fieldValue212 = x3d.fieldValue()
fieldValue212.setName("name")
fieldValue212.setValue("l1")

ProtoInstance211.addFieldValue(fieldValue212)
fieldValue213 = x3d.fieldValue()
fieldValue213.setName("children")
Transform214 = x3d.Transform()
Transform214.setScale([1.05,1.05,1.05])
Transform214.setTranslation([0,-0.09,0])
Shape215 = x3d.Shape()
Appearance216 = x3d.Appearance()
Material217 = x3d.Material()
Material217.setDEF("WetShirtColor")
Material217.setAmbientIntensity(0.25)
Material217.setDiffuseColor([0,0,0.502])

Appearance216.setMaterial(Material217)
ImageTexture218 = x3d.ImageTexture()
ImageTexture218.setDEF("small_logo_Tex")
ImageTexture218.setUrl(["small_logo.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/small_logo.gif"])

Appearance216.setTexture(ImageTexture218)

Shape215.setAppearance(Appearance216)
IndexedFaceSet219 = x3d.IndexedFaceSet()
IndexedFaceSet219.setCoordIndex([0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1])
IndexedFaceSet219.setCreaseAngle(1.59)
Coordinate220 = x3d.Coordinate()
Coordinate220.setPoint([0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168])

IndexedFaceSet219.setCoord(Coordinate220)
TextureCoordinate221 = x3d.TextureCoordinate()
TextureCoordinate221.setPoint([0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0])

IndexedFaceSet219.setTexCoord(TextureCoordinate221)

Shape215.setGeometry(IndexedFaceSet219)

Transform214.addChildren(Shape215)

fieldValue213.addChildren(Transform214)
#<Transform DEF='Imaf3D'> <Shape> <Appearance> <Material/> <ImageTexture/> </Appearance> <IndexedFaceSet> <Coordinate/> <TextureCoordinate/> </IndexedFaceSet> </Shape> </Transform>
Transform222 = x3d.Transform()
Transform222.setScale([1.25,1.1,1.3])
Transform222.setTranslation([0,1.18,0.015])
Group223 = x3d.Group()
Transform224 = x3d.Transform()
Transform224.setTranslation([0,-1.2,0])
Shape225 = x3d.Shape()
Appearance226 = x3d.Appearance()
Material227 = x3d.Material()
Material227.setDEF("BCLColor")
Material227.setAmbientIntensity(0.25)
Material227.setDiffuseColor([0.0588,0.0588,0.0588])
Material227.setShininess(0.5)

Appearance226.setMaterial(Material227)

Shape225.setAppearance(Appearance226)
IndexedFaceSet228 = x3d.IndexedFaceSet()
IndexedFaceSet228.setCoordIndex([4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,43,47,42,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,33,39,53,-1,49,54,47,-1,59,58,53,-1,53,39,59,-1,58,59,60,-1,54,49,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,73,76,82,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,113,110,108,-1,110,113,114,-1,119,108,109,-1,108,119,113,-1,120,113,119,-1,119,121,120,-1,117,124,125,-1,106,117,125,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,140,146,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,76,157,60,-1,76,73,158,157,-1,60,162,58,-1,162,60,157,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,98,117,106,-1])
IndexedFaceSet228.setCreaseAngle(1.59)
IndexedFaceSet228.setSolid(False)
Coordinate229 = x3d.Coordinate()
Coordinate229.setPoint([0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168])

IndexedFaceSet228.setCoord(Coordinate229)
TextureCoordinate230 = x3d.TextureCoordinate()
TextureCoordinate230.setPoint([0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0])

IndexedFaceSet228.setTexCoord(TextureCoordinate230)

Shape225.setGeometry(IndexedFaceSet228)

Transform224.addChildren(Shape225)

Group223.addChildren(Transform224)
Transform231 = x3d.Transform()
Transform231.setRotation([0,0,1,1.57])
Transform231.setScale([2,1.5,1.5])
Transform231.setTranslation([0.13,0.22,-0.1])
Transform232 = x3d.Transform()
Transform232.setRotation([1,0,0,1.4])
Shape233 = x3d.Shape()
Shape233.setDEF("BCLSnorkelPad")
Appearance234 = x3d.Appearance()
Material235 = x3d.Material()
Material235.setUSE("BCLColor")

Appearance234.setMaterial(Material235)

Shape233.setAppearance(Appearance234)
Extrusion236 = x3d.Extrusion()
Extrusion236.setCrossSection([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013])
Extrusion236.setSpine([-0.03,0.01,0,-0.005,0.04,0,0,0.06,0,-0.01,0.075,0])

Shape233.setGeometry(Extrusion236)

Transform232.addChildren(Shape233)

Transform231.addChildren(Transform232)

Group223.addChildren(Transform231)
Transform237 = x3d.Transform()
Transform237.setRotation([-1,0,0,0.8])
Transform237.setTranslation([0.07,0.08,0.125])
Shape238 = x3d.Shape()
Appearance239 = x3d.Appearance()
Material240 = x3d.Material()
Material240.setDEF("BCLSnorkel")
Material240.setDiffuseColor([0.25,0.25,0.25])
Material240.setShininess(0.5)
Material240.setTransparency(0.1)

Appearance239.setMaterial(Material240)

Shape238.setAppearance(Appearance239)
Extrusion241 = x3d.Extrusion()
Extrusion241.setCrossSection([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013])
Extrusion241.setScale([0.8,0.8,1,1])
Extrusion241.setSpine([0.03,0.03,-0.05,0.05,0.2,0])

Shape238.setGeometry(Extrusion241)

Transform237.addChildren(Shape238)

Group223.addChildren(Transform237)
Group242 = x3d.Group()
Group242.setDEF("buckle")
Transform243 = x3d.Transform()
Transform243.setRotation([-1,0,0,0.68])
Transform243.setTranslation([-0.08,0.1,0.029])
Shape244 = x3d.Shape()
Appearance245 = x3d.Appearance()
Appearance245.setDEF("buckleHolder")
Material246 = x3d.Material()
Material246.setDiffuseColor([0.25,0.25,0.25])

Appearance245.setMaterial(Material246)

Shape244.setAppearance(Appearance245)
Box247 = x3d.Box()
Box247.setSize([0.03,0.03,0.005])

Shape244.setGeometry(Box247)

Transform243.addChildren(Shape244)

Group242.addChildren(Transform243)
Transform248 = x3d.Transform()
Transform248.setRotation([-1,0,0,0.68])
Transform248.setTranslation([0.03,0.1,0.027])
Shape249 = x3d.Shape()
Appearance250 = x3d.Appearance()
Appearance250.setUSE("buckleHolder")

Shape249.setAppearance(Appearance250)
Box251 = x3d.Box()
Box251.setSize([0.15,0.03,0.001])

Shape249.setGeometry(Box251)

Transform248.addChildren(Shape249)

Group242.addChildren(Transform248)
Transform252 = x3d.Transform()
Transform252.setRotation([-1,0,0,0.68])
Transform252.setTranslation([-0.045,0.1,0.028])
Shape253 = x3d.Shape()
Appearance254 = x3d.Appearance()
Appearance254.setDEF("pin")
Material255 = x3d.Material()

Appearance254.setMaterial(Material255)

Shape253.setAppearance(Appearance254)
Box256 = x3d.Box()
Box256.setSize([0.02,0.028,0.005])

Shape253.setGeometry(Box256)

Transform252.addChildren(Shape253)

Group242.addChildren(Transform252)
Transform257 = x3d.Transform()
Transform257.setRotation([0,0,1,1.57])
Transform257.setTranslation([-0.06,0.1,0.029])
Shape258 = x3d.Shape()
Appearance259 = x3d.Appearance()
Appearance259.setUSE("pin")

Shape258.setAppearance(Appearance259)
Cylinder260 = x3d.Cylinder()
Cylinder260.setHeight(0.02)
Cylinder260.setRadius(0.0024)

Shape258.setGeometry(Cylinder260)

Transform257.addChildren(Shape258)

Group242.addChildren(Transform257)
Transform261 = x3d.Transform()
Transform261.setRotation([0,0,1,1.57])
Transform261.setTranslation([-0.06,0.109,0.0217])
Shape262 = x3d.Shape()
Appearance263 = x3d.Appearance()
Appearance263.setUSE("pin")

Shape262.setAppearance(Appearance263)
Cylinder264 = x3d.Cylinder()
Cylinder264.setHeight(0.02)
Cylinder264.setRadius(0.0024)

Shape262.setGeometry(Cylinder264)

Transform261.addChildren(Shape262)

Group242.addChildren(Transform261)
Transform265 = x3d.Transform()
Transform265.setRotation([0,0,1,1.57])
Transform265.setTranslation([-0.06,0.091,0.036])
Shape266 = x3d.Shape()
Appearance267 = x3d.Appearance()
Appearance267.setUSE("pin")

Shape266.setAppearance(Appearance267)
Cylinder268 = x3d.Cylinder()
Cylinder268.setHeight(0.02)
Cylinder268.setRadius(0.0024)

Shape266.setGeometry(Cylinder268)

Transform265.addChildren(Shape266)

Group242.addChildren(Transform265)

Group223.addChildren(Group242)
Group269 = x3d.Group()
Group269.setDEF("buckleBelt")
Transform270 = x3d.Transform()
Transform270.setRotation([0,1,0,-0.68])
Transform270.setTranslation([-0.07,-0.12,0.038])
Shape271 = x3d.Shape()
Appearance272 = x3d.Appearance()
Appearance272.setUSE("buckleHolder")

Shape271.setAppearance(Appearance272)
Box273 = x3d.Box()
Box273.setSize([0.04,0.1,0.005])

Shape271.setGeometry(Box273)

Transform270.addChildren(Shape271)

Group269.addChildren(Transform270)
Transform274 = x3d.Transform()
Transform274.setTranslation([0.005,-0.12,0.053])
Shape275 = x3d.Shape()
Appearance276 = x3d.Appearance()
Appearance276.setUSE("buckleHolder")

Shape275.setAppearance(Appearance276)
Box277 = x3d.Box()
Box277.setSize([0.12,0.11,0.001])

Shape275.setGeometry(Box277)

Transform274.addChildren(Shape275)

Group269.addChildren(Transform274)
Transform278 = x3d.Transform()
Transform278.setRotation([0,1,0,0.68])
Transform278.setTranslation([0.075,-0.12,0.038])
Shape279 = x3d.Shape()
Appearance280 = x3d.Appearance()
Appearance280.setUSE("buckleHolder")

Shape279.setAppearance(Appearance280)
Box281 = x3d.Box()
Box281.setSize([0.04,0.1,0.005])

Shape279.setGeometry(Box281)

Transform278.addChildren(Shape279)

Group269.addChildren(Transform278)

Group223.addChildren(Group269)

Transform222.addChildren(Group223)

fieldValue213.addChildren(Transform222)
Transform282 = x3d.Transform()
Transform282.setDEF("ScubaTank")
Transform282.setRotation([0,1,0,3.14])
Transform282.setScale([0.8,0.8,0.8])
Transform282.setTranslation([0,1.1,-0.23])
Transform283 = x3d.Transform()
Shape284 = x3d.Shape()
Appearance285 = x3d.Appearance()
Material286 = x3d.Material()
Material286.setDEF("tank")
Material286.setAmbientIntensity(0.3)
Material286.setDiffuseColor([0.3,0.3,0.5])
Material286.setShininess(0.1)
Material286.setSpecularColor([0.7,0.7,0.8])

Appearance285.setMaterial(Material286)

Shape284.setAppearance(Appearance285)
Cylinder287 = x3d.Cylinder()
Cylinder287.setHeight(0.7)
Cylinder287.setRadius(0.1)

Shape284.setGeometry(Cylinder287)

Transform283.addChildren(Shape284)

Transform282.addChildren(Transform283)
Transform288 = x3d.Transform()
Transform288.setTranslation([0,0.35,0])
Shape289 = x3d.Shape()
Appearance290 = x3d.Appearance()
Material291 = x3d.Material()
Material291.setUSE("tank")

Appearance290.setMaterial(Material291)

Shape289.setAppearance(Appearance290)
Sphere292 = x3d.Sphere()
Sphere292.setRadius(0.098)

Shape289.setGeometry(Sphere292)

Transform288.addChildren(Shape289)

Transform282.addChildren(Transform288)
Transform293 = x3d.Transform()
Transform293.setTranslation([0,-0.35,0])
Shape294 = x3d.Shape()
Shape294.setDEF("tankBottom")
Appearance295 = x3d.Appearance()
Material296 = x3d.Material()
Material296.setAmbientIntensity(0.3)
Material296.setDiffuseColor([0,0,0])

Appearance295.setMaterial(Material296)

Shape294.setAppearance(Appearance295)
Cylinder297 = x3d.Cylinder()
Cylinder297.setHeight(0.06)
Cylinder297.setRadius(0.101)

Shape294.setGeometry(Cylinder297)

Transform293.addChildren(Shape294)

Transform282.addChildren(Transform293)
Group298 = x3d.Group()
Group298.setDEF("tankNozzle")
Transform299 = x3d.Transform()
Transform300 = x3d.Transform()
Transform300.setTranslation([0,0.45,0])
Shape301 = x3d.Shape()
Shape301.setDEF("pressure")
Appearance302 = x3d.Appearance()
Material303 = x3d.Material()
Material303.setDEF("pressureColor")
Material303.setAmbientIntensity(0.4)
Material303.setDiffuseColor([0.91,0.91,0.91])
Material303.setShininess(0.16)
Material303.setSpecularColor([0.91,0.9,0.91])

Appearance302.setMaterial(Material303)

Shape301.setAppearance(Appearance302)
Cylinder304 = x3d.Cylinder()
Cylinder304.setHeight(0.1)
Cylinder304.setRadius(0.015)

Shape301.setGeometry(Cylinder304)

Transform300.addChildren(Shape301)

Transform299.addChildren(Transform300)
Transform305 = x3d.Transform()
Transform305.setTranslation([0,0.5,0])
Shape306 = x3d.Shape()
Shape306.setDEF("pressureTop")
Appearance307 = x3d.Appearance()
Material308 = x3d.Material()
Material308.setDEF("top")
Material308.setDiffuseColor([0,0,0])

Appearance307.setMaterial(Material308)

Shape306.setAppearance(Appearance307)
Cylinder309 = x3d.Cylinder()
Cylinder309.setHeight(0.02)
Cylinder309.setRadius(0.025)

Shape306.setGeometry(Cylinder309)

Transform305.addChildren(Shape306)

Transform299.addChildren(Transform305)
Transform310 = x3d.Transform()
Transform310.setRotation([0,0,1,1.57])
Transform310.setTranslation([-0.028,0.462,0])
Transform311 = x3d.Transform()
Shape312 = x3d.Shape()
Shape312.setDEF("connectorToRegulator")
Appearance313 = x3d.Appearance()
Material314 = x3d.Material()
Material314.setUSE("pressureColor")

Appearance313.setMaterial(Material314)

Shape312.setAppearance(Appearance313)
Cylinder315 = x3d.Cylinder()
Cylinder315.setHeight(0.03)
Cylinder315.setRadius(0.01)

Shape312.setGeometry(Cylinder315)

Transform311.addChildren(Shape312)

Transform310.addChildren(Transform311)
Transform316 = x3d.Transform()
Transform316.setTranslation([0,0.02,0])
Shape317 = x3d.Shape()
Shape317.setDEF("connectorToRegulatorTop")
Appearance318 = x3d.Appearance()
Material319 = x3d.Material()
Material319.setUSE("top")

Appearance318.setMaterial(Material319)

Shape317.setAppearance(Appearance318)
Cylinder320 = x3d.Cylinder()
Cylinder320.setHeight(0.02)
Cylinder320.setRadius(0.02)

Shape317.setGeometry(Cylinder320)

Transform316.addChildren(Shape317)

Transform310.addChildren(Transform316)

Transform299.addChildren(Transform310)

Group298.addChildren(Transform299)

Transform282.addChildren(Group298)
Transform321 = x3d.Transform()
Transform321.setTranslation([0,0.2,0])
Shape322 = x3d.Shape()
Shape322.setDEF("tankHoldBelt")
Appearance323 = x3d.Appearance()
Material324 = x3d.Material()
Material324.setAmbientIntensity(0.3)
Material324.setDiffuseColor([0,0,0])

Appearance323.setMaterial(Material324)

Shape322.setAppearance(Appearance323)
Cylinder325 = x3d.Cylinder()
Cylinder325.setHeight(0.1)
Cylinder325.setRadius(0.115)

Shape322.setGeometry(Cylinder325)

Transform321.addChildren(Shape322)

Transform282.addChildren(Transform321)

fieldValue213.addChildren(Transform282)

ProtoInstance211.addFieldValue(fieldValue213)

fieldValue210.addChildren(ProtoInstance211)
ProtoInstance326 = x3d.ProtoInstance()
ProtoInstance326.setName("Joint")
ProtoInstance326.setDEF("hanim_l_shoulder")
fieldValue327 = x3d.fieldValue()
fieldValue327.setName("name")
fieldValue327.setValue("l_shoulder")

ProtoInstance326.addFieldValue(fieldValue327)
fieldValue328 = x3d.fieldValue()
fieldValue328.setName("center")
fieldValue328.setValue("0.167 1.36 -0.0518")

ProtoInstance326.addFieldValue(fieldValue328)
fieldValue329 = x3d.fieldValue()
fieldValue329.setName("children")
ProtoInstance330 = x3d.ProtoInstance()
ProtoInstance330.setName("Segment")
ProtoInstance330.setDEF("hanim_l_upperarm")
fieldValue331 = x3d.fieldValue()
fieldValue331.setName("name")
fieldValue331.setValue("l_upperarm")

ProtoInstance330.addFieldValue(fieldValue331)
fieldValue332 = x3d.fieldValue()
fieldValue332.setName("children")
Transform333 = x3d.Transform()
Transform333.setDEF("l_upperarm_adjust")
Transform333.setCenter([0.182,1.22,-0.047])
Transform333.setRotation([1,0,0,0.119])
Transform333.setTranslation([0,0.0004203,-0.01665])
Shape334 = x3d.Shape()
Appearance335 = x3d.Appearance()
Material336 = x3d.Material()
Material336.setUSE("WetShirtColor")

Appearance335.setMaterial(Material336)

Shape334.setAppearance(Appearance335)
IndexedFaceSet337 = x3d.IndexedFaceSet()
IndexedFaceSet337.setCoordIndex([2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1])
IndexedFaceSet337.setCreaseAngle(1.65)
Coordinate338 = x3d.Coordinate()
Coordinate338.setPoint([0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352])

IndexedFaceSet337.setCoord(Coordinate338)

Shape334.setGeometry(IndexedFaceSet337)

Transform333.addChildren(Shape334)

fieldValue332.addChildren(Transform333)

ProtoInstance330.addFieldValue(fieldValue332)

fieldValue329.addChildren(ProtoInstance330)
ProtoInstance339 = x3d.ProtoInstance()
ProtoInstance339.setName("Joint")
ProtoInstance339.setDEF("hanim_l_elbow")
fieldValue340 = x3d.fieldValue()
fieldValue340.setName("name")
fieldValue340.setValue("l_elbow")

ProtoInstance339.addFieldValue(fieldValue340)
fieldValue341 = x3d.fieldValue()
fieldValue341.setName("center")
fieldValue341.setValue("0.196 1.07 -0.0518")

ProtoInstance339.addFieldValue(fieldValue341)
fieldValue342 = x3d.fieldValue()
fieldValue342.setName("children")
ProtoInstance343 = x3d.ProtoInstance()
ProtoInstance343.setName("Segment")
ProtoInstance343.setDEF("hanim_l_forearm")
fieldValue344 = x3d.fieldValue()
fieldValue344.setName("name")
fieldValue344.setValue("l_forearm")

ProtoInstance343.addFieldValue(fieldValue344)
fieldValue345 = x3d.fieldValue()
fieldValue345.setName("children")
Transform346 = x3d.Transform()
Transform346.setDEF("l_forearm_adjust")
Transform346.setCenter([0.198,0.961,-0.0405])
Transform346.setRotation([-1,0,0,0.1])
Transform346.setTranslation([0,0.003724,-0.0236])
Shape347 = x3d.Shape()
Appearance348 = x3d.Appearance()
Material349 = x3d.Material()
Material349.setUSE("WetShirtColor")

Appearance348.setMaterial(Material349)

Shape347.setAppearance(Appearance348)
IndexedFaceSet350 = x3d.IndexedFaceSet()
IndexedFaceSet350.setCoordIndex([2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1])
IndexedFaceSet350.setCreaseAngle(1.75)
Coordinate351 = x3d.Coordinate()
Coordinate351.setPoint([0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609])

IndexedFaceSet350.setCoord(Coordinate351)

Shape347.setGeometry(IndexedFaceSet350)

Transform346.addChildren(Shape347)

fieldValue345.addChildren(Transform346)

ProtoInstance343.addFieldValue(fieldValue345)

fieldValue342.addChildren(ProtoInstance343)
ProtoInstance352 = x3d.ProtoInstance()
ProtoInstance352.setName("Joint")
ProtoInstance352.setDEF("hanim_l_wrist")
fieldValue353 = x3d.fieldValue()
fieldValue353.setName("name")
fieldValue353.setValue("l_wrist")

ProtoInstance352.addFieldValue(fieldValue353)
fieldValue354 = x3d.fieldValue()
fieldValue354.setName("center")
fieldValue354.setValue("0.213 0.811 -0.0338")

ProtoInstance352.addFieldValue(fieldValue354)
fieldValue355 = x3d.fieldValue()
fieldValue355.setName("children")
ProtoInstance356 = x3d.ProtoInstance()
ProtoInstance356.setName("Segment")
ProtoInstance356.setDEF("hanim_l_hand")
fieldValue357 = x3d.fieldValue()
fieldValue357.setName("name")
fieldValue357.setValue("l_hand")

ProtoInstance356.addFieldValue(fieldValue357)
fieldValue358 = x3d.fieldValue()
fieldValue358.setName("children")
Transform359 = x3d.Transform()
Transform359.setDEF("l_hand_adjust")
Transform359.setCenter([0.213,0.811,-0.0338])
Transform359.setRotation([-0.06361,-0.9967,0.04988,1.333])
Transform359.setTranslation([0,0.005142,-0.008662])
Shape360 = x3d.Shape()
Appearance361 = x3d.Appearance()
Material362 = x3d.Material()
Material362.setDEF("Skin_Color")
Material362.setAmbientIntensity(0.25)
Material362.setDiffuseColor([0.749,0.601,0.462])

Appearance361.setMaterial(Material362)

Shape360.setAppearance(Appearance361)
IndexedFaceSet363 = x3d.IndexedFaceSet()
IndexedFaceSet363.setCoordIndex([2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1])
IndexedFaceSet363.setCreaseAngle(1.48)
Coordinate364 = x3d.Coordinate()
Coordinate364.setPoint([0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453])

IndexedFaceSet363.setCoord(Coordinate364)

Shape360.setGeometry(IndexedFaceSet363)

Transform359.addChildren(Shape360)

fieldValue358.addChildren(Transform359)

ProtoInstance356.addFieldValue(fieldValue358)

fieldValue355.addChildren(ProtoInstance356)

ProtoInstance352.addFieldValue(fieldValue355)

fieldValue342.addChildren(ProtoInstance352)

ProtoInstance339.addFieldValue(fieldValue342)

fieldValue329.addChildren(ProtoInstance339)

ProtoInstance326.addFieldValue(fieldValue329)

fieldValue210.addChildren(ProtoInstance326)
ProtoInstance365 = x3d.ProtoInstance()
ProtoInstance365.setName("Joint")
ProtoInstance365.setDEF("hanim_r_shoulder")
fieldValue366 = x3d.fieldValue()
fieldValue366.setName("name")
fieldValue366.setValue("r_shoulder")

ProtoInstance365.addFieldValue(fieldValue366)
fieldValue367 = x3d.fieldValue()
fieldValue367.setName("center")
fieldValue367.setValue("-0.167 1.36 -0.0458")

ProtoInstance365.addFieldValue(fieldValue367)
fieldValue368 = x3d.fieldValue()
fieldValue368.setName("children")
ProtoInstance369 = x3d.ProtoInstance()
ProtoInstance369.setName("Segment")
ProtoInstance369.setDEF("hanim_r_upperarm")
fieldValue370 = x3d.fieldValue()
fieldValue370.setName("name")
fieldValue370.setValue("r_upperarm")

ProtoInstance369.addFieldValue(fieldValue370)
fieldValue371 = x3d.fieldValue()
fieldValue371.setName("children")
Transform372 = x3d.Transform()
Transform372.setDEF("r_upperarm_adjust")
Transform372.setCenter([-0.182,1.22,-0.047])
Transform372.setRotation([1,0,0,0.0836])
Transform372.setTranslation([0,0.000589,-0.01169])
Shape373 = x3d.Shape()
Appearance374 = x3d.Appearance()
Material375 = x3d.Material()
Material375.setUSE("WetShirtColor")

Appearance374.setMaterial(Material375)

Shape373.setAppearance(Appearance374)
IndexedFaceSet376 = x3d.IndexedFaceSet()
IndexedFaceSet376.setCoordIndex([14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1])
IndexedFaceSet376.setCreaseAngle(1.53)
Coordinate377 = x3d.Coordinate()
Coordinate377.setPoint([-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421])

IndexedFaceSet376.setCoord(Coordinate377)

Shape373.setGeometry(IndexedFaceSet376)

Transform372.addChildren(Shape373)

fieldValue371.addChildren(Transform372)

ProtoInstance369.addFieldValue(fieldValue371)

fieldValue368.addChildren(ProtoInstance369)
ProtoInstance378 = x3d.ProtoInstance()
ProtoInstance378.setName("Joint")
ProtoInstance378.setDEF("hanim_r_elbow")
fieldValue379 = x3d.fieldValue()
fieldValue379.setName("name")
fieldValue379.setValue("r_elbow")

ProtoInstance378.addFieldValue(fieldValue379)
fieldValue380 = x3d.fieldValue()
fieldValue380.setName("center")
fieldValue380.setValue("-0.192 1.07 -0.0498")

ProtoInstance378.addFieldValue(fieldValue380)
fieldValue381 = x3d.fieldValue()
fieldValue381.setName("children")
ProtoInstance382 = x3d.ProtoInstance()
ProtoInstance382.setName("Segment")
ProtoInstance382.setDEF("hanim_r_forearm")
fieldValue383 = x3d.fieldValue()
fieldValue383.setName("name")
fieldValue383.setValue("r_forearm")

ProtoInstance382.addFieldValue(fieldValue383)
fieldValue384 = x3d.fieldValue()
fieldValue384.setName("children")
Transform385 = x3d.Transform()
Transform385.setDEF("r_forearm_adjust")
Transform385.setCenter([-0.198,0.961,-0.0397])
Transform385.setRotation([-1,0,0,0.1254])
Transform385.setTranslation([0,0.003466,-0.01065])
Shape386 = x3d.Shape()
Appearance387 = x3d.Appearance()
Material388 = x3d.Material()
Material388.setUSE("WetShirtColor")

Appearance387.setMaterial(Material388)

Shape386.setAppearance(Appearance387)
IndexedFaceSet389 = x3d.IndexedFaceSet()
IndexedFaceSet389.setCoordIndex([20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1])
IndexedFaceSet389.setCreaseAngle(1.73)
Coordinate390 = x3d.Coordinate()
Coordinate390.setPoint([-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1,-0.0405,-0.16,1.06,-0.0373])

IndexedFaceSet389.setCoord(Coordinate390)

Shape386.setGeometry(IndexedFaceSet389)

Transform385.addChildren(Shape386)

fieldValue384.addChildren(Transform385)

ProtoInstance382.addFieldValue(fieldValue384)

fieldValue381.addChildren(ProtoInstance382)
ProtoInstance391 = x3d.ProtoInstance()
ProtoInstance391.setName("Joint")
ProtoInstance391.setDEF("hanim_r_wrist")
fieldValue392 = x3d.fieldValue()
fieldValue392.setName("name")
fieldValue392.setValue("r_wrist")

ProtoInstance391.addFieldValue(fieldValue392)
fieldValue393 = x3d.fieldValue()
fieldValue393.setName("center")
fieldValue393.setValue("-0.217 0.811 -0.0338")

ProtoInstance391.addFieldValue(fieldValue393)
fieldValue394 = x3d.fieldValue()
fieldValue394.setName("children")
ProtoInstance395 = x3d.ProtoInstance()
ProtoInstance395.setName("Segment")
ProtoInstance395.setDEF("hanim_r_hand")
fieldValue396 = x3d.fieldValue()
fieldValue396.setName("name")
fieldValue396.setValue("r_hand")

ProtoInstance395.addFieldValue(fieldValue396)
fieldValue397 = x3d.fieldValue()
fieldValue397.setName("children")
Transform398 = x3d.Transform()
Transform398.setDEF("r_hand_adjust")
Transform398.setCenter([-0.217,0.811,-0.0338])
Transform398.setRotation([-0.09024,0.994,-0.0624,1.216])
Shape399 = x3d.Shape()
Appearance400 = x3d.Appearance()
Material401 = x3d.Material()
Material401.setUSE("Skin_Color")

Appearance400.setMaterial(Material401)

Shape399.setAppearance(Appearance400)
IndexedFaceSet402 = x3d.IndexedFaceSet()
IndexedFaceSet402.setCoordIndex([10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1])
IndexedFaceSet402.setCreaseAngle(1.57)
Coordinate403 = x3d.Coordinate()
Coordinate403.setPoint([-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454])

IndexedFaceSet402.setCoord(Coordinate403)

Shape399.setGeometry(IndexedFaceSet402)

Transform398.addChildren(Shape399)

fieldValue397.addChildren(Transform398)

ProtoInstance395.addFieldValue(fieldValue397)

fieldValue394.addChildren(ProtoInstance395)

ProtoInstance391.addFieldValue(fieldValue394)

fieldValue381.addChildren(ProtoInstance391)

ProtoInstance378.addFieldValue(fieldValue381)

fieldValue368.addChildren(ProtoInstance378)

ProtoInstance365.addFieldValue(fieldValue368)

fieldValue210.addChildren(ProtoInstance365)
ProtoInstance404 = x3d.ProtoInstance()
ProtoInstance404.setName("Joint")
ProtoInstance404.setDEF("hanim_vc4")
fieldValue405 = x3d.fieldValue()
fieldValue405.setName("name")
fieldValue405.setValue("vc4")

ProtoInstance404.addFieldValue(fieldValue405)
fieldValue406 = x3d.fieldValue()
fieldValue406.setName("center")
fieldValue406.setValue("0 1.43 -0.0458")

ProtoInstance404.addFieldValue(fieldValue406)
fieldValue407 = x3d.fieldValue()
fieldValue407.setName("children")
ProtoInstance408 = x3d.ProtoInstance()
ProtoInstance408.setName("Segment")
ProtoInstance408.setDEF("hanim_c4")
fieldValue409 = x3d.fieldValue()
fieldValue409.setName("name")
fieldValue409.setValue("c4")

ProtoInstance408.addFieldValue(fieldValue409)
fieldValue410 = x3d.fieldValue()
fieldValue410.setName("children")
Shape411 = x3d.Shape()
Appearance412 = x3d.Appearance()
Material413 = x3d.Material()
Material413.setUSE("WetShirtColor")

Appearance412.setMaterial(Material413)

Shape411.setAppearance(Appearance412)
IndexedFaceSet414 = x3d.IndexedFaceSet()
IndexedFaceSet414.setDEF("neck")
IndexedFaceSet414.setCoordIndex([6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1])
IndexedFaceSet414.setCreaseAngle(1.91)
Coordinate415 = x3d.Coordinate()
Coordinate415.setPoint([0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1])

IndexedFaceSet414.setCoord(Coordinate415)

Shape411.setGeometry(IndexedFaceSet414)

fieldValue410.addChildren(Shape411)

ProtoInstance408.addFieldValue(fieldValue410)

fieldValue407.addChildren(ProtoInstance408)
ProtoInstance416 = x3d.ProtoInstance()
ProtoInstance416.setName("Joint")
ProtoInstance416.setDEF("hanim_skullbase")
fieldValue417 = x3d.fieldValue()
fieldValue417.setName("name")
fieldValue417.setValue("skullbase")

ProtoInstance416.addFieldValue(fieldValue417)
fieldValue418 = x3d.fieldValue()
fieldValue418.setName("center")
fieldValue418.setValue("0 1.54 -0.0409")

ProtoInstance416.addFieldValue(fieldValue418)
fieldValue419 = x3d.fieldValue()
fieldValue419.setName("children")
ProtoInstance420 = x3d.ProtoInstance()
ProtoInstance420.setName("Segment")
ProtoInstance420.setDEF("hanim_skull")
fieldValue421 = x3d.fieldValue()
fieldValue421.setName("name")
fieldValue421.setValue("skull")

ProtoInstance420.addFieldValue(fieldValue421)
fieldValue422 = x3d.fieldValue()
fieldValue422.setName("children")
Shape423 = x3d.Shape()
Appearance424 = x3d.Appearance()
Material425 = x3d.Material()
Material425.setUSE("Skin_Color")

Appearance424.setMaterial(Material425)

Shape423.setAppearance(Appearance424)
IndexedFaceSet426 = x3d.IndexedFaceSet()
IndexedFaceSet426.setDEF("headIFS")
IndexedFaceSet426.setColorIndex([1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1])
IndexedFaceSet426.setCoordIndex([48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1])
IndexedFaceSet426.setCreaseAngle(0.7854)
Coordinate427 = x3d.Coordinate()
Coordinate427.setDEF("Face")
Coordinate427.setPoint([0,1.708,-0.0435,0,1.655,0.04322,0,1.486,0.02335,0,1.694,0.007789,0,1.631,0.051,0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0,1.543,0.04432,0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0,1.69,-0.1047,0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0,1.53,0.04236,0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0,1.524,-0.102])

IndexedFaceSet426.setCoord(Coordinate427)
Color428 = x3d.Color()
Color428.setColor([0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902,0,0,0.502])

IndexedFaceSet426.setColor(Color428)

Shape423.setGeometry(IndexedFaceSet426)

fieldValue422.addChildren(Shape423)
Transform429 = x3d.Transform()
Transform429.setDEF("maskAndSnorkel")
Transform429.setTranslation([0,1.505,0.05])
Transform430 = x3d.Transform()
Shape431 = x3d.Shape()
Shape431.setDEF("maskFrame")
Appearance432 = x3d.Appearance()
Material433 = x3d.Material()
Material433.setDEF("frameColor")
Material433.setDiffuseColor([0,0,0])

Appearance432.setMaterial(Material433)

Shape431.setAppearance(Appearance432)
IndexedFaceSet434 = x3d.IndexedFaceSet()
IndexedFaceSet434.setCoordIndex([0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1])
IndexedFaceSet434.setCreaseAngle(1.45)
IndexedFaceSet434.setSolid(False)
Coordinate435 = x3d.Coordinate()
Coordinate435.setPoint([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0])

IndexedFaceSet434.setCoord(Coordinate435)

Shape431.setGeometry(IndexedFaceSet434)

Transform430.addChildren(Shape431)

Transform429.addChildren(Transform430)
Transform436 = x3d.Transform()
Transform436.setDEF("snorkelHoldRing")
Transform436.setTranslation([0.075,0.075,-0.02])
Shape437 = x3d.Shape()
Appearance438 = x3d.Appearance()
Material439 = x3d.Material()
Material439.setUSE("frameColor")

Appearance438.setMaterial(Material439)

Shape437.setAppearance(Appearance438)
Cylinder440 = x3d.Cylinder()
Cylinder440.setHeight(0.003)
Cylinder440.setRadius(0.015)

Shape437.setGeometry(Cylinder440)

Transform436.addChildren(Shape437)

Transform429.addChildren(Transform436)
Group441 = x3d.Group()
Group441.setDEF("snorkel")
Transform442 = x3d.Transform()
Transform442.setTranslation([0,-0.02,0])
Transform443 = x3d.Transform()
Transform443.setScale([0.9,0.9,0.9])
Transform443.setTranslation([0.035,-0.07,-0.02])
Shape444 = x3d.Shape()
Appearance445 = x3d.Appearance()
Material446 = x3d.Material()
Material446.setDEF("snorkelTube")
Material446.setDiffuseColor([0.678,1,0.184])
Material446.setTransparency(0.4)

Appearance445.setMaterial(Material446)

Shape444.setAppearance(Appearance445)
Extrusion447 = x3d.Extrusion()
Extrusion447.setCrossSection([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013])
Extrusion447.setSpine([-0.01,-0.04,0,0,0,0,0.03,0.05,0,0.05,0.2,0,0.03,0.4,0.03])

Shape444.setGeometry(Extrusion447)

Transform443.addChildren(Shape444)

Transform442.addChildren(Transform443)
Transform448 = x3d.Transform()
Transform448.setRotation([0,0,1,1.57])
Transform448.setScale([0.9,0.9,0.9])
Transform448.setTranslation([0.01,-0.04,-0.02])
Shape449 = x3d.Shape()
Appearance450 = x3d.Appearance()
Material451 = x3d.Material()
Material451.setDEF("Mouthpiece")
Material451.setDiffuseColor([0.678,1,0.8])
Material451.setTransparency(0.4)

Appearance450.setMaterial(Material451)

Shape449.setAppearance(Appearance450)
Extrusion452 = x3d.Extrusion()
Extrusion452.setCrossSection([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013])
Extrusion452.setSpine([-0.01,-0.03,0,0,0,0,0.02,0.01,0])

Shape449.setGeometry(Extrusion452)

Transform448.addChildren(Shape449)

Transform442.addChildren(Transform448)
Transform453 = x3d.Transform()
Transform453.setRotation([0,0,1,-0.85])
Transform453.setScale([0.9,0.9,0.9])
Transform453.setTranslation([0.005,-0.01,-0.02])
Shape454 = x3d.Shape()
Appearance455 = x3d.Appearance()
Material456 = x3d.Material()
Material456.setUSE("Mouthpiece")

Appearance455.setMaterial(Material456)

Shape454.setAppearance(Appearance455)
Extrusion457 = x3d.Extrusion()
Extrusion457.setCrossSection([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013])
Extrusion457.setSpine([-0.02,-0.03,0,-0.01,-0.03,0,0,-0.0175,0,0,-0.0135,0,-0.01,0,0,-0.02,0,0])

Shape454.setGeometry(Extrusion457)

Transform453.addChildren(Shape454)

Transform442.addChildren(Transform453)

Group441.addChildren(Transform442)

Transform429.addChildren(Group441)
Transform458 = x3d.Transform()
Shape459 = x3d.Shape()
Shape459.setDEF("maskLensR")
Appearance460 = x3d.Appearance()
Material461 = x3d.Material()
Material461.setDEF("plastic")
Material461.setDiffuseColor([0.941,0.973,1])
Material461.setTransparency(0.8)

Appearance460.setMaterial(Material461)

Shape459.setAppearance(Appearance460)
IndexedFaceSet462 = x3d.IndexedFaceSet()
IndexedFaceSet462.setCoordIndex([12,1314,15,16,17,18,12,-1])
IndexedFaceSet462.setCreaseAngle(1.45)
IndexedFaceSet462.setSolid(False)
Coordinate463 = x3d.Coordinate()
Coordinate463.setPoint([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0])

IndexedFaceSet462.setCoord(Coordinate463)

Shape459.setGeometry(IndexedFaceSet462)

Transform458.addChildren(Shape459)

Transform429.addChildren(Transform458)
Transform464 = x3d.Transform()
Shape465 = x3d.Shape()
Shape465.setDEF("maskLensL")
Appearance466 = x3d.Appearance()
Material467 = x3d.Material()
Material467.setUSE("plastic")

Appearance466.setMaterial(Material467)

Shape465.setAppearance(Appearance466)
IndexedFaceSet468 = x3d.IndexedFaceSet()
IndexedFaceSet468.setCoordIndex([19,20,21,22,23,24,25,19,-1])
IndexedFaceSet468.setCreaseAngle(1.45)
IndexedFaceSet468.setSolid(False)
Coordinate469 = x3d.Coordinate()
Coordinate469.setPoint([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0])

IndexedFaceSet468.setCoord(Coordinate469)

Shape465.setGeometry(IndexedFaceSet468)

Transform464.addChildren(Shape465)

Transform429.addChildren(Transform464)
Transform470 = x3d.Transform()
Shape471 = x3d.Shape()
Shape471.setDEF("nose")
Appearance472 = x3d.Appearance()
Material473 = x3d.Material()
Material473.setDEF("plasticFit")
Material473.setDiffuseColor([0.678,1,0.184])
Material473.setTransparency(0.7)

Appearance472.setMaterial(Material473)

Shape471.setAppearance(Appearance472)
IndexedFaceSet474 = x3d.IndexedFaceSet()
IndexedFaceSet474.setCoordIndex([0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1])
IndexedFaceSet474.setCreaseAngle(1.45)
IndexedFaceSet474.setSolid(False)
Coordinate475 = x3d.Coordinate()
Coordinate475.setPoint([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02])

IndexedFaceSet474.setCoord(Coordinate475)

Shape471.setGeometry(IndexedFaceSet474)

Transform470.addChildren(Shape471)

Transform429.addChildren(Transform470)
Transform476 = x3d.Transform()
Shape477 = x3d.Shape()
Shape477.setDEF("faceFit")
Appearance478 = x3d.Appearance()
Material479 = x3d.Material()
Material479.setUSE("plasticFit")

Appearance478.setMaterial(Material479)

Shape477.setAppearance(Appearance478)
IndexedFaceSet480 = x3d.IndexedFaceSet()
IndexedFaceSet480.setCoordIndex([1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1])
IndexedFaceSet480.setCreaseAngle(1.45)
IndexedFaceSet480.setSolid(False)
Coordinate481 = x3d.Coordinate()
Coordinate481.setPoint([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02])

IndexedFaceSet480.setCoord(Coordinate481)

Shape477.setGeometry(IndexedFaceSet480)

Transform476.addChildren(Shape477)

Transform429.addChildren(Transform476)
Transform482 = x3d.Transform()
Shape483 = x3d.Shape()
Shape483.setDEF("belt")
Appearance484 = x3d.Appearance()
Material485 = x3d.Material()
Material485.setUSE("plastic")

Appearance484.setMaterial(Material485)

Shape483.setAppearance(Appearance484)
IndexedFaceSet486 = x3d.IndexedFaceSet()
IndexedFaceSet486.setCoordIndex([3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1])
IndexedFaceSet486.setCreaseAngle(1.45)
IndexedFaceSet486.setSolid(False)
Coordinate487 = x3d.Coordinate()
Coordinate487.setPoint([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0,0.09,-0.2,0,0.06,-0.175])

IndexedFaceSet486.setCoord(Coordinate487)

Shape483.setGeometry(IndexedFaceSet486)

Transform482.addChildren(Shape483)

Transform429.addChildren(Transform482)

fieldValue422.addChildren(Transform429)
Transform488 = x3d.Transform()
Transform488.setDEF("mouthpiece")
Transform488.setRotation([0.86,-0.58,-0.58,2.09])
Transform488.setTranslation([0,1.508,0.05])
Transform489 = x3d.Transform()
Transform489.setTranslation([0,0.0018,0])
Shape490 = x3d.Shape()
Appearance491 = x3d.Appearance()
Material492 = x3d.Material()
Material492.setDEF("gray")
Material492.setAmbientIntensity(0.3)
Material492.setDiffuseColor([0.9,0.9,0.89])
Material492.setShininess(0.1)
Material492.setSpecularColor([0.5,0.5,0.5])

Appearance491.setMaterial(Material492)

Shape490.setAppearance(Appearance491)
Cylinder493 = x3d.Cylinder()
Cylinder493.setHeight(0.006)
Cylinder493.setRadius(0.015)

Shape490.setGeometry(Cylinder493)

Transform489.addChildren(Shape490)

Transform488.addChildren(Transform489)
Transform494 = x3d.Transform()
Shape495 = x3d.Shape()
Appearance496 = x3d.Appearance()
Material497 = x3d.Material()
Material497.setDEF("black")
Material497.setDiffuseColor([0,0,0])

Appearance496.setMaterial(Material497)

Shape495.setAppearance(Appearance496)
Cone498 = x3d.Cone()
Cone498.setBottomRadius(0.03)
Cone498.setHeight(0.01)

Shape495.setGeometry(Cone498)

Transform494.addChildren(Shape495)

Transform488.addChildren(Transform494)
Transform499 = x3d.Transform()
Transform499.setTranslation([0,-0.015,0])
Shape500 = x3d.Shape()
Appearance501 = x3d.Appearance()
Material502 = x3d.Material()
Material502.setUSE("black")

Appearance501.setMaterial(Material502)

Shape500.setAppearance(Appearance501)
Cylinder503 = x3d.Cylinder()
Cylinder503.setHeight(0.02)
Cylinder503.setRadius(0.03)

Shape500.setGeometry(Cylinder503)

Transform499.addChildren(Shape500)

Transform488.addChildren(Transform499)
Transform504 = x3d.Transform()
Transform504.setTranslation([0,-0.025,0])
Shape505 = x3d.Shape()
Appearance506 = x3d.Appearance()
Material507 = x3d.Material()
Material507.setUSE("black")

Appearance506.setMaterial(Material507)

Shape505.setAppearance(Appearance506)
Cylinder508 = x3d.Cylinder()
Cylinder508.setHeight(0.02)
Cylinder508.setRadius(0.015)

Shape505.setGeometry(Cylinder508)

Transform504.addChildren(Shape505)

Transform488.addChildren(Transform504)
Transform509 = x3d.Transform()
Transform509.setRotation([0,0,1,0.9])
Transform509.setTranslation([0,-0.04,0])
Shape510 = x3d.Shape()
Shape510.setDEF("mouthpiecePlastic")
Appearance511 = x3d.Appearance()
Material512 = x3d.Material()
Material512.setDiffuseColor([1,1,1])
Material512.setEmissiveColor([1,1,1])

Appearance511.setMaterial(Material512)

Shape510.setAppearance(Appearance511)
Box513 = x3d.Box()
Box513.setSize([0.002,0.03,0.018])

Shape510.setGeometry(Box513)

Transform509.addChildren(Shape510)

Transform488.addChildren(Transform509)
Transform514 = x3d.Transform()
Transform514.setRotation([0,0,1,-0.9])
Transform514.setTranslation([0,-0.04,0])
Shape515 = x3d.Shape()
Shape515.setUSE("mouthpiecePlastic")

Transform514.addChildren(Shape515)

Transform488.addChildren(Transform514)
Transform516 = x3d.Transform()
Transform516.setRotation([1,0,0,1.57])
Transform516.setTranslation([0,-0.015,0.03])
Shape517 = x3d.Shape()
Appearance518 = x3d.Appearance()
Material519 = x3d.Material()
Material519.setUSE("gray")

Appearance518.setMaterial(Material519)

Shape517.setAppearance(Appearance518)
Cylinder520 = x3d.Cylinder()
Cylinder520.setHeight(0.02)
Cylinder520.setRadius(0.0075)

Shape517.setGeometry(Cylinder520)

Transform516.addChildren(Shape517)

Transform488.addChildren(Transform516)
#x = 0, y = 50, z = -270
Transform521 = x3d.Transform()
Transform521.setDEF("airTube")
Transform521.setRotation([0,1,0,1.57])
Transform521.setScale([0.7,0.7,0.7])
Transform521.setTranslation([0,-0.02,0.055])
Transform522 = x3d.Transform()
Transform522.setRotation([-0.21,0.21,-0.95,4.67])
Shape523 = x3d.Shape()
Appearance524 = x3d.Appearance()
Material525 = x3d.Material()
Material525.setDiffuseColor([0,0,0])

Appearance524.setMaterial(Material525)

Shape523.setAppearance(Appearance524)
Extrusion526 = x3d.Extrusion()
Extrusion526.setCrossSection([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013])
Extrusion526.setSpine([0.005,-0.03,0,-0.01,0.02,0,-0.03,0.08,0,-0.05,0.14,0,-0.08,0.19,0,-0.1,0.22,0,-0.12,0.25,0,-0.15,0.27,0,-0.18,0.28,0,-0.21,0.29,0,-0.26,0.28,0,-0.28,0.26,0,-0.305,0.23,0,-0.32,0.2,0,-0.34,0.16,0,-0.35,0.12,0,-0.37,0.04,0,-0.385,0,0,-0.39,-0.07,0])

Shape523.setGeometry(Extrusion526)

Transform522.addChildren(Shape523)

Transform521.addChildren(Transform522)

Transform488.addChildren(Transform521)

fieldValue422.addChildren(Transform488)
Transform527 = x3d.Transform()
Transform527.setDEF("Bubbles")
Transform527.setScale([0.35,0.35,0.35])
Transform527.setTranslation([0,1.508,0.05])
Group528 = x3d.Group()
Group528.setDEF("Bubble")
TimeSensor529 = x3d.TimeSensor()
TimeSensor529.setDEF("BubbleClock")
TimeSensor529.setCycleInterval(6)
TimeSensor529.setLoop(True)

Group528.addChildren(TimeSensor529)
PositionInterpolator530 = x3d.PositionInterpolator()
PositionInterpolator530.setDEF("BubblePath1")
PositionInterpolator530.setKey([0,0.5,0.8,0.9,1])
PositionInterpolator530.setKeyValue([0,0,0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509])

Group528.addChildren(PositionInterpolator530)
PositionInterpolator531 = x3d.PositionInterpolator()
PositionInterpolator531.setDEF("BubblePath2")
PositionInterpolator531.setKey([0,0.3,0.64,0.85,1])
PositionInterpolator531.setKeyValue([0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.038483478,1.989,1.098373])

Group528.addChildren(PositionInterpolator531)
PositionInterpolator532 = x3d.PositionInterpolator()
PositionInterpolator532.setDEF("BubblePath3")
PositionInterpolator532.setKey([0,0.1,0.45,0.7,1])
PositionInterpolator532.setKeyValue([0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734])

Group528.addChildren(PositionInterpolator532)
PositionInterpolator533 = x3d.PositionInterpolator()
PositionInterpolator533.setDEF("BubblePath4")
PositionInterpolator533.setKey([0,0.5,0.6,0.8,1])
PositionInterpolator533.setKeyValue([0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349])

Group528.addChildren(PositionInterpolator533)
PositionInterpolator534 = x3d.PositionInterpolator()
PositionInterpolator534.setDEF("BubblePath5")
PositionInterpolator534.setKey([0,0.25,0.35,0.65,1])
PositionInterpolator534.setKeyValue([0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1])

Group528.addChildren(PositionInterpolator534)
PositionInterpolator535 = x3d.PositionInterpolator()
PositionInterpolator535.setDEF("BubblePath6")
PositionInterpolator535.setKey([0,0.15,0.22235,0.55565,1])
PositionInterpolator535.setKeyValue([0,0,0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14])

Group528.addChildren(PositionInterpolator535)
PositionInterpolator536 = x3d.PositionInterpolator()
PositionInterpolator536.setDEF("BubblePath7")
PositionInterpolator536.setKey([0,0.2425,0.4535,0.6775,1])
PositionInterpolator536.setKeyValue([0,0,0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12])

Group528.addChildren(PositionInterpolator536)
PositionInterpolator537 = x3d.PositionInterpolator()
PositionInterpolator537.setDEF("BubblePath8")
PositionInterpolator537.setKey([0,0.1125,0.5535,0.97865,1])
PositionInterpolator537.setKeyValue([0,0,0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86])

Group528.addChildren(PositionInterpolator537)
PositionInterpolator538 = x3d.PositionInterpolator()
PositionInterpolator538.setDEF("BubblePath9")
PositionInterpolator538.setKey([0,0.0025,0.035,0.65,1])
PositionInterpolator538.setKeyValue([0,0,0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2,0.1545])

Group528.addChildren(PositionInterpolator538)
PositionInterpolator539 = x3d.PositionInterpolator()
PositionInterpolator539.setDEF("BubblePath10")
PositionInterpolator539.setKey([0,0.00025,0.035,0.6895,1])
PositionInterpolator539.setKeyValue([0,0,0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1,1,0.1])

Group528.addChildren(PositionInterpolator539)
Transform540 = x3d.Transform()
Transform541 = x3d.Transform()
Transform541.setDEF("bubble1")
Shape542 = x3d.Shape()
Appearance543 = x3d.Appearance()
Appearance543.setDEF("BubbleAppearance")
Material544 = x3d.Material()
Material544.setDiffuseColor([1,1,1])
Material544.setTransparency(0.8)

Appearance543.setMaterial(Material544)

Shape542.setAppearance(Appearance543)
Sphere545 = x3d.Sphere()
Sphere545.setRadius(0.025)

Shape542.setGeometry(Sphere545)

Transform541.addChildren(Shape542)

Transform540.addChildren(Transform541)
Transform546 = x3d.Transform()
Transform546.setDEF("bubble2")
Shape547 = x3d.Shape()
Appearance548 = x3d.Appearance()
Appearance548.setUSE("BubbleAppearance")

Shape547.setAppearance(Appearance548)
Sphere549 = x3d.Sphere()
Sphere549.setRadius(0.055)

Shape547.setGeometry(Sphere549)

Transform546.addChildren(Shape547)

Transform540.addChildren(Transform546)
Transform550 = x3d.Transform()
Transform550.setDEF("bubble3")
Shape551 = x3d.Shape()
Appearance552 = x3d.Appearance()
Appearance552.setUSE("BubbleAppearance")

Shape551.setAppearance(Appearance552)
Sphere553 = x3d.Sphere()
Sphere553.setRadius(0.065)

Shape551.setGeometry(Sphere553)

Transform550.addChildren(Shape551)

Transform540.addChildren(Transform550)
Transform554 = x3d.Transform()
Transform554.setDEF("bubble4")
Shape555 = x3d.Shape()
Appearance556 = x3d.Appearance()
Appearance556.setUSE("BubbleAppearance")

Shape555.setAppearance(Appearance556)
Sphere557 = x3d.Sphere()
Sphere557.setRadius(0.015)

Shape555.setGeometry(Sphere557)

Transform554.addChildren(Shape555)

Transform540.addChildren(Transform554)
Transform558 = x3d.Transform()
Transform558.setDEF("bubble5")
Shape559 = x3d.Shape()
Appearance560 = x3d.Appearance()
Appearance560.setUSE("BubbleAppearance")

Shape559.setAppearance(Appearance560)
Sphere561 = x3d.Sphere()
Sphere561.setRadius(0.075)

Shape559.setGeometry(Sphere561)

Transform558.addChildren(Shape559)

Transform540.addChildren(Transform558)
Transform562 = x3d.Transform()
Transform562.setDEF("bubble6")
Shape563 = x3d.Shape()
Appearance564 = x3d.Appearance()
Appearance564.setUSE("BubbleAppearance")

Shape563.setAppearance(Appearance564)
Sphere565 = x3d.Sphere()
Sphere565.setRadius(0.005)

Shape563.setGeometry(Sphere565)

Transform562.addChildren(Shape563)

Transform540.addChildren(Transform562)
Transform566 = x3d.Transform()
Transform566.setDEF("bubble7")
Shape567 = x3d.Shape()
Appearance568 = x3d.Appearance()
Appearance568.setUSE("BubbleAppearance")

Shape567.setAppearance(Appearance568)
Sphere569 = x3d.Sphere()
Sphere569.setRadius(0.035)

Shape567.setGeometry(Sphere569)

Transform566.addChildren(Shape567)

Transform540.addChildren(Transform566)
Transform570 = x3d.Transform()
Transform570.setDEF("bubble8")
Shape571 = x3d.Shape()
Appearance572 = x3d.Appearance()
Appearance572.setUSE("BubbleAppearance")

Shape571.setAppearance(Appearance572)
Sphere573 = x3d.Sphere()
Sphere573.setRadius(0.05)

Shape571.setGeometry(Sphere573)

Transform570.addChildren(Shape571)

Transform540.addChildren(Transform570)
Transform574 = x3d.Transform()
Transform574.setDEF("bubble9")
Shape575 = x3d.Shape()
Appearance576 = x3d.Appearance()
Appearance576.setUSE("BubbleAppearance")

Shape575.setAppearance(Appearance576)
Sphere577 = x3d.Sphere()
Sphere577.setRadius(0.045)

Shape575.setGeometry(Sphere577)

Transform574.addChildren(Shape575)

Transform540.addChildren(Transform574)
Transform578 = x3d.Transform()
Transform578.setDEF("bubble10")
Shape579 = x3d.Shape()
Appearance580 = x3d.Appearance()
Appearance580.setUSE("BubbleAppearance")

Shape579.setAppearance(Appearance580)
Sphere581 = x3d.Sphere()
Sphere581.setRadius(0.035)

Shape579.setGeometry(Sphere581)

Transform578.addChildren(Shape579)

Transform540.addChildren(Transform578)
ROUTE582 = x3d.ROUTE()
ROUTE582.setFromField("fraction_changed")
ROUTE582.setFromNode("BubbleClock")
ROUTE582.setToField("set_fraction")
ROUTE582.setToNode("BubblePath1")

Transform540.addChildren(ROUTE582)
ROUTE583 = x3d.ROUTE()
ROUTE583.setFromField("fraction_changed")
ROUTE583.setFromNode("BubbleClock")
ROUTE583.setToField("set_fraction")
ROUTE583.setToNode("BubblePath2")

Transform540.addChildren(ROUTE583)
ROUTE584 = x3d.ROUTE()
ROUTE584.setFromField("fraction_changed")
ROUTE584.setFromNode("BubbleClock")
ROUTE584.setToField("set_fraction")
ROUTE584.setToNode("BubblePath3")

Transform540.addChildren(ROUTE584)
ROUTE585 = x3d.ROUTE()
ROUTE585.setFromField("fraction_changed")
ROUTE585.setFromNode("BubbleClock")
ROUTE585.setToField("set_fraction")
ROUTE585.setToNode("BubblePath4")

Transform540.addChildren(ROUTE585)
ROUTE586 = x3d.ROUTE()
ROUTE586.setFromField("fraction_changed")
ROUTE586.setFromNode("BubbleClock")
ROUTE586.setToField("set_fraction")
ROUTE586.setToNode("BubblePath5")

Transform540.addChildren(ROUTE586)
ROUTE587 = x3d.ROUTE()
ROUTE587.setFromField("fraction_changed")
ROUTE587.setFromNode("BubbleClock")
ROUTE587.setToField("set_fraction")
ROUTE587.setToNode("BubblePath6")

Transform540.addChildren(ROUTE587)
ROUTE588 = x3d.ROUTE()
ROUTE588.setFromField("fraction_changed")
ROUTE588.setFromNode("BubbleClock")
ROUTE588.setToField("set_fraction")
ROUTE588.setToNode("BubblePath7")

Transform540.addChildren(ROUTE588)
ROUTE589 = x3d.ROUTE()
ROUTE589.setFromField("fraction_changed")
ROUTE589.setFromNode("BubbleClock")
ROUTE589.setToField("set_fraction")
ROUTE589.setToNode("BubblePath8")

Transform540.addChildren(ROUTE589)
ROUTE590 = x3d.ROUTE()
ROUTE590.setFromField("fraction_changed")
ROUTE590.setFromNode("BubbleClock")
ROUTE590.setToField("set_fraction")
ROUTE590.setToNode("BubblePath9")

Transform540.addChildren(ROUTE590)
ROUTE591 = x3d.ROUTE()
ROUTE591.setFromField("fraction_changed")
ROUTE591.setFromNode("BubbleClock")
ROUTE591.setToField("set_fraction")
ROUTE591.setToNode("BubblePath10")

Transform540.addChildren(ROUTE591)
ROUTE592 = x3d.ROUTE()
ROUTE592.setFromField("value_changed")
ROUTE592.setFromNode("BubblePath1")
ROUTE592.setToField("set_translation")
ROUTE592.setToNode("bubble1")

Transform540.addChildren(ROUTE592)
ROUTE593 = x3d.ROUTE()
ROUTE593.setFromField("value_changed")
ROUTE593.setFromNode("BubblePath2")
ROUTE593.setToField("set_translation")
ROUTE593.setToNode("bubble2")

Transform540.addChildren(ROUTE593)
ROUTE594 = x3d.ROUTE()
ROUTE594.setFromField("value_changed")
ROUTE594.setFromNode("BubblePath3")
ROUTE594.setToField("set_translation")
ROUTE594.setToNode("bubble3")

Transform540.addChildren(ROUTE594)
ROUTE595 = x3d.ROUTE()
ROUTE595.setFromField("value_changed")
ROUTE595.setFromNode("BubblePath4")
ROUTE595.setToField("set_translation")
ROUTE595.setToNode("bubble4")

Transform540.addChildren(ROUTE595)
ROUTE596 = x3d.ROUTE()
ROUTE596.setFromField("value_changed")
ROUTE596.setFromNode("BubblePath5")
ROUTE596.setToField("set_translation")
ROUTE596.setToNode("bubble5")

Transform540.addChildren(ROUTE596)
ROUTE597 = x3d.ROUTE()
ROUTE597.setFromField("value_changed")
ROUTE597.setFromNode("BubblePath6")
ROUTE597.setToField("set_translation")
ROUTE597.setToNode("bubble6")

Transform540.addChildren(ROUTE597)
ROUTE598 = x3d.ROUTE()
ROUTE598.setFromField("value_changed")
ROUTE598.setFromNode("BubblePath7")
ROUTE598.setToField("set_translation")
ROUTE598.setToNode("bubble7")

Transform540.addChildren(ROUTE598)
ROUTE599 = x3d.ROUTE()
ROUTE599.setFromField("value_changed")
ROUTE599.setFromNode("BubblePath8")
ROUTE599.setToField("set_translation")
ROUTE599.setToNode("bubble8")

Transform540.addChildren(ROUTE599)
ROUTE600 = x3d.ROUTE()
ROUTE600.setFromField("value_changed")
ROUTE600.setFromNode("BubblePath9")
ROUTE600.setToField("set_translation")
ROUTE600.setToNode("bubble9")

Transform540.addChildren(ROUTE600)
ROUTE601 = x3d.ROUTE()
ROUTE601.setFromField("value_changed")
ROUTE601.setFromNode("BubblePath10")
ROUTE601.setToField("set_translation")
ROUTE601.setToNode("bubble10")

Transform540.addChildren(ROUTE601)

Group528.addChildren(Transform540)

Transform527.addChildren(Group528)

fieldValue422.addChildren(Transform527)

ProtoInstance420.addFieldValue(fieldValue422)

fieldValue419.addChildren(ProtoInstance420)

ProtoInstance416.addFieldValue(fieldValue419)

fieldValue407.addChildren(ProtoInstance416)

ProtoInstance404.addFieldValue(fieldValue407)

fieldValue210.addChildren(ProtoInstance404)

ProtoInstance207.addFieldValue(fieldValue210)

fieldValue96.addChildren(ProtoInstance207)

ProtoInstance93.addFieldValue(fieldValue96)

fieldValue92.addChildren(ProtoInstance93)

ProtoInstance91.addFieldValue(fieldValue92)

Transform89.addChildren(ProtoInstance91)

Transform88.addChildren(Transform89)

Group87.addChildren(Transform88)

Group81.addChildren(Group87)

LOD80.addChildren(Group81)

Scene15.addChildren(LOD80)
Script602 = x3d.Script()
Script602.setDEF("finWarpScript")
field603 = x3d.field()
field603.setName("set_rotationL")
field603.setAccessType("inputOnly")
field603.setType("SFRotation")

Script602.addField(field603)
field604 = x3d.field()
field604.setName("set_rotationR")
field604.setAccessType("inputOnly")
field604.setType("SFRotation")

Script602.addField(field604)
field605 = x3d.field()
field605.setName("fin_warpL")
field605.setAccessType("outputOnly")
field605.setType("SFBool")

Script602.addField(field605)
field606 = x3d.field()
field606.setName("fin_warpR")
field606.setAccessType("outputOnly")
field606.setType("SFBool")

Script602.addField(field606)

Script602.setSourceCode('''ecmascript:\n"+
"\n"+
"\n"+
"var positionX;\n"+
"var positionY;\n"+
"var positionZ;\n"+
"var rotation;\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"    	positionX = 0.0;\n"+
"	positionY = 0.0;\n"+
"	positionZ = 0.0;\n"+
"	rotation = 0.0;\n"+
"}\n"+
"\n"+
"function set_rotationL( value, timeStamp)\n"+
"{\n"+
"	rotationFinL = new SFRotation(positionX, positionY, positionZ, rotation);\n"+
"	rotationFinL = value;\n"+
"	//print ('rotationFinL[0] ' + rotationFinL[0]);\n"+
"	if (rotationFinL[0] <= 0)\n"+
"	{\n"+
"		fin_warpL = 0;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		fin_warpL = 1;\n"+
"	}\n"+
"	\n"+
"}\n"+
"\n"+
"function set_rotationR( value, timeStamp)\n"+
"{\n"+
"	rotationFinR = new SFRotation(positionX, positionY, positionZ, rotation);\n"+
"	rotationFinR = value;\n"+
"	//print ('rotationFin[0] ' + rotationFinR[0]);\n"+
"	if (rotationFinR[0] <= 0)\n"+
"	{\n"+
"		fin_warpR = 0;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		fin_warpR = 1;\n"+
"	}\n"+
"	\n"+
"}''')

Scene15.addChildren(Script602)
Group607 = x3d.Group()
Group607.setDEF("Animations")
Group608 = x3d.Group()
Group608.setDEF("Dive_Animation")
OrientationInterpolator609 = x3d.OrientationInterpolator()
OrientationInterpolator609.setDEF("r_ankle_RotationInterpolator_BasicDive")
OrientationInterpolator609.setKey([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1])
OrientationInterpolator609.setKeyValue([1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.86001])

Group608.addChildren(OrientationInterpolator609)
OrientationInterpolator610 = x3d.OrientationInterpolator()
OrientationInterpolator610.setDEF("r_knee_RotationInterpolator_BasicDive")
OrientationInterpolator610.setKey([0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1])
OrientationInterpolator610.setKeyValue([1,0,0,0.8573,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.8573])

Group608.addChildren(OrientationInterpolator610)
OrientationInterpolator611 = x3d.OrientationInterpolator()
OrientationInterpolator611.setDEF("r_hip_RotationInterpolator_BasicDive")
OrientationInterpolator611.setKey([0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1])
OrientationInterpolator611.setKeyValue([-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481])

Group608.addChildren(OrientationInterpolator611)
OrientationInterpolator612 = x3d.OrientationInterpolator()
OrientationInterpolator612.setDEF("l_ankle_RotationInterpolator_BasicDive")
OrientationInterpolator612.setKey([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1])
OrientationInterpolator612.setKeyValue([1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001])

Group608.addChildren(OrientationInterpolator612)
OrientationInterpolator613 = x3d.OrientationInterpolator()
OrientationInterpolator613.setDEF("l_knee_RotationInterpolator_BasicDive")
OrientationInterpolator613.setKey([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1])
OrientationInterpolator613.setKeyValue([1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226])

Group608.addChildren(OrientationInterpolator613)
OrientationInterpolator614 = x3d.OrientationInterpolator()
OrientationInterpolator614.setDEF("l_hip_RotationInterpolator_BasicDive")
OrientationInterpolator614.setKey([0,0.25,0.375,0.6667,0.7917,0.9167,1])
OrientationInterpolator614.setKeyValue([-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865])

Group608.addChildren(OrientationInterpolator614)
OrientationInterpolator615 = x3d.OrientationInterpolator()
OrientationInterpolator615.setDEF("lower_body_RotationInterpolator_BasicDive")
OrientationInterpolator615.setKey([0,0.5,1])
OrientationInterpolator615.setKeyValue([0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056])

Group608.addChildren(OrientationInterpolator615)
#
OrientationInterpolator616 = x3d.OrientationInterpolator()
OrientationInterpolator616.setDEF("r_wrist_RotationInterpolator_BasicDive")
OrientationInterpolator616.setKey([0,0.28,0.32,0.64,0.76,1])
OrientationInterpolator616.setKeyValue([0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0])

Group608.addChildren(OrientationInterpolator616)
OrientationInterpolator617 = x3d.OrientationInterpolator()
OrientationInterpolator617.setDEF("r_elbow_RotationInterpolator_BasicDive")
OrientationInterpolator617.setKey([0,0.28,0.32,0.64,0.76,1])
OrientationInterpolator617.setKeyValue([0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0])

Group608.addChildren(OrientationInterpolator617)
OrientationInterpolator618 = x3d.OrientationInterpolator()
OrientationInterpolator618.setDEF("r_shoulder_RotationInterpolator_BasicDive")
OrientationInterpolator618.setKey([0,0.45,0.64,0.76,0.88,1])
OrientationInterpolator618.setKeyValue([0,0,1,0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0])

Group608.addChildren(OrientationInterpolator618)
OrientationInterpolator619 = x3d.OrientationInterpolator()
OrientationInterpolator619.setDEF("l_wrist_RotationInterpolator_BasicDive")
OrientationInterpolator619.setKey([0,0.32,0.64,0.88,1])
OrientationInterpolator619.setKeyValue([0,0,1,0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0,0,1,0])

Group608.addChildren(OrientationInterpolator619)
OrientationInterpolator620 = x3d.OrientationInterpolator()
OrientationInterpolator620.setDEF("l_elbow_RotationInterpolator_BasicDive")
OrientationInterpolator620.setKey([0,0.28,0.32,0.64,0.76,1])
OrientationInterpolator620.setKeyValue([0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0])

Group608.addChildren(OrientationInterpolator620)
OrientationInterpolator621 = x3d.OrientationInterpolator()
OrientationInterpolator621.setDEF("l_shoulder_RotationInterpolator_BasicDive")
OrientationInterpolator621.setKey([0,0.25,0.375,0.6667,0.7917,0.9167,1])
OrientationInterpolator621.setKeyValue([0,0,1,0.1,0,0,1,0.2,0,0,1,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2])

Group608.addChildren(OrientationInterpolator621)
#
OrientationInterpolator622 = x3d.OrientationInterpolator()
OrientationInterpolator622.setDEF("head_RotationInterpolator_BasicDive")
OrientationInterpolator622.setKey([0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1])
OrientationInterpolator622.setKeyValue([-1,0,0,1,-1,0,0,1,-1,0,0,0.999,-1,0,0,0.99,-1,0,0,0.99,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,1])

Group608.addChildren(OrientationInterpolator622)
OrientationInterpolator623 = x3d.OrientationInterpolator()
OrientationInterpolator623.setDEF("neck_RotationInterpolator_BasicDive")
OrientationInterpolator623.setKey([0,1])
OrientationInterpolator623.setKeyValue([0,0,1,0,0,0,1,0])

Group608.addChildren(OrientationInterpolator623)
OrientationInterpolator624 = x3d.OrientationInterpolator()
OrientationInterpolator624.setDEF("upper_body_RotationInterpolator_BasicDive")
OrientationInterpolator624.setKey([0,0.2083,0.375,0.75,0.8333,1])
OrientationInterpolator624.setKeyValue([0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826])

Group608.addChildren(OrientationInterpolator624)
OrientationInterpolator625 = x3d.OrientationInterpolator()
OrientationInterpolator625.setDEF("whole_body_RotationInterpolator_BasicDive")
OrientationInterpolator625.setKey([0,1])
OrientationInterpolator625.setKeyValue([0,0,1,0,0,0,1,0])

Group608.addChildren(OrientationInterpolator625)
PositionInterpolator626 = x3d.PositionInterpolator()
PositionInterpolator626.setDEF("whole_body_TranslationInterpolator_BasicDive")
PositionInterpolator626.setKey([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1])
PositionInterpolator626.setKeyValue([0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0])

Group608.addChildren(PositionInterpolator626)
TimeSensor627 = x3d.TimeSensor()
TimeSensor627.setDEF("Dive_Time")
TimeSensor627.setCycleInterval(7)
TimeSensor627.setLoop(True)
TimeSensor627.setStartTime(-1)

Group608.addChildren(TimeSensor627)
ProximitySensor628 = x3d.ProximitySensor()
ProximitySensor628.setDEF("TriggerProximitySensor")
ProximitySensor628.setSize([50,50,50])

Group608.addChildren(ProximitySensor628)

Group607.addChildren(Group608)

Scene15.addChildren(Group607)
ROUTE629 = x3d.ROUTE()
ROUTE629.setFromField("enterTime")
ROUTE629.setFromNode("TriggerProximitySensor")
ROUTE629.setToField("startTime")
ROUTE629.setToNode("Dive_Time")

Scene15.addChildren(ROUTE629)
ROUTE630 = x3d.ROUTE()
ROUTE630.setFromField("fraction_changed")
ROUTE630.setFromNode("Dive_Time")
ROUTE630.setToField("set_fraction")
ROUTE630.setToNode("r_ankle_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE630)
ROUTE631 = x3d.ROUTE()
ROUTE631.setFromField("fraction_changed")
ROUTE631.setFromNode("Dive_Time")
ROUTE631.setToField("set_fraction")
ROUTE631.setToNode("r_knee_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE631)
ROUTE632 = x3d.ROUTE()
ROUTE632.setFromField("fraction_changed")
ROUTE632.setFromNode("Dive_Time")
ROUTE632.setToField("set_fraction")
ROUTE632.setToNode("r_hip_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE632)
ROUTE633 = x3d.ROUTE()
ROUTE633.setFromField("fraction_changed")
ROUTE633.setFromNode("Dive_Time")
ROUTE633.setToField("set_fraction")
ROUTE633.setToNode("l_ankle_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE633)
ROUTE634 = x3d.ROUTE()
ROUTE634.setFromField("fraction_changed")
ROUTE634.setFromNode("Dive_Time")
ROUTE634.setToField("set_fraction")
ROUTE634.setToNode("l_knee_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE634)
ROUTE635 = x3d.ROUTE()
ROUTE635.setFromField("fraction_changed")
ROUTE635.setFromNode("Dive_Time")
ROUTE635.setToField("set_fraction")
ROUTE635.setToNode("l_hip_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE635)
ROUTE636 = x3d.ROUTE()
ROUTE636.setFromField("fraction_changed")
ROUTE636.setFromNode("Dive_Time")
ROUTE636.setToField("set_fraction")
ROUTE636.setToNode("lower_body_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE636)
ROUTE637 = x3d.ROUTE()
ROUTE637.setFromField("fraction_changed")
ROUTE637.setFromNode("Dive_Time")
ROUTE637.setToField("set_fraction")
ROUTE637.setToNode("head_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE637)
ROUTE638 = x3d.ROUTE()
ROUTE638.setFromField("fraction_changed")
ROUTE638.setFromNode("Dive_Time")
ROUTE638.setToField("set_fraction")
ROUTE638.setToNode("neck_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE638)
ROUTE639 = x3d.ROUTE()
ROUTE639.setFromField("fraction_changed")
ROUTE639.setFromNode("Dive_Time")
ROUTE639.setToField("set_fraction")
ROUTE639.setToNode("upper_body_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE639)
ROUTE640 = x3d.ROUTE()
ROUTE640.setFromField("fraction_changed")
ROUTE640.setFromNode("Dive_Time")
ROUTE640.setToField("set_fraction")
ROUTE640.setToNode("whole_body_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE640)
ROUTE641 = x3d.ROUTE()
ROUTE641.setFromField("fraction_changed")
ROUTE641.setFromNode("Dive_Time")
ROUTE641.setToField("set_fraction")
ROUTE641.setToNode("whole_body_TranslationInterpolator_BasicDive")

Scene15.addChildren(ROUTE641)
ROUTE642 = x3d.ROUTE()
ROUTE642.setFromField("value_changed")
ROUTE642.setFromNode("r_ankle_RotationInterpolator_BasicDive")
ROUTE642.setToField("set_rotation")
ROUTE642.setToNode("hanim_r_ankle")

Scene15.addChildren(ROUTE642)
ROUTE643 = x3d.ROUTE()
ROUTE643.setFromField("value_changed")
ROUTE643.setFromNode("r_knee_RotationInterpolator_BasicDive")
ROUTE643.setToField("set_rotation")
ROUTE643.setToNode("hanim_r_knee")

Scene15.addChildren(ROUTE643)
ROUTE644 = x3d.ROUTE()
ROUTE644.setFromField("value_changed")
ROUTE644.setFromNode("r_hip_RotationInterpolator_BasicDive")
ROUTE644.setToField("set_rotation")
ROUTE644.setToNode("hanim_r_hip")

Scene15.addChildren(ROUTE644)
ROUTE645 = x3d.ROUTE()
ROUTE645.setFromField("value_changed")
ROUTE645.setFromNode("l_ankle_RotationInterpolator_BasicDive")
ROUTE645.setToField("set_rotation")
ROUTE645.setToNode("hanim_l_ankle")

Scene15.addChildren(ROUTE645)
ROUTE646 = x3d.ROUTE()
ROUTE646.setFromField("value_changed")
ROUTE646.setFromNode("l_knee_RotationInterpolator_BasicDive")
ROUTE646.setToField("set_rotation")
ROUTE646.setToNode("hanim_l_knee")

Scene15.addChildren(ROUTE646)
ROUTE647 = x3d.ROUTE()
ROUTE647.setFromField("value_changed")
ROUTE647.setFromNode("l_hip_RotationInterpolator_BasicDive")
ROUTE647.setToField("set_rotationL")
ROUTE647.setToNode("finWarpScript")

Scene15.addChildren(ROUTE647)
ROUTE648 = x3d.ROUTE()
ROUTE648.setFromField("value_changed")
ROUTE648.setFromNode("l_hip_RotationInterpolator_BasicDive")
ROUTE648.setToField("set_rotationR")
ROUTE648.setToNode("finWarpScript")

Scene15.addChildren(ROUTE648)
ROUTE649 = x3d.ROUTE()
ROUTE649.setFromField("fin_warpL")
ROUTE649.setFromNode("finWarpScript")
ROUTE649.setToField("finL")
ROUTE649.setToNode("FinScript")

Scene15.addChildren(ROUTE649)
ROUTE650 = x3d.ROUTE()
ROUTE650.setFromField("fin_warpR")
ROUTE650.setFromNode("finWarpScript")
ROUTE650.setToField("finR")
ROUTE650.setToNode("FinScript")

Scene15.addChildren(ROUTE650)
ROUTE651 = x3d.ROUTE()
ROUTE651.setFromField("value_changed")
ROUTE651.setFromNode("l_hip_RotationInterpolator_BasicDive")
ROUTE651.setToField("set_rotation")
ROUTE651.setToNode("hanim_l_hip")

Scene15.addChildren(ROUTE651)
ROUTE652 = x3d.ROUTE()
ROUTE652.setFromField("value_changed")
ROUTE652.setFromNode("lower_body_RotationInterpolator_BasicDive")
ROUTE652.setToField("set_rotation")
ROUTE652.setToNode("hanim_sacroiliac")

Scene15.addChildren(ROUTE652)
ROUTE653 = x3d.ROUTE()
ROUTE653.setFromField("value_changed")
ROUTE653.setFromNode("head_RotationInterpolator_BasicDive")
ROUTE653.setToField("set_rotation")
ROUTE653.setToNode("hanim_skullbase")

Scene15.addChildren(ROUTE653)
ROUTE654 = x3d.ROUTE()
ROUTE654.setFromField("value_changed")
ROUTE654.setFromNode("neck_RotationInterpolator_BasicDive")
ROUTE654.setToField("set_rotation")
ROUTE654.setToNode("hanim_vc4")

Scene15.addChildren(ROUTE654)
ROUTE655 = x3d.ROUTE()
ROUTE655.setFromField("value_changed")
ROUTE655.setFromNode("upper_body_RotationInterpolator_BasicDive")
ROUTE655.setToField("set_rotation")
ROUTE655.setToNode("hanim_vl1")

Scene15.addChildren(ROUTE655)
ROUTE656 = x3d.ROUTE()
ROUTE656.setFromField("value_changed")
ROUTE656.setFromNode("whole_body_RotationInterpolator_BasicDive")
ROUTE656.setToField("set_rotation")
ROUTE656.setToNode("hanim_humanoid_root")

Scene15.addChildren(ROUTE656)
ROUTE657 = x3d.ROUTE()
ROUTE657.setFromField("value_changed")
ROUTE657.setFromNode("whole_body_TranslationInterpolator_BasicDive")
ROUTE657.setToField("set_translation")
ROUTE657.setToNode("hanim_humanoid_root")

Scene15.addChildren(ROUTE657)
ROUTE658 = x3d.ROUTE()
ROUTE658.setFromField("fraction_changed")
ROUTE658.setFromNode("Dive_Time")
ROUTE658.setToField("set_fraction")
ROUTE658.setToNode("r_wrist_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE658)
ROUTE659 = x3d.ROUTE()
ROUTE659.setFromField("fraction_changed")
ROUTE659.setFromNode("Dive_Time")
ROUTE659.setToField("set_fraction")
ROUTE659.setToNode("r_elbow_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE659)
ROUTE660 = x3d.ROUTE()
ROUTE660.setFromField("fraction_changed")
ROUTE660.setFromNode("Dive_Time")
ROUTE660.setToField("set_fraction")
ROUTE660.setToNode("r_shoulder_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE660)
ROUTE661 = x3d.ROUTE()
ROUTE661.setFromField("fraction_changed")
ROUTE661.setFromNode("Dive_Time")
ROUTE661.setToField("set_fraction")
ROUTE661.setToNode("l_wrist_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE661)
ROUTE662 = x3d.ROUTE()
ROUTE662.setFromField("fraction_changed")
ROUTE662.setFromNode("Dive_Time")
ROUTE662.setToField("set_fraction")
ROUTE662.setToNode("l_elbow_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE662)
ROUTE663 = x3d.ROUTE()
ROUTE663.setFromField("fraction_changed")
ROUTE663.setFromNode("Dive_Time")
ROUTE663.setToField("set_fraction")
ROUTE663.setToNode("l_shoulder_RotationInterpolator_BasicDive")

Scene15.addChildren(ROUTE663)
ROUTE664 = x3d.ROUTE()
ROUTE664.setFromField("value_changed")
ROUTE664.setFromNode("r_wrist_RotationInterpolator_BasicDive")
ROUTE664.setToField("set_rotation")
ROUTE664.setToNode("hanim_r_wrist")

Scene15.addChildren(ROUTE664)
ROUTE665 = x3d.ROUTE()
ROUTE665.setFromField("value_changed")
ROUTE665.setFromNode("r_elbow_RotationInterpolator_BasicDive")
ROUTE665.setToField("set_rotation")
ROUTE665.setToNode("hanim_r_elbow")

Scene15.addChildren(ROUTE665)
ROUTE666 = x3d.ROUTE()
ROUTE666.setFromField("value_changed")
ROUTE666.setFromNode("r_shoulder_RotationInterpolator_BasicDive")
ROUTE666.setToField("set_rotation")
ROUTE666.setToNode("hanim_r_shoulder")

Scene15.addChildren(ROUTE666)
ROUTE667 = x3d.ROUTE()
ROUTE667.setFromField("value_changed")
ROUTE667.setFromNode("l_wrist_RotationInterpolator_BasicDive")
ROUTE667.setToField("set_rotation")
ROUTE667.setToNode("hanim_l_wrist")

Scene15.addChildren(ROUTE667)
ROUTE668 = x3d.ROUTE()
ROUTE668.setFromField("value_changed")
ROUTE668.setFromNode("l_elbow_RotationInterpolator_BasicDive")
ROUTE668.setToField("set_rotation")
ROUTE668.setToNode("hanim_l_elbow")

Scene15.addChildren(ROUTE668)
ROUTE669 = x3d.ROUTE()
ROUTE669.setFromField("value_changed")
ROUTE669.setFromNode("l_shoulder_RotationInterpolator_BasicDive")
ROUTE669.setToField("set_rotation")
ROUTE669.setToNode("hanim_l_shoulder")

Scene15.addChildren(ROUTE669)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/NancyDivingProtoInstances_RoundTrip.x3d")
