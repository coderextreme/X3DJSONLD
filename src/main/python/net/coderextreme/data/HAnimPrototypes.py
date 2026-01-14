print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "HAnimPrototypes.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "warning"
meta4.content = "These are developmental examples that can assist X3D player implementations and support interoperability. They are not intended for author use in regular X3D scenes."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "warning"
meta5.content = "Developer note: names for these HAnim Prototypes need to be corrected if used internally in an X3D player implementation (e.g. Joint to HAnimJoint)."

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "warning"
meta6.content = "Need support for skin"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "creator"
meta7.content = "Ozan APAYDIN, Don Brutzman"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "translator"
meta8.content = "Ozan APAYDIN, Don Brutzman"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "created"
meta9.content = "15 November 2001"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "modified"
meta10.content = "Mon, 15 Sep 2025 05:20:09 GMT"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "TODO"
meta11.content = "upgrade to match support requirements for HAnim 2.2"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/HAnim.html"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/hanim.html"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "reference"
meta15.content = "http://HAnim.org/Specifications/HAnim2001"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "reference"
meta16.content = "http://www.HAnim.org"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "reference"
meta17.content = "http://HAnim.org/Models"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "reference"
meta18.content = "http://HAnim.org/Specifications"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "reference"
meta19.content = "InterchangableActorsViaDynamicRoutingPrototypes.x3d"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "identifier"
meta20.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d"

head1.children.append(meta20)

X3D0.head = head1
Scene21 = x3d.Scene()
ProtoDeclare22 = x3d.ProtoDeclare()
ProtoDeclare22.name = "Humanoid1_1"
ProtoDeclare22.appinfo = "The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model."
ProtoDeclare22.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"
ProtoInterface23 = x3d.ProtoInterface()
field24 = x3d.field()
field24.accessType = "inputOutput"
field24.type = "SFString"
field24.name = "name"

ProtoInterface23.field.append(field24)
field25 = x3d.field()
field25.accessType = "inputOutput"
field25.type = "SFString"
field25.name = "version"
field25.value = "1.1"
field25.appinfo = "legal values: 1.1 or 2.0"

ProtoInterface23.field.append(field25)
field26 = x3d.field()
field26.accessType = "inputOutput"
field26.type = "SFString"
field26.name = "humanoidVersion"
field26.appinfo = "Version of the humanoid being modeled. Hint: HAnim version 2.0"

ProtoInterface23.field.append(field26)
field27 = x3d.field()
field27.accessType = "inputOutput"
field27.type = "MFString"
field27.name = "info"

ProtoInterface23.field.append(field27)
field28 = x3d.field()
field28.accessType = "inputOutput"
field28.type = "SFVec3f"
field28.name = "translation"

ProtoInterface23.field.append(field28)
field29 = x3d.field()
field29.accessType = "inputOutput"
field29.type = "SFRotation"
field29.name = "rotation"

ProtoInterface23.field.append(field29)
field30 = x3d.field()
field30.accessType = "inputOutput"
field30.type = "SFVec3f"
field30.name = "center"

ProtoInterface23.field.append(field30)
field31 = x3d.field()
field31.accessType = "inputOutput"
field31.type = "SFVec3f"
field31.name = "scale"
field31.value = [1,1,1]

ProtoInterface23.field.append(field31)
field32 = x3d.field()
field32.accessType = "inputOutput"
field32.type = "SFRotation"
field32.name = "scaleOrientation"

ProtoInterface23.field.append(field32)
field33 = x3d.field()
field33.accessType = "initializeOnly"
field33.type = "SFVec3f"
field33.name = "bboxCenter"

ProtoInterface23.field.append(field33)
field34 = x3d.field()
field34.accessType = "initializeOnly"
field34.type = "SFVec3f"
field34.name = "bboxSize"
field34.value = [-1,-1,-1]

ProtoInterface23.field.append(field34)
field35 = x3d.field()
field35.accessType = "inputOutput"
field35.type = "MFNode"
field35.name = "humanoidBody"
field35.appinfo = "HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton."
field35.documentation = "http://HAnim.org/Specifications/HAnim1.1/#humanoid"

ProtoInterface23.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOutput"
field36.type = "MFNode"
field36.name = "skeleton"
field36.appinfo = "HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody"
field36.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"

ProtoInterface23.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOutput"
field37.type = "MFNode"
field37.name = "joints"
field37.appinfo = "Container field for Joint nodes"

ProtoInterface23.field.append(field37)
field38 = x3d.field()
field38.accessType = "inputOutput"
field38.type = "MFNode"
field38.name = "segments"
field38.appinfo = "Container field for Segment nodes"

ProtoInterface23.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "MFNode"
field39.name = "sites"
field39.appinfo = "Container field for Site nodes"

ProtoInterface23.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "MFNode"
field40.name = "viewpoints"
field40.appinfo = "Container field for Viewpoint nodes"

ProtoInterface23.field.append(field40)
field41 = x3d.field()
field41.accessType = "inputOutput"
field41.type = "SFNode"
field41.name = "skinCoord"
field41.appinfo = "Hint: HAnim version 2.0"

ProtoInterface23.field.append(field41)
field42 = x3d.field()
field42.accessType = "inputOutput"
field42.type = "SFNode"
field42.name = "skinNormal"
field42.appinfo = "Hint: HAnim version 2.0"

ProtoInterface23.field.append(field42)

ProtoDeclare22.ProtoInterface = ProtoInterface23
ProtoBody43 = x3d.ProtoBody()
Transform44 = x3d.Transform()
Transform44.DEF = "HumanoidTransform"
Group45 = x3d.Group()
Group45.DEF = "HumanoidGroup1"
IS46 = x3d.IS()
connect47 = x3d.connect()
connect47.nodeField = "children"
connect47.protoField = "humanoidBody"

IS46.connect.append(connect47)

Group45.IS = IS46

Transform44.children.append(Group45)
Group48 = x3d.Group()
Group48.DEF = "HumanoidGroup2"
IS49 = x3d.IS()
connect50 = x3d.connect()
connect50.nodeField = "children"
connect50.protoField = "skeleton"

IS49.connect.append(connect50)

Group48.IS = IS49

Transform44.children.append(Group48)
Group51 = x3d.Group()
Group51.DEF = "HumanoidGroup3"
IS52 = x3d.IS()
connect53 = x3d.connect()
connect53.nodeField = "children"
connect53.protoField = "viewpoints"

IS52.connect.append(connect53)

Group51.IS = IS52

Transform44.children.append(Group51)
IS54 = x3d.IS()
connect55 = x3d.connect()
connect55.nodeField = "translation"
connect55.protoField = "translation"

IS54.connect.append(connect55)
connect56 = x3d.connect()
connect56.nodeField = "rotation"
connect56.protoField = "rotation"

IS54.connect.append(connect56)
connect57 = x3d.connect()
connect57.nodeField = "scale"
connect57.protoField = "scale"

IS54.connect.append(connect57)
connect58 = x3d.connect()
connect58.nodeField = "scaleOrientation"
connect58.protoField = "scaleOrientation"

IS54.connect.append(connect58)
connect59 = x3d.connect()
connect59.nodeField = "center"
connect59.protoField = "center"

IS54.connect.append(connect59)
connect60 = x3d.connect()
connect60.nodeField = "bboxSize"
connect60.protoField = "bboxSize"

IS54.connect.append(connect60)
connect61 = x3d.connect()
connect61.nodeField = "bboxCenter"
connect61.protoField = "bboxCenter"

IS54.connect.append(connect61)

Transform44.IS = IS54

ProtoBody43.children.append(Transform44)

ProtoDeclare22.ProtoBody = ProtoBody43

Scene21.children.append(ProtoDeclare22)
ProtoDeclare62 = x3d.ProtoDeclare()
ProtoDeclare62.name = "Joint"
ProtoDeclare62.appinfo = "The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid."
ProtoDeclare62.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Joint.html"
ProtoInterface63 = x3d.ProtoInterface()
field64 = x3d.field()
field64.accessType = "inputOutput"
field64.type = "SFString"
field64.name = "name"

ProtoInterface63.field.append(field64)
field65 = x3d.field()
field65.accessType = "inputOutput"
field65.type = "MFFloat"
field65.name = "ulimit"

ProtoInterface63.field.append(field65)
field66 = x3d.field()
field66.accessType = "inputOutput"
field66.type = "MFFloat"
field66.name = "llimit"

ProtoInterface63.field.append(field66)
field67 = x3d.field()
field67.accessType = "inputOutput"
field67.type = "SFRotation"
field67.name = "limitOrientation"

ProtoInterface63.field.append(field67)
field68 = x3d.field()
field68.accessType = "inputOutput"
field68.type = "MFInt32"
field68.name = "skinCoordIndex"

ProtoInterface63.field.append(field68)
field69 = x3d.field()
field69.accessType = "inputOutput"
field69.type = "MFFloat"
field69.name = "skinCoordWeight"

ProtoInterface63.field.append(field69)
field70 = x3d.field()
field70.accessType = "inputOutput"
field70.type = "MFFloat"
field70.name = "stiffness"
field70.value = [0,0,0]

ProtoInterface63.field.append(field70)
field71 = x3d.field()
field71.accessType = "inputOutput"
field71.type = "SFVec3f"
field71.name = "translation"

ProtoInterface63.field.append(field71)
field72 = x3d.field()
field72.accessType = "inputOutput"
field72.type = "SFRotation"
field72.name = "rotation"

ProtoInterface63.field.append(field72)
field73 = x3d.field()
field73.accessType = "inputOutput"
field73.type = "SFVec3f"
field73.name = "scale"
field73.value = [1,1,1]

ProtoInterface63.field.append(field73)
field74 = x3d.field()
field74.accessType = "inputOutput"
field74.type = "SFRotation"
field74.name = "scaleOrientation"

ProtoInterface63.field.append(field74)
field75 = x3d.field()
field75.accessType = "inputOutput"
field75.type = "SFVec3f"
field75.name = "center"

ProtoInterface63.field.append(field75)
field76 = x3d.field()
field76.accessType = "initializeOnly"
field76.type = "SFVec3f"
field76.name = "bboxCenter"

ProtoInterface63.field.append(field76)
field77 = x3d.field()
field77.accessType = "initializeOnly"
field77.type = "SFVec3f"
field77.name = "bboxSize"
field77.value = [-1,-1,-1]

ProtoInterface63.field.append(field77)
field78 = x3d.field()
field78.accessType = "inputOutput"
field78.type = "MFNode"
field78.name = "children"

ProtoInterface63.field.append(field78)
field79 = x3d.field()
field79.accessType = "inputOnly"
field79.type = "MFNode"
field79.name = "addChildren"

ProtoInterface63.field.append(field79)
field80 = x3d.field()
field80.accessType = "inputOnly"
field80.type = "MFNode"
field80.name = "removeChildren"

ProtoInterface63.field.append(field80)

ProtoDeclare62.ProtoInterface = ProtoInterface63
ProtoBody81 = x3d.ProtoBody()
Transform82 = x3d.Transform()
Transform82.DEF = "JointTransform"
IS83 = x3d.IS()
connect84 = x3d.connect()
connect84.nodeField = "translation"
connect84.protoField = "translation"

IS83.connect.append(connect84)
connect85 = x3d.connect()
connect85.nodeField = "rotation"
connect85.protoField = "rotation"

IS83.connect.append(connect85)
connect86 = x3d.connect()
connect86.nodeField = "scale"
connect86.protoField = "scale"

IS83.connect.append(connect86)
connect87 = x3d.connect()
connect87.nodeField = "scaleOrientation"
connect87.protoField = "scaleOrientation"

IS83.connect.append(connect87)
connect88 = x3d.connect()
connect88.nodeField = "center"
connect88.protoField = "center"

IS83.connect.append(connect88)
connect89 = x3d.connect()
connect89.nodeField = "bboxSize"
connect89.protoField = "bboxSize"

IS83.connect.append(connect89)
connect90 = x3d.connect()
connect90.nodeField = "bboxCenter"
connect90.protoField = "bboxCenter"

IS83.connect.append(connect90)
connect91 = x3d.connect()
connect91.nodeField = "addChildren"
connect91.protoField = "addChildren"

IS83.connect.append(connect91)
connect92 = x3d.connect()
connect92.nodeField = "removeChildren"
connect92.protoField = "removeChildren"

IS83.connect.append(connect92)
connect93 = x3d.connect()
connect93.nodeField = "children"
connect93.protoField = "children"

IS83.connect.append(connect93)

Transform82.IS = IS83

ProtoBody81.children.append(Transform82)

ProtoDeclare62.ProtoBody = ProtoBody81

Scene21.children.append(ProtoDeclare62)
ProtoDeclare94 = x3d.ProtoDeclare()
ProtoDeclare94.name = "Segment"
ProtoDeclare94.appinfo = "The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node."
ProtoDeclare94.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Segment.html"
ProtoInterface95 = x3d.ProtoInterface()
field96 = x3d.field()
field96.accessType = "inputOutput"
field96.type = "SFString"
field96.name = "name"

ProtoInterface95.field.append(field96)
field97 = x3d.field()
field97.accessType = "inputOutput"
field97.type = "SFFloat"
field97.name = "mass"

ProtoInterface95.field.append(field97)
field98 = x3d.field()
field98.accessType = "inputOutput"
field98.type = "SFVec3f"
field98.name = "centerOfMass"

ProtoInterface95.field.append(field98)
field99 = x3d.field()
field99.accessType = "inputOutput"
field99.type = "MFFloat"
field99.name = "momentsOfInertia"
field99.value = [0,0,0,0,0,0,0,0,0]

ProtoInterface95.field.append(field99)
field100 = x3d.field()
field100.accessType = "initializeOnly"
field100.type = "SFVec3f"
field100.name = "bboxCenter"

ProtoInterface95.field.append(field100)
field101 = x3d.field()
field101.accessType = "initializeOnly"
field101.type = "SFVec3f"
field101.name = "bboxSize"
field101.value = [-1,-1,-1]

ProtoInterface95.field.append(field101)
field102 = x3d.field()
field102.accessType = "inputOutput"
field102.type = "MFNode"
field102.name = "children"

ProtoInterface95.field.append(field102)
field103 = x3d.field()
field103.accessType = "inputOnly"
field103.type = "MFNode"
field103.name = "addChildren"

ProtoInterface95.field.append(field103)
field104 = x3d.field()
field104.accessType = "inputOnly"
field104.type = "MFNode"
field104.name = "removeChildren"

ProtoInterface95.field.append(field104)
field105 = x3d.field()
field105.accessType = "inputOutput"
field105.type = "SFNode"
field105.name = "coord"
field105.appinfo = "contains Coordinate nodes"

ProtoInterface95.field.append(field105)
field106 = x3d.field()
field106.accessType = "inputOutput"
field106.type = "MFNode"
field106.name = "displacers"
field106.appinfo = "contains Displacer nodes"

ProtoInterface95.field.append(field106)

ProtoDeclare94.ProtoInterface = ProtoInterface95
ProtoBody107 = x3d.ProtoBody()
Group108 = x3d.Group()
Group108.DEF = "SegmentGroup"
IS109 = x3d.IS()
connect110 = x3d.connect()
connect110.nodeField = "bboxSize"
connect110.protoField = "bboxSize"

IS109.connect.append(connect110)
connect111 = x3d.connect()
connect111.nodeField = "bboxCenter"
connect111.protoField = "bboxCenter"

IS109.connect.append(connect111)
connect112 = x3d.connect()
connect112.nodeField = "addChildren"
connect112.protoField = "addChildren"

IS109.connect.append(connect112)
connect113 = x3d.connect()
connect113.nodeField = "removeChildren"
connect113.protoField = "removeChildren"

IS109.connect.append(connect113)
connect114 = x3d.connect()
connect114.nodeField = "children"
connect114.protoField = "children"

IS109.connect.append(connect114)

Group108.IS = IS109

ProtoBody107.children.append(Group108)

ProtoDeclare94.ProtoBody = ProtoBody107

Scene21.children.append(ProtoDeclare94)
ProtoDeclare115 = x3d.ProtoDeclare()
ProtoDeclare115.name = "Site"
ProtoDeclare115.appinfo = "The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds)."
ProtoDeclare115.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Site.html"
ProtoInterface116 = x3d.ProtoInterface()
field117 = x3d.field()
field117.accessType = "inputOutput"
field117.type = "SFString"
field117.name = "name"

ProtoInterface116.field.append(field117)
field118 = x3d.field()
field118.accessType = "inputOutput"
field118.type = "SFVec3f"
field118.name = "translation"

ProtoInterface116.field.append(field118)
field119 = x3d.field()
field119.accessType = "inputOutput"
field119.type = "SFRotation"
field119.name = "rotation"

ProtoInterface116.field.append(field119)
field120 = x3d.field()
field120.accessType = "inputOutput"
field120.type = "SFVec3f"
field120.name = "scale"
field120.value = [1,1,1]

ProtoInterface116.field.append(field120)
field121 = x3d.field()
field121.accessType = "inputOutput"
field121.type = "SFRotation"
field121.name = "scaleOrientation"

ProtoInterface116.field.append(field121)
field122 = x3d.field()
field122.accessType = "inputOutput"
field122.type = "SFVec3f"
field122.name = "center"

ProtoInterface116.field.append(field122)
field123 = x3d.field()
field123.accessType = "initializeOnly"
field123.type = "SFVec3f"
field123.name = "bboxCenter"

ProtoInterface116.field.append(field123)
field124 = x3d.field()
field124.accessType = "initializeOnly"
field124.type = "SFVec3f"
field124.name = "bboxSize"
field124.value = [-1,-1,-1]

ProtoInterface116.field.append(field124)
field125 = x3d.field()
field125.accessType = "inputOutput"
field125.type = "MFNode"
field125.name = "children"

ProtoInterface116.field.append(field125)
field126 = x3d.field()
field126.accessType = "inputOnly"
field126.type = "MFNode"
field126.name = "addChildren"

ProtoInterface116.field.append(field126)
field127 = x3d.field()
field127.accessType = "inputOnly"
field127.type = "MFNode"
field127.name = "removeChildren"

ProtoInterface116.field.append(field127)

ProtoDeclare115.ProtoInterface = ProtoInterface116
ProtoBody128 = x3d.ProtoBody()
Transform129 = x3d.Transform()
Transform129.DEF = "SiteTransform"
IS130 = x3d.IS()
connect131 = x3d.connect()
connect131.nodeField = "translation"
connect131.protoField = "translation"

IS130.connect.append(connect131)
connect132 = x3d.connect()
connect132.nodeField = "rotation"
connect132.protoField = "rotation"

IS130.connect.append(connect132)
connect133 = x3d.connect()
connect133.nodeField = "scale"
connect133.protoField = "scale"

IS130.connect.append(connect133)
connect134 = x3d.connect()
connect134.nodeField = "scaleOrientation"
connect134.protoField = "scaleOrientation"

IS130.connect.append(connect134)
connect135 = x3d.connect()
connect135.nodeField = "center"
connect135.protoField = "center"

IS130.connect.append(connect135)
connect136 = x3d.connect()
connect136.nodeField = "bboxSize"
connect136.protoField = "bboxSize"

IS130.connect.append(connect136)
connect137 = x3d.connect()
connect137.nodeField = "bboxCenter"
connect137.protoField = "bboxCenter"

IS130.connect.append(connect137)
connect138 = x3d.connect()
connect138.nodeField = "addChildren"
connect138.protoField = "addChildren"

IS130.connect.append(connect138)
connect139 = x3d.connect()
connect139.nodeField = "removeChildren"
connect139.protoField = "removeChildren"

IS130.connect.append(connect139)
connect140 = x3d.connect()
connect140.nodeField = "children"
connect140.protoField = "children"

IS130.connect.append(connect140)

Transform129.IS = IS130

ProtoBody128.children.append(Transform129)

ProtoDeclare115.ProtoBody = ProtoBody128

Scene21.children.append(ProtoDeclare115)
ProtoDeclare141 = x3d.ProtoDeclare()
ProtoDeclare141.name = "Displacer"
ProtoDeclare141.appinfo = "A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment."
ProtoDeclare141.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html"
ProtoInterface142 = x3d.ProtoInterface()
field143 = x3d.field()
field143.accessType = "inputOutput"
field143.type = "SFString"
field143.name = "name"

ProtoInterface142.field.append(field143)
field144 = x3d.field()
field144.accessType = "inputOutput"
field144.type = "MFInt32"
field144.name = "coordIndex"

ProtoInterface142.field.append(field144)
field145 = x3d.field()
field145.accessType = "inputOutput"
field145.type = "MFVec3f"
field145.name = "displacements"

ProtoInterface142.field.append(field145)

ProtoDeclare141.ProtoInterface = ProtoInterface142
ProtoBody146 = x3d.ProtoBody()
WorldInfo147 = x3d.WorldInfo()
WorldInfo147.info = ["null body node"]

ProtoBody146.children.append(WorldInfo147)

ProtoDeclare141.ProtoBody = ProtoBody146

Scene21.children.append(ProtoDeclare141)
Shape148 = x3d.Shape()
Appearance149 = x3d.Appearance()
Material150 = x3d.Material()
Material150.ambientIntensity = 0.25
Material150.diffuseColor = [0.795918,0.505869,0.093315]
Material150.specularColor = [0.923469,0.428866,0.006369]
Material150.shininess = 0.39

Appearance149.material = Material150

Shape148.appearance = Appearance149
Text151 = x3d.Text()
Text151.string = ["Humanoid Animation","(HAnim) prototype","implementations"]
FontStyle152 = x3d.FontStyle()
FontStyle152.justify = ["MIDDLE","MIDDLE"]

Text151.fontStyle = FontStyle152

Shape148.geometry = Text151

Scene21.children.append(Shape148)

X3D0.Scene = Scene21
f = open("../data/HAnimPrototypes.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimPrototypes.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimPrototypes.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
