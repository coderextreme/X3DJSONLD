print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "HAnimBehaviorPrototypes.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Prototypes for HAnimBehavior node, which collects OrientationInterpolators for aggregate animation of an HAnim humanoid model, and HAnimBodyBehaviorChooser, which selects one body and enables/disables multiple aggregated behaviors."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Don Brutzman, Jeff Weekley, MV4205 Advanced X3D Authoring class, and Keith Victor"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "2 May 2006"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "4 July 2020"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "Web3D2007BlendedBehaviorsChangeableBodies.pdf"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "https://www.web3d.org/files/specifications/19774/V1.0"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "https://www.web3d.org/x3d/specifications/ISO-IEC-19775-X3DAbstractSpecification_Revision1_to_Part1/Part01/components/hanim.html"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "InterchangableActorsViaDynamicRoutingPrototypes.x3d"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "ApaydinThesis.pdf"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "subject"
meta13.content = "X3D HAnim humanoid animation behaviors"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "warning"
meta14.content = "under development. should joint translations be exposed? upgrade to HAnim v2.2"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "identifier"
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypes.x3d"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "generator"
meta16.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "license"
meta17.content = "../license.html"

head1.children.append(meta17)

X3D0.head = head1
Scene18 = x3d.Scene()
WorldInfo19 = x3d.WorldInfo()
WorldInfo19.title = "HAnimBehaviorPrototypes.x3d"

Scene18.children.append(WorldInfo19)
ProtoDeclare20 = x3d.ProtoDeclare()
ProtoDeclare20.name = "HAnimBehavior"
ProtoDeclare20.appinfo = "The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior."
ProtoDeclare20.documentation = "https://www.web3d.org/files/specifications/19774/V1.0/"
ProtoInterface21 = x3d.ProtoInterface()
"""supported Level of Articulation (LOA)"""
"""shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations"""
"""TODO: add other X3D 3.0 TimeSensor fields (pause etc.)"""
"""Not supported: animated translation of individual joints"""
"""pass in key/keyValue array pairs for single PositionInterpolator"""
"""pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint"""
field22 = x3d.field()
field22.name = "supportedLOA"
field22.accessType = "inputOutput"
field22.appinfo = "Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3."
field22.type = "SFInt32"
field22.value = -1

ProtoInterface21.field.append(field22)
field23 = x3d.field()
field23.name = "enabled"
field23.accessType = "inputOutput"
field23.appinfo = "is this behavior enabled?"
field23.type = "SFBool"
field23.value = True

ProtoInterface21.field.append(field23)
field24 = x3d.field()
field24.name = "cycleInterval"
field24.accessType = "inputOutput"
field24.appinfo = "how long do these interpolators take to execute?"
field24.type = "SFTime"
field24.value = 1

ProtoInterface21.field.append(field24)
field25 = x3d.field()
field25.name = "loop"
field25.accessType = "inputOutput"
field25.appinfo = "whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands)."
field25.type = "SFBool"
field25.value = False

ProtoInterface21.field.append(field25)
field26 = x3d.field()
field26.name = "startTime"
field26.accessType = "inputOutput"
field26.appinfo = "when time now >= startTime isActive becomes true and TimeSensor becomes active"
field26.type = "SFTime"
field26.value = 0

ProtoInterface21.field.append(field26)
field27 = x3d.field()
field27.name = "stopTime"
field27.accessType = "inputOutput"
field27.appinfo = "when stopTime becomes <= time now isActive becomes false and TimeSensor becomes inactive"
field27.type = "SFTime"
field27.value = 0

ProtoInterface21.field.append(field27)
field28 = x3d.field()
field28.name = "pauseTime"
field28.accessType = "inputOutput"
field28.appinfo = "when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused"
field28.type = "SFTime"
field28.value = 0

ProtoInterface21.field.append(field28)
field29 = x3d.field()
field29.name = "resumeTime"
field29.accessType = "inputOutput"
field29.appinfo = "when resumeTime becomes <= time now isPaused becomes false and TimeSensor becomes inactive"
field29.type = "SFTime"
field29.value = 0

ProtoInterface21.field.append(field29)
field30 = x3d.field()
field30.name = "cycleTime"
field30.accessType = "outputOnly"
field30.appinfo = "cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle"
field30.type = "SFTime"

ProtoInterface21.field.append(field30)
field31 = x3d.field()
field31.name = "isActive"
field31.accessType = "outputOnly"
field31.appinfo = "isActive true/false events are sent when TimeSensor starts/stops running"
field31.type = "SFBool"

ProtoInterface21.field.append(field31)
field32 = x3d.field()
field32.name = "isPaused"
field32.accessType = "outputOnly"
field32.appinfo = "isPaused true/false events are sent when TimeSensor is paused/resumed"
field32.type = "SFBool"

ProtoInterface21.field.append(field32)
field33 = x3d.field()
field33.name = "elapsedTime"
field33.accessType = "outputOnly"
field33.appinfo = "current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time"
field33.type = "SFBool"

ProtoInterface21.field.append(field33)
field34 = x3d.field()
field34.name = "time"
field34.accessType = "outputOnly"
field34.appinfo = "continuously sends the absolute time (since January 1 1970)"
field34.type = "SFBool"

ProtoInterface21.field.append(field34)
field35 = x3d.field()
field35.name = "fraction_changed"
field35.accessType = "outputOnly"
field35.appinfo = "fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle."
field35.type = "SFFloat"

ProtoInterface21.field.append(field35)
field36 = x3d.field()
field36.name = "HumanoidRoot_translation_key"
field36.accessType = "inputOutput"
field36.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field36)
field37 = x3d.field()
field37.name = "HumanoidRoot_translation_keyValue"
field37.accessType = "inputOutput"
field37.type = "MFVec3f"
"""no default value"""

ProtoInterface21.field.append(field37)
field38 = x3d.field()
field38.name = "HumanoidRoot_translation_changed"
field38.accessType = "outputOnly"
field38.type = "SFVec3f"

ProtoInterface21.field.append(field38)
field39 = x3d.field()
field39.name = "HumanoidRoot_rotation_key"
field39.accessType = "inputOutput"
field39.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field39)
field40 = x3d.field()
field40.name = "HumanoidRoot_rotation_keyValue"
field40.accessType = "inputOutput"
field40.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field40)
field41 = x3d.field()
field41.name = "HumanoidRoot_rotation_changed"
field41.accessType = "outputOnly"
field41.type = "SFRotation"

ProtoInterface21.field.append(field41)
field42 = x3d.field()
field42.name = "c1_key"
field42.accessType = "inputOutput"
field42.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field42)
field43 = x3d.field()
field43.name = "c1_keyValue"
field43.accessType = "inputOutput"
field43.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field43)
field44 = x3d.field()
field44.name = "c1_changed"
field44.accessType = "outputOnly"
field44.type = "SFRotation"

ProtoInterface21.field.append(field44)
field45 = x3d.field()
field45.name = "c2_key"
field45.accessType = "inputOutput"
field45.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field45)
field46 = x3d.field()
field46.name = "c2_keyValue"
field46.accessType = "inputOutput"
field46.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field46)
field47 = x3d.field()
field47.name = "c2_changed"
field47.accessType = "outputOnly"
field47.type = "SFRotation"

ProtoInterface21.field.append(field47)
field48 = x3d.field()
field48.name = "c3_key"
field48.accessType = "inputOutput"
field48.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field48)
field49 = x3d.field()
field49.name = "c3_keyValue"
field49.accessType = "inputOutput"
field49.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field49)
field50 = x3d.field()
field50.name = "c3_changed"
field50.accessType = "outputOnly"
field50.type = "SFRotation"

ProtoInterface21.field.append(field50)
field51 = x3d.field()
field51.name = "c4_key"
field51.accessType = "inputOutput"
field51.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field51)
field52 = x3d.field()
field52.name = "c4_keyValue"
field52.accessType = "inputOutput"
field52.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field52)
field53 = x3d.field()
field53.name = "c4_changed"
field53.accessType = "outputOnly"
field53.type = "SFRotation"

ProtoInterface21.field.append(field53)
field54 = x3d.field()
field54.name = "c5_key"
field54.accessType = "inputOutput"
field54.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field54)
field55 = x3d.field()
field55.name = "c5_keyValue"
field55.accessType = "inputOutput"
field55.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field55)
field56 = x3d.field()
field56.name = "c5_changed"
field56.accessType = "outputOnly"
field56.type = "SFRotation"

ProtoInterface21.field.append(field56)
field57 = x3d.field()
field57.name = "c6_key"
field57.accessType = "inputOutput"
field57.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field57)
field58 = x3d.field()
field58.name = "c6_keyValue"
field58.accessType = "inputOutput"
field58.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field58)
field59 = x3d.field()
field59.name = "c6_changed"
field59.accessType = "outputOnly"
field59.type = "SFRotation"

ProtoInterface21.field.append(field59)
field60 = x3d.field()
field60.name = "c7_key"
field60.accessType = "inputOutput"
field60.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field60)
field61 = x3d.field()
field61.name = "c7_keyValue"
field61.accessType = "inputOutput"
field61.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field61)
field62 = x3d.field()
field62.name = "c7_changed"
field62.accessType = "outputOnly"
field62.type = "SFRotation"

ProtoInterface21.field.append(field62)
field63 = x3d.field()
field63.name = "jaw_key"
field63.accessType = "inputOutput"
field63.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field63)
field64 = x3d.field()
field64.name = "jaw_keyValue"
field64.accessType = "inputOutput"
field64.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field64)
field65 = x3d.field()
field65.name = "jaw_changed"
field65.accessType = "outputOnly"
field65.type = "SFRotation"

ProtoInterface21.field.append(field65)
field66 = x3d.field()
field66.name = "l1_key"
field66.accessType = "inputOutput"
field66.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field66)
field67 = x3d.field()
field67.name = "l1_keyValue"
field67.accessType = "inputOutput"
field67.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field67)
field68 = x3d.field()
field68.name = "l1_changed"
field68.accessType = "outputOnly"
field68.type = "SFRotation"

ProtoInterface21.field.append(field68)
field69 = x3d.field()
field69.name = "l2_key"
field69.accessType = "inputOutput"
field69.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field69)
field70 = x3d.field()
field70.name = "l2_keyValue"
field70.accessType = "inputOutput"
field70.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field70)
field71 = x3d.field()
field71.name = "l2_changed"
field71.accessType = "outputOnly"
field71.type = "SFRotation"

ProtoInterface21.field.append(field71)
field72 = x3d.field()
field72.name = "l3_key"
field72.accessType = "inputOutput"
field72.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field72)
field73 = x3d.field()
field73.name = "l3_keyValue"
field73.accessType = "inputOutput"
field73.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field73)
field74 = x3d.field()
field74.name = "l3_changed"
field74.accessType = "outputOnly"
field74.type = "SFRotation"

ProtoInterface21.field.append(field74)
field75 = x3d.field()
field75.name = "l4_key"
field75.accessType = "inputOutput"
field75.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field75)
field76 = x3d.field()
field76.name = "l4_keyValue"
field76.accessType = "inputOutput"
field76.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field76)
field77 = x3d.field()
field77.name = "l4_changed"
field77.accessType = "outputOnly"
field77.type = "SFRotation"

ProtoInterface21.field.append(field77)
field78 = x3d.field()
field78.name = "l5_key"
field78.accessType = "inputOutput"
field78.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field78)
field79 = x3d.field()
field79.name = "l5_keyValue"
field79.accessType = "inputOutput"
field79.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field79)
field80 = x3d.field()
field80.name = "l5_changed"
field80.accessType = "outputOnly"
field80.type = "SFRotation"

ProtoInterface21.field.append(field80)
field81 = x3d.field()
field81.name = "l_acromioclavicular_key"
field81.accessType = "inputOutput"
field81.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field81)
field82 = x3d.field()
field82.name = "l_acromioclavicular_keyValue"
field82.accessType = "inputOutput"
field82.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field82)
field83 = x3d.field()
field83.name = "l_acromioclavicular_changed"
field83.accessType = "outputOnly"
field83.type = "SFRotation"

ProtoInterface21.field.append(field83)
field84 = x3d.field()
field84.name = "l_ankle_key"
field84.accessType = "inputOutput"
field84.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field84)
field85 = x3d.field()
field85.name = "l_ankle_keyValue"
field85.accessType = "inputOutput"
field85.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field85)
field86 = x3d.field()
field86.name = "l_ankle_changed"
field86.accessType = "outputOnly"
field86.type = "SFRotation"

ProtoInterface21.field.append(field86)
field87 = x3d.field()
field87.name = "l_calf_key"
field87.accessType = "inputOutput"
field87.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field87)
field88 = x3d.field()
field88.name = "l_calf_keyValue"
field88.accessType = "inputOutput"
field88.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field88)
field89 = x3d.field()
field89.name = "l_calf_changed"
field89.accessType = "outputOnly"
field89.type = "SFRotation"

ProtoInterface21.field.append(field89)
field90 = x3d.field()
field90.name = "l_clavicle_key"
field90.accessType = "inputOutput"
field90.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field90)
field91 = x3d.field()
field91.name = "l_clavicle_keyValue"
field91.accessType = "inputOutput"
field91.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field91)
field92 = x3d.field()
field92.name = "l_clavicle_changed"
field92.accessType = "outputOnly"
field92.type = "SFRotation"

ProtoInterface21.field.append(field92)
field93 = x3d.field()
field93.name = "l_elbow_key"
field93.accessType = "inputOutput"
field93.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field93)
field94 = x3d.field()
field94.name = "l_elbow_keyValue"
field94.accessType = "inputOutput"
field94.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field94)
field95 = x3d.field()
field95.name = "l_elbow_changed"
field95.accessType = "outputOnly"
field95.type = "SFRotation"

ProtoInterface21.field.append(field95)
field96 = x3d.field()
field96.name = "l_eyeball_key"
field96.accessType = "inputOutput"
field96.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field96)
field97 = x3d.field()
field97.name = "l_eyeball_keyValue"
field97.accessType = "inputOutput"
field97.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field97)
field98 = x3d.field()
field98.name = "l_eyeball_changed"
field98.accessType = "outputOnly"
field98.type = "SFRotation"

ProtoInterface21.field.append(field98)
field99 = x3d.field()
field99.name = "l_eyeball_joint_key"
field99.accessType = "inputOutput"
field99.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field99)
field100 = x3d.field()
field100.name = "l_eyeball_joint_keyValue"
field100.accessType = "inputOutput"
field100.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field100)
field101 = x3d.field()
field101.name = "l_eyeball_joint_changed"
field101.accessType = "outputOnly"
field101.type = "SFRotation"

ProtoInterface21.field.append(field101)
field102 = x3d.field()
field102.name = "l_eyebrow_key"
field102.accessType = "inputOutput"
field102.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field102)
field103 = x3d.field()
field103.name = "l_eyebrow_keyValue"
field103.accessType = "inputOutput"
field103.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field103)
field104 = x3d.field()
field104.name = "l_eyebrow_changed"
field104.accessType = "outputOnly"
field104.type = "SFRotation"

ProtoInterface21.field.append(field104)
field105 = x3d.field()
field105.name = "l_eyebrow_joint_key"
field105.accessType = "inputOutput"
field105.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field105)
field106 = x3d.field()
field106.name = "l_eyebrow_joint_keyValue"
field106.accessType = "inputOutput"
field106.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field106)
field107 = x3d.field()
field107.name = "l_eyebrow_joint_changed"
field107.accessType = "outputOnly"
field107.type = "SFRotation"

ProtoInterface21.field.append(field107)
field108 = x3d.field()
field108.name = "l_eyelid_key"
field108.accessType = "inputOutput"
field108.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field108)
field109 = x3d.field()
field109.name = "l_eyelid_keyValue"
field109.accessType = "inputOutput"
field109.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field109)
field110 = x3d.field()
field110.name = "l_eyelid_changed"
field110.accessType = "outputOnly"
field110.type = "SFRotation"

ProtoInterface21.field.append(field110)
field111 = x3d.field()
field111.name = "l_eyelid_joint_key"
field111.accessType = "inputOutput"
field111.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field111)
field112 = x3d.field()
field112.name = "l_eyelid_joint_keyValue"
field112.accessType = "inputOutput"
field112.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field112)
field113 = x3d.field()
field113.name = "l_eyelid_joint_changed"
field113.accessType = "outputOnly"
field113.type = "SFRotation"

ProtoInterface21.field.append(field113)
field114 = x3d.field()
field114.name = "l_forearm_key"
field114.accessType = "inputOutput"
field114.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field114)
field115 = x3d.field()
field115.name = "l_forearm_keyValue"
field115.accessType = "inputOutput"
field115.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field115)
field116 = x3d.field()
field116.name = "l_forearm_changed"
field116.accessType = "outputOnly"
field116.type = "SFRotation"

ProtoInterface21.field.append(field116)
field117 = x3d.field()
field117.name = "l_forefoot_key"
field117.accessType = "inputOutput"
field117.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field117)
field118 = x3d.field()
field118.name = "l_forefoot_keyValue"
field118.accessType = "inputOutput"
field118.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field118)
field119 = x3d.field()
field119.name = "l_forefoot_changed"
field119.accessType = "outputOnly"
field119.type = "SFRotation"

ProtoInterface21.field.append(field119)
field120 = x3d.field()
field120.name = "l_hand_key"
field120.accessType = "inputOutput"
field120.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field120)
field121 = x3d.field()
field121.name = "l_hand_keyValue"
field121.accessType = "inputOutput"
field121.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field121)
field122 = x3d.field()
field122.name = "l_hand_changed"
field122.accessType = "outputOnly"
field122.type = "SFRotation"

ProtoInterface21.field.append(field122)
field123 = x3d.field()
field123.name = "l_hindfoot_key"
field123.accessType = "inputOutput"
field123.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field123)
field124 = x3d.field()
field124.name = "l_hindfoot_keyValue"
field124.accessType = "inputOutput"
field124.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field124)
field125 = x3d.field()
field125.name = "l_hindfoot_changed"
field125.accessType = "outputOnly"
field125.type = "SFRotation"

ProtoInterface21.field.append(field125)
field126 = x3d.field()
field126.name = "l_hip_key"
field126.accessType = "inputOutput"
field126.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field126)
field127 = x3d.field()
field127.name = "l_hip_keyValue"
field127.accessType = "inputOutput"
field127.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field127)
field128 = x3d.field()
field128.name = "l_hip_changed"
field128.accessType = "outputOnly"
field128.type = "SFRotation"

ProtoInterface21.field.append(field128)
field129 = x3d.field()
field129.name = "l_index0_key"
field129.accessType = "inputOutput"
field129.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field129)
field130 = x3d.field()
field130.name = "l_index0_keyValue"
field130.accessType = "inputOutput"
field130.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field130)
field131 = x3d.field()
field131.name = "l_index0_changed"
field131.accessType = "outputOnly"
field131.type = "SFRotation"

ProtoInterface21.field.append(field131)
field132 = x3d.field()
field132.name = "l_index1_key"
field132.accessType = "inputOutput"
field132.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field132)
field133 = x3d.field()
field133.name = "l_index1_keyValue"
field133.accessType = "inputOutput"
field133.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field133)
field134 = x3d.field()
field134.name = "l_index1_changed"
field134.accessType = "outputOnly"
field134.type = "SFRotation"

ProtoInterface21.field.append(field134)
field135 = x3d.field()
field135.name = "l_index2_key"
field135.accessType = "inputOutput"
field135.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field135)
field136 = x3d.field()
field136.name = "l_index2_keyValue"
field136.accessType = "inputOutput"
field136.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field136)
field137 = x3d.field()
field137.name = "l_index2_changed"
field137.accessType = "outputOnly"
field137.type = "SFRotation"

ProtoInterface21.field.append(field137)
field138 = x3d.field()
field138.name = "l_index3_key"
field138.accessType = "inputOutput"
field138.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field138)
field139 = x3d.field()
field139.name = "l_index3_keyValue"
field139.accessType = "inputOutput"
field139.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field139)
field140 = x3d.field()
field140.name = "l_index3_changed"
field140.accessType = "outputOnly"
field140.type = "SFRotation"

ProtoInterface21.field.append(field140)
field141 = x3d.field()
field141.name = "l_index_distal_key"
field141.accessType = "inputOutput"
field141.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field141)
field142 = x3d.field()
field142.name = "l_index_distal_keyValue"
field142.accessType = "inputOutput"
field142.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field142)
field143 = x3d.field()
field143.name = "l_index_distal_changed"
field143.accessType = "outputOnly"
field143.type = "SFRotation"

ProtoInterface21.field.append(field143)
field144 = x3d.field()
field144.name = "l_index_metacarpal_key"
field144.accessType = "inputOutput"
field144.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field144)
field145 = x3d.field()
field145.name = "l_index_metacarpal_keyValue"
field145.accessType = "inputOutput"
field145.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field145)
field146 = x3d.field()
field146.name = "l_index_metacarpal_changed"
field146.accessType = "outputOnly"
field146.type = "SFRotation"

ProtoInterface21.field.append(field146)
field147 = x3d.field()
field147.name = "l_index_middle_key"
field147.accessType = "inputOutput"
field147.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field147)
field148 = x3d.field()
field148.name = "l_index_middle_keyValue"
field148.accessType = "inputOutput"
field148.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field148)
field149 = x3d.field()
field149.name = "l_index_middle_changed"
field149.accessType = "outputOnly"
field149.type = "SFRotation"

ProtoInterface21.field.append(field149)
field150 = x3d.field()
field150.name = "l_index_proximal_key"
field150.accessType = "inputOutput"
field150.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field150)
field151 = x3d.field()
field151.name = "l_index_proximal_keyValue"
field151.accessType = "inputOutput"
field151.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field151)
field152 = x3d.field()
field152.name = "l_index_proximal_changed"
field152.accessType = "outputOnly"
field152.type = "SFRotation"

ProtoInterface21.field.append(field152)
field153 = x3d.field()
field153.name = "l_knee_key"
field153.accessType = "inputOutput"
field153.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field153)
field154 = x3d.field()
field154.name = "l_knee_keyValue"
field154.accessType = "inputOutput"
field154.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field154)
field155 = x3d.field()
field155.name = "l_knee_changed"
field155.accessType = "outputOnly"
field155.type = "SFRotation"

ProtoInterface21.field.append(field155)
field156 = x3d.field()
field156.name = "l_metatarsal_key"
field156.accessType = "inputOutput"
field156.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field156)
field157 = x3d.field()
field157.name = "l_metatarsal_keyValue"
field157.accessType = "inputOutput"
field157.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field157)
field158 = x3d.field()
field158.name = "l_metatarsal_changed"
field158.accessType = "outputOnly"
field158.type = "SFRotation"

ProtoInterface21.field.append(field158)
field159 = x3d.field()
field159.name = "l_middistal_key"
field159.accessType = "inputOutput"
field159.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field159)
field160 = x3d.field()
field160.name = "l_middistal_keyValue"
field160.accessType = "inputOutput"
field160.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field160)
field161 = x3d.field()
field161.name = "l_middistal_changed"
field161.accessType = "outputOnly"
field161.type = "SFRotation"

ProtoInterface21.field.append(field161)
field162 = x3d.field()
field162.name = "l_middle0_key"
field162.accessType = "inputOutput"
field162.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field162)
field163 = x3d.field()
field163.name = "l_middle0_keyValue"
field163.accessType = "inputOutput"
field163.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field163)
field164 = x3d.field()
field164.name = "l_middle0_changed"
field164.accessType = "outputOnly"
field164.type = "SFRotation"

ProtoInterface21.field.append(field164)
field165 = x3d.field()
field165.name = "l_middle1_key"
field165.accessType = "inputOutput"
field165.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field165)
field166 = x3d.field()
field166.name = "l_middle1_keyValue"
field166.accessType = "inputOutput"
field166.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field166)
field167 = x3d.field()
field167.name = "l_middle1_changed"
field167.accessType = "outputOnly"
field167.type = "SFRotation"

ProtoInterface21.field.append(field167)
field168 = x3d.field()
field168.name = "l_middle2_key"
field168.accessType = "inputOutput"
field168.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field168)
field169 = x3d.field()
field169.name = "l_middle2_keyValue"
field169.accessType = "inputOutput"
field169.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field169)
field170 = x3d.field()
field170.name = "l_middle2_changed"
field170.accessType = "outputOnly"
field170.type = "SFRotation"

ProtoInterface21.field.append(field170)
field171 = x3d.field()
field171.name = "l_middle3_key"
field171.accessType = "inputOutput"
field171.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field171)
field172 = x3d.field()
field172.name = "l_middle3_keyValue"
field172.accessType = "inputOutput"
field172.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field172)
field173 = x3d.field()
field173.name = "l_middle3_changed"
field173.accessType = "outputOnly"
field173.type = "SFRotation"

ProtoInterface21.field.append(field173)
field174 = x3d.field()
field174.name = "l_middle_distal_key"
field174.accessType = "inputOutput"
field174.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field174)
field175 = x3d.field()
field175.name = "l_middle_distal_keyValue"
field175.accessType = "inputOutput"
field175.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field175)
field176 = x3d.field()
field176.name = "l_middle_distal_changed"
field176.accessType = "outputOnly"
field176.type = "SFRotation"

ProtoInterface21.field.append(field176)
field177 = x3d.field()
field177.name = "l_middle_metacarpal_key"
field177.accessType = "inputOutput"
field177.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field177)
field178 = x3d.field()
field178.name = "l_middle_metacarpal_keyValue"
field178.accessType = "inputOutput"
field178.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field178)
field179 = x3d.field()
field179.name = "l_middle_metacarpal_changed"
field179.accessType = "outputOnly"
field179.type = "SFRotation"

ProtoInterface21.field.append(field179)
field180 = x3d.field()
field180.name = "l_middle_middle_key"
field180.accessType = "inputOutput"
field180.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field180)
field181 = x3d.field()
field181.name = "l_middle_middle_keyValue"
field181.accessType = "inputOutput"
field181.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field181)
field182 = x3d.field()
field182.name = "l_middle_middle_changed"
field182.accessType = "outputOnly"
field182.type = "SFRotation"

ProtoInterface21.field.append(field182)
field183 = x3d.field()
field183.name = "l_middle_proximal_key"
field183.accessType = "inputOutput"
field183.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field183)
field184 = x3d.field()
field184.name = "l_middle_proximal_keyValue"
field184.accessType = "inputOutput"
field184.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field184)
field185 = x3d.field()
field185.name = "l_middle_proximal_changed"
field185.accessType = "outputOnly"
field185.type = "SFRotation"

ProtoInterface21.field.append(field185)
field186 = x3d.field()
field186.name = "l_midproximal_key"
field186.accessType = "inputOutput"
field186.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field186)
field187 = x3d.field()
field187.name = "l_midproximal_keyValue"
field187.accessType = "inputOutput"
field187.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field187)
field188 = x3d.field()
field188.name = "l_midproximal_changed"
field188.accessType = "outputOnly"
field188.type = "SFRotation"

ProtoInterface21.field.append(field188)
field189 = x3d.field()
field189.name = "l_midtarsal_key"
field189.accessType = "inputOutput"
field189.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field189)
field190 = x3d.field()
field190.name = "l_midtarsal_keyValue"
field190.accessType = "inputOutput"
field190.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field190)
field191 = x3d.field()
field191.name = "l_midtarsal_changed"
field191.accessType = "outputOnly"
field191.type = "SFRotation"

ProtoInterface21.field.append(field191)
field192 = x3d.field()
field192.name = "l_pinky0_key"
field192.accessType = "inputOutput"
field192.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field192)
field193 = x3d.field()
field193.name = "l_pinky0_keyValue"
field193.accessType = "inputOutput"
field193.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field193)
field194 = x3d.field()
field194.name = "l_pinky0_changed"
field194.accessType = "outputOnly"
field194.type = "SFRotation"

ProtoInterface21.field.append(field194)
field195 = x3d.field()
field195.name = "l_pinky1_key"
field195.accessType = "inputOutput"
field195.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field195)
field196 = x3d.field()
field196.name = "l_pinky1_keyValue"
field196.accessType = "inputOutput"
field196.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field196)
field197 = x3d.field()
field197.name = "l_pinky1_changed"
field197.accessType = "outputOnly"
field197.type = "SFRotation"

ProtoInterface21.field.append(field197)
field198 = x3d.field()
field198.name = "l_pinky2_key"
field198.accessType = "inputOutput"
field198.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field198)
field199 = x3d.field()
field199.name = "l_pinky2_keyValue"
field199.accessType = "inputOutput"
field199.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field199)
field200 = x3d.field()
field200.name = "l_pinky2_changed"
field200.accessType = "outputOnly"
field200.type = "SFRotation"

ProtoInterface21.field.append(field200)
field201 = x3d.field()
field201.name = "l_pinky3_key"
field201.accessType = "inputOutput"
field201.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field201)
field202 = x3d.field()
field202.name = "l_pinky3_keyValue"
field202.accessType = "inputOutput"
field202.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field202)
field203 = x3d.field()
field203.name = "l_pinky3_changed"
field203.accessType = "outputOnly"
field203.type = "SFRotation"

ProtoInterface21.field.append(field203)
field204 = x3d.field()
field204.name = "l_pinky_distal_key"
field204.accessType = "inputOutput"
field204.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field204)
field205 = x3d.field()
field205.name = "l_pinky_distal_keyValue"
field205.accessType = "inputOutput"
field205.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field205)
field206 = x3d.field()
field206.name = "l_pinky_distal_changed"
field206.accessType = "outputOnly"
field206.type = "SFRotation"

ProtoInterface21.field.append(field206)
field207 = x3d.field()
field207.name = "l_pinky_metacarpal_key"
field207.accessType = "inputOutput"
field207.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field207)
field208 = x3d.field()
field208.name = "l_pinky_metacarpal_keyValue"
field208.accessType = "inputOutput"
field208.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field208)
field209 = x3d.field()
field209.name = "l_pinky_metacarpal_changed"
field209.accessType = "outputOnly"
field209.type = "SFRotation"

ProtoInterface21.field.append(field209)
field210 = x3d.field()
field210.name = "l_pinky_middle_key"
field210.accessType = "inputOutput"
field210.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field210)
field211 = x3d.field()
field211.name = "l_pinky_middle_keyValue"
field211.accessType = "inputOutput"
field211.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field211)
field212 = x3d.field()
field212.name = "l_pinky_middle_changed"
field212.accessType = "outputOnly"
field212.type = "SFRotation"

ProtoInterface21.field.append(field212)
field213 = x3d.field()
field213.name = "l_pinky_proximal_key"
field213.accessType = "inputOutput"
field213.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field213)
field214 = x3d.field()
field214.name = "l_pinky_proximal_keyValue"
field214.accessType = "inputOutput"
field214.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field214)
field215 = x3d.field()
field215.name = "l_pinky_proximal_changed"
field215.accessType = "outputOnly"
field215.type = "SFRotation"

ProtoInterface21.field.append(field215)
field216 = x3d.field()
field216.name = "l_ring0_key"
field216.accessType = "inputOutput"
field216.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field216)
field217 = x3d.field()
field217.name = "l_ring0_keyValue"
field217.accessType = "inputOutput"
field217.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field217)
field218 = x3d.field()
field218.name = "l_ring0_changed"
field218.accessType = "outputOnly"
field218.type = "SFRotation"

ProtoInterface21.field.append(field218)
field219 = x3d.field()
field219.name = "l_ring1_key"
field219.accessType = "inputOutput"
field219.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field219)
field220 = x3d.field()
field220.name = "l_ring1_keyValue"
field220.accessType = "inputOutput"
field220.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field220)
field221 = x3d.field()
field221.name = "l_ring1_changed"
field221.accessType = "outputOnly"
field221.type = "SFRotation"

ProtoInterface21.field.append(field221)
field222 = x3d.field()
field222.name = "l_ring2_key"
field222.accessType = "inputOutput"
field222.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field222)
field223 = x3d.field()
field223.name = "l_ring2_keyValue"
field223.accessType = "inputOutput"
field223.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field223)
field224 = x3d.field()
field224.name = "l_ring2_changed"
field224.accessType = "outputOnly"
field224.type = "SFRotation"

ProtoInterface21.field.append(field224)
field225 = x3d.field()
field225.name = "l_ring3_key"
field225.accessType = "inputOutput"
field225.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field225)
field226 = x3d.field()
field226.name = "l_ring3_keyValue"
field226.accessType = "inputOutput"
field226.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field226)
field227 = x3d.field()
field227.name = "l_ring3_changed"
field227.accessType = "outputOnly"
field227.type = "SFRotation"

ProtoInterface21.field.append(field227)
field228 = x3d.field()
field228.name = "l_ring_distal_key"
field228.accessType = "inputOutput"
field228.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field228)
field229 = x3d.field()
field229.name = "l_ring_distal_keyValue"
field229.accessType = "inputOutput"
field229.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field229)
field230 = x3d.field()
field230.name = "l_ring_distal_changed"
field230.accessType = "outputOnly"
field230.type = "SFRotation"

ProtoInterface21.field.append(field230)
field231 = x3d.field()
field231.name = "l_ring_metacarpal_key"
field231.accessType = "inputOutput"
field231.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field231)
field232 = x3d.field()
field232.name = "l_ring_metacarpal_keyValue"
field232.accessType = "inputOutput"
field232.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field232)
field233 = x3d.field()
field233.name = "l_ring_metacarpal_changed"
field233.accessType = "outputOnly"
field233.type = "SFRotation"

ProtoInterface21.field.append(field233)
field234 = x3d.field()
field234.name = "l_ring_middle_key"
field234.accessType = "inputOutput"
field234.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field234)
field235 = x3d.field()
field235.name = "l_ring_middle_keyValue"
field235.accessType = "inputOutput"
field235.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field235)
field236 = x3d.field()
field236.name = "l_ring_middle_changed"
field236.accessType = "outputOnly"
field236.type = "SFRotation"

ProtoInterface21.field.append(field236)
field237 = x3d.field()
field237.name = "l_ring_proximal_key"
field237.accessType = "inputOutput"
field237.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field237)
field238 = x3d.field()
field238.name = "l_ring_proximal_keyValue"
field238.accessType = "inputOutput"
field238.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field238)
field239 = x3d.field()
field239.name = "l_ring_proximal_changed"
field239.accessType = "outputOnly"
field239.type = "SFRotation"

ProtoInterface21.field.append(field239)
field240 = x3d.field()
field240.name = "l_scapula_key"
field240.accessType = "inputOutput"
field240.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field240)
field241 = x3d.field()
field241.name = "l_scapula_keyValue"
field241.accessType = "inputOutput"
field241.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field241)
field242 = x3d.field()
field242.name = "l_scapula_changed"
field242.accessType = "outputOnly"
field242.type = "SFRotation"

ProtoInterface21.field.append(field242)
field243 = x3d.field()
field243.name = "l_shoulder_key"
field243.accessType = "inputOutput"
field243.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field243)
field244 = x3d.field()
field244.name = "l_shoulder_keyValue"
field244.accessType = "inputOutput"
field244.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field244)
field245 = x3d.field()
field245.name = "l_shoulder_changed"
field245.accessType = "outputOnly"
field245.type = "SFRotation"

ProtoInterface21.field.append(field245)
field246 = x3d.field()
field246.name = "l_sternoclavicular_key"
field246.accessType = "inputOutput"
field246.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field246)
field247 = x3d.field()
field247.name = "l_sternoclavicular_keyValue"
field247.accessType = "inputOutput"
field247.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field247)
field248 = x3d.field()
field248.name = "l_sternoclavicular_changed"
field248.accessType = "outputOnly"
field248.type = "SFRotation"

ProtoInterface21.field.append(field248)
field249 = x3d.field()
field249.name = "l_subtalar_key"
field249.accessType = "inputOutput"
field249.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field249)
field250 = x3d.field()
field250.name = "l_subtalar_keyValue"
field250.accessType = "inputOutput"
field250.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field250)
field251 = x3d.field()
field251.name = "l_subtalar_changed"
field251.accessType = "outputOnly"
field251.type = "SFRotation"

ProtoInterface21.field.append(field251)
field252 = x3d.field()
field252.name = "l_thigh_key"
field252.accessType = "inputOutput"
field252.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field252)
field253 = x3d.field()
field253.name = "l_thigh_keyValue"
field253.accessType = "inputOutput"
field253.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field253)
field254 = x3d.field()
field254.name = "l_thigh_changed"
field254.accessType = "outputOnly"
field254.type = "SFRotation"

ProtoInterface21.field.append(field254)
field255 = x3d.field()
field255.name = "l_thumb1_key"
field255.accessType = "inputOutput"
field255.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field255)
field256 = x3d.field()
field256.name = "l_thumb1_keyValue"
field256.accessType = "inputOutput"
field256.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field256)
field257 = x3d.field()
field257.name = "l_thumb1_changed"
field257.accessType = "outputOnly"
field257.type = "SFRotation"

ProtoInterface21.field.append(field257)
field258 = x3d.field()
field258.name = "l_thumb2_key"
field258.accessType = "inputOutput"
field258.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field258)
field259 = x3d.field()
field259.name = "l_thumb2_keyValue"
field259.accessType = "inputOutput"
field259.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field259)
field260 = x3d.field()
field260.name = "l_thumb2_changed"
field260.accessType = "outputOnly"
field260.type = "SFRotation"

ProtoInterface21.field.append(field260)
field261 = x3d.field()
field261.name = "l_thumb3_key"
field261.accessType = "inputOutput"
field261.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field261)
field262 = x3d.field()
field262.name = "l_thumb3_keyValue"
field262.accessType = "inputOutput"
field262.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field262)
field263 = x3d.field()
field263.name = "l_thumb3_changed"
field263.accessType = "outputOnly"
field263.type = "SFRotation"

ProtoInterface21.field.append(field263)
field264 = x3d.field()
field264.name = "l_thumb_distal_key"
field264.accessType = "inputOutput"
field264.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field264)
field265 = x3d.field()
field265.name = "l_thumb_distal_keyValue"
field265.accessType = "inputOutput"
field265.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field265)
field266 = x3d.field()
field266.name = "l_thumb_distal_changed"
field266.accessType = "outputOnly"
field266.type = "SFRotation"

ProtoInterface21.field.append(field266)
field267 = x3d.field()
field267.name = "l_thumb_metacarpal_key"
field267.accessType = "inputOutput"
field267.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field267)
field268 = x3d.field()
field268.name = "l_thumb_metacarpal_keyValue"
field268.accessType = "inputOutput"
field268.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field268)
field269 = x3d.field()
field269.name = "l_thumb_metacarpal_changed"
field269.accessType = "outputOnly"
field269.type = "SFRotation"

ProtoInterface21.field.append(field269)
field270 = x3d.field()
field270.name = "l_thumb_proximal_key"
field270.accessType = "inputOutput"
field270.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field270)
field271 = x3d.field()
field271.name = "l_thumb_proximal_keyValue"
field271.accessType = "inputOutput"
field271.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field271)
field272 = x3d.field()
field272.name = "l_thumb_proximal_changed"
field272.accessType = "outputOnly"
field272.type = "SFRotation"

ProtoInterface21.field.append(field272)
field273 = x3d.field()
field273.name = "l_upperarm_key"
field273.accessType = "inputOutput"
field273.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field273)
field274 = x3d.field()
field274.name = "l_upperarm_keyValue"
field274.accessType = "inputOutput"
field274.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field274)
field275 = x3d.field()
field275.name = "l_upperarm_changed"
field275.accessType = "outputOnly"
field275.type = "SFRotation"

ProtoInterface21.field.append(field275)
field276 = x3d.field()
field276.name = "l_wrist_key"
field276.accessType = "inputOutput"
field276.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field276)
field277 = x3d.field()
field277.name = "l_wrist_keyValue"
field277.accessType = "inputOutput"
field277.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field277)
field278 = x3d.field()
field278.name = "l_wrist_changed"
field278.accessType = "outputOnly"
field278.type = "SFRotation"

ProtoInterface21.field.append(field278)
field279 = x3d.field()
field279.name = "pelvis_key"
field279.accessType = "inputOutput"
field279.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field279)
field280 = x3d.field()
field280.name = "pelvis_keyValue"
field280.accessType = "inputOutput"
field280.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field280)
field281 = x3d.field()
field281.name = "pelvis_changed"
field281.accessType = "outputOnly"
field281.type = "SFRotation"

ProtoInterface21.field.append(field281)
field282 = x3d.field()
field282.name = "r_acromioclavicular_key"
field282.accessType = "inputOutput"
field282.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field282)
field283 = x3d.field()
field283.name = "r_acromioclavicular_keyValue"
field283.accessType = "inputOutput"
field283.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field283)
field284 = x3d.field()
field284.name = "r_acromioclavicular_changed"
field284.accessType = "outputOnly"
field284.type = "SFRotation"

ProtoInterface21.field.append(field284)
field285 = x3d.field()
field285.name = "r_ankle_key"
field285.accessType = "inputOutput"
field285.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field285)
field286 = x3d.field()
field286.name = "r_ankle_keyValue"
field286.accessType = "inputOutput"
field286.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field286)
field287 = x3d.field()
field287.name = "r_ankle_changed"
field287.accessType = "outputOnly"
field287.type = "SFRotation"

ProtoInterface21.field.append(field287)
field288 = x3d.field()
field288.name = "r_calf_key"
field288.accessType = "inputOutput"
field288.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field288)
field289 = x3d.field()
field289.name = "r_calf_keyValue"
field289.accessType = "inputOutput"
field289.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field289)
field290 = x3d.field()
field290.name = "r_calf_changed"
field290.accessType = "outputOnly"
field290.type = "SFRotation"

ProtoInterface21.field.append(field290)
field291 = x3d.field()
field291.name = "r_clavicle_key"
field291.accessType = "inputOutput"
field291.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field291)
field292 = x3d.field()
field292.name = "r_clavicle_keyValue"
field292.accessType = "inputOutput"
field292.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field292)
field293 = x3d.field()
field293.name = "r_clavicle_changed"
field293.accessType = "outputOnly"
field293.type = "SFRotation"

ProtoInterface21.field.append(field293)
field294 = x3d.field()
field294.name = "r_elbow_key"
field294.accessType = "inputOutput"
field294.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field294)
field295 = x3d.field()
field295.name = "r_elbow_keyValue"
field295.accessType = "inputOutput"
field295.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field295)
field296 = x3d.field()
field296.name = "r_elbow_changed"
field296.accessType = "outputOnly"
field296.type = "SFRotation"

ProtoInterface21.field.append(field296)
field297 = x3d.field()
field297.name = "r_eyeball_key"
field297.accessType = "inputOutput"
field297.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field297)
field298 = x3d.field()
field298.name = "r_eyeball_keyValue"
field298.accessType = "inputOutput"
field298.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field298)
field299 = x3d.field()
field299.name = "r_eyeball_changed"
field299.accessType = "outputOnly"
field299.type = "SFRotation"

ProtoInterface21.field.append(field299)
field300 = x3d.field()
field300.name = "r_eyeball_joint_key"
field300.accessType = "inputOutput"
field300.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field300)
field301 = x3d.field()
field301.name = "r_eyeball_joint_keyValue"
field301.accessType = "inputOutput"
field301.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field301)
field302 = x3d.field()
field302.name = "r_eyeball_joint_changed"
field302.accessType = "outputOnly"
field302.type = "SFRotation"

ProtoInterface21.field.append(field302)
field303 = x3d.field()
field303.name = "r_eyebrow_key"
field303.accessType = "inputOutput"
field303.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field303)
field304 = x3d.field()
field304.name = "r_eyebrow_keyValue"
field304.accessType = "inputOutput"
field304.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field304)
field305 = x3d.field()
field305.name = "r_eyebrow_changed"
field305.accessType = "outputOnly"
field305.type = "SFRotation"

ProtoInterface21.field.append(field305)
field306 = x3d.field()
field306.name = "r_eyebrow_joint_key"
field306.accessType = "inputOutput"
field306.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field306)
field307 = x3d.field()
field307.name = "r_eyebrow_joint_keyValue"
field307.accessType = "inputOutput"
field307.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field307)
field308 = x3d.field()
field308.name = "r_eyebrow_joint_changed"
field308.accessType = "outputOnly"
field308.type = "SFRotation"

ProtoInterface21.field.append(field308)
field309 = x3d.field()
field309.name = "r_eyelid_key"
field309.accessType = "inputOutput"
field309.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field309)
field310 = x3d.field()
field310.name = "r_eyelid_keyValue"
field310.accessType = "inputOutput"
field310.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field310)
field311 = x3d.field()
field311.name = "r_eyelid_changed"
field311.accessType = "outputOnly"
field311.type = "SFRotation"

ProtoInterface21.field.append(field311)
field312 = x3d.field()
field312.name = "r_eyelid_joint_key"
field312.accessType = "inputOutput"
field312.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field312)
field313 = x3d.field()
field313.name = "r_eyelid_joint_keyValue"
field313.accessType = "inputOutput"
field313.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field313)
field314 = x3d.field()
field314.name = "r_eyelid_joint_changed"
field314.accessType = "outputOnly"
field314.type = "SFRotation"

ProtoInterface21.field.append(field314)
field315 = x3d.field()
field315.name = "r_forearm_key"
field315.accessType = "inputOutput"
field315.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field315)
field316 = x3d.field()
field316.name = "r_forearm_keyValue"
field316.accessType = "inputOutput"
field316.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field316)
field317 = x3d.field()
field317.name = "r_forearm_changed"
field317.accessType = "outputOnly"
field317.type = "SFRotation"

ProtoInterface21.field.append(field317)
field318 = x3d.field()
field318.name = "r_forefoot_key"
field318.accessType = "inputOutput"
field318.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field318)
field319 = x3d.field()
field319.name = "r_forefoot_keyValue"
field319.accessType = "inputOutput"
field319.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field319)
field320 = x3d.field()
field320.name = "r_forefoot_changed"
field320.accessType = "outputOnly"
field320.type = "SFRotation"

ProtoInterface21.field.append(field320)
field321 = x3d.field()
field321.name = "r_hand_key"
field321.accessType = "inputOutput"
field321.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field321)
field322 = x3d.field()
field322.name = "r_hand_keyValue"
field322.accessType = "inputOutput"
field322.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field322)
field323 = x3d.field()
field323.name = "r_hand_changed"
field323.accessType = "outputOnly"
field323.type = "SFRotation"

ProtoInterface21.field.append(field323)
field324 = x3d.field()
field324.name = "r_hindfoot_key"
field324.accessType = "inputOutput"
field324.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field324)
field325 = x3d.field()
field325.name = "r_hindfoot_keyValue"
field325.accessType = "inputOutput"
field325.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field325)
field326 = x3d.field()
field326.name = "r_hindfoot_changed"
field326.accessType = "outputOnly"
field326.type = "SFRotation"

ProtoInterface21.field.append(field326)
field327 = x3d.field()
field327.name = "r_hip_key"
field327.accessType = "inputOutput"
field327.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field327)
field328 = x3d.field()
field328.name = "r_hip_keyValue"
field328.accessType = "inputOutput"
field328.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field328)
field329 = x3d.field()
field329.name = "r_hip_changed"
field329.accessType = "outputOnly"
field329.type = "SFRotation"

ProtoInterface21.field.append(field329)
field330 = x3d.field()
field330.name = "r_index0_key"
field330.accessType = "inputOutput"
field330.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field330)
field331 = x3d.field()
field331.name = "r_index0_keyValue"
field331.accessType = "inputOutput"
field331.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field331)
field332 = x3d.field()
field332.name = "r_index0_changed"
field332.accessType = "outputOnly"
field332.type = "SFRotation"

ProtoInterface21.field.append(field332)
field333 = x3d.field()
field333.name = "r_index1_key"
field333.accessType = "inputOutput"
field333.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field333)
field334 = x3d.field()
field334.name = "r_index1_keyValue"
field334.accessType = "inputOutput"
field334.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field334)
field335 = x3d.field()
field335.name = "r_index1_changed"
field335.accessType = "outputOnly"
field335.type = "SFRotation"

ProtoInterface21.field.append(field335)
field336 = x3d.field()
field336.name = "r_index2_key"
field336.accessType = "inputOutput"
field336.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field336)
field337 = x3d.field()
field337.name = "r_index2_keyValue"
field337.accessType = "inputOutput"
field337.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field337)
field338 = x3d.field()
field338.name = "r_index2_changed"
field338.accessType = "outputOnly"
field338.type = "SFRotation"

ProtoInterface21.field.append(field338)
field339 = x3d.field()
field339.name = "r_index3_key"
field339.accessType = "inputOutput"
field339.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field339)
field340 = x3d.field()
field340.name = "r_index3_keyValue"
field340.accessType = "inputOutput"
field340.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field340)
field341 = x3d.field()
field341.name = "r_index3_changed"
field341.accessType = "outputOnly"
field341.type = "SFRotation"

ProtoInterface21.field.append(field341)
field342 = x3d.field()
field342.name = "r_index_distal_key"
field342.accessType = "inputOutput"
field342.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field342)
field343 = x3d.field()
field343.name = "r_index_distal_keyValue"
field343.accessType = "inputOutput"
field343.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field343)
field344 = x3d.field()
field344.name = "r_index_distal_changed"
field344.accessType = "outputOnly"
field344.type = "SFRotation"

ProtoInterface21.field.append(field344)
field345 = x3d.field()
field345.name = "r_index_metacarpal_key"
field345.accessType = "inputOutput"
field345.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field345)
field346 = x3d.field()
field346.name = "r_index_metacarpal_keyValue"
field346.accessType = "inputOutput"
field346.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field346)
field347 = x3d.field()
field347.name = "r_index_metacarpal_changed"
field347.accessType = "outputOnly"
field347.type = "SFRotation"

ProtoInterface21.field.append(field347)
field348 = x3d.field()
field348.name = "r_index_middle_key"
field348.accessType = "inputOutput"
field348.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field348)
field349 = x3d.field()
field349.name = "r_index_middle_keyValue"
field349.accessType = "inputOutput"
field349.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field349)
field350 = x3d.field()
field350.name = "r_index_middle_changed"
field350.accessType = "outputOnly"
field350.type = "SFRotation"

ProtoInterface21.field.append(field350)
field351 = x3d.field()
field351.name = "r_index_proximal_key"
field351.accessType = "inputOutput"
field351.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field351)
field352 = x3d.field()
field352.name = "r_index_proximal_keyValue"
field352.accessType = "inputOutput"
field352.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field352)
field353 = x3d.field()
field353.name = "r_index_proximal_changed"
field353.accessType = "outputOnly"
field353.type = "SFRotation"

ProtoInterface21.field.append(field353)
field354 = x3d.field()
field354.name = "r_knee_key"
field354.accessType = "inputOutput"
field354.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field354)
field355 = x3d.field()
field355.name = "r_knee_keyValue"
field355.accessType = "inputOutput"
field355.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field355)
field356 = x3d.field()
field356.name = "r_knee_changed"
field356.accessType = "outputOnly"
field356.type = "SFRotation"

ProtoInterface21.field.append(field356)
field357 = x3d.field()
field357.name = "r_metatarsal_key"
field357.accessType = "inputOutput"
field357.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field357)
field358 = x3d.field()
field358.name = "r_metatarsal_keyValue"
field358.accessType = "inputOutput"
field358.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field358)
field359 = x3d.field()
field359.name = "r_metatarsal_changed"
field359.accessType = "outputOnly"
field359.type = "SFRotation"

ProtoInterface21.field.append(field359)
field360 = x3d.field()
field360.name = "r_middistal_key"
field360.accessType = "inputOutput"
field360.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field360)
field361 = x3d.field()
field361.name = "r_middistal_keyValue"
field361.accessType = "inputOutput"
field361.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field361)
field362 = x3d.field()
field362.name = "r_middistal_changed"
field362.accessType = "outputOnly"
field362.type = "SFRotation"

ProtoInterface21.field.append(field362)
field363 = x3d.field()
field363.name = "r_middle0_key"
field363.accessType = "inputOutput"
field363.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field363)
field364 = x3d.field()
field364.name = "r_middle0_keyValue"
field364.accessType = "inputOutput"
field364.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field364)
field365 = x3d.field()
field365.name = "r_middle0_changed"
field365.accessType = "outputOnly"
field365.type = "SFRotation"

ProtoInterface21.field.append(field365)
field366 = x3d.field()
field366.name = "r_middle1_key"
field366.accessType = "inputOutput"
field366.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field366)
field367 = x3d.field()
field367.name = "r_middle1_keyValue"
field367.accessType = "inputOutput"
field367.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field367)
field368 = x3d.field()
field368.name = "r_middle1_changed"
field368.accessType = "outputOnly"
field368.type = "SFRotation"

ProtoInterface21.field.append(field368)
field369 = x3d.field()
field369.name = "r_middle2_key"
field369.accessType = "inputOutput"
field369.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field369)
field370 = x3d.field()
field370.name = "r_middle2_keyValue"
field370.accessType = "inputOutput"
field370.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field370)
field371 = x3d.field()
field371.name = "r_middle2_changed"
field371.accessType = "outputOnly"
field371.type = "SFRotation"

ProtoInterface21.field.append(field371)
field372 = x3d.field()
field372.name = "r_middle3_key"
field372.accessType = "inputOutput"
field372.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field372)
field373 = x3d.field()
field373.name = "r_middle3_keyValue"
field373.accessType = "inputOutput"
field373.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field373)
field374 = x3d.field()
field374.name = "r_middle3_changed"
field374.accessType = "outputOnly"
field374.type = "SFRotation"

ProtoInterface21.field.append(field374)
field375 = x3d.field()
field375.name = "r_middle_distal_key"
field375.accessType = "inputOutput"
field375.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field375)
field376 = x3d.field()
field376.name = "r_middle_distal_keyValue"
field376.accessType = "inputOutput"
field376.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field376)
field377 = x3d.field()
field377.name = "r_middle_distal_changed"
field377.accessType = "outputOnly"
field377.type = "SFRotation"

ProtoInterface21.field.append(field377)
field378 = x3d.field()
field378.name = "r_middle_metacarpal_key"
field378.accessType = "inputOutput"
field378.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field378)
field379 = x3d.field()
field379.name = "r_middle_metacarpal_keyValue"
field379.accessType = "inputOutput"
field379.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field379)
field380 = x3d.field()
field380.name = "r_middle_metacarpal_changed"
field380.accessType = "outputOnly"
field380.type = "SFRotation"

ProtoInterface21.field.append(field380)
field381 = x3d.field()
field381.name = "r_middle_middle_key"
field381.accessType = "inputOutput"
field381.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field381)
field382 = x3d.field()
field382.name = "r_middle_middle_keyValue"
field382.accessType = "inputOutput"
field382.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field382)
field383 = x3d.field()
field383.name = "r_middle_middle_changed"
field383.accessType = "outputOnly"
field383.type = "SFRotation"

ProtoInterface21.field.append(field383)
field384 = x3d.field()
field384.name = "r_middle_proximal_key"
field384.accessType = "inputOutput"
field384.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field384)
field385 = x3d.field()
field385.name = "r_middle_proximal_keyValue"
field385.accessType = "inputOutput"
field385.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field385)
field386 = x3d.field()
field386.name = "r_middle_proximal_changed"
field386.accessType = "outputOnly"
field386.type = "SFRotation"

ProtoInterface21.field.append(field386)
field387 = x3d.field()
field387.name = "r_midproximal_key"
field387.accessType = "inputOutput"
field387.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field387)
field388 = x3d.field()
field388.name = "r_midproximal_keyValue"
field388.accessType = "inputOutput"
field388.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field388)
field389 = x3d.field()
field389.name = "r_midproximal_changed"
field389.accessType = "outputOnly"
field389.type = "SFRotation"

ProtoInterface21.field.append(field389)
field390 = x3d.field()
field390.name = "r_midtarsal_key"
field390.accessType = "inputOutput"
field390.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field390)
field391 = x3d.field()
field391.name = "r_midtarsal_keyValue"
field391.accessType = "inputOutput"
field391.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field391)
field392 = x3d.field()
field392.name = "r_midtarsal_changed"
field392.accessType = "outputOnly"
field392.type = "SFRotation"

ProtoInterface21.field.append(field392)
field393 = x3d.field()
field393.name = "r_pinky0_key"
field393.accessType = "inputOutput"
field393.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field393)
field394 = x3d.field()
field394.name = "r_pinky0_keyValue"
field394.accessType = "inputOutput"
field394.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field394)
field395 = x3d.field()
field395.name = "r_pinky0_changed"
field395.accessType = "outputOnly"
field395.type = "SFRotation"

ProtoInterface21.field.append(field395)
field396 = x3d.field()
field396.name = "r_pinky1_key"
field396.accessType = "inputOutput"
field396.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field396)
field397 = x3d.field()
field397.name = "r_pinky1_keyValue"
field397.accessType = "inputOutput"
field397.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field397)
field398 = x3d.field()
field398.name = "r_pinky1_changed"
field398.accessType = "outputOnly"
field398.type = "SFRotation"

ProtoInterface21.field.append(field398)
field399 = x3d.field()
field399.name = "r_pinky2_key"
field399.accessType = "inputOutput"
field399.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field399)
field400 = x3d.field()
field400.name = "r_pinky2_keyValue"
field400.accessType = "inputOutput"
field400.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field400)
field401 = x3d.field()
field401.name = "r_pinky2_changed"
field401.accessType = "outputOnly"
field401.type = "SFRotation"

ProtoInterface21.field.append(field401)
field402 = x3d.field()
field402.name = "r_pinky3_key"
field402.accessType = "inputOutput"
field402.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field402)
field403 = x3d.field()
field403.name = "r_pinky3_keyValue"
field403.accessType = "inputOutput"
field403.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field403)
field404 = x3d.field()
field404.name = "r_pinky3_changed"
field404.accessType = "outputOnly"
field404.type = "SFRotation"

ProtoInterface21.field.append(field404)
field405 = x3d.field()
field405.name = "r_pinky_distal_key"
field405.accessType = "inputOutput"
field405.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field405)
field406 = x3d.field()
field406.name = "r_pinky_distal_keyValue"
field406.accessType = "inputOutput"
field406.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field406)
field407 = x3d.field()
field407.name = "r_pinky_distal_changed"
field407.accessType = "outputOnly"
field407.type = "SFRotation"

ProtoInterface21.field.append(field407)
field408 = x3d.field()
field408.name = "r_pinky_metacarpal_key"
field408.accessType = "inputOutput"
field408.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field408)
field409 = x3d.field()
field409.name = "r_pinky_metacarpal_keyValue"
field409.accessType = "inputOutput"
field409.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field409)
field410 = x3d.field()
field410.name = "r_pinky_metacarpal_changed"
field410.accessType = "outputOnly"
field410.type = "SFRotation"

ProtoInterface21.field.append(field410)
field411 = x3d.field()
field411.name = "r_pinky_middle_key"
field411.accessType = "inputOutput"
field411.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field411)
field412 = x3d.field()
field412.name = "r_pinky_middle_keyValue"
field412.accessType = "inputOutput"
field412.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field412)
field413 = x3d.field()
field413.name = "r_pinky_middle_changed"
field413.accessType = "outputOnly"
field413.type = "SFRotation"

ProtoInterface21.field.append(field413)
field414 = x3d.field()
field414.name = "r_pinky_proximal_key"
field414.accessType = "inputOutput"
field414.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field414)
field415 = x3d.field()
field415.name = "r_pinky_proximal_keyValue"
field415.accessType = "inputOutput"
field415.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field415)
field416 = x3d.field()
field416.name = "r_pinky_proximal_changed"
field416.accessType = "outputOnly"
field416.type = "SFRotation"

ProtoInterface21.field.append(field416)
field417 = x3d.field()
field417.name = "r_ring0_key"
field417.accessType = "inputOutput"
field417.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field417)
field418 = x3d.field()
field418.name = "r_ring0_keyValue"
field418.accessType = "inputOutput"
field418.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field418)
field419 = x3d.field()
field419.name = "r_ring0_changed"
field419.accessType = "outputOnly"
field419.type = "SFRotation"

ProtoInterface21.field.append(field419)
field420 = x3d.field()
field420.name = "r_ring1_key"
field420.accessType = "inputOutput"
field420.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field420)
field421 = x3d.field()
field421.name = "r_ring1_keyValue"
field421.accessType = "inputOutput"
field421.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field421)
field422 = x3d.field()
field422.name = "r_ring1_changed"
field422.accessType = "outputOnly"
field422.type = "SFRotation"

ProtoInterface21.field.append(field422)
field423 = x3d.field()
field423.name = "r_ring2_key"
field423.accessType = "inputOutput"
field423.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field423)
field424 = x3d.field()
field424.name = "r_ring2_keyValue"
field424.accessType = "inputOutput"
field424.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field424)
field425 = x3d.field()
field425.name = "r_ring2_changed"
field425.accessType = "outputOnly"
field425.type = "SFRotation"

ProtoInterface21.field.append(field425)
field426 = x3d.field()
field426.name = "r_ring3_key"
field426.accessType = "inputOutput"
field426.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field426)
field427 = x3d.field()
field427.name = "r_ring3_keyValue"
field427.accessType = "inputOutput"
field427.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field427)
field428 = x3d.field()
field428.name = "r_ring3_changed"
field428.accessType = "outputOnly"
field428.type = "SFRotation"

ProtoInterface21.field.append(field428)
field429 = x3d.field()
field429.name = "r_ring_distal_key"
field429.accessType = "inputOutput"
field429.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field429)
field430 = x3d.field()
field430.name = "r_ring_distal_keyValue"
field430.accessType = "inputOutput"
field430.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field430)
field431 = x3d.field()
field431.name = "r_ring_distal_changed"
field431.accessType = "outputOnly"
field431.type = "SFRotation"

ProtoInterface21.field.append(field431)
field432 = x3d.field()
field432.name = "r_ring_metacarpal_key"
field432.accessType = "inputOutput"
field432.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field432)
field433 = x3d.field()
field433.name = "r_ring_metacarpal_keyValue"
field433.accessType = "inputOutput"
field433.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field433)
field434 = x3d.field()
field434.name = "r_ring_metacarpal_changed"
field434.accessType = "outputOnly"
field434.type = "SFRotation"

ProtoInterface21.field.append(field434)
field435 = x3d.field()
field435.name = "r_ring_middle_key"
field435.accessType = "inputOutput"
field435.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field435)
field436 = x3d.field()
field436.name = "r_ring_middle_keyValue"
field436.accessType = "inputOutput"
field436.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field436)
field437 = x3d.field()
field437.name = "r_ring_middle_changed"
field437.accessType = "outputOnly"
field437.type = "SFRotation"

ProtoInterface21.field.append(field437)
field438 = x3d.field()
field438.name = "r_ring_proximal_key"
field438.accessType = "inputOutput"
field438.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field438)
field439 = x3d.field()
field439.name = "r_ring_proximal_keyValue"
field439.accessType = "inputOutput"
field439.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field439)
field440 = x3d.field()
field440.name = "r_ring_proximal_changed"
field440.accessType = "outputOnly"
field440.type = "SFRotation"

ProtoInterface21.field.append(field440)
field441 = x3d.field()
field441.name = "r_scapula_key"
field441.accessType = "inputOutput"
field441.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field441)
field442 = x3d.field()
field442.name = "r_scapula_keyValue"
field442.accessType = "inputOutput"
field442.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field442)
field443 = x3d.field()
field443.name = "r_scapula_changed"
field443.accessType = "outputOnly"
field443.type = "SFRotation"

ProtoInterface21.field.append(field443)
field444 = x3d.field()
field444.name = "r_shoulder_key"
field444.accessType = "inputOutput"
field444.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field444)
field445 = x3d.field()
field445.name = "r_shoulder_keyValue"
field445.accessType = "inputOutput"
field445.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field445)
field446 = x3d.field()
field446.name = "r_shoulder_changed"
field446.accessType = "outputOnly"
field446.type = "SFRotation"

ProtoInterface21.field.append(field446)
field447 = x3d.field()
field447.name = "r_sternoclavicular_key"
field447.accessType = "inputOutput"
field447.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field447)
field448 = x3d.field()
field448.name = "r_sternoclavicular_keyValue"
field448.accessType = "inputOutput"
field448.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field448)
field449 = x3d.field()
field449.name = "r_sternoclavicular_changed"
field449.accessType = "outputOnly"
field449.type = "SFRotation"

ProtoInterface21.field.append(field449)
field450 = x3d.field()
field450.name = "r_subtalar_key"
field450.accessType = "inputOutput"
field450.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field450)
field451 = x3d.field()
field451.name = "r_subtalar_keyValue"
field451.accessType = "inputOutput"
field451.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field451)
field452 = x3d.field()
field452.name = "r_subtalar_changed"
field452.accessType = "outputOnly"
field452.type = "SFRotation"

ProtoInterface21.field.append(field452)
field453 = x3d.field()
field453.name = "r_thigh_key"
field453.accessType = "inputOutput"
field453.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field453)
field454 = x3d.field()
field454.name = "r_thigh_keyValue"
field454.accessType = "inputOutput"
field454.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field454)
field455 = x3d.field()
field455.name = "r_thigh_changed"
field455.accessType = "outputOnly"
field455.type = "SFRotation"

ProtoInterface21.field.append(field455)
field456 = x3d.field()
field456.name = "r_thumb1_key"
field456.accessType = "inputOutput"
field456.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field456)
field457 = x3d.field()
field457.name = "r_thumb1_keyValue"
field457.accessType = "inputOutput"
field457.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field457)
field458 = x3d.field()
field458.name = "r_thumb1_changed"
field458.accessType = "outputOnly"
field458.type = "SFRotation"

ProtoInterface21.field.append(field458)
field459 = x3d.field()
field459.name = "r_thumb2_key"
field459.accessType = "inputOutput"
field459.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field459)
field460 = x3d.field()
field460.name = "r_thumb2_keyValue"
field460.accessType = "inputOutput"
field460.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field460)
field461 = x3d.field()
field461.name = "r_thumb2_changed"
field461.accessType = "outputOnly"
field461.type = "SFRotation"

ProtoInterface21.field.append(field461)
field462 = x3d.field()
field462.name = "r_thumb3_key"
field462.accessType = "inputOutput"
field462.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field462)
field463 = x3d.field()
field463.name = "r_thumb3_keyValue"
field463.accessType = "inputOutput"
field463.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field463)
field464 = x3d.field()
field464.name = "r_thumb3_changed"
field464.accessType = "outputOnly"
field464.type = "SFRotation"

ProtoInterface21.field.append(field464)
field465 = x3d.field()
field465.name = "r_thumb_distal_key"
field465.accessType = "inputOutput"
field465.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field465)
field466 = x3d.field()
field466.name = "r_thumb_distal_keyValue"
field466.accessType = "inputOutput"
field466.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field466)
field467 = x3d.field()
field467.name = "r_thumb_distal_changed"
field467.accessType = "outputOnly"
field467.type = "SFRotation"

ProtoInterface21.field.append(field467)
field468 = x3d.field()
field468.name = "r_thumb_metacarpal_key"
field468.accessType = "inputOutput"
field468.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field468)
field469 = x3d.field()
field469.name = "r_thumb_metacarpal_keyValue"
field469.accessType = "inputOutput"
field469.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field469)
field470 = x3d.field()
field470.name = "r_thumb_metacarpal_changed"
field470.accessType = "outputOnly"
field470.type = "SFRotation"

ProtoInterface21.field.append(field470)
field471 = x3d.field()
field471.name = "r_thumb_proximal_key"
field471.accessType = "inputOutput"
field471.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field471)
field472 = x3d.field()
field472.name = "r_thumb_proximal_keyValue"
field472.accessType = "inputOutput"
field472.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field472)
field473 = x3d.field()
field473.name = "r_thumb_proximal_changed"
field473.accessType = "outputOnly"
field473.type = "SFRotation"

ProtoInterface21.field.append(field473)
field474 = x3d.field()
field474.name = "r_upperarm_key"
field474.accessType = "inputOutput"
field474.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field474)
field475 = x3d.field()
field475.name = "r_upperarm_keyValue"
field475.accessType = "inputOutput"
field475.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field475)
field476 = x3d.field()
field476.name = "r_upperarm_changed"
field476.accessType = "outputOnly"
field476.type = "SFRotation"

ProtoInterface21.field.append(field476)
field477 = x3d.field()
field477.name = "r_wrist_key"
field477.accessType = "inputOutput"
field477.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field477)
field478 = x3d.field()
field478.name = "r_wrist_keyValue"
field478.accessType = "inputOutput"
field478.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field478)
field479 = x3d.field()
field479.name = "r_wrist_changed"
field479.accessType = "outputOnly"
field479.type = "SFRotation"

ProtoInterface21.field.append(field479)
field480 = x3d.field()
field480.name = "sacroiliac_key"
field480.accessType = "inputOutput"
field480.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field480)
field481 = x3d.field()
field481.name = "sacroiliac_keyValue"
field481.accessType = "inputOutput"
field481.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field481)
field482 = x3d.field()
field482.name = "sacroiliac_changed"
field482.accessType = "outputOnly"
field482.type = "SFRotation"

ProtoInterface21.field.append(field482)
field483 = x3d.field()
field483.name = "sacrum_key"
field483.accessType = "inputOutput"
field483.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field483)
field484 = x3d.field()
field484.name = "sacrum_keyValue"
field484.accessType = "inputOutput"
field484.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field484)
field485 = x3d.field()
field485.name = "sacrum_changed"
field485.accessType = "outputOnly"
field485.type = "SFRotation"

ProtoInterface21.field.append(field485)
field486 = x3d.field()
field486.name = "skull_key"
field486.accessType = "inputOutput"
field486.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field486)
field487 = x3d.field()
field487.name = "skull_keyValue"
field487.accessType = "inputOutput"
field487.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field487)
field488 = x3d.field()
field488.name = "skull_changed"
field488.accessType = "outputOnly"
field488.type = "SFRotation"

ProtoInterface21.field.append(field488)
field489 = x3d.field()
field489.name = "skullbase_key"
field489.accessType = "inputOutput"
field489.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field489)
field490 = x3d.field()
field490.name = "skullbase_keyValue"
field490.accessType = "inputOutput"
field490.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field490)
field491 = x3d.field()
field491.name = "skullbase_changed"
field491.accessType = "outputOnly"
field491.type = "SFRotation"

ProtoInterface21.field.append(field491)
field492 = x3d.field()
field492.name = "t10_key"
field492.accessType = "inputOutput"
field492.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field492)
field493 = x3d.field()
field493.name = "t10_keyValue"
field493.accessType = "inputOutput"
field493.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field493)
field494 = x3d.field()
field494.name = "t10_changed"
field494.accessType = "outputOnly"
field494.type = "SFRotation"

ProtoInterface21.field.append(field494)
field495 = x3d.field()
field495.name = "t11_key"
field495.accessType = "inputOutput"
field495.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field495)
field496 = x3d.field()
field496.name = "t11_keyValue"
field496.accessType = "inputOutput"
field496.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field496)
field497 = x3d.field()
field497.name = "t11_changed"
field497.accessType = "outputOnly"
field497.type = "SFRotation"

ProtoInterface21.field.append(field497)
field498 = x3d.field()
field498.name = "t12_key"
field498.accessType = "inputOutput"
field498.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field498)
field499 = x3d.field()
field499.name = "t12_keyValue"
field499.accessType = "inputOutput"
field499.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field499)
field500 = x3d.field()
field500.name = "t12_changed"
field500.accessType = "outputOnly"
field500.type = "SFRotation"

ProtoInterface21.field.append(field500)
field501 = x3d.field()
field501.name = "t1_key"
field501.accessType = "inputOutput"
field501.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field501)
field502 = x3d.field()
field502.name = "t1_keyValue"
field502.accessType = "inputOutput"
field502.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field502)
field503 = x3d.field()
field503.name = "t1_changed"
field503.accessType = "outputOnly"
field503.type = "SFRotation"

ProtoInterface21.field.append(field503)
field504 = x3d.field()
field504.name = "t2_key"
field504.accessType = "inputOutput"
field504.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field504)
field505 = x3d.field()
field505.name = "t2_keyValue"
field505.accessType = "inputOutput"
field505.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field505)
field506 = x3d.field()
field506.name = "t2_changed"
field506.accessType = "outputOnly"
field506.type = "SFRotation"

ProtoInterface21.field.append(field506)
field507 = x3d.field()
field507.name = "t3_key"
field507.accessType = "inputOutput"
field507.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field507)
field508 = x3d.field()
field508.name = "t3_keyValue"
field508.accessType = "inputOutput"
field508.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field508)
field509 = x3d.field()
field509.name = "t3_changed"
field509.accessType = "outputOnly"
field509.type = "SFRotation"

ProtoInterface21.field.append(field509)
field510 = x3d.field()
field510.name = "t4_key"
field510.accessType = "inputOutput"
field510.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field510)
field511 = x3d.field()
field511.name = "t4_keyValue"
field511.accessType = "inputOutput"
field511.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field511)
field512 = x3d.field()
field512.name = "t4_changed"
field512.accessType = "outputOnly"
field512.type = "SFRotation"

ProtoInterface21.field.append(field512)
field513 = x3d.field()
field513.name = "t5_key"
field513.accessType = "inputOutput"
field513.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field513)
field514 = x3d.field()
field514.name = "t5_keyValue"
field514.accessType = "inputOutput"
field514.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field514)
field515 = x3d.field()
field515.name = "t5_changed"
field515.accessType = "outputOnly"
field515.type = "SFRotation"

ProtoInterface21.field.append(field515)
field516 = x3d.field()
field516.name = "t6_key"
field516.accessType = "inputOutput"
field516.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field516)
field517 = x3d.field()
field517.name = "t6_keyValue"
field517.accessType = "inputOutput"
field517.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field517)
field518 = x3d.field()
field518.name = "t6_changed"
field518.accessType = "outputOnly"
field518.type = "SFRotation"

ProtoInterface21.field.append(field518)
field519 = x3d.field()
field519.name = "t7_key"
field519.accessType = "inputOutput"
field519.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field519)
field520 = x3d.field()
field520.name = "t7_keyValue"
field520.accessType = "inputOutput"
field520.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field520)
field521 = x3d.field()
field521.name = "t7_changed"
field521.accessType = "outputOnly"
field521.type = "SFRotation"

ProtoInterface21.field.append(field521)
field522 = x3d.field()
field522.name = "t8_key"
field522.accessType = "inputOutput"
field522.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field522)
field523 = x3d.field()
field523.name = "t8_keyValue"
field523.accessType = "inputOutput"
field523.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field523)
field524 = x3d.field()
field524.name = "t8_changed"
field524.accessType = "outputOnly"
field524.type = "SFRotation"

ProtoInterface21.field.append(field524)
field525 = x3d.field()
field525.name = "t9_key"
field525.accessType = "inputOutput"
field525.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field525)
field526 = x3d.field()
field526.name = "t9_keyValue"
field526.accessType = "inputOutput"
field526.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field526)
field527 = x3d.field()
field527.name = "t9_changed"
field527.accessType = "outputOnly"
field527.type = "SFRotation"

ProtoInterface21.field.append(field527)
field528 = x3d.field()
field528.name = "temporomandibular_key"
field528.accessType = "inputOutput"
field528.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field528)
field529 = x3d.field()
field529.name = "temporomandibular_keyValue"
field529.accessType = "inputOutput"
field529.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field529)
field530 = x3d.field()
field530.name = "temporomandibular_changed"
field530.accessType = "outputOnly"
field530.type = "SFRotation"

ProtoInterface21.field.append(field530)
field531 = x3d.field()
field531.name = "vc1_key"
field531.accessType = "inputOutput"
field531.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field531)
field532 = x3d.field()
field532.name = "vc1_keyValue"
field532.accessType = "inputOutput"
field532.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field532)
field533 = x3d.field()
field533.name = "vc1_changed"
field533.accessType = "outputOnly"
field533.type = "SFRotation"

ProtoInterface21.field.append(field533)
field534 = x3d.field()
field534.name = "vc2_key"
field534.accessType = "inputOutput"
field534.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field534)
field535 = x3d.field()
field535.name = "vc2_keyValue"
field535.accessType = "inputOutput"
field535.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field535)
field536 = x3d.field()
field536.name = "vc2_changed"
field536.accessType = "outputOnly"
field536.type = "SFRotation"

ProtoInterface21.field.append(field536)
field537 = x3d.field()
field537.name = "vc3_key"
field537.accessType = "inputOutput"
field537.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field537)
field538 = x3d.field()
field538.name = "vc3_keyValue"
field538.accessType = "inputOutput"
field538.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field538)
field539 = x3d.field()
field539.name = "vc3_changed"
field539.accessType = "outputOnly"
field539.type = "SFRotation"

ProtoInterface21.field.append(field539)
field540 = x3d.field()
field540.name = "vc4_key"
field540.accessType = "inputOutput"
field540.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field540)
field541 = x3d.field()
field541.name = "vc4_keyValue"
field541.accessType = "inputOutput"
field541.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field541)
field542 = x3d.field()
field542.name = "vc4_changed"
field542.accessType = "outputOnly"
field542.type = "SFRotation"

ProtoInterface21.field.append(field542)
field543 = x3d.field()
field543.name = "vc5_key"
field543.accessType = "inputOutput"
field543.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field543)
field544 = x3d.field()
field544.name = "vc5_keyValue"
field544.accessType = "inputOutput"
field544.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field544)
field545 = x3d.field()
field545.name = "vc5_changed"
field545.accessType = "outputOnly"
field545.type = "SFRotation"

ProtoInterface21.field.append(field545)
field546 = x3d.field()
field546.name = "vc6_key"
field546.accessType = "inputOutput"
field546.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field546)
field547 = x3d.field()
field547.name = "vc6_keyValue"
field547.accessType = "inputOutput"
field547.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field547)
field548 = x3d.field()
field548.name = "vc6_changed"
field548.accessType = "outputOnly"
field548.type = "SFRotation"

ProtoInterface21.field.append(field548)
field549 = x3d.field()
field549.name = "vc7_key"
field549.accessType = "inputOutput"
field549.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field549)
field550 = x3d.field()
field550.name = "vc7_keyValue"
field550.accessType = "inputOutput"
field550.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field550)
field551 = x3d.field()
field551.name = "vc7_changed"
field551.accessType = "outputOnly"
field551.type = "SFRotation"

ProtoInterface21.field.append(field551)
field552 = x3d.field()
field552.name = "vl1_key"
field552.accessType = "inputOutput"
field552.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field552)
field553 = x3d.field()
field553.name = "vl1_keyValue"
field553.accessType = "inputOutput"
field553.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field553)
field554 = x3d.field()
field554.name = "vl1_changed"
field554.accessType = "outputOnly"
field554.type = "SFRotation"

ProtoInterface21.field.append(field554)
field555 = x3d.field()
field555.name = "vl2_key"
field555.accessType = "inputOutput"
field555.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field555)
field556 = x3d.field()
field556.name = "vl2_keyValue"
field556.accessType = "inputOutput"
field556.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field556)
field557 = x3d.field()
field557.name = "vl2_changed"
field557.accessType = "outputOnly"
field557.type = "SFRotation"

ProtoInterface21.field.append(field557)
field558 = x3d.field()
field558.name = "vl3_key"
field558.accessType = "inputOutput"
field558.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field558)
field559 = x3d.field()
field559.name = "vl3_keyValue"
field559.accessType = "inputOutput"
field559.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field559)
field560 = x3d.field()
field560.name = "vl3_changed"
field560.accessType = "outputOnly"
field560.type = "SFRotation"

ProtoInterface21.field.append(field560)
field561 = x3d.field()
field561.name = "vl4_key"
field561.accessType = "inputOutput"
field561.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field561)
field562 = x3d.field()
field562.name = "vl4_keyValue"
field562.accessType = "inputOutput"
field562.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field562)
field563 = x3d.field()
field563.name = "vl4_changed"
field563.accessType = "outputOnly"
field563.type = "SFRotation"

ProtoInterface21.field.append(field563)
field564 = x3d.field()
field564.name = "vl5_key"
field564.accessType = "inputOutput"
field564.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field564)
field565 = x3d.field()
field565.name = "vl5_keyValue"
field565.accessType = "inputOutput"
field565.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field565)
field566 = x3d.field()
field566.name = "vl5_changed"
field566.accessType = "outputOnly"
field566.type = "SFRotation"

ProtoInterface21.field.append(field566)
field567 = x3d.field()
field567.name = "vt10_key"
field567.accessType = "inputOutput"
field567.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field567)
field568 = x3d.field()
field568.name = "vt10_keyValue"
field568.accessType = "inputOutput"
field568.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field568)
field569 = x3d.field()
field569.name = "vt10_changed"
field569.accessType = "outputOnly"
field569.type = "SFRotation"

ProtoInterface21.field.append(field569)
field570 = x3d.field()
field570.name = "vt11_key"
field570.accessType = "inputOutput"
field570.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field570)
field571 = x3d.field()
field571.name = "vt11_keyValue"
field571.accessType = "inputOutput"
field571.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field571)
field572 = x3d.field()
field572.name = "vt11_changed"
field572.accessType = "outputOnly"
field572.type = "SFRotation"

ProtoInterface21.field.append(field572)
field573 = x3d.field()
field573.name = "vt12_key"
field573.accessType = "inputOutput"
field573.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field573)
field574 = x3d.field()
field574.name = "vt12_keyValue"
field574.accessType = "inputOutput"
field574.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field574)
field575 = x3d.field()
field575.name = "vt12_changed"
field575.accessType = "outputOnly"
field575.type = "SFRotation"

ProtoInterface21.field.append(field575)
field576 = x3d.field()
field576.name = "vt1_key"
field576.accessType = "inputOutput"
field576.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field576)
field577 = x3d.field()
field577.name = "vt1_keyValue"
field577.accessType = "inputOutput"
field577.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field577)
field578 = x3d.field()
field578.name = "vt1_changed"
field578.accessType = "outputOnly"
field578.type = "SFRotation"

ProtoInterface21.field.append(field578)
field579 = x3d.field()
field579.name = "vt2_key"
field579.accessType = "inputOutput"
field579.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field579)
field580 = x3d.field()
field580.name = "vt2_keyValue"
field580.accessType = "inputOutput"
field580.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field580)
field581 = x3d.field()
field581.name = "vt2_changed"
field581.accessType = "outputOnly"
field581.type = "SFRotation"

ProtoInterface21.field.append(field581)
field582 = x3d.field()
field582.name = "vt3_key"
field582.accessType = "inputOutput"
field582.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field582)
field583 = x3d.field()
field583.name = "vt3_keyValue"
field583.accessType = "inputOutput"
field583.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field583)
field584 = x3d.field()
field584.name = "vt3_changed"
field584.accessType = "outputOnly"
field584.type = "SFRotation"

ProtoInterface21.field.append(field584)
field585 = x3d.field()
field585.name = "vt4_key"
field585.accessType = "inputOutput"
field585.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field585)
field586 = x3d.field()
field586.name = "vt4_keyValue"
field586.accessType = "inputOutput"
field586.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field586)
field587 = x3d.field()
field587.name = "vt4_changed"
field587.accessType = "outputOnly"
field587.type = "SFRotation"

ProtoInterface21.field.append(field587)
field588 = x3d.field()
field588.name = "vt5_key"
field588.accessType = "inputOutput"
field588.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field588)
field589 = x3d.field()
field589.name = "vt5_keyValue"
field589.accessType = "inputOutput"
field589.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field589)
field590 = x3d.field()
field590.name = "vt5_changed"
field590.accessType = "outputOnly"
field590.type = "SFRotation"

ProtoInterface21.field.append(field590)
field591 = x3d.field()
field591.name = "vt6_key"
field591.accessType = "inputOutput"
field591.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field591)
field592 = x3d.field()
field592.name = "vt6_keyValue"
field592.accessType = "inputOutput"
field592.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field592)
field593 = x3d.field()
field593.name = "vt6_changed"
field593.accessType = "outputOnly"
field593.type = "SFRotation"

ProtoInterface21.field.append(field593)
field594 = x3d.field()
field594.name = "vt7_key"
field594.accessType = "inputOutput"
field594.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field594)
field595 = x3d.field()
field595.name = "vt7_keyValue"
field595.accessType = "inputOutput"
field595.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field595)
field596 = x3d.field()
field596.name = "vt7_changed"
field596.accessType = "outputOnly"
field596.type = "SFRotation"

ProtoInterface21.field.append(field596)
field597 = x3d.field()
field597.name = "vt8_key"
field597.accessType = "inputOutput"
field597.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field597)
field598 = x3d.field()
field598.name = "vt8_keyValue"
field598.accessType = "inputOutput"
field598.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field598)
field599 = x3d.field()
field599.name = "vt8_changed"
field599.accessType = "outputOnly"
field599.type = "SFRotation"

ProtoInterface21.field.append(field599)
field600 = x3d.field()
field600.name = "vt9_key"
field600.accessType = "inputOutput"
field600.type = "MFFloat"
"""no default value"""

ProtoInterface21.field.append(field600)
field601 = x3d.field()
field601.name = "vt9_keyValue"
field601.accessType = "inputOutput"
field601.type = "MFRotation"
"""no default value"""

ProtoInterface21.field.append(field601)
field602 = x3d.field()
field602.name = "vt9_changed"
field602.accessType = "outputOnly"
field602.type = "SFRotation"

ProtoInterface21.field.append(field602)

ProtoDeclare20.ProtoInterface = ProtoInterface21
ProtoBody603 = x3d.ProtoBody()
"""design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators"""
TimeSensor604 = x3d.TimeSensor()
TimeSensor604.DEF = "BehaviorClock"
IS605 = x3d.IS()
connect606 = x3d.connect()
connect606.nodeField = "enabled"
connect606.protoField = "enabled"

IS605.connect.append(connect606)
connect607 = x3d.connect()
connect607.nodeField = "cycleInterval"
connect607.protoField = "cycleInterval"

IS605.connect.append(connect607)
connect608 = x3d.connect()
connect608.nodeField = "loop"
connect608.protoField = "loop"

IS605.connect.append(connect608)
connect609 = x3d.connect()
connect609.nodeField = "startTime"
connect609.protoField = "startTime"

IS605.connect.append(connect609)
connect610 = x3d.connect()
connect610.nodeField = "stopTime"
connect610.protoField = "stopTime"

IS605.connect.append(connect610)
connect611 = x3d.connect()
connect611.nodeField = "pauseTime"
connect611.protoField = "pauseTime"

IS605.connect.append(connect611)
connect612 = x3d.connect()
connect612.nodeField = "resumeTime"
connect612.protoField = "resumeTime"

IS605.connect.append(connect612)
connect613 = x3d.connect()
connect613.nodeField = "cycleTime"
connect613.protoField = "cycleTime"

IS605.connect.append(connect613)
connect614 = x3d.connect()
connect614.nodeField = "isActive"
connect614.protoField = "isActive"

IS605.connect.append(connect614)
connect615 = x3d.connect()
connect615.nodeField = "isPaused"
connect615.protoField = "isPaused"

IS605.connect.append(connect615)
connect616 = x3d.connect()
connect616.nodeField = "elapsedTime"
connect616.protoField = "elapsedTime"

IS605.connect.append(connect616)
connect617 = x3d.connect()
connect617.nodeField = "time"
connect617.protoField = "time"

IS605.connect.append(connect617)
connect618 = x3d.connect()
connect618.nodeField = "fraction_changed"
connect618.protoField = "fraction_changed"

IS605.connect.append(connect618)

TimeSensor604.IS = IS605

ProtoBody603.children.append(TimeSensor604)
"""note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless"""
Switch619 = x3d.Switch()
Switch619.DEF = "SupportedLoaHolder1"
Switch619.whichChoice = -1
IS620 = x3d.IS()
connect621 = x3d.connect()
connect621.nodeField = "whichChoice"
connect621.protoField = "supportedLOA"

IS620.connect.append(connect621)

Switch619.IS = IS620

ProtoBody603.children.append(Switch619)
PositionInterpolator622 = x3d.PositionInterpolator()
PositionInterpolator622.DEF = "HumanoidRootPI"
IS623 = x3d.IS()
connect624 = x3d.connect()
connect624.nodeField = "key"
connect624.protoField = "HumanoidRoot_translation_key"

IS623.connect.append(connect624)
connect625 = x3d.connect()
connect625.nodeField = "keyValue"
connect625.protoField = "HumanoidRoot_translation_keyValue"

IS623.connect.append(connect625)
connect626 = x3d.connect()
connect626.nodeField = "value_changed"
connect626.protoField = "HumanoidRoot_translation_changed"

IS623.connect.append(connect626)

PositionInterpolator622.IS = IS623

ProtoBody603.children.append(PositionInterpolator622)
ROUTE627 = x3d.ROUTE()
ROUTE627.fromField = "fraction_changed"
ROUTE627.fromNode = "BehaviorClock"
ROUTE627.toField = "set_fraction"
ROUTE627.toNode = "HumanoidRootPI"

ProtoBody603.children.append(ROUTE627)
OrientationInterpolator628 = x3d.OrientationInterpolator()
OrientationInterpolator628.DEF = "HumanoidRootOI"
IS629 = x3d.IS()
connect630 = x3d.connect()
connect630.nodeField = "key"
connect630.protoField = "HumanoidRoot_rotation_key"

IS629.connect.append(connect630)
connect631 = x3d.connect()
connect631.nodeField = "keyValue"
connect631.protoField = "HumanoidRoot_rotation_keyValue"

IS629.connect.append(connect631)
connect632 = x3d.connect()
connect632.nodeField = "value_changed"
connect632.protoField = "HumanoidRoot_rotation_changed"

IS629.connect.append(connect632)

OrientationInterpolator628.IS = IS629

ProtoBody603.children.append(OrientationInterpolator628)
ROUTE633 = x3d.ROUTE()
ROUTE633.fromField = "fraction_changed"
ROUTE633.fromNode = "BehaviorClock"
ROUTE633.toField = "set_fraction"
ROUTE633.toNode = "HumanoidRootOI"

ProtoBody603.children.append(ROUTE633)
OrientationInterpolator634 = x3d.OrientationInterpolator()
OrientationInterpolator634.DEF = "c1_OI"
IS635 = x3d.IS()
connect636 = x3d.connect()
connect636.nodeField = "key"
connect636.protoField = "c1_key"

IS635.connect.append(connect636)
connect637 = x3d.connect()
connect637.nodeField = "keyValue"
connect637.protoField = "c1_keyValue"

IS635.connect.append(connect637)
connect638 = x3d.connect()
connect638.nodeField = "value_changed"
connect638.protoField = "c1_changed"

IS635.connect.append(connect638)

OrientationInterpolator634.IS = IS635

ProtoBody603.children.append(OrientationInterpolator634)
ROUTE639 = x3d.ROUTE()
ROUTE639.fromField = "fraction_changed"
ROUTE639.fromNode = "BehaviorClock"
ROUTE639.toField = "set_fraction"
ROUTE639.toNode = "c1_OI"

ProtoBody603.children.append(ROUTE639)
OrientationInterpolator640 = x3d.OrientationInterpolator()
OrientationInterpolator640.DEF = "c2_OI"
IS641 = x3d.IS()
connect642 = x3d.connect()
connect642.nodeField = "key"
connect642.protoField = "c2_key"

IS641.connect.append(connect642)
connect643 = x3d.connect()
connect643.nodeField = "keyValue"
connect643.protoField = "c2_keyValue"

IS641.connect.append(connect643)
connect644 = x3d.connect()
connect644.nodeField = "value_changed"
connect644.protoField = "c2_changed"

IS641.connect.append(connect644)

OrientationInterpolator640.IS = IS641

ProtoBody603.children.append(OrientationInterpolator640)
ROUTE645 = x3d.ROUTE()
ROUTE645.fromField = "fraction_changed"
ROUTE645.fromNode = "BehaviorClock"
ROUTE645.toField = "set_fraction"
ROUTE645.toNode = "c2_OI"

ProtoBody603.children.append(ROUTE645)
OrientationInterpolator646 = x3d.OrientationInterpolator()
OrientationInterpolator646.DEF = "c3_OI"
IS647 = x3d.IS()
connect648 = x3d.connect()
connect648.nodeField = "key"
connect648.protoField = "c3_key"

IS647.connect.append(connect648)
connect649 = x3d.connect()
connect649.nodeField = "keyValue"
connect649.protoField = "c3_keyValue"

IS647.connect.append(connect649)
connect650 = x3d.connect()
connect650.nodeField = "value_changed"
connect650.protoField = "c3_changed"

IS647.connect.append(connect650)

OrientationInterpolator646.IS = IS647

ProtoBody603.children.append(OrientationInterpolator646)
ROUTE651 = x3d.ROUTE()
ROUTE651.fromField = "fraction_changed"
ROUTE651.fromNode = "BehaviorClock"
ROUTE651.toField = "set_fraction"
ROUTE651.toNode = "c3_OI"

ProtoBody603.children.append(ROUTE651)
OrientationInterpolator652 = x3d.OrientationInterpolator()
OrientationInterpolator652.DEF = "c4_OI"
IS653 = x3d.IS()
connect654 = x3d.connect()
connect654.nodeField = "key"
connect654.protoField = "c4_key"

IS653.connect.append(connect654)
connect655 = x3d.connect()
connect655.nodeField = "keyValue"
connect655.protoField = "c4_keyValue"

IS653.connect.append(connect655)
connect656 = x3d.connect()
connect656.nodeField = "value_changed"
connect656.protoField = "c4_changed"

IS653.connect.append(connect656)

OrientationInterpolator652.IS = IS653

ProtoBody603.children.append(OrientationInterpolator652)
ROUTE657 = x3d.ROUTE()
ROUTE657.fromField = "fraction_changed"
ROUTE657.fromNode = "BehaviorClock"
ROUTE657.toField = "set_fraction"
ROUTE657.toNode = "c4_OI"

ProtoBody603.children.append(ROUTE657)
OrientationInterpolator658 = x3d.OrientationInterpolator()
OrientationInterpolator658.DEF = "c5_OI"
IS659 = x3d.IS()
connect660 = x3d.connect()
connect660.nodeField = "key"
connect660.protoField = "c5_key"

IS659.connect.append(connect660)
connect661 = x3d.connect()
connect661.nodeField = "keyValue"
connect661.protoField = "c5_keyValue"

IS659.connect.append(connect661)
connect662 = x3d.connect()
connect662.nodeField = "value_changed"
connect662.protoField = "c5_changed"

IS659.connect.append(connect662)

OrientationInterpolator658.IS = IS659

ProtoBody603.children.append(OrientationInterpolator658)
ROUTE663 = x3d.ROUTE()
ROUTE663.fromField = "fraction_changed"
ROUTE663.fromNode = "BehaviorClock"
ROUTE663.toField = "set_fraction"
ROUTE663.toNode = "c5_OI"

ProtoBody603.children.append(ROUTE663)
OrientationInterpolator664 = x3d.OrientationInterpolator()
OrientationInterpolator664.DEF = "c6_OI"
IS665 = x3d.IS()
connect666 = x3d.connect()
connect666.nodeField = "key"
connect666.protoField = "c6_key"

IS665.connect.append(connect666)
connect667 = x3d.connect()
connect667.nodeField = "keyValue"
connect667.protoField = "c6_keyValue"

IS665.connect.append(connect667)
connect668 = x3d.connect()
connect668.nodeField = "value_changed"
connect668.protoField = "c6_changed"

IS665.connect.append(connect668)

OrientationInterpolator664.IS = IS665

ProtoBody603.children.append(OrientationInterpolator664)
ROUTE669 = x3d.ROUTE()
ROUTE669.fromField = "fraction_changed"
ROUTE669.fromNode = "BehaviorClock"
ROUTE669.toField = "set_fraction"
ROUTE669.toNode = "c6_OI"

ProtoBody603.children.append(ROUTE669)
OrientationInterpolator670 = x3d.OrientationInterpolator()
OrientationInterpolator670.DEF = "c7_OI"
IS671 = x3d.IS()
connect672 = x3d.connect()
connect672.nodeField = "key"
connect672.protoField = "c7_key"

IS671.connect.append(connect672)
connect673 = x3d.connect()
connect673.nodeField = "keyValue"
connect673.protoField = "c7_keyValue"

IS671.connect.append(connect673)
connect674 = x3d.connect()
connect674.nodeField = "value_changed"
connect674.protoField = "c7_changed"

IS671.connect.append(connect674)

OrientationInterpolator670.IS = IS671

ProtoBody603.children.append(OrientationInterpolator670)
ROUTE675 = x3d.ROUTE()
ROUTE675.fromField = "fraction_changed"
ROUTE675.fromNode = "BehaviorClock"
ROUTE675.toField = "set_fraction"
ROUTE675.toNode = "c7_OI"

ProtoBody603.children.append(ROUTE675)
OrientationInterpolator676 = x3d.OrientationInterpolator()
OrientationInterpolator676.DEF = "jaw_OI"
IS677 = x3d.IS()
connect678 = x3d.connect()
connect678.nodeField = "key"
connect678.protoField = "jaw_key"

IS677.connect.append(connect678)
connect679 = x3d.connect()
connect679.nodeField = "keyValue"
connect679.protoField = "jaw_keyValue"

IS677.connect.append(connect679)
connect680 = x3d.connect()
connect680.nodeField = "value_changed"
connect680.protoField = "jaw_changed"

IS677.connect.append(connect680)

OrientationInterpolator676.IS = IS677

ProtoBody603.children.append(OrientationInterpolator676)
ROUTE681 = x3d.ROUTE()
ROUTE681.fromField = "fraction_changed"
ROUTE681.fromNode = "BehaviorClock"
ROUTE681.toField = "set_fraction"
ROUTE681.toNode = "jaw_OI"

ProtoBody603.children.append(ROUTE681)
OrientationInterpolator682 = x3d.OrientationInterpolator()
OrientationInterpolator682.DEF = "l1_OI"
IS683 = x3d.IS()
connect684 = x3d.connect()
connect684.nodeField = "key"
connect684.protoField = "l1_key"

IS683.connect.append(connect684)
connect685 = x3d.connect()
connect685.nodeField = "keyValue"
connect685.protoField = "l1_keyValue"

IS683.connect.append(connect685)
connect686 = x3d.connect()
connect686.nodeField = "value_changed"
connect686.protoField = "l1_changed"

IS683.connect.append(connect686)

OrientationInterpolator682.IS = IS683

ProtoBody603.children.append(OrientationInterpolator682)
ROUTE687 = x3d.ROUTE()
ROUTE687.fromField = "fraction_changed"
ROUTE687.fromNode = "BehaviorClock"
ROUTE687.toField = "set_fraction"
ROUTE687.toNode = "l1_OI"

ProtoBody603.children.append(ROUTE687)
OrientationInterpolator688 = x3d.OrientationInterpolator()
OrientationInterpolator688.DEF = "l2_OI"
IS689 = x3d.IS()
connect690 = x3d.connect()
connect690.nodeField = "key"
connect690.protoField = "l2_key"

IS689.connect.append(connect690)
connect691 = x3d.connect()
connect691.nodeField = "keyValue"
connect691.protoField = "l2_keyValue"

IS689.connect.append(connect691)
connect692 = x3d.connect()
connect692.nodeField = "value_changed"
connect692.protoField = "l2_changed"

IS689.connect.append(connect692)

OrientationInterpolator688.IS = IS689

ProtoBody603.children.append(OrientationInterpolator688)
ROUTE693 = x3d.ROUTE()
ROUTE693.fromField = "fraction_changed"
ROUTE693.fromNode = "BehaviorClock"
ROUTE693.toField = "set_fraction"
ROUTE693.toNode = "l2_OI"

ProtoBody603.children.append(ROUTE693)
OrientationInterpolator694 = x3d.OrientationInterpolator()
OrientationInterpolator694.DEF = "l3_OI"
IS695 = x3d.IS()
connect696 = x3d.connect()
connect696.nodeField = "key"
connect696.protoField = "l3_key"

IS695.connect.append(connect696)
connect697 = x3d.connect()
connect697.nodeField = "keyValue"
connect697.protoField = "l3_keyValue"

IS695.connect.append(connect697)
connect698 = x3d.connect()
connect698.nodeField = "value_changed"
connect698.protoField = "l3_changed"

IS695.connect.append(connect698)

OrientationInterpolator694.IS = IS695

ProtoBody603.children.append(OrientationInterpolator694)
ROUTE699 = x3d.ROUTE()
ROUTE699.fromField = "fraction_changed"
ROUTE699.fromNode = "BehaviorClock"
ROUTE699.toField = "set_fraction"
ROUTE699.toNode = "l3_OI"

ProtoBody603.children.append(ROUTE699)
OrientationInterpolator700 = x3d.OrientationInterpolator()
OrientationInterpolator700.DEF = "l4_OI"
IS701 = x3d.IS()
connect702 = x3d.connect()
connect702.nodeField = "key"
connect702.protoField = "l4_key"

IS701.connect.append(connect702)
connect703 = x3d.connect()
connect703.nodeField = "keyValue"
connect703.protoField = "l4_keyValue"

IS701.connect.append(connect703)
connect704 = x3d.connect()
connect704.nodeField = "value_changed"
connect704.protoField = "l4_changed"

IS701.connect.append(connect704)

OrientationInterpolator700.IS = IS701

ProtoBody603.children.append(OrientationInterpolator700)
ROUTE705 = x3d.ROUTE()
ROUTE705.fromField = "fraction_changed"
ROUTE705.fromNode = "BehaviorClock"
ROUTE705.toField = "set_fraction"
ROUTE705.toNode = "l4_OI"

ProtoBody603.children.append(ROUTE705)
OrientationInterpolator706 = x3d.OrientationInterpolator()
OrientationInterpolator706.DEF = "l5_OI"
IS707 = x3d.IS()
connect708 = x3d.connect()
connect708.nodeField = "key"
connect708.protoField = "l5_key"

IS707.connect.append(connect708)
connect709 = x3d.connect()
connect709.nodeField = "keyValue"
connect709.protoField = "l5_keyValue"

IS707.connect.append(connect709)
connect710 = x3d.connect()
connect710.nodeField = "value_changed"
connect710.protoField = "l5_changed"

IS707.connect.append(connect710)

OrientationInterpolator706.IS = IS707

ProtoBody603.children.append(OrientationInterpolator706)
ROUTE711 = x3d.ROUTE()
ROUTE711.fromField = "fraction_changed"
ROUTE711.fromNode = "BehaviorClock"
ROUTE711.toField = "set_fraction"
ROUTE711.toNode = "l5_OI"

ProtoBody603.children.append(ROUTE711)
OrientationInterpolator712 = x3d.OrientationInterpolator()
OrientationInterpolator712.DEF = "l_acromioclavicular_OI"
IS713 = x3d.IS()
connect714 = x3d.connect()
connect714.nodeField = "key"
connect714.protoField = "l_acromioclavicular_key"

IS713.connect.append(connect714)
connect715 = x3d.connect()
connect715.nodeField = "keyValue"
connect715.protoField = "l_acromioclavicular_keyValue"

IS713.connect.append(connect715)
connect716 = x3d.connect()
connect716.nodeField = "value_changed"
connect716.protoField = "l_acromioclavicular_changed"

IS713.connect.append(connect716)

OrientationInterpolator712.IS = IS713

ProtoBody603.children.append(OrientationInterpolator712)
ROUTE717 = x3d.ROUTE()
ROUTE717.fromField = "fraction_changed"
ROUTE717.fromNode = "BehaviorClock"
ROUTE717.toField = "set_fraction"
ROUTE717.toNode = "l_acromioclavicular_OI"

ProtoBody603.children.append(ROUTE717)
OrientationInterpolator718 = x3d.OrientationInterpolator()
OrientationInterpolator718.DEF = "l_ankle_OI"
IS719 = x3d.IS()
connect720 = x3d.connect()
connect720.nodeField = "key"
connect720.protoField = "l_ankle_key"

IS719.connect.append(connect720)
connect721 = x3d.connect()
connect721.nodeField = "keyValue"
connect721.protoField = "l_ankle_keyValue"

IS719.connect.append(connect721)
connect722 = x3d.connect()
connect722.nodeField = "value_changed"
connect722.protoField = "l_ankle_changed"

IS719.connect.append(connect722)

OrientationInterpolator718.IS = IS719

ProtoBody603.children.append(OrientationInterpolator718)
ROUTE723 = x3d.ROUTE()
ROUTE723.fromField = "fraction_changed"
ROUTE723.fromNode = "BehaviorClock"
ROUTE723.toField = "set_fraction"
ROUTE723.toNode = "l_ankle_OI"

ProtoBody603.children.append(ROUTE723)
OrientationInterpolator724 = x3d.OrientationInterpolator()
OrientationInterpolator724.DEF = "l_calf_OI"
IS725 = x3d.IS()
connect726 = x3d.connect()
connect726.nodeField = "key"
connect726.protoField = "l_calf_key"

IS725.connect.append(connect726)
connect727 = x3d.connect()
connect727.nodeField = "keyValue"
connect727.protoField = "l_calf_keyValue"

IS725.connect.append(connect727)
connect728 = x3d.connect()
connect728.nodeField = "value_changed"
connect728.protoField = "l_calf_changed"

IS725.connect.append(connect728)

OrientationInterpolator724.IS = IS725

ProtoBody603.children.append(OrientationInterpolator724)
ROUTE729 = x3d.ROUTE()
ROUTE729.fromField = "fraction_changed"
ROUTE729.fromNode = "BehaviorClock"
ROUTE729.toField = "set_fraction"
ROUTE729.toNode = "l_calf_OI"

ProtoBody603.children.append(ROUTE729)
OrientationInterpolator730 = x3d.OrientationInterpolator()
OrientationInterpolator730.DEF = "l_clavicle_OI"
IS731 = x3d.IS()
connect732 = x3d.connect()
connect732.nodeField = "key"
connect732.protoField = "l_clavicle_key"

IS731.connect.append(connect732)
connect733 = x3d.connect()
connect733.nodeField = "keyValue"
connect733.protoField = "l_clavicle_keyValue"

IS731.connect.append(connect733)
connect734 = x3d.connect()
connect734.nodeField = "value_changed"
connect734.protoField = "l_clavicle_changed"

IS731.connect.append(connect734)

OrientationInterpolator730.IS = IS731

ProtoBody603.children.append(OrientationInterpolator730)
ROUTE735 = x3d.ROUTE()
ROUTE735.fromField = "fraction_changed"
ROUTE735.fromNode = "BehaviorClock"
ROUTE735.toField = "set_fraction"
ROUTE735.toNode = "l_clavicle_OI"

ProtoBody603.children.append(ROUTE735)
OrientationInterpolator736 = x3d.OrientationInterpolator()
OrientationInterpolator736.DEF = "l_elbow_OI"
IS737 = x3d.IS()
connect738 = x3d.connect()
connect738.nodeField = "key"
connect738.protoField = "l_elbow_key"

IS737.connect.append(connect738)
connect739 = x3d.connect()
connect739.nodeField = "keyValue"
connect739.protoField = "l_elbow_keyValue"

IS737.connect.append(connect739)
connect740 = x3d.connect()
connect740.nodeField = "value_changed"
connect740.protoField = "l_elbow_changed"

IS737.connect.append(connect740)

OrientationInterpolator736.IS = IS737

ProtoBody603.children.append(OrientationInterpolator736)
ROUTE741 = x3d.ROUTE()
ROUTE741.fromField = "fraction_changed"
ROUTE741.fromNode = "BehaviorClock"
ROUTE741.toField = "set_fraction"
ROUTE741.toNode = "l_elbow_OI"

ProtoBody603.children.append(ROUTE741)
OrientationInterpolator742 = x3d.OrientationInterpolator()
OrientationInterpolator742.DEF = "l_eyeball_OI"
IS743 = x3d.IS()
connect744 = x3d.connect()
connect744.nodeField = "key"
connect744.protoField = "l_eyeball_key"

IS743.connect.append(connect744)
connect745 = x3d.connect()
connect745.nodeField = "keyValue"
connect745.protoField = "l_eyeball_keyValue"

IS743.connect.append(connect745)
connect746 = x3d.connect()
connect746.nodeField = "value_changed"
connect746.protoField = "l_eyeball_changed"

IS743.connect.append(connect746)

OrientationInterpolator742.IS = IS743

ProtoBody603.children.append(OrientationInterpolator742)
ROUTE747 = x3d.ROUTE()
ROUTE747.fromField = "fraction_changed"
ROUTE747.fromNode = "BehaviorClock"
ROUTE747.toField = "set_fraction"
ROUTE747.toNode = "l_eyeball_OI"

ProtoBody603.children.append(ROUTE747)
OrientationInterpolator748 = x3d.OrientationInterpolator()
OrientationInterpolator748.DEF = "l_eyeball_joint_OI"
IS749 = x3d.IS()
connect750 = x3d.connect()
connect750.nodeField = "key"
connect750.protoField = "l_eyeball_joint_key"

IS749.connect.append(connect750)
connect751 = x3d.connect()
connect751.nodeField = "keyValue"
connect751.protoField = "l_eyeball_joint_keyValue"

IS749.connect.append(connect751)
connect752 = x3d.connect()
connect752.nodeField = "value_changed"
connect752.protoField = "l_eyeball_joint_changed"

IS749.connect.append(connect752)

OrientationInterpolator748.IS = IS749

ProtoBody603.children.append(OrientationInterpolator748)
ROUTE753 = x3d.ROUTE()
ROUTE753.fromField = "fraction_changed"
ROUTE753.fromNode = "BehaviorClock"
ROUTE753.toField = "set_fraction"
ROUTE753.toNode = "l_eyeball_joint_OI"

ProtoBody603.children.append(ROUTE753)
OrientationInterpolator754 = x3d.OrientationInterpolator()
OrientationInterpolator754.DEF = "l_eyebrow_OI"
IS755 = x3d.IS()
connect756 = x3d.connect()
connect756.nodeField = "key"
connect756.protoField = "l_eyebrow_key"

IS755.connect.append(connect756)
connect757 = x3d.connect()
connect757.nodeField = "keyValue"
connect757.protoField = "l_eyebrow_keyValue"

IS755.connect.append(connect757)
connect758 = x3d.connect()
connect758.nodeField = "value_changed"
connect758.protoField = "l_eyebrow_changed"

IS755.connect.append(connect758)

OrientationInterpolator754.IS = IS755

ProtoBody603.children.append(OrientationInterpolator754)
ROUTE759 = x3d.ROUTE()
ROUTE759.fromField = "fraction_changed"
ROUTE759.fromNode = "BehaviorClock"
ROUTE759.toField = "set_fraction"
ROUTE759.toNode = "l_eyebrow_OI"

ProtoBody603.children.append(ROUTE759)
OrientationInterpolator760 = x3d.OrientationInterpolator()
OrientationInterpolator760.DEF = "l_eyebrow_joint_OI"
IS761 = x3d.IS()
connect762 = x3d.connect()
connect762.nodeField = "key"
connect762.protoField = "l_eyebrow_joint_key"

IS761.connect.append(connect762)
connect763 = x3d.connect()
connect763.nodeField = "keyValue"
connect763.protoField = "l_eyebrow_joint_keyValue"

IS761.connect.append(connect763)
connect764 = x3d.connect()
connect764.nodeField = "value_changed"
connect764.protoField = "l_eyebrow_joint_changed"

IS761.connect.append(connect764)

OrientationInterpolator760.IS = IS761

ProtoBody603.children.append(OrientationInterpolator760)
ROUTE765 = x3d.ROUTE()
ROUTE765.fromField = "fraction_changed"
ROUTE765.fromNode = "BehaviorClock"
ROUTE765.toField = "set_fraction"
ROUTE765.toNode = "l_eyebrow_joint_OI"

ProtoBody603.children.append(ROUTE765)
OrientationInterpolator766 = x3d.OrientationInterpolator()
OrientationInterpolator766.DEF = "l_eyelid_OI"
IS767 = x3d.IS()
connect768 = x3d.connect()
connect768.nodeField = "key"
connect768.protoField = "l_eyelid_key"

IS767.connect.append(connect768)
connect769 = x3d.connect()
connect769.nodeField = "keyValue"
connect769.protoField = "l_eyelid_keyValue"

IS767.connect.append(connect769)
connect770 = x3d.connect()
connect770.nodeField = "value_changed"
connect770.protoField = "l_eyelid_changed"

IS767.connect.append(connect770)

OrientationInterpolator766.IS = IS767

ProtoBody603.children.append(OrientationInterpolator766)
ROUTE771 = x3d.ROUTE()
ROUTE771.fromField = "fraction_changed"
ROUTE771.fromNode = "BehaviorClock"
ROUTE771.toField = "set_fraction"
ROUTE771.toNode = "l_eyelid_OI"

ProtoBody603.children.append(ROUTE771)
OrientationInterpolator772 = x3d.OrientationInterpolator()
OrientationInterpolator772.DEF = "l_eyelid_joint_OI"
IS773 = x3d.IS()
connect774 = x3d.connect()
connect774.nodeField = "key"
connect774.protoField = "l_eyelid_joint_key"

IS773.connect.append(connect774)
connect775 = x3d.connect()
connect775.nodeField = "keyValue"
connect775.protoField = "l_eyelid_joint_keyValue"

IS773.connect.append(connect775)
connect776 = x3d.connect()
connect776.nodeField = "value_changed"
connect776.protoField = "l_eyelid_joint_changed"

IS773.connect.append(connect776)

OrientationInterpolator772.IS = IS773

ProtoBody603.children.append(OrientationInterpolator772)
ROUTE777 = x3d.ROUTE()
ROUTE777.fromField = "fraction_changed"
ROUTE777.fromNode = "BehaviorClock"
ROUTE777.toField = "set_fraction"
ROUTE777.toNode = "l_eyelid_joint_OI"

ProtoBody603.children.append(ROUTE777)
OrientationInterpolator778 = x3d.OrientationInterpolator()
OrientationInterpolator778.DEF = "l_forearm_OI"
IS779 = x3d.IS()
connect780 = x3d.connect()
connect780.nodeField = "key"
connect780.protoField = "l_forearm_key"

IS779.connect.append(connect780)
connect781 = x3d.connect()
connect781.nodeField = "keyValue"
connect781.protoField = "l_forearm_keyValue"

IS779.connect.append(connect781)
connect782 = x3d.connect()
connect782.nodeField = "value_changed"
connect782.protoField = "l_forearm_changed"

IS779.connect.append(connect782)

OrientationInterpolator778.IS = IS779

ProtoBody603.children.append(OrientationInterpolator778)
ROUTE783 = x3d.ROUTE()
ROUTE783.fromField = "fraction_changed"
ROUTE783.fromNode = "BehaviorClock"
ROUTE783.toField = "set_fraction"
ROUTE783.toNode = "l_forearm_OI"

ProtoBody603.children.append(ROUTE783)
OrientationInterpolator784 = x3d.OrientationInterpolator()
OrientationInterpolator784.DEF = "l_forefoot_OI"
IS785 = x3d.IS()
connect786 = x3d.connect()
connect786.nodeField = "key"
connect786.protoField = "l_forefoot_key"

IS785.connect.append(connect786)
connect787 = x3d.connect()
connect787.nodeField = "keyValue"
connect787.protoField = "l_forefoot_keyValue"

IS785.connect.append(connect787)
connect788 = x3d.connect()
connect788.nodeField = "value_changed"
connect788.protoField = "l_forefoot_changed"

IS785.connect.append(connect788)

OrientationInterpolator784.IS = IS785

ProtoBody603.children.append(OrientationInterpolator784)
ROUTE789 = x3d.ROUTE()
ROUTE789.fromField = "fraction_changed"
ROUTE789.fromNode = "BehaviorClock"
ROUTE789.toField = "set_fraction"
ROUTE789.toNode = "l_forefoot_OI"

ProtoBody603.children.append(ROUTE789)
OrientationInterpolator790 = x3d.OrientationInterpolator()
OrientationInterpolator790.DEF = "l_hand_OI"
IS791 = x3d.IS()
connect792 = x3d.connect()
connect792.nodeField = "key"
connect792.protoField = "l_hand_key"

IS791.connect.append(connect792)
connect793 = x3d.connect()
connect793.nodeField = "keyValue"
connect793.protoField = "l_hand_keyValue"

IS791.connect.append(connect793)
connect794 = x3d.connect()
connect794.nodeField = "value_changed"
connect794.protoField = "l_hand_changed"

IS791.connect.append(connect794)

OrientationInterpolator790.IS = IS791

ProtoBody603.children.append(OrientationInterpolator790)
ROUTE795 = x3d.ROUTE()
ROUTE795.fromField = "fraction_changed"
ROUTE795.fromNode = "BehaviorClock"
ROUTE795.toField = "set_fraction"
ROUTE795.toNode = "l_hand_OI"

ProtoBody603.children.append(ROUTE795)
OrientationInterpolator796 = x3d.OrientationInterpolator()
OrientationInterpolator796.DEF = "l_hindfoot_OI"
IS797 = x3d.IS()
connect798 = x3d.connect()
connect798.nodeField = "key"
connect798.protoField = "l_hindfoot_key"

IS797.connect.append(connect798)
connect799 = x3d.connect()
connect799.nodeField = "keyValue"
connect799.protoField = "l_hindfoot_keyValue"

IS797.connect.append(connect799)
connect800 = x3d.connect()
connect800.nodeField = "value_changed"
connect800.protoField = "l_hindfoot_changed"

IS797.connect.append(connect800)

OrientationInterpolator796.IS = IS797

ProtoBody603.children.append(OrientationInterpolator796)
ROUTE801 = x3d.ROUTE()
ROUTE801.fromField = "fraction_changed"
ROUTE801.fromNode = "BehaviorClock"
ROUTE801.toField = "set_fraction"
ROUTE801.toNode = "l_hindfoot_OI"

ProtoBody603.children.append(ROUTE801)
OrientationInterpolator802 = x3d.OrientationInterpolator()
OrientationInterpolator802.DEF = "l_hip_OI"
IS803 = x3d.IS()
connect804 = x3d.connect()
connect804.nodeField = "key"
connect804.protoField = "l_hip_key"

IS803.connect.append(connect804)
connect805 = x3d.connect()
connect805.nodeField = "keyValue"
connect805.protoField = "l_hip_keyValue"

IS803.connect.append(connect805)
connect806 = x3d.connect()
connect806.nodeField = "value_changed"
connect806.protoField = "l_hip_changed"

IS803.connect.append(connect806)

OrientationInterpolator802.IS = IS803

ProtoBody603.children.append(OrientationInterpolator802)
ROUTE807 = x3d.ROUTE()
ROUTE807.fromField = "fraction_changed"
ROUTE807.fromNode = "BehaviorClock"
ROUTE807.toField = "set_fraction"
ROUTE807.toNode = "l_hip_OI"

ProtoBody603.children.append(ROUTE807)
OrientationInterpolator808 = x3d.OrientationInterpolator()
OrientationInterpolator808.DEF = "l_index0_OI"
IS809 = x3d.IS()
connect810 = x3d.connect()
connect810.nodeField = "key"
connect810.protoField = "l_index0_key"

IS809.connect.append(connect810)
connect811 = x3d.connect()
connect811.nodeField = "keyValue"
connect811.protoField = "l_index0_keyValue"

IS809.connect.append(connect811)
connect812 = x3d.connect()
connect812.nodeField = "value_changed"
connect812.protoField = "l_index0_changed"

IS809.connect.append(connect812)

OrientationInterpolator808.IS = IS809

ProtoBody603.children.append(OrientationInterpolator808)
ROUTE813 = x3d.ROUTE()
ROUTE813.fromField = "fraction_changed"
ROUTE813.fromNode = "BehaviorClock"
ROUTE813.toField = "set_fraction"
ROUTE813.toNode = "l_index0_OI"

ProtoBody603.children.append(ROUTE813)
OrientationInterpolator814 = x3d.OrientationInterpolator()
OrientationInterpolator814.DEF = "l_index1_OI"
IS815 = x3d.IS()
connect816 = x3d.connect()
connect816.nodeField = "key"
connect816.protoField = "l_index1_key"

IS815.connect.append(connect816)
connect817 = x3d.connect()
connect817.nodeField = "keyValue"
connect817.protoField = "l_index1_keyValue"

IS815.connect.append(connect817)
connect818 = x3d.connect()
connect818.nodeField = "value_changed"
connect818.protoField = "l_index1_changed"

IS815.connect.append(connect818)

OrientationInterpolator814.IS = IS815

ProtoBody603.children.append(OrientationInterpolator814)
ROUTE819 = x3d.ROUTE()
ROUTE819.fromField = "fraction_changed"
ROUTE819.fromNode = "BehaviorClock"
ROUTE819.toField = "set_fraction"
ROUTE819.toNode = "l_index1_OI"

ProtoBody603.children.append(ROUTE819)
OrientationInterpolator820 = x3d.OrientationInterpolator()
OrientationInterpolator820.DEF = "l_index2_OI"
IS821 = x3d.IS()
connect822 = x3d.connect()
connect822.nodeField = "key"
connect822.protoField = "l_index2_key"

IS821.connect.append(connect822)
connect823 = x3d.connect()
connect823.nodeField = "keyValue"
connect823.protoField = "l_index2_keyValue"

IS821.connect.append(connect823)
connect824 = x3d.connect()
connect824.nodeField = "value_changed"
connect824.protoField = "l_index2_changed"

IS821.connect.append(connect824)

OrientationInterpolator820.IS = IS821

ProtoBody603.children.append(OrientationInterpolator820)
ROUTE825 = x3d.ROUTE()
ROUTE825.fromField = "fraction_changed"
ROUTE825.fromNode = "BehaviorClock"
ROUTE825.toField = "set_fraction"
ROUTE825.toNode = "l_index2_OI"

ProtoBody603.children.append(ROUTE825)
OrientationInterpolator826 = x3d.OrientationInterpolator()
OrientationInterpolator826.DEF = "l_index3_OI"
IS827 = x3d.IS()
connect828 = x3d.connect()
connect828.nodeField = "key"
connect828.protoField = "l_index3_key"

IS827.connect.append(connect828)
connect829 = x3d.connect()
connect829.nodeField = "keyValue"
connect829.protoField = "l_index3_keyValue"

IS827.connect.append(connect829)
connect830 = x3d.connect()
connect830.nodeField = "value_changed"
connect830.protoField = "l_index3_changed"

IS827.connect.append(connect830)

OrientationInterpolator826.IS = IS827

ProtoBody603.children.append(OrientationInterpolator826)
ROUTE831 = x3d.ROUTE()
ROUTE831.fromField = "fraction_changed"
ROUTE831.fromNode = "BehaviorClock"
ROUTE831.toField = "set_fraction"
ROUTE831.toNode = "l_index3_OI"

ProtoBody603.children.append(ROUTE831)
OrientationInterpolator832 = x3d.OrientationInterpolator()
OrientationInterpolator832.DEF = "l_index_distal_OI"
IS833 = x3d.IS()
connect834 = x3d.connect()
connect834.nodeField = "key"
connect834.protoField = "l_index_distal_key"

IS833.connect.append(connect834)
connect835 = x3d.connect()
connect835.nodeField = "keyValue"
connect835.protoField = "l_index_distal_keyValue"

IS833.connect.append(connect835)
connect836 = x3d.connect()
connect836.nodeField = "value_changed"
connect836.protoField = "l_index_distal_changed"

IS833.connect.append(connect836)

OrientationInterpolator832.IS = IS833

ProtoBody603.children.append(OrientationInterpolator832)
ROUTE837 = x3d.ROUTE()
ROUTE837.fromField = "fraction_changed"
ROUTE837.fromNode = "BehaviorClock"
ROUTE837.toField = "set_fraction"
ROUTE837.toNode = "l_index_distal_OI"

ProtoBody603.children.append(ROUTE837)
OrientationInterpolator838 = x3d.OrientationInterpolator()
OrientationInterpolator838.DEF = "l_index_metacarpal_OI"
IS839 = x3d.IS()
connect840 = x3d.connect()
connect840.nodeField = "key"
connect840.protoField = "l_index_metacarpal_key"

IS839.connect.append(connect840)
connect841 = x3d.connect()
connect841.nodeField = "keyValue"
connect841.protoField = "l_index_metacarpal_keyValue"

IS839.connect.append(connect841)
connect842 = x3d.connect()
connect842.nodeField = "value_changed"
connect842.protoField = "l_index_metacarpal_changed"

IS839.connect.append(connect842)

OrientationInterpolator838.IS = IS839

ProtoBody603.children.append(OrientationInterpolator838)
ROUTE843 = x3d.ROUTE()
ROUTE843.fromField = "fraction_changed"
ROUTE843.fromNode = "BehaviorClock"
ROUTE843.toField = "set_fraction"
ROUTE843.toNode = "l_index_metacarpal_OI"

ProtoBody603.children.append(ROUTE843)
OrientationInterpolator844 = x3d.OrientationInterpolator()
OrientationInterpolator844.DEF = "l_index_middle_OI"
IS845 = x3d.IS()
connect846 = x3d.connect()
connect846.nodeField = "key"
connect846.protoField = "l_index_middle_key"

IS845.connect.append(connect846)
connect847 = x3d.connect()
connect847.nodeField = "keyValue"
connect847.protoField = "l_index_middle_keyValue"

IS845.connect.append(connect847)
connect848 = x3d.connect()
connect848.nodeField = "value_changed"
connect848.protoField = "l_index_middle_changed"

IS845.connect.append(connect848)

OrientationInterpolator844.IS = IS845

ProtoBody603.children.append(OrientationInterpolator844)
ROUTE849 = x3d.ROUTE()
ROUTE849.fromField = "fraction_changed"
ROUTE849.fromNode = "BehaviorClock"
ROUTE849.toField = "set_fraction"
ROUTE849.toNode = "l_index_middle_OI"

ProtoBody603.children.append(ROUTE849)
OrientationInterpolator850 = x3d.OrientationInterpolator()
OrientationInterpolator850.DEF = "l_index_proximal_OI"
IS851 = x3d.IS()
connect852 = x3d.connect()
connect852.nodeField = "key"
connect852.protoField = "l_index_proximal_key"

IS851.connect.append(connect852)
connect853 = x3d.connect()
connect853.nodeField = "keyValue"
connect853.protoField = "l_index_proximal_keyValue"

IS851.connect.append(connect853)
connect854 = x3d.connect()
connect854.nodeField = "value_changed"
connect854.protoField = "l_index_proximal_changed"

IS851.connect.append(connect854)

OrientationInterpolator850.IS = IS851

ProtoBody603.children.append(OrientationInterpolator850)
ROUTE855 = x3d.ROUTE()
ROUTE855.fromField = "fraction_changed"
ROUTE855.fromNode = "BehaviorClock"
ROUTE855.toField = "set_fraction"
ROUTE855.toNode = "l_index_proximal_OI"

ProtoBody603.children.append(ROUTE855)
OrientationInterpolator856 = x3d.OrientationInterpolator()
OrientationInterpolator856.DEF = "l_knee_OI"
IS857 = x3d.IS()
connect858 = x3d.connect()
connect858.nodeField = "key"
connect858.protoField = "l_knee_key"

IS857.connect.append(connect858)
connect859 = x3d.connect()
connect859.nodeField = "keyValue"
connect859.protoField = "l_knee_keyValue"

IS857.connect.append(connect859)
connect860 = x3d.connect()
connect860.nodeField = "value_changed"
connect860.protoField = "l_knee_changed"

IS857.connect.append(connect860)

OrientationInterpolator856.IS = IS857

ProtoBody603.children.append(OrientationInterpolator856)
ROUTE861 = x3d.ROUTE()
ROUTE861.fromField = "fraction_changed"
ROUTE861.fromNode = "BehaviorClock"
ROUTE861.toField = "set_fraction"
ROUTE861.toNode = "l_knee_OI"

ProtoBody603.children.append(ROUTE861)
OrientationInterpolator862 = x3d.OrientationInterpolator()
OrientationInterpolator862.DEF = "l_metatarsal_OI"
IS863 = x3d.IS()
connect864 = x3d.connect()
connect864.nodeField = "key"
connect864.protoField = "l_metatarsal_key"

IS863.connect.append(connect864)
connect865 = x3d.connect()
connect865.nodeField = "keyValue"
connect865.protoField = "l_metatarsal_keyValue"

IS863.connect.append(connect865)
connect866 = x3d.connect()
connect866.nodeField = "value_changed"
connect866.protoField = "l_metatarsal_changed"

IS863.connect.append(connect866)

OrientationInterpolator862.IS = IS863

ProtoBody603.children.append(OrientationInterpolator862)
ROUTE867 = x3d.ROUTE()
ROUTE867.fromField = "fraction_changed"
ROUTE867.fromNode = "BehaviorClock"
ROUTE867.toField = "set_fraction"
ROUTE867.toNode = "l_metatarsal_OI"

ProtoBody603.children.append(ROUTE867)
OrientationInterpolator868 = x3d.OrientationInterpolator()
OrientationInterpolator868.DEF = "l_middistal_OI"
IS869 = x3d.IS()
connect870 = x3d.connect()
connect870.nodeField = "key"
connect870.protoField = "l_middistal_key"

IS869.connect.append(connect870)
connect871 = x3d.connect()
connect871.nodeField = "keyValue"
connect871.protoField = "l_middistal_keyValue"

IS869.connect.append(connect871)
connect872 = x3d.connect()
connect872.nodeField = "value_changed"
connect872.protoField = "l_middistal_changed"

IS869.connect.append(connect872)

OrientationInterpolator868.IS = IS869

ProtoBody603.children.append(OrientationInterpolator868)
ROUTE873 = x3d.ROUTE()
ROUTE873.fromField = "fraction_changed"
ROUTE873.fromNode = "BehaviorClock"
ROUTE873.toField = "set_fraction"
ROUTE873.toNode = "l_middistal_OI"

ProtoBody603.children.append(ROUTE873)
OrientationInterpolator874 = x3d.OrientationInterpolator()
OrientationInterpolator874.DEF = "l_middle0_OI"
IS875 = x3d.IS()
connect876 = x3d.connect()
connect876.nodeField = "key"
connect876.protoField = "l_middle0_key"

IS875.connect.append(connect876)
connect877 = x3d.connect()
connect877.nodeField = "keyValue"
connect877.protoField = "l_middle0_keyValue"

IS875.connect.append(connect877)
connect878 = x3d.connect()
connect878.nodeField = "value_changed"
connect878.protoField = "l_middle0_changed"

IS875.connect.append(connect878)

OrientationInterpolator874.IS = IS875

ProtoBody603.children.append(OrientationInterpolator874)
ROUTE879 = x3d.ROUTE()
ROUTE879.fromField = "fraction_changed"
ROUTE879.fromNode = "BehaviorClock"
ROUTE879.toField = "set_fraction"
ROUTE879.toNode = "l_middle0_OI"

ProtoBody603.children.append(ROUTE879)
OrientationInterpolator880 = x3d.OrientationInterpolator()
OrientationInterpolator880.DEF = "l_middle1_OI"
IS881 = x3d.IS()
connect882 = x3d.connect()
connect882.nodeField = "key"
connect882.protoField = "l_middle1_key"

IS881.connect.append(connect882)
connect883 = x3d.connect()
connect883.nodeField = "keyValue"
connect883.protoField = "l_middle1_keyValue"

IS881.connect.append(connect883)
connect884 = x3d.connect()
connect884.nodeField = "value_changed"
connect884.protoField = "l_middle1_changed"

IS881.connect.append(connect884)

OrientationInterpolator880.IS = IS881

ProtoBody603.children.append(OrientationInterpolator880)
ROUTE885 = x3d.ROUTE()
ROUTE885.fromField = "fraction_changed"
ROUTE885.fromNode = "BehaviorClock"
ROUTE885.toField = "set_fraction"
ROUTE885.toNode = "l_middle1_OI"

ProtoBody603.children.append(ROUTE885)
OrientationInterpolator886 = x3d.OrientationInterpolator()
OrientationInterpolator886.DEF = "l_middle2_OI"
IS887 = x3d.IS()
connect888 = x3d.connect()
connect888.nodeField = "key"
connect888.protoField = "l_middle2_key"

IS887.connect.append(connect888)
connect889 = x3d.connect()
connect889.nodeField = "keyValue"
connect889.protoField = "l_middle2_keyValue"

IS887.connect.append(connect889)
connect890 = x3d.connect()
connect890.nodeField = "value_changed"
connect890.protoField = "l_middle2_changed"

IS887.connect.append(connect890)

OrientationInterpolator886.IS = IS887

ProtoBody603.children.append(OrientationInterpolator886)
ROUTE891 = x3d.ROUTE()
ROUTE891.fromField = "fraction_changed"
ROUTE891.fromNode = "BehaviorClock"
ROUTE891.toField = "set_fraction"
ROUTE891.toNode = "l_middle2_OI"

ProtoBody603.children.append(ROUTE891)
OrientationInterpolator892 = x3d.OrientationInterpolator()
OrientationInterpolator892.DEF = "l_middle3_OI"
IS893 = x3d.IS()
connect894 = x3d.connect()
connect894.nodeField = "key"
connect894.protoField = "l_middle3_key"

IS893.connect.append(connect894)
connect895 = x3d.connect()
connect895.nodeField = "keyValue"
connect895.protoField = "l_middle3_keyValue"

IS893.connect.append(connect895)
connect896 = x3d.connect()
connect896.nodeField = "value_changed"
connect896.protoField = "l_middle3_changed"

IS893.connect.append(connect896)

OrientationInterpolator892.IS = IS893

ProtoBody603.children.append(OrientationInterpolator892)
ROUTE897 = x3d.ROUTE()
ROUTE897.fromField = "fraction_changed"
ROUTE897.fromNode = "BehaviorClock"
ROUTE897.toField = "set_fraction"
ROUTE897.toNode = "l_middle3_OI"

ProtoBody603.children.append(ROUTE897)
OrientationInterpolator898 = x3d.OrientationInterpolator()
OrientationInterpolator898.DEF = "l_middle_distal_OI"
IS899 = x3d.IS()
connect900 = x3d.connect()
connect900.nodeField = "key"
connect900.protoField = "l_middle_distal_key"

IS899.connect.append(connect900)
connect901 = x3d.connect()
connect901.nodeField = "keyValue"
connect901.protoField = "l_middle_distal_keyValue"

IS899.connect.append(connect901)
connect902 = x3d.connect()
connect902.nodeField = "value_changed"
connect902.protoField = "l_middle_distal_changed"

IS899.connect.append(connect902)

OrientationInterpolator898.IS = IS899

ProtoBody603.children.append(OrientationInterpolator898)
ROUTE903 = x3d.ROUTE()
ROUTE903.fromField = "fraction_changed"
ROUTE903.fromNode = "BehaviorClock"
ROUTE903.toField = "set_fraction"
ROUTE903.toNode = "l_middle_distal_OI"

ProtoBody603.children.append(ROUTE903)
OrientationInterpolator904 = x3d.OrientationInterpolator()
OrientationInterpolator904.DEF = "l_middle_metacarpal_OI"
IS905 = x3d.IS()
connect906 = x3d.connect()
connect906.nodeField = "key"
connect906.protoField = "l_middle_metacarpal_key"

IS905.connect.append(connect906)
connect907 = x3d.connect()
connect907.nodeField = "keyValue"
connect907.protoField = "l_middle_metacarpal_keyValue"

IS905.connect.append(connect907)
connect908 = x3d.connect()
connect908.nodeField = "value_changed"
connect908.protoField = "l_middle_metacarpal_changed"

IS905.connect.append(connect908)

OrientationInterpolator904.IS = IS905

ProtoBody603.children.append(OrientationInterpolator904)
ROUTE909 = x3d.ROUTE()
ROUTE909.fromField = "fraction_changed"
ROUTE909.fromNode = "BehaviorClock"
ROUTE909.toField = "set_fraction"
ROUTE909.toNode = "l_middle_metacarpal_OI"

ProtoBody603.children.append(ROUTE909)
OrientationInterpolator910 = x3d.OrientationInterpolator()
OrientationInterpolator910.DEF = "l_middle_middle_OI"
IS911 = x3d.IS()
connect912 = x3d.connect()
connect912.nodeField = "key"
connect912.protoField = "l_middle_middle_key"

IS911.connect.append(connect912)
connect913 = x3d.connect()
connect913.nodeField = "keyValue"
connect913.protoField = "l_middle_middle_keyValue"

IS911.connect.append(connect913)
connect914 = x3d.connect()
connect914.nodeField = "value_changed"
connect914.protoField = "l_middle_middle_changed"

IS911.connect.append(connect914)

OrientationInterpolator910.IS = IS911

ProtoBody603.children.append(OrientationInterpolator910)
ROUTE915 = x3d.ROUTE()
ROUTE915.fromField = "fraction_changed"
ROUTE915.fromNode = "BehaviorClock"
ROUTE915.toField = "set_fraction"
ROUTE915.toNode = "l_middle_middle_OI"

ProtoBody603.children.append(ROUTE915)
OrientationInterpolator916 = x3d.OrientationInterpolator()
OrientationInterpolator916.DEF = "l_middle_proximal_OI"
IS917 = x3d.IS()
connect918 = x3d.connect()
connect918.nodeField = "key"
connect918.protoField = "l_middle_proximal_key"

IS917.connect.append(connect918)
connect919 = x3d.connect()
connect919.nodeField = "keyValue"
connect919.protoField = "l_middle_proximal_keyValue"

IS917.connect.append(connect919)
connect920 = x3d.connect()
connect920.nodeField = "value_changed"
connect920.protoField = "l_middle_proximal_changed"

IS917.connect.append(connect920)

OrientationInterpolator916.IS = IS917

ProtoBody603.children.append(OrientationInterpolator916)
ROUTE921 = x3d.ROUTE()
ROUTE921.fromField = "fraction_changed"
ROUTE921.fromNode = "BehaviorClock"
ROUTE921.toField = "set_fraction"
ROUTE921.toNode = "l_middle_proximal_OI"

ProtoBody603.children.append(ROUTE921)
OrientationInterpolator922 = x3d.OrientationInterpolator()
OrientationInterpolator922.DEF = "l_midproximal_OI"
IS923 = x3d.IS()
connect924 = x3d.connect()
connect924.nodeField = "key"
connect924.protoField = "l_midproximal_key"

IS923.connect.append(connect924)
connect925 = x3d.connect()
connect925.nodeField = "keyValue"
connect925.protoField = "l_midproximal_keyValue"

IS923.connect.append(connect925)
connect926 = x3d.connect()
connect926.nodeField = "value_changed"
connect926.protoField = "l_midproximal_changed"

IS923.connect.append(connect926)

OrientationInterpolator922.IS = IS923

ProtoBody603.children.append(OrientationInterpolator922)
ROUTE927 = x3d.ROUTE()
ROUTE927.fromField = "fraction_changed"
ROUTE927.fromNode = "BehaviorClock"
ROUTE927.toField = "set_fraction"
ROUTE927.toNode = "l_midproximal_OI"

ProtoBody603.children.append(ROUTE927)
OrientationInterpolator928 = x3d.OrientationInterpolator()
OrientationInterpolator928.DEF = "l_midtarsal_OI"
IS929 = x3d.IS()
connect930 = x3d.connect()
connect930.nodeField = "key"
connect930.protoField = "l_midtarsal_key"

IS929.connect.append(connect930)
connect931 = x3d.connect()
connect931.nodeField = "keyValue"
connect931.protoField = "l_midtarsal_keyValue"

IS929.connect.append(connect931)
connect932 = x3d.connect()
connect932.nodeField = "value_changed"
connect932.protoField = "l_midtarsal_changed"

IS929.connect.append(connect932)

OrientationInterpolator928.IS = IS929

ProtoBody603.children.append(OrientationInterpolator928)
ROUTE933 = x3d.ROUTE()
ROUTE933.fromField = "fraction_changed"
ROUTE933.fromNode = "BehaviorClock"
ROUTE933.toField = "set_fraction"
ROUTE933.toNode = "l_midtarsal_OI"

ProtoBody603.children.append(ROUTE933)
OrientationInterpolator934 = x3d.OrientationInterpolator()
OrientationInterpolator934.DEF = "l_pinky0_OI"
IS935 = x3d.IS()
connect936 = x3d.connect()
connect936.nodeField = "key"
connect936.protoField = "l_pinky0_key"

IS935.connect.append(connect936)
connect937 = x3d.connect()
connect937.nodeField = "keyValue"
connect937.protoField = "l_pinky0_keyValue"

IS935.connect.append(connect937)
connect938 = x3d.connect()
connect938.nodeField = "value_changed"
connect938.protoField = "l_pinky0_changed"

IS935.connect.append(connect938)

OrientationInterpolator934.IS = IS935

ProtoBody603.children.append(OrientationInterpolator934)
ROUTE939 = x3d.ROUTE()
ROUTE939.fromField = "fraction_changed"
ROUTE939.fromNode = "BehaviorClock"
ROUTE939.toField = "set_fraction"
ROUTE939.toNode = "l_pinky0_OI"

ProtoBody603.children.append(ROUTE939)
OrientationInterpolator940 = x3d.OrientationInterpolator()
OrientationInterpolator940.DEF = "l_pinky1_OI"
IS941 = x3d.IS()
connect942 = x3d.connect()
connect942.nodeField = "key"
connect942.protoField = "l_pinky1_key"

IS941.connect.append(connect942)
connect943 = x3d.connect()
connect943.nodeField = "keyValue"
connect943.protoField = "l_pinky1_keyValue"

IS941.connect.append(connect943)
connect944 = x3d.connect()
connect944.nodeField = "value_changed"
connect944.protoField = "l_pinky1_changed"

IS941.connect.append(connect944)

OrientationInterpolator940.IS = IS941

ProtoBody603.children.append(OrientationInterpolator940)
ROUTE945 = x3d.ROUTE()
ROUTE945.fromField = "fraction_changed"
ROUTE945.fromNode = "BehaviorClock"
ROUTE945.toField = "set_fraction"
ROUTE945.toNode = "l_pinky1_OI"

ProtoBody603.children.append(ROUTE945)
OrientationInterpolator946 = x3d.OrientationInterpolator()
OrientationInterpolator946.DEF = "l_pinky2_OI"
IS947 = x3d.IS()
connect948 = x3d.connect()
connect948.nodeField = "key"
connect948.protoField = "l_pinky2_key"

IS947.connect.append(connect948)
connect949 = x3d.connect()
connect949.nodeField = "keyValue"
connect949.protoField = "l_pinky2_keyValue"

IS947.connect.append(connect949)
connect950 = x3d.connect()
connect950.nodeField = "value_changed"
connect950.protoField = "l_pinky2_changed"

IS947.connect.append(connect950)

OrientationInterpolator946.IS = IS947

ProtoBody603.children.append(OrientationInterpolator946)
ROUTE951 = x3d.ROUTE()
ROUTE951.fromField = "fraction_changed"
ROUTE951.fromNode = "BehaviorClock"
ROUTE951.toField = "set_fraction"
ROUTE951.toNode = "l_pinky2_OI"

ProtoBody603.children.append(ROUTE951)
OrientationInterpolator952 = x3d.OrientationInterpolator()
OrientationInterpolator952.DEF = "l_pinky3_OI"
IS953 = x3d.IS()
connect954 = x3d.connect()
connect954.nodeField = "key"
connect954.protoField = "l_pinky3_key"

IS953.connect.append(connect954)
connect955 = x3d.connect()
connect955.nodeField = "keyValue"
connect955.protoField = "l_pinky3_keyValue"

IS953.connect.append(connect955)
connect956 = x3d.connect()
connect956.nodeField = "value_changed"
connect956.protoField = "l_pinky3_changed"

IS953.connect.append(connect956)

OrientationInterpolator952.IS = IS953

ProtoBody603.children.append(OrientationInterpolator952)
ROUTE957 = x3d.ROUTE()
ROUTE957.fromField = "fraction_changed"
ROUTE957.fromNode = "BehaviorClock"
ROUTE957.toField = "set_fraction"
ROUTE957.toNode = "l_pinky3_OI"

ProtoBody603.children.append(ROUTE957)
OrientationInterpolator958 = x3d.OrientationInterpolator()
OrientationInterpolator958.DEF = "l_pinky_distal_OI"
IS959 = x3d.IS()
connect960 = x3d.connect()
connect960.nodeField = "key"
connect960.protoField = "l_pinky_distal_key"

IS959.connect.append(connect960)
connect961 = x3d.connect()
connect961.nodeField = "keyValue"
connect961.protoField = "l_pinky_distal_keyValue"

IS959.connect.append(connect961)
connect962 = x3d.connect()
connect962.nodeField = "value_changed"
connect962.protoField = "l_pinky_distal_changed"

IS959.connect.append(connect962)

OrientationInterpolator958.IS = IS959

ProtoBody603.children.append(OrientationInterpolator958)
ROUTE963 = x3d.ROUTE()
ROUTE963.fromField = "fraction_changed"
ROUTE963.fromNode = "BehaviorClock"
ROUTE963.toField = "set_fraction"
ROUTE963.toNode = "l_pinky_distal_OI"

ProtoBody603.children.append(ROUTE963)
OrientationInterpolator964 = x3d.OrientationInterpolator()
OrientationInterpolator964.DEF = "l_pinky_metacarpal_OI"
IS965 = x3d.IS()
connect966 = x3d.connect()
connect966.nodeField = "key"
connect966.protoField = "l_pinky_metacarpal_key"

IS965.connect.append(connect966)
connect967 = x3d.connect()
connect967.nodeField = "keyValue"
connect967.protoField = "l_pinky_metacarpal_keyValue"

IS965.connect.append(connect967)
connect968 = x3d.connect()
connect968.nodeField = "value_changed"
connect968.protoField = "l_pinky_metacarpal_changed"

IS965.connect.append(connect968)

OrientationInterpolator964.IS = IS965

ProtoBody603.children.append(OrientationInterpolator964)
ROUTE969 = x3d.ROUTE()
ROUTE969.fromField = "fraction_changed"
ROUTE969.fromNode = "BehaviorClock"
ROUTE969.toField = "set_fraction"
ROUTE969.toNode = "l_pinky_metacarpal_OI"

ProtoBody603.children.append(ROUTE969)
OrientationInterpolator970 = x3d.OrientationInterpolator()
OrientationInterpolator970.DEF = "l_pinky_middle_OI"
IS971 = x3d.IS()
connect972 = x3d.connect()
connect972.nodeField = "key"
connect972.protoField = "l_pinky_middle_key"

IS971.connect.append(connect972)
connect973 = x3d.connect()
connect973.nodeField = "keyValue"
connect973.protoField = "l_pinky_middle_keyValue"

IS971.connect.append(connect973)
connect974 = x3d.connect()
connect974.nodeField = "value_changed"
connect974.protoField = "l_pinky_middle_changed"

IS971.connect.append(connect974)

OrientationInterpolator970.IS = IS971

ProtoBody603.children.append(OrientationInterpolator970)
ROUTE975 = x3d.ROUTE()
ROUTE975.fromField = "fraction_changed"
ROUTE975.fromNode = "BehaviorClock"
ROUTE975.toField = "set_fraction"
ROUTE975.toNode = "l_pinky_middle_OI"

ProtoBody603.children.append(ROUTE975)
OrientationInterpolator976 = x3d.OrientationInterpolator()
OrientationInterpolator976.DEF = "l_pinky_proximal_OI"
IS977 = x3d.IS()
connect978 = x3d.connect()
connect978.nodeField = "key"
connect978.protoField = "l_pinky_proximal_key"

IS977.connect.append(connect978)
connect979 = x3d.connect()
connect979.nodeField = "keyValue"
connect979.protoField = "l_pinky_proximal_keyValue"

IS977.connect.append(connect979)
connect980 = x3d.connect()
connect980.nodeField = "value_changed"
connect980.protoField = "l_pinky_proximal_changed"

IS977.connect.append(connect980)

OrientationInterpolator976.IS = IS977

ProtoBody603.children.append(OrientationInterpolator976)
ROUTE981 = x3d.ROUTE()
ROUTE981.fromField = "fraction_changed"
ROUTE981.fromNode = "BehaviorClock"
ROUTE981.toField = "set_fraction"
ROUTE981.toNode = "l_pinky_proximal_OI"

ProtoBody603.children.append(ROUTE981)
OrientationInterpolator982 = x3d.OrientationInterpolator()
OrientationInterpolator982.DEF = "l_ring0_OI"
IS983 = x3d.IS()
connect984 = x3d.connect()
connect984.nodeField = "key"
connect984.protoField = "l_ring0_key"

IS983.connect.append(connect984)
connect985 = x3d.connect()
connect985.nodeField = "keyValue"
connect985.protoField = "l_ring0_keyValue"

IS983.connect.append(connect985)
connect986 = x3d.connect()
connect986.nodeField = "value_changed"
connect986.protoField = "l_ring0_changed"

IS983.connect.append(connect986)

OrientationInterpolator982.IS = IS983

ProtoBody603.children.append(OrientationInterpolator982)
ROUTE987 = x3d.ROUTE()
ROUTE987.fromField = "fraction_changed"
ROUTE987.fromNode = "BehaviorClock"
ROUTE987.toField = "set_fraction"
ROUTE987.toNode = "l_ring0_OI"

ProtoBody603.children.append(ROUTE987)
OrientationInterpolator988 = x3d.OrientationInterpolator()
OrientationInterpolator988.DEF = "l_ring1_OI"
IS989 = x3d.IS()
connect990 = x3d.connect()
connect990.nodeField = "key"
connect990.protoField = "l_ring1_key"

IS989.connect.append(connect990)
connect991 = x3d.connect()
connect991.nodeField = "keyValue"
connect991.protoField = "l_ring1_keyValue"

IS989.connect.append(connect991)
connect992 = x3d.connect()
connect992.nodeField = "value_changed"
connect992.protoField = "l_ring1_changed"

IS989.connect.append(connect992)

OrientationInterpolator988.IS = IS989

ProtoBody603.children.append(OrientationInterpolator988)
ROUTE993 = x3d.ROUTE()
ROUTE993.fromField = "fraction_changed"
ROUTE993.fromNode = "BehaviorClock"
ROUTE993.toField = "set_fraction"
ROUTE993.toNode = "l_ring1_OI"

ProtoBody603.children.append(ROUTE993)
OrientationInterpolator994 = x3d.OrientationInterpolator()
OrientationInterpolator994.DEF = "l_ring2_OI"
IS995 = x3d.IS()
connect996 = x3d.connect()
connect996.nodeField = "key"
connect996.protoField = "l_ring2_key"

IS995.connect.append(connect996)
connect997 = x3d.connect()
connect997.nodeField = "keyValue"
connect997.protoField = "l_ring2_keyValue"

IS995.connect.append(connect997)
connect998 = x3d.connect()
connect998.nodeField = "value_changed"
connect998.protoField = "l_ring2_changed"

IS995.connect.append(connect998)

OrientationInterpolator994.IS = IS995

ProtoBody603.children.append(OrientationInterpolator994)
ROUTE999 = x3d.ROUTE()
ROUTE999.fromField = "fraction_changed"
ROUTE999.fromNode = "BehaviorClock"
ROUTE999.toField = "set_fraction"
ROUTE999.toNode = "l_ring2_OI"

ProtoBody603.children.append(ROUTE999)
OrientationInterpolator1000 = x3d.OrientationInterpolator()
OrientationInterpolator1000.DEF = "l_ring3_OI"
IS1001 = x3d.IS()
connect1002 = x3d.connect()
connect1002.nodeField = "key"
connect1002.protoField = "l_ring3_key"

IS1001.connect.append(connect1002)
connect1003 = x3d.connect()
connect1003.nodeField = "keyValue"
connect1003.protoField = "l_ring3_keyValue"

IS1001.connect.append(connect1003)
connect1004 = x3d.connect()
connect1004.nodeField = "value_changed"
connect1004.protoField = "l_ring3_changed"

IS1001.connect.append(connect1004)

OrientationInterpolator1000.IS = IS1001

ProtoBody603.children.append(OrientationInterpolator1000)
ROUTE1005 = x3d.ROUTE()
ROUTE1005.fromField = "fraction_changed"
ROUTE1005.fromNode = "BehaviorClock"
ROUTE1005.toField = "set_fraction"
ROUTE1005.toNode = "l_ring3_OI"

ProtoBody603.children.append(ROUTE1005)
OrientationInterpolator1006 = x3d.OrientationInterpolator()
OrientationInterpolator1006.DEF = "l_ring_distal_OI"
IS1007 = x3d.IS()
connect1008 = x3d.connect()
connect1008.nodeField = "key"
connect1008.protoField = "l_ring_distal_key"

IS1007.connect.append(connect1008)
connect1009 = x3d.connect()
connect1009.nodeField = "keyValue"
connect1009.protoField = "l_ring_distal_keyValue"

IS1007.connect.append(connect1009)
connect1010 = x3d.connect()
connect1010.nodeField = "value_changed"
connect1010.protoField = "l_ring_distal_changed"

IS1007.connect.append(connect1010)

OrientationInterpolator1006.IS = IS1007

ProtoBody603.children.append(OrientationInterpolator1006)
ROUTE1011 = x3d.ROUTE()
ROUTE1011.fromField = "fraction_changed"
ROUTE1011.fromNode = "BehaviorClock"
ROUTE1011.toField = "set_fraction"
ROUTE1011.toNode = "l_ring_distal_OI"

ProtoBody603.children.append(ROUTE1011)
OrientationInterpolator1012 = x3d.OrientationInterpolator()
OrientationInterpolator1012.DEF = "l_ring_metacarpal_OI"
IS1013 = x3d.IS()
connect1014 = x3d.connect()
connect1014.nodeField = "key"
connect1014.protoField = "l_ring_metacarpal_key"

IS1013.connect.append(connect1014)
connect1015 = x3d.connect()
connect1015.nodeField = "keyValue"
connect1015.protoField = "l_ring_metacarpal_keyValue"

IS1013.connect.append(connect1015)
connect1016 = x3d.connect()
connect1016.nodeField = "value_changed"
connect1016.protoField = "l_ring_metacarpal_changed"

IS1013.connect.append(connect1016)

OrientationInterpolator1012.IS = IS1013

ProtoBody603.children.append(OrientationInterpolator1012)
ROUTE1017 = x3d.ROUTE()
ROUTE1017.fromField = "fraction_changed"
ROUTE1017.fromNode = "BehaviorClock"
ROUTE1017.toField = "set_fraction"
ROUTE1017.toNode = "l_ring_metacarpal_OI"

ProtoBody603.children.append(ROUTE1017)
OrientationInterpolator1018 = x3d.OrientationInterpolator()
OrientationInterpolator1018.DEF = "l_ring_middle_OI"
IS1019 = x3d.IS()
connect1020 = x3d.connect()
connect1020.nodeField = "key"
connect1020.protoField = "l_ring_middle_key"

IS1019.connect.append(connect1020)
connect1021 = x3d.connect()
connect1021.nodeField = "keyValue"
connect1021.protoField = "l_ring_middle_keyValue"

IS1019.connect.append(connect1021)
connect1022 = x3d.connect()
connect1022.nodeField = "value_changed"
connect1022.protoField = "l_ring_middle_changed"

IS1019.connect.append(connect1022)

OrientationInterpolator1018.IS = IS1019

ProtoBody603.children.append(OrientationInterpolator1018)
ROUTE1023 = x3d.ROUTE()
ROUTE1023.fromField = "fraction_changed"
ROUTE1023.fromNode = "BehaviorClock"
ROUTE1023.toField = "set_fraction"
ROUTE1023.toNode = "l_ring_middle_OI"

ProtoBody603.children.append(ROUTE1023)
OrientationInterpolator1024 = x3d.OrientationInterpolator()
OrientationInterpolator1024.DEF = "l_ring_proximal_OI"
IS1025 = x3d.IS()
connect1026 = x3d.connect()
connect1026.nodeField = "key"
connect1026.protoField = "l_ring_proximal_key"

IS1025.connect.append(connect1026)
connect1027 = x3d.connect()
connect1027.nodeField = "keyValue"
connect1027.protoField = "l_ring_proximal_keyValue"

IS1025.connect.append(connect1027)
connect1028 = x3d.connect()
connect1028.nodeField = "value_changed"
connect1028.protoField = "l_ring_proximal_changed"

IS1025.connect.append(connect1028)

OrientationInterpolator1024.IS = IS1025

ProtoBody603.children.append(OrientationInterpolator1024)
ROUTE1029 = x3d.ROUTE()
ROUTE1029.fromField = "fraction_changed"
ROUTE1029.fromNode = "BehaviorClock"
ROUTE1029.toField = "set_fraction"
ROUTE1029.toNode = "l_ring_proximal_OI"

ProtoBody603.children.append(ROUTE1029)
OrientationInterpolator1030 = x3d.OrientationInterpolator()
OrientationInterpolator1030.DEF = "l_scapula_OI"
IS1031 = x3d.IS()
connect1032 = x3d.connect()
connect1032.nodeField = "key"
connect1032.protoField = "l_scapula_key"

IS1031.connect.append(connect1032)
connect1033 = x3d.connect()
connect1033.nodeField = "keyValue"
connect1033.protoField = "l_scapula_keyValue"

IS1031.connect.append(connect1033)
connect1034 = x3d.connect()
connect1034.nodeField = "value_changed"
connect1034.protoField = "l_scapula_changed"

IS1031.connect.append(connect1034)

OrientationInterpolator1030.IS = IS1031

ProtoBody603.children.append(OrientationInterpolator1030)
ROUTE1035 = x3d.ROUTE()
ROUTE1035.fromField = "fraction_changed"
ROUTE1035.fromNode = "BehaviorClock"
ROUTE1035.toField = "set_fraction"
ROUTE1035.toNode = "l_scapula_OI"

ProtoBody603.children.append(ROUTE1035)
OrientationInterpolator1036 = x3d.OrientationInterpolator()
OrientationInterpolator1036.DEF = "l_shoulder_OI"
IS1037 = x3d.IS()
connect1038 = x3d.connect()
connect1038.nodeField = "key"
connect1038.protoField = "l_shoulder_key"

IS1037.connect.append(connect1038)
connect1039 = x3d.connect()
connect1039.nodeField = "keyValue"
connect1039.protoField = "l_shoulder_keyValue"

IS1037.connect.append(connect1039)
connect1040 = x3d.connect()
connect1040.nodeField = "value_changed"
connect1040.protoField = "l_shoulder_changed"

IS1037.connect.append(connect1040)

OrientationInterpolator1036.IS = IS1037

ProtoBody603.children.append(OrientationInterpolator1036)
ROUTE1041 = x3d.ROUTE()
ROUTE1041.fromField = "fraction_changed"
ROUTE1041.fromNode = "BehaviorClock"
ROUTE1041.toField = "set_fraction"
ROUTE1041.toNode = "l_shoulder_OI"

ProtoBody603.children.append(ROUTE1041)
OrientationInterpolator1042 = x3d.OrientationInterpolator()
OrientationInterpolator1042.DEF = "l_sternoclavicular_OI"
IS1043 = x3d.IS()
connect1044 = x3d.connect()
connect1044.nodeField = "key"
connect1044.protoField = "l_sternoclavicular_key"

IS1043.connect.append(connect1044)
connect1045 = x3d.connect()
connect1045.nodeField = "keyValue"
connect1045.protoField = "l_sternoclavicular_keyValue"

IS1043.connect.append(connect1045)
connect1046 = x3d.connect()
connect1046.nodeField = "value_changed"
connect1046.protoField = "l_sternoclavicular_changed"

IS1043.connect.append(connect1046)

OrientationInterpolator1042.IS = IS1043

ProtoBody603.children.append(OrientationInterpolator1042)
ROUTE1047 = x3d.ROUTE()
ROUTE1047.fromField = "fraction_changed"
ROUTE1047.fromNode = "BehaviorClock"
ROUTE1047.toField = "set_fraction"
ROUTE1047.toNode = "l_sternoclavicular_OI"

ProtoBody603.children.append(ROUTE1047)
OrientationInterpolator1048 = x3d.OrientationInterpolator()
OrientationInterpolator1048.DEF = "l_subtalar_OI"
IS1049 = x3d.IS()
connect1050 = x3d.connect()
connect1050.nodeField = "key"
connect1050.protoField = "l_subtalar_key"

IS1049.connect.append(connect1050)
connect1051 = x3d.connect()
connect1051.nodeField = "keyValue"
connect1051.protoField = "l_subtalar_keyValue"

IS1049.connect.append(connect1051)
connect1052 = x3d.connect()
connect1052.nodeField = "value_changed"
connect1052.protoField = "l_subtalar_changed"

IS1049.connect.append(connect1052)

OrientationInterpolator1048.IS = IS1049

ProtoBody603.children.append(OrientationInterpolator1048)
ROUTE1053 = x3d.ROUTE()
ROUTE1053.fromField = "fraction_changed"
ROUTE1053.fromNode = "BehaviorClock"
ROUTE1053.toField = "set_fraction"
ROUTE1053.toNode = "l_subtalar_OI"

ProtoBody603.children.append(ROUTE1053)
OrientationInterpolator1054 = x3d.OrientationInterpolator()
OrientationInterpolator1054.DEF = "l_thigh_OI"
IS1055 = x3d.IS()
connect1056 = x3d.connect()
connect1056.nodeField = "key"
connect1056.protoField = "l_thigh_key"

IS1055.connect.append(connect1056)
connect1057 = x3d.connect()
connect1057.nodeField = "keyValue"
connect1057.protoField = "l_thigh_keyValue"

IS1055.connect.append(connect1057)
connect1058 = x3d.connect()
connect1058.nodeField = "value_changed"
connect1058.protoField = "l_thigh_changed"

IS1055.connect.append(connect1058)

OrientationInterpolator1054.IS = IS1055

ProtoBody603.children.append(OrientationInterpolator1054)
ROUTE1059 = x3d.ROUTE()
ROUTE1059.fromField = "fraction_changed"
ROUTE1059.fromNode = "BehaviorClock"
ROUTE1059.toField = "set_fraction"
ROUTE1059.toNode = "l_thigh_OI"

ProtoBody603.children.append(ROUTE1059)
OrientationInterpolator1060 = x3d.OrientationInterpolator()
OrientationInterpolator1060.DEF = "l_thumb1_OI"
IS1061 = x3d.IS()
connect1062 = x3d.connect()
connect1062.nodeField = "key"
connect1062.protoField = "l_thumb1_key"

IS1061.connect.append(connect1062)
connect1063 = x3d.connect()
connect1063.nodeField = "keyValue"
connect1063.protoField = "l_thumb1_keyValue"

IS1061.connect.append(connect1063)
connect1064 = x3d.connect()
connect1064.nodeField = "value_changed"
connect1064.protoField = "l_thumb1_changed"

IS1061.connect.append(connect1064)

OrientationInterpolator1060.IS = IS1061

ProtoBody603.children.append(OrientationInterpolator1060)
ROUTE1065 = x3d.ROUTE()
ROUTE1065.fromField = "fraction_changed"
ROUTE1065.fromNode = "BehaviorClock"
ROUTE1065.toField = "set_fraction"
ROUTE1065.toNode = "l_thumb1_OI"

ProtoBody603.children.append(ROUTE1065)
OrientationInterpolator1066 = x3d.OrientationInterpolator()
OrientationInterpolator1066.DEF = "l_thumb2_OI"
IS1067 = x3d.IS()
connect1068 = x3d.connect()
connect1068.nodeField = "key"
connect1068.protoField = "l_thumb2_key"

IS1067.connect.append(connect1068)
connect1069 = x3d.connect()
connect1069.nodeField = "keyValue"
connect1069.protoField = "l_thumb2_keyValue"

IS1067.connect.append(connect1069)
connect1070 = x3d.connect()
connect1070.nodeField = "value_changed"
connect1070.protoField = "l_thumb2_changed"

IS1067.connect.append(connect1070)

OrientationInterpolator1066.IS = IS1067

ProtoBody603.children.append(OrientationInterpolator1066)
ROUTE1071 = x3d.ROUTE()
ROUTE1071.fromField = "fraction_changed"
ROUTE1071.fromNode = "BehaviorClock"
ROUTE1071.toField = "set_fraction"
ROUTE1071.toNode = "l_thumb2_OI"

ProtoBody603.children.append(ROUTE1071)
OrientationInterpolator1072 = x3d.OrientationInterpolator()
OrientationInterpolator1072.DEF = "l_thumb3_OI"
IS1073 = x3d.IS()
connect1074 = x3d.connect()
connect1074.nodeField = "key"
connect1074.protoField = "l_thumb3_key"

IS1073.connect.append(connect1074)
connect1075 = x3d.connect()
connect1075.nodeField = "keyValue"
connect1075.protoField = "l_thumb3_keyValue"

IS1073.connect.append(connect1075)
connect1076 = x3d.connect()
connect1076.nodeField = "value_changed"
connect1076.protoField = "l_thumb3_changed"

IS1073.connect.append(connect1076)

OrientationInterpolator1072.IS = IS1073

ProtoBody603.children.append(OrientationInterpolator1072)
ROUTE1077 = x3d.ROUTE()
ROUTE1077.fromField = "fraction_changed"
ROUTE1077.fromNode = "BehaviorClock"
ROUTE1077.toField = "set_fraction"
ROUTE1077.toNode = "l_thumb3_OI"

ProtoBody603.children.append(ROUTE1077)
OrientationInterpolator1078 = x3d.OrientationInterpolator()
OrientationInterpolator1078.DEF = "l_thumb_distal_OI"
IS1079 = x3d.IS()
connect1080 = x3d.connect()
connect1080.nodeField = "key"
connect1080.protoField = "l_thumb_distal_key"

IS1079.connect.append(connect1080)
connect1081 = x3d.connect()
connect1081.nodeField = "keyValue"
connect1081.protoField = "l_thumb_distal_keyValue"

IS1079.connect.append(connect1081)
connect1082 = x3d.connect()
connect1082.nodeField = "value_changed"
connect1082.protoField = "l_thumb_distal_changed"

IS1079.connect.append(connect1082)

OrientationInterpolator1078.IS = IS1079

ProtoBody603.children.append(OrientationInterpolator1078)
ROUTE1083 = x3d.ROUTE()
ROUTE1083.fromField = "fraction_changed"
ROUTE1083.fromNode = "BehaviorClock"
ROUTE1083.toField = "set_fraction"
ROUTE1083.toNode = "l_thumb_distal_OI"

ProtoBody603.children.append(ROUTE1083)
OrientationInterpolator1084 = x3d.OrientationInterpolator()
OrientationInterpolator1084.DEF = "l_thumb_metacarpal_OI"
IS1085 = x3d.IS()
connect1086 = x3d.connect()
connect1086.nodeField = "key"
connect1086.protoField = "l_thumb_metacarpal_key"

IS1085.connect.append(connect1086)
connect1087 = x3d.connect()
connect1087.nodeField = "keyValue"
connect1087.protoField = "l_thumb_metacarpal_keyValue"

IS1085.connect.append(connect1087)
connect1088 = x3d.connect()
connect1088.nodeField = "value_changed"
connect1088.protoField = "l_thumb_metacarpal_changed"

IS1085.connect.append(connect1088)

OrientationInterpolator1084.IS = IS1085

ProtoBody603.children.append(OrientationInterpolator1084)
ROUTE1089 = x3d.ROUTE()
ROUTE1089.fromField = "fraction_changed"
ROUTE1089.fromNode = "BehaviorClock"
ROUTE1089.toField = "set_fraction"
ROUTE1089.toNode = "l_thumb_metacarpal_OI"

ProtoBody603.children.append(ROUTE1089)
OrientationInterpolator1090 = x3d.OrientationInterpolator()
OrientationInterpolator1090.DEF = "l_thumb_proximal_OI"
IS1091 = x3d.IS()
connect1092 = x3d.connect()
connect1092.nodeField = "key"
connect1092.protoField = "l_thumb_proximal_key"

IS1091.connect.append(connect1092)
connect1093 = x3d.connect()
connect1093.nodeField = "keyValue"
connect1093.protoField = "l_thumb_proximal_keyValue"

IS1091.connect.append(connect1093)
connect1094 = x3d.connect()
connect1094.nodeField = "value_changed"
connect1094.protoField = "l_thumb_proximal_changed"

IS1091.connect.append(connect1094)

OrientationInterpolator1090.IS = IS1091

ProtoBody603.children.append(OrientationInterpolator1090)
ROUTE1095 = x3d.ROUTE()
ROUTE1095.fromField = "fraction_changed"
ROUTE1095.fromNode = "BehaviorClock"
ROUTE1095.toField = "set_fraction"
ROUTE1095.toNode = "l_thumb_proximal_OI"

ProtoBody603.children.append(ROUTE1095)
OrientationInterpolator1096 = x3d.OrientationInterpolator()
OrientationInterpolator1096.DEF = "l_upperarm_OI"
IS1097 = x3d.IS()
connect1098 = x3d.connect()
connect1098.nodeField = "key"
connect1098.protoField = "l_upperarm_key"

IS1097.connect.append(connect1098)
connect1099 = x3d.connect()
connect1099.nodeField = "keyValue"
connect1099.protoField = "l_upperarm_keyValue"

IS1097.connect.append(connect1099)
connect1100 = x3d.connect()
connect1100.nodeField = "value_changed"
connect1100.protoField = "l_upperarm_changed"

IS1097.connect.append(connect1100)

OrientationInterpolator1096.IS = IS1097

ProtoBody603.children.append(OrientationInterpolator1096)
ROUTE1101 = x3d.ROUTE()
ROUTE1101.fromField = "fraction_changed"
ROUTE1101.fromNode = "BehaviorClock"
ROUTE1101.toField = "set_fraction"
ROUTE1101.toNode = "l_upperarm_OI"

ProtoBody603.children.append(ROUTE1101)
OrientationInterpolator1102 = x3d.OrientationInterpolator()
OrientationInterpolator1102.DEF = "l_wrist_OI"
IS1103 = x3d.IS()
connect1104 = x3d.connect()
connect1104.nodeField = "key"
connect1104.protoField = "l_wrist_key"

IS1103.connect.append(connect1104)
connect1105 = x3d.connect()
connect1105.nodeField = "keyValue"
connect1105.protoField = "l_wrist_keyValue"

IS1103.connect.append(connect1105)
connect1106 = x3d.connect()
connect1106.nodeField = "value_changed"
connect1106.protoField = "l_wrist_changed"

IS1103.connect.append(connect1106)

OrientationInterpolator1102.IS = IS1103

ProtoBody603.children.append(OrientationInterpolator1102)
ROUTE1107 = x3d.ROUTE()
ROUTE1107.fromField = "fraction_changed"
ROUTE1107.fromNode = "BehaviorClock"
ROUTE1107.toField = "set_fraction"
ROUTE1107.toNode = "l_wrist_OI"

ProtoBody603.children.append(ROUTE1107)
OrientationInterpolator1108 = x3d.OrientationInterpolator()
OrientationInterpolator1108.DEF = "pelvis_OI"
IS1109 = x3d.IS()
connect1110 = x3d.connect()
connect1110.nodeField = "key"
connect1110.protoField = "pelvis_key"

IS1109.connect.append(connect1110)
connect1111 = x3d.connect()
connect1111.nodeField = "keyValue"
connect1111.protoField = "pelvis_keyValue"

IS1109.connect.append(connect1111)
connect1112 = x3d.connect()
connect1112.nodeField = "value_changed"
connect1112.protoField = "pelvis_changed"

IS1109.connect.append(connect1112)

OrientationInterpolator1108.IS = IS1109

ProtoBody603.children.append(OrientationInterpolator1108)
ROUTE1113 = x3d.ROUTE()
ROUTE1113.fromField = "fraction_changed"
ROUTE1113.fromNode = "BehaviorClock"
ROUTE1113.toField = "set_fraction"
ROUTE1113.toNode = "pelvis_OI"

ProtoBody603.children.append(ROUTE1113)
OrientationInterpolator1114 = x3d.OrientationInterpolator()
OrientationInterpolator1114.DEF = "r_acromioclavicular_OI"
IS1115 = x3d.IS()
connect1116 = x3d.connect()
connect1116.nodeField = "key"
connect1116.protoField = "r_acromioclavicular_key"

IS1115.connect.append(connect1116)
connect1117 = x3d.connect()
connect1117.nodeField = "keyValue"
connect1117.protoField = "r_acromioclavicular_keyValue"

IS1115.connect.append(connect1117)
connect1118 = x3d.connect()
connect1118.nodeField = "value_changed"
connect1118.protoField = "r_acromioclavicular_changed"

IS1115.connect.append(connect1118)

OrientationInterpolator1114.IS = IS1115

ProtoBody603.children.append(OrientationInterpolator1114)
ROUTE1119 = x3d.ROUTE()
ROUTE1119.fromField = "fraction_changed"
ROUTE1119.fromNode = "BehaviorClock"
ROUTE1119.toField = "set_fraction"
ROUTE1119.toNode = "r_acromioclavicular_OI"

ProtoBody603.children.append(ROUTE1119)
OrientationInterpolator1120 = x3d.OrientationInterpolator()
OrientationInterpolator1120.DEF = "r_ankle_OI"
IS1121 = x3d.IS()
connect1122 = x3d.connect()
connect1122.nodeField = "key"
connect1122.protoField = "r_ankle_key"

IS1121.connect.append(connect1122)
connect1123 = x3d.connect()
connect1123.nodeField = "keyValue"
connect1123.protoField = "r_ankle_keyValue"

IS1121.connect.append(connect1123)
connect1124 = x3d.connect()
connect1124.nodeField = "value_changed"
connect1124.protoField = "r_ankle_changed"

IS1121.connect.append(connect1124)

OrientationInterpolator1120.IS = IS1121

ProtoBody603.children.append(OrientationInterpolator1120)
ROUTE1125 = x3d.ROUTE()
ROUTE1125.fromField = "fraction_changed"
ROUTE1125.fromNode = "BehaviorClock"
ROUTE1125.toField = "set_fraction"
ROUTE1125.toNode = "r_ankle_OI"

ProtoBody603.children.append(ROUTE1125)
OrientationInterpolator1126 = x3d.OrientationInterpolator()
OrientationInterpolator1126.DEF = "r_calf_OI"
IS1127 = x3d.IS()
connect1128 = x3d.connect()
connect1128.nodeField = "key"
connect1128.protoField = "r_calf_key"

IS1127.connect.append(connect1128)
connect1129 = x3d.connect()
connect1129.nodeField = "keyValue"
connect1129.protoField = "r_calf_keyValue"

IS1127.connect.append(connect1129)
connect1130 = x3d.connect()
connect1130.nodeField = "value_changed"
connect1130.protoField = "r_calf_changed"

IS1127.connect.append(connect1130)

OrientationInterpolator1126.IS = IS1127

ProtoBody603.children.append(OrientationInterpolator1126)
ROUTE1131 = x3d.ROUTE()
ROUTE1131.fromField = "fraction_changed"
ROUTE1131.fromNode = "BehaviorClock"
ROUTE1131.toField = "set_fraction"
ROUTE1131.toNode = "r_calf_OI"

ProtoBody603.children.append(ROUTE1131)
OrientationInterpolator1132 = x3d.OrientationInterpolator()
OrientationInterpolator1132.DEF = "r_clavicle_OI"
IS1133 = x3d.IS()
connect1134 = x3d.connect()
connect1134.nodeField = "key"
connect1134.protoField = "r_clavicle_key"

IS1133.connect.append(connect1134)
connect1135 = x3d.connect()
connect1135.nodeField = "keyValue"
connect1135.protoField = "r_clavicle_keyValue"

IS1133.connect.append(connect1135)
connect1136 = x3d.connect()
connect1136.nodeField = "value_changed"
connect1136.protoField = "r_clavicle_changed"

IS1133.connect.append(connect1136)

OrientationInterpolator1132.IS = IS1133

ProtoBody603.children.append(OrientationInterpolator1132)
ROUTE1137 = x3d.ROUTE()
ROUTE1137.fromField = "fraction_changed"
ROUTE1137.fromNode = "BehaviorClock"
ROUTE1137.toField = "set_fraction"
ROUTE1137.toNode = "r_clavicle_OI"

ProtoBody603.children.append(ROUTE1137)
OrientationInterpolator1138 = x3d.OrientationInterpolator()
OrientationInterpolator1138.DEF = "r_elbow_OI"
IS1139 = x3d.IS()
connect1140 = x3d.connect()
connect1140.nodeField = "key"
connect1140.protoField = "r_elbow_key"

IS1139.connect.append(connect1140)
connect1141 = x3d.connect()
connect1141.nodeField = "keyValue"
connect1141.protoField = "r_elbow_keyValue"

IS1139.connect.append(connect1141)
connect1142 = x3d.connect()
connect1142.nodeField = "value_changed"
connect1142.protoField = "r_elbow_changed"

IS1139.connect.append(connect1142)

OrientationInterpolator1138.IS = IS1139

ProtoBody603.children.append(OrientationInterpolator1138)
ROUTE1143 = x3d.ROUTE()
ROUTE1143.fromField = "fraction_changed"
ROUTE1143.fromNode = "BehaviorClock"
ROUTE1143.toField = "set_fraction"
ROUTE1143.toNode = "r_elbow_OI"

ProtoBody603.children.append(ROUTE1143)
OrientationInterpolator1144 = x3d.OrientationInterpolator()
OrientationInterpolator1144.DEF = "r_eyeball_OI"
IS1145 = x3d.IS()
connect1146 = x3d.connect()
connect1146.nodeField = "key"
connect1146.protoField = "r_eyeball_key"

IS1145.connect.append(connect1146)
connect1147 = x3d.connect()
connect1147.nodeField = "keyValue"
connect1147.protoField = "r_eyeball_keyValue"

IS1145.connect.append(connect1147)
connect1148 = x3d.connect()
connect1148.nodeField = "value_changed"
connect1148.protoField = "r_eyeball_changed"

IS1145.connect.append(connect1148)

OrientationInterpolator1144.IS = IS1145

ProtoBody603.children.append(OrientationInterpolator1144)
ROUTE1149 = x3d.ROUTE()
ROUTE1149.fromField = "fraction_changed"
ROUTE1149.fromNode = "BehaviorClock"
ROUTE1149.toField = "set_fraction"
ROUTE1149.toNode = "r_eyeball_OI"

ProtoBody603.children.append(ROUTE1149)
OrientationInterpolator1150 = x3d.OrientationInterpolator()
OrientationInterpolator1150.DEF = "r_eyeball_joint_OI"
IS1151 = x3d.IS()
connect1152 = x3d.connect()
connect1152.nodeField = "key"
connect1152.protoField = "r_eyeball_joint_key"

IS1151.connect.append(connect1152)
connect1153 = x3d.connect()
connect1153.nodeField = "keyValue"
connect1153.protoField = "r_eyeball_joint_keyValue"

IS1151.connect.append(connect1153)
connect1154 = x3d.connect()
connect1154.nodeField = "value_changed"
connect1154.protoField = "r_eyeball_joint_changed"

IS1151.connect.append(connect1154)

OrientationInterpolator1150.IS = IS1151

ProtoBody603.children.append(OrientationInterpolator1150)
ROUTE1155 = x3d.ROUTE()
ROUTE1155.fromField = "fraction_changed"
ROUTE1155.fromNode = "BehaviorClock"
ROUTE1155.toField = "set_fraction"
ROUTE1155.toNode = "r_eyeball_joint_OI"

ProtoBody603.children.append(ROUTE1155)
OrientationInterpolator1156 = x3d.OrientationInterpolator()
OrientationInterpolator1156.DEF = "r_eyebrow_OI"
IS1157 = x3d.IS()
connect1158 = x3d.connect()
connect1158.nodeField = "key"
connect1158.protoField = "r_eyebrow_key"

IS1157.connect.append(connect1158)
connect1159 = x3d.connect()
connect1159.nodeField = "keyValue"
connect1159.protoField = "r_eyebrow_keyValue"

IS1157.connect.append(connect1159)
connect1160 = x3d.connect()
connect1160.nodeField = "value_changed"
connect1160.protoField = "r_eyebrow_changed"

IS1157.connect.append(connect1160)

OrientationInterpolator1156.IS = IS1157

ProtoBody603.children.append(OrientationInterpolator1156)
ROUTE1161 = x3d.ROUTE()
ROUTE1161.fromField = "fraction_changed"
ROUTE1161.fromNode = "BehaviorClock"
ROUTE1161.toField = "set_fraction"
ROUTE1161.toNode = "r_eyebrow_OI"

ProtoBody603.children.append(ROUTE1161)
OrientationInterpolator1162 = x3d.OrientationInterpolator()
OrientationInterpolator1162.DEF = "r_eyebrow_joint_OI"
IS1163 = x3d.IS()
connect1164 = x3d.connect()
connect1164.nodeField = "key"
connect1164.protoField = "r_eyebrow_joint_key"

IS1163.connect.append(connect1164)
connect1165 = x3d.connect()
connect1165.nodeField = "keyValue"
connect1165.protoField = "r_eyebrow_joint_keyValue"

IS1163.connect.append(connect1165)
connect1166 = x3d.connect()
connect1166.nodeField = "value_changed"
connect1166.protoField = "r_eyebrow_joint_changed"

IS1163.connect.append(connect1166)

OrientationInterpolator1162.IS = IS1163

ProtoBody603.children.append(OrientationInterpolator1162)
ROUTE1167 = x3d.ROUTE()
ROUTE1167.fromField = "fraction_changed"
ROUTE1167.fromNode = "BehaviorClock"
ROUTE1167.toField = "set_fraction"
ROUTE1167.toNode = "r_eyebrow_joint_OI"

ProtoBody603.children.append(ROUTE1167)
OrientationInterpolator1168 = x3d.OrientationInterpolator()
OrientationInterpolator1168.DEF = "r_eyelid_OI"
IS1169 = x3d.IS()
connect1170 = x3d.connect()
connect1170.nodeField = "key"
connect1170.protoField = "r_eyelid_key"

IS1169.connect.append(connect1170)
connect1171 = x3d.connect()
connect1171.nodeField = "keyValue"
connect1171.protoField = "r_eyelid_keyValue"

IS1169.connect.append(connect1171)
connect1172 = x3d.connect()
connect1172.nodeField = "value_changed"
connect1172.protoField = "r_eyelid_changed"

IS1169.connect.append(connect1172)

OrientationInterpolator1168.IS = IS1169

ProtoBody603.children.append(OrientationInterpolator1168)
ROUTE1173 = x3d.ROUTE()
ROUTE1173.fromField = "fraction_changed"
ROUTE1173.fromNode = "BehaviorClock"
ROUTE1173.toField = "set_fraction"
ROUTE1173.toNode = "r_eyelid_OI"

ProtoBody603.children.append(ROUTE1173)
OrientationInterpolator1174 = x3d.OrientationInterpolator()
OrientationInterpolator1174.DEF = "r_eyelid_joint_OI"
IS1175 = x3d.IS()
connect1176 = x3d.connect()
connect1176.nodeField = "key"
connect1176.protoField = "r_eyelid_joint_key"

IS1175.connect.append(connect1176)
connect1177 = x3d.connect()
connect1177.nodeField = "keyValue"
connect1177.protoField = "r_eyelid_joint_keyValue"

IS1175.connect.append(connect1177)
connect1178 = x3d.connect()
connect1178.nodeField = "value_changed"
connect1178.protoField = "r_eyelid_joint_changed"

IS1175.connect.append(connect1178)

OrientationInterpolator1174.IS = IS1175

ProtoBody603.children.append(OrientationInterpolator1174)
ROUTE1179 = x3d.ROUTE()
ROUTE1179.fromField = "fraction_changed"
ROUTE1179.fromNode = "BehaviorClock"
ROUTE1179.toField = "set_fraction"
ROUTE1179.toNode = "r_eyelid_joint_OI"

ProtoBody603.children.append(ROUTE1179)
OrientationInterpolator1180 = x3d.OrientationInterpolator()
OrientationInterpolator1180.DEF = "r_forearm_OI"
IS1181 = x3d.IS()
connect1182 = x3d.connect()
connect1182.nodeField = "key"
connect1182.protoField = "r_forearm_key"

IS1181.connect.append(connect1182)
connect1183 = x3d.connect()
connect1183.nodeField = "keyValue"
connect1183.protoField = "r_forearm_keyValue"

IS1181.connect.append(connect1183)
connect1184 = x3d.connect()
connect1184.nodeField = "value_changed"
connect1184.protoField = "r_forearm_changed"

IS1181.connect.append(connect1184)

OrientationInterpolator1180.IS = IS1181

ProtoBody603.children.append(OrientationInterpolator1180)
ROUTE1185 = x3d.ROUTE()
ROUTE1185.fromField = "fraction_changed"
ROUTE1185.fromNode = "BehaviorClock"
ROUTE1185.toField = "set_fraction"
ROUTE1185.toNode = "r_forearm_OI"

ProtoBody603.children.append(ROUTE1185)
OrientationInterpolator1186 = x3d.OrientationInterpolator()
OrientationInterpolator1186.DEF = "r_forefoot_OI"
IS1187 = x3d.IS()
connect1188 = x3d.connect()
connect1188.nodeField = "key"
connect1188.protoField = "r_forefoot_key"

IS1187.connect.append(connect1188)
connect1189 = x3d.connect()
connect1189.nodeField = "keyValue"
connect1189.protoField = "r_forefoot_keyValue"

IS1187.connect.append(connect1189)
connect1190 = x3d.connect()
connect1190.nodeField = "value_changed"
connect1190.protoField = "r_forefoot_changed"

IS1187.connect.append(connect1190)

OrientationInterpolator1186.IS = IS1187

ProtoBody603.children.append(OrientationInterpolator1186)
ROUTE1191 = x3d.ROUTE()
ROUTE1191.fromField = "fraction_changed"
ROUTE1191.fromNode = "BehaviorClock"
ROUTE1191.toField = "set_fraction"
ROUTE1191.toNode = "r_forefoot_OI"

ProtoBody603.children.append(ROUTE1191)
OrientationInterpolator1192 = x3d.OrientationInterpolator()
OrientationInterpolator1192.DEF = "r_hand_OI"
IS1193 = x3d.IS()
connect1194 = x3d.connect()
connect1194.nodeField = "key"
connect1194.protoField = "r_hand_key"

IS1193.connect.append(connect1194)
connect1195 = x3d.connect()
connect1195.nodeField = "keyValue"
connect1195.protoField = "r_hand_keyValue"

IS1193.connect.append(connect1195)
connect1196 = x3d.connect()
connect1196.nodeField = "value_changed"
connect1196.protoField = "r_hand_changed"

IS1193.connect.append(connect1196)

OrientationInterpolator1192.IS = IS1193

ProtoBody603.children.append(OrientationInterpolator1192)
ROUTE1197 = x3d.ROUTE()
ROUTE1197.fromField = "fraction_changed"
ROUTE1197.fromNode = "BehaviorClock"
ROUTE1197.toField = "set_fraction"
ROUTE1197.toNode = "r_hand_OI"

ProtoBody603.children.append(ROUTE1197)
OrientationInterpolator1198 = x3d.OrientationInterpolator()
OrientationInterpolator1198.DEF = "r_hindfoot_OI"
IS1199 = x3d.IS()
connect1200 = x3d.connect()
connect1200.nodeField = "key"
connect1200.protoField = "r_hindfoot_key"

IS1199.connect.append(connect1200)
connect1201 = x3d.connect()
connect1201.nodeField = "keyValue"
connect1201.protoField = "r_hindfoot_keyValue"

IS1199.connect.append(connect1201)
connect1202 = x3d.connect()
connect1202.nodeField = "value_changed"
connect1202.protoField = "r_hindfoot_changed"

IS1199.connect.append(connect1202)

OrientationInterpolator1198.IS = IS1199

ProtoBody603.children.append(OrientationInterpolator1198)
ROUTE1203 = x3d.ROUTE()
ROUTE1203.fromField = "fraction_changed"
ROUTE1203.fromNode = "BehaviorClock"
ROUTE1203.toField = "set_fraction"
ROUTE1203.toNode = "r_hindfoot_OI"

ProtoBody603.children.append(ROUTE1203)
OrientationInterpolator1204 = x3d.OrientationInterpolator()
OrientationInterpolator1204.DEF = "r_hip_OI"
IS1205 = x3d.IS()
connect1206 = x3d.connect()
connect1206.nodeField = "key"
connect1206.protoField = "r_hip_key"

IS1205.connect.append(connect1206)
connect1207 = x3d.connect()
connect1207.nodeField = "keyValue"
connect1207.protoField = "r_hip_keyValue"

IS1205.connect.append(connect1207)
connect1208 = x3d.connect()
connect1208.nodeField = "value_changed"
connect1208.protoField = "r_hip_changed"

IS1205.connect.append(connect1208)

OrientationInterpolator1204.IS = IS1205

ProtoBody603.children.append(OrientationInterpolator1204)
ROUTE1209 = x3d.ROUTE()
ROUTE1209.fromField = "fraction_changed"
ROUTE1209.fromNode = "BehaviorClock"
ROUTE1209.toField = "set_fraction"
ROUTE1209.toNode = "r_hip_OI"

ProtoBody603.children.append(ROUTE1209)
OrientationInterpolator1210 = x3d.OrientationInterpolator()
OrientationInterpolator1210.DEF = "r_index0_OI"
IS1211 = x3d.IS()
connect1212 = x3d.connect()
connect1212.nodeField = "key"
connect1212.protoField = "r_index0_key"

IS1211.connect.append(connect1212)
connect1213 = x3d.connect()
connect1213.nodeField = "keyValue"
connect1213.protoField = "r_index0_keyValue"

IS1211.connect.append(connect1213)
connect1214 = x3d.connect()
connect1214.nodeField = "value_changed"
connect1214.protoField = "r_index0_changed"

IS1211.connect.append(connect1214)

OrientationInterpolator1210.IS = IS1211

ProtoBody603.children.append(OrientationInterpolator1210)
ROUTE1215 = x3d.ROUTE()
ROUTE1215.fromField = "fraction_changed"
ROUTE1215.fromNode = "BehaviorClock"
ROUTE1215.toField = "set_fraction"
ROUTE1215.toNode = "r_index0_OI"

ProtoBody603.children.append(ROUTE1215)
OrientationInterpolator1216 = x3d.OrientationInterpolator()
OrientationInterpolator1216.DEF = "r_index1_OI"
IS1217 = x3d.IS()
connect1218 = x3d.connect()
connect1218.nodeField = "key"
connect1218.protoField = "r_index1_key"

IS1217.connect.append(connect1218)
connect1219 = x3d.connect()
connect1219.nodeField = "keyValue"
connect1219.protoField = "r_index1_keyValue"

IS1217.connect.append(connect1219)
connect1220 = x3d.connect()
connect1220.nodeField = "value_changed"
connect1220.protoField = "r_index1_changed"

IS1217.connect.append(connect1220)

OrientationInterpolator1216.IS = IS1217

ProtoBody603.children.append(OrientationInterpolator1216)
ROUTE1221 = x3d.ROUTE()
ROUTE1221.fromField = "fraction_changed"
ROUTE1221.fromNode = "BehaviorClock"
ROUTE1221.toField = "set_fraction"
ROUTE1221.toNode = "r_index1_OI"

ProtoBody603.children.append(ROUTE1221)
OrientationInterpolator1222 = x3d.OrientationInterpolator()
OrientationInterpolator1222.DEF = "r_index2_OI"
IS1223 = x3d.IS()
connect1224 = x3d.connect()
connect1224.nodeField = "key"
connect1224.protoField = "r_index2_key"

IS1223.connect.append(connect1224)
connect1225 = x3d.connect()
connect1225.nodeField = "keyValue"
connect1225.protoField = "r_index2_keyValue"

IS1223.connect.append(connect1225)
connect1226 = x3d.connect()
connect1226.nodeField = "value_changed"
connect1226.protoField = "r_index2_changed"

IS1223.connect.append(connect1226)

OrientationInterpolator1222.IS = IS1223

ProtoBody603.children.append(OrientationInterpolator1222)
ROUTE1227 = x3d.ROUTE()
ROUTE1227.fromField = "fraction_changed"
ROUTE1227.fromNode = "BehaviorClock"
ROUTE1227.toField = "set_fraction"
ROUTE1227.toNode = "r_index2_OI"

ProtoBody603.children.append(ROUTE1227)
OrientationInterpolator1228 = x3d.OrientationInterpolator()
OrientationInterpolator1228.DEF = "r_index3_OI"
IS1229 = x3d.IS()
connect1230 = x3d.connect()
connect1230.nodeField = "key"
connect1230.protoField = "r_index3_key"

IS1229.connect.append(connect1230)
connect1231 = x3d.connect()
connect1231.nodeField = "keyValue"
connect1231.protoField = "r_index3_keyValue"

IS1229.connect.append(connect1231)
connect1232 = x3d.connect()
connect1232.nodeField = "value_changed"
connect1232.protoField = "r_index3_changed"

IS1229.connect.append(connect1232)

OrientationInterpolator1228.IS = IS1229

ProtoBody603.children.append(OrientationInterpolator1228)
ROUTE1233 = x3d.ROUTE()
ROUTE1233.fromField = "fraction_changed"
ROUTE1233.fromNode = "BehaviorClock"
ROUTE1233.toField = "set_fraction"
ROUTE1233.toNode = "r_index3_OI"

ProtoBody603.children.append(ROUTE1233)
OrientationInterpolator1234 = x3d.OrientationInterpolator()
OrientationInterpolator1234.DEF = "r_index_distal_OI"
IS1235 = x3d.IS()
connect1236 = x3d.connect()
connect1236.nodeField = "key"
connect1236.protoField = "r_index_distal_key"

IS1235.connect.append(connect1236)
connect1237 = x3d.connect()
connect1237.nodeField = "keyValue"
connect1237.protoField = "r_index_distal_keyValue"

IS1235.connect.append(connect1237)
connect1238 = x3d.connect()
connect1238.nodeField = "value_changed"
connect1238.protoField = "r_index_distal_changed"

IS1235.connect.append(connect1238)

OrientationInterpolator1234.IS = IS1235

ProtoBody603.children.append(OrientationInterpolator1234)
ROUTE1239 = x3d.ROUTE()
ROUTE1239.fromField = "fraction_changed"
ROUTE1239.fromNode = "BehaviorClock"
ROUTE1239.toField = "set_fraction"
ROUTE1239.toNode = "r_index_distal_OI"

ProtoBody603.children.append(ROUTE1239)
OrientationInterpolator1240 = x3d.OrientationInterpolator()
OrientationInterpolator1240.DEF = "r_index_metacarpal_OI"
IS1241 = x3d.IS()
connect1242 = x3d.connect()
connect1242.nodeField = "key"
connect1242.protoField = "r_index_metacarpal_key"

IS1241.connect.append(connect1242)
connect1243 = x3d.connect()
connect1243.nodeField = "keyValue"
connect1243.protoField = "r_index_metacarpal_keyValue"

IS1241.connect.append(connect1243)
connect1244 = x3d.connect()
connect1244.nodeField = "value_changed"
connect1244.protoField = "r_index_metacarpal_changed"

IS1241.connect.append(connect1244)

OrientationInterpolator1240.IS = IS1241

ProtoBody603.children.append(OrientationInterpolator1240)
ROUTE1245 = x3d.ROUTE()
ROUTE1245.fromField = "fraction_changed"
ROUTE1245.fromNode = "BehaviorClock"
ROUTE1245.toField = "set_fraction"
ROUTE1245.toNode = "r_index_metacarpal_OI"

ProtoBody603.children.append(ROUTE1245)
OrientationInterpolator1246 = x3d.OrientationInterpolator()
OrientationInterpolator1246.DEF = "r_index_middle_OI"
IS1247 = x3d.IS()
connect1248 = x3d.connect()
connect1248.nodeField = "key"
connect1248.protoField = "r_index_middle_key"

IS1247.connect.append(connect1248)
connect1249 = x3d.connect()
connect1249.nodeField = "keyValue"
connect1249.protoField = "r_index_middle_keyValue"

IS1247.connect.append(connect1249)
connect1250 = x3d.connect()
connect1250.nodeField = "value_changed"
connect1250.protoField = "r_index_middle_changed"

IS1247.connect.append(connect1250)

OrientationInterpolator1246.IS = IS1247

ProtoBody603.children.append(OrientationInterpolator1246)
ROUTE1251 = x3d.ROUTE()
ROUTE1251.fromField = "fraction_changed"
ROUTE1251.fromNode = "BehaviorClock"
ROUTE1251.toField = "set_fraction"
ROUTE1251.toNode = "r_index_middle_OI"

ProtoBody603.children.append(ROUTE1251)
OrientationInterpolator1252 = x3d.OrientationInterpolator()
OrientationInterpolator1252.DEF = "r_index_proximal_OI"
IS1253 = x3d.IS()
connect1254 = x3d.connect()
connect1254.nodeField = "key"
connect1254.protoField = "r_index_proximal_key"

IS1253.connect.append(connect1254)
connect1255 = x3d.connect()
connect1255.nodeField = "keyValue"
connect1255.protoField = "r_index_proximal_keyValue"

IS1253.connect.append(connect1255)
connect1256 = x3d.connect()
connect1256.nodeField = "value_changed"
connect1256.protoField = "r_index_proximal_changed"

IS1253.connect.append(connect1256)

OrientationInterpolator1252.IS = IS1253

ProtoBody603.children.append(OrientationInterpolator1252)
ROUTE1257 = x3d.ROUTE()
ROUTE1257.fromField = "fraction_changed"
ROUTE1257.fromNode = "BehaviorClock"
ROUTE1257.toField = "set_fraction"
ROUTE1257.toNode = "r_index_proximal_OI"

ProtoBody603.children.append(ROUTE1257)
OrientationInterpolator1258 = x3d.OrientationInterpolator()
OrientationInterpolator1258.DEF = "r_knee_OI"
IS1259 = x3d.IS()
connect1260 = x3d.connect()
connect1260.nodeField = "key"
connect1260.protoField = "r_knee_key"

IS1259.connect.append(connect1260)
connect1261 = x3d.connect()
connect1261.nodeField = "keyValue"
connect1261.protoField = "r_knee_keyValue"

IS1259.connect.append(connect1261)
connect1262 = x3d.connect()
connect1262.nodeField = "value_changed"
connect1262.protoField = "r_knee_changed"

IS1259.connect.append(connect1262)

OrientationInterpolator1258.IS = IS1259

ProtoBody603.children.append(OrientationInterpolator1258)
ROUTE1263 = x3d.ROUTE()
ROUTE1263.fromField = "fraction_changed"
ROUTE1263.fromNode = "BehaviorClock"
ROUTE1263.toField = "set_fraction"
ROUTE1263.toNode = "r_knee_OI"

ProtoBody603.children.append(ROUTE1263)
OrientationInterpolator1264 = x3d.OrientationInterpolator()
OrientationInterpolator1264.DEF = "r_metatarsal_OI"
IS1265 = x3d.IS()
connect1266 = x3d.connect()
connect1266.nodeField = "key"
connect1266.protoField = "r_metatarsal_key"

IS1265.connect.append(connect1266)
connect1267 = x3d.connect()
connect1267.nodeField = "keyValue"
connect1267.protoField = "r_metatarsal_keyValue"

IS1265.connect.append(connect1267)
connect1268 = x3d.connect()
connect1268.nodeField = "value_changed"
connect1268.protoField = "r_metatarsal_changed"

IS1265.connect.append(connect1268)

OrientationInterpolator1264.IS = IS1265

ProtoBody603.children.append(OrientationInterpolator1264)
ROUTE1269 = x3d.ROUTE()
ROUTE1269.fromField = "fraction_changed"
ROUTE1269.fromNode = "BehaviorClock"
ROUTE1269.toField = "set_fraction"
ROUTE1269.toNode = "r_metatarsal_OI"

ProtoBody603.children.append(ROUTE1269)
OrientationInterpolator1270 = x3d.OrientationInterpolator()
OrientationInterpolator1270.DEF = "r_middistal_OI"
IS1271 = x3d.IS()
connect1272 = x3d.connect()
connect1272.nodeField = "key"
connect1272.protoField = "r_middistal_key"

IS1271.connect.append(connect1272)
connect1273 = x3d.connect()
connect1273.nodeField = "keyValue"
connect1273.protoField = "r_middistal_keyValue"

IS1271.connect.append(connect1273)
connect1274 = x3d.connect()
connect1274.nodeField = "value_changed"
connect1274.protoField = "r_middistal_changed"

IS1271.connect.append(connect1274)

OrientationInterpolator1270.IS = IS1271

ProtoBody603.children.append(OrientationInterpolator1270)
ROUTE1275 = x3d.ROUTE()
ROUTE1275.fromField = "fraction_changed"
ROUTE1275.fromNode = "BehaviorClock"
ROUTE1275.toField = "set_fraction"
ROUTE1275.toNode = "r_middistal_OI"

ProtoBody603.children.append(ROUTE1275)
OrientationInterpolator1276 = x3d.OrientationInterpolator()
OrientationInterpolator1276.DEF = "r_middle0_OI"
IS1277 = x3d.IS()
connect1278 = x3d.connect()
connect1278.nodeField = "key"
connect1278.protoField = "r_middle0_key"

IS1277.connect.append(connect1278)
connect1279 = x3d.connect()
connect1279.nodeField = "keyValue"
connect1279.protoField = "r_middle0_keyValue"

IS1277.connect.append(connect1279)
connect1280 = x3d.connect()
connect1280.nodeField = "value_changed"
connect1280.protoField = "r_middle0_changed"

IS1277.connect.append(connect1280)

OrientationInterpolator1276.IS = IS1277

ProtoBody603.children.append(OrientationInterpolator1276)
ROUTE1281 = x3d.ROUTE()
ROUTE1281.fromField = "fraction_changed"
ROUTE1281.fromNode = "BehaviorClock"
ROUTE1281.toField = "set_fraction"
ROUTE1281.toNode = "r_middle0_OI"

ProtoBody603.children.append(ROUTE1281)
OrientationInterpolator1282 = x3d.OrientationInterpolator()
OrientationInterpolator1282.DEF = "r_middle1_OI"
IS1283 = x3d.IS()
connect1284 = x3d.connect()
connect1284.nodeField = "key"
connect1284.protoField = "r_middle1_key"

IS1283.connect.append(connect1284)
connect1285 = x3d.connect()
connect1285.nodeField = "keyValue"
connect1285.protoField = "r_middle1_keyValue"

IS1283.connect.append(connect1285)
connect1286 = x3d.connect()
connect1286.nodeField = "value_changed"
connect1286.protoField = "r_middle1_changed"

IS1283.connect.append(connect1286)

OrientationInterpolator1282.IS = IS1283

ProtoBody603.children.append(OrientationInterpolator1282)
ROUTE1287 = x3d.ROUTE()
ROUTE1287.fromField = "fraction_changed"
ROUTE1287.fromNode = "BehaviorClock"
ROUTE1287.toField = "set_fraction"
ROUTE1287.toNode = "r_middle1_OI"

ProtoBody603.children.append(ROUTE1287)
OrientationInterpolator1288 = x3d.OrientationInterpolator()
OrientationInterpolator1288.DEF = "r_middle2_OI"
IS1289 = x3d.IS()
connect1290 = x3d.connect()
connect1290.nodeField = "key"
connect1290.protoField = "r_middle2_key"

IS1289.connect.append(connect1290)
connect1291 = x3d.connect()
connect1291.nodeField = "keyValue"
connect1291.protoField = "r_middle2_keyValue"

IS1289.connect.append(connect1291)
connect1292 = x3d.connect()
connect1292.nodeField = "value_changed"
connect1292.protoField = "r_middle2_changed"

IS1289.connect.append(connect1292)

OrientationInterpolator1288.IS = IS1289

ProtoBody603.children.append(OrientationInterpolator1288)
ROUTE1293 = x3d.ROUTE()
ROUTE1293.fromField = "fraction_changed"
ROUTE1293.fromNode = "BehaviorClock"
ROUTE1293.toField = "set_fraction"
ROUTE1293.toNode = "r_middle2_OI"

ProtoBody603.children.append(ROUTE1293)
OrientationInterpolator1294 = x3d.OrientationInterpolator()
OrientationInterpolator1294.DEF = "r_middle3_OI"
IS1295 = x3d.IS()
connect1296 = x3d.connect()
connect1296.nodeField = "key"
connect1296.protoField = "r_middle3_key"

IS1295.connect.append(connect1296)
connect1297 = x3d.connect()
connect1297.nodeField = "keyValue"
connect1297.protoField = "r_middle3_keyValue"

IS1295.connect.append(connect1297)
connect1298 = x3d.connect()
connect1298.nodeField = "value_changed"
connect1298.protoField = "r_middle3_changed"

IS1295.connect.append(connect1298)

OrientationInterpolator1294.IS = IS1295

ProtoBody603.children.append(OrientationInterpolator1294)
ROUTE1299 = x3d.ROUTE()
ROUTE1299.fromField = "fraction_changed"
ROUTE1299.fromNode = "BehaviorClock"
ROUTE1299.toField = "set_fraction"
ROUTE1299.toNode = "r_middle3_OI"

ProtoBody603.children.append(ROUTE1299)
OrientationInterpolator1300 = x3d.OrientationInterpolator()
OrientationInterpolator1300.DEF = "r_middle_distal_OI"
IS1301 = x3d.IS()
connect1302 = x3d.connect()
connect1302.nodeField = "key"
connect1302.protoField = "r_middle_distal_key"

IS1301.connect.append(connect1302)
connect1303 = x3d.connect()
connect1303.nodeField = "keyValue"
connect1303.protoField = "r_middle_distal_keyValue"

IS1301.connect.append(connect1303)
connect1304 = x3d.connect()
connect1304.nodeField = "value_changed"
connect1304.protoField = "r_middle_distal_changed"

IS1301.connect.append(connect1304)

OrientationInterpolator1300.IS = IS1301

ProtoBody603.children.append(OrientationInterpolator1300)
ROUTE1305 = x3d.ROUTE()
ROUTE1305.fromField = "fraction_changed"
ROUTE1305.fromNode = "BehaviorClock"
ROUTE1305.toField = "set_fraction"
ROUTE1305.toNode = "r_middle_distal_OI"

ProtoBody603.children.append(ROUTE1305)
OrientationInterpolator1306 = x3d.OrientationInterpolator()
OrientationInterpolator1306.DEF = "r_middle_metacarpal_OI"
IS1307 = x3d.IS()
connect1308 = x3d.connect()
connect1308.nodeField = "key"
connect1308.protoField = "r_middle_metacarpal_key"

IS1307.connect.append(connect1308)
connect1309 = x3d.connect()
connect1309.nodeField = "keyValue"
connect1309.protoField = "r_middle_metacarpal_keyValue"

IS1307.connect.append(connect1309)
connect1310 = x3d.connect()
connect1310.nodeField = "value_changed"
connect1310.protoField = "r_middle_metacarpal_changed"

IS1307.connect.append(connect1310)

OrientationInterpolator1306.IS = IS1307

ProtoBody603.children.append(OrientationInterpolator1306)
ROUTE1311 = x3d.ROUTE()
ROUTE1311.fromField = "fraction_changed"
ROUTE1311.fromNode = "BehaviorClock"
ROUTE1311.toField = "set_fraction"
ROUTE1311.toNode = "r_middle_metacarpal_OI"

ProtoBody603.children.append(ROUTE1311)
OrientationInterpolator1312 = x3d.OrientationInterpolator()
OrientationInterpolator1312.DEF = "r_middle_middle_OI"
IS1313 = x3d.IS()
connect1314 = x3d.connect()
connect1314.nodeField = "key"
connect1314.protoField = "r_middle_middle_key"

IS1313.connect.append(connect1314)
connect1315 = x3d.connect()
connect1315.nodeField = "keyValue"
connect1315.protoField = "r_middle_middle_keyValue"

IS1313.connect.append(connect1315)
connect1316 = x3d.connect()
connect1316.nodeField = "value_changed"
connect1316.protoField = "r_middle_middle_changed"

IS1313.connect.append(connect1316)

OrientationInterpolator1312.IS = IS1313

ProtoBody603.children.append(OrientationInterpolator1312)
ROUTE1317 = x3d.ROUTE()
ROUTE1317.fromField = "fraction_changed"
ROUTE1317.fromNode = "BehaviorClock"
ROUTE1317.toField = "set_fraction"
ROUTE1317.toNode = "r_middle_middle_OI"

ProtoBody603.children.append(ROUTE1317)
OrientationInterpolator1318 = x3d.OrientationInterpolator()
OrientationInterpolator1318.DEF = "r_middle_proximal_OI"
IS1319 = x3d.IS()
connect1320 = x3d.connect()
connect1320.nodeField = "key"
connect1320.protoField = "r_middle_proximal_key"

IS1319.connect.append(connect1320)
connect1321 = x3d.connect()
connect1321.nodeField = "keyValue"
connect1321.protoField = "r_middle_proximal_keyValue"

IS1319.connect.append(connect1321)
connect1322 = x3d.connect()
connect1322.nodeField = "value_changed"
connect1322.protoField = "r_middle_proximal_changed"

IS1319.connect.append(connect1322)

OrientationInterpolator1318.IS = IS1319

ProtoBody603.children.append(OrientationInterpolator1318)
ROUTE1323 = x3d.ROUTE()
ROUTE1323.fromField = "fraction_changed"
ROUTE1323.fromNode = "BehaviorClock"
ROUTE1323.toField = "set_fraction"
ROUTE1323.toNode = "r_middle_proximal_OI"

ProtoBody603.children.append(ROUTE1323)
OrientationInterpolator1324 = x3d.OrientationInterpolator()
OrientationInterpolator1324.DEF = "r_midproximal_OI"
IS1325 = x3d.IS()
connect1326 = x3d.connect()
connect1326.nodeField = "key"
connect1326.protoField = "r_midproximal_key"

IS1325.connect.append(connect1326)
connect1327 = x3d.connect()
connect1327.nodeField = "keyValue"
connect1327.protoField = "r_midproximal_keyValue"

IS1325.connect.append(connect1327)
connect1328 = x3d.connect()
connect1328.nodeField = "value_changed"
connect1328.protoField = "r_midproximal_changed"

IS1325.connect.append(connect1328)

OrientationInterpolator1324.IS = IS1325

ProtoBody603.children.append(OrientationInterpolator1324)
ROUTE1329 = x3d.ROUTE()
ROUTE1329.fromField = "fraction_changed"
ROUTE1329.fromNode = "BehaviorClock"
ROUTE1329.toField = "set_fraction"
ROUTE1329.toNode = "r_midproximal_OI"

ProtoBody603.children.append(ROUTE1329)
OrientationInterpolator1330 = x3d.OrientationInterpolator()
OrientationInterpolator1330.DEF = "r_midtarsal_OI"
IS1331 = x3d.IS()
connect1332 = x3d.connect()
connect1332.nodeField = "key"
connect1332.protoField = "r_midtarsal_key"

IS1331.connect.append(connect1332)
connect1333 = x3d.connect()
connect1333.nodeField = "keyValue"
connect1333.protoField = "r_midtarsal_keyValue"

IS1331.connect.append(connect1333)
connect1334 = x3d.connect()
connect1334.nodeField = "value_changed"
connect1334.protoField = "r_midtarsal_changed"

IS1331.connect.append(connect1334)

OrientationInterpolator1330.IS = IS1331

ProtoBody603.children.append(OrientationInterpolator1330)
ROUTE1335 = x3d.ROUTE()
ROUTE1335.fromField = "fraction_changed"
ROUTE1335.fromNode = "BehaviorClock"
ROUTE1335.toField = "set_fraction"
ROUTE1335.toNode = "r_midtarsal_OI"

ProtoBody603.children.append(ROUTE1335)
OrientationInterpolator1336 = x3d.OrientationInterpolator()
OrientationInterpolator1336.DEF = "r_pinky0_OI"
IS1337 = x3d.IS()
connect1338 = x3d.connect()
connect1338.nodeField = "key"
connect1338.protoField = "r_pinky0_key"

IS1337.connect.append(connect1338)
connect1339 = x3d.connect()
connect1339.nodeField = "keyValue"
connect1339.protoField = "r_pinky0_keyValue"

IS1337.connect.append(connect1339)
connect1340 = x3d.connect()
connect1340.nodeField = "value_changed"
connect1340.protoField = "r_pinky0_changed"

IS1337.connect.append(connect1340)

OrientationInterpolator1336.IS = IS1337

ProtoBody603.children.append(OrientationInterpolator1336)
ROUTE1341 = x3d.ROUTE()
ROUTE1341.fromField = "fraction_changed"
ROUTE1341.fromNode = "BehaviorClock"
ROUTE1341.toField = "set_fraction"
ROUTE1341.toNode = "r_pinky0_OI"

ProtoBody603.children.append(ROUTE1341)
OrientationInterpolator1342 = x3d.OrientationInterpolator()
OrientationInterpolator1342.DEF = "r_pinky1_OI"
IS1343 = x3d.IS()
connect1344 = x3d.connect()
connect1344.nodeField = "key"
connect1344.protoField = "r_pinky1_key"

IS1343.connect.append(connect1344)
connect1345 = x3d.connect()
connect1345.nodeField = "keyValue"
connect1345.protoField = "r_pinky1_keyValue"

IS1343.connect.append(connect1345)
connect1346 = x3d.connect()
connect1346.nodeField = "value_changed"
connect1346.protoField = "r_pinky1_changed"

IS1343.connect.append(connect1346)

OrientationInterpolator1342.IS = IS1343

ProtoBody603.children.append(OrientationInterpolator1342)
ROUTE1347 = x3d.ROUTE()
ROUTE1347.fromField = "fraction_changed"
ROUTE1347.fromNode = "BehaviorClock"
ROUTE1347.toField = "set_fraction"
ROUTE1347.toNode = "r_pinky1_OI"

ProtoBody603.children.append(ROUTE1347)
OrientationInterpolator1348 = x3d.OrientationInterpolator()
OrientationInterpolator1348.DEF = "r_pinky2_OI"
IS1349 = x3d.IS()
connect1350 = x3d.connect()
connect1350.nodeField = "key"
connect1350.protoField = "r_pinky2_key"

IS1349.connect.append(connect1350)
connect1351 = x3d.connect()
connect1351.nodeField = "keyValue"
connect1351.protoField = "r_pinky2_keyValue"

IS1349.connect.append(connect1351)
connect1352 = x3d.connect()
connect1352.nodeField = "value_changed"
connect1352.protoField = "r_pinky2_changed"

IS1349.connect.append(connect1352)

OrientationInterpolator1348.IS = IS1349

ProtoBody603.children.append(OrientationInterpolator1348)
ROUTE1353 = x3d.ROUTE()
ROUTE1353.fromField = "fraction_changed"
ROUTE1353.fromNode = "BehaviorClock"
ROUTE1353.toField = "set_fraction"
ROUTE1353.toNode = "r_pinky2_OI"

ProtoBody603.children.append(ROUTE1353)
OrientationInterpolator1354 = x3d.OrientationInterpolator()
OrientationInterpolator1354.DEF = "r_pinky3_OI"
IS1355 = x3d.IS()
connect1356 = x3d.connect()
connect1356.nodeField = "key"
connect1356.protoField = "r_pinky3_key"

IS1355.connect.append(connect1356)
connect1357 = x3d.connect()
connect1357.nodeField = "keyValue"
connect1357.protoField = "r_pinky3_keyValue"

IS1355.connect.append(connect1357)
connect1358 = x3d.connect()
connect1358.nodeField = "value_changed"
connect1358.protoField = "r_pinky3_changed"

IS1355.connect.append(connect1358)

OrientationInterpolator1354.IS = IS1355

ProtoBody603.children.append(OrientationInterpolator1354)
ROUTE1359 = x3d.ROUTE()
ROUTE1359.fromField = "fraction_changed"
ROUTE1359.fromNode = "BehaviorClock"
ROUTE1359.toField = "set_fraction"
ROUTE1359.toNode = "r_pinky3_OI"

ProtoBody603.children.append(ROUTE1359)
OrientationInterpolator1360 = x3d.OrientationInterpolator()
OrientationInterpolator1360.DEF = "r_pinky_distal_OI"
IS1361 = x3d.IS()
connect1362 = x3d.connect()
connect1362.nodeField = "key"
connect1362.protoField = "r_pinky_distal_key"

IS1361.connect.append(connect1362)
connect1363 = x3d.connect()
connect1363.nodeField = "keyValue"
connect1363.protoField = "r_pinky_distal_keyValue"

IS1361.connect.append(connect1363)
connect1364 = x3d.connect()
connect1364.nodeField = "value_changed"
connect1364.protoField = "r_pinky_distal_changed"

IS1361.connect.append(connect1364)

OrientationInterpolator1360.IS = IS1361

ProtoBody603.children.append(OrientationInterpolator1360)
ROUTE1365 = x3d.ROUTE()
ROUTE1365.fromField = "fraction_changed"
ROUTE1365.fromNode = "BehaviorClock"
ROUTE1365.toField = "set_fraction"
ROUTE1365.toNode = "r_pinky_distal_OI"

ProtoBody603.children.append(ROUTE1365)
OrientationInterpolator1366 = x3d.OrientationInterpolator()
OrientationInterpolator1366.DEF = "r_pinky_metacarpal_OI"
IS1367 = x3d.IS()
connect1368 = x3d.connect()
connect1368.nodeField = "key"
connect1368.protoField = "r_pinky_metacarpal_key"

IS1367.connect.append(connect1368)
connect1369 = x3d.connect()
connect1369.nodeField = "keyValue"
connect1369.protoField = "r_pinky_metacarpal_keyValue"

IS1367.connect.append(connect1369)
connect1370 = x3d.connect()
connect1370.nodeField = "value_changed"
connect1370.protoField = "r_pinky_metacarpal_changed"

IS1367.connect.append(connect1370)

OrientationInterpolator1366.IS = IS1367

ProtoBody603.children.append(OrientationInterpolator1366)
ROUTE1371 = x3d.ROUTE()
ROUTE1371.fromField = "fraction_changed"
ROUTE1371.fromNode = "BehaviorClock"
ROUTE1371.toField = "set_fraction"
ROUTE1371.toNode = "r_pinky_metacarpal_OI"

ProtoBody603.children.append(ROUTE1371)
OrientationInterpolator1372 = x3d.OrientationInterpolator()
OrientationInterpolator1372.DEF = "r_pinky_middle_OI"
IS1373 = x3d.IS()
connect1374 = x3d.connect()
connect1374.nodeField = "key"
connect1374.protoField = "r_pinky_middle_key"

IS1373.connect.append(connect1374)
connect1375 = x3d.connect()
connect1375.nodeField = "keyValue"
connect1375.protoField = "r_pinky_middle_keyValue"

IS1373.connect.append(connect1375)
connect1376 = x3d.connect()
connect1376.nodeField = "value_changed"
connect1376.protoField = "r_pinky_middle_changed"

IS1373.connect.append(connect1376)

OrientationInterpolator1372.IS = IS1373

ProtoBody603.children.append(OrientationInterpolator1372)
ROUTE1377 = x3d.ROUTE()
ROUTE1377.fromField = "fraction_changed"
ROUTE1377.fromNode = "BehaviorClock"
ROUTE1377.toField = "set_fraction"
ROUTE1377.toNode = "r_pinky_middle_OI"

ProtoBody603.children.append(ROUTE1377)
OrientationInterpolator1378 = x3d.OrientationInterpolator()
OrientationInterpolator1378.DEF = "r_pinky_proximal_OI"
IS1379 = x3d.IS()
connect1380 = x3d.connect()
connect1380.nodeField = "key"
connect1380.protoField = "r_pinky_proximal_key"

IS1379.connect.append(connect1380)
connect1381 = x3d.connect()
connect1381.nodeField = "keyValue"
connect1381.protoField = "r_pinky_proximal_keyValue"

IS1379.connect.append(connect1381)
connect1382 = x3d.connect()
connect1382.nodeField = "value_changed"
connect1382.protoField = "r_pinky_proximal_changed"

IS1379.connect.append(connect1382)

OrientationInterpolator1378.IS = IS1379

ProtoBody603.children.append(OrientationInterpolator1378)
ROUTE1383 = x3d.ROUTE()
ROUTE1383.fromField = "fraction_changed"
ROUTE1383.fromNode = "BehaviorClock"
ROUTE1383.toField = "set_fraction"
ROUTE1383.toNode = "r_pinky_proximal_OI"

ProtoBody603.children.append(ROUTE1383)
OrientationInterpolator1384 = x3d.OrientationInterpolator()
OrientationInterpolator1384.DEF = "r_ring0_OI"
IS1385 = x3d.IS()
connect1386 = x3d.connect()
connect1386.nodeField = "key"
connect1386.protoField = "r_ring0_key"

IS1385.connect.append(connect1386)
connect1387 = x3d.connect()
connect1387.nodeField = "keyValue"
connect1387.protoField = "r_ring0_keyValue"

IS1385.connect.append(connect1387)
connect1388 = x3d.connect()
connect1388.nodeField = "value_changed"
connect1388.protoField = "r_ring0_changed"

IS1385.connect.append(connect1388)

OrientationInterpolator1384.IS = IS1385

ProtoBody603.children.append(OrientationInterpolator1384)
ROUTE1389 = x3d.ROUTE()
ROUTE1389.fromField = "fraction_changed"
ROUTE1389.fromNode = "BehaviorClock"
ROUTE1389.toField = "set_fraction"
ROUTE1389.toNode = "r_ring0_OI"

ProtoBody603.children.append(ROUTE1389)
OrientationInterpolator1390 = x3d.OrientationInterpolator()
OrientationInterpolator1390.DEF = "r_ring1_OI"
IS1391 = x3d.IS()
connect1392 = x3d.connect()
connect1392.nodeField = "key"
connect1392.protoField = "r_ring1_key"

IS1391.connect.append(connect1392)
connect1393 = x3d.connect()
connect1393.nodeField = "keyValue"
connect1393.protoField = "r_ring1_keyValue"

IS1391.connect.append(connect1393)
connect1394 = x3d.connect()
connect1394.nodeField = "value_changed"
connect1394.protoField = "r_ring1_changed"

IS1391.connect.append(connect1394)

OrientationInterpolator1390.IS = IS1391

ProtoBody603.children.append(OrientationInterpolator1390)
ROUTE1395 = x3d.ROUTE()
ROUTE1395.fromField = "fraction_changed"
ROUTE1395.fromNode = "BehaviorClock"
ROUTE1395.toField = "set_fraction"
ROUTE1395.toNode = "r_ring1_OI"

ProtoBody603.children.append(ROUTE1395)
OrientationInterpolator1396 = x3d.OrientationInterpolator()
OrientationInterpolator1396.DEF = "r_ring2_OI"
IS1397 = x3d.IS()
connect1398 = x3d.connect()
connect1398.nodeField = "key"
connect1398.protoField = "r_ring2_key"

IS1397.connect.append(connect1398)
connect1399 = x3d.connect()
connect1399.nodeField = "keyValue"
connect1399.protoField = "r_ring2_keyValue"

IS1397.connect.append(connect1399)
connect1400 = x3d.connect()
connect1400.nodeField = "value_changed"
connect1400.protoField = "r_ring2_changed"

IS1397.connect.append(connect1400)

OrientationInterpolator1396.IS = IS1397

ProtoBody603.children.append(OrientationInterpolator1396)
ROUTE1401 = x3d.ROUTE()
ROUTE1401.fromField = "fraction_changed"
ROUTE1401.fromNode = "BehaviorClock"
ROUTE1401.toField = "set_fraction"
ROUTE1401.toNode = "r_ring2_OI"

ProtoBody603.children.append(ROUTE1401)
OrientationInterpolator1402 = x3d.OrientationInterpolator()
OrientationInterpolator1402.DEF = "r_ring3_OI"
IS1403 = x3d.IS()
connect1404 = x3d.connect()
connect1404.nodeField = "key"
connect1404.protoField = "r_ring3_key"

IS1403.connect.append(connect1404)
connect1405 = x3d.connect()
connect1405.nodeField = "keyValue"
connect1405.protoField = "r_ring3_keyValue"

IS1403.connect.append(connect1405)
connect1406 = x3d.connect()
connect1406.nodeField = "value_changed"
connect1406.protoField = "r_ring3_changed"

IS1403.connect.append(connect1406)

OrientationInterpolator1402.IS = IS1403

ProtoBody603.children.append(OrientationInterpolator1402)
ROUTE1407 = x3d.ROUTE()
ROUTE1407.fromField = "fraction_changed"
ROUTE1407.fromNode = "BehaviorClock"
ROUTE1407.toField = "set_fraction"
ROUTE1407.toNode = "r_ring3_OI"

ProtoBody603.children.append(ROUTE1407)
OrientationInterpolator1408 = x3d.OrientationInterpolator()
OrientationInterpolator1408.DEF = "r_ring_distal_OI"
IS1409 = x3d.IS()
connect1410 = x3d.connect()
connect1410.nodeField = "key"
connect1410.protoField = "r_ring_distal_key"

IS1409.connect.append(connect1410)
connect1411 = x3d.connect()
connect1411.nodeField = "keyValue"
connect1411.protoField = "r_ring_distal_keyValue"

IS1409.connect.append(connect1411)
connect1412 = x3d.connect()
connect1412.nodeField = "value_changed"
connect1412.protoField = "r_ring_distal_changed"

IS1409.connect.append(connect1412)

OrientationInterpolator1408.IS = IS1409

ProtoBody603.children.append(OrientationInterpolator1408)
ROUTE1413 = x3d.ROUTE()
ROUTE1413.fromField = "fraction_changed"
ROUTE1413.fromNode = "BehaviorClock"
ROUTE1413.toField = "set_fraction"
ROUTE1413.toNode = "r_ring_distal_OI"

ProtoBody603.children.append(ROUTE1413)
OrientationInterpolator1414 = x3d.OrientationInterpolator()
OrientationInterpolator1414.DEF = "r_ring_metacarpal_OI"
IS1415 = x3d.IS()
connect1416 = x3d.connect()
connect1416.nodeField = "key"
connect1416.protoField = "r_ring_metacarpal_key"

IS1415.connect.append(connect1416)
connect1417 = x3d.connect()
connect1417.nodeField = "keyValue"
connect1417.protoField = "r_ring_metacarpal_keyValue"

IS1415.connect.append(connect1417)
connect1418 = x3d.connect()
connect1418.nodeField = "value_changed"
connect1418.protoField = "r_ring_metacarpal_changed"

IS1415.connect.append(connect1418)

OrientationInterpolator1414.IS = IS1415

ProtoBody603.children.append(OrientationInterpolator1414)
ROUTE1419 = x3d.ROUTE()
ROUTE1419.fromField = "fraction_changed"
ROUTE1419.fromNode = "BehaviorClock"
ROUTE1419.toField = "set_fraction"
ROUTE1419.toNode = "r_ring_metacarpal_OI"

ProtoBody603.children.append(ROUTE1419)
OrientationInterpolator1420 = x3d.OrientationInterpolator()
OrientationInterpolator1420.DEF = "r_ring_middle_OI"
IS1421 = x3d.IS()
connect1422 = x3d.connect()
connect1422.nodeField = "key"
connect1422.protoField = "r_ring_middle_key"

IS1421.connect.append(connect1422)
connect1423 = x3d.connect()
connect1423.nodeField = "keyValue"
connect1423.protoField = "r_ring_middle_keyValue"

IS1421.connect.append(connect1423)
connect1424 = x3d.connect()
connect1424.nodeField = "value_changed"
connect1424.protoField = "r_ring_middle_changed"

IS1421.connect.append(connect1424)

OrientationInterpolator1420.IS = IS1421

ProtoBody603.children.append(OrientationInterpolator1420)
ROUTE1425 = x3d.ROUTE()
ROUTE1425.fromField = "fraction_changed"
ROUTE1425.fromNode = "BehaviorClock"
ROUTE1425.toField = "set_fraction"
ROUTE1425.toNode = "r_ring_middle_OI"

ProtoBody603.children.append(ROUTE1425)
OrientationInterpolator1426 = x3d.OrientationInterpolator()
OrientationInterpolator1426.DEF = "r_ring_proximal_OI"
IS1427 = x3d.IS()
connect1428 = x3d.connect()
connect1428.nodeField = "key"
connect1428.protoField = "r_ring_proximal_key"

IS1427.connect.append(connect1428)
connect1429 = x3d.connect()
connect1429.nodeField = "keyValue"
connect1429.protoField = "r_ring_proximal_keyValue"

IS1427.connect.append(connect1429)
connect1430 = x3d.connect()
connect1430.nodeField = "value_changed"
connect1430.protoField = "r_ring_proximal_changed"

IS1427.connect.append(connect1430)

OrientationInterpolator1426.IS = IS1427

ProtoBody603.children.append(OrientationInterpolator1426)
ROUTE1431 = x3d.ROUTE()
ROUTE1431.fromField = "fraction_changed"
ROUTE1431.fromNode = "BehaviorClock"
ROUTE1431.toField = "set_fraction"
ROUTE1431.toNode = "r_ring_proximal_OI"

ProtoBody603.children.append(ROUTE1431)
OrientationInterpolator1432 = x3d.OrientationInterpolator()
OrientationInterpolator1432.DEF = "r_scapula_OI"
IS1433 = x3d.IS()
connect1434 = x3d.connect()
connect1434.nodeField = "key"
connect1434.protoField = "r_scapula_key"

IS1433.connect.append(connect1434)
connect1435 = x3d.connect()
connect1435.nodeField = "keyValue"
connect1435.protoField = "r_scapula_keyValue"

IS1433.connect.append(connect1435)
connect1436 = x3d.connect()
connect1436.nodeField = "value_changed"
connect1436.protoField = "r_scapula_changed"

IS1433.connect.append(connect1436)

OrientationInterpolator1432.IS = IS1433

ProtoBody603.children.append(OrientationInterpolator1432)
ROUTE1437 = x3d.ROUTE()
ROUTE1437.fromField = "fraction_changed"
ROUTE1437.fromNode = "BehaviorClock"
ROUTE1437.toField = "set_fraction"
ROUTE1437.toNode = "r_scapula_OI"

ProtoBody603.children.append(ROUTE1437)
OrientationInterpolator1438 = x3d.OrientationInterpolator()
OrientationInterpolator1438.DEF = "r_shoulder_OI"
IS1439 = x3d.IS()
connect1440 = x3d.connect()
connect1440.nodeField = "key"
connect1440.protoField = "r_shoulder_key"

IS1439.connect.append(connect1440)
connect1441 = x3d.connect()
connect1441.nodeField = "keyValue"
connect1441.protoField = "r_shoulder_keyValue"

IS1439.connect.append(connect1441)
connect1442 = x3d.connect()
connect1442.nodeField = "value_changed"
connect1442.protoField = "r_shoulder_changed"

IS1439.connect.append(connect1442)

OrientationInterpolator1438.IS = IS1439

ProtoBody603.children.append(OrientationInterpolator1438)
ROUTE1443 = x3d.ROUTE()
ROUTE1443.fromField = "fraction_changed"
ROUTE1443.fromNode = "BehaviorClock"
ROUTE1443.toField = "set_fraction"
ROUTE1443.toNode = "r_shoulder_OI"

ProtoBody603.children.append(ROUTE1443)
OrientationInterpolator1444 = x3d.OrientationInterpolator()
OrientationInterpolator1444.DEF = "r_sternoclavicular_OI"
IS1445 = x3d.IS()
connect1446 = x3d.connect()
connect1446.nodeField = "key"
connect1446.protoField = "r_sternoclavicular_key"

IS1445.connect.append(connect1446)
connect1447 = x3d.connect()
connect1447.nodeField = "keyValue"
connect1447.protoField = "r_sternoclavicular_keyValue"

IS1445.connect.append(connect1447)
connect1448 = x3d.connect()
connect1448.nodeField = "value_changed"
connect1448.protoField = "r_sternoclavicular_changed"

IS1445.connect.append(connect1448)

OrientationInterpolator1444.IS = IS1445

ProtoBody603.children.append(OrientationInterpolator1444)
ROUTE1449 = x3d.ROUTE()
ROUTE1449.fromField = "fraction_changed"
ROUTE1449.fromNode = "BehaviorClock"
ROUTE1449.toField = "set_fraction"
ROUTE1449.toNode = "r_sternoclavicular_OI"

ProtoBody603.children.append(ROUTE1449)
OrientationInterpolator1450 = x3d.OrientationInterpolator()
OrientationInterpolator1450.DEF = "r_subtalar_OI"
IS1451 = x3d.IS()
connect1452 = x3d.connect()
connect1452.nodeField = "key"
connect1452.protoField = "r_subtalar_key"

IS1451.connect.append(connect1452)
connect1453 = x3d.connect()
connect1453.nodeField = "keyValue"
connect1453.protoField = "r_subtalar_keyValue"

IS1451.connect.append(connect1453)
connect1454 = x3d.connect()
connect1454.nodeField = "value_changed"
connect1454.protoField = "r_subtalar_changed"

IS1451.connect.append(connect1454)

OrientationInterpolator1450.IS = IS1451

ProtoBody603.children.append(OrientationInterpolator1450)
ROUTE1455 = x3d.ROUTE()
ROUTE1455.fromField = "fraction_changed"
ROUTE1455.fromNode = "BehaviorClock"
ROUTE1455.toField = "set_fraction"
ROUTE1455.toNode = "r_subtalar_OI"

ProtoBody603.children.append(ROUTE1455)
OrientationInterpolator1456 = x3d.OrientationInterpolator()
OrientationInterpolator1456.DEF = "r_thigh_OI"
IS1457 = x3d.IS()
connect1458 = x3d.connect()
connect1458.nodeField = "key"
connect1458.protoField = "r_thigh_key"

IS1457.connect.append(connect1458)
connect1459 = x3d.connect()
connect1459.nodeField = "keyValue"
connect1459.protoField = "r_thigh_keyValue"

IS1457.connect.append(connect1459)
connect1460 = x3d.connect()
connect1460.nodeField = "value_changed"
connect1460.protoField = "r_thigh_changed"

IS1457.connect.append(connect1460)

OrientationInterpolator1456.IS = IS1457

ProtoBody603.children.append(OrientationInterpolator1456)
ROUTE1461 = x3d.ROUTE()
ROUTE1461.fromField = "fraction_changed"
ROUTE1461.fromNode = "BehaviorClock"
ROUTE1461.toField = "set_fraction"
ROUTE1461.toNode = "r_thigh_OI"

ProtoBody603.children.append(ROUTE1461)
OrientationInterpolator1462 = x3d.OrientationInterpolator()
OrientationInterpolator1462.DEF = "r_thumb1_OI"
IS1463 = x3d.IS()
connect1464 = x3d.connect()
connect1464.nodeField = "key"
connect1464.protoField = "r_thumb1_key"

IS1463.connect.append(connect1464)
connect1465 = x3d.connect()
connect1465.nodeField = "keyValue"
connect1465.protoField = "r_thumb1_keyValue"

IS1463.connect.append(connect1465)
connect1466 = x3d.connect()
connect1466.nodeField = "value_changed"
connect1466.protoField = "r_thumb1_changed"

IS1463.connect.append(connect1466)

OrientationInterpolator1462.IS = IS1463

ProtoBody603.children.append(OrientationInterpolator1462)
ROUTE1467 = x3d.ROUTE()
ROUTE1467.fromField = "fraction_changed"
ROUTE1467.fromNode = "BehaviorClock"
ROUTE1467.toField = "set_fraction"
ROUTE1467.toNode = "r_thumb1_OI"

ProtoBody603.children.append(ROUTE1467)
OrientationInterpolator1468 = x3d.OrientationInterpolator()
OrientationInterpolator1468.DEF = "r_thumb2_OI"
IS1469 = x3d.IS()
connect1470 = x3d.connect()
connect1470.nodeField = "key"
connect1470.protoField = "r_thumb2_key"

IS1469.connect.append(connect1470)
connect1471 = x3d.connect()
connect1471.nodeField = "keyValue"
connect1471.protoField = "r_thumb2_keyValue"

IS1469.connect.append(connect1471)
connect1472 = x3d.connect()
connect1472.nodeField = "value_changed"
connect1472.protoField = "r_thumb2_changed"

IS1469.connect.append(connect1472)

OrientationInterpolator1468.IS = IS1469

ProtoBody603.children.append(OrientationInterpolator1468)
ROUTE1473 = x3d.ROUTE()
ROUTE1473.fromField = "fraction_changed"
ROUTE1473.fromNode = "BehaviorClock"
ROUTE1473.toField = "set_fraction"
ROUTE1473.toNode = "r_thumb2_OI"

ProtoBody603.children.append(ROUTE1473)
OrientationInterpolator1474 = x3d.OrientationInterpolator()
OrientationInterpolator1474.DEF = "r_thumb3_OI"
IS1475 = x3d.IS()
connect1476 = x3d.connect()
connect1476.nodeField = "key"
connect1476.protoField = "r_thumb3_key"

IS1475.connect.append(connect1476)
connect1477 = x3d.connect()
connect1477.nodeField = "keyValue"
connect1477.protoField = "r_thumb3_keyValue"

IS1475.connect.append(connect1477)
connect1478 = x3d.connect()
connect1478.nodeField = "value_changed"
connect1478.protoField = "r_thumb3_changed"

IS1475.connect.append(connect1478)

OrientationInterpolator1474.IS = IS1475

ProtoBody603.children.append(OrientationInterpolator1474)
ROUTE1479 = x3d.ROUTE()
ROUTE1479.fromField = "fraction_changed"
ROUTE1479.fromNode = "BehaviorClock"
ROUTE1479.toField = "set_fraction"
ROUTE1479.toNode = "r_thumb3_OI"

ProtoBody603.children.append(ROUTE1479)
OrientationInterpolator1480 = x3d.OrientationInterpolator()
OrientationInterpolator1480.DEF = "r_thumb_distal_OI"
IS1481 = x3d.IS()
connect1482 = x3d.connect()
connect1482.nodeField = "key"
connect1482.protoField = "r_thumb_distal_key"

IS1481.connect.append(connect1482)
connect1483 = x3d.connect()
connect1483.nodeField = "keyValue"
connect1483.protoField = "r_thumb_distal_keyValue"

IS1481.connect.append(connect1483)
connect1484 = x3d.connect()
connect1484.nodeField = "value_changed"
connect1484.protoField = "r_thumb_distal_changed"

IS1481.connect.append(connect1484)

OrientationInterpolator1480.IS = IS1481

ProtoBody603.children.append(OrientationInterpolator1480)
ROUTE1485 = x3d.ROUTE()
ROUTE1485.fromField = "fraction_changed"
ROUTE1485.fromNode = "BehaviorClock"
ROUTE1485.toField = "set_fraction"
ROUTE1485.toNode = "r_thumb_distal_OI"

ProtoBody603.children.append(ROUTE1485)
OrientationInterpolator1486 = x3d.OrientationInterpolator()
OrientationInterpolator1486.DEF = "r_thumb_metacarpal_OI"
IS1487 = x3d.IS()
connect1488 = x3d.connect()
connect1488.nodeField = "key"
connect1488.protoField = "r_thumb_metacarpal_key"

IS1487.connect.append(connect1488)
connect1489 = x3d.connect()
connect1489.nodeField = "keyValue"
connect1489.protoField = "r_thumb_metacarpal_keyValue"

IS1487.connect.append(connect1489)
connect1490 = x3d.connect()
connect1490.nodeField = "value_changed"
connect1490.protoField = "r_thumb_metacarpal_changed"

IS1487.connect.append(connect1490)

OrientationInterpolator1486.IS = IS1487

ProtoBody603.children.append(OrientationInterpolator1486)
ROUTE1491 = x3d.ROUTE()
ROUTE1491.fromField = "fraction_changed"
ROUTE1491.fromNode = "BehaviorClock"
ROUTE1491.toField = "set_fraction"
ROUTE1491.toNode = "r_thumb_metacarpal_OI"

ProtoBody603.children.append(ROUTE1491)
OrientationInterpolator1492 = x3d.OrientationInterpolator()
OrientationInterpolator1492.DEF = "r_thumb_proximal_OI"
IS1493 = x3d.IS()
connect1494 = x3d.connect()
connect1494.nodeField = "key"
connect1494.protoField = "r_thumb_proximal_key"

IS1493.connect.append(connect1494)
connect1495 = x3d.connect()
connect1495.nodeField = "keyValue"
connect1495.protoField = "r_thumb_proximal_keyValue"

IS1493.connect.append(connect1495)
connect1496 = x3d.connect()
connect1496.nodeField = "value_changed"
connect1496.protoField = "r_thumb_proximal_changed"

IS1493.connect.append(connect1496)

OrientationInterpolator1492.IS = IS1493

ProtoBody603.children.append(OrientationInterpolator1492)
ROUTE1497 = x3d.ROUTE()
ROUTE1497.fromField = "fraction_changed"
ROUTE1497.fromNode = "BehaviorClock"
ROUTE1497.toField = "set_fraction"
ROUTE1497.toNode = "r_thumb_proximal_OI"

ProtoBody603.children.append(ROUTE1497)
OrientationInterpolator1498 = x3d.OrientationInterpolator()
OrientationInterpolator1498.DEF = "r_upperarm_OI"
IS1499 = x3d.IS()
connect1500 = x3d.connect()
connect1500.nodeField = "key"
connect1500.protoField = "r_upperarm_key"

IS1499.connect.append(connect1500)
connect1501 = x3d.connect()
connect1501.nodeField = "keyValue"
connect1501.protoField = "r_upperarm_keyValue"

IS1499.connect.append(connect1501)
connect1502 = x3d.connect()
connect1502.nodeField = "value_changed"
connect1502.protoField = "r_upperarm_changed"

IS1499.connect.append(connect1502)

OrientationInterpolator1498.IS = IS1499

ProtoBody603.children.append(OrientationInterpolator1498)
ROUTE1503 = x3d.ROUTE()
ROUTE1503.fromField = "fraction_changed"
ROUTE1503.fromNode = "BehaviorClock"
ROUTE1503.toField = "set_fraction"
ROUTE1503.toNode = "r_upperarm_OI"

ProtoBody603.children.append(ROUTE1503)
OrientationInterpolator1504 = x3d.OrientationInterpolator()
OrientationInterpolator1504.DEF = "r_wrist_OI"
IS1505 = x3d.IS()
connect1506 = x3d.connect()
connect1506.nodeField = "key"
connect1506.protoField = "r_wrist_key"

IS1505.connect.append(connect1506)
connect1507 = x3d.connect()
connect1507.nodeField = "keyValue"
connect1507.protoField = "r_wrist_keyValue"

IS1505.connect.append(connect1507)
connect1508 = x3d.connect()
connect1508.nodeField = "value_changed"
connect1508.protoField = "r_wrist_changed"

IS1505.connect.append(connect1508)

OrientationInterpolator1504.IS = IS1505

ProtoBody603.children.append(OrientationInterpolator1504)
ROUTE1509 = x3d.ROUTE()
ROUTE1509.fromField = "fraction_changed"
ROUTE1509.fromNode = "BehaviorClock"
ROUTE1509.toField = "set_fraction"
ROUTE1509.toNode = "r_wrist_OI"

ProtoBody603.children.append(ROUTE1509)
OrientationInterpolator1510 = x3d.OrientationInterpolator()
OrientationInterpolator1510.DEF = "sacroiliac_OI"
IS1511 = x3d.IS()
connect1512 = x3d.connect()
connect1512.nodeField = "key"
connect1512.protoField = "sacroiliac_key"

IS1511.connect.append(connect1512)
connect1513 = x3d.connect()
connect1513.nodeField = "keyValue"
connect1513.protoField = "sacroiliac_keyValue"

IS1511.connect.append(connect1513)
connect1514 = x3d.connect()
connect1514.nodeField = "value_changed"
connect1514.protoField = "sacroiliac_changed"

IS1511.connect.append(connect1514)

OrientationInterpolator1510.IS = IS1511

ProtoBody603.children.append(OrientationInterpolator1510)
ROUTE1515 = x3d.ROUTE()
ROUTE1515.fromField = "fraction_changed"
ROUTE1515.fromNode = "BehaviorClock"
ROUTE1515.toField = "set_fraction"
ROUTE1515.toNode = "sacroiliac_OI"

ProtoBody603.children.append(ROUTE1515)
OrientationInterpolator1516 = x3d.OrientationInterpolator()
OrientationInterpolator1516.DEF = "sacrum_OI"
IS1517 = x3d.IS()
connect1518 = x3d.connect()
connect1518.nodeField = "key"
connect1518.protoField = "sacrum_key"

IS1517.connect.append(connect1518)
connect1519 = x3d.connect()
connect1519.nodeField = "keyValue"
connect1519.protoField = "sacrum_keyValue"

IS1517.connect.append(connect1519)
connect1520 = x3d.connect()
connect1520.nodeField = "value_changed"
connect1520.protoField = "sacrum_changed"

IS1517.connect.append(connect1520)

OrientationInterpolator1516.IS = IS1517

ProtoBody603.children.append(OrientationInterpolator1516)
ROUTE1521 = x3d.ROUTE()
ROUTE1521.fromField = "fraction_changed"
ROUTE1521.fromNode = "BehaviorClock"
ROUTE1521.toField = "set_fraction"
ROUTE1521.toNode = "sacrum_OI"

ProtoBody603.children.append(ROUTE1521)
OrientationInterpolator1522 = x3d.OrientationInterpolator()
OrientationInterpolator1522.DEF = "skull_OI"
IS1523 = x3d.IS()
connect1524 = x3d.connect()
connect1524.nodeField = "key"
connect1524.protoField = "skull_key"

IS1523.connect.append(connect1524)
connect1525 = x3d.connect()
connect1525.nodeField = "keyValue"
connect1525.protoField = "skull_keyValue"

IS1523.connect.append(connect1525)
connect1526 = x3d.connect()
connect1526.nodeField = "value_changed"
connect1526.protoField = "skull_changed"

IS1523.connect.append(connect1526)

OrientationInterpolator1522.IS = IS1523

ProtoBody603.children.append(OrientationInterpolator1522)
ROUTE1527 = x3d.ROUTE()
ROUTE1527.fromField = "fraction_changed"
ROUTE1527.fromNode = "BehaviorClock"
ROUTE1527.toField = "set_fraction"
ROUTE1527.toNode = "skull_OI"

ProtoBody603.children.append(ROUTE1527)
OrientationInterpolator1528 = x3d.OrientationInterpolator()
OrientationInterpolator1528.DEF = "skullbase_OI"
IS1529 = x3d.IS()
connect1530 = x3d.connect()
connect1530.nodeField = "key"
connect1530.protoField = "skullbase_key"

IS1529.connect.append(connect1530)
connect1531 = x3d.connect()
connect1531.nodeField = "keyValue"
connect1531.protoField = "skullbase_keyValue"

IS1529.connect.append(connect1531)
connect1532 = x3d.connect()
connect1532.nodeField = "value_changed"
connect1532.protoField = "skullbase_changed"

IS1529.connect.append(connect1532)

OrientationInterpolator1528.IS = IS1529

ProtoBody603.children.append(OrientationInterpolator1528)
ROUTE1533 = x3d.ROUTE()
ROUTE1533.fromField = "fraction_changed"
ROUTE1533.fromNode = "BehaviorClock"
ROUTE1533.toField = "set_fraction"
ROUTE1533.toNode = "skullbase_OI"

ProtoBody603.children.append(ROUTE1533)
OrientationInterpolator1534 = x3d.OrientationInterpolator()
OrientationInterpolator1534.DEF = "t1_OI"
IS1535 = x3d.IS()
connect1536 = x3d.connect()
connect1536.nodeField = "key"
connect1536.protoField = "t1_key"

IS1535.connect.append(connect1536)
connect1537 = x3d.connect()
connect1537.nodeField = "keyValue"
connect1537.protoField = "t1_keyValue"

IS1535.connect.append(connect1537)
connect1538 = x3d.connect()
connect1538.nodeField = "value_changed"
connect1538.protoField = "t1_changed"

IS1535.connect.append(connect1538)

OrientationInterpolator1534.IS = IS1535

ProtoBody603.children.append(OrientationInterpolator1534)
ROUTE1539 = x3d.ROUTE()
ROUTE1539.fromField = "fraction_changed"
ROUTE1539.fromNode = "BehaviorClock"
ROUTE1539.toField = "set_fraction"
ROUTE1539.toNode = "t1_OI"

ProtoBody603.children.append(ROUTE1539)
OrientationInterpolator1540 = x3d.OrientationInterpolator()
OrientationInterpolator1540.DEF = "t2_OI"
IS1541 = x3d.IS()
connect1542 = x3d.connect()
connect1542.nodeField = "key"
connect1542.protoField = "t2_key"

IS1541.connect.append(connect1542)
connect1543 = x3d.connect()
connect1543.nodeField = "keyValue"
connect1543.protoField = "t2_keyValue"

IS1541.connect.append(connect1543)
connect1544 = x3d.connect()
connect1544.nodeField = "value_changed"
connect1544.protoField = "t2_changed"

IS1541.connect.append(connect1544)

OrientationInterpolator1540.IS = IS1541

ProtoBody603.children.append(OrientationInterpolator1540)
ROUTE1545 = x3d.ROUTE()
ROUTE1545.fromField = "fraction_changed"
ROUTE1545.fromNode = "BehaviorClock"
ROUTE1545.toField = "set_fraction"
ROUTE1545.toNode = "t2_OI"

ProtoBody603.children.append(ROUTE1545)
OrientationInterpolator1546 = x3d.OrientationInterpolator()
OrientationInterpolator1546.DEF = "t3_OI"
IS1547 = x3d.IS()
connect1548 = x3d.connect()
connect1548.nodeField = "key"
connect1548.protoField = "t3_key"

IS1547.connect.append(connect1548)
connect1549 = x3d.connect()
connect1549.nodeField = "keyValue"
connect1549.protoField = "t3_keyValue"

IS1547.connect.append(connect1549)
connect1550 = x3d.connect()
connect1550.nodeField = "value_changed"
connect1550.protoField = "t3_changed"

IS1547.connect.append(connect1550)

OrientationInterpolator1546.IS = IS1547

ProtoBody603.children.append(OrientationInterpolator1546)
ROUTE1551 = x3d.ROUTE()
ROUTE1551.fromField = "fraction_changed"
ROUTE1551.fromNode = "BehaviorClock"
ROUTE1551.toField = "set_fraction"
ROUTE1551.toNode = "t3_OI"

ProtoBody603.children.append(ROUTE1551)
OrientationInterpolator1552 = x3d.OrientationInterpolator()
OrientationInterpolator1552.DEF = "t4_OI"
IS1553 = x3d.IS()
connect1554 = x3d.connect()
connect1554.nodeField = "key"
connect1554.protoField = "t4_key"

IS1553.connect.append(connect1554)
connect1555 = x3d.connect()
connect1555.nodeField = "keyValue"
connect1555.protoField = "t4_keyValue"

IS1553.connect.append(connect1555)
connect1556 = x3d.connect()
connect1556.nodeField = "value_changed"
connect1556.protoField = "t4_changed"

IS1553.connect.append(connect1556)

OrientationInterpolator1552.IS = IS1553

ProtoBody603.children.append(OrientationInterpolator1552)
ROUTE1557 = x3d.ROUTE()
ROUTE1557.fromField = "fraction_changed"
ROUTE1557.fromNode = "BehaviorClock"
ROUTE1557.toField = "set_fraction"
ROUTE1557.toNode = "t4_OI"

ProtoBody603.children.append(ROUTE1557)
OrientationInterpolator1558 = x3d.OrientationInterpolator()
OrientationInterpolator1558.DEF = "t5_OI"
IS1559 = x3d.IS()
connect1560 = x3d.connect()
connect1560.nodeField = "key"
connect1560.protoField = "t5_key"

IS1559.connect.append(connect1560)
connect1561 = x3d.connect()
connect1561.nodeField = "keyValue"
connect1561.protoField = "t5_keyValue"

IS1559.connect.append(connect1561)
connect1562 = x3d.connect()
connect1562.nodeField = "value_changed"
connect1562.protoField = "t5_changed"

IS1559.connect.append(connect1562)

OrientationInterpolator1558.IS = IS1559

ProtoBody603.children.append(OrientationInterpolator1558)
ROUTE1563 = x3d.ROUTE()
ROUTE1563.fromField = "fraction_changed"
ROUTE1563.fromNode = "BehaviorClock"
ROUTE1563.toField = "set_fraction"
ROUTE1563.toNode = "t5_OI"

ProtoBody603.children.append(ROUTE1563)
OrientationInterpolator1564 = x3d.OrientationInterpolator()
OrientationInterpolator1564.DEF = "t6_OI"
IS1565 = x3d.IS()
connect1566 = x3d.connect()
connect1566.nodeField = "key"
connect1566.protoField = "t6_key"

IS1565.connect.append(connect1566)
connect1567 = x3d.connect()
connect1567.nodeField = "keyValue"
connect1567.protoField = "t6_keyValue"

IS1565.connect.append(connect1567)
connect1568 = x3d.connect()
connect1568.nodeField = "value_changed"
connect1568.protoField = "t6_changed"

IS1565.connect.append(connect1568)

OrientationInterpolator1564.IS = IS1565

ProtoBody603.children.append(OrientationInterpolator1564)
ROUTE1569 = x3d.ROUTE()
ROUTE1569.fromField = "fraction_changed"
ROUTE1569.fromNode = "BehaviorClock"
ROUTE1569.toField = "set_fraction"
ROUTE1569.toNode = "t6_OI"

ProtoBody603.children.append(ROUTE1569)
OrientationInterpolator1570 = x3d.OrientationInterpolator()
OrientationInterpolator1570.DEF = "t7_OI"
IS1571 = x3d.IS()
connect1572 = x3d.connect()
connect1572.nodeField = "key"
connect1572.protoField = "t7_key"

IS1571.connect.append(connect1572)
connect1573 = x3d.connect()
connect1573.nodeField = "keyValue"
connect1573.protoField = "t7_keyValue"

IS1571.connect.append(connect1573)
connect1574 = x3d.connect()
connect1574.nodeField = "value_changed"
connect1574.protoField = "t7_changed"

IS1571.connect.append(connect1574)

OrientationInterpolator1570.IS = IS1571

ProtoBody603.children.append(OrientationInterpolator1570)
ROUTE1575 = x3d.ROUTE()
ROUTE1575.fromField = "fraction_changed"
ROUTE1575.fromNode = "BehaviorClock"
ROUTE1575.toField = "set_fraction"
ROUTE1575.toNode = "t7_OI"

ProtoBody603.children.append(ROUTE1575)
OrientationInterpolator1576 = x3d.OrientationInterpolator()
OrientationInterpolator1576.DEF = "t8_OI"
IS1577 = x3d.IS()
connect1578 = x3d.connect()
connect1578.nodeField = "key"
connect1578.protoField = "t8_key"

IS1577.connect.append(connect1578)
connect1579 = x3d.connect()
connect1579.nodeField = "keyValue"
connect1579.protoField = "t8_keyValue"

IS1577.connect.append(connect1579)
connect1580 = x3d.connect()
connect1580.nodeField = "value_changed"
connect1580.protoField = "t8_changed"

IS1577.connect.append(connect1580)

OrientationInterpolator1576.IS = IS1577

ProtoBody603.children.append(OrientationInterpolator1576)
ROUTE1581 = x3d.ROUTE()
ROUTE1581.fromField = "fraction_changed"
ROUTE1581.fromNode = "BehaviorClock"
ROUTE1581.toField = "set_fraction"
ROUTE1581.toNode = "t8_OI"

ProtoBody603.children.append(ROUTE1581)
OrientationInterpolator1582 = x3d.OrientationInterpolator()
OrientationInterpolator1582.DEF = "t9_OI"
IS1583 = x3d.IS()
connect1584 = x3d.connect()
connect1584.nodeField = "key"
connect1584.protoField = "t9_key"

IS1583.connect.append(connect1584)
connect1585 = x3d.connect()
connect1585.nodeField = "keyValue"
connect1585.protoField = "t9_keyValue"

IS1583.connect.append(connect1585)
connect1586 = x3d.connect()
connect1586.nodeField = "value_changed"
connect1586.protoField = "t9_changed"

IS1583.connect.append(connect1586)

OrientationInterpolator1582.IS = IS1583

ProtoBody603.children.append(OrientationInterpolator1582)
ROUTE1587 = x3d.ROUTE()
ROUTE1587.fromField = "fraction_changed"
ROUTE1587.fromNode = "BehaviorClock"
ROUTE1587.toField = "set_fraction"
ROUTE1587.toNode = "t9_OI"

ProtoBody603.children.append(ROUTE1587)
OrientationInterpolator1588 = x3d.OrientationInterpolator()
OrientationInterpolator1588.DEF = "t10_OI"
IS1589 = x3d.IS()
connect1590 = x3d.connect()
connect1590.nodeField = "key"
connect1590.protoField = "t10_key"

IS1589.connect.append(connect1590)
connect1591 = x3d.connect()
connect1591.nodeField = "keyValue"
connect1591.protoField = "t10_keyValue"

IS1589.connect.append(connect1591)
connect1592 = x3d.connect()
connect1592.nodeField = "value_changed"
connect1592.protoField = "t10_changed"

IS1589.connect.append(connect1592)

OrientationInterpolator1588.IS = IS1589

ProtoBody603.children.append(OrientationInterpolator1588)
ROUTE1593 = x3d.ROUTE()
ROUTE1593.fromField = "fraction_changed"
ROUTE1593.fromNode = "BehaviorClock"
ROUTE1593.toField = "set_fraction"
ROUTE1593.toNode = "t10_OI"

ProtoBody603.children.append(ROUTE1593)
OrientationInterpolator1594 = x3d.OrientationInterpolator()
OrientationInterpolator1594.DEF = "t11_OI"
IS1595 = x3d.IS()
connect1596 = x3d.connect()
connect1596.nodeField = "key"
connect1596.protoField = "t11_key"

IS1595.connect.append(connect1596)
connect1597 = x3d.connect()
connect1597.nodeField = "keyValue"
connect1597.protoField = "t11_keyValue"

IS1595.connect.append(connect1597)
connect1598 = x3d.connect()
connect1598.nodeField = "value_changed"
connect1598.protoField = "t11_changed"

IS1595.connect.append(connect1598)

OrientationInterpolator1594.IS = IS1595

ProtoBody603.children.append(OrientationInterpolator1594)
ROUTE1599 = x3d.ROUTE()
ROUTE1599.fromField = "fraction_changed"
ROUTE1599.fromNode = "BehaviorClock"
ROUTE1599.toField = "set_fraction"
ROUTE1599.toNode = "t11_OI"

ProtoBody603.children.append(ROUTE1599)
OrientationInterpolator1600 = x3d.OrientationInterpolator()
OrientationInterpolator1600.DEF = "t12_OI"
IS1601 = x3d.IS()
connect1602 = x3d.connect()
connect1602.nodeField = "key"
connect1602.protoField = "t12_key"

IS1601.connect.append(connect1602)
connect1603 = x3d.connect()
connect1603.nodeField = "keyValue"
connect1603.protoField = "t12_keyValue"

IS1601.connect.append(connect1603)
connect1604 = x3d.connect()
connect1604.nodeField = "value_changed"
connect1604.protoField = "t12_changed"

IS1601.connect.append(connect1604)

OrientationInterpolator1600.IS = IS1601

ProtoBody603.children.append(OrientationInterpolator1600)
ROUTE1605 = x3d.ROUTE()
ROUTE1605.fromField = "fraction_changed"
ROUTE1605.fromNode = "BehaviorClock"
ROUTE1605.toField = "set_fraction"
ROUTE1605.toNode = "t12_OI"

ProtoBody603.children.append(ROUTE1605)
OrientationInterpolator1606 = x3d.OrientationInterpolator()
OrientationInterpolator1606.DEF = "temporomandibular_OI"
IS1607 = x3d.IS()
connect1608 = x3d.connect()
connect1608.nodeField = "key"
connect1608.protoField = "temporomandibular_key"

IS1607.connect.append(connect1608)
connect1609 = x3d.connect()
connect1609.nodeField = "keyValue"
connect1609.protoField = "temporomandibular_keyValue"

IS1607.connect.append(connect1609)
connect1610 = x3d.connect()
connect1610.nodeField = "value_changed"
connect1610.protoField = "temporomandibular_changed"

IS1607.connect.append(connect1610)

OrientationInterpolator1606.IS = IS1607

ProtoBody603.children.append(OrientationInterpolator1606)
ROUTE1611 = x3d.ROUTE()
ROUTE1611.fromField = "fraction_changed"
ROUTE1611.fromNode = "BehaviorClock"
ROUTE1611.toField = "set_fraction"
ROUTE1611.toNode = "temporomandibular_OI"

ProtoBody603.children.append(ROUTE1611)
OrientationInterpolator1612 = x3d.OrientationInterpolator()
OrientationInterpolator1612.DEF = "vc1_OI"
IS1613 = x3d.IS()
connect1614 = x3d.connect()
connect1614.nodeField = "key"
connect1614.protoField = "vc1_key"

IS1613.connect.append(connect1614)
connect1615 = x3d.connect()
connect1615.nodeField = "keyValue"
connect1615.protoField = "vc1_keyValue"

IS1613.connect.append(connect1615)
connect1616 = x3d.connect()
connect1616.nodeField = "value_changed"
connect1616.protoField = "vc1_changed"

IS1613.connect.append(connect1616)

OrientationInterpolator1612.IS = IS1613

ProtoBody603.children.append(OrientationInterpolator1612)
ROUTE1617 = x3d.ROUTE()
ROUTE1617.fromField = "fraction_changed"
ROUTE1617.fromNode = "BehaviorClock"
ROUTE1617.toField = "set_fraction"
ROUTE1617.toNode = "vc1_OI"

ProtoBody603.children.append(ROUTE1617)
OrientationInterpolator1618 = x3d.OrientationInterpolator()
OrientationInterpolator1618.DEF = "vc2_OI"
IS1619 = x3d.IS()
connect1620 = x3d.connect()
connect1620.nodeField = "key"
connect1620.protoField = "vc2_key"

IS1619.connect.append(connect1620)
connect1621 = x3d.connect()
connect1621.nodeField = "keyValue"
connect1621.protoField = "vc2_keyValue"

IS1619.connect.append(connect1621)
connect1622 = x3d.connect()
connect1622.nodeField = "value_changed"
connect1622.protoField = "vc2_changed"

IS1619.connect.append(connect1622)

OrientationInterpolator1618.IS = IS1619

ProtoBody603.children.append(OrientationInterpolator1618)
ROUTE1623 = x3d.ROUTE()
ROUTE1623.fromField = "fraction_changed"
ROUTE1623.fromNode = "BehaviorClock"
ROUTE1623.toField = "set_fraction"
ROUTE1623.toNode = "vc2_OI"

ProtoBody603.children.append(ROUTE1623)
OrientationInterpolator1624 = x3d.OrientationInterpolator()
OrientationInterpolator1624.DEF = "vc3_OI"
IS1625 = x3d.IS()
connect1626 = x3d.connect()
connect1626.nodeField = "key"
connect1626.protoField = "vc3_key"

IS1625.connect.append(connect1626)
connect1627 = x3d.connect()
connect1627.nodeField = "keyValue"
connect1627.protoField = "vc3_keyValue"

IS1625.connect.append(connect1627)
connect1628 = x3d.connect()
connect1628.nodeField = "value_changed"
connect1628.protoField = "vc3_changed"

IS1625.connect.append(connect1628)

OrientationInterpolator1624.IS = IS1625

ProtoBody603.children.append(OrientationInterpolator1624)
ROUTE1629 = x3d.ROUTE()
ROUTE1629.fromField = "fraction_changed"
ROUTE1629.fromNode = "BehaviorClock"
ROUTE1629.toField = "set_fraction"
ROUTE1629.toNode = "vc3_OI"

ProtoBody603.children.append(ROUTE1629)
OrientationInterpolator1630 = x3d.OrientationInterpolator()
OrientationInterpolator1630.DEF = "vc4_OI"
IS1631 = x3d.IS()
connect1632 = x3d.connect()
connect1632.nodeField = "key"
connect1632.protoField = "vc4_key"

IS1631.connect.append(connect1632)
connect1633 = x3d.connect()
connect1633.nodeField = "keyValue"
connect1633.protoField = "vc4_keyValue"

IS1631.connect.append(connect1633)
connect1634 = x3d.connect()
connect1634.nodeField = "value_changed"
connect1634.protoField = "vc4_changed"

IS1631.connect.append(connect1634)

OrientationInterpolator1630.IS = IS1631

ProtoBody603.children.append(OrientationInterpolator1630)
ROUTE1635 = x3d.ROUTE()
ROUTE1635.fromField = "fraction_changed"
ROUTE1635.fromNode = "BehaviorClock"
ROUTE1635.toField = "set_fraction"
ROUTE1635.toNode = "vc4_OI"

ProtoBody603.children.append(ROUTE1635)
OrientationInterpolator1636 = x3d.OrientationInterpolator()
OrientationInterpolator1636.DEF = "vc5_OI"
IS1637 = x3d.IS()
connect1638 = x3d.connect()
connect1638.nodeField = "key"
connect1638.protoField = "vc5_key"

IS1637.connect.append(connect1638)
connect1639 = x3d.connect()
connect1639.nodeField = "keyValue"
connect1639.protoField = "vc5_keyValue"

IS1637.connect.append(connect1639)
connect1640 = x3d.connect()
connect1640.nodeField = "value_changed"
connect1640.protoField = "vc5_changed"

IS1637.connect.append(connect1640)

OrientationInterpolator1636.IS = IS1637

ProtoBody603.children.append(OrientationInterpolator1636)
ROUTE1641 = x3d.ROUTE()
ROUTE1641.fromField = "fraction_changed"
ROUTE1641.fromNode = "BehaviorClock"
ROUTE1641.toField = "set_fraction"
ROUTE1641.toNode = "vc5_OI"

ProtoBody603.children.append(ROUTE1641)
OrientationInterpolator1642 = x3d.OrientationInterpolator()
OrientationInterpolator1642.DEF = "vc6_OI"
IS1643 = x3d.IS()
connect1644 = x3d.connect()
connect1644.nodeField = "key"
connect1644.protoField = "vc6_key"

IS1643.connect.append(connect1644)
connect1645 = x3d.connect()
connect1645.nodeField = "keyValue"
connect1645.protoField = "vc6_keyValue"

IS1643.connect.append(connect1645)
connect1646 = x3d.connect()
connect1646.nodeField = "value_changed"
connect1646.protoField = "vc6_changed"

IS1643.connect.append(connect1646)

OrientationInterpolator1642.IS = IS1643

ProtoBody603.children.append(OrientationInterpolator1642)
ROUTE1647 = x3d.ROUTE()
ROUTE1647.fromField = "fraction_changed"
ROUTE1647.fromNode = "BehaviorClock"
ROUTE1647.toField = "set_fraction"
ROUTE1647.toNode = "vc6_OI"

ProtoBody603.children.append(ROUTE1647)
OrientationInterpolator1648 = x3d.OrientationInterpolator()
OrientationInterpolator1648.DEF = "vc7_OI"
IS1649 = x3d.IS()
connect1650 = x3d.connect()
connect1650.nodeField = "key"
connect1650.protoField = "vc7_key"

IS1649.connect.append(connect1650)
connect1651 = x3d.connect()
connect1651.nodeField = "keyValue"
connect1651.protoField = "vc7_keyValue"

IS1649.connect.append(connect1651)
connect1652 = x3d.connect()
connect1652.nodeField = "value_changed"
connect1652.protoField = "vc7_changed"

IS1649.connect.append(connect1652)

OrientationInterpolator1648.IS = IS1649

ProtoBody603.children.append(OrientationInterpolator1648)
ROUTE1653 = x3d.ROUTE()
ROUTE1653.fromField = "fraction_changed"
ROUTE1653.fromNode = "BehaviorClock"
ROUTE1653.toField = "set_fraction"
ROUTE1653.toNode = "vc7_OI"

ProtoBody603.children.append(ROUTE1653)
OrientationInterpolator1654 = x3d.OrientationInterpolator()
OrientationInterpolator1654.DEF = "vl1_OI"
IS1655 = x3d.IS()
connect1656 = x3d.connect()
connect1656.nodeField = "key"
connect1656.protoField = "vl1_key"

IS1655.connect.append(connect1656)
connect1657 = x3d.connect()
connect1657.nodeField = "keyValue"
connect1657.protoField = "vl1_keyValue"

IS1655.connect.append(connect1657)
connect1658 = x3d.connect()
connect1658.nodeField = "value_changed"
connect1658.protoField = "vl1_changed"

IS1655.connect.append(connect1658)

OrientationInterpolator1654.IS = IS1655

ProtoBody603.children.append(OrientationInterpolator1654)
ROUTE1659 = x3d.ROUTE()
ROUTE1659.fromField = "fraction_changed"
ROUTE1659.fromNode = "BehaviorClock"
ROUTE1659.toField = "set_fraction"
ROUTE1659.toNode = "vl1_OI"

ProtoBody603.children.append(ROUTE1659)
OrientationInterpolator1660 = x3d.OrientationInterpolator()
OrientationInterpolator1660.DEF = "vl2_OI"
IS1661 = x3d.IS()
connect1662 = x3d.connect()
connect1662.nodeField = "key"
connect1662.protoField = "vl2_key"

IS1661.connect.append(connect1662)
connect1663 = x3d.connect()
connect1663.nodeField = "keyValue"
connect1663.protoField = "vl2_keyValue"

IS1661.connect.append(connect1663)
connect1664 = x3d.connect()
connect1664.nodeField = "value_changed"
connect1664.protoField = "vl2_changed"

IS1661.connect.append(connect1664)

OrientationInterpolator1660.IS = IS1661

ProtoBody603.children.append(OrientationInterpolator1660)
ROUTE1665 = x3d.ROUTE()
ROUTE1665.fromField = "fraction_changed"
ROUTE1665.fromNode = "BehaviorClock"
ROUTE1665.toField = "set_fraction"
ROUTE1665.toNode = "vl2_OI"

ProtoBody603.children.append(ROUTE1665)
OrientationInterpolator1666 = x3d.OrientationInterpolator()
OrientationInterpolator1666.DEF = "vl3_OI"
IS1667 = x3d.IS()
connect1668 = x3d.connect()
connect1668.nodeField = "key"
connect1668.protoField = "vl3_key"

IS1667.connect.append(connect1668)
connect1669 = x3d.connect()
connect1669.nodeField = "keyValue"
connect1669.protoField = "vl3_keyValue"

IS1667.connect.append(connect1669)
connect1670 = x3d.connect()
connect1670.nodeField = "value_changed"
connect1670.protoField = "vl3_changed"

IS1667.connect.append(connect1670)

OrientationInterpolator1666.IS = IS1667

ProtoBody603.children.append(OrientationInterpolator1666)
ROUTE1671 = x3d.ROUTE()
ROUTE1671.fromField = "fraction_changed"
ROUTE1671.fromNode = "BehaviorClock"
ROUTE1671.toField = "set_fraction"
ROUTE1671.toNode = "vl3_OI"

ProtoBody603.children.append(ROUTE1671)
OrientationInterpolator1672 = x3d.OrientationInterpolator()
OrientationInterpolator1672.DEF = "vl4_OI"
IS1673 = x3d.IS()
connect1674 = x3d.connect()
connect1674.nodeField = "key"
connect1674.protoField = "vl4_key"

IS1673.connect.append(connect1674)
connect1675 = x3d.connect()
connect1675.nodeField = "keyValue"
connect1675.protoField = "vl4_keyValue"

IS1673.connect.append(connect1675)
connect1676 = x3d.connect()
connect1676.nodeField = "value_changed"
connect1676.protoField = "vl4_changed"

IS1673.connect.append(connect1676)

OrientationInterpolator1672.IS = IS1673

ProtoBody603.children.append(OrientationInterpolator1672)
ROUTE1677 = x3d.ROUTE()
ROUTE1677.fromField = "fraction_changed"
ROUTE1677.fromNode = "BehaviorClock"
ROUTE1677.toField = "set_fraction"
ROUTE1677.toNode = "vl4_OI"

ProtoBody603.children.append(ROUTE1677)
OrientationInterpolator1678 = x3d.OrientationInterpolator()
OrientationInterpolator1678.DEF = "vl5_OI"
IS1679 = x3d.IS()
connect1680 = x3d.connect()
connect1680.nodeField = "key"
connect1680.protoField = "vl5_key"

IS1679.connect.append(connect1680)
connect1681 = x3d.connect()
connect1681.nodeField = "keyValue"
connect1681.protoField = "vl5_keyValue"

IS1679.connect.append(connect1681)
connect1682 = x3d.connect()
connect1682.nodeField = "value_changed"
connect1682.protoField = "vl5_changed"

IS1679.connect.append(connect1682)

OrientationInterpolator1678.IS = IS1679

ProtoBody603.children.append(OrientationInterpolator1678)
ROUTE1683 = x3d.ROUTE()
ROUTE1683.fromField = "fraction_changed"
ROUTE1683.fromNode = "BehaviorClock"
ROUTE1683.toField = "set_fraction"
ROUTE1683.toNode = "vl5_OI"

ProtoBody603.children.append(ROUTE1683)
OrientationInterpolator1684 = x3d.OrientationInterpolator()
OrientationInterpolator1684.DEF = "vt1_OI"
IS1685 = x3d.IS()
connect1686 = x3d.connect()
connect1686.nodeField = "key"
connect1686.protoField = "vt1_key"

IS1685.connect.append(connect1686)
connect1687 = x3d.connect()
connect1687.nodeField = "keyValue"
connect1687.protoField = "vt1_keyValue"

IS1685.connect.append(connect1687)
connect1688 = x3d.connect()
connect1688.nodeField = "value_changed"
connect1688.protoField = "vt1_changed"

IS1685.connect.append(connect1688)

OrientationInterpolator1684.IS = IS1685

ProtoBody603.children.append(OrientationInterpolator1684)
ROUTE1689 = x3d.ROUTE()
ROUTE1689.fromField = "fraction_changed"
ROUTE1689.fromNode = "BehaviorClock"
ROUTE1689.toField = "set_fraction"
ROUTE1689.toNode = "vt1_OI"

ProtoBody603.children.append(ROUTE1689)
OrientationInterpolator1690 = x3d.OrientationInterpolator()
OrientationInterpolator1690.DEF = "vt2_OI"
IS1691 = x3d.IS()
connect1692 = x3d.connect()
connect1692.nodeField = "key"
connect1692.protoField = "vt2_key"

IS1691.connect.append(connect1692)
connect1693 = x3d.connect()
connect1693.nodeField = "keyValue"
connect1693.protoField = "vt2_keyValue"

IS1691.connect.append(connect1693)
connect1694 = x3d.connect()
connect1694.nodeField = "value_changed"
connect1694.protoField = "vt2_changed"

IS1691.connect.append(connect1694)

OrientationInterpolator1690.IS = IS1691

ProtoBody603.children.append(OrientationInterpolator1690)
ROUTE1695 = x3d.ROUTE()
ROUTE1695.fromField = "fraction_changed"
ROUTE1695.fromNode = "BehaviorClock"
ROUTE1695.toField = "set_fraction"
ROUTE1695.toNode = "vt2_OI"

ProtoBody603.children.append(ROUTE1695)
OrientationInterpolator1696 = x3d.OrientationInterpolator()
OrientationInterpolator1696.DEF = "vt3_OI"
IS1697 = x3d.IS()
connect1698 = x3d.connect()
connect1698.nodeField = "key"
connect1698.protoField = "vt3_key"

IS1697.connect.append(connect1698)
connect1699 = x3d.connect()
connect1699.nodeField = "keyValue"
connect1699.protoField = "vt3_keyValue"

IS1697.connect.append(connect1699)
connect1700 = x3d.connect()
connect1700.nodeField = "value_changed"
connect1700.protoField = "vt3_changed"

IS1697.connect.append(connect1700)

OrientationInterpolator1696.IS = IS1697

ProtoBody603.children.append(OrientationInterpolator1696)
ROUTE1701 = x3d.ROUTE()
ROUTE1701.fromField = "fraction_changed"
ROUTE1701.fromNode = "BehaviorClock"
ROUTE1701.toField = "set_fraction"
ROUTE1701.toNode = "vt3_OI"

ProtoBody603.children.append(ROUTE1701)
OrientationInterpolator1702 = x3d.OrientationInterpolator()
OrientationInterpolator1702.DEF = "vt4_OI"
IS1703 = x3d.IS()
connect1704 = x3d.connect()
connect1704.nodeField = "key"
connect1704.protoField = "vt4_key"

IS1703.connect.append(connect1704)
connect1705 = x3d.connect()
connect1705.nodeField = "keyValue"
connect1705.protoField = "vt4_keyValue"

IS1703.connect.append(connect1705)
connect1706 = x3d.connect()
connect1706.nodeField = "value_changed"
connect1706.protoField = "vt4_changed"

IS1703.connect.append(connect1706)

OrientationInterpolator1702.IS = IS1703

ProtoBody603.children.append(OrientationInterpolator1702)
ROUTE1707 = x3d.ROUTE()
ROUTE1707.fromField = "fraction_changed"
ROUTE1707.fromNode = "BehaviorClock"
ROUTE1707.toField = "set_fraction"
ROUTE1707.toNode = "vt4_OI"

ProtoBody603.children.append(ROUTE1707)
OrientationInterpolator1708 = x3d.OrientationInterpolator()
OrientationInterpolator1708.DEF = "vt5_OI"
IS1709 = x3d.IS()
connect1710 = x3d.connect()
connect1710.nodeField = "key"
connect1710.protoField = "vt5_key"

IS1709.connect.append(connect1710)
connect1711 = x3d.connect()
connect1711.nodeField = "keyValue"
connect1711.protoField = "vt5_keyValue"

IS1709.connect.append(connect1711)
connect1712 = x3d.connect()
connect1712.nodeField = "value_changed"
connect1712.protoField = "vt5_changed"

IS1709.connect.append(connect1712)

OrientationInterpolator1708.IS = IS1709

ProtoBody603.children.append(OrientationInterpolator1708)
ROUTE1713 = x3d.ROUTE()
ROUTE1713.fromField = "fraction_changed"
ROUTE1713.fromNode = "BehaviorClock"
ROUTE1713.toField = "set_fraction"
ROUTE1713.toNode = "vt5_OI"

ProtoBody603.children.append(ROUTE1713)
OrientationInterpolator1714 = x3d.OrientationInterpolator()
OrientationInterpolator1714.DEF = "vt6_OI"
IS1715 = x3d.IS()
connect1716 = x3d.connect()
connect1716.nodeField = "key"
connect1716.protoField = "vt6_key"

IS1715.connect.append(connect1716)
connect1717 = x3d.connect()
connect1717.nodeField = "keyValue"
connect1717.protoField = "vt6_keyValue"

IS1715.connect.append(connect1717)
connect1718 = x3d.connect()
connect1718.nodeField = "value_changed"
connect1718.protoField = "vt6_changed"

IS1715.connect.append(connect1718)

OrientationInterpolator1714.IS = IS1715

ProtoBody603.children.append(OrientationInterpolator1714)
ROUTE1719 = x3d.ROUTE()
ROUTE1719.fromField = "fraction_changed"
ROUTE1719.fromNode = "BehaviorClock"
ROUTE1719.toField = "set_fraction"
ROUTE1719.toNode = "vt6_OI"

ProtoBody603.children.append(ROUTE1719)
OrientationInterpolator1720 = x3d.OrientationInterpolator()
OrientationInterpolator1720.DEF = "vt7_OI"
IS1721 = x3d.IS()
connect1722 = x3d.connect()
connect1722.nodeField = "key"
connect1722.protoField = "vt7_key"

IS1721.connect.append(connect1722)
connect1723 = x3d.connect()
connect1723.nodeField = "keyValue"
connect1723.protoField = "vt7_keyValue"

IS1721.connect.append(connect1723)
connect1724 = x3d.connect()
connect1724.nodeField = "value_changed"
connect1724.protoField = "vt7_changed"

IS1721.connect.append(connect1724)

OrientationInterpolator1720.IS = IS1721

ProtoBody603.children.append(OrientationInterpolator1720)
ROUTE1725 = x3d.ROUTE()
ROUTE1725.fromField = "fraction_changed"
ROUTE1725.fromNode = "BehaviorClock"
ROUTE1725.toField = "set_fraction"
ROUTE1725.toNode = "vt7_OI"

ProtoBody603.children.append(ROUTE1725)
OrientationInterpolator1726 = x3d.OrientationInterpolator()
OrientationInterpolator1726.DEF = "vt8_OI"
IS1727 = x3d.IS()
connect1728 = x3d.connect()
connect1728.nodeField = "key"
connect1728.protoField = "vt8_key"

IS1727.connect.append(connect1728)
connect1729 = x3d.connect()
connect1729.nodeField = "keyValue"
connect1729.protoField = "vt8_keyValue"

IS1727.connect.append(connect1729)
connect1730 = x3d.connect()
connect1730.nodeField = "value_changed"
connect1730.protoField = "vt8_changed"

IS1727.connect.append(connect1730)

OrientationInterpolator1726.IS = IS1727

ProtoBody603.children.append(OrientationInterpolator1726)
ROUTE1731 = x3d.ROUTE()
ROUTE1731.fromField = "fraction_changed"
ROUTE1731.fromNode = "BehaviorClock"
ROUTE1731.toField = "set_fraction"
ROUTE1731.toNode = "vt8_OI"

ProtoBody603.children.append(ROUTE1731)
OrientationInterpolator1732 = x3d.OrientationInterpolator()
OrientationInterpolator1732.DEF = "vt9_OI"
IS1733 = x3d.IS()
connect1734 = x3d.connect()
connect1734.nodeField = "key"
connect1734.protoField = "vt9_key"

IS1733.connect.append(connect1734)
connect1735 = x3d.connect()
connect1735.nodeField = "keyValue"
connect1735.protoField = "vt9_keyValue"

IS1733.connect.append(connect1735)
connect1736 = x3d.connect()
connect1736.nodeField = "value_changed"
connect1736.protoField = "vt9_changed"

IS1733.connect.append(connect1736)

OrientationInterpolator1732.IS = IS1733

ProtoBody603.children.append(OrientationInterpolator1732)
ROUTE1737 = x3d.ROUTE()
ROUTE1737.fromField = "fraction_changed"
ROUTE1737.fromNode = "BehaviorClock"
ROUTE1737.toField = "set_fraction"
ROUTE1737.toNode = "vt9_OI"

ProtoBody603.children.append(ROUTE1737)
OrientationInterpolator1738 = x3d.OrientationInterpolator()
OrientationInterpolator1738.DEF = "vt10_OI"
IS1739 = x3d.IS()
connect1740 = x3d.connect()
connect1740.nodeField = "key"
connect1740.protoField = "vt10_key"

IS1739.connect.append(connect1740)
connect1741 = x3d.connect()
connect1741.nodeField = "keyValue"
connect1741.protoField = "vt10_keyValue"

IS1739.connect.append(connect1741)
connect1742 = x3d.connect()
connect1742.nodeField = "value_changed"
connect1742.protoField = "vt10_changed"

IS1739.connect.append(connect1742)

OrientationInterpolator1738.IS = IS1739

ProtoBody603.children.append(OrientationInterpolator1738)
ROUTE1743 = x3d.ROUTE()
ROUTE1743.fromField = "fraction_changed"
ROUTE1743.fromNode = "BehaviorClock"
ROUTE1743.toField = "set_fraction"
ROUTE1743.toNode = "vt10_OI"

ProtoBody603.children.append(ROUTE1743)
OrientationInterpolator1744 = x3d.OrientationInterpolator()
OrientationInterpolator1744.DEF = "vt11_OI"
IS1745 = x3d.IS()
connect1746 = x3d.connect()
connect1746.nodeField = "key"
connect1746.protoField = "vt11_key"

IS1745.connect.append(connect1746)
connect1747 = x3d.connect()
connect1747.nodeField = "keyValue"
connect1747.protoField = "vt11_keyValue"

IS1745.connect.append(connect1747)
connect1748 = x3d.connect()
connect1748.nodeField = "value_changed"
connect1748.protoField = "vt11_changed"

IS1745.connect.append(connect1748)

OrientationInterpolator1744.IS = IS1745

ProtoBody603.children.append(OrientationInterpolator1744)
ROUTE1749 = x3d.ROUTE()
ROUTE1749.fromField = "fraction_changed"
ROUTE1749.fromNode = "BehaviorClock"
ROUTE1749.toField = "set_fraction"
ROUTE1749.toNode = "vt11_OI"

ProtoBody603.children.append(ROUTE1749)
OrientationInterpolator1750 = x3d.OrientationInterpolator()
OrientationInterpolator1750.DEF = "vt12_OI"
IS1751 = x3d.IS()
connect1752 = x3d.connect()
connect1752.nodeField = "key"
connect1752.protoField = "vt12_key"

IS1751.connect.append(connect1752)
connect1753 = x3d.connect()
connect1753.nodeField = "keyValue"
connect1753.protoField = "vt12_keyValue"

IS1751.connect.append(connect1753)
connect1754 = x3d.connect()
connect1754.nodeField = "value_changed"
connect1754.protoField = "vt12_changed"

IS1751.connect.append(connect1754)

OrientationInterpolator1750.IS = IS1751

ProtoBody603.children.append(OrientationInterpolator1750)
ROUTE1755 = x3d.ROUTE()
ROUTE1755.fromField = "fraction_changed"
ROUTE1755.fromNode = "BehaviorClock"
ROUTE1755.toField = "set_fraction"
ROUTE1755.toNode = "vt12_OI"

ProtoBody603.children.append(ROUTE1755)

ProtoDeclare20.ProtoBody = ProtoBody603

Scene18.children.append(ProtoDeclare20)
ProtoDeclare1756 = x3d.ProtoDeclare()
ProtoDeclare1756.name = "HAnimBodyBehaviorChooser"
ProtoDeclare1756.appinfo = "The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time."
ProtoInterface1757 = x3d.ProtoInterface()
"""TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs"""
"""accessType=\"inputOutput\" avoided to maintain backwards compatilibility with VRML97 scripting constraints"""
"""shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs"""
"""TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName"""
"""TODO: consider addBody, removeBody, addBehavior, removeBehavior"""
"""TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName"""
field1758 = x3d.field()
field1758.name = "supportedLOA"
field1758.accessType = "inputOutput"
field1758.appinfo = "Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3."
field1758.type = "SFInt32"
field1758.value = -1

ProtoInterface1757.field.append(field1758)
field1759 = x3d.field()
field1759.name = "HumanoidArray"
field1759.accessType = "initializeOnly"
field1759.appinfo = "[HAnimHumanoid] nodes only"
field1759.type = "MFNode"
"""default NULL"""

ProtoInterface1757.field.append(field1759)
field1760 = x3d.field()
field1760.name = "whichBody"
field1760.accessType = "initializeOnly"
field1760.appinfo = "whichBody is selected default is initial member of HumanoidArray"
field1760.type = "SFInt32"
field1760.value = -1

ProtoInterface1757.field.append(field1760)
field1761 = x3d.field()
field1761.name = "set_whichBody"
field1761.accessType = "inputOnly"
field1761.appinfo = "whichBody is selected default is none"
field1761.type = "SFInt32"

ProtoInterface1757.field.append(field1761)
field1762 = x3d.field()
field1762.name = "whichBody_changed"
field1762.accessType = "outputOnly"
field1762.appinfo = "whichBody is selected default is none"
field1762.type = "SFInt32"

ProtoInterface1757.field.append(field1762)
field1763 = x3d.field()
field1763.name = "hAnimBehaviorNodes"
field1763.accessType = "initializeOnly"
field1763.appinfo = "[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time."
field1763.type = "MFNode"
"""default NULL"""

ProtoInterface1757.field.append(field1763)
field1764 = x3d.field()
field1764.name = "enabledBehaviorsArray"
field1764.accessType = "initializeOnly"
field1764.appinfo = "indicate which HAnimBehavior nodes are activated, empty indicates all enabled true"
field1764.type = "MFBool"
"""no default values"""

ProtoInterface1757.field.append(field1764)
field1765 = x3d.field()
field1765.name = "enableBehavior"
field1765.accessType = "inputOnly"
field1765.appinfo = "enable corresponding behavior identified by index number"
field1765.type = "SFInt32"

ProtoInterface1757.field.append(field1765)
field1766 = x3d.field()
field1766.name = "disableBehavior"
field1766.accessType = "inputOnly"
field1766.appinfo = "disable corresponding behavior identified by index number"
field1766.type = "SFInt32"

ProtoInterface1757.field.append(field1766)
field1767 = x3d.field()
field1767.name = "startTime"
field1767.accessType = "inputOutput"
field1767.type = "SFTime"
field1767.value = 0

ProtoInterface1757.field.append(field1767)
field1768 = x3d.field()
field1768.name = "stopTime"
field1768.accessType = "inputOutput"
field1768.type = "SFTime"
field1768.value = 0

ProtoInterface1757.field.append(field1768)

ProtoDeclare1756.ProtoInterface = ProtoInterface1757
ProtoBody1769 = x3d.ProtoBody()
Switch1770 = x3d.Switch()
Switch1770.DEF = "BodySwitch"
Switch1770.whichChoice = -1
IS1771 = x3d.IS()
connect1772 = x3d.connect()
connect1772.nodeField = "whichChoice"
connect1772.protoField = "whichBody"

IS1771.connect.append(connect1772)
connect1773 = x3d.connect()
connect1773.nodeField = "children"
connect1773.protoField = "HumanoidArray"

IS1771.connect.append(connect1773)

Switch1770.IS = IS1771

ProtoBody1769.children.append(Switch1770)
"""note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless"""
Group1774 = x3d.Group()
Group1774.DEF = "BehaviorArrayHolder"
IS1775 = x3d.IS()
connect1776 = x3d.connect()
connect1776.nodeField = "children"
connect1776.protoField = "hAnimBehaviorNodes"

IS1775.connect.append(connect1776)

Group1774.IS = IS1775

ProtoBody1769.children.append(Group1774)
TimeSensor1777 = x3d.TimeSensor()
TimeSensor1777.DEF = "TimeSensorHolderStartStopTimes"
IS1778 = x3d.IS()
connect1779 = x3d.connect()
connect1779.nodeField = "startTime"
connect1779.protoField = "startTime"

IS1778.connect.append(connect1779)
connect1780 = x3d.connect()
connect1780.nodeField = "stopTime"
connect1780.protoField = "stopTime"

IS1778.connect.append(connect1780)

TimeSensor1777.IS = IS1778

ProtoBody1769.children.append(TimeSensor1777)
Switch1781 = x3d.Switch()
Switch1781.DEF = "SupportedLoaHolder2"
Switch1781.whichChoice = -1
IS1782 = x3d.IS()
connect1783 = x3d.connect()
connect1783.nodeField = "whichChoice"
connect1783.protoField = "supportedLOA"

IS1782.connect.append(connect1783)

Switch1781.IS = IS1782

ProtoBody1769.children.append(Switch1781)
Script1784 = x3d.Script()
Script1784.DEF = "BehaviorSelectionScript"
Script1784.directOutput = True
Script1784.url = ["HAnimBehaviorPrototypesScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js"]
field1785 = x3d.field()
field1785.name = "HumanoidArray"
field1785.accessType = "initializeOnly"
field1785.appinfo = "[HAnimHumanoid] nodes only"
field1785.type = "MFNode"

Script1784.field.append(field1785)
field1786 = x3d.field()
field1786.name = "whichBody"
field1786.accessType = "initializeOnly"
field1786.appinfo = "whichBody is selected default is none"
field1786.type = "SFInt32"

Script1784.field.append(field1786)
field1787 = x3d.field()
field1787.name = "set_whichBody"
field1787.accessType = "inputOnly"
field1787.appinfo = "whichBody is selected default is none"
field1787.type = "SFInt32"

Script1784.field.append(field1787)
field1788 = x3d.field()
field1788.name = "whichBody_changed"
field1788.accessType = "outputOnly"
field1788.appinfo = "whichBody is selected default is none"
field1788.type = "SFInt32"

Script1784.field.append(field1788)
field1789 = x3d.field()
field1789.name = "hAnimBehaviorNodes"
field1789.accessType = "initializeOnly"
field1789.appinfo = "[HAnimBehavior] nodes only"
field1789.type = "MFNode"
"""TODO: might consider accessType=\"inputOutput\" if VRML97 compatibility not needed"""

Script1784.field.append(field1789)
field1790 = x3d.field()
field1790.name = "enabledBehaviorsArray"
field1790.accessType = "initializeOnly"
field1790.type = "MFBool"

Script1784.field.append(field1790)
field1791 = x3d.field()
field1791.name = "enableBehavior"
field1791.accessType = "inputOnly"
field1791.appinfo = "enable corresponding behavior"
field1791.type = "SFInt32"

Script1784.field.append(field1791)
field1792 = x3d.field()
field1792.name = "disableBehavior"
field1792.accessType = "inputOnly"
field1792.appinfo = "enable corresponding behavior"
field1792.type = "SFInt32"

Script1784.field.append(field1792)
field1793 = x3d.field()
field1793.name = "timeSensorNode"
field1793.accessType = "initializeOnly"
field1793.type = "SFNode"
TimeSensor1794 = x3d.TimeSensor()
TimeSensor1794.USE = "TimeSensorHolderStartStopTimes"

field1793.children.append(TimeSensor1794)

Script1784.field.append(field1793)
field1795 = x3d.field()
field1795.name = "previousBodyIndex"
field1795.accessType = "initializeOnly"
field1795.appinfo = "remember prior body index to avoid unnecessary ROUTE teardown and creation"
field1795.type = "SFInt32"
field1795.value = -1

Script1784.field.append(field1795)
field1796 = x3d.field()
field1796.name = "traceEnabled"
field1796.accessType = "initializeOnly"
field1796.type = "SFBool"
field1796.value = True

Script1784.field.append(field1796)
IS1797 = x3d.IS()
connect1798 = x3d.connect()
connect1798.nodeField = "HumanoidArray"
connect1798.protoField = "HumanoidArray"

IS1797.connect.append(connect1798)
connect1799 = x3d.connect()
connect1799.nodeField = "whichBody"
connect1799.protoField = "whichBody"

IS1797.connect.append(connect1799)
connect1800 = x3d.connect()
connect1800.nodeField = "set_whichBody"
connect1800.protoField = "set_whichBody"

IS1797.connect.append(connect1800)
connect1801 = x3d.connect()
connect1801.nodeField = "whichBody_changed"
connect1801.protoField = "whichBody_changed"

IS1797.connect.append(connect1801)
connect1802 = x3d.connect()
connect1802.nodeField = "hAnimBehaviorNodes"
connect1802.protoField = "hAnimBehaviorNodes"

IS1797.connect.append(connect1802)
connect1803 = x3d.connect()
connect1803.nodeField = "enabledBehaviorsArray"
connect1803.protoField = "enabledBehaviorsArray"

IS1797.connect.append(connect1803)
connect1804 = x3d.connect()
connect1804.nodeField = "enableBehavior"
connect1804.protoField = "enableBehavior"

IS1797.connect.append(connect1804)
connect1805 = x3d.connect()
connect1805.nodeField = "disableBehavior"
connect1805.protoField = "disableBehavior"

IS1797.connect.append(connect1805)

Script1784.IS = IS1797

ProtoBody1769.children.append(Script1784)

ProtoDeclare1756.ProtoBody = ProtoBody1769

Scene18.children.append(ProtoDeclare1756)
"""TODO: Goal is to have 3 different ways to present a body: local creation, Inline with IMPORT/EXPORT, or external prototype."""
ProtoInstance1806 = x3d.ProtoInstance()
ProtoInstance1806.name = "HAnimBehavior"
ProtoInstance1806.DEF = "BehaviorTest1"
"""only one PositionInterpolator key/keyValue definition for entire humanoid - optional"""
"""must have paired overrides of each key/keyValue array being defined"""
fieldValue1807 = x3d.fieldValue()
fieldValue1807.name = "HumanoidRoot_translation_key"
fieldValue1807.value = "0 0.25 0.5 0.75 1"

ProtoInstance1806.fieldValue.append(fieldValue1807)
fieldValue1808 = x3d.fieldValue()
fieldValue1808.name = "HumanoidRoot_translation_keyValue"
fieldValue1808.value = "0 0 0 0 0 10 0 0 20 0 0 30 0 0 40 0 0 50"

ProtoInstance1806.fieldValue.append(fieldValue1808)
fieldValue1809 = x3d.fieldValue()
fieldValue1809.name = "r_ankle_key"
fieldValue1809.value = "0 0.5 1"

ProtoInstance1806.fieldValue.append(fieldValue1809)
fieldValue1810 = x3d.fieldValue()
fieldValue1810.name = "r_ankle_keyValue"
fieldValue1810.value = "0 1 0 0 0 1 0 0.2 0 1 0 0.4"

ProtoInstance1806.fieldValue.append(fieldValue1810)

Scene18.children.append(ProtoInstance1806)
ProtoInstance1811 = x3d.ProtoInstance()
ProtoInstance1811.name = "HAnimBodyBehaviorChooser"
ProtoInstance1811.DEF = "ChooserTest"
fieldValue1812 = x3d.fieldValue()
fieldValue1812.name = "HumanoidArray"
HAnimHumanoid1813 = x3d.HAnimHumanoid()
HAnimHumanoid1813.name = "DiamondManLOA-1"
HAnimHumanoid1813.DEF = "hanim_DiamondManLOA-1"
HAnimHumanoid1813.version = "2.0"

fieldValue1812.children.append(HAnimHumanoid1813)

ProtoInstance1811.fieldValue.append(fieldValue1812)
fieldValue1814 = x3d.fieldValue()
fieldValue1814.name = "whichBody"
fieldValue1814.value = "0"

ProtoInstance1811.fieldValue.append(fieldValue1814)
fieldValue1815 = x3d.fieldValue()
fieldValue1815.name = "hAnimBehaviorNodes"
ProtoInstance1816 = x3d.ProtoInstance()
ProtoInstance1816.USE = "BehaviorTest1"

fieldValue1815.children.append(ProtoInstance1816)

ProtoInstance1811.fieldValue.append(fieldValue1815)
fieldValue1817 = x3d.fieldValue()
fieldValue1817.name = "enabledBehaviorsArray"
fieldValue1817.value = "true"

ProtoInstance1811.fieldValue.append(fieldValue1817)

Scene18.children.append(ProtoInstance1811)

X3D0.Scene = Scene18
f = open("../data/HAnimBehaviorPrototypes.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimBehaviorPrototypes.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
