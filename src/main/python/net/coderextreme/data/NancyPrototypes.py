print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "NancyPrototypes.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "Cindy Ballreich"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "translator"
meta4.content = "Tom Miller"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "translator"
meta5.content = "Don Brutzman"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "9 July 2000"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "Mon, 15 Sep 2025 05:20:50 GMT"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "description"
meta8.content = "Canonical HAnim 1.1 specification example, using ProtoDeclaration and ProtoInstance instead of native X3D tags. Prototype definitions are a compatible combination of version 1.0 and 2.0 prototype interfaces."

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "warning"
meta9.content = "using ProtoDeclare is only for developmental experimentation, use X3D native tags for Humanoids instead"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "NancyNativeTags.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "TODO"
meta11.content = "Material color of neck and arms is ignored/incorrect in Xj3D, possily DEF/USE problem."

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "identifier"
meta12.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d"

head1.children.append(meta12)

X3D0.head = head1
Scene13 = x3d.Scene()
ProtoDeclare14 = x3d.ProtoDeclare()
ProtoDeclare14.name = "Displacer"
ProtoDeclare14.appinfo = "A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment."
ProtoDeclare14.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html"
ProtoInterface15 = x3d.ProtoInterface()
field16 = x3d.field()
field16.accessType = "inputOutput"
field16.type = "SFString"
field16.name = "name"

ProtoInterface15.field.append(field16)
field17 = x3d.field()
field17.accessType = "inputOutput"
field17.type = "MFInt32"
field17.name = "coordIndex"

ProtoInterface15.field.append(field17)
field18 = x3d.field()
field18.accessType = "inputOutput"
field18.type = "MFVec3f"
field18.name = "displacements"

ProtoInterface15.field.append(field18)

ProtoDeclare14.ProtoInterface = ProtoInterface15
ProtoBody19 = x3d.ProtoBody()
WorldInfo20 = x3d.WorldInfo()
WorldInfo20.info = ["null body node"]

ProtoBody19.children.append(WorldInfo20)

ProtoDeclare14.ProtoBody = ProtoBody19

Scene13.children.append(ProtoDeclare14)
ProtoDeclare21 = x3d.ProtoDeclare()
ProtoDeclare21.name = "Humanoid"
ProtoDeclare21.appinfo = "The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model."
ProtoDeclare21.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"
ProtoInterface22 = x3d.ProtoInterface()
field23 = x3d.field()
field23.accessType = "inputOutput"
field23.type = "SFString"
field23.name = "name"

ProtoInterface22.field.append(field23)
field24 = x3d.field()
field24.accessType = "inputOutput"
field24.type = "SFString"
field24.name = "version"
field24.value = "1.1"
field24.appinfo = "legal values: 1.1 or 2.0"

ProtoInterface22.field.append(field24)
field25 = x3d.field()
field25.accessType = "inputOutput"
field25.type = "SFString"
field25.name = "humanoidVersion"
field25.appinfo = "Version of the humanoid being modeled. Hint: HAnim version 2.0"

ProtoInterface22.field.append(field25)
field26 = x3d.field()
field26.accessType = "inputOutput"
field26.type = "MFString"
field26.name = "info"

ProtoInterface22.field.append(field26)
field27 = x3d.field()
field27.accessType = "inputOutput"
field27.type = "SFVec3f"
field27.name = "translation"

ProtoInterface22.field.append(field27)
field28 = x3d.field()
field28.accessType = "inputOutput"
field28.type = "SFRotation"
field28.name = "rotation"

ProtoInterface22.field.append(field28)
field29 = x3d.field()
field29.accessType = "inputOutput"
field29.type = "SFVec3f"
field29.name = "center"

ProtoInterface22.field.append(field29)
field30 = x3d.field()
field30.accessType = "inputOutput"
field30.type = "SFVec3f"
field30.name = "scale"
field30.value = [1,1,1]

ProtoInterface22.field.append(field30)
field31 = x3d.field()
field31.accessType = "inputOutput"
field31.type = "SFRotation"
field31.name = "scaleOrientation"

ProtoInterface22.field.append(field31)
field32 = x3d.field()
field32.accessType = "initializeOnly"
field32.type = "SFVec3f"
field32.name = "bboxCenter"

ProtoInterface22.field.append(field32)
field33 = x3d.field()
field33.accessType = "initializeOnly"
field33.type = "SFVec3f"
field33.name = "bboxSize"
field33.value = [-1,-1,-1]

ProtoInterface22.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOutput"
field34.type = "MFNode"
field34.name = "humanoidBody"
field34.appinfo = "HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton"
field34.documentation = "http://HAnim.org/Specifications/HAnim1.1/#humanoid"

ProtoInterface22.field.append(field34)
field35 = x3d.field()
field35.accessType = "inputOutput"
field35.type = "MFNode"
field35.name = "skeleton"
field35.appinfo = "HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody"
field35.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"

ProtoInterface22.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOutput"
field36.type = "MFNode"
field36.name = "joints"
field36.appinfo = "Container field for Joint nodes"

ProtoInterface22.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOutput"
field37.type = "MFNode"
field37.name = "segments"
field37.appinfo = "Container field for Segment nodes"

ProtoInterface22.field.append(field37)
field38 = x3d.field()
field38.accessType = "inputOutput"
field38.type = "MFNode"
field38.name = "sites"
field38.appinfo = "Container field for Site nodes"

ProtoInterface22.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "MFNode"
field39.name = "viewpoints"
field39.appinfo = "Container field for Viewpoint nodes"

ProtoInterface22.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "SFNode"
field40.name = "skinCoord"
field40.appinfo = "Hint: HAnim version 2.0"

ProtoInterface22.field.append(field40)
field41 = x3d.field()
field41.accessType = "inputOutput"
field41.type = "SFNode"
field41.name = "skinNormal"
field41.appinfo = "Hint: HAnim version 2.0"

ProtoInterface22.field.append(field41)

ProtoDeclare21.ProtoInterface = ProtoInterface22
ProtoBody42 = x3d.ProtoBody()
Transform43 = x3d.Transform()
Transform43.DEF = "HumanoidTransform"
Group44 = x3d.Group()
Group44.DEF = "HumanoidGroup1"
IS45 = x3d.IS()
connect46 = x3d.connect()
connect46.nodeField = "children"
connect46.protoField = "humanoidBody"

IS45.connect.append(connect46)

Group44.IS = IS45

Transform43.children.append(Group44)
Group47 = x3d.Group()
Group47.DEF = "HumanoidGroup2"
IS48 = x3d.IS()
connect49 = x3d.connect()
connect49.nodeField = "children"
connect49.protoField = "skeleton"

IS48.connect.append(connect49)

Group47.IS = IS48

Transform43.children.append(Group47)
Group50 = x3d.Group()
Group50.DEF = "HumanoidGroup3"
IS51 = x3d.IS()
connect52 = x3d.connect()
connect52.nodeField = "children"
connect52.protoField = "viewpoints"

IS51.connect.append(connect52)

Group50.IS = IS51

Transform43.children.append(Group50)
IS53 = x3d.IS()
connect54 = x3d.connect()
connect54.nodeField = "translation"
connect54.protoField = "translation"

IS53.connect.append(connect54)
connect55 = x3d.connect()
connect55.nodeField = "rotation"
connect55.protoField = "rotation"

IS53.connect.append(connect55)
connect56 = x3d.connect()
connect56.nodeField = "scale"
connect56.protoField = "scale"

IS53.connect.append(connect56)
connect57 = x3d.connect()
connect57.nodeField = "scaleOrientation"
connect57.protoField = "scaleOrientation"

IS53.connect.append(connect57)
connect58 = x3d.connect()
connect58.nodeField = "center"
connect58.protoField = "center"

IS53.connect.append(connect58)
connect59 = x3d.connect()
connect59.nodeField = "bboxSize"
connect59.protoField = "bboxSize"

IS53.connect.append(connect59)
connect60 = x3d.connect()
connect60.nodeField = "bboxCenter"
connect60.protoField = "bboxCenter"

IS53.connect.append(connect60)

Transform43.IS = IS53

ProtoBody42.children.append(Transform43)

ProtoDeclare21.ProtoBody = ProtoBody42

Scene13.children.append(ProtoDeclare21)
ProtoDeclare61 = x3d.ProtoDeclare()
ProtoDeclare61.name = "Joint"
ProtoDeclare61.appinfo = "The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid."
ProtoDeclare61.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Joint.html"
ProtoInterface62 = x3d.ProtoInterface()
field63 = x3d.field()
field63.accessType = "inputOutput"
field63.type = "SFString"
field63.name = "name"

ProtoInterface62.field.append(field63)
field64 = x3d.field()
field64.accessType = "inputOutput"
field64.type = "MFFloat"
field64.name = "ulimit"

ProtoInterface62.field.append(field64)
field65 = x3d.field()
field65.accessType = "inputOutput"
field65.type = "MFFloat"
field65.name = "llimit"

ProtoInterface62.field.append(field65)
field66 = x3d.field()
field66.accessType = "inputOutput"
field66.type = "SFRotation"
field66.name = "limitOrientation"

ProtoInterface62.field.append(field66)
field67 = x3d.field()
field67.accessType = "inputOutput"
field67.type = "MFInt32"
field67.name = "skinCoordIndex"

ProtoInterface62.field.append(field67)
field68 = x3d.field()
field68.accessType = "inputOutput"
field68.type = "MFFloat"
field68.name = "skinCoordWeight"

ProtoInterface62.field.append(field68)
field69 = x3d.field()
field69.accessType = "inputOutput"
field69.type = "MFFloat"
field69.name = "stiffness"
field69.value = [0,0,0]

ProtoInterface62.field.append(field69)
field70 = x3d.field()
field70.accessType = "inputOutput"
field70.type = "SFVec3f"
field70.name = "translation"

ProtoInterface62.field.append(field70)
field71 = x3d.field()
field71.accessType = "inputOutput"
field71.type = "SFRotation"
field71.name = "rotation"

ProtoInterface62.field.append(field71)
field72 = x3d.field()
field72.accessType = "inputOutput"
field72.type = "SFVec3f"
field72.name = "scale"
field72.value = [1,1,1]

ProtoInterface62.field.append(field72)
field73 = x3d.field()
field73.accessType = "inputOutput"
field73.type = "SFRotation"
field73.name = "scaleOrientation"

ProtoInterface62.field.append(field73)
field74 = x3d.field()
field74.accessType = "inputOutput"
field74.type = "SFVec3f"
field74.name = "center"

ProtoInterface62.field.append(field74)
field75 = x3d.field()
field75.accessType = "initializeOnly"
field75.type = "SFVec3f"
field75.name = "bboxCenter"

ProtoInterface62.field.append(field75)
field76 = x3d.field()
field76.accessType = "initializeOnly"
field76.type = "SFVec3f"
field76.name = "bboxSize"
field76.value = [-1,-1,-1]

ProtoInterface62.field.append(field76)
field77 = x3d.field()
field77.accessType = "inputOutput"
field77.type = "MFNode"
field77.name = "children"

ProtoInterface62.field.append(field77)
field78 = x3d.field()
field78.accessType = "inputOnly"
field78.type = "MFNode"
field78.name = "addChildren"

ProtoInterface62.field.append(field78)
field79 = x3d.field()
field79.accessType = "inputOnly"
field79.type = "MFNode"
field79.name = "removeChildren"

ProtoInterface62.field.append(field79)

ProtoDeclare61.ProtoInterface = ProtoInterface62
ProtoBody80 = x3d.ProtoBody()
Transform81 = x3d.Transform()
Transform81.DEF = "JointTransform"
IS82 = x3d.IS()
connect83 = x3d.connect()
connect83.nodeField = "translation"
connect83.protoField = "translation"

IS82.connect.append(connect83)
connect84 = x3d.connect()
connect84.nodeField = "rotation"
connect84.protoField = "rotation"

IS82.connect.append(connect84)
connect85 = x3d.connect()
connect85.nodeField = "scale"
connect85.protoField = "scale"

IS82.connect.append(connect85)
connect86 = x3d.connect()
connect86.nodeField = "scaleOrientation"
connect86.protoField = "scaleOrientation"

IS82.connect.append(connect86)
connect87 = x3d.connect()
connect87.nodeField = "center"
connect87.protoField = "center"

IS82.connect.append(connect87)
connect88 = x3d.connect()
connect88.nodeField = "bboxSize"
connect88.protoField = "bboxSize"

IS82.connect.append(connect88)
connect89 = x3d.connect()
connect89.nodeField = "bboxCenter"
connect89.protoField = "bboxCenter"

IS82.connect.append(connect89)
connect90 = x3d.connect()
connect90.nodeField = "addChildren"
connect90.protoField = "addChildren"

IS82.connect.append(connect90)
connect91 = x3d.connect()
connect91.nodeField = "removeChildren"
connect91.protoField = "removeChildren"

IS82.connect.append(connect91)
connect92 = x3d.connect()
connect92.nodeField = "children"
connect92.protoField = "children"

IS82.connect.append(connect92)

Transform81.IS = IS82

ProtoBody80.children.append(Transform81)

ProtoDeclare61.ProtoBody = ProtoBody80

Scene13.children.append(ProtoDeclare61)
ProtoDeclare93 = x3d.ProtoDeclare()
ProtoDeclare93.name = "Segment"
ProtoDeclare93.appinfo = "The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node."
ProtoDeclare93.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Segment.html"
ProtoInterface94 = x3d.ProtoInterface()
field95 = x3d.field()
field95.accessType = "inputOutput"
field95.type = "SFString"
field95.name = "name"

ProtoInterface94.field.append(field95)
field96 = x3d.field()
field96.accessType = "inputOutput"
field96.type = "SFFloat"
field96.name = "mass"

ProtoInterface94.field.append(field96)
field97 = x3d.field()
field97.accessType = "inputOutput"
field97.type = "SFVec3f"
field97.name = "centerOfMass"

ProtoInterface94.field.append(field97)
field98 = x3d.field()
field98.accessType = "inputOutput"
field98.type = "MFFloat"
field98.name = "momentsOfInertia"
field98.value = [0,0,0,0,0,0,0,0,0]

ProtoInterface94.field.append(field98)
field99 = x3d.field()
field99.accessType = "initializeOnly"
field99.type = "SFVec3f"
field99.name = "bboxCenter"

ProtoInterface94.field.append(field99)
field100 = x3d.field()
field100.accessType = "initializeOnly"
field100.type = "SFVec3f"
field100.name = "bboxSize"
field100.value = [-1,-1,-1]

ProtoInterface94.field.append(field100)
field101 = x3d.field()
field101.accessType = "inputOutput"
field101.type = "MFNode"
field101.name = "children"

ProtoInterface94.field.append(field101)
field102 = x3d.field()
field102.accessType = "inputOnly"
field102.type = "MFNode"
field102.name = "addChildren"

ProtoInterface94.field.append(field102)
field103 = x3d.field()
field103.accessType = "inputOnly"
field103.type = "MFNode"
field103.name = "removeChildren"

ProtoInterface94.field.append(field103)
field104 = x3d.field()
field104.accessType = "inputOutput"
field104.type = "SFNode"
field104.name = "coord"
field104.appinfo = "contains Coordinate nodes"

ProtoInterface94.field.append(field104)
field105 = x3d.field()
field105.accessType = "inputOutput"
field105.type = "MFNode"
field105.name = "displacers"
field105.appinfo = "contains Displacer nodes"

ProtoInterface94.field.append(field105)

ProtoDeclare93.ProtoInterface = ProtoInterface94
ProtoBody106 = x3d.ProtoBody()
Group107 = x3d.Group()
Group107.DEF = "SegmentGroup"
IS108 = x3d.IS()
connect109 = x3d.connect()
connect109.nodeField = "bboxSize"
connect109.protoField = "bboxSize"

IS108.connect.append(connect109)
connect110 = x3d.connect()
connect110.nodeField = "bboxCenter"
connect110.protoField = "bboxCenter"

IS108.connect.append(connect110)
connect111 = x3d.connect()
connect111.nodeField = "addChildren"
connect111.protoField = "addChildren"

IS108.connect.append(connect111)
connect112 = x3d.connect()
connect112.nodeField = "removeChildren"
connect112.protoField = "removeChildren"

IS108.connect.append(connect112)
connect113 = x3d.connect()
connect113.nodeField = "children"
connect113.protoField = "children"

IS108.connect.append(connect113)

Group107.IS = IS108

ProtoBody106.children.append(Group107)

ProtoDeclare93.ProtoBody = ProtoBody106

Scene13.children.append(ProtoDeclare93)
ProtoDeclare114 = x3d.ProtoDeclare()
ProtoDeclare114.name = "Site"
ProtoDeclare114.appinfo = "The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds)."
ProtoDeclare114.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Site.html"
ProtoInterface115 = x3d.ProtoInterface()
field116 = x3d.field()
field116.accessType = "inputOutput"
field116.type = "SFString"
field116.name = "name"

ProtoInterface115.field.append(field116)
field117 = x3d.field()
field117.accessType = "inputOutput"
field117.type = "SFVec3f"
field117.name = "translation"

ProtoInterface115.field.append(field117)
field118 = x3d.field()
field118.accessType = "inputOutput"
field118.type = "SFRotation"
field118.name = "rotation"

ProtoInterface115.field.append(field118)
field119 = x3d.field()
field119.accessType = "inputOutput"
field119.type = "SFVec3f"
field119.name = "scale"
field119.value = [1,1,1]

ProtoInterface115.field.append(field119)
field120 = x3d.field()
field120.accessType = "inputOutput"
field120.type = "SFRotation"
field120.name = "scaleOrientation"

ProtoInterface115.field.append(field120)
field121 = x3d.field()
field121.accessType = "inputOutput"
field121.type = "SFVec3f"
field121.name = "center"

ProtoInterface115.field.append(field121)
field122 = x3d.field()
field122.accessType = "initializeOnly"
field122.type = "SFVec3f"
field122.name = "bboxCenter"

ProtoInterface115.field.append(field122)
field123 = x3d.field()
field123.accessType = "initializeOnly"
field123.type = "SFVec3f"
field123.name = "bboxSize"
field123.value = [-1,-1,-1]

ProtoInterface115.field.append(field123)
field124 = x3d.field()
field124.accessType = "inputOutput"
field124.type = "MFNode"
field124.name = "children"

ProtoInterface115.field.append(field124)
field125 = x3d.field()
field125.accessType = "inputOnly"
field125.type = "MFNode"
field125.name = "addChildren"

ProtoInterface115.field.append(field125)
field126 = x3d.field()
field126.accessType = "inputOnly"
field126.type = "MFNode"
field126.name = "removeChildren"

ProtoInterface115.field.append(field126)

ProtoDeclare114.ProtoInterface = ProtoInterface115
ProtoBody127 = x3d.ProtoBody()
Transform128 = x3d.Transform()
Transform128.DEF = "SiteTransform"
IS129 = x3d.IS()
connect130 = x3d.connect()
connect130.nodeField = "translation"
connect130.protoField = "translation"

IS129.connect.append(connect130)
connect131 = x3d.connect()
connect131.nodeField = "rotation"
connect131.protoField = "rotation"

IS129.connect.append(connect131)
connect132 = x3d.connect()
connect132.nodeField = "scale"
connect132.protoField = "scale"

IS129.connect.append(connect132)
connect133 = x3d.connect()
connect133.nodeField = "scaleOrientation"
connect133.protoField = "scaleOrientation"

IS129.connect.append(connect133)
connect134 = x3d.connect()
connect134.nodeField = "center"
connect134.protoField = "center"

IS129.connect.append(connect134)
connect135 = x3d.connect()
connect135.nodeField = "bboxSize"
connect135.protoField = "bboxSize"

IS129.connect.append(connect135)
connect136 = x3d.connect()
connect136.nodeField = "bboxCenter"
connect136.protoField = "bboxCenter"

IS129.connect.append(connect136)
connect137 = x3d.connect()
connect137.nodeField = "addChildren"
connect137.protoField = "addChildren"

IS129.connect.append(connect137)
connect138 = x3d.connect()
connect138.nodeField = "removeChildren"
connect138.protoField = "removeChildren"

IS129.connect.append(connect138)
connect139 = x3d.connect()
connect139.nodeField = "children"
connect139.protoField = "children"

IS129.connect.append(connect139)

Transform128.IS = IS129

ProtoBody127.children.append(Transform128)

ProtoDeclare114.ProtoBody = ProtoBody127

Scene13.children.append(ProtoDeclare114)
ProtoInstance140 = x3d.ProtoInstance()
ProtoInstance140.DEF = "Humanoid"
ProtoInstance140.name = "Humanoid"
fieldValue141 = x3d.fieldValue()
fieldValue141.name = "name"
fieldValue141.value = "nancy"

ProtoInstance140.fieldValue.append(fieldValue141)
fieldValue142 = x3d.fieldValue()
fieldValue142.name = "info"
fieldValue142.value = "\"humanoidVersion=Nancy V1.2b\" \"authorName=Cindy Ballreich\" \"authorEmail=cindy@ballreich.net\" \"copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.\" \"creationDate=Tue Dec 30 08:30:08 PST 1997\" \"usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo www.ballreich.net/vrml/HAnim/small_logo.gif is present and proper credit is given.\""

ProtoInstance140.fieldValue.append(fieldValue142)
fieldValue143 = x3d.fieldValue()
fieldValue143.name = "humanoidBody"
ProtoInstance144 = x3d.ProtoInstance()
ProtoInstance144.DEF = "hanim_humanoid_root"
ProtoInstance144.name = "Joint"
fieldValue145 = x3d.fieldValue()
fieldValue145.name = "name"
fieldValue145.value = "humanoid_root"

ProtoInstance144.fieldValue.append(fieldValue145)
fieldValue146 = x3d.fieldValue()
fieldValue146.name = "center"
fieldValue146.value = "-0.00405 0.855 -0.000113"

ProtoInstance144.fieldValue.append(fieldValue146)
fieldValue147 = x3d.fieldValue()
fieldValue147.name = "children"
ProtoInstance148 = x3d.ProtoInstance()
ProtoInstance148.DEF = "hanim_sacroiliac"
ProtoInstance148.name = "Joint"
fieldValue149 = x3d.fieldValue()
fieldValue149.name = "name"
fieldValue149.value = "sacroiliac"

ProtoInstance148.fieldValue.append(fieldValue149)
fieldValue150 = x3d.fieldValue()
fieldValue150.name = "center"
fieldValue150.value = "0 1.01 -0.0204"

ProtoInstance148.fieldValue.append(fieldValue150)
fieldValue151 = x3d.fieldValue()
fieldValue151.name = "children"
ProtoInstance152 = x3d.ProtoInstance()
ProtoInstance152.DEF = "hanim_pelvis"
ProtoInstance152.name = "Segment"
fieldValue153 = x3d.fieldValue()
fieldValue153.name = "name"
fieldValue153.value = "pelvis"

ProtoInstance152.fieldValue.append(fieldValue153)
fieldValue154 = x3d.fieldValue()
fieldValue154.name = "children"
Shape155 = x3d.Shape()
Shape155.DEF = "_1"
Appearance156 = x3d.Appearance()
Material157 = x3d.Material()
Material157.DEF = "Pants_Color"
Material157.ambientIntensity = 0.25
Material157.diffuseColor = [0.054,0.233,0.39]

Appearance156.material = Material157

Shape155.appearance = Appearance156
IndexedFaceSet158 = x3d.IndexedFaceSet()
IndexedFaceSet158.creaseAngle = 1.14
IndexedFaceSet158.coordIndex = [0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1]
Coordinate159 = x3d.Coordinate()
Coordinate159.point = [(0, 1.06, 0.0218),(0.0561, 1.07, 0.00726),(0.0851, 1.07, -0.0115),(0.104, 1.07, -0.0497),(0.0851, 1.07, -0.0851),(0.032, 1.06, -0.0985),(0.0873, 1.04, 0.0078),(0.033, 1.04, 0.0395),(0.123, 1.05, -0.0405),(0.0609, 1.02, -0.106),(0.0894, 0.996, -0.106),(0.143, 1, -0.0309),(0.117, 1, 0.0164),(0.0314, 0.999, 0.0502),(0.0314, 0.96, -0.13),(0.156, 0.966, -0.0405),(0.156, 0.968, -0.00724),(0.0341, 0.954, 0.0513),(0.115, 0.96, -0.0916),(0.121, 0.926, 0.0352),(0.0357, 0.92, 0.0497),(0.0314, 0.91, -0.146),(0.0991, 0.91, -0.131),(0.169, 0.883, -0.0448),(0.169, 0.885, -0.00939),(0.123, 0.873, 0.0384),(0.0926, 0.872, 0.047),(0.0325, 0.873, 0.0287),(0.0293, 0.866, -0.142),(0.102, 0.869, -0.131),(0.129, 0.868, -0.103),(0.0314, 0.84, -0.125),(0.101, 0.844, -0.122),(0.133, 0.846, -0.0878),(0.0653, 0.835, 0.0132),(0.0615, 0.824, -0.111),(0.0985, 0.823, -0.101),(0.132, 0.826, -0.0448),(0.0609, 0.821, -0.0158),(0.0599, 0.812, -0.0545),(0, 1.08, -0.0266),(-0.0561, 1.07, 0.00726),(-0.0851, 1.07, -0.0115),(-0.104, 1.07, -0.0497),(-0.0851, 1.07, -0.0851),(-0.032, 1.06, -0.0985),(-0.0873, 1.04, 0.0078),(-0.033, 1.04, 0.0395),(-0.123, 1.05, -0.0405),(-0.0609, 1.02, -0.106),(0, 1.02, -0.108),(-0.0894, 0.996, -0.106),(-0.143, 1, -0.0309),(-0.144, 1, -0.011),(-0.117, 1, 0.0164),(-0.0314, 0.999, 0.0502),(0, 0.961, -0.123),(-0.0314, 0.96, -0.13),(-0.156, 0.966, -0.0405),(-0.156, 0.968, -0.00724),(-0.0341, 0.954, 0.0513),(-0.115, 0.96, -0.0916),(-0.121, 0.926, 0.0352),(-0.0357, 0.92, 0.0497),(0, 0.91, -0.127),(-0.0314, 0.91, -0.146),(-0.0991, 0.91, -0.131),(-0.167, 0.911, -0.0448),(-0.167, 0.912, -0.00671),(0, 0.883, -0.129),(-0.123, 0.873, 0.0384),(-0.0926, 0.872, 0.047),(-0.0325, 0.873, 0.0287),(-0.0293, 0.866, -0.142),(-0.102, 0.869, -0.131),(-0.129, 0.868, -0.103),(-0.166, 0.863, -0.0148),(0, 0.863, -0.00456),(-0.166, 0.862, -0.0459),(0, 0.858, -0.1),(-0.0314, 0.84, -0.125),(-0.101, 0.844, -0.122),(-0.0653, 0.835, 0.0132),(0, 0.839, -0.0217),(0, 0.835, -0.0867),(-0.0615, 0.824, -0.111),(-0.0985, 0.823, -0.101),(-0.132, 0.826, -0.0448),(-0.0609, 0.821, -0.0158),(0, 0.831, -0.0626),(-0.0599, 0.812, -0.0545)]

IndexedFaceSet158.coord = Coordinate159

Shape155.geometry = IndexedFaceSet158

fieldValue154.children.append(Shape155)

ProtoInstance152.fieldValue.append(fieldValue154)

fieldValue151.children.append(ProtoInstance152)
ProtoInstance160 = x3d.ProtoInstance()
ProtoInstance160.DEF = "hanim_l_hip"
ProtoInstance160.name = "Joint"
fieldValue161 = x3d.fieldValue()
fieldValue161.name = "name"
fieldValue161.value = "l_hip"

ProtoInstance160.fieldValue.append(fieldValue161)
fieldValue162 = x3d.fieldValue()
fieldValue162.name = "center"
fieldValue162.value = "0.122 0.888271 -0.0693267"

ProtoInstance160.fieldValue.append(fieldValue162)
fieldValue163 = x3d.fieldValue()
fieldValue163.name = "children"
ProtoInstance164 = x3d.ProtoInstance()
ProtoInstance164.DEF = "hanim_l_thigh"
ProtoInstance164.name = "Segment"
fieldValue165 = x3d.fieldValue()
fieldValue165.name = "name"
fieldValue165.value = "l_thigh"

ProtoInstance164.fieldValue.append(fieldValue165)
fieldValue166 = x3d.fieldValue()
fieldValue166.name = "children"
Shape167 = x3d.Shape()
Shape167.DEF = "_2"
Appearance168 = x3d.Appearance()
Material169 = x3d.Material()
Material169.USE = "Pants_Color"

Appearance168.material = Material169

Shape167.appearance = Appearance168
IndexedFaceSet170 = x3d.IndexedFaceSet()
IndexedFaceSet170.creaseAngle = 1.32
IndexedFaceSet170.coordIndex = [0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1]
Coordinate171 = x3d.Coordinate()
Coordinate171.point = [(0.0969, 0.804, -0.0486),(0.101, 0.876, 0.0336),(0.17, 0.894, -0.00778),(0.17, 0.891, -0.076),(0.124, 0.858, -0.129),(0.076, 0.843, -0.143),(0.025, 0.819, -0.0889),(0.0507, 0.847, 0.0196),(0.00349, 0.826, -0.0287),(0.0991, 0.808, 0.0406),(0.161, 0.814, -0.00187),(0.165, 0.808, -0.0755),(0.122, 0.788, -0.126),(0.00993, 0.762, -0.0937),(0.00993, 0.762, -0.0309),(0.0491, 0.777, 0.0185),(0.0755, 0.766, -0.139),(0.13, 0.597, -0.00618),(0.132, 0.6, -0.0593),(0.108, 0.603, -0.105),(0.0722, 0.601, -0.118),(0.0314, 0.59, -0.0953),(0.0239, 0.566, -0.0427),(0.047, 0.566, 0.0051),(0.0878, 0.581, 0.0217),(0.114, 0.499, -0.0132),(0.116, 0.488, -0.061),(0.103, 0.567, -0.0991),(0.0362, 0.557, -0.0926),(0.025, 0.486, -0.047),(0.0507, 0.497, -0.00188),(0.0862, 0.513, 0.018),(0.0733, 0.579, -0.108)]

IndexedFaceSet170.coord = Coordinate171

Shape167.geometry = IndexedFaceSet170

fieldValue166.children.append(Shape167)

ProtoInstance164.fieldValue.append(fieldValue166)

fieldValue163.children.append(ProtoInstance164)
ProtoInstance172 = x3d.ProtoInstance()
ProtoInstance172.DEF = "hanim_l_knee"
ProtoInstance172.name = "Joint"
fieldValue173 = x3d.fieldValue()
fieldValue173.name = "name"
fieldValue173.value = "l_knee"

ProtoInstance172.fieldValue.append(fieldValue173)
fieldValue174 = x3d.fieldValue()
fieldValue174.name = "center"
fieldValue174.value = "0.0738 0.517 -0.0284"

ProtoInstance172.fieldValue.append(fieldValue174)
fieldValue175 = x3d.fieldValue()
fieldValue175.name = "children"
ProtoInstance176 = x3d.ProtoInstance()
ProtoInstance176.DEF = "hanim_l_calf"
ProtoInstance176.name = "Segment"
fieldValue177 = x3d.fieldValue()
fieldValue177.name = "name"
fieldValue177.value = "l_calf"

ProtoInstance176.fieldValue.append(fieldValue177)
fieldValue178 = x3d.fieldValue()
fieldValue178.name = "children"
Shape179 = x3d.Shape()
Shape179.DEF = "_3"
Appearance180 = x3d.Appearance()
Material181 = x3d.Material()
Material181.USE = "Pants_Color"

Appearance180.material = Material181

Shape179.appearance = Appearance180
IndexedFaceSet182 = x3d.IndexedFaceSet()
IndexedFaceSet182.creaseAngle = 1.57
IndexedFaceSet182.coordIndex = [2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1]
Coordinate183 = x3d.Coordinate()
Coordinate183.point = [(0.0883, 0.532, -0.00349),(0.0609, 0.533, -0.00833),(0.0814, 0.55, -0.0395),(0.0529, 0.536, -0.0368),(0.0577, 0.544, -0.0577),(0.0722, 0.546, -0.0717),(0.0975, 0.54, -0.0647),(0.105, 0.539, -0.0438),(0.104, 0.539, -0.0223),(0.0862, 0.506, 0.0158),(0.101, 0.51, -0.0798),(0.0706, 0.51, -0.101),(0.0406, 0.513, -0.0744),(0.0368, 0.51, -0.0357),(0.0556, 0.506, -0.000272),(0.117, 0.508, -0.0169),(0.0878, 0.361, -0.0126),(0.123, 0.363, -0.04),(0.123, 0.363, -0.0663),(0.107, 0.367, -0.107),(0.0588, 0.365, -0.122),(0.0228, 0.358, -0.0926),(0.0239, 0.358, -0.0475),(0.0497, 0.358, -0.0234),(0.118, 0.311, -0.0411),(0.118, 0.309, -0.0685),(0.105, 0.31, -0.108),(0.0572, 0.308, -0.123),(0.0201, 0.309, -0.0937),(0.0191, 0.311, -0.0508),(0.0475, 0.307, -0.0282),(0.0883, 0.309, -0.018),(0.0959, 0.124, -0.04),(0.0905, 0.12, -0.0647),(0.0738, 0.117, -0.0814),(0.0373, 0.121, -0.0636),(0.0416, 0.124, -0.0416),(0.0744, 0.13, -0.0212),(0.0561, 0.13, -0.0245),(0.0529, 0.121, -0.0873),(0.0948, 0.0897, -0.0368),(0.0916, 0.0779, -0.0604),(0.0717, 0.0854, -0.0765),(0.0406, 0.0918, -0.0626),(0.0384, 0.0881, -0.0363),(0.054, 0.0972, -0.0175),(0.0765, 0.11, -0.0169),(0.0486, 0.0999, -0.0835)]

IndexedFaceSet182.coord = Coordinate183

Shape179.geometry = IndexedFaceSet182

fieldValue178.children.append(Shape179)

ProtoInstance176.fieldValue.append(fieldValue178)

fieldValue175.children.append(ProtoInstance176)
ProtoInstance184 = x3d.ProtoInstance()
ProtoInstance184.DEF = "hanim_l_ankle"
ProtoInstance184.name = "Joint"
fieldValue185 = x3d.fieldValue()
fieldValue185.name = "name"
fieldValue185.value = "l_ankle"

ProtoInstance184.fieldValue.append(fieldValue185)
fieldValue186 = x3d.fieldValue()
fieldValue186.name = "center"
fieldValue186.value = "0.0645 0.0719 -0.048"

ProtoInstance184.fieldValue.append(fieldValue186)
fieldValue187 = x3d.fieldValue()
fieldValue187.name = "children"
ProtoInstance188 = x3d.ProtoInstance()
ProtoInstance188.DEF = "hanim_l_hindfoot"
ProtoInstance188.name = "Segment"
fieldValue189 = x3d.fieldValue()
fieldValue189.name = "name"
fieldValue189.value = "l_hindfoot"

ProtoInstance188.fieldValue.append(fieldValue189)
fieldValue190 = x3d.fieldValue()
fieldValue190.name = "children"
Shape191 = x3d.Shape()
Shape191.DEF = "_4"
Appearance192 = x3d.Appearance()
Material193 = x3d.Material()
Material193.DEF = "Shoe_Color"
Material193.ambientIntensity = 0.25

Appearance192.material = Material193

Shape191.appearance = Appearance192
IndexedFaceSet194 = x3d.IndexedFaceSet()
IndexedFaceSet194.creaseAngle = 1.57
IndexedFaceSet194.coordIndex = [2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1]
Coordinate195 = x3d.Coordinate()
Coordinate195.point = [(0.0529, 0, -0.0923),(0.0863, 0, -0.0862),(0.0727, 0, -0.0994),(0.0863, 0.0219, -0.0862),(0.0727, 0.0219, -0.0994),(0.1, 0, -0.0594),(0.1, 0.0219, -0.0594),(0.113, 0, 0.0645),(0.113, 0.0219, 0.0645),(0.112, 0, 0.117),(0.112, 0.0156, 0.117),(0.0701, 0, 0.146),(0.0701, 0.0156, 0.146),(0.0468, 0, 0.153),(0.0468, 0.0156, 0.153),(0.0215, 0, 0.146),(0.0215, 0.0156, 0.146),(0.0165, 0, 0.125),(0.0165, 0.0156, 0.125),(0.0211, 0, 0.0377),(0.0211, 0.0219, 0.0377),(0.0393, 0, -0.0129),(0.0393, 0.0219, -0.0129),(0.0433, 0, -0.0534),(0.0433, 0.0219, -0.0534),(0.0529, 0.0219, -0.0923),(0.0305, 0.0253, 0.0938),(0.0505, 0.0253, 0.099),(0.0854, 0.0253, 0.0834),(0.102, 0.0253, 0.0707),(0.0568, 0.0573, -0.0918),(0.0492, 0.0573, -0.0497),(0.0435, 0.0573, -0.0225),(0.0442, 0.0573, 0.0235),(0.0623, 0.0573, 0.0366),(0.0911, 0.0573, 0.0159),(0.0962, 0.0573, -0.0121),(0.0911, 0.0573, -0.0482),(0.0758, 0.0573, -0.0899),(0.0676, 0.0573, -0.0962),(0.0578, 0.0953, -0.0896),(0.0489, 0.0953, -0.0757),(0.0447, 0.0953, -0.0432),(0.0451, 0.0953, -0.0128),(0.0624, 0.0953, -0.00466),(0.0857, 0.0953, -0.0134),(0.0953, 0.0953, -0.038),(0.0843, 0.0953, -0.0803),(0.0761, 0.0953, -0.0889),(0.0682, 0.0953, -0.0929),(0.0675, 0.13, -0.0608)]

IndexedFaceSet194.coord = Coordinate195

Shape191.geometry = IndexedFaceSet194

fieldValue190.children.append(Shape191)

ProtoInstance188.fieldValue.append(fieldValue190)

fieldValue187.children.append(ProtoInstance188)

ProtoInstance184.fieldValue.append(fieldValue187)

fieldValue175.children.append(ProtoInstance184)

ProtoInstance172.fieldValue.append(fieldValue175)

fieldValue163.children.append(ProtoInstance172)

ProtoInstance160.fieldValue.append(fieldValue163)

fieldValue151.children.append(ProtoInstance160)
ProtoInstance196 = x3d.ProtoInstance()
ProtoInstance196.DEF = "hanim_r_hip"
ProtoInstance196.name = "Joint"
fieldValue197 = x3d.fieldValue()
fieldValue197.name = "name"
fieldValue197.value = "r_hip"

ProtoInstance196.fieldValue.append(fieldValue197)
fieldValue198 = x3d.fieldValue()
fieldValue198.name = "center"
fieldValue198.value = "-0.11 0.892362 -0.0732533"

ProtoInstance196.fieldValue.append(fieldValue198)
fieldValue199 = x3d.fieldValue()
fieldValue199.name = "children"
ProtoInstance200 = x3d.ProtoInstance()
ProtoInstance200.DEF = "hanim_r_thigh"
ProtoInstance200.name = "Segment"
fieldValue201 = x3d.fieldValue()
fieldValue201.name = "name"
fieldValue201.value = "r_thigh"

ProtoInstance200.fieldValue.append(fieldValue201)
fieldValue202 = x3d.fieldValue()
fieldValue202.name = "children"
Shape203 = x3d.Shape()
Shape203.DEF = "_5"
Appearance204 = x3d.Appearance()
Material205 = x3d.Material()
Material205.USE = "Pants_Color"

Appearance204.material = Material205

Shape203.appearance = Appearance204
IndexedFaceSet206 = x3d.IndexedFaceSet()
IndexedFaceSet206.creaseAngle = 1.61
IndexedFaceSet206.coordIndex = [5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1]
Coordinate207 = x3d.Coordinate()
Coordinate207.point = [(-0.0969, 0.804, -0.0486),(-0.101, 0.876, 0.0336),(-0.17, 0.894, -0.00778),(-0.17, 0.891, -0.076),(-0.124, 0.858, -0.129),(-0.076, 0.843, -0.143),(-0.025, 0.819, -0.0889),(-0.0507, 0.847, 0.0196),(-0.00349, 0.826, -0.0287),(-0.0991, 0.808, 0.0406),(-0.161, 0.814, -0.00187),(-0.165, 0.808, -0.0755),(-0.122, 0.788, -0.126),(-0.00993, 0.762, -0.0937),(-0.00993, 0.762, -0.0309),(-0.0491, 0.777, 0.0185),(-0.0755, 0.766, -0.139),(-0.13, 0.597, -0.00618),(-0.132, 0.6, -0.0593),(-0.108, 0.603, -0.105),(-0.0722, 0.601, -0.118),(-0.0314, 0.59, -0.0953),(-0.0239, 0.566, -0.0427),(-0.047, 0.566, 0.0051),(-0.0878, 0.581, 0.0217),(-0.114, 0.499, -0.0132),(-0.116, 0.488, -0.061),(-0.103, 0.567, -0.0991),(-0.0362, 0.557, -0.0926),(-0.025, 0.486, -0.047),(-0.0507, 0.497, -0.00188),(-0.0862, 0.513, 0.018)]

IndexedFaceSet206.coord = Coordinate207

Shape203.geometry = IndexedFaceSet206

fieldValue202.children.append(Shape203)

ProtoInstance200.fieldValue.append(fieldValue202)

fieldValue199.children.append(ProtoInstance200)
ProtoInstance208 = x3d.ProtoInstance()
ProtoInstance208.DEF = "hanim_r_knee"
ProtoInstance208.name = "Joint"
fieldValue209 = x3d.fieldValue()
fieldValue209.name = "name"
fieldValue209.value = "r_knee"

ProtoInstance208.fieldValue.append(fieldValue209)
fieldValue210 = x3d.fieldValue()
fieldValue210.name = "center"
fieldValue210.value = "-0.0699 0.51 -0.0166"

ProtoInstance208.fieldValue.append(fieldValue210)
fieldValue211 = x3d.fieldValue()
fieldValue211.name = "children"
ProtoInstance212 = x3d.ProtoInstance()
ProtoInstance212.DEF = "hanim_r_calf"
ProtoInstance212.name = "Segment"
fieldValue213 = x3d.fieldValue()
fieldValue213.name = "name"
fieldValue213.value = "r_calf"

ProtoInstance212.fieldValue.append(fieldValue213)
fieldValue214 = x3d.fieldValue()
fieldValue214.name = "children"
Shape215 = x3d.Shape()
Shape215.DEF = "_6"
Appearance216 = x3d.Appearance()
Material217 = x3d.Material()
Material217.USE = "Pants_Color"

Appearance216.material = Material217

Shape215.appearance = Appearance216
IndexedFaceSet218 = x3d.IndexedFaceSet()
IndexedFaceSet218.creaseAngle = 1.57
IndexedFaceSet218.coordIndex = [14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1]
Coordinate219 = x3d.Coordinate()
Coordinate219.point = [(-0.123, 0.363, -0.0663),(-0.123, 0.363, -0.04),(-0.118, 0.309, -0.0685),(-0.118, 0.311, -0.0411),(-0.117, 0.508, -0.0169),(-0.107, 0.367, -0.107),(-0.105, 0.539, -0.0438),(-0.105, 0.31, -0.108),(-0.104, 0.539, -0.0223),(-0.101, 0.51, -0.0798),(-0.0975, 0.54, -0.0647),(-0.0948, 0.0897, -0.0368),(-0.0916, 0.0779, -0.0604),(-0.0905, 0.12, -0.0647),(-0.0883, 0.532, -0.00349),(-0.0883, 0.309, -0.018),(-0.0878, 0.361, -0.0126),(-0.0862, 0.506, 0.0158),(-0.0814, 0.55, -0.0395),(-0.0765, 0.11, -0.0169),(-0.0744, 0.13, -0.0212),(-0.0738, 0.117, -0.0814),(-0.0722, 0.546, -0.0717),(-0.0717, 0.0854, -0.0765),(-0.0706, 0.51, -0.101),(-0.0609, 0.533, -0.00833),(-0.0588, 0.365, -0.122),(-0.0577, 0.544, -0.0577),(-0.0572, 0.308, -0.123),(-0.0561, 0.13, -0.0245),(-0.0556, 0.506, -0.000272),(-0.054, 0.0972, -0.0175),(-0.0529, 0.536, -0.0368),(-0.0529, 0.121, -0.0873),(-0.0497, 0.358, -0.0234),(-0.0486, 0.0999, -0.0835),(-0.0475, 0.307, -0.0282),(-0.0416, 0.124, -0.0416),(-0.0406, 0.0918, -0.0626),(-0.0406, 0.513, -0.0744),(-0.0384, 0.0881, -0.0363),(-0.0373, 0.121, -0.0636),(-0.0368, 0.51, -0.0357),(-0.0239, 0.358, -0.0475),(-0.0228, 0.358, -0.0926),(-0.0201, 0.309, -0.0937),(-0.0191, 0.311, -0.0508),(-0.0985, 0.125, -0.0375)]

IndexedFaceSet218.coord = Coordinate219

Shape215.geometry = IndexedFaceSet218

fieldValue214.children.append(Shape215)

ProtoInstance212.fieldValue.append(fieldValue214)

fieldValue211.children.append(ProtoInstance212)
ProtoInstance220 = x3d.ProtoInstance()
ProtoInstance220.DEF = "hanim_r_ankle"
ProtoInstance220.name = "Joint"
fieldValue221 = x3d.fieldValue()
fieldValue221.name = "name"
fieldValue221.value = "r_ankle"

ProtoInstance220.fieldValue.append(fieldValue221)
fieldValue222 = x3d.fieldValue()
fieldValue222.name = "center"
fieldValue222.value = "-0.064 0.0753 -0.0412"

ProtoInstance220.fieldValue.append(fieldValue222)
fieldValue223 = x3d.fieldValue()
fieldValue223.name = "children"
ProtoInstance224 = x3d.ProtoInstance()
ProtoInstance224.DEF = "hanim_r_hindfoot"
ProtoInstance224.name = "Segment"
fieldValue225 = x3d.fieldValue()
fieldValue225.name = "name"
fieldValue225.value = "r_hindfoot"

ProtoInstance224.fieldValue.append(fieldValue225)
fieldValue226 = x3d.fieldValue()
fieldValue226.name = "children"
Shape227 = x3d.Shape()
Shape227.DEF = "_7"
Appearance228 = x3d.Appearance()
Material229 = x3d.Material()
Material229.USE = "Shoe_Color"

Appearance228.material = Material229

Shape227.appearance = Appearance228
IndexedFaceSet230 = x3d.IndexedFaceSet()
IndexedFaceSet230.creaseAngle = 1.57
IndexedFaceSet230.coordIndex = [6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1]
Coordinate231 = x3d.Coordinate()
Coordinate231.point = [(-0.0727, 0, -0.0994),(-0.1, 0, -0.0594),(-0.0701, 0, 0.146),(-0.0468, 0, 0.153),(-0.0215, 0, 0.146),(-0.0433, 0, -0.0534),(-0.0529, 0, -0.0923),(-0.0727, 0.0219, -0.0994),(-0.0863, 0.0219, -0.0862),(-0.1, 0.0219, -0.0594),(-0.108, 0.0219, -0.00479),(-0.112, 0.0156, 0.117),(-0.0701, 0.0156, 0.146),(-0.0468, 0.0156, 0.153),(-0.0215, 0.0156, 0.146),(-0.0165, 0.017, 0.0777),(-0.0433, 0.0219, -0.0534),(-0.0529, 0.0219, -0.0923),(-0.0445, 0.0273, -0.0189),(-0.0265, 0.0253, 0.0549),(-0.0305, 0.0253, 0.0938),(-0.069, 0.0253, 0.0938),(-0.102, 0.0253, 0.0707),(-0.0568, 0.0573, -0.0918),(-0.0492, 0.0573, -0.0497),(-0.0424, 0.0573, -0.00142),(-0.0478, 0.0573, 0.0341),(-0.0623, 0.0573, 0.0366),(-0.0864, 0.0573, 0.0245),(-0.0962, 0.0573, -0.0121),(-0.0845, 0.0573, -0.0764),(-0.0758, 0.0573, -0.0899),(-0.0676, 0.0573, -0.0962),(-0.0578, 0.0953, -0.0896),(-0.0489, 0.0953, -0.0757),(-0.0459, 0.0953, -0.0615),(-0.0435, 0.0953, -0.0292),(-0.0485, 0.0953, -0.00582),(-0.0624, 0.0953, -0.00466),(-0.0857, 0.0953, -0.0134),(-0.0953, 0.0953, -0.038),(-0.0843, 0.0953, -0.0803),(-0.0761, 0.0953, -0.0889),(-0.0682, 0.0953, -0.0929),(-0.0675, 0.13, -0.0608),(-0.0165, 0, 0.125),(-0.112, 0, 0.117),(-0.0165, 0, 0.0777),(-0.0393, 0, -0.0129),(-0.108, 0, -0.00479),(-0.0863, 0, -0.0862)]

IndexedFaceSet230.coord = Coordinate231

Shape227.geometry = IndexedFaceSet230

fieldValue226.children.append(Shape227)

ProtoInstance224.fieldValue.append(fieldValue226)

fieldValue223.children.append(ProtoInstance224)

ProtoInstance220.fieldValue.append(fieldValue223)

fieldValue211.children.append(ProtoInstance220)

ProtoInstance208.fieldValue.append(fieldValue211)

fieldValue199.children.append(ProtoInstance208)

ProtoInstance196.fieldValue.append(fieldValue199)

fieldValue151.children.append(ProtoInstance196)

ProtoInstance148.fieldValue.append(fieldValue151)

fieldValue147.children.append(ProtoInstance148)
ProtoInstance232 = x3d.ProtoInstance()
ProtoInstance232.DEF = "hanim_vl1"
ProtoInstance232.name = "Joint"
fieldValue233 = x3d.fieldValue()
fieldValue233.name = "name"
fieldValue233.value = "vl1"

ProtoInstance232.fieldValue.append(fieldValue233)
fieldValue234 = x3d.fieldValue()
fieldValue234.name = "center"
fieldValue234.value = "-0.00405 1.07 -0.0275"

ProtoInstance232.fieldValue.append(fieldValue234)
fieldValue235 = x3d.fieldValue()
fieldValue235.name = "children"
ProtoInstance236 = x3d.ProtoInstance()
ProtoInstance236.DEF = "hanim_c7"
ProtoInstance236.name = "Segment"
fieldValue237 = x3d.fieldValue()
fieldValue237.name = "name"
fieldValue237.value = "l1"

ProtoInstance236.fieldValue.append(fieldValue237)
fieldValue238 = x3d.fieldValue()
fieldValue238.name = "children"
Shape239 = x3d.Shape()
Shape239.DEF = "_8"
Appearance240 = x3d.Appearance()
Material241 = x3d.Material()
Material241.DEF = "Shirt_Color"
Material241.ambientIntensity = 0.25
Material241.diffuseColor = [0.6,0.0745,0.1137]

Appearance240.material = Material241
ImageTexture242 = x3d.ImageTexture()
ImageTexture242.DEF = "small_logo_Tex"
ImageTexture242.url = ["small_logo.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/small_logo.gif"]

Appearance240.texture = ImageTexture242

Shape239.appearance = Appearance240
IndexedFaceSet243 = x3d.IndexedFaceSet()
IndexedFaceSet243.creaseAngle = 1.59
IndexedFaceSet243.coordIndex = [0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1]
TextureCoordinate244 = x3d.TextureCoordinate()
TextureCoordinate244.point = [(0.1611, -0.02056),(0.9468, -0.02056),(0.9739, 0.9344),(-0.137, 1.094),(0.1973, 0.6424),(0.2231, 0.04876),(0.5054, 0.2466),(0.5054, 0.5929),(0.8135, 0.6424),(0.6282, 0.1972),(0.7876, 0.04876),(0.5054, -0.05018),(0.6282, -0.05018),(0.5054, 0.8403),(0.7989, 1.038),(0.5054, 1.038),(0.8248, 0.7908),(0.186, 0.7908),(0.2118, 1.038),(0.6427, 0.7908),(-0.01977, 0.5929),(-0.03324, 0.7908),(1.044, 0.7908),(1.031, 0.5929),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0),(0, 0)]

IndexedFaceSet243.texCoord = TextureCoordinate244
Coordinate245 = x3d.Coordinate()
Coordinate245.point = [(0.043, 1.25, 0.0614),(0.101, 1.25, 0.0614),(0.103, 1.31, 0.0195),(0.021, 1.32, 0.0276),(0.0572, 1.27, -0.153),(0.0524, 1.15, -0.134),(0, 1.19, -0.14),(0, 1.26, -0.147),(-0.0572, 1.27, -0.153),(-0.0228, 1.18, -0.14),(-0.0524, 1.15, -0.134),(0, 1.13, -0.126),(-0.0228, 1.13, -0.124),(0, 1.31, -0.146),(-0.0545, 1.35, -0.138),(0, 1.35, -0.136),(-0.0593, 1.3, -0.151),(0.0593, 1.3, -0.151),(0.0545, 1.35, -0.138),(-0.0255, 1.3, -0.146),(0.0975, 1.26, -0.15),(0.1, 1.3, -0.148),(-0.1, 1.3, -0.148),(-0.0975, 1.26, -0.15),(-0.117, 1.41, -0.0395),(-0.0674, 1.45, -0.0314),(-0.0926, 1.41, -0.0937),(-0.124, 1.4, -0.0706),(-0.0583, 1.44, -0.0615),(-0.0228, 1.46, -0.0872),(-0.0534, 1.42, -0.112),(-0.0228, 1.42, 0.00351),(-0.0593, 1.43, -0.0185),(-0.0787, 1.39, -0.00293),(-0.112, 1.4, -0.0131),(-0.164, 1.39, -0.0373),(-0.0153, 1.39, 0.0159),(-0.0953, 1.35, -0.136),(-0.0545, 1.35, -0.138),(-0.139, 1.34, 0.00297),(-0.137, 1.34, -0.0368),(0, 1.35, -0.136),(-0.156, 1.35, -0.0915),(-0.132, 1.29, -0.127),(-0.1, 1.3, -0.148),(-0.0418, 1.35, 0.0168),(-0.013, 1.37, 0.0167),(-0.151, 1.28, -0.0878),(-0.136, 1.32, -0.0406),(-0.124, 1.26, -0.125),(-0.0975, 1.26, -0.15),(0.00228, 1.37, 0.0167),(-0.00959, 1.32, 0.0276),(-0.0918, 1.31, 0.0195),(-0.141, 1.25, -0.0744),(-0.0316, 1.25, 0.0614),(-0.00261, 1.25, 0.0458),(-0.0611, 1.25, 0.0668),(-0.0896, 1.25, 0.0614),(-0.126, 1.24, 0.012),(-0.126, 1.22, 0.0141),(-0.129, 1.17, -0.0523),(-0.115, 1.16, -0.105),(-0.0851, 1.18, -0.134),(-0.0524, 1.15, -0.134),(-0.083, 1.13, -0.122),(-0.117, 1.15, -0.018),(-0.11, 1.1, -0.0846),(-0.0808, 1.1, -0.111),(-0.0228, 1.13, -0.124),(-0.0524, 1.1, -0.119),(0, 1.13, -0.126),(-0.0228, 1.1, -0.116),(-0.0563, 1.15, 0.0377),(-0.00476, 1.18, 0.0458),(-0.0343, 1.18, 0.0485),(-0.0966, 1.15, -0.00413),(-0.12, 1.1, -0.0373),(-0.121, 1.07, -0.0356),(-0.106, 1.07, -0.0711),(-0.0475, 1.06, -0.105),(0, 1.08, 0.0556),(-0.0787, 1.08, 0.0347),(-0.103, 1.08, 0.00296),(-0.0975, 1.01, -0.0873),(-0.134, 0.998, -0.0314),(-0.0475, 1.02, -0.109),(-0.0325, 1.02, 0.0529),(0, 1.02, 0.0422),(-0.0975, 1.02, 0.0132),(0.0926, 1.41, -0.0937),(0.0674, 1.45, -0.0314),(0.117, 1.41, -0.0395),(0.124, 1.4, -0.0706),(0.0583, 1.44, -0.0615),(0.0534, 1.42, -0.112),(0.0228, 1.46, -0.0872),(0, 1.4, -0.112),(0.0787, 1.39, -0.00293),(0.0593, 1.43, -0.0185),(0.0228, 1.42, 0.00351),(0.112, 1.4, -0.0131),(0.164, 1.39, -0.0373),(0.0153, 1.39, 0.0159),(0.0953, 1.35, -0.136),(0.0545, 1.35, -0.138),(0.139, 1.34, 0.00297),(0.156, 1.35, -0.0915),(0.132, 1.29, -0.127),(0.151, 1.28, -0.0878),(0.1, 1.3, -0.148),(0.137, 1.34, -0.0368),(0.147, 1.32, -0.0406),(0.124, 1.26, -0.125),(0.0975, 1.26, -0.15),(0.021, 1.32, 0.0276),(0.0532, 1.35, 0.0168),(0.103, 1.31, 0.0195),(0.135, 1.29, -0.0406),(0.141, 1.25, -0.0744),(0.132, 1.18, -0.083),(0.134, 1.19, -0.0572),(0.014, 1.25, 0.0458),(0.043, 1.25, 0.0614),(0.101, 1.25, 0.0614),(0.138, 1.24, 0.012),(0.065, 1.23, 0.0743),(0.115, 1.16, -0.105),(0.0851, 1.18, -0.134),(0.0524, 1.15, -0.134),(0.043, 1.2, 0.0641),(0.127, 1.14, -0.0427),(0.083, 1.13, -0.122),(0.0162, 1.18, 0.0458),(0.0457, 1.18, 0.0485),(0.117, 1.15, -0.018),(0.11, 1.1, -0.0846),(0.0808, 1.1, -0.111),(0.0524, 1.1, -0.119),(0.0228, 1.1, -0.116),(0.108, 1.15, -0.00413),(0.12, 1.1, -0.0373),(0.121, 1.07, -0.0356),(0.106, 1.07, -0.0711),(0.0475, 1.06, -0.105),(0.0787, 1.08, 0.0347),(0.0844, 1.15, 0.0297),(0.103, 1.08, 0.00296),(0, 1.07, -0.11),(0.0975, 1.01, -0.0873),(0.134, 0.998, -0.0475),(0.0475, 1.02, -0.109),(0.0325, 1.02, 0.0529),(0.0975, 1.02, 0.0132),(0, 1.02, -0.117),(0, 1.44, -0.0389),(0, 1.01, -0.0259),(-0.104, 1.19, 0.0423),(-0.0778, 1.19, 0.0642),(-0.078, 1.19, 0.0644),(-0.0493, 1.2, 0.0664),(-0.0281, 1.22, 0.0587),(-0.104, 1.2, 0.0568),(-0.0484, 1.21, 0.0692),(-0.0549, 1.21, 0.0708),(-0.0806, 1.21, 0.0713),(-0.0852, 1.21, 0.0703),(0.116, 1.19, 0.043),(0.114, 1.21, 0.0572),(0.0967, 1.21, 0.0701),(0.11, 1.19, 0.0502),(0.093, 1.19, 0.0622),(0.0832, 1.19, 0.0662),(0.0863, 1.21, 0.0728),(0.0154, 1.21, 0.0458),(-0.00393, 1.21, 0.0458),(-0.0145, 1.2, 0.0512),(0.0534, 1.35, 0.0168)]

IndexedFaceSet243.coord = Coordinate245

Shape239.geometry = IndexedFaceSet243

fieldValue238.children.append(Shape239)

ProtoInstance236.fieldValue.append(fieldValue238)

fieldValue235.children.append(ProtoInstance236)
ProtoInstance246 = x3d.ProtoInstance()
ProtoInstance246.DEF = "hanim_l_shoulder"
ProtoInstance246.name = "Joint"
fieldValue247 = x3d.fieldValue()
fieldValue247.name = "name"
fieldValue247.value = "l_shoulder"

ProtoInstance246.fieldValue.append(fieldValue247)
fieldValue248 = x3d.fieldValue()
fieldValue248.name = "center"
fieldValue248.value = "0.167 1.36 -0.0518"

ProtoInstance246.fieldValue.append(fieldValue248)
fieldValue249 = x3d.fieldValue()
fieldValue249.name = "children"
ProtoInstance250 = x3d.ProtoInstance()
ProtoInstance250.DEF = "hanim_l_upperarm"
ProtoInstance250.name = "Segment"
fieldValue251 = x3d.fieldValue()
fieldValue251.name = "name"
fieldValue251.value = "l_upperarm"

ProtoInstance250.fieldValue.append(fieldValue251)
fieldValue252 = x3d.fieldValue()
fieldValue252.name = "children"
Transform253 = x3d.Transform()
Transform253.DEF = "l_upperarm_adjust"
Transform253.translation = [0,0.0004203,-0.01665]
Transform253.rotation = [1,0,0,0.119]
Transform253.center = [0.182,1.22,-0.047]
Shape254 = x3d.Shape()
Appearance255 = x3d.Appearance()
Material256 = x3d.Material()
Material256.DEF = "Skin_Color"
Material256.ambientIntensity = 0.25
Material256.diffuseColor = [0.749,0.601,0.462]

Appearance255.material = Material256

Shape254.appearance = Appearance255
IndexedFaceSet257 = x3d.IndexedFaceSet()
IndexedFaceSet257.creaseAngle = 1.65
IndexedFaceSet257.coordIndex = [2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1]
Coordinate258 = x3d.Coordinate()
Coordinate258.point = [(0.174, 1.37, -0.0625),(0.185, 1.38, -0.0395),(0.156, 1.39, -0.0464),(0.174, 1.37, -0.0158),(0.154, 1.37, -0.0185),(0.157, 1.38, -0.0733),(0.182, 1.33, -0.0728),(0.151, 1.33, -0.0937),(0.15, 1.34, -0.000787),(0.185, 1.33, -0.00025),(0.201, 1.33, -0.0411),(0.189, 1.26, -0.0808),(0.155, 1.26, -0.0867),(0.151, 1.26, -0.000789),(0.19, 1.26, -0.00401),(0.209, 1.26, -0.0427),(0.141, 1.26, -0.0421),(0.203, 1.08, -0.0744),(0.162, 1.05, -0.0561),(0.169, 1.08, -0.00885),(0.208, 1.07, -0.00133),(0.221, 1.08, -0.0352)]

IndexedFaceSet257.coord = Coordinate258

Shape254.geometry = IndexedFaceSet257

Transform253.children.append(Shape254)

fieldValue252.children.append(Transform253)

ProtoInstance250.fieldValue.append(fieldValue252)

fieldValue249.children.append(ProtoInstance250)
ProtoInstance259 = x3d.ProtoInstance()
ProtoInstance259.DEF = "hanim_l_elbow"
ProtoInstance259.name = "Joint"
fieldValue260 = x3d.fieldValue()
fieldValue260.name = "name"
fieldValue260.value = "l_elbow"

ProtoInstance259.fieldValue.append(fieldValue260)
fieldValue261 = x3d.fieldValue()
fieldValue261.name = "center"
fieldValue261.value = "0.196 1.07 -0.0518"

ProtoInstance259.fieldValue.append(fieldValue261)
fieldValue262 = x3d.fieldValue()
fieldValue262.name = "children"
ProtoInstance263 = x3d.ProtoInstance()
ProtoInstance263.DEF = "hanim_l_forearm"
ProtoInstance263.name = "Segment"
fieldValue264 = x3d.fieldValue()
fieldValue264.name = "name"
fieldValue264.value = "l_forearm"

ProtoInstance263.fieldValue.append(fieldValue264)
fieldValue265 = x3d.fieldValue()
fieldValue265.name = "children"
Transform266 = x3d.Transform()
Transform266.DEF = "l_forearm_adjust"
Transform266.translation = [0,0.003724,-0.0236]
Transform266.rotation = [-1,0,0,0.1]
Transform266.center = [0.198,0.961,-0.0405]
Shape267 = x3d.Shape()
Appearance268 = x3d.Appearance()
Material269 = x3d.Material()
Material269.USE = "Skin_Color"

Appearance268.material = Material269

Shape267.appearance = Appearance268
IndexedFaceSet270 = x3d.IndexedFaceSet()
IndexedFaceSet270.creaseAngle = 1.75
IndexedFaceSet270.coordIndex = [2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1]
Coordinate271 = x3d.Coordinate()
Coordinate271.point = [(0.177, 1.09, -0.0609),(0.202, 1.1, -0.0566),(0.189, 1.1, -0.0395),(0.213, 1.1, -0.025),(0.203, 1.1, -0.0158),(0.182, 1.09, -0.00563),(0.167, 1.09, -0.0325),(0.176, 1.08, -0.0781),(0.16, 1.06, -0.0373),(0.214, 1.07, -0.00402),(0.228, 1.07, -0.0319),(0.208, 1.08, -0.0765),(0.179, 1.07, -0.00294),(0.21, 0.818, -0.0615),(0.201, 0.82, -0.0405),(0.205, 0.819, -0.00832),(0.224, 0.818, -0.00778),(0.237, 0.82, -0.0282),(0.231, 0.819, -0.0609)]

IndexedFaceSet270.coord = Coordinate271

Shape267.geometry = IndexedFaceSet270

Transform266.children.append(Shape267)

fieldValue265.children.append(Transform266)

ProtoInstance263.fieldValue.append(fieldValue265)

fieldValue262.children.append(ProtoInstance263)
ProtoInstance272 = x3d.ProtoInstance()
ProtoInstance272.DEF = "hanim_l_wrist"
ProtoInstance272.name = "Joint"
fieldValue273 = x3d.fieldValue()
fieldValue273.name = "name"
fieldValue273.value = "l_wrist"

ProtoInstance272.fieldValue.append(fieldValue273)
fieldValue274 = x3d.fieldValue()
fieldValue274.name = "center"
fieldValue274.value = "0.213 0.811 -0.0338"

ProtoInstance272.fieldValue.append(fieldValue274)
fieldValue275 = x3d.fieldValue()
fieldValue275.name = "children"
ProtoInstance276 = x3d.ProtoInstance()
ProtoInstance276.DEF = "hanim_l_hand"
ProtoInstance276.name = "Segment"
fieldValue277 = x3d.fieldValue()
fieldValue277.name = "name"
fieldValue277.value = "l_hand"

ProtoInstance276.fieldValue.append(fieldValue277)
fieldValue278 = x3d.fieldValue()
fieldValue278.name = "children"
Transform279 = x3d.Transform()
Transform279.DEF = "l_hand_adjust"
Transform279.translation = [0,0.005142,-0.008662]
Transform279.rotation = [-0.06361,-0.9967,0.04988,1.333]
Transform279.center = [0.213,0.811,-0.0338]
Shape280 = x3d.Shape()
Appearance281 = x3d.Appearance()
Material282 = x3d.Material()
Material282.USE = "Skin_Color"

Appearance281.material = Material282

Shape280.appearance = Appearance281
IndexedFaceSet283 = x3d.IndexedFaceSet()
IndexedFaceSet283.creaseAngle = 1.48
IndexedFaceSet283.coordIndex = [2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1]
Coordinate284 = x3d.Coordinate()
Coordinate284.point = [(0.211, 0.828, -0.0434),(0.194, 0.81, -0.0445),(0.237, 0.82, -0.0425),(0.236, 0.82, -0.0237),(0.194, 0.81, -0.0254),(0.21, 0.828, -0.0247),(0.252, 0.801, -0.0424),(0.252, 0.801, -0.0231),(0.269, 0.765, -0.0426),(0.268, 0.765, -0.0225),(0.273, 0.732, -0.0395),(0.272, 0.732, -0.0223),(0.27, 0.704, -0.0342),(0.27, 0.704, -0.0224),(0.262, 0.703, -0.0345),(0.261, 0.703, -0.0227),(0.256, 0.717, -0.0389),(0.256, 0.717, -0.023),(0.255, 0.738, -0.0408),(0.255, 0.738, -0.023),(0.251, 0.734, -0.0406),(0.251, 0.734, -0.0232),(0.251, 0.692, -0.0232),(0.248, 0.657, -0.0233),(0.24, 0.645, -0.0236),(0.226, 0.637, -0.0241),(0.213, 0.639, -0.0246),(0.197, 0.652, -0.0253),(0.188, 0.669, -0.0256),(0.184, 0.697, -0.0258),(0.183, 0.73, -0.0258),(0.187, 0.77, -0.0257),(0.244, 0.696, -0.0375),(0.244, 0.692, -0.0372),(0.242, 0.661, -0.0345),(0.241, 0.658, -0.0343),(0.241, 0.656, -0.0341),(0.231, 0.646, -0.0336),(0.206, 0.65, -0.0349),(0.218, 0.644, -0.034),(0.205, 0.652, -0.0352),(0.198, 0.667, -0.0367),(0.195, 0.691, -0.039),(0.194, 0.696, -0.0395),(0.193, 0.725, -0.042),(0.193, 0.731, -0.0425),(0.197, 0.765, -0.0449),(0.197, 0.77, -0.0453)]

IndexedFaceSet283.coord = Coordinate284

Shape280.geometry = IndexedFaceSet283

Transform279.children.append(Shape280)

fieldValue278.children.append(Transform279)

ProtoInstance276.fieldValue.append(fieldValue278)

fieldValue275.children.append(ProtoInstance276)

ProtoInstance272.fieldValue.append(fieldValue275)

fieldValue262.children.append(ProtoInstance272)

ProtoInstance259.fieldValue.append(fieldValue262)

fieldValue249.children.append(ProtoInstance259)

ProtoInstance246.fieldValue.append(fieldValue249)

fieldValue235.children.append(ProtoInstance246)
ProtoInstance285 = x3d.ProtoInstance()
ProtoInstance285.DEF = "hanim_r_shoulder"
ProtoInstance285.name = "Joint"
fieldValue286 = x3d.fieldValue()
fieldValue286.name = "name"
fieldValue286.value = "r_shoulder"

ProtoInstance285.fieldValue.append(fieldValue286)
fieldValue287 = x3d.fieldValue()
fieldValue287.name = "center"
fieldValue287.value = "-0.167 1.36 -0.0458"

ProtoInstance285.fieldValue.append(fieldValue287)
fieldValue288 = x3d.fieldValue()
fieldValue288.name = "children"
ProtoInstance289 = x3d.ProtoInstance()
ProtoInstance289.DEF = "hanim_r_upperarm"
ProtoInstance289.name = "Segment"
fieldValue290 = x3d.fieldValue()
fieldValue290.name = "name"
fieldValue290.value = "r_upperarm"

ProtoInstance289.fieldValue.append(fieldValue290)
fieldValue291 = x3d.fieldValue()
fieldValue291.name = "children"
Transform292 = x3d.Transform()
Transform292.DEF = "r_upperarm_adjust"
Transform292.translation = [0,0.000589,-0.01169]
Transform292.rotation = [1,0,0,0.0836]
Transform292.center = [-0.182,1.22,-0.047]
Shape293 = x3d.Shape()
Appearance294 = x3d.Appearance()
Material295 = x3d.Material()
Material295.USE = "Skin_Color"

Appearance294.material = Material295

Shape293.appearance = Appearance294
IndexedFaceSet296 = x3d.IndexedFaceSet()
IndexedFaceSet296.creaseAngle = 1.53
IndexedFaceSet296.coordIndex = [14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1]
Coordinate297 = x3d.Coordinate()
Coordinate297.point = [(-0.221, 1.08, -0.0352),(-0.214, 1.14, -0.0405),(-0.209, 1.26, -0.0427),(-0.208, 1.07, -0.00133),(-0.203, 1.08, -0.0744),(-0.201, 1.33, -0.0411),(-0.198, 1.14, -0.0024),(-0.198, 1.13, -0.076),(-0.19, 1.26, -0.00401),(-0.189, 1.26, -0.0808),(-0.185, 1.38, -0.0395),(-0.185, 1.33, -0.00025),(-0.182, 1.33, -0.0728),(-0.174, 1.37, -0.0158),(-0.174, 1.37, -0.0625),(-0.169, 1.08, -0.00885),(-0.167, 1.13, -0.0744),(-0.162, 1.05, -0.0561),(-0.16, 1.13, -0.000793),(-0.157, 1.38, -0.0733),(-0.156, 1.39, -0.0464),(-0.155, 1.26, -0.0867),(-0.154, 1.37, -0.0185),(-0.151, 1.26, -0.000789),(-0.151, 1.33, -0.0937),(-0.15, 1.34, -0.000787),(-0.15, 1.13, -0.0411),(-0.141, 1.26, -0.0421)]

IndexedFaceSet296.coord = Coordinate297

Shape293.geometry = IndexedFaceSet296

Transform292.children.append(Shape293)

fieldValue291.children.append(Transform292)

ProtoInstance289.fieldValue.append(fieldValue291)

fieldValue288.children.append(ProtoInstance289)
ProtoInstance298 = x3d.ProtoInstance()
ProtoInstance298.DEF = "hanim_r_elbow"
ProtoInstance298.name = "Joint"
fieldValue299 = x3d.fieldValue()
fieldValue299.name = "name"
fieldValue299.value = "r_elbow"

ProtoInstance298.fieldValue.append(fieldValue299)
fieldValue300 = x3d.fieldValue()
fieldValue300.name = "center"
fieldValue300.value = "-0.192 1.07 -0.0498"

ProtoInstance298.fieldValue.append(fieldValue300)
fieldValue301 = x3d.fieldValue()
fieldValue301.name = "children"
ProtoInstance302 = x3d.ProtoInstance()
ProtoInstance302.DEF = "hanim_r_forearm"
ProtoInstance302.name = "Segment"
fieldValue303 = x3d.fieldValue()
fieldValue303.name = "name"
fieldValue303.value = "r_forearm"

ProtoInstance302.fieldValue.append(fieldValue303)
fieldValue304 = x3d.fieldValue()
fieldValue304.name = "children"
Transform305 = x3d.Transform()
Transform305.DEF = "r_forearm_adjust"
Transform305.translation = [0,0.003466,-0.01065]
Transform305.rotation = [-1,0,0,0.1254]
Transform305.center = [-0.198,0.961,-0.0397]
Shape306 = x3d.Shape()
Appearance307 = x3d.Appearance()
Material308 = x3d.Material()
Material308.USE = "Skin_Color"

Appearance307.material = Material308

Shape306.appearance = Appearance307
IndexedFaceSet309 = x3d.IndexedFaceSet()
IndexedFaceSet309.creaseAngle = 1.73
IndexedFaceSet309.coordIndex = [20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1]
Coordinate310 = x3d.Coordinate()
Coordinate310.point = [(-0.237, 0.82, -0.0282),(-0.235, 1.02, -0.033),(-0.231, 0.819, -0.0609),(-0.228, 1.07, -0.0319),(-0.224, 0.818, -0.00778),(-0.221, 1.01, -0.0744),(-0.218, 1.01, -0.00133),(-0.214, 1.07, -0.00402),(-0.213, 1.1, -0.025),(-0.21, 0.818, -0.0615),(-0.208, 1.08, -0.0765),(-0.205, 0.819, -0.00832),(-0.203, 1.1, -0.0158),(-0.202, 1.1, -0.0566),(-0.201, 0.82, -0.0405),(-0.189, 1.1, -0.0395),(-0.183, 1.01, -0.00831),(-0.183, 1.01, -0.0781),(-0.182, 1.09, -0.00563),(-0.179, 1.07, -0.00294),(-0.177, 1.09, -0.0609),(-0.176, 1.08, -0.0781),(-0.167, 1.09, -0.0325),(-0.166, 1, -0.0405),(-0.16, 1.06, -0.0373)]

IndexedFaceSet309.coord = Coordinate310

Shape306.geometry = IndexedFaceSet309

Transform305.children.append(Shape306)

fieldValue304.children.append(Transform305)

ProtoInstance302.fieldValue.append(fieldValue304)

fieldValue301.children.append(ProtoInstance302)
ProtoInstance311 = x3d.ProtoInstance()
ProtoInstance311.DEF = "hanim_r_wrist"
ProtoInstance311.name = "Joint"
fieldValue312 = x3d.fieldValue()
fieldValue312.name = "name"
fieldValue312.value = "r_wrist"

ProtoInstance311.fieldValue.append(fieldValue312)
fieldValue313 = x3d.fieldValue()
fieldValue313.name = "center"
fieldValue313.value = "-0.217 0.811 -0.0338"

ProtoInstance311.fieldValue.append(fieldValue313)
fieldValue314 = x3d.fieldValue()
fieldValue314.name = "children"
ProtoInstance315 = x3d.ProtoInstance()
ProtoInstance315.DEF = "hanim_r_hand"
ProtoInstance315.name = "Segment"
fieldValue316 = x3d.fieldValue()
fieldValue316.name = "name"
fieldValue316.value = "r_hand"

ProtoInstance315.fieldValue.append(fieldValue316)
fieldValue317 = x3d.fieldValue()
fieldValue317.name = "children"
Transform318 = x3d.Transform()
Transform318.DEF = "r_hand_adjust"
Transform318.rotation = [-0.09024,0.994,-0.0624,1.216]
Transform318.center = [-0.217,0.811,-0.0338]
Shape319 = x3d.Shape()
Appearance320 = x3d.Appearance()
Material321 = x3d.Material()
Material321.USE = "Skin_Color"

Appearance320.material = Material321

Shape319.appearance = Appearance320
IndexedFaceSet322 = x3d.IndexedFaceSet()
IndexedFaceSet322.creaseAngle = 1.57
IndexedFaceSet322.coordIndex = [10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1]
Coordinate323 = x3d.Coordinate()
Coordinate323.point = [(-0.237, 0.82, -0.0425),(-0.252, 0.801, -0.0424),(-0.269, 0.765, -0.0426),(-0.273, 0.732, -0.0395),(-0.27, 0.704, -0.0342),(-0.262, 0.703, -0.0345),(-0.256, 0.717, -0.0389),(-0.255, 0.738, -0.0408),(-0.251, 0.734, -0.0406),(-0.194, 0.81, -0.0445),(-0.211, 0.828, -0.0434),(-0.236, 0.82, -0.0237),(-0.252, 0.801, -0.0231),(-0.268, 0.765, -0.0225),(-0.272, 0.732, -0.0223),(-0.27, 0.704, -0.0224),(-0.261, 0.703, -0.0227),(-0.256, 0.717, -0.023),(-0.255, 0.738, -0.023),(-0.251, 0.734, -0.0232),(-0.251, 0.692, -0.0232),(-0.248, 0.657, -0.0233),(-0.24, 0.645, -0.0236),(-0.226, 0.637, -0.0241),(-0.213, 0.639, -0.0246),(-0.197, 0.652, -0.0253),(-0.188, 0.669, -0.0256),(-0.184, 0.697, -0.0258),(-0.183, 0.73, -0.0258),(-0.187, 0.77, -0.0257),(-0.194, 0.81, -0.0254),(-0.21, 0.828, -0.0247),(-0.221, 0.641, -0.0336),(-0.21, 0.65, -0.0348),(-0.206, 0.652, -0.0352),(-0.198, 0.667, -0.0368),(-0.193, 0.692, -0.0392),(-0.192, 0.696, -0.0396),(-0.231, 0.646, -0.0336),(-0.238, 0.656, -0.0342),(-0.24, 0.658, -0.0344),(-0.24, 0.662, -0.0347),(-0.243, 0.692, -0.0372),(-0.243, 0.696, -0.0376),(-0.192, 0.725, -0.0421),(-0.192, 0.73, -0.0426),(-0.195, 0.766, -0.0451),(-0.196, 0.77, -0.0454)]

IndexedFaceSet322.coord = Coordinate323

Shape319.geometry = IndexedFaceSet322

Transform318.children.append(Shape319)

fieldValue317.children.append(Transform318)

ProtoInstance315.fieldValue.append(fieldValue317)

fieldValue314.children.append(ProtoInstance315)

ProtoInstance311.fieldValue.append(fieldValue314)

fieldValue301.children.append(ProtoInstance311)

ProtoInstance298.fieldValue.append(fieldValue301)

fieldValue288.children.append(ProtoInstance298)

ProtoInstance285.fieldValue.append(fieldValue288)

fieldValue235.children.append(ProtoInstance285)
ProtoInstance324 = x3d.ProtoInstance()
ProtoInstance324.DEF = "hanim_vc4"
ProtoInstance324.name = "Joint"
fieldValue325 = x3d.fieldValue()
fieldValue325.name = "name"
fieldValue325.value = "vc4"

ProtoInstance324.fieldValue.append(fieldValue325)
fieldValue326 = x3d.fieldValue()
fieldValue326.name = "center"
fieldValue326.value = "0 1.43 -0.0458"

ProtoInstance324.fieldValue.append(fieldValue326)
fieldValue327 = x3d.fieldValue()
fieldValue327.name = "children"
ProtoInstance328 = x3d.ProtoInstance()
ProtoInstance328.DEF = "hanim_c4"
ProtoInstance328.name = "Segment"
fieldValue329 = x3d.fieldValue()
fieldValue329.name = "name"
fieldValue329.value = "c4"

ProtoInstance328.fieldValue.append(fieldValue329)
fieldValue330 = x3d.fieldValue()
fieldValue330.name = "children"
Shape331 = x3d.Shape()
Shape331.DEF = "_9"
Appearance332 = x3d.Appearance()
Material333 = x3d.Material()
Material333.USE = "Skin_Color"

Appearance332.material = Material333

Shape331.appearance = Appearance332
IndexedFaceSet334 = x3d.IndexedFaceSet()
IndexedFaceSet334.DEF = "neck"
IndexedFaceSet334.creaseAngle = 1.91
IndexedFaceSet334.coordIndex = [6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1]
Coordinate335 = x3d.Coordinate()
Coordinate335.point = [(0.0105, 1.54, -0.1),(0.0357, 1.54, -0.0685),(0.0382, 1.55, -0.0474),(0.0105, 1.55, -0.0204),(0.0373, 1.4, -0.0593),(0.0577, 1.4, -0.0266),(0.0158, 1.4, 0.00512),(0.0132, 1.41, -0.0824),(-0.0158, 1.4, 0.00512),(-0.0577, 1.4, -0.0266),(-0.0382, 1.55, -0.0474),(-0.0105, 1.55, -0.0204),(-0.0373, 1.4, -0.0593),(-0.0357, 1.54, -0.0685),(-0.0132, 1.41, -0.0824),(-0.0105, 1.54, -0.1)]

IndexedFaceSet334.coord = Coordinate335

Shape331.geometry = IndexedFaceSet334

fieldValue330.children.append(Shape331)

ProtoInstance328.fieldValue.append(fieldValue330)

fieldValue327.children.append(ProtoInstance328)
ProtoInstance336 = x3d.ProtoInstance()
ProtoInstance336.DEF = "hanim_skullbase"
ProtoInstance336.name = "Joint"
fieldValue337 = x3d.fieldValue()
fieldValue337.name = "name"
fieldValue337.value = "skullbase"

ProtoInstance336.fieldValue.append(fieldValue337)
fieldValue338 = x3d.fieldValue()
fieldValue338.name = "center"
fieldValue338.value = "0 1.54 -0.0409"

ProtoInstance336.fieldValue.append(fieldValue338)
fieldValue339 = x3d.fieldValue()
fieldValue339.name = "children"
ProtoInstance340 = x3d.ProtoInstance()
ProtoInstance340.DEF = "hanim_skull"
ProtoInstance340.name = "Segment"
fieldValue341 = x3d.fieldValue()
fieldValue341.name = "name"
fieldValue341.value = "skull"

ProtoInstance340.fieldValue.append(fieldValue341)
fieldValue342 = x3d.fieldValue()
fieldValue342.name = "children"
Shape343 = x3d.Shape()
Shape343.DEF = "_10"
Appearance344 = x3d.Appearance()
Material345 = x3d.Material()
Material345.USE = "Skin_Color"

Appearance344.material = Material345

Shape343.appearance = Appearance344
IndexedFaceSet346 = x3d.IndexedFaceSet()
IndexedFaceSet346.DEF = "headIFS"
IndexedFaceSet346.creaseAngle = 0.7854
IndexedFaceSet346.colorIndex = [1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1]
IndexedFaceSet346.coordIndex = [48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1]
Color347 = x3d.Color()
Color347.color = [(0.749, 0.601, 0.462),(0.1735, 0.2602, 0.749),(0.6364, 0.133, 0.1526),(0.4545, 0.2759, 0.1902)]

IndexedFaceSet346.color = Color347
Coordinate348 = x3d.Coordinate()
Coordinate348.DEF = "Face"
Coordinate348.point = [(0, 1.708, -0.0435),(0, 1.655, 0.04322),(0, 1.486, 0.02335),(0, 1.694, 0.007789),(0, 1.631, 0.051),(0, 1.524, -0.102),(0.04, 1.51, -0.07278),(0.04029, 1.514, -0.08254),(0.03528, 1.502, -0.05013),(0.03479, 1.517, -0.09269),(0.0116, 1.494, 0.03382),(0.01946, 1.52, 0.03421),(0.02204, 1.494, 0.0272),(0.02734, 1.498, 0.02215),(0.02788, 1.528, 0.03084),(0.0338, 1.503, 0.0124),(0.04008, 1.509, 0.002821),(0.05122, 1.518, -0.02784),(0.05867, 1.544, -0.03316),(0.06433, 1.563, -0.03678),(0.06732, 1.583, -0.03683),(0.06769, 1.617, -0.03436),(0.06641, 1.637, -0.03046),(0.06818, 1.637, -0.04285),(0.06308, 1.666, -0.04036),(0.05305, 1.685, -0.03987),(0.03136, 1.7, -0.0413),(0.02919, 1.688, 0.0091),(0.05272, 1.674, -0.001657),(0.06061, 1.66, -0.0101),(0.05254, 1.541, -0.01363),(0.04099, 1.527, 0.008832),(0.03528, 1.524, 0.02097),(0.05792, 1.557, -0.004307),(0.04413, 1.539, 0.0149),(0.03746, 1.539, 0.02656),(0.003407, 1.524, 0.04155),(0.01481, 1.526, 0.03912),(0.005112, 1.532, 0.04358),(0.02438, 1.542, 0.03578),(0.02636, 1.55, 0.03808),(0.006135, 1.55, 0.0545),(0, 1.559, 0.05502),(0.02958, 1.651, 0.03965),(0.04847, 1.643, 0.02895),(0.05856, 1.63, 0.01803),(0.06182, 1.614, 0.008199),(0.06194, 1.6, 0.002668),(0.01489, 1.583, 0.04109),(0.05282, 1.569, 0.02821),(0.05767, 1.58, 0.0184),(0.04643, 1.625, 0.03705),(0.0264, 1.628, 0.04807),(0.0556, 1.609, 0.02579),(0.05467, 1.599, 0.02153),(0.05316, 1.589, 0.0207),(0.03603, 1.58, 0.03536),(0.04597, 1.586, 0.02904),(0.02106, 1.592, 0.03748),(0.03428, 1.595, 0.03294),(0.06808, 1.617, -0.06112),(0.06714, 1.564, -0.07003),(0.06993, 1.594, -0.08238),(0.05324, 1.536, -0.05922),(0.04904, 1.521, -0.05132),(0.04758, 1.514, -0.03107),(0.03539, 1.503, -0.00093),(0.02999, 1.498, 0.006194),(0.02308, 1.492, 0.01628),(0.01772, 1.488, 0.02135),(0.01378, 1.488, 0.02484),(0.04349, 1.512, -0.03987),(0.02308, 1.499, -0.02088),(0, 1.487, -0.018),(0.04795, 1.531, -0.08973),(0.05739, 1.555, -0.0982),(0.06815, 1.622, -0.107),(0.06872, 1.655, -0.08466),(0.05233, 1.678, -0.09642),(0.05334, 1.631, -0.1239),(0.05011, 1.581, -0.1193),(0.04359, 1.551, -0.1067),(0.03839, 1.528, -0.09652),(0.03399, 1.636, -0.1304),(0.03224, 1.685, -0.1024),(0, 1.557, -0.1126),(0.01864, 1.566, 0.04105),(0.0249, 1.58, 0.0387),(0.02735, 1.596, 0.03552),(0.04317, 1.564, 0.03643),(0.01246, 1.577, 0.04276),(0.04354, 1.59, 0.02822),(0.04557, 1.601, 0.03652),(0.0291, 1.603, 0.04274),(0.01856, 1.6, 0.04349),(0, 1.579, 0.04893),(0.01064, 1.558, 0.04476),(0.005501, 1.578, 0.04574),(0.01405, 1.531, 0.04152),(0.01037, 1.544, 0.04266),(0, 1.515, 0.03836),(0.00797, 1.515, 0.03774),(0.01824, 1.55, 0.04063),(-0.0249, 1.58, 0.0387),(-0.04354, 1.59, 0.02822),(-0.0291, 1.603, 0.04274),(-0.04317, 1.564, 0.03643),(-0.04597, 1.586, 0.02904),(-0.05316, 1.589, 0.0207),(-0.01824, 1.55, 0.04063),(-0.01246, 1.577, 0.04276),(-0.006135, 1.55, 0.0545),(-0.01037, 1.544, 0.04266),(-0.02636, 1.55, 0.03808),(-0.03428, 1.595, 0.03294),(-0.02735, 1.596, 0.03552),(-0.03603, 1.58, 0.03536),(-0.05282, 1.569, 0.02821),(-0.05767, 1.58, 0.0184),(-0.01864, 1.566, 0.04105),(-0.01489, 1.583, 0.04109),(-0.0556, 1.609, 0.02579),(-0.04557, 1.601, 0.03652),(-0.02106, 1.592, 0.03748),(-0.01856, 1.6, 0.04349),(-0.005501, 1.578, 0.04574),(-0.01064, 1.558, 0.04476),(0, 1.592, 0.04694),(-0.06182, 1.614, 0.008199),(-0.05467, 1.599, 0.02153),(-0.06194, 1.6, 0.002668),(-0.05792, 1.557, -0.004307),(-0.04413, 1.539, 0.0149),(-0.03746, 1.539, 0.02656),(-0.04099, 1.527, 0.008832),(-0.03528, 1.524, 0.02097),(-0.02788, 1.528, 0.03084),(0, 1.53, 0.04236),(-0.005112, 1.532, 0.04358),(-0.01481, 1.526, 0.03912),(-0.01946, 1.52, 0.03421),(0, 1.495, 0.0348),(-0.0116, 1.494, 0.03382),(-0.02734, 1.498, 0.02215),(-0.0338, 1.503, 0.0124),(-0.01772, 1.488, 0.02135),(-0.02308, 1.492, 0.01628),(-0.02999, 1.498, 0.006194),(-0.01405, 1.531, 0.04152),(-0.003407, 1.524, 0.04155),(-0.02204, 1.494, 0.0272),(-0.00797, 1.515, 0.03774),(-0.02438, 1.542, 0.03578),(0, 1.543, 0.04432),(0, 1.555, 0.05692),(0.02295, 1.492, -0.02694),(0.007322, 1.489, -0.01677),(-0.05254, 1.541, -0.01363),(-0.04008, 1.509, 0.002821),(-0.05122, 1.518, -0.02784),(-0.03539, 1.503, -0.00093),(-0.01378, 1.488, 0.02484),(-0.02308, 1.499, -0.02088),(-0.04349, 1.512, -0.03987),(-0.05867, 1.544, -0.03316),(-0.06433, 1.563, -0.03678),(-0.06732, 1.583, -0.03683),(-0.06769, 1.617, -0.03436),(-0.05856, 1.63, 0.01803),(-0.04847, 1.643, 0.02895),(-0.04643, 1.625, 0.03705),(-0.02958, 1.651, 0.03965),(-0.0264, 1.628, 0.04807),(-0.02919, 1.688, 0.0091),(-0.05272, 1.674, -0.001657),(-0.06641, 1.637, -0.03046),(-0.06061, 1.66, -0.0101),(-0.03136, 1.7, -0.0413),(-0.05305, 1.685, -0.03987),(-0.06308, 1.666, -0.04036),(-0.06818, 1.637, -0.04285),(-0.06808, 1.617, -0.06112),(-0.06993, 1.594, -0.08238),(-0.06714, 1.564, -0.07003),(-0.05324, 1.536, -0.05922),(-0.04904, 1.521, -0.05132),(-0.04795, 1.531, -0.08973),(-0.05739, 1.555, -0.0982),(-0.06815, 1.622, -0.107),(-0.06872, 1.655, -0.08466),(-0.05233, 1.678, -0.09642),(-0.03224, 1.685, -0.1024),(0, 1.69, -0.1047),(0, 1.64, -0.1342),(-0.05334, 1.631, -0.1239),(-0.05011, 1.581, -0.1193),(-0.04359, 1.551, -0.1067),(-0.03839, 1.528, -0.09652),(-0.03528, 1.502, -0.05013),(-0.04, 1.51, -0.07278),(-0.04029, 1.514, -0.08254),(-0.03479, 1.517, -0.09269),(-0.02295, 1.492, -0.02694),(-0.007322, 1.489, -0.01677),(0, 1.588, -0.1329),(-0.03399, 1.636, -0.1304),(-0.04758, 1.514, -0.03107),(-0.03428, 1.595, 0.03294),(-0.02106, 1.592, 0.03748),(-0.02735, 1.596, 0.03552),(-0.0249, 1.58, 0.0387),(-0.01489, 1.583, 0.04109),(-0.04597, 1.586, 0.02904),(-0.04354, 1.59, 0.02822),(-0.03603, 1.58, 0.03536),(-0.05856, 1.63, 0.01803),(-0.06182, 1.614, 0.008199),(-0.02788, 1.528, 0.03084),(-0.005112, 1.532, 0.04358),(-0.01405, 1.531, 0.04152),(-0.00797, 1.515, 0.03774),(-0.01946, 1.52, 0.03421),(-0.05867, 1.544, -0.03316),(-0.06433, 1.563, -0.03678),(-0.06732, 1.583, -0.03683),(-0.06769, 1.617, -0.03436),(-0.04847, 1.643, 0.02895),(-0.02958, 1.651, 0.03965),(-0.05324, 1.536, -0.05922),(-0.04795, 1.531, -0.08973),(-0.03839, 1.528, -0.09652),(0.02106, 1.592, 0.03748),(0.01489, 1.583, 0.04109),(0.0249, 1.58, 0.0387),(0.03603, 1.58, 0.03536),(0.04354, 1.59, 0.02822),(0.03428, 1.595, 0.03294),(0.02735, 1.596, 0.03552),(0.02788, 1.528, 0.03084),(0.01405, 1.531, 0.04152),(0, 1.53, 0.04236),(0, 1.515, 0.03836),(0.00797, 1.515, 0.03774),(0.01946, 1.52, 0.03421),(0.005112, 1.532, 0.04358),(0, 1.655, 0.04322),(0.02958, 1.651, 0.03965),(0.04847, 1.643, 0.02895),(0.05856, 1.63, 0.01803),(0.06182, 1.614, 0.008199),(0.06769, 1.617, -0.03436),(0.06732, 1.583, -0.03683),(0.06433, 1.563, -0.03678),(0.05867, 1.544, -0.03316),(0.05324, 1.536, -0.05922),(0.04795, 1.531, -0.08973),(0.03839, 1.528, -0.09652),(0, 1.524, -0.102)]

IndexedFaceSet346.coord = Coordinate348

Shape343.geometry = IndexedFaceSet346

fieldValue342.children.append(Shape343)

ProtoInstance340.fieldValue.append(fieldValue342)

fieldValue339.children.append(ProtoInstance340)

ProtoInstance336.fieldValue.append(fieldValue339)

fieldValue327.children.append(ProtoInstance336)

ProtoInstance324.fieldValue.append(fieldValue327)

fieldValue235.children.append(ProtoInstance324)

ProtoInstance232.fieldValue.append(fieldValue235)

fieldValue147.children.append(ProtoInstance232)

ProtoInstance144.fieldValue.append(fieldValue147)

fieldValue143.children.append(ProtoInstance144)
Group349 = x3d.Group()
Group349.DEF = "_11"

fieldValue143.children.append(Group349)

ProtoInstance140.fieldValue.append(fieldValue143)
fieldValue350 = x3d.fieldValue()
fieldValue350.name = "joints"
ProtoInstance351 = x3d.ProtoInstance()
ProtoInstance351.name = "Joint"
ProtoInstance351.USE = "hanim_humanoid_root"

fieldValue350.children.append(ProtoInstance351)
ProtoInstance352 = x3d.ProtoInstance()
ProtoInstance352.name = "Joint"
ProtoInstance352.USE = "hanim_sacroiliac"

fieldValue350.children.append(ProtoInstance352)
ProtoInstance353 = x3d.ProtoInstance()
ProtoInstance353.name = "Joint"
ProtoInstance353.USE = "hanim_l_hip"

fieldValue350.children.append(ProtoInstance353)
ProtoInstance354 = x3d.ProtoInstance()
ProtoInstance354.name = "Joint"
ProtoInstance354.USE = "hanim_l_knee"

fieldValue350.children.append(ProtoInstance354)
ProtoInstance355 = x3d.ProtoInstance()
ProtoInstance355.name = "Joint"
ProtoInstance355.USE = "hanim_l_ankle"

fieldValue350.children.append(ProtoInstance355)
ProtoInstance356 = x3d.ProtoInstance()
ProtoInstance356.name = "Joint"
ProtoInstance356.USE = "hanim_r_hip"

fieldValue350.children.append(ProtoInstance356)
ProtoInstance357 = x3d.ProtoInstance()
ProtoInstance357.name = "Joint"
ProtoInstance357.USE = "hanim_r_knee"

fieldValue350.children.append(ProtoInstance357)
ProtoInstance358 = x3d.ProtoInstance()
ProtoInstance358.name = "Joint"
ProtoInstance358.USE = "hanim_r_ankle"

fieldValue350.children.append(ProtoInstance358)
ProtoInstance359 = x3d.ProtoInstance()
ProtoInstance359.name = "Joint"
ProtoInstance359.USE = "hanim_vl1"

fieldValue350.children.append(ProtoInstance359)
ProtoInstance360 = x3d.ProtoInstance()
ProtoInstance360.name = "Joint"
ProtoInstance360.USE = "hanim_l_shoulder"

fieldValue350.children.append(ProtoInstance360)
ProtoInstance361 = x3d.ProtoInstance()
ProtoInstance361.name = "Joint"
ProtoInstance361.USE = "hanim_l_elbow"

fieldValue350.children.append(ProtoInstance361)
ProtoInstance362 = x3d.ProtoInstance()
ProtoInstance362.name = "Joint"
ProtoInstance362.USE = "hanim_l_wrist"

fieldValue350.children.append(ProtoInstance362)
ProtoInstance363 = x3d.ProtoInstance()
ProtoInstance363.name = "Joint"
ProtoInstance363.USE = "hanim_r_shoulder"

fieldValue350.children.append(ProtoInstance363)
ProtoInstance364 = x3d.ProtoInstance()
ProtoInstance364.name = "Joint"
ProtoInstance364.USE = "hanim_r_elbow"

fieldValue350.children.append(ProtoInstance364)
ProtoInstance365 = x3d.ProtoInstance()
ProtoInstance365.name = "Joint"
ProtoInstance365.USE = "hanim_r_wrist"

fieldValue350.children.append(ProtoInstance365)
ProtoInstance366 = x3d.ProtoInstance()
ProtoInstance366.name = "Joint"
ProtoInstance366.USE = "hanim_vc4"

fieldValue350.children.append(ProtoInstance366)
ProtoInstance367 = x3d.ProtoInstance()
ProtoInstance367.name = "Joint"
ProtoInstance367.USE = "hanim_skullbase"

fieldValue350.children.append(ProtoInstance367)

ProtoInstance140.fieldValue.append(fieldValue350)
fieldValue368 = x3d.fieldValue()
fieldValue368.name = "segments"
ProtoInstance369 = x3d.ProtoInstance()
ProtoInstance369.name = "Segment"
ProtoInstance369.USE = "hanim_pelvis"

fieldValue368.children.append(ProtoInstance369)
ProtoInstance370 = x3d.ProtoInstance()
ProtoInstance370.name = "Segment"
ProtoInstance370.USE = "hanim_l_thigh"

fieldValue368.children.append(ProtoInstance370)
ProtoInstance371 = x3d.ProtoInstance()
ProtoInstance371.name = "Segment"
ProtoInstance371.USE = "hanim_l_calf"

fieldValue368.children.append(ProtoInstance371)
ProtoInstance372 = x3d.ProtoInstance()
ProtoInstance372.name = "Segment"
ProtoInstance372.USE = "hanim_l_hindfoot"

fieldValue368.children.append(ProtoInstance372)
ProtoInstance373 = x3d.ProtoInstance()
ProtoInstance373.name = "Segment"
ProtoInstance373.USE = "hanim_r_thigh"

fieldValue368.children.append(ProtoInstance373)
ProtoInstance374 = x3d.ProtoInstance()
ProtoInstance374.name = "Segment"
ProtoInstance374.USE = "hanim_r_calf"

fieldValue368.children.append(ProtoInstance374)
ProtoInstance375 = x3d.ProtoInstance()
ProtoInstance375.name = "Segment"
ProtoInstance375.USE = "hanim_r_hindfoot"

fieldValue368.children.append(ProtoInstance375)
ProtoInstance376 = x3d.ProtoInstance()
ProtoInstance376.name = "Segment"
ProtoInstance376.USE = "hanim_c7"

fieldValue368.children.append(ProtoInstance376)
ProtoInstance377 = x3d.ProtoInstance()
ProtoInstance377.name = "Segment"
ProtoInstance377.USE = "hanim_l_upperarm"

fieldValue368.children.append(ProtoInstance377)
ProtoInstance378 = x3d.ProtoInstance()
ProtoInstance378.name = "Segment"
ProtoInstance378.USE = "hanim_l_forearm"

fieldValue368.children.append(ProtoInstance378)
ProtoInstance379 = x3d.ProtoInstance()
ProtoInstance379.name = "Segment"
ProtoInstance379.USE = "hanim_l_hand"

fieldValue368.children.append(ProtoInstance379)
ProtoInstance380 = x3d.ProtoInstance()
ProtoInstance380.name = "Segment"
ProtoInstance380.USE = "hanim_r_upperarm"

fieldValue368.children.append(ProtoInstance380)
ProtoInstance381 = x3d.ProtoInstance()
ProtoInstance381.name = "Segment"
ProtoInstance381.USE = "hanim_r_forearm"

fieldValue368.children.append(ProtoInstance381)
ProtoInstance382 = x3d.ProtoInstance()
ProtoInstance382.name = "Segment"
ProtoInstance382.USE = "hanim_r_hand"

fieldValue368.children.append(ProtoInstance382)
ProtoInstance383 = x3d.ProtoInstance()
ProtoInstance383.name = "Segment"
ProtoInstance383.USE = "hanim_c4"

fieldValue368.children.append(ProtoInstance383)
ProtoInstance384 = x3d.ProtoInstance()
ProtoInstance384.name = "Segment"
ProtoInstance384.USE = "hanim_skull"

fieldValue368.children.append(ProtoInstance384)

ProtoInstance140.fieldValue.append(fieldValue368)
fieldValue385 = x3d.fieldValue()
fieldValue385.name = "viewpoints"
Viewpoint386 = x3d.Viewpoint()
Viewpoint386.DEF = "InclinedView"
Viewpoint386.description = "Inclined View"
Viewpoint386.position = [1.62,1.05,2.06]
Viewpoint386.orientation = [-0.113,0.993,0.0347,0.671]

fieldValue385.children.append(Viewpoint386)
Viewpoint387 = x3d.Viewpoint()
Viewpoint387.DEF = "FrontView"
Viewpoint387.description = "Front View"
Viewpoint387.position = [0,0.854,2.57665]

fieldValue385.children.append(Viewpoint387)
Viewpoint388 = x3d.Viewpoint()
Viewpoint388.DEF = "SideView"
Viewpoint388.description = "Side View"
Viewpoint388.position = [2.5929,0.854,0]
Viewpoint388.orientation = [0,1,0,1.57079]

fieldValue385.children.append(Viewpoint388)
Viewpoint389 = x3d.Viewpoint()
Viewpoint389.DEF = "TopView"
Viewpoint389.description = "Top View"
Viewpoint389.position = [0,3.4495,0]
Viewpoint389.orientation = [1,0,0,-1.57079]

fieldValue385.children.append(Viewpoint389)

ProtoInstance140.fieldValue.append(fieldValue385)

Scene13.children.append(ProtoInstance140)
WorldInfo390 = x3d.WorldInfo()
WorldInfo390.title = "Nancy - an HAnim compliant avatar by 3Name3D"
WorldInfo390.info = ["Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."]

Scene13.children.append(WorldInfo390)
NavigationInfo391 = x3d.NavigationInfo()
NavigationInfo391.type = ["EXAMINE"]
NavigationInfo391.avatarSize = [0.15,1.53,0.75]
NavigationInfo391.speed = 0.5

Scene13.children.append(NavigationInfo391)
Group392 = x3d.Group()
Group392.DEF = "Interface"
Transform393 = x3d.Transform()
ProximitySensor394 = x3d.ProximitySensor()
ProximitySensor394.DEF = "HudProx"
ProximitySensor394.size = [500,100,500]
ProximitySensor394.center = [0,20,0]

Transform393.children.append(ProximitySensor394)

Group392.children.append(Transform393)
Collision395 = x3d.Collision()
Collision395.DEF = "HUD"
Collision395.enabled = False
Transform396 = x3d.Transform()
Transform396.DEF = "HudXform"
Transform397 = x3d.Transform()
Transform397.translation = [0.01107,-0.025,-0.08]
Transform397.scale = [0.012,0.012,0.012]
Transform398 = x3d.Transform()
Transform398.DEF = "Stand_Text"
TouchSensor399 = x3d.TouchSensor()
TouchSensor399.DEF = "Stand_Touch"
TouchSensor399.description = "click for behavior"

Transform398.children.append(TouchSensor399)
Shape400 = x3d.Shape()
Shape400.DEF = "Stand"
Appearance401 = x3d.Appearance()
Material402 = x3d.Material()
Material402.DEF = "text_color"
Material402.ambientIntensity = 0
Material402.diffuseColor = [0,0,0]
Material402.emissiveColor = [0.819,0.521,0.169]

Appearance401.material = Material402

Shape400.appearance = Appearance401
IndexedFaceSet403 = x3d.IndexedFaceSet()
IndexedFaceSet403.coordIndex = [1,30,29,-1,1,29,2,-1,31,47,46,-1,31,46,32,-1,78,77,80,-1,78,80,79,-1,96,113,112,-1,96,112,95,-1,95,112,111,-1,95,111,94,-1,94,111,110,-1,94,110,93,-1,93,110,109,-1,93,109,108,-1,93,108,100,-1,107,99,100,-1,107,100,108,-1,107,106,99,-1,106,105,98,-1,106,98,99,-1,104,97,98,-1,104,98,105,-1,103,102,104,-1,104,102,101,-1,104,101,97,-1,101,96,97,-1,101,97,101,-1,101,101,96,-1,96,101,113,-1,113,101,114,-1,115,86,85,-1,115,85,116,-1,117,87,84,-1,117,84,118,-1,119,83,120,-1,121,88,82,-1,121,82,122,-1,123,89,81,-1,123,81,124,-1,125,90,126,-1,127,92,128,-1,129,91,130,-1,54,49,50,-1,54,50,55,-1,76,75,74,-1,76,74,54,-1,54,74,73,-1,54,73,49,-1,49,73,48,-1,48,73,62,-1,48,62,61,-1,48,61,60,-1,48,60,53,-1,53,60,59,-1,53,59,53,-1,53,59,58,-1,53,58,52,-1,52,58,57,-1,52,57,51,-1,56,51,57,-1,56,55,50,-1,56,50,51,-1,62,73,72,-1,62,72,63,-1,63,72,71,-1,63,71,64,-1,64,71,70,-1,64,70,69,-1,64,69,65,-1,65,69,68,-1,65,68,67,-1,65,67,66,-1,131,40,39,-1,131,39,132,-1,133,43,42,-1,133,42,134,-1,135,37,36,-1,135,36,136,-1,137,41,38,-1,137,38,138,-1,139,44,35,-1,139,35,140,-1,141,34,142,-1,143,45,33,-1,143,33,144,-1,145,16,15,-1,145,15,146,-1,147,14,148,-1,149,17,13,-1,149,13,150,-1,151,18,12,-1,151,12,152,-1,153,19,11,-1,153,11,154,-1,155,20,10,-1,155,10,156,-1,157,9,158,-1,159,21,8,-1,159,8,160,-1,161,22,7,-1,161,7,162,-1,163,23,164,-1,165,24,6,-1,165,6,166,-1,167,25,5,-1,167,5,168,-1,169,26,170,-1,171,27,4,-1,171,4,172,-1,173,28,3,-1,173,3,174,-1,175,0,176,-1]
Coordinate404 = x3d.Coordinate()
Coordinate404.point = [(-3.21, -0.0154, 0),(-3.15, -0.0154, 0),(-3.14, -0.0467, 0),(-3.1, -0.0601, 0),(-3.05, -0.051, 0),(-3.04, -0.0254, 0),(-3.05, -0.00248, 0),(-3.1, 0.0122, 0),(-3.16, 0.03, 0),(-3.2, 0.0684, 0),(-3.2, 0.133, 0),(-3.16, 0.17, 0),(-3.1, 0.182, 0),(-3.04, 0.171, 0),(-3.01, 0.136, 0),(-3, 0.095, 0),(-3.05, 0.095, 0),(-3.06, 0.125, 0),(-3.1, 0.136, 0),(-3.14, 0.126, 0),(-3.15, 0.103, 0),(-3.14, 0.0815, 0),(-3.1, 0.0689, 0),(-3.04, 0.0512, 0),(-3, 0.0249, 0),(-2.99, -0.0195, 0),(-3, -0.0708, 0),(-3.05, -0.104, 0),(-3.1, -0.108, 0),(-3.16, -0.0947, 0),(-3.2, -0.0586, 0),(-2.86, -0.102, 0),(-2.9, -0.102, 0),(-2.94, -0.0832, 0),(-2.94, -0.0457, 0),(-2.94, 0.0645, 0),(-2.97, 0.0645, 0),(-2.97, 0.103, 0),(-2.94, 0.103, 0),(-2.94, 0.158, 0),(-2.89, 0.158, 0),(-2.89, 0.103, 0),(-2.86, 0.103, 0),(-2.86, 0.0645, 0),(-2.89, 0.0645, 0),(-2.89, -0.0483, 0),(-2.88, -0.0608, 0),(-2.86, -0.0612, 0),(-2.71, -0.000798, 0),(-2.71, -0.0373, 0),(-2.74, -0.0637, 0),(-2.77, -0.0624, 0),(-2.78, -0.0416, 0),(-2.77, -0.0195, 0),(-2.71, -0.0754, 0),(-2.74, -0.103, 0),(-2.79, -0.106, 0),(-2.82, -0.0865, 0),(-2.84, -0.0431, 0),(-2.82, 0.000177, 0),(-2.78, 0.0201, 0),(-2.73, 0.0275, 0),(-2.71, 0.0446, 0),(-2.72, 0.0614, 0),(-2.74, 0.0675, 0),(-2.77, 0.0573, 0),(-2.78, 0.039, 0),(-2.83, 0.039, 0),(-2.82, 0.0765, 0),(-2.78, 0.105, 0),(-2.74, 0.11, 0),(-2.71, 0.107, 0),(-2.67, 0.0849, 0),(-2.66, 0.0526, 0),(-2.66, -0.0763, 0),(-2.65, -0.101, 0),(-2.7, -0.101, 0),(-2.61, -0.101, 0),(-2.61, 0.103, 0),(-2.56, 0.103, 0),(-2.56, 0.0787, 0),(-2.52, 0.104, 0),(-2.47, 0.105, 0),(-2.43, 0.0743, 0),(-2.43, 0.038, 0),(-2.43, -0.101, 0),(-2.48, -0.101, 0),(-2.48, 0.0224, 0),(-2.49, 0.0514, 0),(-2.52, 0.0627, 0),(-2.54, 0.0505, 0),(-2.55, 0.02, 0),(-2.55, -0.101, 0),(-2.33, 0.0279, 0),(-2.31, 0.0587, 0),(-2.27, 0.0589, 0),(-2.25, 0.0281, 0),(-2.25, -0.0232, 0),(-2.27, -0.0563, 0),(-2.31, -0.057, 0),(-2.33, -0.0245, 0),(-2.19, 0.175, 0),(-2.19, -0.101, 0),(-2.25, -0.101, 0),(-2.25, -0.073, 0),(-2.26, -0.0913, 0),(-2.31, -0.108, 0),(-2.35, -0.0915, 0),(-2.38, -0.0424, 0),(-2.39, 0.0243, 0),(-2.37, 0.0809, 0),(-2.32, 0.108, 0),(-2.28, 0.106, 0),(-2.25, 0.0776, 0),(-2.25, 0.175, 0),(-2.48, 0.0224, 0),(-2.43, 0.038, 0),(-2.49, 0.0514, 0),(-2.43, 0.0743, 0),(-2.49, 0.0514, 0),(-2.47, 0.105, 0),(-2.52, 0.0627, 0),(-2.52, 0.104, 0),(-2.54, 0.0505, 0),(-2.56, 0.0787, 0),(-2.55, 0.02, 0),(-2.56, 0.0787, 0),(-2.61, -0.101, 0),(-2.55, 0.02, 0),(-2.61, -0.101, 0),(-2.56, 0.0787, 0),(-2.89, 0.103, 0),(-2.94, 0.103, 0),(-2.89, 0.0645, 0),(-2.89, 0.103, 0),(-2.94, 0.103, 0),(-2.94, 0.0645, 0),(-2.89, 0.0645, 0),(-2.94, 0.0645, 0),(-2.89, -0.0483, 0),(-2.94, -0.0457, 0),(-2.89, -0.0483, 0),(-2.94, -0.0832, 0),(-2.88, -0.0608, 0),(-2.9, -0.102, 0),(-3.06, 0.125, 0),(-3.01, 0.136, 0),(-3.06, 0.125, 0),(-3.04, 0.171, 0),(-3.1, 0.136, 0),(-3.1, 0.182, 0),(-3.14, 0.126, 0),(-3.16, 0.17, 0),(-3.15, 0.103, 0),(-3.2, 0.133, 0),(-3.14, 0.0815, 0),(-3.2, 0.0684, 0),(-3.14, 0.0815, 0),(-3.16, 0.03, 0),(-3.1, 0.0689, 0),(-3.1, 0.0122, 0),(-3.04, 0.0512, 0),(-3.05, -0.00248, 0),(-3, 0.0249, 0),(-3.05, -0.00248, 0),(-2.99, -0.0195, 0),(-3.04, -0.0254, 0),(-3, -0.0708, 0),(-3.05, -0.051, 0),(-3.05, -0.104, 0),(-3.05, -0.051, 0),(-3.1, -0.108, 0),(-3.1, -0.0601, 0),(-3.16, -0.0947, 0),(-3.14, -0.0467, 0),(-3.15, -0.0154, 0),(-3.2, -0.0586, 0)]

IndexedFaceSet403.coord = Coordinate404

Shape400.geometry = IndexedFaceSet403

Transform398.children.append(Shape400)
Transform405 = x3d.Transform()
Transform405.translation = [0.04092,1.843,3.826]
Transform405.scale = [84.89,77.52,77.52]
Shape406 = x3d.Shape()
Shape406.DEF = "Stand_Back"
Appearance407 = x3d.Appearance()
Material408 = x3d.Material()
Material408.DEF = "Clear"
Material408.ambientIntensity = 0
Material408.diffuseColor = [0,0,0]
Material408.transparency = 1

Appearance407.material = Material408

Shape406.appearance = Appearance407
IndexedFaceSet409 = x3d.IndexedFaceSet()
IndexedFaceSet409.coordIndex = [0,2,3,-1,2,0,1,-1]
Coordinate410 = x3d.Coordinate()
Coordinate410.point = [(-0.02572, -0.02535, -0.05),(-0.02578, -0.02131, -0.05),(-0.03871, -0.02131, -0.05),(-0.03877, -0.02541, -0.05)]

IndexedFaceSet409.coord = Coordinate410

Shape406.geometry = IndexedFaceSet409

Transform405.children.append(Shape406)

Transform398.children.append(Transform405)

Transform397.children.append(Transform398)
Transform411 = x3d.Transform()
Transform411.DEF = "Walk_Text"
TouchSensor412 = x3d.TouchSensor()
TouchSensor412.DEF = "Walk_Touch"
TouchSensor412.description = "click for behavior"

Transform411.children.append(TouchSensor412)
Shape413 = x3d.Shape()
Shape413.DEF = "WALK"
Appearance414 = x3d.Appearance()
Material415 = x3d.Material()
Material415.USE = "text_color"

Appearance414.material = Material415

Shape413.appearance = Appearance414
IndexedFaceSet416 = x3d.IndexedFaceSet()
IndexedFaceSet416.coordIndex = [0,2,1,-1,3,2,0,-1,12,3,0,-1,4,3,12,-1,11,4,12,-1,5,4,11,-1,10,5,11,-1,6,5,10,-1,9,6,10,-1,7,6,9,-1,8,7,9,-1,15,14,13,-1,16,15,13,-1,19,18,17,-1,20,19,17,-1,27,20,17,-1,28,27,17,-1,26,20,27,-1,23,20,26,-1,21,20,23,-1,25,23,26,-1,22,21,23,-1,24,23,25,-1,29,30,31,-1,29,31,32,-1,33,34,35,-1,33,35,29,-1,29,35,36,-1,29,36,30,-1,30,36,37,-1,37,36,38,-1,37,38,39,-1,37,39,40,-1,37,40,41,-1,41,40,42,-1,41,42,41,-1,41,42,43,-1,41,43,44,-1,44,43,45,-1,44,45,46,-1,47,46,45,-1,47,32,31,-1,47,31,46,-1,38,36,48,-1,38,48,49,-1,49,48,50,-1,49,50,51,-1,51,50,52,-1,51,52,53,-1,51,53,54,-1,54,53,55,-1,54,55,56,-1,54,56,57,-1]
Coordinate417 = x3d.Coordinate()
Coordinate417.point = [(-1.88, -0.101, 0),(-1.96, 0.175, 0),(-1.91, 0.175, 0),(-1.86, -0.0195, 0),(-1.82, 0.175, 0),(-1.76, 0.175, 0),(-1.72, -0.0195, 0),(-1.67, 0.175, 0),(-1.61, 0.175, 0),(-1.69, -0.101, 0),(-1.75, -0.101, 0),(-1.79, 0.111, 0),(-1.83, -0.101, 0),(-1.38, -0.101, 0),(-1.38, 0.175, 0),(-1.32, 0.175, 0),(-1.32, -0.101, 0),(-1.27, -0.101, 0),(-1.27, 0.175, 0),(-1.22, 0.175, 0),(-1.22, 0.0304, 0),(-1.16, 0.103, 0),(-1.09, 0.103, 0),(-1.16, 0.0272, 0),(-1.09, -0.101, 0),(-1.15, -0.101, 0),(-1.2, -0.0141, 0),(-1.22, -0.0363, 0),(-1.22, -0.101, 0),(-1.48, -0.0754, 0),(-1.48, -0.0373, 0),(-1.51, -0.0637, 0),(-1.51, -0.103, 0),(-1.47, -0.101, 0),(-1.42, -0.101, 0),(-1.43, -0.0763, 0),(-1.43, 0.0526, 0),(-1.48, -0.000798, 0),(-1.48, 0.0446, 0),(-1.5, 0.0275, 0),(-1.55, 0.0201, 0),(-1.54, -0.0195, 0),(-1.59, 0.000177, 0),(-1.61, -0.0431, 0),(-1.55, -0.0416, 0),(-1.59, -0.0865, 0),(-1.54, -0.0624, 0),(-1.56, -0.106, 0),(-1.44, 0.0849, 0),(-1.49, 0.0614, 0),(-1.48, 0.107, 0),(-1.51, 0.0675, 0),(-1.52, 0.11, 0),(-1.55, 0.105, 0),(-1.54, 0.0573, 0),(-1.59, 0.0765, 0),(-1.6, 0.039, 0),(-1.55, 0.039, 0)]

IndexedFaceSet416.coord = Coordinate417

Shape413.geometry = IndexedFaceSet416

Transform411.children.append(Shape413)
Transform418 = x3d.Transform()
Transform418.translation = [-0.0414,1.941,4.015]
Transform418.scale = [81.3,81.3,81.31]
Shape419 = x3d.Shape()
Shape419.DEF = "Walk_Back"
Appearance420 = x3d.Appearance()
Material421 = x3d.Material()
Material421.USE = "Clear"

Appearance420.material = Material421

Shape419.appearance = Appearance420
IndexedFaceSet422 = x3d.IndexedFaceSet()
IndexedFaceSet422.coordIndex = [1,3,0,-1,3,1,2,-1]
Coordinate423 = x3d.Coordinate()
Coordinate423.point = [(-0.02381, -0.02541, -0.05),(-0.0127, -0.02541, -0.05),(-0.01263, -0.02139, -0.05),(-0.02381, -0.02146, -0.05)]

IndexedFaceSet422.coord = Coordinate423

Shape419.geometry = IndexedFaceSet422

Transform418.children.append(Shape419)

Transform411.children.append(Transform418)

Transform397.children.append(Transform411)
Transform424 = x3d.Transform()
Transform424.DEF = "Run_Text"
TouchSensor425 = x3d.TouchSensor()
TouchSensor425.DEF = "Run_Touch"
TouchSensor425.description = "click for behavior"

Transform424.children.append(TouchSensor425)
Shape426 = x3d.Shape()
Shape426.DEF = "Run"
Appearance427 = x3d.Appearance()
Material428 = x3d.Material()
Material428.USE = "text_color"

Appearance427.material = Material428

Shape426.appearance = Appearance427
IndexedFaceSet429 = x3d.IndexedFaceSet()
IndexedFaceSet429.coordIndex = [24,26,25,-1,53,39,54,-1,17,1,0,-1,17,0,16,-1,0,14,16,-1,0,15,14,-1,14,13,22,-1,14,22,16,-1,13,12,21,-1,13,21,22,-1,12,6,21,-1,12,11,7,-1,12,7,6,-1,11,8,7,-1,10,8,11,-1,10,9,8,-1,6,5,21,-1,5,4,20,-1,5,20,21,-1,4,3,19,-1,4,19,20,-1,3,2,18,-1,3,18,19,-1,18,2,1,-1,18,1,17,-1,55,32,31,-1,55,31,56,-1,57,33,30,-1,57,30,58,-1,59,29,60,-1,61,34,28,-1,61,28,62,-1,63,35,27,-1,63,27,64,-1,65,36,66,-1,67,38,68,-1,69,37,70,-1,71,23,72,-1,73,48,47,-1,73,47,74,-1,75,49,46,-1,75,46,76,-1,77,45,78,-1,79,50,44,-1,79,44,80,-1,81,51,43,-1,81,43,82,-1,83,41,84,-1,85,40,86,-1,87,52,88,-1,89,42,90,-1]
Coordinate430 = x3d.Coordinate()
Coordinate430.point = [(-0.829, -0.101, 0),(-0.829, 0.175, 0),(-0.662, 0.172, 0),(-0.622, 0.148, 0),(-0.607, 0.103, 0),(-0.62, 0.0501, 0),(-0.648, 0.0316, 0),(-0.615, -0.0063, 0),(-0.611, -0.0764, 0),(-0.601, -0.101, 0),(-0.664, -0.101, 0),(-0.671, -0.0373, 0),(-0.68, -0.00372, 0),(-0.712, 0.00648, 0),(-0.772, 0.00648, 0),(-0.772, -0.101, 0),(-0.772, 0.0546, 0),(-0.772, 0.127, 0),(-0.703, 0.127, 0),(-0.673, 0.118, 0),(-0.663, 0.091, 0),(-0.674, 0.063, 0),(-0.705, 0.0546, 0),(-0.379, 0.103, 0),(-0.379, -0.101, 0),(-0.432, -0.101, 0),(-0.432, -0.0764, 0),(-0.466, -0.101, 0),(-0.518, -0.102, 0),(-0.555, -0.072, 0),(-0.56, -0.0357, 0),(-0.56, 0.103, 0),(-0.506, 0.103, 0),(-0.506, -0.0201, 0),(-0.5, -0.0491, 0),(-0.472, -0.0604, 0),(-0.443, -0.0482, 0),(-0.433, -0.0177, 0),(-0.433, 0.103, 0),(-0.331, -0.101, 0),(-0.331, 0.103, 0),(-0.278, 0.103, 0),(-0.278, 0.0787, 0),(-0.244, 0.104, 0),(-0.192, 0.105, 0),(-0.154, 0.0743, 0),(-0.149, 0.038, 0),(-0.149, -0.101, 0),(-0.203, -0.101, 0),(-0.203, 0.0224, 0),(-0.209, 0.0514, 0),(-0.238, 0.0627, 0),(-0.266, 0.0505, 0),(-0.277, 0.02, 0),(-0.277, -0.101, 0),(-0.506, -0.0201, 0),(-0.56, -0.0357, 0),(-0.5, -0.0491, 0),(-0.555, -0.072, 0),(-0.5, -0.0491, 0),(-0.518, -0.102, 0),(-0.472, -0.0604, 0),(-0.466, -0.101, 0),(-0.443, -0.0482, 0),(-0.432, -0.0764, 0),(-0.433, -0.0177, 0),(-0.432, -0.0764, 0),(-0.379, 0.103, 0),(-0.433, -0.0177, 0),(-0.379, 0.103, 0),(-0.432, -0.0764, 0),(-0.379, -0.101, 0),(-0.432, -0.0764, 0),(-0.203, 0.0224, 0),(-0.149, 0.038, 0),(-0.209, 0.0514, 0),(-0.154, 0.0743, 0),(-0.209, 0.0514, 0),(-0.192, 0.105, 0),(-0.238, 0.0627, 0),(-0.244, 0.104, 0),(-0.266, 0.0505, 0),(-0.278, 0.0787, 0),(-0.278, 0.0787, 0),(-0.331, 0.103, 0),(-0.277, 0.02, 0),(-0.331, -0.101, 0),(-0.277, 0.02, 0),(-0.278, 0.0787, 0),(-0.277, 0.02, 0),(-0.331, 0.103, 0)]

IndexedFaceSet429.coord = Coordinate430

Shape426.geometry = IndexedFaceSet429

Transform424.children.append(Shape426)
Transform431 = x3d.Transform()
Transform431.translation = [-0.01579,1.968,4.074]
Transform431.scale = [82.47,82.47,82.48]
Shape432 = x3d.Shape()
Shape432.DEF = "Run_Back"
Appearance433 = x3d.Appearance()
Material434 = x3d.Material()
Material434.USE = "Clear"

Appearance433.material = Material434

Shape432.appearance = Appearance433
IndexedFaceSet435 = x3d.IndexedFaceSet()
IndexedFaceSet435.coordIndex = [0,2,3,-1,2,0,1,-1]
Coordinate436 = x3d.Coordinate()
Coordinate436.point = [(-0.01009, -0.02534, -0.05),(-0.001382, -0.02541, -0.05),(-0.001315, -0.02146, -0.05),(-0.01022, -0.02146, -0.05)]

IndexedFaceSet435.coord = Coordinate436

Shape432.geometry = IndexedFaceSet435

Transform431.children.append(Shape432)

Transform424.children.append(Transform431)

Transform397.children.append(Transform424)
Transform437 = x3d.Transform()
Transform437.DEF = "Jump_Text"
TouchSensor438 = x3d.TouchSensor()
TouchSensor438.DEF = "Jump_Touch"
TouchSensor438.description = "click for behavior"

Transform437.children.append(TouchSensor438)
Shape439 = x3d.Shape()
Shape439.DEF = "Jump"
Appearance440 = x3d.Appearance()
Material441 = x3d.Material()
Material441.USE = "text_color"

Appearance440.material = Material441

Shape439.appearance = Appearance440
IndexedFaceSet442 = x3d.IndexedFaceSet()
IndexedFaceSet442.coordIndex = [1,0,14,-1,1,14,2,-1,16,15,18,-1,16,18,17,-1,64,65,66,-1,67,68,69,-1,67,69,70,-1,71,72,73,-1,71,73,74,-1,75,76,77,-1,78,79,80,-1,78,80,81,-1,82,83,84,-1,82,84,85,-1,86,87,88,-1,89,90,91,-1,92,93,94,-1,95,96,97,-1,98,7,6,-1,98,6,99,-1,100,8,5,-1,100,5,101,-1,102,9,4,-1,102,4,103,-1,104,10,105,-1,106,11,3,-1,106,3,107,-1,108,12,109,-1,110,13,111,-1,112,27,26,-1,112,26,113,-1,114,28,25,-1,114,25,115,-1,116,24,117,-1,118,29,23,-1,118,23,119,-1,120,30,22,-1,120,22,121,-1,122,31,123,-1,124,34,33,-1,124,33,125,-1,126,35,32,-1,126,32,127,-1,128,21,129,-1,130,36,20,-1,130,20,131,-1,132,37,19,-1,132,19,133,-1,134,38,135,-1,136,40,137,-1,138,39,139,-1,53,58,59,-1,53,59,54,-1,53,52,58,-1,52,51,57,-1,52,57,58,-1,51,50,56,-1,51,56,57,-1,50,49,56,-1,49,48,63,-1,49,63,56,-1,48,47,63,-1,63,47,46,-1,63,46,62,-1,62,46,45,-1,62,45,44,-1,62,44,61,-1,61,44,60,-1,54,59,60,-1,44,43,42,-1,60,44,42,-1,41,55,54,-1,41,54,60,-1,41,60,42,-1]
Coordinate443 = x3d.Coordinate()
Coordinate443.point = [(0.108, 0.00195, 0),(0.163, 0.00195, 0),(0.166, -0.0473, 0),(0.194, -0.0608, 0),(0.222, -0.0492, 0),(0.228, -0.017, 0),(0.228, 0.175, 0),(0.284, 0.175, 0),(0.284, -0.02, 0),(0.271, -0.0798, 0),(0.23, -0.104, 0),(0.193, -0.108, 0),(0.155, -0.102, 0),(0.117, -0.0714, 0),(0.108, -0.0357, 0),(0.563, -0.101, 0),(0.563, 0.103, 0),(0.615, 0.103, 0),(0.615, 0.0803, 0),(0.649, 0.105, 0),(0.696, 0.105, 0),(0.728, 0.0788, 0),(0.76, 0.104, 0),(0.811, 0.104, 0),(0.842, 0.081, 0),(0.853, 0.0416, 0),(0.853, -0.101, 0),(0.799, -0.101, 0),(0.799, 0.0305, 0),(0.79, 0.0544, 0),(0.767, 0.0616, 0),(0.743, 0.0507, 0),(0.734, 0.0228, 0),(0.734, -0.101, 0),(0.681, -0.101, 0),(0.681, 0.0301, 0),(0.673, 0.0532, 0),(0.65, 0.0611, 0),(0.626, 0.0506, 0),(0.617, 0.0224, 0),(0.617, -0.101, 0),(0.9, -0.182, 0),(0.9, 0.103, 0),(0.952, 0.103, 0),(0.952, 0.0751, 0),(0.968, 0.0934, 0),(1.01, 0.11, 0),(1.05, 0.103, 0),(1.07, 0.0796, 0),(1.1, 0.0251, 0),(1.1, -0.0222, 0),(1.07, -0.0788, 0),(1.03, -0.106, 0),(0.988, -0.103, 0),(0.953, -0.0755, 0),(0.953, -0.182, 0),(1.04, -0.000177, 0),(1.03, -0.0446, 0),(0.999, -0.0603, 0),(0.966, -0.0453, 0),(0.953, -0.000177, 0),(0.963, 0.045, 0),(0.998, 0.063, 0),(1.03, 0.0462, 0),(0.515, -0.101, 0),(0.462, -0.0764, 0),(0.462, -0.101, 0),(0.388, -0.0201, 0),(0.388, 0.103, 0),(0.334, 0.103, 0),(0.334, -0.0357, 0),(0.394, -0.0491, 0),(0.388, -0.0201, 0),(0.334, -0.0357, 0),(0.339, -0.072, 0),(0.394, -0.0491, 0),(0.339, -0.072, 0),(0.376, -0.102, 0),(0.422, -0.0604, 0),(0.394, -0.0491, 0),(0.376, -0.102, 0),(0.428, -0.101, 0),(0.451, -0.0482, 0),(0.422, -0.0604, 0),(0.428, -0.101, 0),(0.462, -0.0764, 0),(0.461, -0.0177, 0),(0.451, -0.0482, 0),(0.462, -0.0764, 0),(0.515, 0.103, 0),(0.461, 0.103, 0),(0.461, -0.0177, 0),(0.515, 0.103, 0),(0.461, -0.0177, 0),(0.462, -0.0764, 0),(0.515, -0.101, 0),(0.515, 0.103, 0),(0.462, -0.0764, 0),(0.284, -0.02, 0),(0.228, -0.017, 0),(0.271, -0.0798, 0),(0.222, -0.0492, 0),(0.23, -0.104, 0),(0.194, -0.0608, 0),(0.193, -0.108, 0),(0.194, -0.0608, 0),(0.155, -0.102, 0),(0.166, -0.0473, 0),(0.117, -0.0714, 0),(0.166, -0.0473, 0),(0.108, -0.0357, 0),(0.166, -0.0473, 0),(0.799, 0.0305, 0),(0.853, 0.0416, 0),(0.79, 0.0544, 0),(0.842, 0.081, 0),(0.79, 0.0544, 0),(0.811, 0.104, 0),(0.767, 0.0616, 0),(0.76, 0.104, 0),(0.743, 0.0507, 0),(0.728, 0.0788, 0),(0.734, 0.0228, 0),(0.728, 0.0788, 0),(0.681, 0.0301, 0),(0.734, 0.0228, 0),(0.673, 0.0532, 0),(0.728, 0.0788, 0),(0.673, 0.0532, 0),(0.696, 0.105, 0),(0.65, 0.0611, 0),(0.649, 0.105, 0),(0.626, 0.0506, 0),(0.615, 0.0803, 0),(0.617, 0.0224, 0),(0.615, 0.0803, 0),(0.563, -0.101, 0),(0.617, 0.0224, 0),(0.563, -0.101, 0),(0.615, 0.0803, 0)]

IndexedFaceSet442.coord = Coordinate443

Shape439.geometry = IndexedFaceSet442

Transform437.children.append(Shape439)
Transform444 = x3d.Transform()
Transform444.translation = [-0.008979,1.99,4.14]
Transform444.scale = [83.79,83.79,83.79]
Shape445 = x3d.Shape()
Shape445.DEF = "Jump_Back"
Appearance446 = x3d.Appearance()
Material447 = x3d.Material()
Material447.USE = "Clear"

Appearance446.material = Material447

Shape445.appearance = Appearance446
IndexedFaceSet448 = x3d.IndexedFaceSet()
IndexedFaceSet448.coordIndex = [0,2,3,-1,2,0,1,-1]
Coordinate449 = x3d.Coordinate()
Coordinate449.point = [(0.001296, -0.02541, -0.05),(0.01335, -0.02527, -0.05),(0.01328, -0.02152, -0.05),(0.001229, -0.02146, -0.05)]

IndexedFaceSet448.coord = Coordinate449

Shape445.geometry = IndexedFaceSet448

Transform444.children.append(Shape445)

Transform437.children.append(Transform444)

Transform397.children.append(Transform437)

Transform396.children.append(Transform397)

Collision395.proxy = Transform396

Group392.children.append(Collision395)
Transform450 = x3d.Transform()
Transform450.DEF = "Floor"
Transform450.translation = [0,-0.0125,0]
Transform450.scale = [1,0.0125,1]
Shape451 = x3d.Shape()
Appearance452 = x3d.Appearance()
Material453 = x3d.Material()

Appearance452.material = Material453

Shape451.appearance = Appearance452
Box454 = x3d.Box()

Shape451.geometry = Box454

Transform450.children.append(Shape451)

Group392.children.append(Transform450)

Scene13.children.append(Group392)
Group455 = x3d.Group()
Group455.DEF = "Animations"
Group456 = x3d.Group()
Group456.DEF = "Stand_Animation"
OrientationInterpolator457 = x3d.OrientationInterpolator()
OrientationInterpolator457.DEF = "r_ankle_RotationInterpolator_Stand"
OrientationInterpolator457.key = [0,1]
OrientationInterpolator457.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator457)
OrientationInterpolator458 = x3d.OrientationInterpolator()
OrientationInterpolator458.DEF = "r_knee_RotationInterpolator_Stand"
OrientationInterpolator458.key = [0,1]
OrientationInterpolator458.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator458)
OrientationInterpolator459 = x3d.OrientationInterpolator()
OrientationInterpolator459.DEF = "r_hip_RotationInterpolator_Stand"
OrientationInterpolator459.key = [0,1]
OrientationInterpolator459.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator459)
OrientationInterpolator460 = x3d.OrientationInterpolator()
OrientationInterpolator460.DEF = "l_ankle_RotationInterpolator_Stand"
OrientationInterpolator460.key = [0,1]
OrientationInterpolator460.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator460)
OrientationInterpolator461 = x3d.OrientationInterpolator()
OrientationInterpolator461.DEF = "l_knee_RotationInterpolator_Stand"
OrientationInterpolator461.key = [0,1]
OrientationInterpolator461.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator461)
OrientationInterpolator462 = x3d.OrientationInterpolator()
OrientationInterpolator462.DEF = "l_hip_RotationInterpolator_Stand"
OrientationInterpolator462.key = [0,1]
OrientationInterpolator462.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator462)
OrientationInterpolator463 = x3d.OrientationInterpolator()
OrientationInterpolator463.DEF = "lower_body_RotationInterpolator_Stand"
OrientationInterpolator463.key = [0,1]
OrientationInterpolator463.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator463)
OrientationInterpolator464 = x3d.OrientationInterpolator()
OrientationInterpolator464.DEF = "r_wrist_RotationInterpolator_Stand"
OrientationInterpolator464.key = [0,1]
OrientationInterpolator464.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator464)
OrientationInterpolator465 = x3d.OrientationInterpolator()
OrientationInterpolator465.DEF = "r_elbow_RotationInterpolator_Stand"
OrientationInterpolator465.key = [0,1]
OrientationInterpolator465.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator465)
OrientationInterpolator466 = x3d.OrientationInterpolator()
OrientationInterpolator466.DEF = "r_shoulder_RotationInterpolator_Stand"
OrientationInterpolator466.key = [0,1]
OrientationInterpolator466.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator466)
OrientationInterpolator467 = x3d.OrientationInterpolator()
OrientationInterpolator467.DEF = "l_wrist_RotationInterpolator_Stand"
OrientationInterpolator467.key = [0,1]
OrientationInterpolator467.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator467)
OrientationInterpolator468 = x3d.OrientationInterpolator()
OrientationInterpolator468.DEF = "l_elbow_RotationInterpolator_Stand"
OrientationInterpolator468.key = [0,1]
OrientationInterpolator468.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator468)
OrientationInterpolator469 = x3d.OrientationInterpolator()
OrientationInterpolator469.DEF = "l_shoulder_RotationInterpolator_Stand"
OrientationInterpolator469.key = [0,1]
OrientationInterpolator469.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator469)
OrientationInterpolator470 = x3d.OrientationInterpolator()
OrientationInterpolator470.DEF = "head_RotationInterpolator_Stand"
OrientationInterpolator470.key = [0,1]
OrientationInterpolator470.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator470)
OrientationInterpolator471 = x3d.OrientationInterpolator()
OrientationInterpolator471.DEF = "neck_RotationInterpolator_Stand"
OrientationInterpolator471.key = [0,1]
OrientationInterpolator471.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator471)
OrientationInterpolator472 = x3d.OrientationInterpolator()
OrientationInterpolator472.DEF = "upper_body_RotationInterpolator_Stand"
OrientationInterpolator472.key = [0,1]
OrientationInterpolator472.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator472)
OrientationInterpolator473 = x3d.OrientationInterpolator()
OrientationInterpolator473.DEF = "whole_body_RotationInterpolator_Stand"
OrientationInterpolator473.key = [0,1]
OrientationInterpolator473.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group456.children.append(OrientationInterpolator473)
PositionInterpolator474 = x3d.PositionInterpolator()
PositionInterpolator474.DEF = "whole_body_TranslationInterpolator_Stand"
PositionInterpolator474.key = [0,1]
PositionInterpolator474.keyValue = [(0, 0, 0),(0, 0, 0)]

Group456.children.append(PositionInterpolator474)
TimeSensor475 = x3d.TimeSensor()
TimeSensor475.DEF = "Stand_Time"
TimeSensor475.cycleInterval = 0.00999999977648258

Group456.children.append(TimeSensor475)

Group455.children.append(Group456)
Group476 = x3d.Group()
Group476.DEF = "Walk_Animation"
OrientationInterpolator477 = x3d.OrientationInterpolator()
OrientationInterpolator477.DEF = "r_ankle_RotationInterpolator_BasicWalk"
OrientationInterpolator477.key = [0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]
OrientationInterpolator477.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.3533),(-1, 0, 0, 0.1072),(1, 0, 0, 0.2612),(1, 0, 0, 0.1268),(-1, 0, 0, 0.01793),(-1, 0, 0, 0.05824),(-1, 0, 0, 0.2398),(-1, 0, 0, 0.35),(-1, 0, 0, 0.3322),(0, 0, 1, 0)]

Group476.children.append(OrientationInterpolator477)
OrientationInterpolator478 = x3d.OrientationInterpolator()
OrientationInterpolator478.DEF = "r_knee_RotationInterpolator_BasicWalk"
OrientationInterpolator478.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator478.keyValue = [(1, 0, 0, 0.8573),(1, 0, 0, 0.8926),(1, 0, 0, 0.5351),(1, 0, 0, 0.1756),(1, 0, 0, 0.1194),(1, 0, 0, 0.3153),(1, 0, 0, 0.09354),(1, 0, 0, 0.08558),(1, 0, 0, 0.2475),(1, 0, 0, 0.8573)]

Group476.children.append(OrientationInterpolator478)
OrientationInterpolator479 = x3d.OrientationInterpolator()
OrientationInterpolator479.DEF = "r_hip_RotationInterpolator_BasicWalk"
OrientationInterpolator479.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator479.keyValue = [(-0.5831, 0.03511, 0.8116, 0.1481),(-0.995, 0.02296, 0.09674, 0.4683),(-1, 0.00192, 0.007964, 0.4732),(-0.998, -0.0158, -0.06102, 0.5079),(-0.9911, -0.03541, -0.1286, 0.5419),(-0.9131, -0.06243, -0.403, 0.3361),(-0.4306, -0.07962, -0.899, 0.07038),(1, 0, 0, 0.2571),(0.9891, -0.02805, 0.1444, 0.3879),(-0.5831, 0.03511, 0.8116, 0.1481)]

Group476.children.append(OrientationInterpolator479)
OrientationInterpolator480 = x3d.OrientationInterpolator()
OrientationInterpolator480.DEF = "l_ankle_RotationInterpolator_BasicWalk"
OrientationInterpolator480.key = [0,0.125,0.2083,0.375,0.6667,0.9167,1]
OrientationInterpolator480.keyValue = [(-1, 0, 0, 0.06714),(-1, 0, 0, 0.2152),(-1, 0, 0, 0.3184),(-1, 0, 0, 0.4717),(-1, 0, 0, 0.2912),(1, 0, 0, 0.1222),(-1, 0, 0, 0.06714)]

Group476.children.append(OrientationInterpolator480)
OrientationInterpolator481 = x3d.OrientationInterpolator()
OrientationInterpolator481.DEF = "l_knee_RotationInterpolator_BasicWalk"
OrientationInterpolator481.key = [0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator481.keyValue = [(1, 0, 0, 0.3226),(1, 0, 0, 0.1556),(1, 0, 0, 0.08678),(1, 0, 0, 0.8751),(1, 0, 0, 1.131),(1, 0, 0, 0.09961),(1, 0, 0, 0.3942),(1, 0, 0, 0.3226)]

Group476.children.append(OrientationInterpolator481)
OrientationInterpolator482 = x3d.OrientationInterpolator()
OrientationInterpolator482.DEF = "l_hip_RotationInterpolator_BasicWalk"
OrientationInterpolator482.key = [0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator482.keyValue = [(-0.873, 0.06094, 0.484, 0.2865),(0.9963, -0.01057, 0.08481, 0.2488),(0.9965, 0.01591, -0.08222, 0.3836),(-0.7018, -0.03223, -0.7117, 0.1289),(-1, 0, 0, 0.5518),(-0.9964, 0.02231, 0.0817, 0.5351),(-0.9809, 0.04912, 0.1881, 0.5204),(-0.873, 0.06094, 0.484, 0.2865)]

Group476.children.append(OrientationInterpolator482)
OrientationInterpolator483 = x3d.OrientationInterpolator()
OrientationInterpolator483.DEF = "lower_body_RotationInterpolator_BasicWalk"
OrientationInterpolator483.key = [0,0.5,1]
OrientationInterpolator483.keyValue = [(0, 0, -1, 0.1056),(0, 0, 1, 0.09018),(0, 0, -1, 0.1056)]

Group476.children.append(OrientationInterpolator483)
OrientationInterpolator484 = x3d.OrientationInterpolator()
OrientationInterpolator484.DEF = "r_wrist_RotationInterpolator_BasicWalk"
OrientationInterpolator484.key = [0,0.375,0.9167,1]
OrientationInterpolator484.keyValue = [(-0.8129, 0.4759, -0.3357, 0.1346),(0.1533, -0.9878, 0.02582, 0.3902),(-0.5701, 0.7604, -0.311, 0.366),(-0.8129, 0.4759, -0.3357, 0.1346)]

Group476.children.append(OrientationInterpolator484)
OrientationInterpolator485 = x3d.OrientationInterpolator()
OrientationInterpolator485.DEF = "r_elbow_RotationInterpolator_BasicWalk"
OrientationInterpolator485.key = [0,0.375,0.9167,1]
OrientationInterpolator485.keyValue = [(-1, 0, 0, 0.411508),(-1, 0, 0, 0.0925011),(-1, 0, 0, 0.572568),(-1, 0, 0, 0.411508)]

Group476.children.append(OrientationInterpolator485)
OrientationInterpolator486 = x3d.OrientationInterpolator()
OrientationInterpolator486.DEF = "r_shoulder_RotationInterpolator_BasicWalk"
OrientationInterpolator486.key = [0,0.375,0.9167,1]
OrientationInterpolator486.keyValue = [(-1, 0, 0, 0.09346),(1, 0, 0, 0.3197),(-1, 0, 0, 0.1564),(-1, 0, 0, 0.09346)]

Group476.children.append(OrientationInterpolator486)
OrientationInterpolator487 = x3d.OrientationInterpolator()
OrientationInterpolator487.DEF = "l_wrist_RotationInterpolator_BasicWalk"
OrientationInterpolator487.key = [0,0.375,0.9167,1]
OrientationInterpolator487.keyValue = [(0, -1, 0, 0.461076),(-0.330195, -0.927451, 0.175516, 0.538852),(0.0327774, -0.999314, -0.0172185, 0.492033),(0, -1, 0, 0.461076)]

Group476.children.append(OrientationInterpolator487)
OrientationInterpolator488 = x3d.OrientationInterpolator()
OrientationInterpolator488.DEF = "l_elbow_RotationInterpolator_BasicWalk"
OrientationInterpolator488.key = [0,0.375,0.9167,1]
OrientationInterpolator488.keyValue = [(-1, 0, 0, 0.0659878),(-1, 0, 0, 0.488383),(-1, 0, 0, 0.0177536),(-1, 0, 0, 0.0659878)]

Group476.children.append(OrientationInterpolator488)
OrientationInterpolator489 = x3d.OrientationInterpolator()
OrientationInterpolator489.DEF = "l_shoulder_RotationInterpolator_BasicWalk"
OrientationInterpolator489.key = [0,0.375,0.9167,1]
OrientationInterpolator489.keyValue = [(1, 0, 0, 0.1189),(-1, 0, 0, 0.1861),(1, 0, 0, 0.3357),(1, 0, 0, 0.1189)]

Group476.children.append(OrientationInterpolator489)
OrientationInterpolator490 = x3d.OrientationInterpolator()
OrientationInterpolator490.DEF = "head_RotationInterpolator_BasicWalk"
OrientationInterpolator490.key = [0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]
OrientationInterpolator490.keyValue = [(0, -1, 0, 0.08642),(0, 1, 0, 0.1825),(0, 1, 0, 0.1505),(0, 1, 0, 0.1053),(0, 1, 0, 0.04391),(0, -1, 0, 0.03119),(0, -1, 0, 0.07936),(0, -1, 0, 0.1616),(0, -1, 0, 0.155),(0, -1, 0, 0.08642)]

Group476.children.append(OrientationInterpolator490)
OrientationInterpolator491 = x3d.OrientationInterpolator()
OrientationInterpolator491.DEF = "neck_RotationInterpolator_BasicWalk"
OrientationInterpolator491.key = [0,1]
OrientationInterpolator491.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group476.children.append(OrientationInterpolator491)
OrientationInterpolator492 = x3d.OrientationInterpolator()
OrientationInterpolator492.DEF = "upper_body_RotationInterpolator_BasicWalk"
OrientationInterpolator492.key = [0,0.2083,0.375,0.75,0.8333,1]
OrientationInterpolator492.keyValue = [(0, 1, 0, 0.0826),(-0.01972, -0.5974, 0.8017, 0.08231),(0.009296, -0.9648, 0.2627, 0.1734),(-0.01238, 0.9549, -0.2968, 0.08732),(-0.008125, 0.9691, -0.2463, 0.158),(0, 1, 0, 0.0826)]

Group476.children.append(OrientationInterpolator492)
OrientationInterpolator493 = x3d.OrientationInterpolator()
OrientationInterpolator493.DEF = "whole_body_RotationInterpolator_BasicWalk"
OrientationInterpolator493.key = [0,1]
OrientationInterpolator493.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group476.children.append(OrientationInterpolator493)
PositionInterpolator494 = x3d.PositionInterpolator()
PositionInterpolator494.DEF = "whole_body_TranslationInterpolator_BasicWalk"
PositionInterpolator494.key = [0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]
PositionInterpolator494.keyValue = [(0, -0.00928, 0),(0, -0.003858, 0),(0, -0.008847, 0),(0, -0.01486, 0),(0, -0.02641, 0),(0, -0.03934, 0),(0, -0.0502, 0),(0, -0.07469, 0),(0, -0.02732, 0),(0, -0.01608, 0),(0, -0.01129, 0),(0, -0.005819, 0),(0, -0.002004, 0),(0, -0.002579, 0),(0, -0.0143, 0),(0, -0.03799, 0),(0, -0.05648, 0),(0, -0.045, 0),(0, -0.00928, 0)]

Group476.children.append(PositionInterpolator494)
TimeSensor495 = x3d.TimeSensor()
TimeSensor495.DEF = "Walk_Time"
TimeSensor495.cycleInterval = 2
TimeSensor495.loop = True
TimeSensor495.startTime = -1

Group476.children.append(TimeSensor495)

Group455.children.append(Group476)
Group496 = x3d.Group()
Group496.DEF = "Run_Animation"
OrientationInterpolator497 = x3d.OrientationInterpolator()
OrientationInterpolator497.DEF = "r_ankle_RotationInterpolator_Run"
OrientationInterpolator497.key = [0,0.4909,0.7091,0.8,0.8182,1]
OrientationInterpolator497.keyValue = [(1, 0, 0, 0.2323),(-1, 0, 0, 0.07843),(-1, 0, 0, 0.09676),(-1, 0, 0, 0.3274),(-1, 0, 0, 0.3278),(1, 0, 0, 0.2323)]

Group496.children.append(OrientationInterpolator497)
OrientationInterpolator498 = x3d.OrientationInterpolator()
OrientationInterpolator498.DEF = "r_knee_RotationInterpolator_Run"
OrientationInterpolator498.key = [0,0.03636,0.2182,0.4909,0.7455,1]
OrientationInterpolator498.keyValue = [(1, 0, 0, 0.7004),(1, 0, 0, 1.011),(1, 0, 0, 1.892),(1, 0, 0, 1.188),(1, 0, 0, 0.3964),(1, 0, 0, 0.7004)]

Group496.children.append(OrientationInterpolator498)
OrientationInterpolator499 = x3d.OrientationInterpolator()
OrientationInterpolator499.DEF = "r_hip_RotationInterpolator_Run"
OrientationInterpolator499.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator499.keyValue = [(0.9999, 0.00293, -0.00989, 0.402),(-1, 0.004977, -0.00497, 0.5943),(-1, 0.003265, -0.001752, 1.178),(-0.9999, 0.00815, -0.01093, 0.3031),(0.9999, 0.00293, -0.00989, 0.402)]

Group496.children.append(OrientationInterpolator499)
OrientationInterpolator500 = x3d.OrientationInterpolator()
OrientationInterpolator500.DEF = "l_ankle_RotationInterpolator_Run"
OrientationInterpolator500.key = [0,0.2182,0.3091,0.4909,1]
OrientationInterpolator500.keyValue = [(1, 0, 0, 0.03543),(-1, 0, 0, 0.1037),(-1, 0, 0, 0.4328),(1, 0, 0, 0.1929),(1, 0, 0, 0.03543)]

Group496.children.append(OrientationInterpolator500)
OrientationInterpolator501 = x3d.OrientationInterpolator()
OrientationInterpolator501.DEF = "l_knee_RotationInterpolator_Run"
OrientationInterpolator501.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator501.keyValue = [(1, 0, 0, 1.108),(1, 0, 0, 0.4265),(1, 0, 0, 0.7052),(1, 0, 0, 2.179),(1, 0, 0, 1.108)]

Group496.children.append(OrientationInterpolator501)
OrientationInterpolator502 = x3d.OrientationInterpolator()
OrientationInterpolator502.DEF = "l_hip_RotationInterpolator_Run"
OrientationInterpolator502.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator502.keyValue = [(-0.9986, 0.03354, 0.04001, 1.212),(-0.9889, 0.1328, 0.06696, 0.4025),(0.9894, 0.1453, 0.009351, 0.4114),(-0.9963, 0.07032, 0.05003, 0.7035),(-0.9986, 0.03354, 0.04001, 1.212)]

Group496.children.append(OrientationInterpolator502)
OrientationInterpolator503 = x3d.OrientationInterpolator()
OrientationInterpolator503.DEF = "lower_body_RotationInterpolator_Run"
OrientationInterpolator503.key = [0,1]
OrientationInterpolator503.keyValue = [(0.9969, -0.05444, 0.05596, 0.07687),(0.9969, -0.05444, 0.05596, 0.07687)]

Group496.children.append(OrientationInterpolator503)
OrientationInterpolator504 = x3d.OrientationInterpolator()
OrientationInterpolator504.DEF = "r_wrist_RotationInterpolator_Run"
OrientationInterpolator504.key = [0,1]
OrientationInterpolator504.keyValue = [(-0.917742, -0.237244, -0.318536, 0.214273),(-0.917742, -0.237244, -0.318536, 0.214273)]

Group496.children.append(OrientationInterpolator504)
OrientationInterpolator505 = x3d.OrientationInterpolator()
OrientationInterpolator505.DEF = "r_elbow_RotationInterpolator_Run"
OrientationInterpolator505.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator505.keyValue = [(0.9353, -0.2978, -0.191, 4.222),(-0.9362, 0.2924, -0.1952, 1.05),(0.9941, -0.09719, -0.04725, 4.512),(-0.9594, 0.2653, 0.09579, 1.525),(0.9353, -0.2978, -0.191, 4.222)]

Group496.children.append(OrientationInterpolator505)
OrientationInterpolator506 = x3d.OrientationInterpolator()
OrientationInterpolator506.DEF = "r_shoulder_RotationInterpolator_Run"
OrientationInterpolator506.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator506.keyValue = [(-1, 0, 0, 0.6979),(0.9094, 0.2062, -0.3613, 0.4157),(0.9637, 0.1537, -0.2185, 1.353),(0.4864, 0.08841, -0.8693, 0.1716),(-1, 0, 0, 0.6979)]

Group496.children.append(OrientationInterpolator506)
OrientationInterpolator507 = x3d.OrientationInterpolator()
OrientationInterpolator507.DEF = "l_wrist_RotationInterpolator_Run"
OrientationInterpolator507.key = [0,1]
OrientationInterpolator507.keyValue = [(-0.0240995, -0.999682, 0.00741506, 0.120409),(-0.0240995, -0.999682, 0.00741506, 0.120409)]

Group496.children.append(OrientationInterpolator507)
OrientationInterpolator508 = x3d.OrientationInterpolator()
OrientationInterpolator508.DEF = "l_elbow_RotationInterpolator_Run"
OrientationInterpolator508.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator508.keyValue = [(0.9985, 0.03887, 0.03802, 4.689),(-0.965, -0.1889, -0.1821, 1.415),(0.9758, 0.1563, 0.1529, 4.666),(-0.9956, -0.0936, 0.009826, 1.126),(0.9985, 0.03887, 0.03802, 4.689)]

Group496.children.append(OrientationInterpolator508)
OrientationInterpolator509 = x3d.OrientationInterpolator()
OrientationInterpolator509.DEF = "l_shoulder_RotationInterpolator_Run"
OrientationInterpolator509.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator509.keyValue = [(0.9907, -0.07264, 0.115, 1.135),(0.9291, -0.1222, 0.349, 0.1695),(-0.9892, 0.1364, -0.05394, 0.5112),(0.9942, -0.0002052, 0.1073, 0.4975),(0.9907, -0.07264, 0.115, 1.135)]

Group496.children.append(OrientationInterpolator509)
OrientationInterpolator510 = x3d.OrientationInterpolator()
OrientationInterpolator510.DEF = "head_RotationInterpolator_Run"
OrientationInterpolator510.key = [0,0.4909,1]
OrientationInterpolator510.keyValue = [(0.6517, -0.7559, 0.06211, 0.2508),(0.6467, 0.7527, -0.1238, 0.2344),(0.6517, -0.7559, 0.06211, 0.2508)]

Group496.children.append(OrientationInterpolator510)
OrientationInterpolator511 = x3d.OrientationInterpolator()
OrientationInterpolator511.DEF = "neck_RotationInterpolator_Run"
OrientationInterpolator511.key = [0,1]
OrientationInterpolator511.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group496.children.append(OrientationInterpolator511)
OrientationInterpolator512 = x3d.OrientationInterpolator()
OrientationInterpolator512.DEF = "upper_body_RotationInterpolator_Run"
OrientationInterpolator512.key = [0,0.2545,0.4909,0.7636,1]
OrientationInterpolator512.keyValue = [(0.7651, 0.6382, 0.08586, 0.2712),(0.9999, 0.002845, -0.01547, 0.3756),(0.7459, -0.6505, -0.1432, 0.2416),(0.9984, 0.05536, -0.01154, 0.3488),(0.7651, 0.6382, 0.08586, 0.2712)]

Group496.children.append(OrientationInterpolator512)
OrientationInterpolator513 = x3d.OrientationInterpolator()
OrientationInterpolator513.DEF = "whole_body_RotationInterpolator_Run"
OrientationInterpolator513.key = [0,1]
OrientationInterpolator513.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group496.children.append(OrientationInterpolator513)
PositionInterpolator514 = x3d.PositionInterpolator()
PositionInterpolator514.DEF = "whole_body_TranslationInterpolator_Run"
PositionInterpolator514.key = [0,0.2182,0.2909,0.3091,0.7091,0.8,0.8182,1]
PositionInterpolator514.keyValue = [(0, -0.0351, 0),(0, -0.0351, 0),(0, -0.04087, 0),(0, -0.04886, 0),(0, -0.04051, 0),(0, -0.03666, 0),(0, -0.03666, 0),(0, -0.0351, 0)]

Group496.children.append(PositionInterpolator514)
TimeSensor515 = x3d.TimeSensor()
TimeSensor515.DEF = "Run_Time"
TimeSensor515.loop = True
TimeSensor515.startTime = -1

Group496.children.append(TimeSensor515)

Group455.children.append(Group496)
Group516 = x3d.Group()
Group516.DEF = "Jump_Animation"
OrientationInterpolator517 = x3d.OrientationInterpolator()
OrientationInterpolator517.DEF = "r_ankle_RotationInterpolator_Jump"
OrientationInterpolator517.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]
OrientationInterpolator517.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.6735),(-1, 0, 0, 0.6735),(-1, 0, 0, 0.3527),(-1, 0, 0, 0.3038),(-1, 0, 0, 0.07964),(1, 0, 0, 0.3001),(1, 0, 0, 0.6509),(1, 0, 0, 0.3001),(-1, 0, 0, 0.2087),(-1, 0, 0, 0.3756),(-1, 0, 0, 0.3279),(-1, 0, 0, 0.1193),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator517)
OrientationInterpolator518 = x3d.OrientationInterpolator()
OrientationInterpolator518.DEF = "r_knee_RotationInterpolator_Jump"
OrientationInterpolator518.key = [0,0.28,0.32,0.48,0.64,0.76,0.88,1]
OrientationInterpolator518.keyValue = [(0, 0, 1, 0),(1, 0, 0, 2.005),(1, 0, 0, 2.005),(0, 0, 1, 0),(1, 0, 0, 0.9507),(1, 0, 0, 0.5845),(1, 0, 0, 0.9054),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator518)
OrientationInterpolator519 = x3d.OrientationInterpolator()
OrientationInterpolator519.DEF = "r_hip_RotationInterpolator_Jump"
OrientationInterpolator519.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]
OrientationInterpolator519.keyValue = [(0, 0, 1, 0),(1, 0, 0, 4.433),(1, 0, 0, 4.433),(1, 0, 0, 4.647),(-1, 0, 0, 0.8943),(-1, 0, 0, 0.3698),(0, 0, 1, 0),(-1, 0, 0, 0.4963),(-1, 0, 0, 0.3829),(-1, 0, 0, 0.5169),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator519)
OrientationInterpolator520 = x3d.OrientationInterpolator()
OrientationInterpolator520.DEF = "l_ankle_RotationInterpolator_Jump"
OrientationInterpolator520.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]
OrientationInterpolator520.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.625),(-1, 0, 0, 0.625),(-1, 0, 0, 0.3364),(-1, 0, 0, 0.2742),(-1, 0, 0, 0.05078),(1, 0, 0, 0.2833),(1, 0, 0, 0.6667),(1, 0, 0, 0.2833),(-1, 0, 0, 0.2108),(-1, 0, 0, 0.375),(-1, 0, 0, 0.3146),(-1, 0, 0, 0.1174),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator520)
OrientationInterpolator521 = x3d.OrientationInterpolator()
OrientationInterpolator521.DEF = "l_knee_RotationInterpolator_Jump"
OrientationInterpolator521.key = [0,0.28,0.32,0.48,0.64,0.76,0.88,1]
OrientationInterpolator521.keyValue = [(0, 0, 1, 0),(1, 0, 0, 2.047),(1, 0, 0, 2.047),(0, 0, 1, 0),(1, 0, 0, 1.566),(1, 0, 0, 0.5913),(1, 0, 0, 0.9235),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator521)
OrientationInterpolator522 = x3d.OrientationInterpolator()
OrientationInterpolator522.DEF = "l_hip_RotationInterpolator_Jump"
OrientationInterpolator522.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]
OrientationInterpolator522.keyValue = [(0, 0, 1, 0),(1, 0, 0, 4.349),(1, 0, 0, 4.349),(1, 0, 0, 4.615),(-1, 0, 0, 0.9136),(-1, 0, 0, 0.3614),(0, 0, 1, 0),(-1, 0, 0, 0.7869),(-1, 0, 0, 0.3918),(-1, 0, 0, 0.5433),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator522)
OrientationInterpolator523 = x3d.OrientationInterpolator()
OrientationInterpolator523.DEF = "lower_body_RotationInterpolator_Jump"
OrientationInterpolator523.key = [0,0.28,0.32,0.48,0.76,1]
OrientationInterpolator523.keyValue = [(0, 0, 1, 0),(1, 0, 0, 0.1892),(1, 0, 0, 0.1892),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator523)
OrientationInterpolator524 = x3d.OrientationInterpolator()
OrientationInterpolator524.DEF = "r_wrist_RotationInterpolator_Jump"
OrientationInterpolator524.key = [0,0.28,0.32,0.64,0.76,1]
OrientationInterpolator524.keyValue = [(0, 0, 1, 0),(-0.0585279, 0.983903, -0.168849, 1.85956),(-0.0585279, 0.983903, -0.168849, 1.85956),(-0.00222418, 0.99801, -0.0630095, 1.46072),(0, 1, 0, 0.497349),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator524)
OrientationInterpolator525 = x3d.OrientationInterpolator()
OrientationInterpolator525.DEF = "r_elbow_RotationInterpolator_Jump"
OrientationInterpolator525.key = [0,0.28,0.32,0.64,0.76,1]
OrientationInterpolator525.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.04151),(-1, 0, 0, 0.04151),(-1, 0, 0, 0.5855),(-1, 0, 0, 0.5852),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator525)
OrientationInterpolator526 = x3d.OrientationInterpolator()
OrientationInterpolator526.DEF = "r_shoulder_RotationInterpolator_Jump"
OrientationInterpolator526.key = [0,0.28,0.32,0.64,0.76,0.88,1]
OrientationInterpolator526.keyValue = [(0, 0, 1, 0),(0.9992, 0.02042, 0.03558, 4.688),(0.9992, 0.02042, 0.03558, 4.688),(0.9989, -0.04623, 0.005159, 4.079),(-0.8687, -0.2525, -0.4261, 1.501),(-0.941, -0.2893, -0.1754, 0.4788),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator526)
OrientationInterpolator527 = x3d.OrientationInterpolator()
OrientationInterpolator527.DEF = "l_wrist_RotationInterpolator_Jump"
OrientationInterpolator527.key = [0,0.28,0.32,0.64,0.76,0.88,1]
OrientationInterpolator527.keyValue = [(0, 0, 1, 0),(0.0672928, 0.989475, -0.128107, 4.15574),(0.0672928, 0.989475, -0.128107, 4.15574),(0.00364942, 0.999901, 0.0135896, 4.5822),(0, -1, 0, 0.655922),(-0.00050618, -0.999999, 0.0012782, 1.28397),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator527)
OrientationInterpolator528 = x3d.OrientationInterpolator()
OrientationInterpolator528.DEF = "l_elbow_RotationInterpolator_Jump"
OrientationInterpolator528.key = [0,0.28,0.32,0.64,0.76,1]
OrientationInterpolator528.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.1229),(-1, 0, 0, 0.1229),(-1, 0, 0, 0.5976),(-1, 0, 0, 0.3917),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator528)
OrientationInterpolator529 = x3d.OrientationInterpolator()
OrientationInterpolator529.DEF = "l_shoulder_RotationInterpolator_Jump"
OrientationInterpolator529.key = [0,0.28,0.32,0.64,0.76,0.88,1]
OrientationInterpolator529.keyValue = [(0, 0, 1, 0),(-0.9987, 0.02554, 0.04498, 1.57),(-0.9987, 0.02554, 0.04498, 1.57),(1, 0.0004113, 0.003055, 4.114),(-0.8413, 0.3238, 0.4329, 1.453),(-0.877, 0.4198, 0.2337, 0.6009),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator529)
OrientationInterpolator530 = x3d.OrientationInterpolator()
OrientationInterpolator530.DEF = "head_RotationInterpolator_Jump"
OrientationInterpolator530.key = [0,0.28,0.32,0.48,0.76,1]
OrientationInterpolator530.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.5989),(-1, 0, 0, 0.5989),(-1, 0, 0, 0.3216),(1, 0, 0, 0.06503),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator530)
OrientationInterpolator531 = x3d.OrientationInterpolator()
OrientationInterpolator531.DEF = "neck_RotationInterpolator_Jump"
OrientationInterpolator531.key = [0,0.28,0.32,0.48,0.76,1]
OrientationInterpolator531.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.1942),(-1, 0, 0, 0.1942),(0, 0, 1, 0),(1, 0, 0, 0.2284),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator531)
OrientationInterpolator532 = x3d.OrientationInterpolator()
OrientationInterpolator532.DEF = "upper_body_RotationInterpolator_Jump"
OrientationInterpolator532.key = [0,0.28,0.32,0.48,0.76,0.88,1]
OrientationInterpolator532.keyValue = [(0, 0, 1, 0),(1, 0, 0, 1.038),(1, 0, 0, 1.038),(-1, 0, 0, 0.1057),(1, 0, 0, 0.2171),(1, 0, 0, 0.3465),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator532)
OrientationInterpolator533 = x3d.OrientationInterpolator()
OrientationInterpolator533.DEF = "whole_body_RotationInterpolator_Jump"
OrientationInterpolator533.key = [0,0.28,0.32,0.48,0.64,0.76,1]
OrientationInterpolator533.keyValue = [(0, 0, 1, 0),(1, 0, 0, 0.3273),(1, 0, 0, 0.3273),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group516.children.append(OrientationInterpolator533)
PositionInterpolator534 = x3d.PositionInterpolator()
PositionInterpolator534.DEF = "whole_body_TranslationInterpolator_Jump"
PositionInterpolator534.key = [0,0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.8,0.84,0.88,0.92,0.96,1]
PositionInterpolator534.keyValue = [(0, 0, 0),(0, -0.01264, -0.01289),(0, -0.04712, -0.03738),(-0.0003345, -0.1049, -0.05353),(-0.0005712, -0.1892, -0.06561),(-0.0008233, -0.286, -0.06276),(-0.0009591, -0.3795, -0.05148),(-0.00106, -0.4484, -0.03656),(-0.00106, -0.4484, -0.03656),(-0.001122, -0.3269, -0.1499),(-0.0008616, -0.13, -0.06358),(-0.0005128, -0.03123, -0.05488),(0.0004779, 0.053, 0.02732),(0.0001728, 0.4148, 0.006873),(0, 0.03045, 0.02148),(0, -0.01299, -0.01057),(0, -0.06932, -0.01064),(0.0001365, -0.1037, -0.005059),(0.0001279, -0.07198, -0.007596),(0.000141, -0.01626, -0.004935),(0, 0, 0)]

Group516.children.append(PositionInterpolator534)
TimeSensor535 = x3d.TimeSensor()
TimeSensor535.DEF = "Jump_Time"
TimeSensor535.cycleInterval = 2
TimeSensor535.startTime = -1

Group516.children.append(TimeSensor535)

Group455.children.append(Group516)

Scene13.children.append(Group455)
ROUTE536 = x3d.ROUTE()
ROUTE536.fromNode = "HudProx"
ROUTE536.fromField = "position_changed"
ROUTE536.toNode = "HudXform"
ROUTE536.toField = "set_translation"

Scene13.children.append(ROUTE536)
ROUTE537 = x3d.ROUTE()
ROUTE537.fromNode = "HudProx"
ROUTE537.fromField = "orientation_changed"
ROUTE537.toNode = "HudXform"
ROUTE537.toField = "set_rotation"

Scene13.children.append(ROUTE537)
ROUTE538 = x3d.ROUTE()
ROUTE538.fromNode = "Stand_Touch"
ROUTE538.fromField = "touchTime"
ROUTE538.toNode = "Walk_Time"
ROUTE538.toField = "set_stopTime"

Scene13.children.append(ROUTE538)
ROUTE539 = x3d.ROUTE()
ROUTE539.fromNode = "Stand_Touch"
ROUTE539.fromField = "touchTime"
ROUTE539.toNode = "Run_Time"
ROUTE539.toField = "set_stopTime"

Scene13.children.append(ROUTE539)
ROUTE540 = x3d.ROUTE()
ROUTE540.fromNode = "Stand_Touch"
ROUTE540.fromField = "touchTime"
ROUTE540.toNode = "Jump_Time"
ROUTE540.toField = "set_stopTime"

Scene13.children.append(ROUTE540)
ROUTE541 = x3d.ROUTE()
ROUTE541.fromNode = "Stand_Touch"
ROUTE541.fromField = "touchTime"
ROUTE541.toNode = "Stand_Time"
ROUTE541.toField = "set_startTime"

Scene13.children.append(ROUTE541)
ROUTE542 = x3d.ROUTE()
ROUTE542.fromNode = "Walk_Touch"
ROUTE542.fromField = "touchTime"
ROUTE542.toNode = "Stand_Time"
ROUTE542.toField = "set_stopTime"

Scene13.children.append(ROUTE542)
ROUTE543 = x3d.ROUTE()
ROUTE543.fromNode = "Walk_Touch"
ROUTE543.fromField = "touchTime"
ROUTE543.toNode = "Run_Time"
ROUTE543.toField = "set_stopTime"

Scene13.children.append(ROUTE543)
ROUTE544 = x3d.ROUTE()
ROUTE544.fromNode = "Walk_Touch"
ROUTE544.fromField = "touchTime"
ROUTE544.toNode = "Jump_Time"
ROUTE544.toField = "set_stopTime"

Scene13.children.append(ROUTE544)
ROUTE545 = x3d.ROUTE()
ROUTE545.fromNode = "Walk_Touch"
ROUTE545.fromField = "touchTime"
ROUTE545.toNode = "Walk_Time"
ROUTE545.toField = "set_startTime"

Scene13.children.append(ROUTE545)
ROUTE546 = x3d.ROUTE()
ROUTE546.fromNode = "Run_Touch"
ROUTE546.fromField = "touchTime"
ROUTE546.toNode = "Stand_Time"
ROUTE546.toField = "set_stopTime"

Scene13.children.append(ROUTE546)
ROUTE547 = x3d.ROUTE()
ROUTE547.fromNode = "Run_Touch"
ROUTE547.fromField = "touchTime"
ROUTE547.toNode = "Walk_Time"
ROUTE547.toField = "set_stopTime"

Scene13.children.append(ROUTE547)
ROUTE548 = x3d.ROUTE()
ROUTE548.fromNode = "Run_Touch"
ROUTE548.fromField = "touchTime"
ROUTE548.toNode = "Jump_Time"
ROUTE548.toField = "set_stopTime"

Scene13.children.append(ROUTE548)
ROUTE549 = x3d.ROUTE()
ROUTE549.fromNode = "Run_Touch"
ROUTE549.fromField = "touchTime"
ROUTE549.toNode = "Run_Time"
ROUTE549.toField = "set_startTime"

Scene13.children.append(ROUTE549)
ROUTE550 = x3d.ROUTE()
ROUTE550.fromNode = "Jump_Touch"
ROUTE550.fromField = "touchTime"
ROUTE550.toNode = "Stand_Time"
ROUTE550.toField = "set_stopTime"

Scene13.children.append(ROUTE550)
ROUTE551 = x3d.ROUTE()
ROUTE551.fromNode = "Jump_Touch"
ROUTE551.fromField = "touchTime"
ROUTE551.toNode = "Walk_Time"
ROUTE551.toField = "set_stopTime"

Scene13.children.append(ROUTE551)
ROUTE552 = x3d.ROUTE()
ROUTE552.fromNode = "Jump_Touch"
ROUTE552.fromField = "touchTime"
ROUTE552.toNode = "Run_Time"
ROUTE552.toField = "set_stopTime"

Scene13.children.append(ROUTE552)
ROUTE553 = x3d.ROUTE()
ROUTE553.fromNode = "Jump_Touch"
ROUTE553.fromField = "touchTime"
ROUTE553.toNode = "Jump_Time"
ROUTE553.toField = "set_startTime"

Scene13.children.append(ROUTE553)
ROUTE554 = x3d.ROUTE()
ROUTE554.fromNode = "Stand_Time"
ROUTE554.fromField = "fraction_changed"
ROUTE554.toNode = "r_ankle_RotationInterpolator_Stand"
ROUTE554.toField = "set_fraction"

Scene13.children.append(ROUTE554)
ROUTE555 = x3d.ROUTE()
ROUTE555.fromNode = "Stand_Time"
ROUTE555.fromField = "fraction_changed"
ROUTE555.toNode = "r_knee_RotationInterpolator_Stand"
ROUTE555.toField = "set_fraction"

Scene13.children.append(ROUTE555)
ROUTE556 = x3d.ROUTE()
ROUTE556.fromNode = "Stand_Time"
ROUTE556.fromField = "fraction_changed"
ROUTE556.toNode = "r_hip_RotationInterpolator_Stand"
ROUTE556.toField = "set_fraction"

Scene13.children.append(ROUTE556)
ROUTE557 = x3d.ROUTE()
ROUTE557.fromNode = "Stand_Time"
ROUTE557.fromField = "fraction_changed"
ROUTE557.toNode = "l_ankle_RotationInterpolator_Stand"
ROUTE557.toField = "set_fraction"

Scene13.children.append(ROUTE557)
ROUTE558 = x3d.ROUTE()
ROUTE558.fromNode = "Stand_Time"
ROUTE558.fromField = "fraction_changed"
ROUTE558.toNode = "l_knee_RotationInterpolator_Stand"
ROUTE558.toField = "set_fraction"

Scene13.children.append(ROUTE558)
ROUTE559 = x3d.ROUTE()
ROUTE559.fromNode = "Stand_Time"
ROUTE559.fromField = "fraction_changed"
ROUTE559.toNode = "l_hip_RotationInterpolator_Stand"
ROUTE559.toField = "set_fraction"

Scene13.children.append(ROUTE559)
ROUTE560 = x3d.ROUTE()
ROUTE560.fromNode = "Stand_Time"
ROUTE560.fromField = "fraction_changed"
ROUTE560.toNode = "lower_body_RotationInterpolator_Stand"
ROUTE560.toField = "set_fraction"

Scene13.children.append(ROUTE560)
ROUTE561 = x3d.ROUTE()
ROUTE561.fromNode = "Stand_Time"
ROUTE561.fromField = "fraction_changed"
ROUTE561.toNode = "r_wrist_RotationInterpolator_Stand"
ROUTE561.toField = "set_fraction"

Scene13.children.append(ROUTE561)
ROUTE562 = x3d.ROUTE()
ROUTE562.fromNode = "Stand_Time"
ROUTE562.fromField = "fraction_changed"
ROUTE562.toNode = "r_elbow_RotationInterpolator_Stand"
ROUTE562.toField = "set_fraction"

Scene13.children.append(ROUTE562)
ROUTE563 = x3d.ROUTE()
ROUTE563.fromNode = "Stand_Time"
ROUTE563.fromField = "fraction_changed"
ROUTE563.toNode = "r_shoulder_RotationInterpolator_Stand"
ROUTE563.toField = "set_fraction"

Scene13.children.append(ROUTE563)
ROUTE564 = x3d.ROUTE()
ROUTE564.fromNode = "Stand_Time"
ROUTE564.fromField = "fraction_changed"
ROUTE564.toNode = "l_wrist_RotationInterpolator_Stand"
ROUTE564.toField = "set_fraction"

Scene13.children.append(ROUTE564)
ROUTE565 = x3d.ROUTE()
ROUTE565.fromNode = "Stand_Time"
ROUTE565.fromField = "fraction_changed"
ROUTE565.toNode = "l_elbow_RotationInterpolator_Stand"
ROUTE565.toField = "set_fraction"

Scene13.children.append(ROUTE565)
ROUTE566 = x3d.ROUTE()
ROUTE566.fromNode = "Stand_Time"
ROUTE566.fromField = "fraction_changed"
ROUTE566.toNode = "l_shoulder_RotationInterpolator_Stand"
ROUTE566.toField = "set_fraction"

Scene13.children.append(ROUTE566)
ROUTE567 = x3d.ROUTE()
ROUTE567.fromNode = "Stand_Time"
ROUTE567.fromField = "fraction_changed"
ROUTE567.toNode = "head_RotationInterpolator_Stand"
ROUTE567.toField = "set_fraction"

Scene13.children.append(ROUTE567)
ROUTE568 = x3d.ROUTE()
ROUTE568.fromNode = "Stand_Time"
ROUTE568.fromField = "fraction_changed"
ROUTE568.toNode = "neck_RotationInterpolator_Stand"
ROUTE568.toField = "set_fraction"

Scene13.children.append(ROUTE568)
ROUTE569 = x3d.ROUTE()
ROUTE569.fromNode = "Stand_Time"
ROUTE569.fromField = "fraction_changed"
ROUTE569.toNode = "upper_body_RotationInterpolator_Stand"
ROUTE569.toField = "set_fraction"

Scene13.children.append(ROUTE569)
ROUTE570 = x3d.ROUTE()
ROUTE570.fromNode = "Stand_Time"
ROUTE570.fromField = "fraction_changed"
ROUTE570.toNode = "whole_body_RotationInterpolator_Stand"
ROUTE570.toField = "set_fraction"

Scene13.children.append(ROUTE570)
ROUTE571 = x3d.ROUTE()
ROUTE571.fromNode = "Stand_Time"
ROUTE571.fromField = "fraction_changed"
ROUTE571.toNode = "whole_body_TranslationInterpolator_Stand"
ROUTE571.toField = "set_fraction"

Scene13.children.append(ROUTE571)
ROUTE572 = x3d.ROUTE()
ROUTE572.fromNode = "r_ankle_RotationInterpolator_Stand"
ROUTE572.fromField = "value_changed"
ROUTE572.toNode = "hanim_r_ankle"
ROUTE572.toField = "set_rotation"

Scene13.children.append(ROUTE572)
ROUTE573 = x3d.ROUTE()
ROUTE573.fromNode = "r_knee_RotationInterpolator_Stand"
ROUTE573.fromField = "value_changed"
ROUTE573.toNode = "hanim_r_knee"
ROUTE573.toField = "set_rotation"

Scene13.children.append(ROUTE573)
ROUTE574 = x3d.ROUTE()
ROUTE574.fromNode = "r_hip_RotationInterpolator_Stand"
ROUTE574.fromField = "value_changed"
ROUTE574.toNode = "hanim_r_hip"
ROUTE574.toField = "set_rotation"

Scene13.children.append(ROUTE574)
ROUTE575 = x3d.ROUTE()
ROUTE575.fromNode = "l_ankle_RotationInterpolator_Stand"
ROUTE575.fromField = "value_changed"
ROUTE575.toNode = "hanim_l_ankle"
ROUTE575.toField = "set_rotation"

Scene13.children.append(ROUTE575)
ROUTE576 = x3d.ROUTE()
ROUTE576.fromNode = "l_knee_RotationInterpolator_Stand"
ROUTE576.fromField = "value_changed"
ROUTE576.toNode = "hanim_l_knee"
ROUTE576.toField = "set_rotation"

Scene13.children.append(ROUTE576)
ROUTE577 = x3d.ROUTE()
ROUTE577.fromNode = "l_hip_RotationInterpolator_Stand"
ROUTE577.fromField = "value_changed"
ROUTE577.toNode = "hanim_l_hip"
ROUTE577.toField = "set_rotation"

Scene13.children.append(ROUTE577)
ROUTE578 = x3d.ROUTE()
ROUTE578.fromNode = "lower_body_RotationInterpolator_Stand"
ROUTE578.fromField = "value_changed"
ROUTE578.toNode = "hanim_sacroiliac"
ROUTE578.toField = "set_rotation"

Scene13.children.append(ROUTE578)
ROUTE579 = x3d.ROUTE()
ROUTE579.fromNode = "r_wrist_RotationInterpolator_Stand"
ROUTE579.fromField = "value_changed"
ROUTE579.toNode = "hanim_r_wrist"
ROUTE579.toField = "set_rotation"

Scene13.children.append(ROUTE579)
ROUTE580 = x3d.ROUTE()
ROUTE580.fromNode = "r_elbow_RotationInterpolator_Stand"
ROUTE580.fromField = "value_changed"
ROUTE580.toNode = "hanim_r_elbow"
ROUTE580.toField = "set_rotation"

Scene13.children.append(ROUTE580)
ROUTE581 = x3d.ROUTE()
ROUTE581.fromNode = "r_shoulder_RotationInterpolator_Stand"
ROUTE581.fromField = "value_changed"
ROUTE581.toNode = "hanim_r_shoulder"
ROUTE581.toField = "set_rotation"

Scene13.children.append(ROUTE581)
ROUTE582 = x3d.ROUTE()
ROUTE582.fromNode = "l_wrist_RotationInterpolator_Stand"
ROUTE582.fromField = "value_changed"
ROUTE582.toNode = "hanim_l_wrist"
ROUTE582.toField = "set_rotation"

Scene13.children.append(ROUTE582)
ROUTE583 = x3d.ROUTE()
ROUTE583.fromNode = "l_elbow_RotationInterpolator_Stand"
ROUTE583.fromField = "value_changed"
ROUTE583.toNode = "hanim_l_elbow"
ROUTE583.toField = "set_rotation"

Scene13.children.append(ROUTE583)
ROUTE584 = x3d.ROUTE()
ROUTE584.fromNode = "l_shoulder_RotationInterpolator_Stand"
ROUTE584.fromField = "value_changed"
ROUTE584.toNode = "hanim_l_shoulder"
ROUTE584.toField = "set_rotation"

Scene13.children.append(ROUTE584)
ROUTE585 = x3d.ROUTE()
ROUTE585.fromNode = "head_RotationInterpolator_Stand"
ROUTE585.fromField = "value_changed"
ROUTE585.toNode = "hanim_skullbase"
ROUTE585.toField = "set_rotation"

Scene13.children.append(ROUTE585)
ROUTE586 = x3d.ROUTE()
ROUTE586.fromNode = "neck_RotationInterpolator_Stand"
ROUTE586.fromField = "value_changed"
ROUTE586.toNode = "hanim_vc4"
ROUTE586.toField = "set_rotation"

Scene13.children.append(ROUTE586)
ROUTE587 = x3d.ROUTE()
ROUTE587.fromNode = "upper_body_RotationInterpolator_Stand"
ROUTE587.fromField = "value_changed"
ROUTE587.toNode = "hanim_vl1"
ROUTE587.toField = "set_rotation"

Scene13.children.append(ROUTE587)
ROUTE588 = x3d.ROUTE()
ROUTE588.fromNode = "whole_body_RotationInterpolator_Stand"
ROUTE588.fromField = "value_changed"
ROUTE588.toNode = "hanim_humanoid_root"
ROUTE588.toField = "set_rotation"

Scene13.children.append(ROUTE588)
ROUTE589 = x3d.ROUTE()
ROUTE589.fromNode = "whole_body_TranslationInterpolator_Stand"
ROUTE589.fromField = "value_changed"
ROUTE589.toNode = "hanim_humanoid_root"
ROUTE589.toField = "set_translation"

Scene13.children.append(ROUTE589)
ROUTE590 = x3d.ROUTE()
ROUTE590.fromNode = "Walk_Time"
ROUTE590.fromField = "fraction_changed"
ROUTE590.toNode = "r_ankle_RotationInterpolator_BasicWalk"
ROUTE590.toField = "set_fraction"

Scene13.children.append(ROUTE590)
ROUTE591 = x3d.ROUTE()
ROUTE591.fromNode = "Walk_Time"
ROUTE591.fromField = "fraction_changed"
ROUTE591.toNode = "r_knee_RotationInterpolator_BasicWalk"
ROUTE591.toField = "set_fraction"

Scene13.children.append(ROUTE591)
ROUTE592 = x3d.ROUTE()
ROUTE592.fromNode = "Walk_Time"
ROUTE592.fromField = "fraction_changed"
ROUTE592.toNode = "r_hip_RotationInterpolator_BasicWalk"
ROUTE592.toField = "set_fraction"

Scene13.children.append(ROUTE592)
ROUTE593 = x3d.ROUTE()
ROUTE593.fromNode = "Walk_Time"
ROUTE593.fromField = "fraction_changed"
ROUTE593.toNode = "l_ankle_RotationInterpolator_BasicWalk"
ROUTE593.toField = "set_fraction"

Scene13.children.append(ROUTE593)
ROUTE594 = x3d.ROUTE()
ROUTE594.fromNode = "Walk_Time"
ROUTE594.fromField = "fraction_changed"
ROUTE594.toNode = "l_knee_RotationInterpolator_BasicWalk"
ROUTE594.toField = "set_fraction"

Scene13.children.append(ROUTE594)
ROUTE595 = x3d.ROUTE()
ROUTE595.fromNode = "Walk_Time"
ROUTE595.fromField = "fraction_changed"
ROUTE595.toNode = "l_hip_RotationInterpolator_BasicWalk"
ROUTE595.toField = "set_fraction"

Scene13.children.append(ROUTE595)
ROUTE596 = x3d.ROUTE()
ROUTE596.fromNode = "Walk_Time"
ROUTE596.fromField = "fraction_changed"
ROUTE596.toNode = "lower_body_RotationInterpolator_BasicWalk"
ROUTE596.toField = "set_fraction"

Scene13.children.append(ROUTE596)
ROUTE597 = x3d.ROUTE()
ROUTE597.fromNode = "Walk_Time"
ROUTE597.fromField = "fraction_changed"
ROUTE597.toNode = "r_wrist_RotationInterpolator_BasicWalk"
ROUTE597.toField = "set_fraction"

Scene13.children.append(ROUTE597)
ROUTE598 = x3d.ROUTE()
ROUTE598.fromNode = "Walk_Time"
ROUTE598.fromField = "fraction_changed"
ROUTE598.toNode = "r_elbow_RotationInterpolator_BasicWalk"
ROUTE598.toField = "set_fraction"

Scene13.children.append(ROUTE598)
ROUTE599 = x3d.ROUTE()
ROUTE599.fromNode = "Walk_Time"
ROUTE599.fromField = "fraction_changed"
ROUTE599.toNode = "r_shoulder_RotationInterpolator_BasicWalk"
ROUTE599.toField = "set_fraction"

Scene13.children.append(ROUTE599)
ROUTE600 = x3d.ROUTE()
ROUTE600.fromNode = "Walk_Time"
ROUTE600.fromField = "fraction_changed"
ROUTE600.toNode = "l_wrist_RotationInterpolator_BasicWalk"
ROUTE600.toField = "set_fraction"

Scene13.children.append(ROUTE600)
ROUTE601 = x3d.ROUTE()
ROUTE601.fromNode = "Walk_Time"
ROUTE601.fromField = "fraction_changed"
ROUTE601.toNode = "l_elbow_RotationInterpolator_BasicWalk"
ROUTE601.toField = "set_fraction"

Scene13.children.append(ROUTE601)
ROUTE602 = x3d.ROUTE()
ROUTE602.fromNode = "Walk_Time"
ROUTE602.fromField = "fraction_changed"
ROUTE602.toNode = "l_shoulder_RotationInterpolator_BasicWalk"
ROUTE602.toField = "set_fraction"

Scene13.children.append(ROUTE602)
ROUTE603 = x3d.ROUTE()
ROUTE603.fromNode = "Walk_Time"
ROUTE603.fromField = "fraction_changed"
ROUTE603.toNode = "head_RotationInterpolator_BasicWalk"
ROUTE603.toField = "set_fraction"

Scene13.children.append(ROUTE603)
ROUTE604 = x3d.ROUTE()
ROUTE604.fromNode = "Walk_Time"
ROUTE604.fromField = "fraction_changed"
ROUTE604.toNode = "neck_RotationInterpolator_BasicWalk"
ROUTE604.toField = "set_fraction"

Scene13.children.append(ROUTE604)
ROUTE605 = x3d.ROUTE()
ROUTE605.fromNode = "Walk_Time"
ROUTE605.fromField = "fraction_changed"
ROUTE605.toNode = "upper_body_RotationInterpolator_BasicWalk"
ROUTE605.toField = "set_fraction"

Scene13.children.append(ROUTE605)
ROUTE606 = x3d.ROUTE()
ROUTE606.fromNode = "Walk_Time"
ROUTE606.fromField = "fraction_changed"
ROUTE606.toNode = "whole_body_RotationInterpolator_BasicWalk"
ROUTE606.toField = "set_fraction"

Scene13.children.append(ROUTE606)
ROUTE607 = x3d.ROUTE()
ROUTE607.fromNode = "Walk_Time"
ROUTE607.fromField = "fraction_changed"
ROUTE607.toNode = "whole_body_TranslationInterpolator_BasicWalk"
ROUTE607.toField = "set_fraction"

Scene13.children.append(ROUTE607)
ROUTE608 = x3d.ROUTE()
ROUTE608.fromNode = "r_ankle_RotationInterpolator_BasicWalk"
ROUTE608.fromField = "value_changed"
ROUTE608.toNode = "hanim_r_ankle"
ROUTE608.toField = "set_rotation"

Scene13.children.append(ROUTE608)
ROUTE609 = x3d.ROUTE()
ROUTE609.fromNode = "r_knee_RotationInterpolator_BasicWalk"
ROUTE609.fromField = "value_changed"
ROUTE609.toNode = "hanim_r_knee"
ROUTE609.toField = "set_rotation"

Scene13.children.append(ROUTE609)
ROUTE610 = x3d.ROUTE()
ROUTE610.fromNode = "r_hip_RotationInterpolator_BasicWalk"
ROUTE610.fromField = "value_changed"
ROUTE610.toNode = "hanim_r_hip"
ROUTE610.toField = "set_rotation"

Scene13.children.append(ROUTE610)
ROUTE611 = x3d.ROUTE()
ROUTE611.fromNode = "l_ankle_RotationInterpolator_BasicWalk"
ROUTE611.fromField = "value_changed"
ROUTE611.toNode = "hanim_l_ankle"
ROUTE611.toField = "set_rotation"

Scene13.children.append(ROUTE611)
ROUTE612 = x3d.ROUTE()
ROUTE612.fromNode = "l_knee_RotationInterpolator_BasicWalk"
ROUTE612.fromField = "value_changed"
ROUTE612.toNode = "hanim_l_knee"
ROUTE612.toField = "set_rotation"

Scene13.children.append(ROUTE612)
ROUTE613 = x3d.ROUTE()
ROUTE613.fromNode = "l_hip_RotationInterpolator_BasicWalk"
ROUTE613.fromField = "value_changed"
ROUTE613.toNode = "hanim_l_hip"
ROUTE613.toField = "set_rotation"

Scene13.children.append(ROUTE613)
ROUTE614 = x3d.ROUTE()
ROUTE614.fromNode = "lower_body_RotationInterpolator_BasicWalk"
ROUTE614.fromField = "value_changed"
ROUTE614.toNode = "hanim_sacroiliac"
ROUTE614.toField = "set_rotation"

Scene13.children.append(ROUTE614)
ROUTE615 = x3d.ROUTE()
ROUTE615.fromNode = "r_wrist_RotationInterpolator_BasicWalk"
ROUTE615.fromField = "value_changed"
ROUTE615.toNode = "hanim_r_wrist"
ROUTE615.toField = "set_rotation"

Scene13.children.append(ROUTE615)
ROUTE616 = x3d.ROUTE()
ROUTE616.fromNode = "r_elbow_RotationInterpolator_BasicWalk"
ROUTE616.fromField = "value_changed"
ROUTE616.toNode = "hanim_r_elbow"
ROUTE616.toField = "set_rotation"

Scene13.children.append(ROUTE616)
ROUTE617 = x3d.ROUTE()
ROUTE617.fromNode = "r_shoulder_RotationInterpolator_BasicWalk"
ROUTE617.fromField = "value_changed"
ROUTE617.toNode = "hanim_r_shoulder"
ROUTE617.toField = "set_rotation"

Scene13.children.append(ROUTE617)
ROUTE618 = x3d.ROUTE()
ROUTE618.fromNode = "l_wrist_RotationInterpolator_BasicWalk"
ROUTE618.fromField = "value_changed"
ROUTE618.toNode = "hanim_l_wrist"
ROUTE618.toField = "set_rotation"

Scene13.children.append(ROUTE618)
ROUTE619 = x3d.ROUTE()
ROUTE619.fromNode = "l_elbow_RotationInterpolator_BasicWalk"
ROUTE619.fromField = "value_changed"
ROUTE619.toNode = "hanim_l_elbow"
ROUTE619.toField = "set_rotation"

Scene13.children.append(ROUTE619)
ROUTE620 = x3d.ROUTE()
ROUTE620.fromNode = "l_shoulder_RotationInterpolator_BasicWalk"
ROUTE620.fromField = "value_changed"
ROUTE620.toNode = "hanim_l_shoulder"
ROUTE620.toField = "set_rotation"

Scene13.children.append(ROUTE620)
ROUTE621 = x3d.ROUTE()
ROUTE621.fromNode = "head_RotationInterpolator_BasicWalk"
ROUTE621.fromField = "value_changed"
ROUTE621.toNode = "hanim_skullbase"
ROUTE621.toField = "set_rotation"

Scene13.children.append(ROUTE621)
ROUTE622 = x3d.ROUTE()
ROUTE622.fromNode = "neck_RotationInterpolator_BasicWalk"
ROUTE622.fromField = "value_changed"
ROUTE622.toNode = "hanim_vc4"
ROUTE622.toField = "set_rotation"

Scene13.children.append(ROUTE622)
ROUTE623 = x3d.ROUTE()
ROUTE623.fromNode = "upper_body_RotationInterpolator_BasicWalk"
ROUTE623.fromField = "value_changed"
ROUTE623.toNode = "hanim_vl1"
ROUTE623.toField = "set_rotation"

Scene13.children.append(ROUTE623)
ROUTE624 = x3d.ROUTE()
ROUTE624.fromNode = "whole_body_RotationInterpolator_BasicWalk"
ROUTE624.fromField = "value_changed"
ROUTE624.toNode = "hanim_humanoid_root"
ROUTE624.toField = "set_rotation"

Scene13.children.append(ROUTE624)
ROUTE625 = x3d.ROUTE()
ROUTE625.fromNode = "whole_body_TranslationInterpolator_BasicWalk"
ROUTE625.fromField = "value_changed"
ROUTE625.toNode = "hanim_humanoid_root"
ROUTE625.toField = "set_translation"

Scene13.children.append(ROUTE625)
ROUTE626 = x3d.ROUTE()
ROUTE626.fromNode = "Run_Time"
ROUTE626.fromField = "fraction_changed"
ROUTE626.toNode = "r_ankle_RotationInterpolator_Run"
ROUTE626.toField = "set_fraction"

Scene13.children.append(ROUTE626)
ROUTE627 = x3d.ROUTE()
ROUTE627.fromNode = "Run_Time"
ROUTE627.fromField = "fraction_changed"
ROUTE627.toNode = "r_knee_RotationInterpolator_Run"
ROUTE627.toField = "set_fraction"

Scene13.children.append(ROUTE627)
ROUTE628 = x3d.ROUTE()
ROUTE628.fromNode = "Run_Time"
ROUTE628.fromField = "fraction_changed"
ROUTE628.toNode = "r_hip_RotationInterpolator_Run"
ROUTE628.toField = "set_fraction"

Scene13.children.append(ROUTE628)
ROUTE629 = x3d.ROUTE()
ROUTE629.fromNode = "Run_Time"
ROUTE629.fromField = "fraction_changed"
ROUTE629.toNode = "l_ankle_RotationInterpolator_Run"
ROUTE629.toField = "set_fraction"

Scene13.children.append(ROUTE629)
ROUTE630 = x3d.ROUTE()
ROUTE630.fromNode = "Run_Time"
ROUTE630.fromField = "fraction_changed"
ROUTE630.toNode = "l_knee_RotationInterpolator_Run"
ROUTE630.toField = "set_fraction"

Scene13.children.append(ROUTE630)
ROUTE631 = x3d.ROUTE()
ROUTE631.fromNode = "Run_Time"
ROUTE631.fromField = "fraction_changed"
ROUTE631.toNode = "l_hip_RotationInterpolator_Run"
ROUTE631.toField = "set_fraction"

Scene13.children.append(ROUTE631)
ROUTE632 = x3d.ROUTE()
ROUTE632.fromNode = "Run_Time"
ROUTE632.fromField = "fraction_changed"
ROUTE632.toNode = "lower_body_RotationInterpolator_Run"
ROUTE632.toField = "set_fraction"

Scene13.children.append(ROUTE632)
ROUTE633 = x3d.ROUTE()
ROUTE633.fromNode = "Run_Time"
ROUTE633.fromField = "fraction_changed"
ROUTE633.toNode = "r_wrist_RotationInterpolator_Run"
ROUTE633.toField = "set_fraction"

Scene13.children.append(ROUTE633)
ROUTE634 = x3d.ROUTE()
ROUTE634.fromNode = "Run_Time"
ROUTE634.fromField = "fraction_changed"
ROUTE634.toNode = "r_elbow_RotationInterpolator_Run"
ROUTE634.toField = "set_fraction"

Scene13.children.append(ROUTE634)
ROUTE635 = x3d.ROUTE()
ROUTE635.fromNode = "Run_Time"
ROUTE635.fromField = "fraction_changed"
ROUTE635.toNode = "r_shoulder_RotationInterpolator_Run"
ROUTE635.toField = "set_fraction"

Scene13.children.append(ROUTE635)
ROUTE636 = x3d.ROUTE()
ROUTE636.fromNode = "Run_Time"
ROUTE636.fromField = "fraction_changed"
ROUTE636.toNode = "l_wrist_RotationInterpolator_Run"
ROUTE636.toField = "set_fraction"

Scene13.children.append(ROUTE636)
ROUTE637 = x3d.ROUTE()
ROUTE637.fromNode = "Run_Time"
ROUTE637.fromField = "fraction_changed"
ROUTE637.toNode = "l_elbow_RotationInterpolator_Run"
ROUTE637.toField = "set_fraction"

Scene13.children.append(ROUTE637)
ROUTE638 = x3d.ROUTE()
ROUTE638.fromNode = "Run_Time"
ROUTE638.fromField = "fraction_changed"
ROUTE638.toNode = "l_shoulder_RotationInterpolator_Run"
ROUTE638.toField = "set_fraction"

Scene13.children.append(ROUTE638)
ROUTE639 = x3d.ROUTE()
ROUTE639.fromNode = "Run_Time"
ROUTE639.fromField = "fraction_changed"
ROUTE639.toNode = "head_RotationInterpolator_Run"
ROUTE639.toField = "set_fraction"

Scene13.children.append(ROUTE639)
ROUTE640 = x3d.ROUTE()
ROUTE640.fromNode = "Run_Time"
ROUTE640.fromField = "fraction_changed"
ROUTE640.toNode = "neck_RotationInterpolator_Run"
ROUTE640.toField = "set_fraction"

Scene13.children.append(ROUTE640)
ROUTE641 = x3d.ROUTE()
ROUTE641.fromNode = "Run_Time"
ROUTE641.fromField = "fraction_changed"
ROUTE641.toNode = "upper_body_RotationInterpolator_Run"
ROUTE641.toField = "set_fraction"

Scene13.children.append(ROUTE641)
ROUTE642 = x3d.ROUTE()
ROUTE642.fromNode = "Run_Time"
ROUTE642.fromField = "fraction_changed"
ROUTE642.toNode = "whole_body_RotationInterpolator_Run"
ROUTE642.toField = "set_fraction"

Scene13.children.append(ROUTE642)
ROUTE643 = x3d.ROUTE()
ROUTE643.fromNode = "Run_Time"
ROUTE643.fromField = "fraction_changed"
ROUTE643.toNode = "whole_body_TranslationInterpolator_Run"
ROUTE643.toField = "set_fraction"

Scene13.children.append(ROUTE643)
ROUTE644 = x3d.ROUTE()
ROUTE644.fromNode = "r_ankle_RotationInterpolator_Run"
ROUTE644.fromField = "value_changed"
ROUTE644.toNode = "hanim_r_ankle"
ROUTE644.toField = "set_rotation"

Scene13.children.append(ROUTE644)
ROUTE645 = x3d.ROUTE()
ROUTE645.fromNode = "r_knee_RotationInterpolator_Run"
ROUTE645.fromField = "value_changed"
ROUTE645.toNode = "hanim_r_knee"
ROUTE645.toField = "set_rotation"

Scene13.children.append(ROUTE645)
ROUTE646 = x3d.ROUTE()
ROUTE646.fromNode = "r_hip_RotationInterpolator_Run"
ROUTE646.fromField = "value_changed"
ROUTE646.toNode = "hanim_r_hip"
ROUTE646.toField = "set_rotation"

Scene13.children.append(ROUTE646)
ROUTE647 = x3d.ROUTE()
ROUTE647.fromNode = "l_ankle_RotationInterpolator_Run"
ROUTE647.fromField = "value_changed"
ROUTE647.toNode = "hanim_l_ankle"
ROUTE647.toField = "set_rotation"

Scene13.children.append(ROUTE647)
ROUTE648 = x3d.ROUTE()
ROUTE648.fromNode = "l_knee_RotationInterpolator_Run"
ROUTE648.fromField = "value_changed"
ROUTE648.toNode = "hanim_l_knee"
ROUTE648.toField = "set_rotation"

Scene13.children.append(ROUTE648)
ROUTE649 = x3d.ROUTE()
ROUTE649.fromNode = "l_hip_RotationInterpolator_Run"
ROUTE649.fromField = "value_changed"
ROUTE649.toNode = "hanim_l_hip"
ROUTE649.toField = "set_rotation"

Scene13.children.append(ROUTE649)
ROUTE650 = x3d.ROUTE()
ROUTE650.fromNode = "lower_body_RotationInterpolator_Run"
ROUTE650.fromField = "value_changed"
ROUTE650.toNode = "hanim_sacroiliac"
ROUTE650.toField = "set_rotation"

Scene13.children.append(ROUTE650)
ROUTE651 = x3d.ROUTE()
ROUTE651.fromNode = "r_wrist_RotationInterpolator_Run"
ROUTE651.fromField = "value_changed"
ROUTE651.toNode = "hanim_r_wrist"
ROUTE651.toField = "set_rotation"

Scene13.children.append(ROUTE651)
ROUTE652 = x3d.ROUTE()
ROUTE652.fromNode = "r_elbow_RotationInterpolator_Run"
ROUTE652.fromField = "value_changed"
ROUTE652.toNode = "hanim_r_elbow"
ROUTE652.toField = "set_rotation"

Scene13.children.append(ROUTE652)
ROUTE653 = x3d.ROUTE()
ROUTE653.fromNode = "r_shoulder_RotationInterpolator_Run"
ROUTE653.fromField = "value_changed"
ROUTE653.toNode = "hanim_r_shoulder"
ROUTE653.toField = "set_rotation"

Scene13.children.append(ROUTE653)
ROUTE654 = x3d.ROUTE()
ROUTE654.fromNode = "l_wrist_RotationInterpolator_Run"
ROUTE654.fromField = "value_changed"
ROUTE654.toNode = "hanim_l_wrist"
ROUTE654.toField = "set_rotation"

Scene13.children.append(ROUTE654)
ROUTE655 = x3d.ROUTE()
ROUTE655.fromNode = "l_elbow_RotationInterpolator_Run"
ROUTE655.fromField = "value_changed"
ROUTE655.toNode = "hanim_l_elbow"
ROUTE655.toField = "set_rotation"

Scene13.children.append(ROUTE655)
ROUTE656 = x3d.ROUTE()
ROUTE656.fromNode = "l_shoulder_RotationInterpolator_Run"
ROUTE656.fromField = "value_changed"
ROUTE656.toNode = "hanim_l_shoulder"
ROUTE656.toField = "set_rotation"

Scene13.children.append(ROUTE656)
ROUTE657 = x3d.ROUTE()
ROUTE657.fromNode = "head_RotationInterpolator_Run"
ROUTE657.fromField = "value_changed"
ROUTE657.toNode = "hanim_skullbase"
ROUTE657.toField = "set_rotation"

Scene13.children.append(ROUTE657)
ROUTE658 = x3d.ROUTE()
ROUTE658.fromNode = "neck_RotationInterpolator_Run"
ROUTE658.fromField = "value_changed"
ROUTE658.toNode = "hanim_vc4"
ROUTE658.toField = "set_rotation"

Scene13.children.append(ROUTE658)
ROUTE659 = x3d.ROUTE()
ROUTE659.fromNode = "upper_body_RotationInterpolator_Run"
ROUTE659.fromField = "value_changed"
ROUTE659.toNode = "hanim_vl1"
ROUTE659.toField = "set_rotation"

Scene13.children.append(ROUTE659)
ROUTE660 = x3d.ROUTE()
ROUTE660.fromNode = "whole_body_RotationInterpolator_Run"
ROUTE660.fromField = "value_changed"
ROUTE660.toNode = "hanim_humanoid_root"
ROUTE660.toField = "set_rotation"

Scene13.children.append(ROUTE660)
ROUTE661 = x3d.ROUTE()
ROUTE661.fromNode = "whole_body_TranslationInterpolator_Run"
ROUTE661.fromField = "value_changed"
ROUTE661.toNode = "hanim_humanoid_root"
ROUTE661.toField = "set_translation"

Scene13.children.append(ROUTE661)
ROUTE662 = x3d.ROUTE()
ROUTE662.fromNode = "Jump_Time"
ROUTE662.fromField = "fraction_changed"
ROUTE662.toNode = "r_ankle_RotationInterpolator_Jump"
ROUTE662.toField = "set_fraction"

Scene13.children.append(ROUTE662)
ROUTE663 = x3d.ROUTE()
ROUTE663.fromNode = "Jump_Time"
ROUTE663.fromField = "fraction_changed"
ROUTE663.toNode = "r_knee_RotationInterpolator_Jump"
ROUTE663.toField = "set_fraction"

Scene13.children.append(ROUTE663)
ROUTE664 = x3d.ROUTE()
ROUTE664.fromNode = "Jump_Time"
ROUTE664.fromField = "fraction_changed"
ROUTE664.toNode = "r_hip_RotationInterpolator_Jump"
ROUTE664.toField = "set_fraction"

Scene13.children.append(ROUTE664)
ROUTE665 = x3d.ROUTE()
ROUTE665.fromNode = "Jump_Time"
ROUTE665.fromField = "fraction_changed"
ROUTE665.toNode = "l_ankle_RotationInterpolator_Jump"
ROUTE665.toField = "set_fraction"

Scene13.children.append(ROUTE665)
ROUTE666 = x3d.ROUTE()
ROUTE666.fromNode = "Jump_Time"
ROUTE666.fromField = "fraction_changed"
ROUTE666.toNode = "l_knee_RotationInterpolator_Jump"
ROUTE666.toField = "set_fraction"

Scene13.children.append(ROUTE666)
ROUTE667 = x3d.ROUTE()
ROUTE667.fromNode = "Jump_Time"
ROUTE667.fromField = "fraction_changed"
ROUTE667.toNode = "l_hip_RotationInterpolator_Jump"
ROUTE667.toField = "set_fraction"

Scene13.children.append(ROUTE667)
ROUTE668 = x3d.ROUTE()
ROUTE668.fromNode = "Jump_Time"
ROUTE668.fromField = "fraction_changed"
ROUTE668.toNode = "lower_body_RotationInterpolator_Jump"
ROUTE668.toField = "set_fraction"

Scene13.children.append(ROUTE668)
ROUTE669 = x3d.ROUTE()
ROUTE669.fromNode = "Jump_Time"
ROUTE669.fromField = "fraction_changed"
ROUTE669.toNode = "r_wrist_RotationInterpolator_Jump"
ROUTE669.toField = "set_fraction"

Scene13.children.append(ROUTE669)
ROUTE670 = x3d.ROUTE()
ROUTE670.fromNode = "Jump_Time"
ROUTE670.fromField = "fraction_changed"
ROUTE670.toNode = "r_elbow_RotationInterpolator_Jump"
ROUTE670.toField = "set_fraction"

Scene13.children.append(ROUTE670)
ROUTE671 = x3d.ROUTE()
ROUTE671.fromNode = "Jump_Time"
ROUTE671.fromField = "fraction_changed"
ROUTE671.toNode = "r_shoulder_RotationInterpolator_Jump"
ROUTE671.toField = "set_fraction"

Scene13.children.append(ROUTE671)
ROUTE672 = x3d.ROUTE()
ROUTE672.fromNode = "Jump_Time"
ROUTE672.fromField = "fraction_changed"
ROUTE672.toNode = "l_wrist_RotationInterpolator_Jump"
ROUTE672.toField = "set_fraction"

Scene13.children.append(ROUTE672)
ROUTE673 = x3d.ROUTE()
ROUTE673.fromNode = "Jump_Time"
ROUTE673.fromField = "fraction_changed"
ROUTE673.toNode = "l_elbow_RotationInterpolator_Jump"
ROUTE673.toField = "set_fraction"

Scene13.children.append(ROUTE673)
ROUTE674 = x3d.ROUTE()
ROUTE674.fromNode = "Jump_Time"
ROUTE674.fromField = "fraction_changed"
ROUTE674.toNode = "l_shoulder_RotationInterpolator_Jump"
ROUTE674.toField = "set_fraction"

Scene13.children.append(ROUTE674)
ROUTE675 = x3d.ROUTE()
ROUTE675.fromNode = "Jump_Time"
ROUTE675.fromField = "fraction_changed"
ROUTE675.toNode = "head_RotationInterpolator_Jump"
ROUTE675.toField = "set_fraction"

Scene13.children.append(ROUTE675)
ROUTE676 = x3d.ROUTE()
ROUTE676.fromNode = "Jump_Time"
ROUTE676.fromField = "fraction_changed"
ROUTE676.toNode = "neck_RotationInterpolator_Jump"
ROUTE676.toField = "set_fraction"

Scene13.children.append(ROUTE676)
ROUTE677 = x3d.ROUTE()
ROUTE677.fromNode = "Jump_Time"
ROUTE677.fromField = "fraction_changed"
ROUTE677.toNode = "upper_body_RotationInterpolator_Jump"
ROUTE677.toField = "set_fraction"

Scene13.children.append(ROUTE677)
ROUTE678 = x3d.ROUTE()
ROUTE678.fromNode = "Jump_Time"
ROUTE678.fromField = "fraction_changed"
ROUTE678.toNode = "whole_body_RotationInterpolator_Jump"
ROUTE678.toField = "set_fraction"

Scene13.children.append(ROUTE678)
ROUTE679 = x3d.ROUTE()
ROUTE679.fromNode = "Jump_Time"
ROUTE679.fromField = "fraction_changed"
ROUTE679.toNode = "whole_body_TranslationInterpolator_Jump"
ROUTE679.toField = "set_fraction"

Scene13.children.append(ROUTE679)
ROUTE680 = x3d.ROUTE()
ROUTE680.fromNode = "r_ankle_RotationInterpolator_Jump"
ROUTE680.fromField = "value_changed"
ROUTE680.toNode = "hanim_r_ankle"
ROUTE680.toField = "set_rotation"

Scene13.children.append(ROUTE680)
ROUTE681 = x3d.ROUTE()
ROUTE681.fromNode = "r_knee_RotationInterpolator_Jump"
ROUTE681.fromField = "value_changed"
ROUTE681.toNode = "hanim_r_knee"
ROUTE681.toField = "set_rotation"

Scene13.children.append(ROUTE681)
ROUTE682 = x3d.ROUTE()
ROUTE682.fromNode = "r_hip_RotationInterpolator_Jump"
ROUTE682.fromField = "value_changed"
ROUTE682.toNode = "hanim_r_hip"
ROUTE682.toField = "set_rotation"

Scene13.children.append(ROUTE682)
ROUTE683 = x3d.ROUTE()
ROUTE683.fromNode = "l_ankle_RotationInterpolator_Jump"
ROUTE683.fromField = "value_changed"
ROUTE683.toNode = "hanim_l_ankle"
ROUTE683.toField = "set_rotation"

Scene13.children.append(ROUTE683)
ROUTE684 = x3d.ROUTE()
ROUTE684.fromNode = "l_knee_RotationInterpolator_Jump"
ROUTE684.fromField = "value_changed"
ROUTE684.toNode = "hanim_l_knee"
ROUTE684.toField = "set_rotation"

Scene13.children.append(ROUTE684)
ROUTE685 = x3d.ROUTE()
ROUTE685.fromNode = "l_hip_RotationInterpolator_Jump"
ROUTE685.fromField = "value_changed"
ROUTE685.toNode = "hanim_l_hip"
ROUTE685.toField = "set_rotation"

Scene13.children.append(ROUTE685)
ROUTE686 = x3d.ROUTE()
ROUTE686.fromNode = "lower_body_RotationInterpolator_Jump"
ROUTE686.fromField = "value_changed"
ROUTE686.toNode = "hanim_sacroiliac"
ROUTE686.toField = "set_rotation"

Scene13.children.append(ROUTE686)
ROUTE687 = x3d.ROUTE()
ROUTE687.fromNode = "r_wrist_RotationInterpolator_Jump"
ROUTE687.fromField = "value_changed"
ROUTE687.toNode = "hanim_r_wrist"
ROUTE687.toField = "set_rotation"

Scene13.children.append(ROUTE687)
ROUTE688 = x3d.ROUTE()
ROUTE688.fromNode = "r_elbow_RotationInterpolator_Jump"
ROUTE688.fromField = "value_changed"
ROUTE688.toNode = "hanim_r_elbow"
ROUTE688.toField = "set_rotation"

Scene13.children.append(ROUTE688)
ROUTE689 = x3d.ROUTE()
ROUTE689.fromNode = "r_shoulder_RotationInterpolator_Jump"
ROUTE689.fromField = "value_changed"
ROUTE689.toNode = "hanim_r_shoulder"
ROUTE689.toField = "set_rotation"

Scene13.children.append(ROUTE689)
ROUTE690 = x3d.ROUTE()
ROUTE690.fromNode = "l_wrist_RotationInterpolator_Jump"
ROUTE690.fromField = "value_changed"
ROUTE690.toNode = "hanim_l_wrist"
ROUTE690.toField = "set_rotation"

Scene13.children.append(ROUTE690)
ROUTE691 = x3d.ROUTE()
ROUTE691.fromNode = "l_elbow_RotationInterpolator_Jump"
ROUTE691.fromField = "value_changed"
ROUTE691.toNode = "hanim_l_elbow"
ROUTE691.toField = "set_rotation"

Scene13.children.append(ROUTE691)
ROUTE692 = x3d.ROUTE()
ROUTE692.fromNode = "l_shoulder_RotationInterpolator_Jump"
ROUTE692.fromField = "value_changed"
ROUTE692.toNode = "hanim_l_shoulder"
ROUTE692.toField = "set_rotation"

Scene13.children.append(ROUTE692)
ROUTE693 = x3d.ROUTE()
ROUTE693.fromNode = "head_RotationInterpolator_Jump"
ROUTE693.fromField = "value_changed"
ROUTE693.toNode = "hanim_skullbase"
ROUTE693.toField = "set_rotation"

Scene13.children.append(ROUTE693)
ROUTE694 = x3d.ROUTE()
ROUTE694.fromNode = "neck_RotationInterpolator_Jump"
ROUTE694.fromField = "value_changed"
ROUTE694.toNode = "hanim_vc4"
ROUTE694.toField = "set_rotation"

Scene13.children.append(ROUTE694)
ROUTE695 = x3d.ROUTE()
ROUTE695.fromNode = "upper_body_RotationInterpolator_Jump"
ROUTE695.fromField = "value_changed"
ROUTE695.toNode = "hanim_vl1"
ROUTE695.toField = "set_rotation"

Scene13.children.append(ROUTE695)
ROUTE696 = x3d.ROUTE()
ROUTE696.fromNode = "whole_body_RotationInterpolator_Jump"
ROUTE696.fromField = "value_changed"
ROUTE696.toNode = "hanim_humanoid_root"
ROUTE696.toField = "set_rotation"

Scene13.children.append(ROUTE696)
ROUTE697 = x3d.ROUTE()
ROUTE697.fromNode = "whole_body_TranslationInterpolator_Jump"
ROUTE697.fromField = "value_changed"
ROUTE697.toNode = "hanim_humanoid_root"
ROUTE697.toField = "set_translation"

Scene13.children.append(ROUTE697)

X3D0.Scene = Scene13
f = open("../data/NancyPrototypes.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/NancyPrototypes.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/NancyPrototypes.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
