print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta7.content = "Mon, 09 Feb 2026 12:24:16 GMT"

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

X3D0.head = head1
Scene16 = x3d.Scene()
ProtoDeclare17 = x3d.ProtoDeclare()
ProtoDeclare17.name = "HAnimBehavior"
ProtoDeclare17.appinfo = "The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior."
ProtoDeclare17.documentation = "https://www.web3d.org/files/specifications/19774/V1.0/"
ProtoInterface18 = x3d.ProtoInterface()
field19 = x3d.field()
field19.accessType = "inputOutput"
field19.type = "SFInt32"
field19.name = "supportedLOA"
field19.value = -1
field19.appinfo = "Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3."

ProtoInterface18.field.append(field19)
field20 = x3d.field()
field20.accessType = "inputOutput"
field20.type = "SFBool"
field20.name = "enabled"
field20.value = True
field20.appinfo = "is this behavior enabled?"

ProtoInterface18.field.append(field20)
field21 = x3d.field()
field21.accessType = "inputOutput"
field21.type = "SFTime"
field21.name = "cycleInterval"
field21.value = 1
field21.appinfo = "how long do these interpolators take to execute?"

ProtoInterface18.field.append(field21)
field22 = x3d.field()
field22.accessType = "inputOutput"
field22.type = "SFBool"
field22.name = "loop"
field22.appinfo = "whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands)."

ProtoInterface18.field.append(field22)
field23 = x3d.field()
field23.accessType = "inputOutput"
field23.type = "SFTime"
field23.name = "startTime"
field23.value = 0
field23.appinfo = "when time now >= startTime isActive becomes true and TimeSensor becomes active"

ProtoInterface18.field.append(field23)
field24 = x3d.field()
field24.accessType = "inputOutput"
field24.type = "SFTime"
field24.name = "stopTime"
field24.value = 0
field24.appinfo = "when stopTime becomes <= time now isActive becomes false and TimeSensor becomes inactive"

ProtoInterface18.field.append(field24)
field25 = x3d.field()
field25.accessType = "inputOutput"
field25.type = "SFTime"
field25.name = "pauseTime"
field25.value = 0
field25.appinfo = "when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused"

ProtoInterface18.field.append(field25)
field26 = x3d.field()
field26.accessType = "inputOutput"
field26.type = "SFTime"
field26.name = "resumeTime"
field26.value = 0
field26.appinfo = "when resumeTime becomes <= time now isPaused becomes false and TimeSensor becomes inactive"

ProtoInterface18.field.append(field26)
field27 = x3d.field()
field27.accessType = "outputOnly"
field27.type = "SFTime"
field27.name = "cycleTime"
field27.appinfo = "cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle"

ProtoInterface18.field.append(field27)
field28 = x3d.field()
field28.accessType = "outputOnly"
field28.type = "SFBool"
field28.name = "isActive"
field28.appinfo = "isActive true/false events are sent when TimeSensor starts/stops running"

ProtoInterface18.field.append(field28)
field29 = x3d.field()
field29.accessType = "outputOnly"
field29.type = "SFBool"
field29.name = "isPaused"
field29.appinfo = "isPaused true/false events are sent when TimeSensor is paused/resumed"

ProtoInterface18.field.append(field29)
field30 = x3d.field()
field30.accessType = "outputOnly"
field30.type = "SFBool"
field30.name = "elapsedTime"
field30.appinfo = "current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time"

ProtoInterface18.field.append(field30)
field31 = x3d.field()
field31.accessType = "outputOnly"
field31.type = "SFBool"
field31.name = "time"
field31.appinfo = "continuously sends the absolute time (since January 1 1970)"

ProtoInterface18.field.append(field31)
field32 = x3d.field()
field32.accessType = "outputOnly"
field32.type = "SFFloat"
field32.name = "fraction_changed"
field32.appinfo = "fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle."

ProtoInterface18.field.append(field32)
field33 = x3d.field()
field33.accessType = "inputOutput"
field33.type = "MFFloat"
field33.name = "HumanoidRoot_translation_key"

ProtoInterface18.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOutput"
field34.type = "MFVec3f"
field34.name = "HumanoidRoot_translation_keyValue"

ProtoInterface18.field.append(field34)
field35 = x3d.field()
field35.accessType = "outputOnly"
field35.type = "SFVec3f"
field35.name = "HumanoidRoot_translation_changed"

ProtoInterface18.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOutput"
field36.type = "MFFloat"
field36.name = "HumanoidRoot_rotation_key"

ProtoInterface18.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOutput"
field37.type = "MFRotation"
field37.name = "HumanoidRoot_rotation_keyValue"

ProtoInterface18.field.append(field37)
field38 = x3d.field()
field38.accessType = "outputOnly"
field38.type = "SFRotation"
field38.name = "HumanoidRoot_rotation_changed"

ProtoInterface18.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "MFFloat"
field39.name = "c1_key"

ProtoInterface18.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "MFRotation"
field40.name = "c1_keyValue"

ProtoInterface18.field.append(field40)
field41 = x3d.field()
field41.accessType = "outputOnly"
field41.type = "SFRotation"
field41.name = "c1_changed"

ProtoInterface18.field.append(field41)
field42 = x3d.field()
field42.accessType = "inputOutput"
field42.type = "MFFloat"
field42.name = "c2_key"

ProtoInterface18.field.append(field42)
field43 = x3d.field()
field43.accessType = "inputOutput"
field43.type = "MFRotation"
field43.name = "c2_keyValue"

ProtoInterface18.field.append(field43)
field44 = x3d.field()
field44.accessType = "outputOnly"
field44.type = "SFRotation"
field44.name = "c2_changed"

ProtoInterface18.field.append(field44)
field45 = x3d.field()
field45.accessType = "inputOutput"
field45.type = "MFFloat"
field45.name = "c3_key"

ProtoInterface18.field.append(field45)
field46 = x3d.field()
field46.accessType = "inputOutput"
field46.type = "MFRotation"
field46.name = "c3_keyValue"

ProtoInterface18.field.append(field46)
field47 = x3d.field()
field47.accessType = "outputOnly"
field47.type = "SFRotation"
field47.name = "c3_changed"

ProtoInterface18.field.append(field47)
field48 = x3d.field()
field48.accessType = "inputOutput"
field48.type = "MFFloat"
field48.name = "c4_key"

ProtoInterface18.field.append(field48)
field49 = x3d.field()
field49.accessType = "inputOutput"
field49.type = "MFRotation"
field49.name = "c4_keyValue"

ProtoInterface18.field.append(field49)
field50 = x3d.field()
field50.accessType = "outputOnly"
field50.type = "SFRotation"
field50.name = "c4_changed"

ProtoInterface18.field.append(field50)
field51 = x3d.field()
field51.accessType = "inputOutput"
field51.type = "MFFloat"
field51.name = "c5_key"

ProtoInterface18.field.append(field51)
field52 = x3d.field()
field52.accessType = "inputOutput"
field52.type = "MFRotation"
field52.name = "c5_keyValue"

ProtoInterface18.field.append(field52)
field53 = x3d.field()
field53.accessType = "outputOnly"
field53.type = "SFRotation"
field53.name = "c5_changed"

ProtoInterface18.field.append(field53)
field54 = x3d.field()
field54.accessType = "inputOutput"
field54.type = "MFFloat"
field54.name = "c6_key"

ProtoInterface18.field.append(field54)
field55 = x3d.field()
field55.accessType = "inputOutput"
field55.type = "MFRotation"
field55.name = "c6_keyValue"

ProtoInterface18.field.append(field55)
field56 = x3d.field()
field56.accessType = "outputOnly"
field56.type = "SFRotation"
field56.name = "c6_changed"

ProtoInterface18.field.append(field56)
field57 = x3d.field()
field57.accessType = "inputOutput"
field57.type = "MFFloat"
field57.name = "c7_key"

ProtoInterface18.field.append(field57)
field58 = x3d.field()
field58.accessType = "inputOutput"
field58.type = "MFRotation"
field58.name = "c7_keyValue"

ProtoInterface18.field.append(field58)
field59 = x3d.field()
field59.accessType = "outputOnly"
field59.type = "SFRotation"
field59.name = "c7_changed"

ProtoInterface18.field.append(field59)
field60 = x3d.field()
field60.accessType = "inputOutput"
field60.type = "MFFloat"
field60.name = "jaw_key"

ProtoInterface18.field.append(field60)
field61 = x3d.field()
field61.accessType = "inputOutput"
field61.type = "MFRotation"
field61.name = "jaw_keyValue"

ProtoInterface18.field.append(field61)
field62 = x3d.field()
field62.accessType = "outputOnly"
field62.type = "SFRotation"
field62.name = "jaw_changed"

ProtoInterface18.field.append(field62)
field63 = x3d.field()
field63.accessType = "inputOutput"
field63.type = "MFFloat"
field63.name = "l1_key"

ProtoInterface18.field.append(field63)
field64 = x3d.field()
field64.accessType = "inputOutput"
field64.type = "MFRotation"
field64.name = "l1_keyValue"

ProtoInterface18.field.append(field64)
field65 = x3d.field()
field65.accessType = "outputOnly"
field65.type = "SFRotation"
field65.name = "l1_changed"

ProtoInterface18.field.append(field65)
field66 = x3d.field()
field66.accessType = "inputOutput"
field66.type = "MFFloat"
field66.name = "l2_key"

ProtoInterface18.field.append(field66)
field67 = x3d.field()
field67.accessType = "inputOutput"
field67.type = "MFRotation"
field67.name = "l2_keyValue"

ProtoInterface18.field.append(field67)
field68 = x3d.field()
field68.accessType = "outputOnly"
field68.type = "SFRotation"
field68.name = "l2_changed"

ProtoInterface18.field.append(field68)
field69 = x3d.field()
field69.accessType = "inputOutput"
field69.type = "MFFloat"
field69.name = "l3_key"

ProtoInterface18.field.append(field69)
field70 = x3d.field()
field70.accessType = "inputOutput"
field70.type = "MFRotation"
field70.name = "l3_keyValue"

ProtoInterface18.field.append(field70)
field71 = x3d.field()
field71.accessType = "outputOnly"
field71.type = "SFRotation"
field71.name = "l3_changed"

ProtoInterface18.field.append(field71)
field72 = x3d.field()
field72.accessType = "inputOutput"
field72.type = "MFFloat"
field72.name = "l4_key"

ProtoInterface18.field.append(field72)
field73 = x3d.field()
field73.accessType = "inputOutput"
field73.type = "MFRotation"
field73.name = "l4_keyValue"

ProtoInterface18.field.append(field73)
field74 = x3d.field()
field74.accessType = "outputOnly"
field74.type = "SFRotation"
field74.name = "l4_changed"

ProtoInterface18.field.append(field74)
field75 = x3d.field()
field75.accessType = "inputOutput"
field75.type = "MFFloat"
field75.name = "l5_key"

ProtoInterface18.field.append(field75)
field76 = x3d.field()
field76.accessType = "inputOutput"
field76.type = "MFRotation"
field76.name = "l5_keyValue"

ProtoInterface18.field.append(field76)
field77 = x3d.field()
field77.accessType = "outputOnly"
field77.type = "SFRotation"
field77.name = "l5_changed"

ProtoInterface18.field.append(field77)
field78 = x3d.field()
field78.accessType = "inputOutput"
field78.type = "MFFloat"
field78.name = "l_acromioclavicular_key"

ProtoInterface18.field.append(field78)
field79 = x3d.field()
field79.accessType = "inputOutput"
field79.type = "MFRotation"
field79.name = "l_acromioclavicular_keyValue"

ProtoInterface18.field.append(field79)
field80 = x3d.field()
field80.accessType = "outputOnly"
field80.type = "SFRotation"
field80.name = "l_acromioclavicular_changed"

ProtoInterface18.field.append(field80)
field81 = x3d.field()
field81.accessType = "inputOutput"
field81.type = "MFFloat"
field81.name = "l_ankle_key"

ProtoInterface18.field.append(field81)
field82 = x3d.field()
field82.accessType = "inputOutput"
field82.type = "MFRotation"
field82.name = "l_ankle_keyValue"

ProtoInterface18.field.append(field82)
field83 = x3d.field()
field83.accessType = "outputOnly"
field83.type = "SFRotation"
field83.name = "l_ankle_changed"

ProtoInterface18.field.append(field83)
field84 = x3d.field()
field84.accessType = "inputOutput"
field84.type = "MFFloat"
field84.name = "l_calf_key"

ProtoInterface18.field.append(field84)
field85 = x3d.field()
field85.accessType = "inputOutput"
field85.type = "MFRotation"
field85.name = "l_calf_keyValue"

ProtoInterface18.field.append(field85)
field86 = x3d.field()
field86.accessType = "outputOnly"
field86.type = "SFRotation"
field86.name = "l_calf_changed"

ProtoInterface18.field.append(field86)
field87 = x3d.field()
field87.accessType = "inputOutput"
field87.type = "MFFloat"
field87.name = "l_clavicle_key"

ProtoInterface18.field.append(field87)
field88 = x3d.field()
field88.accessType = "inputOutput"
field88.type = "MFRotation"
field88.name = "l_clavicle_keyValue"

ProtoInterface18.field.append(field88)
field89 = x3d.field()
field89.accessType = "outputOnly"
field89.type = "SFRotation"
field89.name = "l_clavicle_changed"

ProtoInterface18.field.append(field89)
field90 = x3d.field()
field90.accessType = "inputOutput"
field90.type = "MFFloat"
field90.name = "l_elbow_key"

ProtoInterface18.field.append(field90)
field91 = x3d.field()
field91.accessType = "inputOutput"
field91.type = "MFRotation"
field91.name = "l_elbow_keyValue"

ProtoInterface18.field.append(field91)
field92 = x3d.field()
field92.accessType = "outputOnly"
field92.type = "SFRotation"
field92.name = "l_elbow_changed"

ProtoInterface18.field.append(field92)
field93 = x3d.field()
field93.accessType = "inputOutput"
field93.type = "MFFloat"
field93.name = "l_eyeball_key"

ProtoInterface18.field.append(field93)
field94 = x3d.field()
field94.accessType = "inputOutput"
field94.type = "MFRotation"
field94.name = "l_eyeball_keyValue"

ProtoInterface18.field.append(field94)
field95 = x3d.field()
field95.accessType = "outputOnly"
field95.type = "SFRotation"
field95.name = "l_eyeball_changed"

ProtoInterface18.field.append(field95)
field96 = x3d.field()
field96.accessType = "inputOutput"
field96.type = "MFFloat"
field96.name = "l_eyeball_joint_key"

ProtoInterface18.field.append(field96)
field97 = x3d.field()
field97.accessType = "inputOutput"
field97.type = "MFRotation"
field97.name = "l_eyeball_joint_keyValue"

ProtoInterface18.field.append(field97)
field98 = x3d.field()
field98.accessType = "outputOnly"
field98.type = "SFRotation"
field98.name = "l_eyeball_joint_changed"

ProtoInterface18.field.append(field98)
field99 = x3d.field()
field99.accessType = "inputOutput"
field99.type = "MFFloat"
field99.name = "l_eyebrow_key"

ProtoInterface18.field.append(field99)
field100 = x3d.field()
field100.accessType = "inputOutput"
field100.type = "MFRotation"
field100.name = "l_eyebrow_keyValue"

ProtoInterface18.field.append(field100)
field101 = x3d.field()
field101.accessType = "outputOnly"
field101.type = "SFRotation"
field101.name = "l_eyebrow_changed"

ProtoInterface18.field.append(field101)
field102 = x3d.field()
field102.accessType = "inputOutput"
field102.type = "MFFloat"
field102.name = "l_eyebrow_joint_key"

ProtoInterface18.field.append(field102)
field103 = x3d.field()
field103.accessType = "inputOutput"
field103.type = "MFRotation"
field103.name = "l_eyebrow_joint_keyValue"

ProtoInterface18.field.append(field103)
field104 = x3d.field()
field104.accessType = "outputOnly"
field104.type = "SFRotation"
field104.name = "l_eyebrow_joint_changed"

ProtoInterface18.field.append(field104)
field105 = x3d.field()
field105.accessType = "inputOutput"
field105.type = "MFFloat"
field105.name = "l_eyelid_key"

ProtoInterface18.field.append(field105)
field106 = x3d.field()
field106.accessType = "inputOutput"
field106.type = "MFRotation"
field106.name = "l_eyelid_keyValue"

ProtoInterface18.field.append(field106)
field107 = x3d.field()
field107.accessType = "outputOnly"
field107.type = "SFRotation"
field107.name = "l_eyelid_changed"

ProtoInterface18.field.append(field107)
field108 = x3d.field()
field108.accessType = "inputOutput"
field108.type = "MFFloat"
field108.name = "l_eyelid_joint_key"

ProtoInterface18.field.append(field108)
field109 = x3d.field()
field109.accessType = "inputOutput"
field109.type = "MFRotation"
field109.name = "l_eyelid_joint_keyValue"

ProtoInterface18.field.append(field109)
field110 = x3d.field()
field110.accessType = "outputOnly"
field110.type = "SFRotation"
field110.name = "l_eyelid_joint_changed"

ProtoInterface18.field.append(field110)
field111 = x3d.field()
field111.accessType = "inputOutput"
field111.type = "MFFloat"
field111.name = "l_forearm_key"

ProtoInterface18.field.append(field111)
field112 = x3d.field()
field112.accessType = "inputOutput"
field112.type = "MFRotation"
field112.name = "l_forearm_keyValue"

ProtoInterface18.field.append(field112)
field113 = x3d.field()
field113.accessType = "outputOnly"
field113.type = "SFRotation"
field113.name = "l_forearm_changed"

ProtoInterface18.field.append(field113)
field114 = x3d.field()
field114.accessType = "inputOutput"
field114.type = "MFFloat"
field114.name = "l_forefoot_key"

ProtoInterface18.field.append(field114)
field115 = x3d.field()
field115.accessType = "inputOutput"
field115.type = "MFRotation"
field115.name = "l_forefoot_keyValue"

ProtoInterface18.field.append(field115)
field116 = x3d.field()
field116.accessType = "outputOnly"
field116.type = "SFRotation"
field116.name = "l_forefoot_changed"

ProtoInterface18.field.append(field116)
field117 = x3d.field()
field117.accessType = "inputOutput"
field117.type = "MFFloat"
field117.name = "l_hand_key"

ProtoInterface18.field.append(field117)
field118 = x3d.field()
field118.accessType = "inputOutput"
field118.type = "MFRotation"
field118.name = "l_hand_keyValue"

ProtoInterface18.field.append(field118)
field119 = x3d.field()
field119.accessType = "outputOnly"
field119.type = "SFRotation"
field119.name = "l_hand_changed"

ProtoInterface18.field.append(field119)
field120 = x3d.field()
field120.accessType = "inputOutput"
field120.type = "MFFloat"
field120.name = "l_hindfoot_key"

ProtoInterface18.field.append(field120)
field121 = x3d.field()
field121.accessType = "inputOutput"
field121.type = "MFRotation"
field121.name = "l_hindfoot_keyValue"

ProtoInterface18.field.append(field121)
field122 = x3d.field()
field122.accessType = "outputOnly"
field122.type = "SFRotation"
field122.name = "l_hindfoot_changed"

ProtoInterface18.field.append(field122)
field123 = x3d.field()
field123.accessType = "inputOutput"
field123.type = "MFFloat"
field123.name = "l_hip_key"

ProtoInterface18.field.append(field123)
field124 = x3d.field()
field124.accessType = "inputOutput"
field124.type = "MFRotation"
field124.name = "l_hip_keyValue"

ProtoInterface18.field.append(field124)
field125 = x3d.field()
field125.accessType = "outputOnly"
field125.type = "SFRotation"
field125.name = "l_hip_changed"

ProtoInterface18.field.append(field125)
field126 = x3d.field()
field126.accessType = "inputOutput"
field126.type = "MFFloat"
field126.name = "l_index0_key"

ProtoInterface18.field.append(field126)
field127 = x3d.field()
field127.accessType = "inputOutput"
field127.type = "MFRotation"
field127.name = "l_index0_keyValue"

ProtoInterface18.field.append(field127)
field128 = x3d.field()
field128.accessType = "outputOnly"
field128.type = "SFRotation"
field128.name = "l_index0_changed"

ProtoInterface18.field.append(field128)
field129 = x3d.field()
field129.accessType = "inputOutput"
field129.type = "MFFloat"
field129.name = "l_index1_key"

ProtoInterface18.field.append(field129)
field130 = x3d.field()
field130.accessType = "inputOutput"
field130.type = "MFRotation"
field130.name = "l_index1_keyValue"

ProtoInterface18.field.append(field130)
field131 = x3d.field()
field131.accessType = "outputOnly"
field131.type = "SFRotation"
field131.name = "l_index1_changed"

ProtoInterface18.field.append(field131)
field132 = x3d.field()
field132.accessType = "inputOutput"
field132.type = "MFFloat"
field132.name = "l_index2_key"

ProtoInterface18.field.append(field132)
field133 = x3d.field()
field133.accessType = "inputOutput"
field133.type = "MFRotation"
field133.name = "l_index2_keyValue"

ProtoInterface18.field.append(field133)
field134 = x3d.field()
field134.accessType = "outputOnly"
field134.type = "SFRotation"
field134.name = "l_index2_changed"

ProtoInterface18.field.append(field134)
field135 = x3d.field()
field135.accessType = "inputOutput"
field135.type = "MFFloat"
field135.name = "l_index3_key"

ProtoInterface18.field.append(field135)
field136 = x3d.field()
field136.accessType = "inputOutput"
field136.type = "MFRotation"
field136.name = "l_index3_keyValue"

ProtoInterface18.field.append(field136)
field137 = x3d.field()
field137.accessType = "outputOnly"
field137.type = "SFRotation"
field137.name = "l_index3_changed"

ProtoInterface18.field.append(field137)
field138 = x3d.field()
field138.accessType = "inputOutput"
field138.type = "MFFloat"
field138.name = "l_index_distal_key"

ProtoInterface18.field.append(field138)
field139 = x3d.field()
field139.accessType = "inputOutput"
field139.type = "MFRotation"
field139.name = "l_index_distal_keyValue"

ProtoInterface18.field.append(field139)
field140 = x3d.field()
field140.accessType = "outputOnly"
field140.type = "SFRotation"
field140.name = "l_index_distal_changed"

ProtoInterface18.field.append(field140)
field141 = x3d.field()
field141.accessType = "inputOutput"
field141.type = "MFFloat"
field141.name = "l_index_metacarpal_key"

ProtoInterface18.field.append(field141)
field142 = x3d.field()
field142.accessType = "inputOutput"
field142.type = "MFRotation"
field142.name = "l_index_metacarpal_keyValue"

ProtoInterface18.field.append(field142)
field143 = x3d.field()
field143.accessType = "outputOnly"
field143.type = "SFRotation"
field143.name = "l_index_metacarpal_changed"

ProtoInterface18.field.append(field143)
field144 = x3d.field()
field144.accessType = "inputOutput"
field144.type = "MFFloat"
field144.name = "l_index_middle_key"

ProtoInterface18.field.append(field144)
field145 = x3d.field()
field145.accessType = "inputOutput"
field145.type = "MFRotation"
field145.name = "l_index_middle_keyValue"

ProtoInterface18.field.append(field145)
field146 = x3d.field()
field146.accessType = "outputOnly"
field146.type = "SFRotation"
field146.name = "l_index_middle_changed"

ProtoInterface18.field.append(field146)
field147 = x3d.field()
field147.accessType = "inputOutput"
field147.type = "MFFloat"
field147.name = "l_index_proximal_key"

ProtoInterface18.field.append(field147)
field148 = x3d.field()
field148.accessType = "inputOutput"
field148.type = "MFRotation"
field148.name = "l_index_proximal_keyValue"

ProtoInterface18.field.append(field148)
field149 = x3d.field()
field149.accessType = "outputOnly"
field149.type = "SFRotation"
field149.name = "l_index_proximal_changed"

ProtoInterface18.field.append(field149)
field150 = x3d.field()
field150.accessType = "inputOutput"
field150.type = "MFFloat"
field150.name = "l_knee_key"

ProtoInterface18.field.append(field150)
field151 = x3d.field()
field151.accessType = "inputOutput"
field151.type = "MFRotation"
field151.name = "l_knee_keyValue"

ProtoInterface18.field.append(field151)
field152 = x3d.field()
field152.accessType = "outputOnly"
field152.type = "SFRotation"
field152.name = "l_knee_changed"

ProtoInterface18.field.append(field152)
field153 = x3d.field()
field153.accessType = "inputOutput"
field153.type = "MFFloat"
field153.name = "l_metatarsal_key"

ProtoInterface18.field.append(field153)
field154 = x3d.field()
field154.accessType = "inputOutput"
field154.type = "MFRotation"
field154.name = "l_metatarsal_keyValue"

ProtoInterface18.field.append(field154)
field155 = x3d.field()
field155.accessType = "outputOnly"
field155.type = "SFRotation"
field155.name = "l_metatarsal_changed"

ProtoInterface18.field.append(field155)
field156 = x3d.field()
field156.accessType = "inputOutput"
field156.type = "MFFloat"
field156.name = "l_middistal_key"

ProtoInterface18.field.append(field156)
field157 = x3d.field()
field157.accessType = "inputOutput"
field157.type = "MFRotation"
field157.name = "l_middistal_keyValue"

ProtoInterface18.field.append(field157)
field158 = x3d.field()
field158.accessType = "outputOnly"
field158.type = "SFRotation"
field158.name = "l_middistal_changed"

ProtoInterface18.field.append(field158)
field159 = x3d.field()
field159.accessType = "inputOutput"
field159.type = "MFFloat"
field159.name = "l_middle0_key"

ProtoInterface18.field.append(field159)
field160 = x3d.field()
field160.accessType = "inputOutput"
field160.type = "MFRotation"
field160.name = "l_middle0_keyValue"

ProtoInterface18.field.append(field160)
field161 = x3d.field()
field161.accessType = "outputOnly"
field161.type = "SFRotation"
field161.name = "l_middle0_changed"

ProtoInterface18.field.append(field161)
field162 = x3d.field()
field162.accessType = "inputOutput"
field162.type = "MFFloat"
field162.name = "l_middle1_key"

ProtoInterface18.field.append(field162)
field163 = x3d.field()
field163.accessType = "inputOutput"
field163.type = "MFRotation"
field163.name = "l_middle1_keyValue"

ProtoInterface18.field.append(field163)
field164 = x3d.field()
field164.accessType = "outputOnly"
field164.type = "SFRotation"
field164.name = "l_middle1_changed"

ProtoInterface18.field.append(field164)
field165 = x3d.field()
field165.accessType = "inputOutput"
field165.type = "MFFloat"
field165.name = "l_middle2_key"

ProtoInterface18.field.append(field165)
field166 = x3d.field()
field166.accessType = "inputOutput"
field166.type = "MFRotation"
field166.name = "l_middle2_keyValue"

ProtoInterface18.field.append(field166)
field167 = x3d.field()
field167.accessType = "outputOnly"
field167.type = "SFRotation"
field167.name = "l_middle2_changed"

ProtoInterface18.field.append(field167)
field168 = x3d.field()
field168.accessType = "inputOutput"
field168.type = "MFFloat"
field168.name = "l_middle3_key"

ProtoInterface18.field.append(field168)
field169 = x3d.field()
field169.accessType = "inputOutput"
field169.type = "MFRotation"
field169.name = "l_middle3_keyValue"

ProtoInterface18.field.append(field169)
field170 = x3d.field()
field170.accessType = "outputOnly"
field170.type = "SFRotation"
field170.name = "l_middle3_changed"

ProtoInterface18.field.append(field170)
field171 = x3d.field()
field171.accessType = "inputOutput"
field171.type = "MFFloat"
field171.name = "l_middle_distal_key"

ProtoInterface18.field.append(field171)
field172 = x3d.field()
field172.accessType = "inputOutput"
field172.type = "MFRotation"
field172.name = "l_middle_distal_keyValue"

ProtoInterface18.field.append(field172)
field173 = x3d.field()
field173.accessType = "outputOnly"
field173.type = "SFRotation"
field173.name = "l_middle_distal_changed"

ProtoInterface18.field.append(field173)
field174 = x3d.field()
field174.accessType = "inputOutput"
field174.type = "MFFloat"
field174.name = "l_middle_metacarpal_key"

ProtoInterface18.field.append(field174)
field175 = x3d.field()
field175.accessType = "inputOutput"
field175.type = "MFRotation"
field175.name = "l_middle_metacarpal_keyValue"

ProtoInterface18.field.append(field175)
field176 = x3d.field()
field176.accessType = "outputOnly"
field176.type = "SFRotation"
field176.name = "l_middle_metacarpal_changed"

ProtoInterface18.field.append(field176)
field177 = x3d.field()
field177.accessType = "inputOutput"
field177.type = "MFFloat"
field177.name = "l_middle_middle_key"

ProtoInterface18.field.append(field177)
field178 = x3d.field()
field178.accessType = "inputOutput"
field178.type = "MFRotation"
field178.name = "l_middle_middle_keyValue"

ProtoInterface18.field.append(field178)
field179 = x3d.field()
field179.accessType = "outputOnly"
field179.type = "SFRotation"
field179.name = "l_middle_middle_changed"

ProtoInterface18.field.append(field179)
field180 = x3d.field()
field180.accessType = "inputOutput"
field180.type = "MFFloat"
field180.name = "l_middle_proximal_key"

ProtoInterface18.field.append(field180)
field181 = x3d.field()
field181.accessType = "inputOutput"
field181.type = "MFRotation"
field181.name = "l_middle_proximal_keyValue"

ProtoInterface18.field.append(field181)
field182 = x3d.field()
field182.accessType = "outputOnly"
field182.type = "SFRotation"
field182.name = "l_middle_proximal_changed"

ProtoInterface18.field.append(field182)
field183 = x3d.field()
field183.accessType = "inputOutput"
field183.type = "MFFloat"
field183.name = "l_midproximal_key"

ProtoInterface18.field.append(field183)
field184 = x3d.field()
field184.accessType = "inputOutput"
field184.type = "MFRotation"
field184.name = "l_midproximal_keyValue"

ProtoInterface18.field.append(field184)
field185 = x3d.field()
field185.accessType = "outputOnly"
field185.type = "SFRotation"
field185.name = "l_midproximal_changed"

ProtoInterface18.field.append(field185)
field186 = x3d.field()
field186.accessType = "inputOutput"
field186.type = "MFFloat"
field186.name = "l_midtarsal_key"

ProtoInterface18.field.append(field186)
field187 = x3d.field()
field187.accessType = "inputOutput"
field187.type = "MFRotation"
field187.name = "l_midtarsal_keyValue"

ProtoInterface18.field.append(field187)
field188 = x3d.field()
field188.accessType = "outputOnly"
field188.type = "SFRotation"
field188.name = "l_midtarsal_changed"

ProtoInterface18.field.append(field188)
field189 = x3d.field()
field189.accessType = "inputOutput"
field189.type = "MFFloat"
field189.name = "l_pinky0_key"

ProtoInterface18.field.append(field189)
field190 = x3d.field()
field190.accessType = "inputOutput"
field190.type = "MFRotation"
field190.name = "l_pinky0_keyValue"

ProtoInterface18.field.append(field190)
field191 = x3d.field()
field191.accessType = "outputOnly"
field191.type = "SFRotation"
field191.name = "l_pinky0_changed"

ProtoInterface18.field.append(field191)
field192 = x3d.field()
field192.accessType = "inputOutput"
field192.type = "MFFloat"
field192.name = "l_pinky1_key"

ProtoInterface18.field.append(field192)
field193 = x3d.field()
field193.accessType = "inputOutput"
field193.type = "MFRotation"
field193.name = "l_pinky1_keyValue"

ProtoInterface18.field.append(field193)
field194 = x3d.field()
field194.accessType = "outputOnly"
field194.type = "SFRotation"
field194.name = "l_pinky1_changed"

ProtoInterface18.field.append(field194)
field195 = x3d.field()
field195.accessType = "inputOutput"
field195.type = "MFFloat"
field195.name = "l_pinky2_key"

ProtoInterface18.field.append(field195)
field196 = x3d.field()
field196.accessType = "inputOutput"
field196.type = "MFRotation"
field196.name = "l_pinky2_keyValue"

ProtoInterface18.field.append(field196)
field197 = x3d.field()
field197.accessType = "outputOnly"
field197.type = "SFRotation"
field197.name = "l_pinky2_changed"

ProtoInterface18.field.append(field197)
field198 = x3d.field()
field198.accessType = "inputOutput"
field198.type = "MFFloat"
field198.name = "l_pinky3_key"

ProtoInterface18.field.append(field198)
field199 = x3d.field()
field199.accessType = "inputOutput"
field199.type = "MFRotation"
field199.name = "l_pinky3_keyValue"

ProtoInterface18.field.append(field199)
field200 = x3d.field()
field200.accessType = "outputOnly"
field200.type = "SFRotation"
field200.name = "l_pinky3_changed"

ProtoInterface18.field.append(field200)
field201 = x3d.field()
field201.accessType = "inputOutput"
field201.type = "MFFloat"
field201.name = "l_pinky_distal_key"

ProtoInterface18.field.append(field201)
field202 = x3d.field()
field202.accessType = "inputOutput"
field202.type = "MFRotation"
field202.name = "l_pinky_distal_keyValue"

ProtoInterface18.field.append(field202)
field203 = x3d.field()
field203.accessType = "outputOnly"
field203.type = "SFRotation"
field203.name = "l_pinky_distal_changed"

ProtoInterface18.field.append(field203)
field204 = x3d.field()
field204.accessType = "inputOutput"
field204.type = "MFFloat"
field204.name = "l_pinky_metacarpal_key"

ProtoInterface18.field.append(field204)
field205 = x3d.field()
field205.accessType = "inputOutput"
field205.type = "MFRotation"
field205.name = "l_pinky_metacarpal_keyValue"

ProtoInterface18.field.append(field205)
field206 = x3d.field()
field206.accessType = "outputOnly"
field206.type = "SFRotation"
field206.name = "l_pinky_metacarpal_changed"

ProtoInterface18.field.append(field206)
field207 = x3d.field()
field207.accessType = "inputOutput"
field207.type = "MFFloat"
field207.name = "l_pinky_middle_key"

ProtoInterface18.field.append(field207)
field208 = x3d.field()
field208.accessType = "inputOutput"
field208.type = "MFRotation"
field208.name = "l_pinky_middle_keyValue"

ProtoInterface18.field.append(field208)
field209 = x3d.field()
field209.accessType = "outputOnly"
field209.type = "SFRotation"
field209.name = "l_pinky_middle_changed"

ProtoInterface18.field.append(field209)
field210 = x3d.field()
field210.accessType = "inputOutput"
field210.type = "MFFloat"
field210.name = "l_pinky_proximal_key"

ProtoInterface18.field.append(field210)
field211 = x3d.field()
field211.accessType = "inputOutput"
field211.type = "MFRotation"
field211.name = "l_pinky_proximal_keyValue"

ProtoInterface18.field.append(field211)
field212 = x3d.field()
field212.accessType = "outputOnly"
field212.type = "SFRotation"
field212.name = "l_pinky_proximal_changed"

ProtoInterface18.field.append(field212)
field213 = x3d.field()
field213.accessType = "inputOutput"
field213.type = "MFFloat"
field213.name = "l_ring0_key"

ProtoInterface18.field.append(field213)
field214 = x3d.field()
field214.accessType = "inputOutput"
field214.type = "MFRotation"
field214.name = "l_ring0_keyValue"

ProtoInterface18.field.append(field214)
field215 = x3d.field()
field215.accessType = "outputOnly"
field215.type = "SFRotation"
field215.name = "l_ring0_changed"

ProtoInterface18.field.append(field215)
field216 = x3d.field()
field216.accessType = "inputOutput"
field216.type = "MFFloat"
field216.name = "l_ring1_key"

ProtoInterface18.field.append(field216)
field217 = x3d.field()
field217.accessType = "inputOutput"
field217.type = "MFRotation"
field217.name = "l_ring1_keyValue"

ProtoInterface18.field.append(field217)
field218 = x3d.field()
field218.accessType = "outputOnly"
field218.type = "SFRotation"
field218.name = "l_ring1_changed"

ProtoInterface18.field.append(field218)
field219 = x3d.field()
field219.accessType = "inputOutput"
field219.type = "MFFloat"
field219.name = "l_ring2_key"

ProtoInterface18.field.append(field219)
field220 = x3d.field()
field220.accessType = "inputOutput"
field220.type = "MFRotation"
field220.name = "l_ring2_keyValue"

ProtoInterface18.field.append(field220)
field221 = x3d.field()
field221.accessType = "outputOnly"
field221.type = "SFRotation"
field221.name = "l_ring2_changed"

ProtoInterface18.field.append(field221)
field222 = x3d.field()
field222.accessType = "inputOutput"
field222.type = "MFFloat"
field222.name = "l_ring3_key"

ProtoInterface18.field.append(field222)
field223 = x3d.field()
field223.accessType = "inputOutput"
field223.type = "MFRotation"
field223.name = "l_ring3_keyValue"

ProtoInterface18.field.append(field223)
field224 = x3d.field()
field224.accessType = "outputOnly"
field224.type = "SFRotation"
field224.name = "l_ring3_changed"

ProtoInterface18.field.append(field224)
field225 = x3d.field()
field225.accessType = "inputOutput"
field225.type = "MFFloat"
field225.name = "l_ring_distal_key"

ProtoInterface18.field.append(field225)
field226 = x3d.field()
field226.accessType = "inputOutput"
field226.type = "MFRotation"
field226.name = "l_ring_distal_keyValue"

ProtoInterface18.field.append(field226)
field227 = x3d.field()
field227.accessType = "outputOnly"
field227.type = "SFRotation"
field227.name = "l_ring_distal_changed"

ProtoInterface18.field.append(field227)
field228 = x3d.field()
field228.accessType = "inputOutput"
field228.type = "MFFloat"
field228.name = "l_ring_metacarpal_key"

ProtoInterface18.field.append(field228)
field229 = x3d.field()
field229.accessType = "inputOutput"
field229.type = "MFRotation"
field229.name = "l_ring_metacarpal_keyValue"

ProtoInterface18.field.append(field229)
field230 = x3d.field()
field230.accessType = "outputOnly"
field230.type = "SFRotation"
field230.name = "l_ring_metacarpal_changed"

ProtoInterface18.field.append(field230)
field231 = x3d.field()
field231.accessType = "inputOutput"
field231.type = "MFFloat"
field231.name = "l_ring_middle_key"

ProtoInterface18.field.append(field231)
field232 = x3d.field()
field232.accessType = "inputOutput"
field232.type = "MFRotation"
field232.name = "l_ring_middle_keyValue"

ProtoInterface18.field.append(field232)
field233 = x3d.field()
field233.accessType = "outputOnly"
field233.type = "SFRotation"
field233.name = "l_ring_middle_changed"

ProtoInterface18.field.append(field233)
field234 = x3d.field()
field234.accessType = "inputOutput"
field234.type = "MFFloat"
field234.name = "l_ring_proximal_key"

ProtoInterface18.field.append(field234)
field235 = x3d.field()
field235.accessType = "inputOutput"
field235.type = "MFRotation"
field235.name = "l_ring_proximal_keyValue"

ProtoInterface18.field.append(field235)
field236 = x3d.field()
field236.accessType = "outputOnly"
field236.type = "SFRotation"
field236.name = "l_ring_proximal_changed"

ProtoInterface18.field.append(field236)
field237 = x3d.field()
field237.accessType = "inputOutput"
field237.type = "MFFloat"
field237.name = "l_scapula_key"

ProtoInterface18.field.append(field237)
field238 = x3d.field()
field238.accessType = "inputOutput"
field238.type = "MFRotation"
field238.name = "l_scapula_keyValue"

ProtoInterface18.field.append(field238)
field239 = x3d.field()
field239.accessType = "outputOnly"
field239.type = "SFRotation"
field239.name = "l_scapula_changed"

ProtoInterface18.field.append(field239)
field240 = x3d.field()
field240.accessType = "inputOutput"
field240.type = "MFFloat"
field240.name = "l_shoulder_key"

ProtoInterface18.field.append(field240)
field241 = x3d.field()
field241.accessType = "inputOutput"
field241.type = "MFRotation"
field241.name = "l_shoulder_keyValue"

ProtoInterface18.field.append(field241)
field242 = x3d.field()
field242.accessType = "outputOnly"
field242.type = "SFRotation"
field242.name = "l_shoulder_changed"

ProtoInterface18.field.append(field242)
field243 = x3d.field()
field243.accessType = "inputOutput"
field243.type = "MFFloat"
field243.name = "l_sternoclavicular_key"

ProtoInterface18.field.append(field243)
field244 = x3d.field()
field244.accessType = "inputOutput"
field244.type = "MFRotation"
field244.name = "l_sternoclavicular_keyValue"

ProtoInterface18.field.append(field244)
field245 = x3d.field()
field245.accessType = "outputOnly"
field245.type = "SFRotation"
field245.name = "l_sternoclavicular_changed"

ProtoInterface18.field.append(field245)
field246 = x3d.field()
field246.accessType = "inputOutput"
field246.type = "MFFloat"
field246.name = "l_subtalar_key"

ProtoInterface18.field.append(field246)
field247 = x3d.field()
field247.accessType = "inputOutput"
field247.type = "MFRotation"
field247.name = "l_subtalar_keyValue"

ProtoInterface18.field.append(field247)
field248 = x3d.field()
field248.accessType = "outputOnly"
field248.type = "SFRotation"
field248.name = "l_subtalar_changed"

ProtoInterface18.field.append(field248)
field249 = x3d.field()
field249.accessType = "inputOutput"
field249.type = "MFFloat"
field249.name = "l_thigh_key"

ProtoInterface18.field.append(field249)
field250 = x3d.field()
field250.accessType = "inputOutput"
field250.type = "MFRotation"
field250.name = "l_thigh_keyValue"

ProtoInterface18.field.append(field250)
field251 = x3d.field()
field251.accessType = "outputOnly"
field251.type = "SFRotation"
field251.name = "l_thigh_changed"

ProtoInterface18.field.append(field251)
field252 = x3d.field()
field252.accessType = "inputOutput"
field252.type = "MFFloat"
field252.name = "l_thumb1_key"

ProtoInterface18.field.append(field252)
field253 = x3d.field()
field253.accessType = "inputOutput"
field253.type = "MFRotation"
field253.name = "l_thumb1_keyValue"

ProtoInterface18.field.append(field253)
field254 = x3d.field()
field254.accessType = "outputOnly"
field254.type = "SFRotation"
field254.name = "l_thumb1_changed"

ProtoInterface18.field.append(field254)
field255 = x3d.field()
field255.accessType = "inputOutput"
field255.type = "MFFloat"
field255.name = "l_thumb2_key"

ProtoInterface18.field.append(field255)
field256 = x3d.field()
field256.accessType = "inputOutput"
field256.type = "MFRotation"
field256.name = "l_thumb2_keyValue"

ProtoInterface18.field.append(field256)
field257 = x3d.field()
field257.accessType = "outputOnly"
field257.type = "SFRotation"
field257.name = "l_thumb2_changed"

ProtoInterface18.field.append(field257)
field258 = x3d.field()
field258.accessType = "inputOutput"
field258.type = "MFFloat"
field258.name = "l_thumb3_key"

ProtoInterface18.field.append(field258)
field259 = x3d.field()
field259.accessType = "inputOutput"
field259.type = "MFRotation"
field259.name = "l_thumb3_keyValue"

ProtoInterface18.field.append(field259)
field260 = x3d.field()
field260.accessType = "outputOnly"
field260.type = "SFRotation"
field260.name = "l_thumb3_changed"

ProtoInterface18.field.append(field260)
field261 = x3d.field()
field261.accessType = "inputOutput"
field261.type = "MFFloat"
field261.name = "l_thumb_distal_key"

ProtoInterface18.field.append(field261)
field262 = x3d.field()
field262.accessType = "inputOutput"
field262.type = "MFRotation"
field262.name = "l_thumb_distal_keyValue"

ProtoInterface18.field.append(field262)
field263 = x3d.field()
field263.accessType = "outputOnly"
field263.type = "SFRotation"
field263.name = "l_thumb_distal_changed"

ProtoInterface18.field.append(field263)
field264 = x3d.field()
field264.accessType = "inputOutput"
field264.type = "MFFloat"
field264.name = "l_thumb_metacarpal_key"

ProtoInterface18.field.append(field264)
field265 = x3d.field()
field265.accessType = "inputOutput"
field265.type = "MFRotation"
field265.name = "l_thumb_metacarpal_keyValue"

ProtoInterface18.field.append(field265)
field266 = x3d.field()
field266.accessType = "outputOnly"
field266.type = "SFRotation"
field266.name = "l_thumb_metacarpal_changed"

ProtoInterface18.field.append(field266)
field267 = x3d.field()
field267.accessType = "inputOutput"
field267.type = "MFFloat"
field267.name = "l_thumb_proximal_key"

ProtoInterface18.field.append(field267)
field268 = x3d.field()
field268.accessType = "inputOutput"
field268.type = "MFRotation"
field268.name = "l_thumb_proximal_keyValue"

ProtoInterface18.field.append(field268)
field269 = x3d.field()
field269.accessType = "outputOnly"
field269.type = "SFRotation"
field269.name = "l_thumb_proximal_changed"

ProtoInterface18.field.append(field269)
field270 = x3d.field()
field270.accessType = "inputOutput"
field270.type = "MFFloat"
field270.name = "l_upperarm_key"

ProtoInterface18.field.append(field270)
field271 = x3d.field()
field271.accessType = "inputOutput"
field271.type = "MFRotation"
field271.name = "l_upperarm_keyValue"

ProtoInterface18.field.append(field271)
field272 = x3d.field()
field272.accessType = "outputOnly"
field272.type = "SFRotation"
field272.name = "l_upperarm_changed"

ProtoInterface18.field.append(field272)
field273 = x3d.field()
field273.accessType = "inputOutput"
field273.type = "MFFloat"
field273.name = "l_wrist_key"

ProtoInterface18.field.append(field273)
field274 = x3d.field()
field274.accessType = "inputOutput"
field274.type = "MFRotation"
field274.name = "l_wrist_keyValue"

ProtoInterface18.field.append(field274)
field275 = x3d.field()
field275.accessType = "outputOnly"
field275.type = "SFRotation"
field275.name = "l_wrist_changed"

ProtoInterface18.field.append(field275)
field276 = x3d.field()
field276.accessType = "inputOutput"
field276.type = "MFFloat"
field276.name = "pelvis_key"

ProtoInterface18.field.append(field276)
field277 = x3d.field()
field277.accessType = "inputOutput"
field277.type = "MFRotation"
field277.name = "pelvis_keyValue"

ProtoInterface18.field.append(field277)
field278 = x3d.field()
field278.accessType = "outputOnly"
field278.type = "SFRotation"
field278.name = "pelvis_changed"

ProtoInterface18.field.append(field278)
field279 = x3d.field()
field279.accessType = "inputOutput"
field279.type = "MFFloat"
field279.name = "r_acromioclavicular_key"

ProtoInterface18.field.append(field279)
field280 = x3d.field()
field280.accessType = "inputOutput"
field280.type = "MFRotation"
field280.name = "r_acromioclavicular_keyValue"

ProtoInterface18.field.append(field280)
field281 = x3d.field()
field281.accessType = "outputOnly"
field281.type = "SFRotation"
field281.name = "r_acromioclavicular_changed"

ProtoInterface18.field.append(field281)
field282 = x3d.field()
field282.accessType = "inputOutput"
field282.type = "MFFloat"
field282.name = "r_ankle_key"

ProtoInterface18.field.append(field282)
field283 = x3d.field()
field283.accessType = "inputOutput"
field283.type = "MFRotation"
field283.name = "r_ankle_keyValue"

ProtoInterface18.field.append(field283)
field284 = x3d.field()
field284.accessType = "outputOnly"
field284.type = "SFRotation"
field284.name = "r_ankle_changed"

ProtoInterface18.field.append(field284)
field285 = x3d.field()
field285.accessType = "inputOutput"
field285.type = "MFFloat"
field285.name = "r_calf_key"

ProtoInterface18.field.append(field285)
field286 = x3d.field()
field286.accessType = "inputOutput"
field286.type = "MFRotation"
field286.name = "r_calf_keyValue"

ProtoInterface18.field.append(field286)
field287 = x3d.field()
field287.accessType = "outputOnly"
field287.type = "SFRotation"
field287.name = "r_calf_changed"

ProtoInterface18.field.append(field287)
field288 = x3d.field()
field288.accessType = "inputOutput"
field288.type = "MFFloat"
field288.name = "r_clavicle_key"

ProtoInterface18.field.append(field288)
field289 = x3d.field()
field289.accessType = "inputOutput"
field289.type = "MFRotation"
field289.name = "r_clavicle_keyValue"

ProtoInterface18.field.append(field289)
field290 = x3d.field()
field290.accessType = "outputOnly"
field290.type = "SFRotation"
field290.name = "r_clavicle_changed"

ProtoInterface18.field.append(field290)
field291 = x3d.field()
field291.accessType = "inputOutput"
field291.type = "MFFloat"
field291.name = "r_elbow_key"

ProtoInterface18.field.append(field291)
field292 = x3d.field()
field292.accessType = "inputOutput"
field292.type = "MFRotation"
field292.name = "r_elbow_keyValue"

ProtoInterface18.field.append(field292)
field293 = x3d.field()
field293.accessType = "outputOnly"
field293.type = "SFRotation"
field293.name = "r_elbow_changed"

ProtoInterface18.field.append(field293)
field294 = x3d.field()
field294.accessType = "inputOutput"
field294.type = "MFFloat"
field294.name = "r_eyeball_key"

ProtoInterface18.field.append(field294)
field295 = x3d.field()
field295.accessType = "inputOutput"
field295.type = "MFRotation"
field295.name = "r_eyeball_keyValue"

ProtoInterface18.field.append(field295)
field296 = x3d.field()
field296.accessType = "outputOnly"
field296.type = "SFRotation"
field296.name = "r_eyeball_changed"

ProtoInterface18.field.append(field296)
field297 = x3d.field()
field297.accessType = "inputOutput"
field297.type = "MFFloat"
field297.name = "r_eyeball_joint_key"

ProtoInterface18.field.append(field297)
field298 = x3d.field()
field298.accessType = "inputOutput"
field298.type = "MFRotation"
field298.name = "r_eyeball_joint_keyValue"

ProtoInterface18.field.append(field298)
field299 = x3d.field()
field299.accessType = "outputOnly"
field299.type = "SFRotation"
field299.name = "r_eyeball_joint_changed"

ProtoInterface18.field.append(field299)
field300 = x3d.field()
field300.accessType = "inputOutput"
field300.type = "MFFloat"
field300.name = "r_eyebrow_key"

ProtoInterface18.field.append(field300)
field301 = x3d.field()
field301.accessType = "inputOutput"
field301.type = "MFRotation"
field301.name = "r_eyebrow_keyValue"

ProtoInterface18.field.append(field301)
field302 = x3d.field()
field302.accessType = "outputOnly"
field302.type = "SFRotation"
field302.name = "r_eyebrow_changed"

ProtoInterface18.field.append(field302)
field303 = x3d.field()
field303.accessType = "inputOutput"
field303.type = "MFFloat"
field303.name = "r_eyebrow_joint_key"

ProtoInterface18.field.append(field303)
field304 = x3d.field()
field304.accessType = "inputOutput"
field304.type = "MFRotation"
field304.name = "r_eyebrow_joint_keyValue"

ProtoInterface18.field.append(field304)
field305 = x3d.field()
field305.accessType = "outputOnly"
field305.type = "SFRotation"
field305.name = "r_eyebrow_joint_changed"

ProtoInterface18.field.append(field305)
field306 = x3d.field()
field306.accessType = "inputOutput"
field306.type = "MFFloat"
field306.name = "r_eyelid_key"

ProtoInterface18.field.append(field306)
field307 = x3d.field()
field307.accessType = "inputOutput"
field307.type = "MFRotation"
field307.name = "r_eyelid_keyValue"

ProtoInterface18.field.append(field307)
field308 = x3d.field()
field308.accessType = "outputOnly"
field308.type = "SFRotation"
field308.name = "r_eyelid_changed"

ProtoInterface18.field.append(field308)
field309 = x3d.field()
field309.accessType = "inputOutput"
field309.type = "MFFloat"
field309.name = "r_eyelid_joint_key"

ProtoInterface18.field.append(field309)
field310 = x3d.field()
field310.accessType = "inputOutput"
field310.type = "MFRotation"
field310.name = "r_eyelid_joint_keyValue"

ProtoInterface18.field.append(field310)
field311 = x3d.field()
field311.accessType = "outputOnly"
field311.type = "SFRotation"
field311.name = "r_eyelid_joint_changed"

ProtoInterface18.field.append(field311)
field312 = x3d.field()
field312.accessType = "inputOutput"
field312.type = "MFFloat"
field312.name = "r_forearm_key"

ProtoInterface18.field.append(field312)
field313 = x3d.field()
field313.accessType = "inputOutput"
field313.type = "MFRotation"
field313.name = "r_forearm_keyValue"

ProtoInterface18.field.append(field313)
field314 = x3d.field()
field314.accessType = "outputOnly"
field314.type = "SFRotation"
field314.name = "r_forearm_changed"

ProtoInterface18.field.append(field314)
field315 = x3d.field()
field315.accessType = "inputOutput"
field315.type = "MFFloat"
field315.name = "r_forefoot_key"

ProtoInterface18.field.append(field315)
field316 = x3d.field()
field316.accessType = "inputOutput"
field316.type = "MFRotation"
field316.name = "r_forefoot_keyValue"

ProtoInterface18.field.append(field316)
field317 = x3d.field()
field317.accessType = "outputOnly"
field317.type = "SFRotation"
field317.name = "r_forefoot_changed"

ProtoInterface18.field.append(field317)
field318 = x3d.field()
field318.accessType = "inputOutput"
field318.type = "MFFloat"
field318.name = "r_hand_key"

ProtoInterface18.field.append(field318)
field319 = x3d.field()
field319.accessType = "inputOutput"
field319.type = "MFRotation"
field319.name = "r_hand_keyValue"

ProtoInterface18.field.append(field319)
field320 = x3d.field()
field320.accessType = "outputOnly"
field320.type = "SFRotation"
field320.name = "r_hand_changed"

ProtoInterface18.field.append(field320)
field321 = x3d.field()
field321.accessType = "inputOutput"
field321.type = "MFFloat"
field321.name = "r_hindfoot_key"

ProtoInterface18.field.append(field321)
field322 = x3d.field()
field322.accessType = "inputOutput"
field322.type = "MFRotation"
field322.name = "r_hindfoot_keyValue"

ProtoInterface18.field.append(field322)
field323 = x3d.field()
field323.accessType = "outputOnly"
field323.type = "SFRotation"
field323.name = "r_hindfoot_changed"

ProtoInterface18.field.append(field323)
field324 = x3d.field()
field324.accessType = "inputOutput"
field324.type = "MFFloat"
field324.name = "r_hip_key"

ProtoInterface18.field.append(field324)
field325 = x3d.field()
field325.accessType = "inputOutput"
field325.type = "MFRotation"
field325.name = "r_hip_keyValue"

ProtoInterface18.field.append(field325)
field326 = x3d.field()
field326.accessType = "outputOnly"
field326.type = "SFRotation"
field326.name = "r_hip_changed"

ProtoInterface18.field.append(field326)
field327 = x3d.field()
field327.accessType = "inputOutput"
field327.type = "MFFloat"
field327.name = "r_index0_key"

ProtoInterface18.field.append(field327)
field328 = x3d.field()
field328.accessType = "inputOutput"
field328.type = "MFRotation"
field328.name = "r_index0_keyValue"

ProtoInterface18.field.append(field328)
field329 = x3d.field()
field329.accessType = "outputOnly"
field329.type = "SFRotation"
field329.name = "r_index0_changed"

ProtoInterface18.field.append(field329)
field330 = x3d.field()
field330.accessType = "inputOutput"
field330.type = "MFFloat"
field330.name = "r_index1_key"

ProtoInterface18.field.append(field330)
field331 = x3d.field()
field331.accessType = "inputOutput"
field331.type = "MFRotation"
field331.name = "r_index1_keyValue"

ProtoInterface18.field.append(field331)
field332 = x3d.field()
field332.accessType = "outputOnly"
field332.type = "SFRotation"
field332.name = "r_index1_changed"

ProtoInterface18.field.append(field332)
field333 = x3d.field()
field333.accessType = "inputOutput"
field333.type = "MFFloat"
field333.name = "r_index2_key"

ProtoInterface18.field.append(field333)
field334 = x3d.field()
field334.accessType = "inputOutput"
field334.type = "MFRotation"
field334.name = "r_index2_keyValue"

ProtoInterface18.field.append(field334)
field335 = x3d.field()
field335.accessType = "outputOnly"
field335.type = "SFRotation"
field335.name = "r_index2_changed"

ProtoInterface18.field.append(field335)
field336 = x3d.field()
field336.accessType = "inputOutput"
field336.type = "MFFloat"
field336.name = "r_index3_key"

ProtoInterface18.field.append(field336)
field337 = x3d.field()
field337.accessType = "inputOutput"
field337.type = "MFRotation"
field337.name = "r_index3_keyValue"

ProtoInterface18.field.append(field337)
field338 = x3d.field()
field338.accessType = "outputOnly"
field338.type = "SFRotation"
field338.name = "r_index3_changed"

ProtoInterface18.field.append(field338)
field339 = x3d.field()
field339.accessType = "inputOutput"
field339.type = "MFFloat"
field339.name = "r_index_distal_key"

ProtoInterface18.field.append(field339)
field340 = x3d.field()
field340.accessType = "inputOutput"
field340.type = "MFRotation"
field340.name = "r_index_distal_keyValue"

ProtoInterface18.field.append(field340)
field341 = x3d.field()
field341.accessType = "outputOnly"
field341.type = "SFRotation"
field341.name = "r_index_distal_changed"

ProtoInterface18.field.append(field341)
field342 = x3d.field()
field342.accessType = "inputOutput"
field342.type = "MFFloat"
field342.name = "r_index_metacarpal_key"

ProtoInterface18.field.append(field342)
field343 = x3d.field()
field343.accessType = "inputOutput"
field343.type = "MFRotation"
field343.name = "r_index_metacarpal_keyValue"

ProtoInterface18.field.append(field343)
field344 = x3d.field()
field344.accessType = "outputOnly"
field344.type = "SFRotation"
field344.name = "r_index_metacarpal_changed"

ProtoInterface18.field.append(field344)
field345 = x3d.field()
field345.accessType = "inputOutput"
field345.type = "MFFloat"
field345.name = "r_index_middle_key"

ProtoInterface18.field.append(field345)
field346 = x3d.field()
field346.accessType = "inputOutput"
field346.type = "MFRotation"
field346.name = "r_index_middle_keyValue"

ProtoInterface18.field.append(field346)
field347 = x3d.field()
field347.accessType = "outputOnly"
field347.type = "SFRotation"
field347.name = "r_index_middle_changed"

ProtoInterface18.field.append(field347)
field348 = x3d.field()
field348.accessType = "inputOutput"
field348.type = "MFFloat"
field348.name = "r_index_proximal_key"

ProtoInterface18.field.append(field348)
field349 = x3d.field()
field349.accessType = "inputOutput"
field349.type = "MFRotation"
field349.name = "r_index_proximal_keyValue"

ProtoInterface18.field.append(field349)
field350 = x3d.field()
field350.accessType = "outputOnly"
field350.type = "SFRotation"
field350.name = "r_index_proximal_changed"

ProtoInterface18.field.append(field350)
field351 = x3d.field()
field351.accessType = "inputOutput"
field351.type = "MFFloat"
field351.name = "r_knee_key"

ProtoInterface18.field.append(field351)
field352 = x3d.field()
field352.accessType = "inputOutput"
field352.type = "MFRotation"
field352.name = "r_knee_keyValue"

ProtoInterface18.field.append(field352)
field353 = x3d.field()
field353.accessType = "outputOnly"
field353.type = "SFRotation"
field353.name = "r_knee_changed"

ProtoInterface18.field.append(field353)
field354 = x3d.field()
field354.accessType = "inputOutput"
field354.type = "MFFloat"
field354.name = "r_metatarsal_key"

ProtoInterface18.field.append(field354)
field355 = x3d.field()
field355.accessType = "inputOutput"
field355.type = "MFRotation"
field355.name = "r_metatarsal_keyValue"

ProtoInterface18.field.append(field355)
field356 = x3d.field()
field356.accessType = "outputOnly"
field356.type = "SFRotation"
field356.name = "r_metatarsal_changed"

ProtoInterface18.field.append(field356)
field357 = x3d.field()
field357.accessType = "inputOutput"
field357.type = "MFFloat"
field357.name = "r_middistal_key"

ProtoInterface18.field.append(field357)
field358 = x3d.field()
field358.accessType = "inputOutput"
field358.type = "MFRotation"
field358.name = "r_middistal_keyValue"

ProtoInterface18.field.append(field358)
field359 = x3d.field()
field359.accessType = "outputOnly"
field359.type = "SFRotation"
field359.name = "r_middistal_changed"

ProtoInterface18.field.append(field359)
field360 = x3d.field()
field360.accessType = "inputOutput"
field360.type = "MFFloat"
field360.name = "r_middle0_key"

ProtoInterface18.field.append(field360)
field361 = x3d.field()
field361.accessType = "inputOutput"
field361.type = "MFRotation"
field361.name = "r_middle0_keyValue"

ProtoInterface18.field.append(field361)
field362 = x3d.field()
field362.accessType = "outputOnly"
field362.type = "SFRotation"
field362.name = "r_middle0_changed"

ProtoInterface18.field.append(field362)
field363 = x3d.field()
field363.accessType = "inputOutput"
field363.type = "MFFloat"
field363.name = "r_middle1_key"

ProtoInterface18.field.append(field363)
field364 = x3d.field()
field364.accessType = "inputOutput"
field364.type = "MFRotation"
field364.name = "r_middle1_keyValue"

ProtoInterface18.field.append(field364)
field365 = x3d.field()
field365.accessType = "outputOnly"
field365.type = "SFRotation"
field365.name = "r_middle1_changed"

ProtoInterface18.field.append(field365)
field366 = x3d.field()
field366.accessType = "inputOutput"
field366.type = "MFFloat"
field366.name = "r_middle2_key"

ProtoInterface18.field.append(field366)
field367 = x3d.field()
field367.accessType = "inputOutput"
field367.type = "MFRotation"
field367.name = "r_middle2_keyValue"

ProtoInterface18.field.append(field367)
field368 = x3d.field()
field368.accessType = "outputOnly"
field368.type = "SFRotation"
field368.name = "r_middle2_changed"

ProtoInterface18.field.append(field368)
field369 = x3d.field()
field369.accessType = "inputOutput"
field369.type = "MFFloat"
field369.name = "r_middle3_key"

ProtoInterface18.field.append(field369)
field370 = x3d.field()
field370.accessType = "inputOutput"
field370.type = "MFRotation"
field370.name = "r_middle3_keyValue"

ProtoInterface18.field.append(field370)
field371 = x3d.field()
field371.accessType = "outputOnly"
field371.type = "SFRotation"
field371.name = "r_middle3_changed"

ProtoInterface18.field.append(field371)
field372 = x3d.field()
field372.accessType = "inputOutput"
field372.type = "MFFloat"
field372.name = "r_middle_distal_key"

ProtoInterface18.field.append(field372)
field373 = x3d.field()
field373.accessType = "inputOutput"
field373.type = "MFRotation"
field373.name = "r_middle_distal_keyValue"

ProtoInterface18.field.append(field373)
field374 = x3d.field()
field374.accessType = "outputOnly"
field374.type = "SFRotation"
field374.name = "r_middle_distal_changed"

ProtoInterface18.field.append(field374)
field375 = x3d.field()
field375.accessType = "inputOutput"
field375.type = "MFFloat"
field375.name = "r_middle_metacarpal_key"

ProtoInterface18.field.append(field375)
field376 = x3d.field()
field376.accessType = "inputOutput"
field376.type = "MFRotation"
field376.name = "r_middle_metacarpal_keyValue"

ProtoInterface18.field.append(field376)
field377 = x3d.field()
field377.accessType = "outputOnly"
field377.type = "SFRotation"
field377.name = "r_middle_metacarpal_changed"

ProtoInterface18.field.append(field377)
field378 = x3d.field()
field378.accessType = "inputOutput"
field378.type = "MFFloat"
field378.name = "r_middle_middle_key"

ProtoInterface18.field.append(field378)
field379 = x3d.field()
field379.accessType = "inputOutput"
field379.type = "MFRotation"
field379.name = "r_middle_middle_keyValue"

ProtoInterface18.field.append(field379)
field380 = x3d.field()
field380.accessType = "outputOnly"
field380.type = "SFRotation"
field380.name = "r_middle_middle_changed"

ProtoInterface18.field.append(field380)
field381 = x3d.field()
field381.accessType = "inputOutput"
field381.type = "MFFloat"
field381.name = "r_middle_proximal_key"

ProtoInterface18.field.append(field381)
field382 = x3d.field()
field382.accessType = "inputOutput"
field382.type = "MFRotation"
field382.name = "r_middle_proximal_keyValue"

ProtoInterface18.field.append(field382)
field383 = x3d.field()
field383.accessType = "outputOnly"
field383.type = "SFRotation"
field383.name = "r_middle_proximal_changed"

ProtoInterface18.field.append(field383)
field384 = x3d.field()
field384.accessType = "inputOutput"
field384.type = "MFFloat"
field384.name = "r_midproximal_key"

ProtoInterface18.field.append(field384)
field385 = x3d.field()
field385.accessType = "inputOutput"
field385.type = "MFRotation"
field385.name = "r_midproximal_keyValue"

ProtoInterface18.field.append(field385)
field386 = x3d.field()
field386.accessType = "outputOnly"
field386.type = "SFRotation"
field386.name = "r_midproximal_changed"

ProtoInterface18.field.append(field386)
field387 = x3d.field()
field387.accessType = "inputOutput"
field387.type = "MFFloat"
field387.name = "r_midtarsal_key"

ProtoInterface18.field.append(field387)
field388 = x3d.field()
field388.accessType = "inputOutput"
field388.type = "MFRotation"
field388.name = "r_midtarsal_keyValue"

ProtoInterface18.field.append(field388)
field389 = x3d.field()
field389.accessType = "outputOnly"
field389.type = "SFRotation"
field389.name = "r_midtarsal_changed"

ProtoInterface18.field.append(field389)
field390 = x3d.field()
field390.accessType = "inputOutput"
field390.type = "MFFloat"
field390.name = "r_pinky0_key"

ProtoInterface18.field.append(field390)
field391 = x3d.field()
field391.accessType = "inputOutput"
field391.type = "MFRotation"
field391.name = "r_pinky0_keyValue"

ProtoInterface18.field.append(field391)
field392 = x3d.field()
field392.accessType = "outputOnly"
field392.type = "SFRotation"
field392.name = "r_pinky0_changed"

ProtoInterface18.field.append(field392)
field393 = x3d.field()
field393.accessType = "inputOutput"
field393.type = "MFFloat"
field393.name = "r_pinky1_key"

ProtoInterface18.field.append(field393)
field394 = x3d.field()
field394.accessType = "inputOutput"
field394.type = "MFRotation"
field394.name = "r_pinky1_keyValue"

ProtoInterface18.field.append(field394)
field395 = x3d.field()
field395.accessType = "outputOnly"
field395.type = "SFRotation"
field395.name = "r_pinky1_changed"

ProtoInterface18.field.append(field395)
field396 = x3d.field()
field396.accessType = "inputOutput"
field396.type = "MFFloat"
field396.name = "r_pinky2_key"

ProtoInterface18.field.append(field396)
field397 = x3d.field()
field397.accessType = "inputOutput"
field397.type = "MFRotation"
field397.name = "r_pinky2_keyValue"

ProtoInterface18.field.append(field397)
field398 = x3d.field()
field398.accessType = "outputOnly"
field398.type = "SFRotation"
field398.name = "r_pinky2_changed"

ProtoInterface18.field.append(field398)
field399 = x3d.field()
field399.accessType = "inputOutput"
field399.type = "MFFloat"
field399.name = "r_pinky3_key"

ProtoInterface18.field.append(field399)
field400 = x3d.field()
field400.accessType = "inputOutput"
field400.type = "MFRotation"
field400.name = "r_pinky3_keyValue"

ProtoInterface18.field.append(field400)
field401 = x3d.field()
field401.accessType = "outputOnly"
field401.type = "SFRotation"
field401.name = "r_pinky3_changed"

ProtoInterface18.field.append(field401)
field402 = x3d.field()
field402.accessType = "inputOutput"
field402.type = "MFFloat"
field402.name = "r_pinky_distal_key"

ProtoInterface18.field.append(field402)
field403 = x3d.field()
field403.accessType = "inputOutput"
field403.type = "MFRotation"
field403.name = "r_pinky_distal_keyValue"

ProtoInterface18.field.append(field403)
field404 = x3d.field()
field404.accessType = "outputOnly"
field404.type = "SFRotation"
field404.name = "r_pinky_distal_changed"

ProtoInterface18.field.append(field404)
field405 = x3d.field()
field405.accessType = "inputOutput"
field405.type = "MFFloat"
field405.name = "r_pinky_metacarpal_key"

ProtoInterface18.field.append(field405)
field406 = x3d.field()
field406.accessType = "inputOutput"
field406.type = "MFRotation"
field406.name = "r_pinky_metacarpal_keyValue"

ProtoInterface18.field.append(field406)
field407 = x3d.field()
field407.accessType = "outputOnly"
field407.type = "SFRotation"
field407.name = "r_pinky_metacarpal_changed"

ProtoInterface18.field.append(field407)
field408 = x3d.field()
field408.accessType = "inputOutput"
field408.type = "MFFloat"
field408.name = "r_pinky_middle_key"

ProtoInterface18.field.append(field408)
field409 = x3d.field()
field409.accessType = "inputOutput"
field409.type = "MFRotation"
field409.name = "r_pinky_middle_keyValue"

ProtoInterface18.field.append(field409)
field410 = x3d.field()
field410.accessType = "outputOnly"
field410.type = "SFRotation"
field410.name = "r_pinky_middle_changed"

ProtoInterface18.field.append(field410)
field411 = x3d.field()
field411.accessType = "inputOutput"
field411.type = "MFFloat"
field411.name = "r_pinky_proximal_key"

ProtoInterface18.field.append(field411)
field412 = x3d.field()
field412.accessType = "inputOutput"
field412.type = "MFRotation"
field412.name = "r_pinky_proximal_keyValue"

ProtoInterface18.field.append(field412)
field413 = x3d.field()
field413.accessType = "outputOnly"
field413.type = "SFRotation"
field413.name = "r_pinky_proximal_changed"

ProtoInterface18.field.append(field413)
field414 = x3d.field()
field414.accessType = "inputOutput"
field414.type = "MFFloat"
field414.name = "r_ring0_key"

ProtoInterface18.field.append(field414)
field415 = x3d.field()
field415.accessType = "inputOutput"
field415.type = "MFRotation"
field415.name = "r_ring0_keyValue"

ProtoInterface18.field.append(field415)
field416 = x3d.field()
field416.accessType = "outputOnly"
field416.type = "SFRotation"
field416.name = "r_ring0_changed"

ProtoInterface18.field.append(field416)
field417 = x3d.field()
field417.accessType = "inputOutput"
field417.type = "MFFloat"
field417.name = "r_ring1_key"

ProtoInterface18.field.append(field417)
field418 = x3d.field()
field418.accessType = "inputOutput"
field418.type = "MFRotation"
field418.name = "r_ring1_keyValue"

ProtoInterface18.field.append(field418)
field419 = x3d.field()
field419.accessType = "outputOnly"
field419.type = "SFRotation"
field419.name = "r_ring1_changed"

ProtoInterface18.field.append(field419)
field420 = x3d.field()
field420.accessType = "inputOutput"
field420.type = "MFFloat"
field420.name = "r_ring2_key"

ProtoInterface18.field.append(field420)
field421 = x3d.field()
field421.accessType = "inputOutput"
field421.type = "MFRotation"
field421.name = "r_ring2_keyValue"

ProtoInterface18.field.append(field421)
field422 = x3d.field()
field422.accessType = "outputOnly"
field422.type = "SFRotation"
field422.name = "r_ring2_changed"

ProtoInterface18.field.append(field422)
field423 = x3d.field()
field423.accessType = "inputOutput"
field423.type = "MFFloat"
field423.name = "r_ring3_key"

ProtoInterface18.field.append(field423)
field424 = x3d.field()
field424.accessType = "inputOutput"
field424.type = "MFRotation"
field424.name = "r_ring3_keyValue"

ProtoInterface18.field.append(field424)
field425 = x3d.field()
field425.accessType = "outputOnly"
field425.type = "SFRotation"
field425.name = "r_ring3_changed"

ProtoInterface18.field.append(field425)
field426 = x3d.field()
field426.accessType = "inputOutput"
field426.type = "MFFloat"
field426.name = "r_ring_distal_key"

ProtoInterface18.field.append(field426)
field427 = x3d.field()
field427.accessType = "inputOutput"
field427.type = "MFRotation"
field427.name = "r_ring_distal_keyValue"

ProtoInterface18.field.append(field427)
field428 = x3d.field()
field428.accessType = "outputOnly"
field428.type = "SFRotation"
field428.name = "r_ring_distal_changed"

ProtoInterface18.field.append(field428)
field429 = x3d.field()
field429.accessType = "inputOutput"
field429.type = "MFFloat"
field429.name = "r_ring_metacarpal_key"

ProtoInterface18.field.append(field429)
field430 = x3d.field()
field430.accessType = "inputOutput"
field430.type = "MFRotation"
field430.name = "r_ring_metacarpal_keyValue"

ProtoInterface18.field.append(field430)
field431 = x3d.field()
field431.accessType = "outputOnly"
field431.type = "SFRotation"
field431.name = "r_ring_metacarpal_changed"

ProtoInterface18.field.append(field431)
field432 = x3d.field()
field432.accessType = "inputOutput"
field432.type = "MFFloat"
field432.name = "r_ring_middle_key"

ProtoInterface18.field.append(field432)
field433 = x3d.field()
field433.accessType = "inputOutput"
field433.type = "MFRotation"
field433.name = "r_ring_middle_keyValue"

ProtoInterface18.field.append(field433)
field434 = x3d.field()
field434.accessType = "outputOnly"
field434.type = "SFRotation"
field434.name = "r_ring_middle_changed"

ProtoInterface18.field.append(field434)
field435 = x3d.field()
field435.accessType = "inputOutput"
field435.type = "MFFloat"
field435.name = "r_ring_proximal_key"

ProtoInterface18.field.append(field435)
field436 = x3d.field()
field436.accessType = "inputOutput"
field436.type = "MFRotation"
field436.name = "r_ring_proximal_keyValue"

ProtoInterface18.field.append(field436)
field437 = x3d.field()
field437.accessType = "outputOnly"
field437.type = "SFRotation"
field437.name = "r_ring_proximal_changed"

ProtoInterface18.field.append(field437)
field438 = x3d.field()
field438.accessType = "inputOutput"
field438.type = "MFFloat"
field438.name = "r_scapula_key"

ProtoInterface18.field.append(field438)
field439 = x3d.field()
field439.accessType = "inputOutput"
field439.type = "MFRotation"
field439.name = "r_scapula_keyValue"

ProtoInterface18.field.append(field439)
field440 = x3d.field()
field440.accessType = "outputOnly"
field440.type = "SFRotation"
field440.name = "r_scapula_changed"

ProtoInterface18.field.append(field440)
field441 = x3d.field()
field441.accessType = "inputOutput"
field441.type = "MFFloat"
field441.name = "r_shoulder_key"

ProtoInterface18.field.append(field441)
field442 = x3d.field()
field442.accessType = "inputOutput"
field442.type = "MFRotation"
field442.name = "r_shoulder_keyValue"

ProtoInterface18.field.append(field442)
field443 = x3d.field()
field443.accessType = "outputOnly"
field443.type = "SFRotation"
field443.name = "r_shoulder_changed"

ProtoInterface18.field.append(field443)
field444 = x3d.field()
field444.accessType = "inputOutput"
field444.type = "MFFloat"
field444.name = "r_sternoclavicular_key"

ProtoInterface18.field.append(field444)
field445 = x3d.field()
field445.accessType = "inputOutput"
field445.type = "MFRotation"
field445.name = "r_sternoclavicular_keyValue"

ProtoInterface18.field.append(field445)
field446 = x3d.field()
field446.accessType = "outputOnly"
field446.type = "SFRotation"
field446.name = "r_sternoclavicular_changed"

ProtoInterface18.field.append(field446)
field447 = x3d.field()
field447.accessType = "inputOutput"
field447.type = "MFFloat"
field447.name = "r_subtalar_key"

ProtoInterface18.field.append(field447)
field448 = x3d.field()
field448.accessType = "inputOutput"
field448.type = "MFRotation"
field448.name = "r_subtalar_keyValue"

ProtoInterface18.field.append(field448)
field449 = x3d.field()
field449.accessType = "outputOnly"
field449.type = "SFRotation"
field449.name = "r_subtalar_changed"

ProtoInterface18.field.append(field449)
field450 = x3d.field()
field450.accessType = "inputOutput"
field450.type = "MFFloat"
field450.name = "r_thigh_key"

ProtoInterface18.field.append(field450)
field451 = x3d.field()
field451.accessType = "inputOutput"
field451.type = "MFRotation"
field451.name = "r_thigh_keyValue"

ProtoInterface18.field.append(field451)
field452 = x3d.field()
field452.accessType = "outputOnly"
field452.type = "SFRotation"
field452.name = "r_thigh_changed"

ProtoInterface18.field.append(field452)
field453 = x3d.field()
field453.accessType = "inputOutput"
field453.type = "MFFloat"
field453.name = "r_thumb1_key"

ProtoInterface18.field.append(field453)
field454 = x3d.field()
field454.accessType = "inputOutput"
field454.type = "MFRotation"
field454.name = "r_thumb1_keyValue"

ProtoInterface18.field.append(field454)
field455 = x3d.field()
field455.accessType = "outputOnly"
field455.type = "SFRotation"
field455.name = "r_thumb1_changed"

ProtoInterface18.field.append(field455)
field456 = x3d.field()
field456.accessType = "inputOutput"
field456.type = "MFFloat"
field456.name = "r_thumb2_key"

ProtoInterface18.field.append(field456)
field457 = x3d.field()
field457.accessType = "inputOutput"
field457.type = "MFRotation"
field457.name = "r_thumb2_keyValue"

ProtoInterface18.field.append(field457)
field458 = x3d.field()
field458.accessType = "outputOnly"
field458.type = "SFRotation"
field458.name = "r_thumb2_changed"

ProtoInterface18.field.append(field458)
field459 = x3d.field()
field459.accessType = "inputOutput"
field459.type = "MFFloat"
field459.name = "r_thumb3_key"

ProtoInterface18.field.append(field459)
field460 = x3d.field()
field460.accessType = "inputOutput"
field460.type = "MFRotation"
field460.name = "r_thumb3_keyValue"

ProtoInterface18.field.append(field460)
field461 = x3d.field()
field461.accessType = "outputOnly"
field461.type = "SFRotation"
field461.name = "r_thumb3_changed"

ProtoInterface18.field.append(field461)
field462 = x3d.field()
field462.accessType = "inputOutput"
field462.type = "MFFloat"
field462.name = "r_thumb_distal_key"

ProtoInterface18.field.append(field462)
field463 = x3d.field()
field463.accessType = "inputOutput"
field463.type = "MFRotation"
field463.name = "r_thumb_distal_keyValue"

ProtoInterface18.field.append(field463)
field464 = x3d.field()
field464.accessType = "outputOnly"
field464.type = "SFRotation"
field464.name = "r_thumb_distal_changed"

ProtoInterface18.field.append(field464)
field465 = x3d.field()
field465.accessType = "inputOutput"
field465.type = "MFFloat"
field465.name = "r_thumb_metacarpal_key"

ProtoInterface18.field.append(field465)
field466 = x3d.field()
field466.accessType = "inputOutput"
field466.type = "MFRotation"
field466.name = "r_thumb_metacarpal_keyValue"

ProtoInterface18.field.append(field466)
field467 = x3d.field()
field467.accessType = "outputOnly"
field467.type = "SFRotation"
field467.name = "r_thumb_metacarpal_changed"

ProtoInterface18.field.append(field467)
field468 = x3d.field()
field468.accessType = "inputOutput"
field468.type = "MFFloat"
field468.name = "r_thumb_proximal_key"

ProtoInterface18.field.append(field468)
field469 = x3d.field()
field469.accessType = "inputOutput"
field469.type = "MFRotation"
field469.name = "r_thumb_proximal_keyValue"

ProtoInterface18.field.append(field469)
field470 = x3d.field()
field470.accessType = "outputOnly"
field470.type = "SFRotation"
field470.name = "r_thumb_proximal_changed"

ProtoInterface18.field.append(field470)
field471 = x3d.field()
field471.accessType = "inputOutput"
field471.type = "MFFloat"
field471.name = "r_upperarm_key"

ProtoInterface18.field.append(field471)
field472 = x3d.field()
field472.accessType = "inputOutput"
field472.type = "MFRotation"
field472.name = "r_upperarm_keyValue"

ProtoInterface18.field.append(field472)
field473 = x3d.field()
field473.accessType = "outputOnly"
field473.type = "SFRotation"
field473.name = "r_upperarm_changed"

ProtoInterface18.field.append(field473)
field474 = x3d.field()
field474.accessType = "inputOutput"
field474.type = "MFFloat"
field474.name = "r_wrist_key"

ProtoInterface18.field.append(field474)
field475 = x3d.field()
field475.accessType = "inputOutput"
field475.type = "MFRotation"
field475.name = "r_wrist_keyValue"

ProtoInterface18.field.append(field475)
field476 = x3d.field()
field476.accessType = "outputOnly"
field476.type = "SFRotation"
field476.name = "r_wrist_changed"

ProtoInterface18.field.append(field476)
field477 = x3d.field()
field477.accessType = "inputOutput"
field477.type = "MFFloat"
field477.name = "sacroiliac_key"

ProtoInterface18.field.append(field477)
field478 = x3d.field()
field478.accessType = "inputOutput"
field478.type = "MFRotation"
field478.name = "sacroiliac_keyValue"

ProtoInterface18.field.append(field478)
field479 = x3d.field()
field479.accessType = "outputOnly"
field479.type = "SFRotation"
field479.name = "sacroiliac_changed"

ProtoInterface18.field.append(field479)
field480 = x3d.field()
field480.accessType = "inputOutput"
field480.type = "MFFloat"
field480.name = "sacrum_key"

ProtoInterface18.field.append(field480)
field481 = x3d.field()
field481.accessType = "inputOutput"
field481.type = "MFRotation"
field481.name = "sacrum_keyValue"

ProtoInterface18.field.append(field481)
field482 = x3d.field()
field482.accessType = "outputOnly"
field482.type = "SFRotation"
field482.name = "sacrum_changed"

ProtoInterface18.field.append(field482)
field483 = x3d.field()
field483.accessType = "inputOutput"
field483.type = "MFFloat"
field483.name = "skull_key"

ProtoInterface18.field.append(field483)
field484 = x3d.field()
field484.accessType = "inputOutput"
field484.type = "MFRotation"
field484.name = "skull_keyValue"

ProtoInterface18.field.append(field484)
field485 = x3d.field()
field485.accessType = "outputOnly"
field485.type = "SFRotation"
field485.name = "skull_changed"

ProtoInterface18.field.append(field485)
field486 = x3d.field()
field486.accessType = "inputOutput"
field486.type = "MFFloat"
field486.name = "skullbase_key"

ProtoInterface18.field.append(field486)
field487 = x3d.field()
field487.accessType = "inputOutput"
field487.type = "MFRotation"
field487.name = "skullbase_keyValue"

ProtoInterface18.field.append(field487)
field488 = x3d.field()
field488.accessType = "outputOnly"
field488.type = "SFRotation"
field488.name = "skullbase_changed"

ProtoInterface18.field.append(field488)
field489 = x3d.field()
field489.accessType = "inputOutput"
field489.type = "MFFloat"
field489.name = "t10_key"

ProtoInterface18.field.append(field489)
field490 = x3d.field()
field490.accessType = "inputOutput"
field490.type = "MFRotation"
field490.name = "t10_keyValue"

ProtoInterface18.field.append(field490)
field491 = x3d.field()
field491.accessType = "outputOnly"
field491.type = "SFRotation"
field491.name = "t10_changed"

ProtoInterface18.field.append(field491)
field492 = x3d.field()
field492.accessType = "inputOutput"
field492.type = "MFFloat"
field492.name = "t11_key"

ProtoInterface18.field.append(field492)
field493 = x3d.field()
field493.accessType = "inputOutput"
field493.type = "MFRotation"
field493.name = "t11_keyValue"

ProtoInterface18.field.append(field493)
field494 = x3d.field()
field494.accessType = "outputOnly"
field494.type = "SFRotation"
field494.name = "t11_changed"

ProtoInterface18.field.append(field494)
field495 = x3d.field()
field495.accessType = "inputOutput"
field495.type = "MFFloat"
field495.name = "t12_key"

ProtoInterface18.field.append(field495)
field496 = x3d.field()
field496.accessType = "inputOutput"
field496.type = "MFRotation"
field496.name = "t12_keyValue"

ProtoInterface18.field.append(field496)
field497 = x3d.field()
field497.accessType = "outputOnly"
field497.type = "SFRotation"
field497.name = "t12_changed"

ProtoInterface18.field.append(field497)
field498 = x3d.field()
field498.accessType = "inputOutput"
field498.type = "MFFloat"
field498.name = "t1_key"

ProtoInterface18.field.append(field498)
field499 = x3d.field()
field499.accessType = "inputOutput"
field499.type = "MFRotation"
field499.name = "t1_keyValue"

ProtoInterface18.field.append(field499)
field500 = x3d.field()
field500.accessType = "outputOnly"
field500.type = "SFRotation"
field500.name = "t1_changed"

ProtoInterface18.field.append(field500)
field501 = x3d.field()
field501.accessType = "inputOutput"
field501.type = "MFFloat"
field501.name = "t2_key"

ProtoInterface18.field.append(field501)
field502 = x3d.field()
field502.accessType = "inputOutput"
field502.type = "MFRotation"
field502.name = "t2_keyValue"

ProtoInterface18.field.append(field502)
field503 = x3d.field()
field503.accessType = "outputOnly"
field503.type = "SFRotation"
field503.name = "t2_changed"

ProtoInterface18.field.append(field503)
field504 = x3d.field()
field504.accessType = "inputOutput"
field504.type = "MFFloat"
field504.name = "t3_key"

ProtoInterface18.field.append(field504)
field505 = x3d.field()
field505.accessType = "inputOutput"
field505.type = "MFRotation"
field505.name = "t3_keyValue"

ProtoInterface18.field.append(field505)
field506 = x3d.field()
field506.accessType = "outputOnly"
field506.type = "SFRotation"
field506.name = "t3_changed"

ProtoInterface18.field.append(field506)
field507 = x3d.field()
field507.accessType = "inputOutput"
field507.type = "MFFloat"
field507.name = "t4_key"

ProtoInterface18.field.append(field507)
field508 = x3d.field()
field508.accessType = "inputOutput"
field508.type = "MFRotation"
field508.name = "t4_keyValue"

ProtoInterface18.field.append(field508)
field509 = x3d.field()
field509.accessType = "outputOnly"
field509.type = "SFRotation"
field509.name = "t4_changed"

ProtoInterface18.field.append(field509)
field510 = x3d.field()
field510.accessType = "inputOutput"
field510.type = "MFFloat"
field510.name = "t5_key"

ProtoInterface18.field.append(field510)
field511 = x3d.field()
field511.accessType = "inputOutput"
field511.type = "MFRotation"
field511.name = "t5_keyValue"

ProtoInterface18.field.append(field511)
field512 = x3d.field()
field512.accessType = "outputOnly"
field512.type = "SFRotation"
field512.name = "t5_changed"

ProtoInterface18.field.append(field512)
field513 = x3d.field()
field513.accessType = "inputOutput"
field513.type = "MFFloat"
field513.name = "t6_key"

ProtoInterface18.field.append(field513)
field514 = x3d.field()
field514.accessType = "inputOutput"
field514.type = "MFRotation"
field514.name = "t6_keyValue"

ProtoInterface18.field.append(field514)
field515 = x3d.field()
field515.accessType = "outputOnly"
field515.type = "SFRotation"
field515.name = "t6_changed"

ProtoInterface18.field.append(field515)
field516 = x3d.field()
field516.accessType = "inputOutput"
field516.type = "MFFloat"
field516.name = "t7_key"

ProtoInterface18.field.append(field516)
field517 = x3d.field()
field517.accessType = "inputOutput"
field517.type = "MFRotation"
field517.name = "t7_keyValue"

ProtoInterface18.field.append(field517)
field518 = x3d.field()
field518.accessType = "outputOnly"
field518.type = "SFRotation"
field518.name = "t7_changed"

ProtoInterface18.field.append(field518)
field519 = x3d.field()
field519.accessType = "inputOutput"
field519.type = "MFFloat"
field519.name = "t8_key"

ProtoInterface18.field.append(field519)
field520 = x3d.field()
field520.accessType = "inputOutput"
field520.type = "MFRotation"
field520.name = "t8_keyValue"

ProtoInterface18.field.append(field520)
field521 = x3d.field()
field521.accessType = "outputOnly"
field521.type = "SFRotation"
field521.name = "t8_changed"

ProtoInterface18.field.append(field521)
field522 = x3d.field()
field522.accessType = "inputOutput"
field522.type = "MFFloat"
field522.name = "t9_key"

ProtoInterface18.field.append(field522)
field523 = x3d.field()
field523.accessType = "inputOutput"
field523.type = "MFRotation"
field523.name = "t9_keyValue"

ProtoInterface18.field.append(field523)
field524 = x3d.field()
field524.accessType = "outputOnly"
field524.type = "SFRotation"
field524.name = "t9_changed"

ProtoInterface18.field.append(field524)
field525 = x3d.field()
field525.accessType = "inputOutput"
field525.type = "MFFloat"
field525.name = "temporomandibular_key"

ProtoInterface18.field.append(field525)
field526 = x3d.field()
field526.accessType = "inputOutput"
field526.type = "MFRotation"
field526.name = "temporomandibular_keyValue"

ProtoInterface18.field.append(field526)
field527 = x3d.field()
field527.accessType = "outputOnly"
field527.type = "SFRotation"
field527.name = "temporomandibular_changed"

ProtoInterface18.field.append(field527)
field528 = x3d.field()
field528.accessType = "inputOutput"
field528.type = "MFFloat"
field528.name = "vc1_key"

ProtoInterface18.field.append(field528)
field529 = x3d.field()
field529.accessType = "inputOutput"
field529.type = "MFRotation"
field529.name = "vc1_keyValue"

ProtoInterface18.field.append(field529)
field530 = x3d.field()
field530.accessType = "outputOnly"
field530.type = "SFRotation"
field530.name = "vc1_changed"

ProtoInterface18.field.append(field530)
field531 = x3d.field()
field531.accessType = "inputOutput"
field531.type = "MFFloat"
field531.name = "vc2_key"

ProtoInterface18.field.append(field531)
field532 = x3d.field()
field532.accessType = "inputOutput"
field532.type = "MFRotation"
field532.name = "vc2_keyValue"

ProtoInterface18.field.append(field532)
field533 = x3d.field()
field533.accessType = "outputOnly"
field533.type = "SFRotation"
field533.name = "vc2_changed"

ProtoInterface18.field.append(field533)
field534 = x3d.field()
field534.accessType = "inputOutput"
field534.type = "MFFloat"
field534.name = "vc3_key"

ProtoInterface18.field.append(field534)
field535 = x3d.field()
field535.accessType = "inputOutput"
field535.type = "MFRotation"
field535.name = "vc3_keyValue"

ProtoInterface18.field.append(field535)
field536 = x3d.field()
field536.accessType = "outputOnly"
field536.type = "SFRotation"
field536.name = "vc3_changed"

ProtoInterface18.field.append(field536)
field537 = x3d.field()
field537.accessType = "inputOutput"
field537.type = "MFFloat"
field537.name = "vc4_key"

ProtoInterface18.field.append(field537)
field538 = x3d.field()
field538.accessType = "inputOutput"
field538.type = "MFRotation"
field538.name = "vc4_keyValue"

ProtoInterface18.field.append(field538)
field539 = x3d.field()
field539.accessType = "outputOnly"
field539.type = "SFRotation"
field539.name = "vc4_changed"

ProtoInterface18.field.append(field539)
field540 = x3d.field()
field540.accessType = "inputOutput"
field540.type = "MFFloat"
field540.name = "vc5_key"

ProtoInterface18.field.append(field540)
field541 = x3d.field()
field541.accessType = "inputOutput"
field541.type = "MFRotation"
field541.name = "vc5_keyValue"

ProtoInterface18.field.append(field541)
field542 = x3d.field()
field542.accessType = "outputOnly"
field542.type = "SFRotation"
field542.name = "vc5_changed"

ProtoInterface18.field.append(field542)
field543 = x3d.field()
field543.accessType = "inputOutput"
field543.type = "MFFloat"
field543.name = "vc6_key"

ProtoInterface18.field.append(field543)
field544 = x3d.field()
field544.accessType = "inputOutput"
field544.type = "MFRotation"
field544.name = "vc6_keyValue"

ProtoInterface18.field.append(field544)
field545 = x3d.field()
field545.accessType = "outputOnly"
field545.type = "SFRotation"
field545.name = "vc6_changed"

ProtoInterface18.field.append(field545)
field546 = x3d.field()
field546.accessType = "inputOutput"
field546.type = "MFFloat"
field546.name = "vc7_key"

ProtoInterface18.field.append(field546)
field547 = x3d.field()
field547.accessType = "inputOutput"
field547.type = "MFRotation"
field547.name = "vc7_keyValue"

ProtoInterface18.field.append(field547)
field548 = x3d.field()
field548.accessType = "outputOnly"
field548.type = "SFRotation"
field548.name = "vc7_changed"

ProtoInterface18.field.append(field548)
field549 = x3d.field()
field549.accessType = "inputOutput"
field549.type = "MFFloat"
field549.name = "vl1_key"

ProtoInterface18.field.append(field549)
field550 = x3d.field()
field550.accessType = "inputOutput"
field550.type = "MFRotation"
field550.name = "vl1_keyValue"

ProtoInterface18.field.append(field550)
field551 = x3d.field()
field551.accessType = "outputOnly"
field551.type = "SFRotation"
field551.name = "vl1_changed"

ProtoInterface18.field.append(field551)
field552 = x3d.field()
field552.accessType = "inputOutput"
field552.type = "MFFloat"
field552.name = "vl2_key"

ProtoInterface18.field.append(field552)
field553 = x3d.field()
field553.accessType = "inputOutput"
field553.type = "MFRotation"
field553.name = "vl2_keyValue"

ProtoInterface18.field.append(field553)
field554 = x3d.field()
field554.accessType = "outputOnly"
field554.type = "SFRotation"
field554.name = "vl2_changed"

ProtoInterface18.field.append(field554)
field555 = x3d.field()
field555.accessType = "inputOutput"
field555.type = "MFFloat"
field555.name = "vl3_key"

ProtoInterface18.field.append(field555)
field556 = x3d.field()
field556.accessType = "inputOutput"
field556.type = "MFRotation"
field556.name = "vl3_keyValue"

ProtoInterface18.field.append(field556)
field557 = x3d.field()
field557.accessType = "outputOnly"
field557.type = "SFRotation"
field557.name = "vl3_changed"

ProtoInterface18.field.append(field557)
field558 = x3d.field()
field558.accessType = "inputOutput"
field558.type = "MFFloat"
field558.name = "vl4_key"

ProtoInterface18.field.append(field558)
field559 = x3d.field()
field559.accessType = "inputOutput"
field559.type = "MFRotation"
field559.name = "vl4_keyValue"

ProtoInterface18.field.append(field559)
field560 = x3d.field()
field560.accessType = "outputOnly"
field560.type = "SFRotation"
field560.name = "vl4_changed"

ProtoInterface18.field.append(field560)
field561 = x3d.field()
field561.accessType = "inputOutput"
field561.type = "MFFloat"
field561.name = "vl5_key"

ProtoInterface18.field.append(field561)
field562 = x3d.field()
field562.accessType = "inputOutput"
field562.type = "MFRotation"
field562.name = "vl5_keyValue"

ProtoInterface18.field.append(field562)
field563 = x3d.field()
field563.accessType = "outputOnly"
field563.type = "SFRotation"
field563.name = "vl5_changed"

ProtoInterface18.field.append(field563)
field564 = x3d.field()
field564.accessType = "inputOutput"
field564.type = "MFFloat"
field564.name = "vt10_key"

ProtoInterface18.field.append(field564)
field565 = x3d.field()
field565.accessType = "inputOutput"
field565.type = "MFRotation"
field565.name = "vt10_keyValue"

ProtoInterface18.field.append(field565)
field566 = x3d.field()
field566.accessType = "outputOnly"
field566.type = "SFRotation"
field566.name = "vt10_changed"

ProtoInterface18.field.append(field566)
field567 = x3d.field()
field567.accessType = "inputOutput"
field567.type = "MFFloat"
field567.name = "vt11_key"

ProtoInterface18.field.append(field567)
field568 = x3d.field()
field568.accessType = "inputOutput"
field568.type = "MFRotation"
field568.name = "vt11_keyValue"

ProtoInterface18.field.append(field568)
field569 = x3d.field()
field569.accessType = "outputOnly"
field569.type = "SFRotation"
field569.name = "vt11_changed"

ProtoInterface18.field.append(field569)
field570 = x3d.field()
field570.accessType = "inputOutput"
field570.type = "MFFloat"
field570.name = "vt12_key"

ProtoInterface18.field.append(field570)
field571 = x3d.field()
field571.accessType = "inputOutput"
field571.type = "MFRotation"
field571.name = "vt12_keyValue"

ProtoInterface18.field.append(field571)
field572 = x3d.field()
field572.accessType = "outputOnly"
field572.type = "SFRotation"
field572.name = "vt12_changed"

ProtoInterface18.field.append(field572)
field573 = x3d.field()
field573.accessType = "inputOutput"
field573.type = "MFFloat"
field573.name = "vt1_key"

ProtoInterface18.field.append(field573)
field574 = x3d.field()
field574.accessType = "inputOutput"
field574.type = "MFRotation"
field574.name = "vt1_keyValue"

ProtoInterface18.field.append(field574)
field575 = x3d.field()
field575.accessType = "outputOnly"
field575.type = "SFRotation"
field575.name = "vt1_changed"

ProtoInterface18.field.append(field575)
field576 = x3d.field()
field576.accessType = "inputOutput"
field576.type = "MFFloat"
field576.name = "vt2_key"

ProtoInterface18.field.append(field576)
field577 = x3d.field()
field577.accessType = "inputOutput"
field577.type = "MFRotation"
field577.name = "vt2_keyValue"

ProtoInterface18.field.append(field577)
field578 = x3d.field()
field578.accessType = "outputOnly"
field578.type = "SFRotation"
field578.name = "vt2_changed"

ProtoInterface18.field.append(field578)
field579 = x3d.field()
field579.accessType = "inputOutput"
field579.type = "MFFloat"
field579.name = "vt3_key"

ProtoInterface18.field.append(field579)
field580 = x3d.field()
field580.accessType = "inputOutput"
field580.type = "MFRotation"
field580.name = "vt3_keyValue"

ProtoInterface18.field.append(field580)
field581 = x3d.field()
field581.accessType = "outputOnly"
field581.type = "SFRotation"
field581.name = "vt3_changed"

ProtoInterface18.field.append(field581)
field582 = x3d.field()
field582.accessType = "inputOutput"
field582.type = "MFFloat"
field582.name = "vt4_key"

ProtoInterface18.field.append(field582)
field583 = x3d.field()
field583.accessType = "inputOutput"
field583.type = "MFRotation"
field583.name = "vt4_keyValue"

ProtoInterface18.field.append(field583)
field584 = x3d.field()
field584.accessType = "outputOnly"
field584.type = "SFRotation"
field584.name = "vt4_changed"

ProtoInterface18.field.append(field584)
field585 = x3d.field()
field585.accessType = "inputOutput"
field585.type = "MFFloat"
field585.name = "vt5_key"

ProtoInterface18.field.append(field585)
field586 = x3d.field()
field586.accessType = "inputOutput"
field586.type = "MFRotation"
field586.name = "vt5_keyValue"

ProtoInterface18.field.append(field586)
field587 = x3d.field()
field587.accessType = "outputOnly"
field587.type = "SFRotation"
field587.name = "vt5_changed"

ProtoInterface18.field.append(field587)
field588 = x3d.field()
field588.accessType = "inputOutput"
field588.type = "MFFloat"
field588.name = "vt6_key"

ProtoInterface18.field.append(field588)
field589 = x3d.field()
field589.accessType = "inputOutput"
field589.type = "MFRotation"
field589.name = "vt6_keyValue"

ProtoInterface18.field.append(field589)
field590 = x3d.field()
field590.accessType = "outputOnly"
field590.type = "SFRotation"
field590.name = "vt6_changed"

ProtoInterface18.field.append(field590)
field591 = x3d.field()
field591.accessType = "inputOutput"
field591.type = "MFFloat"
field591.name = "vt7_key"

ProtoInterface18.field.append(field591)
field592 = x3d.field()
field592.accessType = "inputOutput"
field592.type = "MFRotation"
field592.name = "vt7_keyValue"

ProtoInterface18.field.append(field592)
field593 = x3d.field()
field593.accessType = "outputOnly"
field593.type = "SFRotation"
field593.name = "vt7_changed"

ProtoInterface18.field.append(field593)
field594 = x3d.field()
field594.accessType = "inputOutput"
field594.type = "MFFloat"
field594.name = "vt8_key"

ProtoInterface18.field.append(field594)
field595 = x3d.field()
field595.accessType = "inputOutput"
field595.type = "MFRotation"
field595.name = "vt8_keyValue"

ProtoInterface18.field.append(field595)
field596 = x3d.field()
field596.accessType = "outputOnly"
field596.type = "SFRotation"
field596.name = "vt8_changed"

ProtoInterface18.field.append(field596)
field597 = x3d.field()
field597.accessType = "inputOutput"
field597.type = "MFFloat"
field597.name = "vt9_key"

ProtoInterface18.field.append(field597)
field598 = x3d.field()
field598.accessType = "inputOutput"
field598.type = "MFRotation"
field598.name = "vt9_keyValue"

ProtoInterface18.field.append(field598)
field599 = x3d.field()
field599.accessType = "outputOnly"
field599.type = "SFRotation"
field599.name = "vt9_changed"

ProtoInterface18.field.append(field599)

ProtoDeclare17.ProtoInterface = ProtoInterface18
ProtoBody600 = x3d.ProtoBody()
TimeSensor601 = x3d.TimeSensor(DEF="BehaviorClock")
IS602 = x3d.IS()
connect603 = x3d.connect()
connect603.nodeField = "enabled"
connect603.protoField = "enabled"

IS602.connect.append(connect603)
connect604 = x3d.connect()
connect604.nodeField = "cycleInterval"
connect604.protoField = "cycleInterval"

IS602.connect.append(connect604)
connect605 = x3d.connect()
connect605.nodeField = "loop"
connect605.protoField = "loop"

IS602.connect.append(connect605)
connect606 = x3d.connect()
connect606.nodeField = "startTime"
connect606.protoField = "startTime"

IS602.connect.append(connect606)
connect607 = x3d.connect()
connect607.nodeField = "resumeTime"
connect607.protoField = "resumeTime"

IS602.connect.append(connect607)
connect608 = x3d.connect()
connect608.nodeField = "pauseTime"
connect608.protoField = "pauseTime"

IS602.connect.append(connect608)
connect609 = x3d.connect()
connect609.nodeField = "stopTime"
connect609.protoField = "stopTime"

IS602.connect.append(connect609)
connect610 = x3d.connect()
connect610.nodeField = "isPaused"
connect610.protoField = "isPaused"

IS602.connect.append(connect610)
connect611 = x3d.connect()
connect611.nodeField = "isActive"
connect611.protoField = "isActive"

IS602.connect.append(connect611)
connect612 = x3d.connect()
connect612.nodeField = "cycleTime"
connect612.protoField = "cycleTime"

IS602.connect.append(connect612)
connect613 = x3d.connect()
connect613.nodeField = "fraction_changed"
connect613.protoField = "fraction_changed"

IS602.connect.append(connect613)

TimeSensor601.IS = IS602

ProtoBody600.children.append(TimeSensor601)
Switch614 = x3d.Switch(DEF="SupportedLoaHolder1")
IS615 = x3d.IS()
connect616 = x3d.connect()
connect616.nodeField = "whichChoice"
connect616.protoField = "supportedLOA"

IS615.connect.append(connect616)

Switch614.IS = IS615

ProtoBody600.children.append(Switch614)
PositionInterpolator617 = x3d.PositionInterpolator(DEF="HumanoidRootPI")
IS618 = x3d.IS()
connect619 = x3d.connect()
connect619.nodeField = "key"
connect619.protoField = "HumanoidRoot_translation_key"

IS618.connect.append(connect619)
connect620 = x3d.connect()
connect620.nodeField = "keyValue"
connect620.protoField = "HumanoidRoot_translation_keyValue"

IS618.connect.append(connect620)
connect621 = x3d.connect()
connect621.nodeField = "value_changed"
connect621.protoField = "HumanoidRoot_translation_changed"

IS618.connect.append(connect621)

PositionInterpolator617.IS = IS618

ProtoBody600.children.append(PositionInterpolator617)
OrientationInterpolator622 = x3d.OrientationInterpolator(DEF="HumanoidRootOI")
IS623 = x3d.IS()
connect624 = x3d.connect()
connect624.nodeField = "key"
connect624.protoField = "HumanoidRoot_rotation_key"

IS623.connect.append(connect624)
connect625 = x3d.connect()
connect625.nodeField = "keyValue"
connect625.protoField = "HumanoidRoot_rotation_keyValue"

IS623.connect.append(connect625)
connect626 = x3d.connect()
connect626.nodeField = "value_changed"
connect626.protoField = "HumanoidRoot_rotation_changed"

IS623.connect.append(connect626)

OrientationInterpolator622.IS = IS623

ProtoBody600.children.append(OrientationInterpolator622)
OrientationInterpolator627 = x3d.OrientationInterpolator(DEF="c1_OI")
IS628 = x3d.IS()
connect629 = x3d.connect()
connect629.nodeField = "key"
connect629.protoField = "c1_key"

IS628.connect.append(connect629)
connect630 = x3d.connect()
connect630.nodeField = "keyValue"
connect630.protoField = "c1_keyValue"

IS628.connect.append(connect630)
connect631 = x3d.connect()
connect631.nodeField = "value_changed"
connect631.protoField = "c1_changed"

IS628.connect.append(connect631)

OrientationInterpolator627.IS = IS628

ProtoBody600.children.append(OrientationInterpolator627)
OrientationInterpolator632 = x3d.OrientationInterpolator(DEF="c2_OI")
IS633 = x3d.IS()
connect634 = x3d.connect()
connect634.nodeField = "key"
connect634.protoField = "c2_key"

IS633.connect.append(connect634)
connect635 = x3d.connect()
connect635.nodeField = "keyValue"
connect635.protoField = "c2_keyValue"

IS633.connect.append(connect635)
connect636 = x3d.connect()
connect636.nodeField = "value_changed"
connect636.protoField = "c2_changed"

IS633.connect.append(connect636)

OrientationInterpolator632.IS = IS633

ProtoBody600.children.append(OrientationInterpolator632)
OrientationInterpolator637 = x3d.OrientationInterpolator(DEF="c3_OI")
IS638 = x3d.IS()
connect639 = x3d.connect()
connect639.nodeField = "key"
connect639.protoField = "c3_key"

IS638.connect.append(connect639)
connect640 = x3d.connect()
connect640.nodeField = "keyValue"
connect640.protoField = "c3_keyValue"

IS638.connect.append(connect640)
connect641 = x3d.connect()
connect641.nodeField = "value_changed"
connect641.protoField = "c3_changed"

IS638.connect.append(connect641)

OrientationInterpolator637.IS = IS638

ProtoBody600.children.append(OrientationInterpolator637)
OrientationInterpolator642 = x3d.OrientationInterpolator(DEF="c4_OI")
IS643 = x3d.IS()
connect644 = x3d.connect()
connect644.nodeField = "key"
connect644.protoField = "c4_key"

IS643.connect.append(connect644)
connect645 = x3d.connect()
connect645.nodeField = "keyValue"
connect645.protoField = "c4_keyValue"

IS643.connect.append(connect645)
connect646 = x3d.connect()
connect646.nodeField = "value_changed"
connect646.protoField = "c4_changed"

IS643.connect.append(connect646)

OrientationInterpolator642.IS = IS643

ProtoBody600.children.append(OrientationInterpolator642)
OrientationInterpolator647 = x3d.OrientationInterpolator(DEF="c5_OI")
IS648 = x3d.IS()
connect649 = x3d.connect()
connect649.nodeField = "key"
connect649.protoField = "c5_key"

IS648.connect.append(connect649)
connect650 = x3d.connect()
connect650.nodeField = "keyValue"
connect650.protoField = "c5_keyValue"

IS648.connect.append(connect650)
connect651 = x3d.connect()
connect651.nodeField = "value_changed"
connect651.protoField = "c5_changed"

IS648.connect.append(connect651)

OrientationInterpolator647.IS = IS648

ProtoBody600.children.append(OrientationInterpolator647)
OrientationInterpolator652 = x3d.OrientationInterpolator(DEF="c6_OI")
IS653 = x3d.IS()
connect654 = x3d.connect()
connect654.nodeField = "key"
connect654.protoField = "c6_key"

IS653.connect.append(connect654)
connect655 = x3d.connect()
connect655.nodeField = "keyValue"
connect655.protoField = "c6_keyValue"

IS653.connect.append(connect655)
connect656 = x3d.connect()
connect656.nodeField = "value_changed"
connect656.protoField = "c6_changed"

IS653.connect.append(connect656)

OrientationInterpolator652.IS = IS653

ProtoBody600.children.append(OrientationInterpolator652)
OrientationInterpolator657 = x3d.OrientationInterpolator(DEF="c7_OI")
IS658 = x3d.IS()
connect659 = x3d.connect()
connect659.nodeField = "key"
connect659.protoField = "c7_key"

IS658.connect.append(connect659)
connect660 = x3d.connect()
connect660.nodeField = "keyValue"
connect660.protoField = "c7_keyValue"

IS658.connect.append(connect660)
connect661 = x3d.connect()
connect661.nodeField = "value_changed"
connect661.protoField = "c7_changed"

IS658.connect.append(connect661)

OrientationInterpolator657.IS = IS658

ProtoBody600.children.append(OrientationInterpolator657)
OrientationInterpolator662 = x3d.OrientationInterpolator(DEF="jaw_OI")
IS663 = x3d.IS()
connect664 = x3d.connect()
connect664.nodeField = "key"
connect664.protoField = "jaw_key"

IS663.connect.append(connect664)
connect665 = x3d.connect()
connect665.nodeField = "keyValue"
connect665.protoField = "jaw_keyValue"

IS663.connect.append(connect665)
connect666 = x3d.connect()
connect666.nodeField = "value_changed"
connect666.protoField = "jaw_changed"

IS663.connect.append(connect666)

OrientationInterpolator662.IS = IS663

ProtoBody600.children.append(OrientationInterpolator662)
OrientationInterpolator667 = x3d.OrientationInterpolator(DEF="l1_OI")
IS668 = x3d.IS()
connect669 = x3d.connect()
connect669.nodeField = "key"
connect669.protoField = "l1_key"

IS668.connect.append(connect669)
connect670 = x3d.connect()
connect670.nodeField = "keyValue"
connect670.protoField = "l1_keyValue"

IS668.connect.append(connect670)
connect671 = x3d.connect()
connect671.nodeField = "value_changed"
connect671.protoField = "l1_changed"

IS668.connect.append(connect671)

OrientationInterpolator667.IS = IS668

ProtoBody600.children.append(OrientationInterpolator667)
OrientationInterpolator672 = x3d.OrientationInterpolator(DEF="l2_OI")
IS673 = x3d.IS()
connect674 = x3d.connect()
connect674.nodeField = "key"
connect674.protoField = "l2_key"

IS673.connect.append(connect674)
connect675 = x3d.connect()
connect675.nodeField = "keyValue"
connect675.protoField = "l2_keyValue"

IS673.connect.append(connect675)
connect676 = x3d.connect()
connect676.nodeField = "value_changed"
connect676.protoField = "l2_changed"

IS673.connect.append(connect676)

OrientationInterpolator672.IS = IS673

ProtoBody600.children.append(OrientationInterpolator672)
OrientationInterpolator677 = x3d.OrientationInterpolator(DEF="l3_OI")
IS678 = x3d.IS()
connect679 = x3d.connect()
connect679.nodeField = "key"
connect679.protoField = "l3_key"

IS678.connect.append(connect679)
connect680 = x3d.connect()
connect680.nodeField = "keyValue"
connect680.protoField = "l3_keyValue"

IS678.connect.append(connect680)
connect681 = x3d.connect()
connect681.nodeField = "value_changed"
connect681.protoField = "l3_changed"

IS678.connect.append(connect681)

OrientationInterpolator677.IS = IS678

ProtoBody600.children.append(OrientationInterpolator677)
OrientationInterpolator682 = x3d.OrientationInterpolator(DEF="l4_OI")
IS683 = x3d.IS()
connect684 = x3d.connect()
connect684.nodeField = "key"
connect684.protoField = "l4_key"

IS683.connect.append(connect684)
connect685 = x3d.connect()
connect685.nodeField = "keyValue"
connect685.protoField = "l4_keyValue"

IS683.connect.append(connect685)
connect686 = x3d.connect()
connect686.nodeField = "value_changed"
connect686.protoField = "l4_changed"

IS683.connect.append(connect686)

OrientationInterpolator682.IS = IS683

ProtoBody600.children.append(OrientationInterpolator682)
OrientationInterpolator687 = x3d.OrientationInterpolator(DEF="l5_OI")
IS688 = x3d.IS()
connect689 = x3d.connect()
connect689.nodeField = "key"
connect689.protoField = "l5_key"

IS688.connect.append(connect689)
connect690 = x3d.connect()
connect690.nodeField = "keyValue"
connect690.protoField = "l5_keyValue"

IS688.connect.append(connect690)
connect691 = x3d.connect()
connect691.nodeField = "value_changed"
connect691.protoField = "l5_changed"

IS688.connect.append(connect691)

OrientationInterpolator687.IS = IS688

ProtoBody600.children.append(OrientationInterpolator687)
OrientationInterpolator692 = x3d.OrientationInterpolator(DEF="l_acromioclavicular_OI")
IS693 = x3d.IS()
connect694 = x3d.connect()
connect694.nodeField = "key"
connect694.protoField = "l_acromioclavicular_key"

IS693.connect.append(connect694)
connect695 = x3d.connect()
connect695.nodeField = "keyValue"
connect695.protoField = "l_acromioclavicular_keyValue"

IS693.connect.append(connect695)
connect696 = x3d.connect()
connect696.nodeField = "value_changed"
connect696.protoField = "l_acromioclavicular_changed"

IS693.connect.append(connect696)

OrientationInterpolator692.IS = IS693

ProtoBody600.children.append(OrientationInterpolator692)
OrientationInterpolator697 = x3d.OrientationInterpolator(DEF="l_ankle_OI")
IS698 = x3d.IS()
connect699 = x3d.connect()
connect699.nodeField = "key"
connect699.protoField = "l_ankle_key"

IS698.connect.append(connect699)
connect700 = x3d.connect()
connect700.nodeField = "keyValue"
connect700.protoField = "l_ankle_keyValue"

IS698.connect.append(connect700)
connect701 = x3d.connect()
connect701.nodeField = "value_changed"
connect701.protoField = "l_ankle_changed"

IS698.connect.append(connect701)

OrientationInterpolator697.IS = IS698

ProtoBody600.children.append(OrientationInterpolator697)
OrientationInterpolator702 = x3d.OrientationInterpolator(DEF="l_calf_OI")
IS703 = x3d.IS()
connect704 = x3d.connect()
connect704.nodeField = "key"
connect704.protoField = "l_calf_key"

IS703.connect.append(connect704)
connect705 = x3d.connect()
connect705.nodeField = "keyValue"
connect705.protoField = "l_calf_keyValue"

IS703.connect.append(connect705)
connect706 = x3d.connect()
connect706.nodeField = "value_changed"
connect706.protoField = "l_calf_changed"

IS703.connect.append(connect706)

OrientationInterpolator702.IS = IS703

ProtoBody600.children.append(OrientationInterpolator702)
OrientationInterpolator707 = x3d.OrientationInterpolator(DEF="l_clavicle_OI")
IS708 = x3d.IS()
connect709 = x3d.connect()
connect709.nodeField = "key"
connect709.protoField = "l_clavicle_key"

IS708.connect.append(connect709)
connect710 = x3d.connect()
connect710.nodeField = "keyValue"
connect710.protoField = "l_clavicle_keyValue"

IS708.connect.append(connect710)
connect711 = x3d.connect()
connect711.nodeField = "value_changed"
connect711.protoField = "l_clavicle_changed"

IS708.connect.append(connect711)

OrientationInterpolator707.IS = IS708

ProtoBody600.children.append(OrientationInterpolator707)
OrientationInterpolator712 = x3d.OrientationInterpolator(DEF="l_elbow_OI")
IS713 = x3d.IS()
connect714 = x3d.connect()
connect714.nodeField = "key"
connect714.protoField = "l_elbow_key"

IS713.connect.append(connect714)
connect715 = x3d.connect()
connect715.nodeField = "keyValue"
connect715.protoField = "l_elbow_keyValue"

IS713.connect.append(connect715)
connect716 = x3d.connect()
connect716.nodeField = "value_changed"
connect716.protoField = "l_elbow_changed"

IS713.connect.append(connect716)

OrientationInterpolator712.IS = IS713

ProtoBody600.children.append(OrientationInterpolator712)
OrientationInterpolator717 = x3d.OrientationInterpolator(DEF="l_eyeball_OI")
IS718 = x3d.IS()
connect719 = x3d.connect()
connect719.nodeField = "key"
connect719.protoField = "l_eyeball_key"

IS718.connect.append(connect719)
connect720 = x3d.connect()
connect720.nodeField = "keyValue"
connect720.protoField = "l_eyeball_keyValue"

IS718.connect.append(connect720)
connect721 = x3d.connect()
connect721.nodeField = "value_changed"
connect721.protoField = "l_eyeball_changed"

IS718.connect.append(connect721)

OrientationInterpolator717.IS = IS718

ProtoBody600.children.append(OrientationInterpolator717)
OrientationInterpolator722 = x3d.OrientationInterpolator(DEF="l_eyeball_joint_OI")
IS723 = x3d.IS()
connect724 = x3d.connect()
connect724.nodeField = "key"
connect724.protoField = "l_eyeball_joint_key"

IS723.connect.append(connect724)
connect725 = x3d.connect()
connect725.nodeField = "keyValue"
connect725.protoField = "l_eyeball_joint_keyValue"

IS723.connect.append(connect725)
connect726 = x3d.connect()
connect726.nodeField = "value_changed"
connect726.protoField = "l_eyeball_joint_changed"

IS723.connect.append(connect726)

OrientationInterpolator722.IS = IS723

ProtoBody600.children.append(OrientationInterpolator722)
OrientationInterpolator727 = x3d.OrientationInterpolator(DEF="l_eyebrow_OI")
IS728 = x3d.IS()
connect729 = x3d.connect()
connect729.nodeField = "key"
connect729.protoField = "l_eyebrow_key"

IS728.connect.append(connect729)
connect730 = x3d.connect()
connect730.nodeField = "keyValue"
connect730.protoField = "l_eyebrow_keyValue"

IS728.connect.append(connect730)
connect731 = x3d.connect()
connect731.nodeField = "value_changed"
connect731.protoField = "l_eyebrow_changed"

IS728.connect.append(connect731)

OrientationInterpolator727.IS = IS728

ProtoBody600.children.append(OrientationInterpolator727)
OrientationInterpolator732 = x3d.OrientationInterpolator(DEF="l_eyebrow_joint_OI")
IS733 = x3d.IS()
connect734 = x3d.connect()
connect734.nodeField = "key"
connect734.protoField = "l_eyebrow_joint_key"

IS733.connect.append(connect734)
connect735 = x3d.connect()
connect735.nodeField = "keyValue"
connect735.protoField = "l_eyebrow_joint_keyValue"

IS733.connect.append(connect735)
connect736 = x3d.connect()
connect736.nodeField = "value_changed"
connect736.protoField = "l_eyebrow_joint_changed"

IS733.connect.append(connect736)

OrientationInterpolator732.IS = IS733

ProtoBody600.children.append(OrientationInterpolator732)
OrientationInterpolator737 = x3d.OrientationInterpolator(DEF="l_eyelid_OI")
IS738 = x3d.IS()
connect739 = x3d.connect()
connect739.nodeField = "key"
connect739.protoField = "l_eyelid_key"

IS738.connect.append(connect739)
connect740 = x3d.connect()
connect740.nodeField = "keyValue"
connect740.protoField = "l_eyelid_keyValue"

IS738.connect.append(connect740)
connect741 = x3d.connect()
connect741.nodeField = "value_changed"
connect741.protoField = "l_eyelid_changed"

IS738.connect.append(connect741)

OrientationInterpolator737.IS = IS738

ProtoBody600.children.append(OrientationInterpolator737)
OrientationInterpolator742 = x3d.OrientationInterpolator(DEF="l_eyelid_joint_OI")
IS743 = x3d.IS()
connect744 = x3d.connect()
connect744.nodeField = "key"
connect744.protoField = "l_eyelid_joint_key"

IS743.connect.append(connect744)
connect745 = x3d.connect()
connect745.nodeField = "keyValue"
connect745.protoField = "l_eyelid_joint_keyValue"

IS743.connect.append(connect745)
connect746 = x3d.connect()
connect746.nodeField = "value_changed"
connect746.protoField = "l_eyelid_joint_changed"

IS743.connect.append(connect746)

OrientationInterpolator742.IS = IS743

ProtoBody600.children.append(OrientationInterpolator742)
OrientationInterpolator747 = x3d.OrientationInterpolator(DEF="l_forearm_OI")
IS748 = x3d.IS()
connect749 = x3d.connect()
connect749.nodeField = "key"
connect749.protoField = "l_forearm_key"

IS748.connect.append(connect749)
connect750 = x3d.connect()
connect750.nodeField = "keyValue"
connect750.protoField = "l_forearm_keyValue"

IS748.connect.append(connect750)
connect751 = x3d.connect()
connect751.nodeField = "value_changed"
connect751.protoField = "l_forearm_changed"

IS748.connect.append(connect751)

OrientationInterpolator747.IS = IS748

ProtoBody600.children.append(OrientationInterpolator747)
OrientationInterpolator752 = x3d.OrientationInterpolator(DEF="l_forefoot_OI")
IS753 = x3d.IS()
connect754 = x3d.connect()
connect754.nodeField = "key"
connect754.protoField = "l_forefoot_key"

IS753.connect.append(connect754)
connect755 = x3d.connect()
connect755.nodeField = "keyValue"
connect755.protoField = "l_forefoot_keyValue"

IS753.connect.append(connect755)
connect756 = x3d.connect()
connect756.nodeField = "value_changed"
connect756.protoField = "l_forefoot_changed"

IS753.connect.append(connect756)

OrientationInterpolator752.IS = IS753

ProtoBody600.children.append(OrientationInterpolator752)
OrientationInterpolator757 = x3d.OrientationInterpolator(DEF="l_hand_OI")
IS758 = x3d.IS()
connect759 = x3d.connect()
connect759.nodeField = "key"
connect759.protoField = "l_hand_key"

IS758.connect.append(connect759)
connect760 = x3d.connect()
connect760.nodeField = "keyValue"
connect760.protoField = "l_hand_keyValue"

IS758.connect.append(connect760)
connect761 = x3d.connect()
connect761.nodeField = "value_changed"
connect761.protoField = "l_hand_changed"

IS758.connect.append(connect761)

OrientationInterpolator757.IS = IS758

ProtoBody600.children.append(OrientationInterpolator757)
OrientationInterpolator762 = x3d.OrientationInterpolator(DEF="l_hindfoot_OI")
IS763 = x3d.IS()
connect764 = x3d.connect()
connect764.nodeField = "key"
connect764.protoField = "l_hindfoot_key"

IS763.connect.append(connect764)
connect765 = x3d.connect()
connect765.nodeField = "keyValue"
connect765.protoField = "l_hindfoot_keyValue"

IS763.connect.append(connect765)
connect766 = x3d.connect()
connect766.nodeField = "value_changed"
connect766.protoField = "l_hindfoot_changed"

IS763.connect.append(connect766)

OrientationInterpolator762.IS = IS763

ProtoBody600.children.append(OrientationInterpolator762)
OrientationInterpolator767 = x3d.OrientationInterpolator(DEF="l_hip_OI")
IS768 = x3d.IS()
connect769 = x3d.connect()
connect769.nodeField = "key"
connect769.protoField = "l_hip_key"

IS768.connect.append(connect769)
connect770 = x3d.connect()
connect770.nodeField = "keyValue"
connect770.protoField = "l_hip_keyValue"

IS768.connect.append(connect770)
connect771 = x3d.connect()
connect771.nodeField = "value_changed"
connect771.protoField = "l_hip_changed"

IS768.connect.append(connect771)

OrientationInterpolator767.IS = IS768

ProtoBody600.children.append(OrientationInterpolator767)
OrientationInterpolator772 = x3d.OrientationInterpolator(DEF="l_index0_OI")
IS773 = x3d.IS()
connect774 = x3d.connect()
connect774.nodeField = "key"
connect774.protoField = "l_index0_key"

IS773.connect.append(connect774)
connect775 = x3d.connect()
connect775.nodeField = "keyValue"
connect775.protoField = "l_index0_keyValue"

IS773.connect.append(connect775)
connect776 = x3d.connect()
connect776.nodeField = "value_changed"
connect776.protoField = "l_index0_changed"

IS773.connect.append(connect776)

OrientationInterpolator772.IS = IS773

ProtoBody600.children.append(OrientationInterpolator772)
OrientationInterpolator777 = x3d.OrientationInterpolator(DEF="l_index1_OI")
IS778 = x3d.IS()
connect779 = x3d.connect()
connect779.nodeField = "key"
connect779.protoField = "l_index1_key"

IS778.connect.append(connect779)
connect780 = x3d.connect()
connect780.nodeField = "keyValue"
connect780.protoField = "l_index1_keyValue"

IS778.connect.append(connect780)
connect781 = x3d.connect()
connect781.nodeField = "value_changed"
connect781.protoField = "l_index1_changed"

IS778.connect.append(connect781)

OrientationInterpolator777.IS = IS778

ProtoBody600.children.append(OrientationInterpolator777)
OrientationInterpolator782 = x3d.OrientationInterpolator(DEF="l_index2_OI")
IS783 = x3d.IS()
connect784 = x3d.connect()
connect784.nodeField = "key"
connect784.protoField = "l_index2_key"

IS783.connect.append(connect784)
connect785 = x3d.connect()
connect785.nodeField = "keyValue"
connect785.protoField = "l_index2_keyValue"

IS783.connect.append(connect785)
connect786 = x3d.connect()
connect786.nodeField = "value_changed"
connect786.protoField = "l_index2_changed"

IS783.connect.append(connect786)

OrientationInterpolator782.IS = IS783

ProtoBody600.children.append(OrientationInterpolator782)
OrientationInterpolator787 = x3d.OrientationInterpolator(DEF="l_index3_OI")
IS788 = x3d.IS()
connect789 = x3d.connect()
connect789.nodeField = "key"
connect789.protoField = "l_index3_key"

IS788.connect.append(connect789)
connect790 = x3d.connect()
connect790.nodeField = "keyValue"
connect790.protoField = "l_index3_keyValue"

IS788.connect.append(connect790)
connect791 = x3d.connect()
connect791.nodeField = "value_changed"
connect791.protoField = "l_index3_changed"

IS788.connect.append(connect791)

OrientationInterpolator787.IS = IS788

ProtoBody600.children.append(OrientationInterpolator787)
OrientationInterpolator792 = x3d.OrientationInterpolator(DEF="l_index_distal_OI")
IS793 = x3d.IS()
connect794 = x3d.connect()
connect794.nodeField = "key"
connect794.protoField = "l_index_distal_key"

IS793.connect.append(connect794)
connect795 = x3d.connect()
connect795.nodeField = "keyValue"
connect795.protoField = "l_index_distal_keyValue"

IS793.connect.append(connect795)
connect796 = x3d.connect()
connect796.nodeField = "value_changed"
connect796.protoField = "l_index_distal_changed"

IS793.connect.append(connect796)

OrientationInterpolator792.IS = IS793

ProtoBody600.children.append(OrientationInterpolator792)
OrientationInterpolator797 = x3d.OrientationInterpolator(DEF="l_index_metacarpal_OI")
IS798 = x3d.IS()
connect799 = x3d.connect()
connect799.nodeField = "key"
connect799.protoField = "l_index_metacarpal_key"

IS798.connect.append(connect799)
connect800 = x3d.connect()
connect800.nodeField = "keyValue"
connect800.protoField = "l_index_metacarpal_keyValue"

IS798.connect.append(connect800)
connect801 = x3d.connect()
connect801.nodeField = "value_changed"
connect801.protoField = "l_index_metacarpal_changed"

IS798.connect.append(connect801)

OrientationInterpolator797.IS = IS798

ProtoBody600.children.append(OrientationInterpolator797)
OrientationInterpolator802 = x3d.OrientationInterpolator(DEF="l_index_middle_OI")
IS803 = x3d.IS()
connect804 = x3d.connect()
connect804.nodeField = "key"
connect804.protoField = "l_index_middle_key"

IS803.connect.append(connect804)
connect805 = x3d.connect()
connect805.nodeField = "keyValue"
connect805.protoField = "l_index_middle_keyValue"

IS803.connect.append(connect805)
connect806 = x3d.connect()
connect806.nodeField = "value_changed"
connect806.protoField = "l_index_middle_changed"

IS803.connect.append(connect806)

OrientationInterpolator802.IS = IS803

ProtoBody600.children.append(OrientationInterpolator802)
OrientationInterpolator807 = x3d.OrientationInterpolator(DEF="l_index_proximal_OI")
IS808 = x3d.IS()
connect809 = x3d.connect()
connect809.nodeField = "key"
connect809.protoField = "l_index_proximal_key"

IS808.connect.append(connect809)
connect810 = x3d.connect()
connect810.nodeField = "keyValue"
connect810.protoField = "l_index_proximal_keyValue"

IS808.connect.append(connect810)
connect811 = x3d.connect()
connect811.nodeField = "value_changed"
connect811.protoField = "l_index_proximal_changed"

IS808.connect.append(connect811)

OrientationInterpolator807.IS = IS808

ProtoBody600.children.append(OrientationInterpolator807)
OrientationInterpolator812 = x3d.OrientationInterpolator(DEF="l_knee_OI")
IS813 = x3d.IS()
connect814 = x3d.connect()
connect814.nodeField = "key"
connect814.protoField = "l_knee_key"

IS813.connect.append(connect814)
connect815 = x3d.connect()
connect815.nodeField = "keyValue"
connect815.protoField = "l_knee_keyValue"

IS813.connect.append(connect815)
connect816 = x3d.connect()
connect816.nodeField = "value_changed"
connect816.protoField = "l_knee_changed"

IS813.connect.append(connect816)

OrientationInterpolator812.IS = IS813

ProtoBody600.children.append(OrientationInterpolator812)
OrientationInterpolator817 = x3d.OrientationInterpolator(DEF="l_metatarsal_OI")
IS818 = x3d.IS()
connect819 = x3d.connect()
connect819.nodeField = "key"
connect819.protoField = "l_metatarsal_key"

IS818.connect.append(connect819)
connect820 = x3d.connect()
connect820.nodeField = "keyValue"
connect820.protoField = "l_metatarsal_keyValue"

IS818.connect.append(connect820)
connect821 = x3d.connect()
connect821.nodeField = "value_changed"
connect821.protoField = "l_metatarsal_changed"

IS818.connect.append(connect821)

OrientationInterpolator817.IS = IS818

ProtoBody600.children.append(OrientationInterpolator817)
OrientationInterpolator822 = x3d.OrientationInterpolator(DEF="l_middistal_OI")
IS823 = x3d.IS()
connect824 = x3d.connect()
connect824.nodeField = "key"
connect824.protoField = "l_middistal_key"

IS823.connect.append(connect824)
connect825 = x3d.connect()
connect825.nodeField = "keyValue"
connect825.protoField = "l_middistal_keyValue"

IS823.connect.append(connect825)
connect826 = x3d.connect()
connect826.nodeField = "value_changed"
connect826.protoField = "l_middistal_changed"

IS823.connect.append(connect826)

OrientationInterpolator822.IS = IS823

ProtoBody600.children.append(OrientationInterpolator822)
OrientationInterpolator827 = x3d.OrientationInterpolator(DEF="l_middle0_OI")
IS828 = x3d.IS()
connect829 = x3d.connect()
connect829.nodeField = "key"
connect829.protoField = "l_middle0_key"

IS828.connect.append(connect829)
connect830 = x3d.connect()
connect830.nodeField = "keyValue"
connect830.protoField = "l_middle0_keyValue"

IS828.connect.append(connect830)
connect831 = x3d.connect()
connect831.nodeField = "value_changed"
connect831.protoField = "l_middle0_changed"

IS828.connect.append(connect831)

OrientationInterpolator827.IS = IS828

ProtoBody600.children.append(OrientationInterpolator827)
OrientationInterpolator832 = x3d.OrientationInterpolator(DEF="l_middle1_OI")
IS833 = x3d.IS()
connect834 = x3d.connect()
connect834.nodeField = "key"
connect834.protoField = "l_middle1_key"

IS833.connect.append(connect834)
connect835 = x3d.connect()
connect835.nodeField = "keyValue"
connect835.protoField = "l_middle1_keyValue"

IS833.connect.append(connect835)
connect836 = x3d.connect()
connect836.nodeField = "value_changed"
connect836.protoField = "l_middle1_changed"

IS833.connect.append(connect836)

OrientationInterpolator832.IS = IS833

ProtoBody600.children.append(OrientationInterpolator832)
OrientationInterpolator837 = x3d.OrientationInterpolator(DEF="l_middle2_OI")
IS838 = x3d.IS()
connect839 = x3d.connect()
connect839.nodeField = "key"
connect839.protoField = "l_middle2_key"

IS838.connect.append(connect839)
connect840 = x3d.connect()
connect840.nodeField = "keyValue"
connect840.protoField = "l_middle2_keyValue"

IS838.connect.append(connect840)
connect841 = x3d.connect()
connect841.nodeField = "value_changed"
connect841.protoField = "l_middle2_changed"

IS838.connect.append(connect841)

OrientationInterpolator837.IS = IS838

ProtoBody600.children.append(OrientationInterpolator837)
OrientationInterpolator842 = x3d.OrientationInterpolator(DEF="l_middle3_OI")
IS843 = x3d.IS()
connect844 = x3d.connect()
connect844.nodeField = "key"
connect844.protoField = "l_middle3_key"

IS843.connect.append(connect844)
connect845 = x3d.connect()
connect845.nodeField = "keyValue"
connect845.protoField = "l_middle3_keyValue"

IS843.connect.append(connect845)
connect846 = x3d.connect()
connect846.nodeField = "value_changed"
connect846.protoField = "l_middle3_changed"

IS843.connect.append(connect846)

OrientationInterpolator842.IS = IS843

ProtoBody600.children.append(OrientationInterpolator842)
OrientationInterpolator847 = x3d.OrientationInterpolator(DEF="l_middle_distal_OI")
IS848 = x3d.IS()
connect849 = x3d.connect()
connect849.nodeField = "key"
connect849.protoField = "l_middle_distal_key"

IS848.connect.append(connect849)
connect850 = x3d.connect()
connect850.nodeField = "keyValue"
connect850.protoField = "l_middle_distal_keyValue"

IS848.connect.append(connect850)
connect851 = x3d.connect()
connect851.nodeField = "value_changed"
connect851.protoField = "l_middle_distal_changed"

IS848.connect.append(connect851)

OrientationInterpolator847.IS = IS848

ProtoBody600.children.append(OrientationInterpolator847)
OrientationInterpolator852 = x3d.OrientationInterpolator(DEF="l_middle_metacarpal_OI")
IS853 = x3d.IS()
connect854 = x3d.connect()
connect854.nodeField = "key"
connect854.protoField = "l_middle_metacarpal_key"

IS853.connect.append(connect854)
connect855 = x3d.connect()
connect855.nodeField = "keyValue"
connect855.protoField = "l_middle_metacarpal_keyValue"

IS853.connect.append(connect855)
connect856 = x3d.connect()
connect856.nodeField = "value_changed"
connect856.protoField = "l_middle_metacarpal_changed"

IS853.connect.append(connect856)

OrientationInterpolator852.IS = IS853

ProtoBody600.children.append(OrientationInterpolator852)
OrientationInterpolator857 = x3d.OrientationInterpolator(DEF="l_middle_middle_OI")
IS858 = x3d.IS()
connect859 = x3d.connect()
connect859.nodeField = "key"
connect859.protoField = "l_middle_middle_key"

IS858.connect.append(connect859)
connect860 = x3d.connect()
connect860.nodeField = "keyValue"
connect860.protoField = "l_middle_middle_keyValue"

IS858.connect.append(connect860)
connect861 = x3d.connect()
connect861.nodeField = "value_changed"
connect861.protoField = "l_middle_middle_changed"

IS858.connect.append(connect861)

OrientationInterpolator857.IS = IS858

ProtoBody600.children.append(OrientationInterpolator857)
OrientationInterpolator862 = x3d.OrientationInterpolator(DEF="l_middle_proximal_OI")
IS863 = x3d.IS()
connect864 = x3d.connect()
connect864.nodeField = "key"
connect864.protoField = "l_middle_proximal_key"

IS863.connect.append(connect864)
connect865 = x3d.connect()
connect865.nodeField = "keyValue"
connect865.protoField = "l_middle_proximal_keyValue"

IS863.connect.append(connect865)
connect866 = x3d.connect()
connect866.nodeField = "value_changed"
connect866.protoField = "l_middle_proximal_changed"

IS863.connect.append(connect866)

OrientationInterpolator862.IS = IS863

ProtoBody600.children.append(OrientationInterpolator862)
OrientationInterpolator867 = x3d.OrientationInterpolator(DEF="l_midproximal_OI")
IS868 = x3d.IS()
connect869 = x3d.connect()
connect869.nodeField = "key"
connect869.protoField = "l_midproximal_key"

IS868.connect.append(connect869)
connect870 = x3d.connect()
connect870.nodeField = "keyValue"
connect870.protoField = "l_midproximal_keyValue"

IS868.connect.append(connect870)
connect871 = x3d.connect()
connect871.nodeField = "value_changed"
connect871.protoField = "l_midproximal_changed"

IS868.connect.append(connect871)

OrientationInterpolator867.IS = IS868

ProtoBody600.children.append(OrientationInterpolator867)
OrientationInterpolator872 = x3d.OrientationInterpolator(DEF="l_midtarsal_OI")
IS873 = x3d.IS()
connect874 = x3d.connect()
connect874.nodeField = "key"
connect874.protoField = "l_midtarsal_key"

IS873.connect.append(connect874)
connect875 = x3d.connect()
connect875.nodeField = "keyValue"
connect875.protoField = "l_midtarsal_keyValue"

IS873.connect.append(connect875)
connect876 = x3d.connect()
connect876.nodeField = "value_changed"
connect876.protoField = "l_midtarsal_changed"

IS873.connect.append(connect876)

OrientationInterpolator872.IS = IS873

ProtoBody600.children.append(OrientationInterpolator872)
OrientationInterpolator877 = x3d.OrientationInterpolator(DEF="l_pinky0_OI")
IS878 = x3d.IS()
connect879 = x3d.connect()
connect879.nodeField = "key"
connect879.protoField = "l_pinky0_key"

IS878.connect.append(connect879)
connect880 = x3d.connect()
connect880.nodeField = "keyValue"
connect880.protoField = "l_pinky0_keyValue"

IS878.connect.append(connect880)
connect881 = x3d.connect()
connect881.nodeField = "value_changed"
connect881.protoField = "l_pinky0_changed"

IS878.connect.append(connect881)

OrientationInterpolator877.IS = IS878

ProtoBody600.children.append(OrientationInterpolator877)
OrientationInterpolator882 = x3d.OrientationInterpolator(DEF="l_pinky1_OI")
IS883 = x3d.IS()
connect884 = x3d.connect()
connect884.nodeField = "key"
connect884.protoField = "l_pinky1_key"

IS883.connect.append(connect884)
connect885 = x3d.connect()
connect885.nodeField = "keyValue"
connect885.protoField = "l_pinky1_keyValue"

IS883.connect.append(connect885)
connect886 = x3d.connect()
connect886.nodeField = "value_changed"
connect886.protoField = "l_pinky1_changed"

IS883.connect.append(connect886)

OrientationInterpolator882.IS = IS883

ProtoBody600.children.append(OrientationInterpolator882)
OrientationInterpolator887 = x3d.OrientationInterpolator(DEF="l_pinky2_OI")
IS888 = x3d.IS()
connect889 = x3d.connect()
connect889.nodeField = "key"
connect889.protoField = "l_pinky2_key"

IS888.connect.append(connect889)
connect890 = x3d.connect()
connect890.nodeField = "keyValue"
connect890.protoField = "l_pinky2_keyValue"

IS888.connect.append(connect890)
connect891 = x3d.connect()
connect891.nodeField = "value_changed"
connect891.protoField = "l_pinky2_changed"

IS888.connect.append(connect891)

OrientationInterpolator887.IS = IS888

ProtoBody600.children.append(OrientationInterpolator887)
OrientationInterpolator892 = x3d.OrientationInterpolator(DEF="l_pinky3_OI")
IS893 = x3d.IS()
connect894 = x3d.connect()
connect894.nodeField = "key"
connect894.protoField = "l_pinky3_key"

IS893.connect.append(connect894)
connect895 = x3d.connect()
connect895.nodeField = "keyValue"
connect895.protoField = "l_pinky3_keyValue"

IS893.connect.append(connect895)
connect896 = x3d.connect()
connect896.nodeField = "value_changed"
connect896.protoField = "l_pinky3_changed"

IS893.connect.append(connect896)

OrientationInterpolator892.IS = IS893

ProtoBody600.children.append(OrientationInterpolator892)
OrientationInterpolator897 = x3d.OrientationInterpolator(DEF="l_pinky_distal_OI")
IS898 = x3d.IS()
connect899 = x3d.connect()
connect899.nodeField = "key"
connect899.protoField = "l_pinky_distal_key"

IS898.connect.append(connect899)
connect900 = x3d.connect()
connect900.nodeField = "keyValue"
connect900.protoField = "l_pinky_distal_keyValue"

IS898.connect.append(connect900)
connect901 = x3d.connect()
connect901.nodeField = "value_changed"
connect901.protoField = "l_pinky_distal_changed"

IS898.connect.append(connect901)

OrientationInterpolator897.IS = IS898

ProtoBody600.children.append(OrientationInterpolator897)
OrientationInterpolator902 = x3d.OrientationInterpolator(DEF="l_pinky_metacarpal_OI")
IS903 = x3d.IS()
connect904 = x3d.connect()
connect904.nodeField = "key"
connect904.protoField = "l_pinky_metacarpal_key"

IS903.connect.append(connect904)
connect905 = x3d.connect()
connect905.nodeField = "keyValue"
connect905.protoField = "l_pinky_metacarpal_keyValue"

IS903.connect.append(connect905)
connect906 = x3d.connect()
connect906.nodeField = "value_changed"
connect906.protoField = "l_pinky_metacarpal_changed"

IS903.connect.append(connect906)

OrientationInterpolator902.IS = IS903

ProtoBody600.children.append(OrientationInterpolator902)
OrientationInterpolator907 = x3d.OrientationInterpolator(DEF="l_pinky_middle_OI")
IS908 = x3d.IS()
connect909 = x3d.connect()
connect909.nodeField = "key"
connect909.protoField = "l_pinky_middle_key"

IS908.connect.append(connect909)
connect910 = x3d.connect()
connect910.nodeField = "keyValue"
connect910.protoField = "l_pinky_middle_keyValue"

IS908.connect.append(connect910)
connect911 = x3d.connect()
connect911.nodeField = "value_changed"
connect911.protoField = "l_pinky_middle_changed"

IS908.connect.append(connect911)

OrientationInterpolator907.IS = IS908

ProtoBody600.children.append(OrientationInterpolator907)
OrientationInterpolator912 = x3d.OrientationInterpolator(DEF="l_pinky_proximal_OI")
IS913 = x3d.IS()
connect914 = x3d.connect()
connect914.nodeField = "key"
connect914.protoField = "l_pinky_proximal_key"

IS913.connect.append(connect914)
connect915 = x3d.connect()
connect915.nodeField = "keyValue"
connect915.protoField = "l_pinky_proximal_keyValue"

IS913.connect.append(connect915)
connect916 = x3d.connect()
connect916.nodeField = "value_changed"
connect916.protoField = "l_pinky_proximal_changed"

IS913.connect.append(connect916)

OrientationInterpolator912.IS = IS913

ProtoBody600.children.append(OrientationInterpolator912)
OrientationInterpolator917 = x3d.OrientationInterpolator(DEF="l_ring0_OI")
IS918 = x3d.IS()
connect919 = x3d.connect()
connect919.nodeField = "key"
connect919.protoField = "l_ring0_key"

IS918.connect.append(connect919)
connect920 = x3d.connect()
connect920.nodeField = "keyValue"
connect920.protoField = "l_ring0_keyValue"

IS918.connect.append(connect920)
connect921 = x3d.connect()
connect921.nodeField = "value_changed"
connect921.protoField = "l_ring0_changed"

IS918.connect.append(connect921)

OrientationInterpolator917.IS = IS918

ProtoBody600.children.append(OrientationInterpolator917)
OrientationInterpolator922 = x3d.OrientationInterpolator(DEF="l_ring1_OI")
IS923 = x3d.IS()
connect924 = x3d.connect()
connect924.nodeField = "key"
connect924.protoField = "l_ring1_key"

IS923.connect.append(connect924)
connect925 = x3d.connect()
connect925.nodeField = "keyValue"
connect925.protoField = "l_ring1_keyValue"

IS923.connect.append(connect925)
connect926 = x3d.connect()
connect926.nodeField = "value_changed"
connect926.protoField = "l_ring1_changed"

IS923.connect.append(connect926)

OrientationInterpolator922.IS = IS923

ProtoBody600.children.append(OrientationInterpolator922)
OrientationInterpolator927 = x3d.OrientationInterpolator(DEF="l_ring2_OI")
IS928 = x3d.IS()
connect929 = x3d.connect()
connect929.nodeField = "key"
connect929.protoField = "l_ring2_key"

IS928.connect.append(connect929)
connect930 = x3d.connect()
connect930.nodeField = "keyValue"
connect930.protoField = "l_ring2_keyValue"

IS928.connect.append(connect930)
connect931 = x3d.connect()
connect931.nodeField = "value_changed"
connect931.protoField = "l_ring2_changed"

IS928.connect.append(connect931)

OrientationInterpolator927.IS = IS928

ProtoBody600.children.append(OrientationInterpolator927)
OrientationInterpolator932 = x3d.OrientationInterpolator(DEF="l_ring3_OI")
IS933 = x3d.IS()
connect934 = x3d.connect()
connect934.nodeField = "key"
connect934.protoField = "l_ring3_key"

IS933.connect.append(connect934)
connect935 = x3d.connect()
connect935.nodeField = "keyValue"
connect935.protoField = "l_ring3_keyValue"

IS933.connect.append(connect935)
connect936 = x3d.connect()
connect936.nodeField = "value_changed"
connect936.protoField = "l_ring3_changed"

IS933.connect.append(connect936)

OrientationInterpolator932.IS = IS933

ProtoBody600.children.append(OrientationInterpolator932)
OrientationInterpolator937 = x3d.OrientationInterpolator(DEF="l_ring_distal_OI")
IS938 = x3d.IS()
connect939 = x3d.connect()
connect939.nodeField = "key"
connect939.protoField = "l_ring_distal_key"

IS938.connect.append(connect939)
connect940 = x3d.connect()
connect940.nodeField = "keyValue"
connect940.protoField = "l_ring_distal_keyValue"

IS938.connect.append(connect940)
connect941 = x3d.connect()
connect941.nodeField = "value_changed"
connect941.protoField = "l_ring_distal_changed"

IS938.connect.append(connect941)

OrientationInterpolator937.IS = IS938

ProtoBody600.children.append(OrientationInterpolator937)
OrientationInterpolator942 = x3d.OrientationInterpolator(DEF="l_ring_metacarpal_OI")
IS943 = x3d.IS()
connect944 = x3d.connect()
connect944.nodeField = "key"
connect944.protoField = "l_ring_metacarpal_key"

IS943.connect.append(connect944)
connect945 = x3d.connect()
connect945.nodeField = "keyValue"
connect945.protoField = "l_ring_metacarpal_keyValue"

IS943.connect.append(connect945)
connect946 = x3d.connect()
connect946.nodeField = "value_changed"
connect946.protoField = "l_ring_metacarpal_changed"

IS943.connect.append(connect946)

OrientationInterpolator942.IS = IS943

ProtoBody600.children.append(OrientationInterpolator942)
OrientationInterpolator947 = x3d.OrientationInterpolator(DEF="l_ring_middle_OI")
IS948 = x3d.IS()
connect949 = x3d.connect()
connect949.nodeField = "key"
connect949.protoField = "l_ring_middle_key"

IS948.connect.append(connect949)
connect950 = x3d.connect()
connect950.nodeField = "keyValue"
connect950.protoField = "l_ring_middle_keyValue"

IS948.connect.append(connect950)
connect951 = x3d.connect()
connect951.nodeField = "value_changed"
connect951.protoField = "l_ring_middle_changed"

IS948.connect.append(connect951)

OrientationInterpolator947.IS = IS948

ProtoBody600.children.append(OrientationInterpolator947)
OrientationInterpolator952 = x3d.OrientationInterpolator(DEF="l_ring_proximal_OI")
IS953 = x3d.IS()
connect954 = x3d.connect()
connect954.nodeField = "key"
connect954.protoField = "l_ring_proximal_key"

IS953.connect.append(connect954)
connect955 = x3d.connect()
connect955.nodeField = "keyValue"
connect955.protoField = "l_ring_proximal_keyValue"

IS953.connect.append(connect955)
connect956 = x3d.connect()
connect956.nodeField = "value_changed"
connect956.protoField = "l_ring_proximal_changed"

IS953.connect.append(connect956)

OrientationInterpolator952.IS = IS953

ProtoBody600.children.append(OrientationInterpolator952)
OrientationInterpolator957 = x3d.OrientationInterpolator(DEF="l_scapula_OI")
IS958 = x3d.IS()
connect959 = x3d.connect()
connect959.nodeField = "key"
connect959.protoField = "l_scapula_key"

IS958.connect.append(connect959)
connect960 = x3d.connect()
connect960.nodeField = "keyValue"
connect960.protoField = "l_scapula_keyValue"

IS958.connect.append(connect960)
connect961 = x3d.connect()
connect961.nodeField = "value_changed"
connect961.protoField = "l_scapula_changed"

IS958.connect.append(connect961)

OrientationInterpolator957.IS = IS958

ProtoBody600.children.append(OrientationInterpolator957)
OrientationInterpolator962 = x3d.OrientationInterpolator(DEF="l_shoulder_OI")
IS963 = x3d.IS()
connect964 = x3d.connect()
connect964.nodeField = "key"
connect964.protoField = "l_shoulder_key"

IS963.connect.append(connect964)
connect965 = x3d.connect()
connect965.nodeField = "keyValue"
connect965.protoField = "l_shoulder_keyValue"

IS963.connect.append(connect965)
connect966 = x3d.connect()
connect966.nodeField = "value_changed"
connect966.protoField = "l_shoulder_changed"

IS963.connect.append(connect966)

OrientationInterpolator962.IS = IS963

ProtoBody600.children.append(OrientationInterpolator962)
OrientationInterpolator967 = x3d.OrientationInterpolator(DEF="l_sternoclavicular_OI")
IS968 = x3d.IS()
connect969 = x3d.connect()
connect969.nodeField = "key"
connect969.protoField = "l_sternoclavicular_key"

IS968.connect.append(connect969)
connect970 = x3d.connect()
connect970.nodeField = "keyValue"
connect970.protoField = "l_sternoclavicular_keyValue"

IS968.connect.append(connect970)
connect971 = x3d.connect()
connect971.nodeField = "value_changed"
connect971.protoField = "l_sternoclavicular_changed"

IS968.connect.append(connect971)

OrientationInterpolator967.IS = IS968

ProtoBody600.children.append(OrientationInterpolator967)
OrientationInterpolator972 = x3d.OrientationInterpolator(DEF="l_subtalar_OI")
IS973 = x3d.IS()
connect974 = x3d.connect()
connect974.nodeField = "key"
connect974.protoField = "l_subtalar_key"

IS973.connect.append(connect974)
connect975 = x3d.connect()
connect975.nodeField = "keyValue"
connect975.protoField = "l_subtalar_keyValue"

IS973.connect.append(connect975)
connect976 = x3d.connect()
connect976.nodeField = "value_changed"
connect976.protoField = "l_subtalar_changed"

IS973.connect.append(connect976)

OrientationInterpolator972.IS = IS973

ProtoBody600.children.append(OrientationInterpolator972)
OrientationInterpolator977 = x3d.OrientationInterpolator(DEF="l_thigh_OI")
IS978 = x3d.IS()
connect979 = x3d.connect()
connect979.nodeField = "key"
connect979.protoField = "l_thigh_key"

IS978.connect.append(connect979)
connect980 = x3d.connect()
connect980.nodeField = "keyValue"
connect980.protoField = "l_thigh_keyValue"

IS978.connect.append(connect980)
connect981 = x3d.connect()
connect981.nodeField = "value_changed"
connect981.protoField = "l_thigh_changed"

IS978.connect.append(connect981)

OrientationInterpolator977.IS = IS978

ProtoBody600.children.append(OrientationInterpolator977)
OrientationInterpolator982 = x3d.OrientationInterpolator(DEF="l_thumb1_OI")
IS983 = x3d.IS()
connect984 = x3d.connect()
connect984.nodeField = "key"
connect984.protoField = "l_thumb1_key"

IS983.connect.append(connect984)
connect985 = x3d.connect()
connect985.nodeField = "keyValue"
connect985.protoField = "l_thumb1_keyValue"

IS983.connect.append(connect985)
connect986 = x3d.connect()
connect986.nodeField = "value_changed"
connect986.protoField = "l_thumb1_changed"

IS983.connect.append(connect986)

OrientationInterpolator982.IS = IS983

ProtoBody600.children.append(OrientationInterpolator982)
OrientationInterpolator987 = x3d.OrientationInterpolator(DEF="l_thumb2_OI")
IS988 = x3d.IS()
connect989 = x3d.connect()
connect989.nodeField = "key"
connect989.protoField = "l_thumb2_key"

IS988.connect.append(connect989)
connect990 = x3d.connect()
connect990.nodeField = "keyValue"
connect990.protoField = "l_thumb2_keyValue"

IS988.connect.append(connect990)
connect991 = x3d.connect()
connect991.nodeField = "value_changed"
connect991.protoField = "l_thumb2_changed"

IS988.connect.append(connect991)

OrientationInterpolator987.IS = IS988

ProtoBody600.children.append(OrientationInterpolator987)
OrientationInterpolator992 = x3d.OrientationInterpolator(DEF="l_thumb3_OI")
IS993 = x3d.IS()
connect994 = x3d.connect()
connect994.nodeField = "key"
connect994.protoField = "l_thumb3_key"

IS993.connect.append(connect994)
connect995 = x3d.connect()
connect995.nodeField = "keyValue"
connect995.protoField = "l_thumb3_keyValue"

IS993.connect.append(connect995)
connect996 = x3d.connect()
connect996.nodeField = "value_changed"
connect996.protoField = "l_thumb3_changed"

IS993.connect.append(connect996)

OrientationInterpolator992.IS = IS993

ProtoBody600.children.append(OrientationInterpolator992)
OrientationInterpolator997 = x3d.OrientationInterpolator(DEF="l_thumb_distal_OI")
IS998 = x3d.IS()
connect999 = x3d.connect()
connect999.nodeField = "key"
connect999.protoField = "l_thumb_distal_key"

IS998.connect.append(connect999)
connect1000 = x3d.connect()
connect1000.nodeField = "keyValue"
connect1000.protoField = "l_thumb_distal_keyValue"

IS998.connect.append(connect1000)
connect1001 = x3d.connect()
connect1001.nodeField = "value_changed"
connect1001.protoField = "l_thumb_distal_changed"

IS998.connect.append(connect1001)

OrientationInterpolator997.IS = IS998

ProtoBody600.children.append(OrientationInterpolator997)
OrientationInterpolator1002 = x3d.OrientationInterpolator(DEF="l_thumb_metacarpal_OI")
IS1003 = x3d.IS()
connect1004 = x3d.connect()
connect1004.nodeField = "key"
connect1004.protoField = "l_thumb_metacarpal_key"

IS1003.connect.append(connect1004)
connect1005 = x3d.connect()
connect1005.nodeField = "keyValue"
connect1005.protoField = "l_thumb_metacarpal_keyValue"

IS1003.connect.append(connect1005)
connect1006 = x3d.connect()
connect1006.nodeField = "value_changed"
connect1006.protoField = "l_thumb_metacarpal_changed"

IS1003.connect.append(connect1006)

OrientationInterpolator1002.IS = IS1003

ProtoBody600.children.append(OrientationInterpolator1002)
OrientationInterpolator1007 = x3d.OrientationInterpolator(DEF="l_thumb_proximal_OI")
IS1008 = x3d.IS()
connect1009 = x3d.connect()
connect1009.nodeField = "key"
connect1009.protoField = "l_thumb_proximal_key"

IS1008.connect.append(connect1009)
connect1010 = x3d.connect()
connect1010.nodeField = "keyValue"
connect1010.protoField = "l_thumb_proximal_keyValue"

IS1008.connect.append(connect1010)
connect1011 = x3d.connect()
connect1011.nodeField = "value_changed"
connect1011.protoField = "l_thumb_proximal_changed"

IS1008.connect.append(connect1011)

OrientationInterpolator1007.IS = IS1008

ProtoBody600.children.append(OrientationInterpolator1007)
OrientationInterpolator1012 = x3d.OrientationInterpolator(DEF="l_upperarm_OI")
IS1013 = x3d.IS()
connect1014 = x3d.connect()
connect1014.nodeField = "key"
connect1014.protoField = "l_upperarm_key"

IS1013.connect.append(connect1014)
connect1015 = x3d.connect()
connect1015.nodeField = "keyValue"
connect1015.protoField = "l_upperarm_keyValue"

IS1013.connect.append(connect1015)
connect1016 = x3d.connect()
connect1016.nodeField = "value_changed"
connect1016.protoField = "l_upperarm_changed"

IS1013.connect.append(connect1016)

OrientationInterpolator1012.IS = IS1013

ProtoBody600.children.append(OrientationInterpolator1012)
OrientationInterpolator1017 = x3d.OrientationInterpolator(DEF="l_wrist_OI")
IS1018 = x3d.IS()
connect1019 = x3d.connect()
connect1019.nodeField = "key"
connect1019.protoField = "l_wrist_key"

IS1018.connect.append(connect1019)
connect1020 = x3d.connect()
connect1020.nodeField = "keyValue"
connect1020.protoField = "l_wrist_keyValue"

IS1018.connect.append(connect1020)
connect1021 = x3d.connect()
connect1021.nodeField = "value_changed"
connect1021.protoField = "l_wrist_changed"

IS1018.connect.append(connect1021)

OrientationInterpolator1017.IS = IS1018

ProtoBody600.children.append(OrientationInterpolator1017)
OrientationInterpolator1022 = x3d.OrientationInterpolator(DEF="pelvis_OI")
IS1023 = x3d.IS()
connect1024 = x3d.connect()
connect1024.nodeField = "key"
connect1024.protoField = "pelvis_key"

IS1023.connect.append(connect1024)
connect1025 = x3d.connect()
connect1025.nodeField = "keyValue"
connect1025.protoField = "pelvis_keyValue"

IS1023.connect.append(connect1025)
connect1026 = x3d.connect()
connect1026.nodeField = "value_changed"
connect1026.protoField = "pelvis_changed"

IS1023.connect.append(connect1026)

OrientationInterpolator1022.IS = IS1023

ProtoBody600.children.append(OrientationInterpolator1022)
OrientationInterpolator1027 = x3d.OrientationInterpolator(DEF="r_acromioclavicular_OI")
IS1028 = x3d.IS()
connect1029 = x3d.connect()
connect1029.nodeField = "key"
connect1029.protoField = "r_acromioclavicular_key"

IS1028.connect.append(connect1029)
connect1030 = x3d.connect()
connect1030.nodeField = "keyValue"
connect1030.protoField = "r_acromioclavicular_keyValue"

IS1028.connect.append(connect1030)
connect1031 = x3d.connect()
connect1031.nodeField = "value_changed"
connect1031.protoField = "r_acromioclavicular_changed"

IS1028.connect.append(connect1031)

OrientationInterpolator1027.IS = IS1028

ProtoBody600.children.append(OrientationInterpolator1027)
OrientationInterpolator1032 = x3d.OrientationInterpolator(DEF="r_ankle_OI")
IS1033 = x3d.IS()
connect1034 = x3d.connect()
connect1034.nodeField = "key"
connect1034.protoField = "r_ankle_key"

IS1033.connect.append(connect1034)
connect1035 = x3d.connect()
connect1035.nodeField = "keyValue"
connect1035.protoField = "r_ankle_keyValue"

IS1033.connect.append(connect1035)
connect1036 = x3d.connect()
connect1036.nodeField = "value_changed"
connect1036.protoField = "r_ankle_changed"

IS1033.connect.append(connect1036)

OrientationInterpolator1032.IS = IS1033

ProtoBody600.children.append(OrientationInterpolator1032)
OrientationInterpolator1037 = x3d.OrientationInterpolator(DEF="r_calf_OI")
IS1038 = x3d.IS()
connect1039 = x3d.connect()
connect1039.nodeField = "key"
connect1039.protoField = "r_calf_key"

IS1038.connect.append(connect1039)
connect1040 = x3d.connect()
connect1040.nodeField = "keyValue"
connect1040.protoField = "r_calf_keyValue"

IS1038.connect.append(connect1040)
connect1041 = x3d.connect()
connect1041.nodeField = "value_changed"
connect1041.protoField = "r_calf_changed"

IS1038.connect.append(connect1041)

OrientationInterpolator1037.IS = IS1038

ProtoBody600.children.append(OrientationInterpolator1037)
OrientationInterpolator1042 = x3d.OrientationInterpolator(DEF="r_clavicle_OI")
IS1043 = x3d.IS()
connect1044 = x3d.connect()
connect1044.nodeField = "key"
connect1044.protoField = "r_clavicle_key"

IS1043.connect.append(connect1044)
connect1045 = x3d.connect()
connect1045.nodeField = "keyValue"
connect1045.protoField = "r_clavicle_keyValue"

IS1043.connect.append(connect1045)
connect1046 = x3d.connect()
connect1046.nodeField = "value_changed"
connect1046.protoField = "r_clavicle_changed"

IS1043.connect.append(connect1046)

OrientationInterpolator1042.IS = IS1043

ProtoBody600.children.append(OrientationInterpolator1042)
OrientationInterpolator1047 = x3d.OrientationInterpolator(DEF="r_elbow_OI")
IS1048 = x3d.IS()
connect1049 = x3d.connect()
connect1049.nodeField = "key"
connect1049.protoField = "r_elbow_key"

IS1048.connect.append(connect1049)
connect1050 = x3d.connect()
connect1050.nodeField = "keyValue"
connect1050.protoField = "r_elbow_keyValue"

IS1048.connect.append(connect1050)
connect1051 = x3d.connect()
connect1051.nodeField = "value_changed"
connect1051.protoField = "r_elbow_changed"

IS1048.connect.append(connect1051)

OrientationInterpolator1047.IS = IS1048

ProtoBody600.children.append(OrientationInterpolator1047)
OrientationInterpolator1052 = x3d.OrientationInterpolator(DEF="r_eyeball_OI")
IS1053 = x3d.IS()
connect1054 = x3d.connect()
connect1054.nodeField = "key"
connect1054.protoField = "r_eyeball_key"

IS1053.connect.append(connect1054)
connect1055 = x3d.connect()
connect1055.nodeField = "keyValue"
connect1055.protoField = "r_eyeball_keyValue"

IS1053.connect.append(connect1055)
connect1056 = x3d.connect()
connect1056.nodeField = "value_changed"
connect1056.protoField = "r_eyeball_changed"

IS1053.connect.append(connect1056)

OrientationInterpolator1052.IS = IS1053

ProtoBody600.children.append(OrientationInterpolator1052)
OrientationInterpolator1057 = x3d.OrientationInterpolator(DEF="r_eyeball_joint_OI")
IS1058 = x3d.IS()
connect1059 = x3d.connect()
connect1059.nodeField = "key"
connect1059.protoField = "r_eyeball_joint_key"

IS1058.connect.append(connect1059)
connect1060 = x3d.connect()
connect1060.nodeField = "keyValue"
connect1060.protoField = "r_eyeball_joint_keyValue"

IS1058.connect.append(connect1060)
connect1061 = x3d.connect()
connect1061.nodeField = "value_changed"
connect1061.protoField = "r_eyeball_joint_changed"

IS1058.connect.append(connect1061)

OrientationInterpolator1057.IS = IS1058

ProtoBody600.children.append(OrientationInterpolator1057)
OrientationInterpolator1062 = x3d.OrientationInterpolator(DEF="r_eyebrow_OI")
IS1063 = x3d.IS()
connect1064 = x3d.connect()
connect1064.nodeField = "key"
connect1064.protoField = "r_eyebrow_key"

IS1063.connect.append(connect1064)
connect1065 = x3d.connect()
connect1065.nodeField = "keyValue"
connect1065.protoField = "r_eyebrow_keyValue"

IS1063.connect.append(connect1065)
connect1066 = x3d.connect()
connect1066.nodeField = "value_changed"
connect1066.protoField = "r_eyebrow_changed"

IS1063.connect.append(connect1066)

OrientationInterpolator1062.IS = IS1063

ProtoBody600.children.append(OrientationInterpolator1062)
OrientationInterpolator1067 = x3d.OrientationInterpolator(DEF="r_eyebrow_joint_OI")
IS1068 = x3d.IS()
connect1069 = x3d.connect()
connect1069.nodeField = "key"
connect1069.protoField = "r_eyebrow_joint_key"

IS1068.connect.append(connect1069)
connect1070 = x3d.connect()
connect1070.nodeField = "keyValue"
connect1070.protoField = "r_eyebrow_joint_keyValue"

IS1068.connect.append(connect1070)
connect1071 = x3d.connect()
connect1071.nodeField = "value_changed"
connect1071.protoField = "r_eyebrow_joint_changed"

IS1068.connect.append(connect1071)

OrientationInterpolator1067.IS = IS1068

ProtoBody600.children.append(OrientationInterpolator1067)
OrientationInterpolator1072 = x3d.OrientationInterpolator(DEF="r_eyelid_OI")
IS1073 = x3d.IS()
connect1074 = x3d.connect()
connect1074.nodeField = "key"
connect1074.protoField = "r_eyelid_key"

IS1073.connect.append(connect1074)
connect1075 = x3d.connect()
connect1075.nodeField = "keyValue"
connect1075.protoField = "r_eyelid_keyValue"

IS1073.connect.append(connect1075)
connect1076 = x3d.connect()
connect1076.nodeField = "value_changed"
connect1076.protoField = "r_eyelid_changed"

IS1073.connect.append(connect1076)

OrientationInterpolator1072.IS = IS1073

ProtoBody600.children.append(OrientationInterpolator1072)
OrientationInterpolator1077 = x3d.OrientationInterpolator(DEF="r_eyelid_joint_OI")
IS1078 = x3d.IS()
connect1079 = x3d.connect()
connect1079.nodeField = "key"
connect1079.protoField = "r_eyelid_joint_key"

IS1078.connect.append(connect1079)
connect1080 = x3d.connect()
connect1080.nodeField = "keyValue"
connect1080.protoField = "r_eyelid_joint_keyValue"

IS1078.connect.append(connect1080)
connect1081 = x3d.connect()
connect1081.nodeField = "value_changed"
connect1081.protoField = "r_eyelid_joint_changed"

IS1078.connect.append(connect1081)

OrientationInterpolator1077.IS = IS1078

ProtoBody600.children.append(OrientationInterpolator1077)
OrientationInterpolator1082 = x3d.OrientationInterpolator(DEF="r_forearm_OI")
IS1083 = x3d.IS()
connect1084 = x3d.connect()
connect1084.nodeField = "key"
connect1084.protoField = "r_forearm_key"

IS1083.connect.append(connect1084)
connect1085 = x3d.connect()
connect1085.nodeField = "keyValue"
connect1085.protoField = "r_forearm_keyValue"

IS1083.connect.append(connect1085)
connect1086 = x3d.connect()
connect1086.nodeField = "value_changed"
connect1086.protoField = "r_forearm_changed"

IS1083.connect.append(connect1086)

OrientationInterpolator1082.IS = IS1083

ProtoBody600.children.append(OrientationInterpolator1082)
OrientationInterpolator1087 = x3d.OrientationInterpolator(DEF="r_forefoot_OI")
IS1088 = x3d.IS()
connect1089 = x3d.connect()
connect1089.nodeField = "key"
connect1089.protoField = "r_forefoot_key"

IS1088.connect.append(connect1089)
connect1090 = x3d.connect()
connect1090.nodeField = "keyValue"
connect1090.protoField = "r_forefoot_keyValue"

IS1088.connect.append(connect1090)
connect1091 = x3d.connect()
connect1091.nodeField = "value_changed"
connect1091.protoField = "r_forefoot_changed"

IS1088.connect.append(connect1091)

OrientationInterpolator1087.IS = IS1088

ProtoBody600.children.append(OrientationInterpolator1087)
OrientationInterpolator1092 = x3d.OrientationInterpolator(DEF="r_hand_OI")
IS1093 = x3d.IS()
connect1094 = x3d.connect()
connect1094.nodeField = "key"
connect1094.protoField = "r_hand_key"

IS1093.connect.append(connect1094)
connect1095 = x3d.connect()
connect1095.nodeField = "keyValue"
connect1095.protoField = "r_hand_keyValue"

IS1093.connect.append(connect1095)
connect1096 = x3d.connect()
connect1096.nodeField = "value_changed"
connect1096.protoField = "r_hand_changed"

IS1093.connect.append(connect1096)

OrientationInterpolator1092.IS = IS1093

ProtoBody600.children.append(OrientationInterpolator1092)
OrientationInterpolator1097 = x3d.OrientationInterpolator(DEF="r_hindfoot_OI")
IS1098 = x3d.IS()
connect1099 = x3d.connect()
connect1099.nodeField = "key"
connect1099.protoField = "r_hindfoot_key"

IS1098.connect.append(connect1099)
connect1100 = x3d.connect()
connect1100.nodeField = "keyValue"
connect1100.protoField = "r_hindfoot_keyValue"

IS1098.connect.append(connect1100)
connect1101 = x3d.connect()
connect1101.nodeField = "value_changed"
connect1101.protoField = "r_hindfoot_changed"

IS1098.connect.append(connect1101)

OrientationInterpolator1097.IS = IS1098

ProtoBody600.children.append(OrientationInterpolator1097)
OrientationInterpolator1102 = x3d.OrientationInterpolator(DEF="r_hip_OI")
IS1103 = x3d.IS()
connect1104 = x3d.connect()
connect1104.nodeField = "key"
connect1104.protoField = "r_hip_key"

IS1103.connect.append(connect1104)
connect1105 = x3d.connect()
connect1105.nodeField = "keyValue"
connect1105.protoField = "r_hip_keyValue"

IS1103.connect.append(connect1105)
connect1106 = x3d.connect()
connect1106.nodeField = "value_changed"
connect1106.protoField = "r_hip_changed"

IS1103.connect.append(connect1106)

OrientationInterpolator1102.IS = IS1103

ProtoBody600.children.append(OrientationInterpolator1102)
OrientationInterpolator1107 = x3d.OrientationInterpolator(DEF="r_index0_OI")
IS1108 = x3d.IS()
connect1109 = x3d.connect()
connect1109.nodeField = "key"
connect1109.protoField = "r_index0_key"

IS1108.connect.append(connect1109)
connect1110 = x3d.connect()
connect1110.nodeField = "keyValue"
connect1110.protoField = "r_index0_keyValue"

IS1108.connect.append(connect1110)
connect1111 = x3d.connect()
connect1111.nodeField = "value_changed"
connect1111.protoField = "r_index0_changed"

IS1108.connect.append(connect1111)

OrientationInterpolator1107.IS = IS1108

ProtoBody600.children.append(OrientationInterpolator1107)
OrientationInterpolator1112 = x3d.OrientationInterpolator(DEF="r_index1_OI")
IS1113 = x3d.IS()
connect1114 = x3d.connect()
connect1114.nodeField = "key"
connect1114.protoField = "r_index1_key"

IS1113.connect.append(connect1114)
connect1115 = x3d.connect()
connect1115.nodeField = "keyValue"
connect1115.protoField = "r_index1_keyValue"

IS1113.connect.append(connect1115)
connect1116 = x3d.connect()
connect1116.nodeField = "value_changed"
connect1116.protoField = "r_index1_changed"

IS1113.connect.append(connect1116)

OrientationInterpolator1112.IS = IS1113

ProtoBody600.children.append(OrientationInterpolator1112)
OrientationInterpolator1117 = x3d.OrientationInterpolator(DEF="r_index2_OI")
IS1118 = x3d.IS()
connect1119 = x3d.connect()
connect1119.nodeField = "key"
connect1119.protoField = "r_index2_key"

IS1118.connect.append(connect1119)
connect1120 = x3d.connect()
connect1120.nodeField = "keyValue"
connect1120.protoField = "r_index2_keyValue"

IS1118.connect.append(connect1120)
connect1121 = x3d.connect()
connect1121.nodeField = "value_changed"
connect1121.protoField = "r_index2_changed"

IS1118.connect.append(connect1121)

OrientationInterpolator1117.IS = IS1118

ProtoBody600.children.append(OrientationInterpolator1117)
OrientationInterpolator1122 = x3d.OrientationInterpolator(DEF="r_index3_OI")
IS1123 = x3d.IS()
connect1124 = x3d.connect()
connect1124.nodeField = "key"
connect1124.protoField = "r_index3_key"

IS1123.connect.append(connect1124)
connect1125 = x3d.connect()
connect1125.nodeField = "keyValue"
connect1125.protoField = "r_index3_keyValue"

IS1123.connect.append(connect1125)
connect1126 = x3d.connect()
connect1126.nodeField = "value_changed"
connect1126.protoField = "r_index3_changed"

IS1123.connect.append(connect1126)

OrientationInterpolator1122.IS = IS1123

ProtoBody600.children.append(OrientationInterpolator1122)
OrientationInterpolator1127 = x3d.OrientationInterpolator(DEF="r_index_distal_OI")
IS1128 = x3d.IS()
connect1129 = x3d.connect()
connect1129.nodeField = "key"
connect1129.protoField = "r_index_distal_key"

IS1128.connect.append(connect1129)
connect1130 = x3d.connect()
connect1130.nodeField = "keyValue"
connect1130.protoField = "r_index_distal_keyValue"

IS1128.connect.append(connect1130)
connect1131 = x3d.connect()
connect1131.nodeField = "value_changed"
connect1131.protoField = "r_index_distal_changed"

IS1128.connect.append(connect1131)

OrientationInterpolator1127.IS = IS1128

ProtoBody600.children.append(OrientationInterpolator1127)
OrientationInterpolator1132 = x3d.OrientationInterpolator(DEF="r_index_metacarpal_OI")
IS1133 = x3d.IS()
connect1134 = x3d.connect()
connect1134.nodeField = "key"
connect1134.protoField = "r_index_metacarpal_key"

IS1133.connect.append(connect1134)
connect1135 = x3d.connect()
connect1135.nodeField = "keyValue"
connect1135.protoField = "r_index_metacarpal_keyValue"

IS1133.connect.append(connect1135)
connect1136 = x3d.connect()
connect1136.nodeField = "value_changed"
connect1136.protoField = "r_index_metacarpal_changed"

IS1133.connect.append(connect1136)

OrientationInterpolator1132.IS = IS1133

ProtoBody600.children.append(OrientationInterpolator1132)
OrientationInterpolator1137 = x3d.OrientationInterpolator(DEF="r_index_middle_OI")
IS1138 = x3d.IS()
connect1139 = x3d.connect()
connect1139.nodeField = "key"
connect1139.protoField = "r_index_middle_key"

IS1138.connect.append(connect1139)
connect1140 = x3d.connect()
connect1140.nodeField = "keyValue"
connect1140.protoField = "r_index_middle_keyValue"

IS1138.connect.append(connect1140)
connect1141 = x3d.connect()
connect1141.nodeField = "value_changed"
connect1141.protoField = "r_index_middle_changed"

IS1138.connect.append(connect1141)

OrientationInterpolator1137.IS = IS1138

ProtoBody600.children.append(OrientationInterpolator1137)
OrientationInterpolator1142 = x3d.OrientationInterpolator(DEF="r_index_proximal_OI")
IS1143 = x3d.IS()
connect1144 = x3d.connect()
connect1144.nodeField = "key"
connect1144.protoField = "r_index_proximal_key"

IS1143.connect.append(connect1144)
connect1145 = x3d.connect()
connect1145.nodeField = "keyValue"
connect1145.protoField = "r_index_proximal_keyValue"

IS1143.connect.append(connect1145)
connect1146 = x3d.connect()
connect1146.nodeField = "value_changed"
connect1146.protoField = "r_index_proximal_changed"

IS1143.connect.append(connect1146)

OrientationInterpolator1142.IS = IS1143

ProtoBody600.children.append(OrientationInterpolator1142)
OrientationInterpolator1147 = x3d.OrientationInterpolator(DEF="r_knee_OI")
IS1148 = x3d.IS()
connect1149 = x3d.connect()
connect1149.nodeField = "key"
connect1149.protoField = "r_knee_key"

IS1148.connect.append(connect1149)
connect1150 = x3d.connect()
connect1150.nodeField = "keyValue"
connect1150.protoField = "r_knee_keyValue"

IS1148.connect.append(connect1150)
connect1151 = x3d.connect()
connect1151.nodeField = "value_changed"
connect1151.protoField = "r_knee_changed"

IS1148.connect.append(connect1151)

OrientationInterpolator1147.IS = IS1148

ProtoBody600.children.append(OrientationInterpolator1147)
OrientationInterpolator1152 = x3d.OrientationInterpolator(DEF="r_metatarsal_OI")
IS1153 = x3d.IS()
connect1154 = x3d.connect()
connect1154.nodeField = "key"
connect1154.protoField = "r_metatarsal_key"

IS1153.connect.append(connect1154)
connect1155 = x3d.connect()
connect1155.nodeField = "keyValue"
connect1155.protoField = "r_metatarsal_keyValue"

IS1153.connect.append(connect1155)
connect1156 = x3d.connect()
connect1156.nodeField = "value_changed"
connect1156.protoField = "r_metatarsal_changed"

IS1153.connect.append(connect1156)

OrientationInterpolator1152.IS = IS1153

ProtoBody600.children.append(OrientationInterpolator1152)
OrientationInterpolator1157 = x3d.OrientationInterpolator(DEF="r_middistal_OI")
IS1158 = x3d.IS()
connect1159 = x3d.connect()
connect1159.nodeField = "key"
connect1159.protoField = "r_middistal_key"

IS1158.connect.append(connect1159)
connect1160 = x3d.connect()
connect1160.nodeField = "keyValue"
connect1160.protoField = "r_middistal_keyValue"

IS1158.connect.append(connect1160)
connect1161 = x3d.connect()
connect1161.nodeField = "value_changed"
connect1161.protoField = "r_middistal_changed"

IS1158.connect.append(connect1161)

OrientationInterpolator1157.IS = IS1158

ProtoBody600.children.append(OrientationInterpolator1157)
OrientationInterpolator1162 = x3d.OrientationInterpolator(DEF="r_middle0_OI")
IS1163 = x3d.IS()
connect1164 = x3d.connect()
connect1164.nodeField = "key"
connect1164.protoField = "r_middle0_key"

IS1163.connect.append(connect1164)
connect1165 = x3d.connect()
connect1165.nodeField = "keyValue"
connect1165.protoField = "r_middle0_keyValue"

IS1163.connect.append(connect1165)
connect1166 = x3d.connect()
connect1166.nodeField = "value_changed"
connect1166.protoField = "r_middle0_changed"

IS1163.connect.append(connect1166)

OrientationInterpolator1162.IS = IS1163

ProtoBody600.children.append(OrientationInterpolator1162)
OrientationInterpolator1167 = x3d.OrientationInterpolator(DEF="r_middle1_OI")
IS1168 = x3d.IS()
connect1169 = x3d.connect()
connect1169.nodeField = "key"
connect1169.protoField = "r_middle1_key"

IS1168.connect.append(connect1169)
connect1170 = x3d.connect()
connect1170.nodeField = "keyValue"
connect1170.protoField = "r_middle1_keyValue"

IS1168.connect.append(connect1170)
connect1171 = x3d.connect()
connect1171.nodeField = "value_changed"
connect1171.protoField = "r_middle1_changed"

IS1168.connect.append(connect1171)

OrientationInterpolator1167.IS = IS1168

ProtoBody600.children.append(OrientationInterpolator1167)
OrientationInterpolator1172 = x3d.OrientationInterpolator(DEF="r_middle2_OI")
IS1173 = x3d.IS()
connect1174 = x3d.connect()
connect1174.nodeField = "key"
connect1174.protoField = "r_middle2_key"

IS1173.connect.append(connect1174)
connect1175 = x3d.connect()
connect1175.nodeField = "keyValue"
connect1175.protoField = "r_middle2_keyValue"

IS1173.connect.append(connect1175)
connect1176 = x3d.connect()
connect1176.nodeField = "value_changed"
connect1176.protoField = "r_middle2_changed"

IS1173.connect.append(connect1176)

OrientationInterpolator1172.IS = IS1173

ProtoBody600.children.append(OrientationInterpolator1172)
OrientationInterpolator1177 = x3d.OrientationInterpolator(DEF="r_middle3_OI")
IS1178 = x3d.IS()
connect1179 = x3d.connect()
connect1179.nodeField = "key"
connect1179.protoField = "r_middle3_key"

IS1178.connect.append(connect1179)
connect1180 = x3d.connect()
connect1180.nodeField = "keyValue"
connect1180.protoField = "r_middle3_keyValue"

IS1178.connect.append(connect1180)
connect1181 = x3d.connect()
connect1181.nodeField = "value_changed"
connect1181.protoField = "r_middle3_changed"

IS1178.connect.append(connect1181)

OrientationInterpolator1177.IS = IS1178

ProtoBody600.children.append(OrientationInterpolator1177)
OrientationInterpolator1182 = x3d.OrientationInterpolator(DEF="r_middle_distal_OI")
IS1183 = x3d.IS()
connect1184 = x3d.connect()
connect1184.nodeField = "key"
connect1184.protoField = "r_middle_distal_key"

IS1183.connect.append(connect1184)
connect1185 = x3d.connect()
connect1185.nodeField = "keyValue"
connect1185.protoField = "r_middle_distal_keyValue"

IS1183.connect.append(connect1185)
connect1186 = x3d.connect()
connect1186.nodeField = "value_changed"
connect1186.protoField = "r_middle_distal_changed"

IS1183.connect.append(connect1186)

OrientationInterpolator1182.IS = IS1183

ProtoBody600.children.append(OrientationInterpolator1182)
OrientationInterpolator1187 = x3d.OrientationInterpolator(DEF="r_middle_metacarpal_OI")
IS1188 = x3d.IS()
connect1189 = x3d.connect()
connect1189.nodeField = "key"
connect1189.protoField = "r_middle_metacarpal_key"

IS1188.connect.append(connect1189)
connect1190 = x3d.connect()
connect1190.nodeField = "keyValue"
connect1190.protoField = "r_middle_metacarpal_keyValue"

IS1188.connect.append(connect1190)
connect1191 = x3d.connect()
connect1191.nodeField = "value_changed"
connect1191.protoField = "r_middle_metacarpal_changed"

IS1188.connect.append(connect1191)

OrientationInterpolator1187.IS = IS1188

ProtoBody600.children.append(OrientationInterpolator1187)
OrientationInterpolator1192 = x3d.OrientationInterpolator(DEF="r_middle_middle_OI")
IS1193 = x3d.IS()
connect1194 = x3d.connect()
connect1194.nodeField = "key"
connect1194.protoField = "r_middle_middle_key"

IS1193.connect.append(connect1194)
connect1195 = x3d.connect()
connect1195.nodeField = "keyValue"
connect1195.protoField = "r_middle_middle_keyValue"

IS1193.connect.append(connect1195)
connect1196 = x3d.connect()
connect1196.nodeField = "value_changed"
connect1196.protoField = "r_middle_middle_changed"

IS1193.connect.append(connect1196)

OrientationInterpolator1192.IS = IS1193

ProtoBody600.children.append(OrientationInterpolator1192)
OrientationInterpolator1197 = x3d.OrientationInterpolator(DEF="r_middle_proximal_OI")
IS1198 = x3d.IS()
connect1199 = x3d.connect()
connect1199.nodeField = "key"
connect1199.protoField = "r_middle_proximal_key"

IS1198.connect.append(connect1199)
connect1200 = x3d.connect()
connect1200.nodeField = "keyValue"
connect1200.protoField = "r_middle_proximal_keyValue"

IS1198.connect.append(connect1200)
connect1201 = x3d.connect()
connect1201.nodeField = "value_changed"
connect1201.protoField = "r_middle_proximal_changed"

IS1198.connect.append(connect1201)

OrientationInterpolator1197.IS = IS1198

ProtoBody600.children.append(OrientationInterpolator1197)
OrientationInterpolator1202 = x3d.OrientationInterpolator(DEF="r_midproximal_OI")
IS1203 = x3d.IS()
connect1204 = x3d.connect()
connect1204.nodeField = "key"
connect1204.protoField = "r_midproximal_key"

IS1203.connect.append(connect1204)
connect1205 = x3d.connect()
connect1205.nodeField = "keyValue"
connect1205.protoField = "r_midproximal_keyValue"

IS1203.connect.append(connect1205)
connect1206 = x3d.connect()
connect1206.nodeField = "value_changed"
connect1206.protoField = "r_midproximal_changed"

IS1203.connect.append(connect1206)

OrientationInterpolator1202.IS = IS1203

ProtoBody600.children.append(OrientationInterpolator1202)
OrientationInterpolator1207 = x3d.OrientationInterpolator(DEF="r_midtarsal_OI")
IS1208 = x3d.IS()
connect1209 = x3d.connect()
connect1209.nodeField = "key"
connect1209.protoField = "r_midtarsal_key"

IS1208.connect.append(connect1209)
connect1210 = x3d.connect()
connect1210.nodeField = "keyValue"
connect1210.protoField = "r_midtarsal_keyValue"

IS1208.connect.append(connect1210)
connect1211 = x3d.connect()
connect1211.nodeField = "value_changed"
connect1211.protoField = "r_midtarsal_changed"

IS1208.connect.append(connect1211)

OrientationInterpolator1207.IS = IS1208

ProtoBody600.children.append(OrientationInterpolator1207)
OrientationInterpolator1212 = x3d.OrientationInterpolator(DEF="r_pinky0_OI")
IS1213 = x3d.IS()
connect1214 = x3d.connect()
connect1214.nodeField = "key"
connect1214.protoField = "r_pinky0_key"

IS1213.connect.append(connect1214)
connect1215 = x3d.connect()
connect1215.nodeField = "keyValue"
connect1215.protoField = "r_pinky0_keyValue"

IS1213.connect.append(connect1215)
connect1216 = x3d.connect()
connect1216.nodeField = "value_changed"
connect1216.protoField = "r_pinky0_changed"

IS1213.connect.append(connect1216)

OrientationInterpolator1212.IS = IS1213

ProtoBody600.children.append(OrientationInterpolator1212)
OrientationInterpolator1217 = x3d.OrientationInterpolator(DEF="r_pinky1_OI")
IS1218 = x3d.IS()
connect1219 = x3d.connect()
connect1219.nodeField = "key"
connect1219.protoField = "r_pinky1_key"

IS1218.connect.append(connect1219)
connect1220 = x3d.connect()
connect1220.nodeField = "keyValue"
connect1220.protoField = "r_pinky1_keyValue"

IS1218.connect.append(connect1220)
connect1221 = x3d.connect()
connect1221.nodeField = "value_changed"
connect1221.protoField = "r_pinky1_changed"

IS1218.connect.append(connect1221)

OrientationInterpolator1217.IS = IS1218

ProtoBody600.children.append(OrientationInterpolator1217)
OrientationInterpolator1222 = x3d.OrientationInterpolator(DEF="r_pinky2_OI")
IS1223 = x3d.IS()
connect1224 = x3d.connect()
connect1224.nodeField = "key"
connect1224.protoField = "r_pinky2_key"

IS1223.connect.append(connect1224)
connect1225 = x3d.connect()
connect1225.nodeField = "keyValue"
connect1225.protoField = "r_pinky2_keyValue"

IS1223.connect.append(connect1225)
connect1226 = x3d.connect()
connect1226.nodeField = "value_changed"
connect1226.protoField = "r_pinky2_changed"

IS1223.connect.append(connect1226)

OrientationInterpolator1222.IS = IS1223

ProtoBody600.children.append(OrientationInterpolator1222)
OrientationInterpolator1227 = x3d.OrientationInterpolator(DEF="r_pinky3_OI")
IS1228 = x3d.IS()
connect1229 = x3d.connect()
connect1229.nodeField = "key"
connect1229.protoField = "r_pinky3_key"

IS1228.connect.append(connect1229)
connect1230 = x3d.connect()
connect1230.nodeField = "keyValue"
connect1230.protoField = "r_pinky3_keyValue"

IS1228.connect.append(connect1230)
connect1231 = x3d.connect()
connect1231.nodeField = "value_changed"
connect1231.protoField = "r_pinky3_changed"

IS1228.connect.append(connect1231)

OrientationInterpolator1227.IS = IS1228

ProtoBody600.children.append(OrientationInterpolator1227)
OrientationInterpolator1232 = x3d.OrientationInterpolator(DEF="r_pinky_distal_OI")
IS1233 = x3d.IS()
connect1234 = x3d.connect()
connect1234.nodeField = "key"
connect1234.protoField = "r_pinky_distal_key"

IS1233.connect.append(connect1234)
connect1235 = x3d.connect()
connect1235.nodeField = "keyValue"
connect1235.protoField = "r_pinky_distal_keyValue"

IS1233.connect.append(connect1235)
connect1236 = x3d.connect()
connect1236.nodeField = "value_changed"
connect1236.protoField = "r_pinky_distal_changed"

IS1233.connect.append(connect1236)

OrientationInterpolator1232.IS = IS1233

ProtoBody600.children.append(OrientationInterpolator1232)
OrientationInterpolator1237 = x3d.OrientationInterpolator(DEF="r_pinky_metacarpal_OI")
IS1238 = x3d.IS()
connect1239 = x3d.connect()
connect1239.nodeField = "key"
connect1239.protoField = "r_pinky_metacarpal_key"

IS1238.connect.append(connect1239)
connect1240 = x3d.connect()
connect1240.nodeField = "keyValue"
connect1240.protoField = "r_pinky_metacarpal_keyValue"

IS1238.connect.append(connect1240)
connect1241 = x3d.connect()
connect1241.nodeField = "value_changed"
connect1241.protoField = "r_pinky_metacarpal_changed"

IS1238.connect.append(connect1241)

OrientationInterpolator1237.IS = IS1238

ProtoBody600.children.append(OrientationInterpolator1237)
OrientationInterpolator1242 = x3d.OrientationInterpolator(DEF="r_pinky_middle_OI")
IS1243 = x3d.IS()
connect1244 = x3d.connect()
connect1244.nodeField = "key"
connect1244.protoField = "r_pinky_middle_key"

IS1243.connect.append(connect1244)
connect1245 = x3d.connect()
connect1245.nodeField = "keyValue"
connect1245.protoField = "r_pinky_middle_keyValue"

IS1243.connect.append(connect1245)
connect1246 = x3d.connect()
connect1246.nodeField = "value_changed"
connect1246.protoField = "r_pinky_middle_changed"

IS1243.connect.append(connect1246)

OrientationInterpolator1242.IS = IS1243

ProtoBody600.children.append(OrientationInterpolator1242)
OrientationInterpolator1247 = x3d.OrientationInterpolator(DEF="r_pinky_proximal_OI")
IS1248 = x3d.IS()
connect1249 = x3d.connect()
connect1249.nodeField = "key"
connect1249.protoField = "r_pinky_proximal_key"

IS1248.connect.append(connect1249)
connect1250 = x3d.connect()
connect1250.nodeField = "keyValue"
connect1250.protoField = "r_pinky_proximal_keyValue"

IS1248.connect.append(connect1250)
connect1251 = x3d.connect()
connect1251.nodeField = "value_changed"
connect1251.protoField = "r_pinky_proximal_changed"

IS1248.connect.append(connect1251)

OrientationInterpolator1247.IS = IS1248

ProtoBody600.children.append(OrientationInterpolator1247)
OrientationInterpolator1252 = x3d.OrientationInterpolator(DEF="r_ring0_OI")
IS1253 = x3d.IS()
connect1254 = x3d.connect()
connect1254.nodeField = "key"
connect1254.protoField = "r_ring0_key"

IS1253.connect.append(connect1254)
connect1255 = x3d.connect()
connect1255.nodeField = "keyValue"
connect1255.protoField = "r_ring0_keyValue"

IS1253.connect.append(connect1255)
connect1256 = x3d.connect()
connect1256.nodeField = "value_changed"
connect1256.protoField = "r_ring0_changed"

IS1253.connect.append(connect1256)

OrientationInterpolator1252.IS = IS1253

ProtoBody600.children.append(OrientationInterpolator1252)
OrientationInterpolator1257 = x3d.OrientationInterpolator(DEF="r_ring1_OI")
IS1258 = x3d.IS()
connect1259 = x3d.connect()
connect1259.nodeField = "key"
connect1259.protoField = "r_ring1_key"

IS1258.connect.append(connect1259)
connect1260 = x3d.connect()
connect1260.nodeField = "keyValue"
connect1260.protoField = "r_ring1_keyValue"

IS1258.connect.append(connect1260)
connect1261 = x3d.connect()
connect1261.nodeField = "value_changed"
connect1261.protoField = "r_ring1_changed"

IS1258.connect.append(connect1261)

OrientationInterpolator1257.IS = IS1258

ProtoBody600.children.append(OrientationInterpolator1257)
OrientationInterpolator1262 = x3d.OrientationInterpolator(DEF="r_ring2_OI")
IS1263 = x3d.IS()
connect1264 = x3d.connect()
connect1264.nodeField = "key"
connect1264.protoField = "r_ring2_key"

IS1263.connect.append(connect1264)
connect1265 = x3d.connect()
connect1265.nodeField = "keyValue"
connect1265.protoField = "r_ring2_keyValue"

IS1263.connect.append(connect1265)
connect1266 = x3d.connect()
connect1266.nodeField = "value_changed"
connect1266.protoField = "r_ring2_changed"

IS1263.connect.append(connect1266)

OrientationInterpolator1262.IS = IS1263

ProtoBody600.children.append(OrientationInterpolator1262)
OrientationInterpolator1267 = x3d.OrientationInterpolator(DEF="r_ring3_OI")
IS1268 = x3d.IS()
connect1269 = x3d.connect()
connect1269.nodeField = "key"
connect1269.protoField = "r_ring3_key"

IS1268.connect.append(connect1269)
connect1270 = x3d.connect()
connect1270.nodeField = "keyValue"
connect1270.protoField = "r_ring3_keyValue"

IS1268.connect.append(connect1270)
connect1271 = x3d.connect()
connect1271.nodeField = "value_changed"
connect1271.protoField = "r_ring3_changed"

IS1268.connect.append(connect1271)

OrientationInterpolator1267.IS = IS1268

ProtoBody600.children.append(OrientationInterpolator1267)
OrientationInterpolator1272 = x3d.OrientationInterpolator(DEF="r_ring_distal_OI")
IS1273 = x3d.IS()
connect1274 = x3d.connect()
connect1274.nodeField = "key"
connect1274.protoField = "r_ring_distal_key"

IS1273.connect.append(connect1274)
connect1275 = x3d.connect()
connect1275.nodeField = "keyValue"
connect1275.protoField = "r_ring_distal_keyValue"

IS1273.connect.append(connect1275)
connect1276 = x3d.connect()
connect1276.nodeField = "value_changed"
connect1276.protoField = "r_ring_distal_changed"

IS1273.connect.append(connect1276)

OrientationInterpolator1272.IS = IS1273

ProtoBody600.children.append(OrientationInterpolator1272)
OrientationInterpolator1277 = x3d.OrientationInterpolator(DEF="r_ring_metacarpal_OI")
IS1278 = x3d.IS()
connect1279 = x3d.connect()
connect1279.nodeField = "key"
connect1279.protoField = "r_ring_metacarpal_key"

IS1278.connect.append(connect1279)
connect1280 = x3d.connect()
connect1280.nodeField = "keyValue"
connect1280.protoField = "r_ring_metacarpal_keyValue"

IS1278.connect.append(connect1280)
connect1281 = x3d.connect()
connect1281.nodeField = "value_changed"
connect1281.protoField = "r_ring_metacarpal_changed"

IS1278.connect.append(connect1281)

OrientationInterpolator1277.IS = IS1278

ProtoBody600.children.append(OrientationInterpolator1277)
OrientationInterpolator1282 = x3d.OrientationInterpolator(DEF="r_ring_middle_OI")
IS1283 = x3d.IS()
connect1284 = x3d.connect()
connect1284.nodeField = "key"
connect1284.protoField = "r_ring_middle_key"

IS1283.connect.append(connect1284)
connect1285 = x3d.connect()
connect1285.nodeField = "keyValue"
connect1285.protoField = "r_ring_middle_keyValue"

IS1283.connect.append(connect1285)
connect1286 = x3d.connect()
connect1286.nodeField = "value_changed"
connect1286.protoField = "r_ring_middle_changed"

IS1283.connect.append(connect1286)

OrientationInterpolator1282.IS = IS1283

ProtoBody600.children.append(OrientationInterpolator1282)
OrientationInterpolator1287 = x3d.OrientationInterpolator(DEF="r_ring_proximal_OI")
IS1288 = x3d.IS()
connect1289 = x3d.connect()
connect1289.nodeField = "key"
connect1289.protoField = "r_ring_proximal_key"

IS1288.connect.append(connect1289)
connect1290 = x3d.connect()
connect1290.nodeField = "keyValue"
connect1290.protoField = "r_ring_proximal_keyValue"

IS1288.connect.append(connect1290)
connect1291 = x3d.connect()
connect1291.nodeField = "value_changed"
connect1291.protoField = "r_ring_proximal_changed"

IS1288.connect.append(connect1291)

OrientationInterpolator1287.IS = IS1288

ProtoBody600.children.append(OrientationInterpolator1287)
OrientationInterpolator1292 = x3d.OrientationInterpolator(DEF="r_scapula_OI")
IS1293 = x3d.IS()
connect1294 = x3d.connect()
connect1294.nodeField = "key"
connect1294.protoField = "r_scapula_key"

IS1293.connect.append(connect1294)
connect1295 = x3d.connect()
connect1295.nodeField = "keyValue"
connect1295.protoField = "r_scapula_keyValue"

IS1293.connect.append(connect1295)
connect1296 = x3d.connect()
connect1296.nodeField = "value_changed"
connect1296.protoField = "r_scapula_changed"

IS1293.connect.append(connect1296)

OrientationInterpolator1292.IS = IS1293

ProtoBody600.children.append(OrientationInterpolator1292)
OrientationInterpolator1297 = x3d.OrientationInterpolator(DEF="r_shoulder_OI")
IS1298 = x3d.IS()
connect1299 = x3d.connect()
connect1299.nodeField = "key"
connect1299.protoField = "r_shoulder_key"

IS1298.connect.append(connect1299)
connect1300 = x3d.connect()
connect1300.nodeField = "keyValue"
connect1300.protoField = "r_shoulder_keyValue"

IS1298.connect.append(connect1300)
connect1301 = x3d.connect()
connect1301.nodeField = "value_changed"
connect1301.protoField = "r_shoulder_changed"

IS1298.connect.append(connect1301)

OrientationInterpolator1297.IS = IS1298

ProtoBody600.children.append(OrientationInterpolator1297)
OrientationInterpolator1302 = x3d.OrientationInterpolator(DEF="r_sternoclavicular_OI")
IS1303 = x3d.IS()
connect1304 = x3d.connect()
connect1304.nodeField = "key"
connect1304.protoField = "r_sternoclavicular_key"

IS1303.connect.append(connect1304)
connect1305 = x3d.connect()
connect1305.nodeField = "keyValue"
connect1305.protoField = "r_sternoclavicular_keyValue"

IS1303.connect.append(connect1305)
connect1306 = x3d.connect()
connect1306.nodeField = "value_changed"
connect1306.protoField = "r_sternoclavicular_changed"

IS1303.connect.append(connect1306)

OrientationInterpolator1302.IS = IS1303

ProtoBody600.children.append(OrientationInterpolator1302)
OrientationInterpolator1307 = x3d.OrientationInterpolator(DEF="r_subtalar_OI")
IS1308 = x3d.IS()
connect1309 = x3d.connect()
connect1309.nodeField = "key"
connect1309.protoField = "r_subtalar_key"

IS1308.connect.append(connect1309)
connect1310 = x3d.connect()
connect1310.nodeField = "keyValue"
connect1310.protoField = "r_subtalar_keyValue"

IS1308.connect.append(connect1310)
connect1311 = x3d.connect()
connect1311.nodeField = "value_changed"
connect1311.protoField = "r_subtalar_changed"

IS1308.connect.append(connect1311)

OrientationInterpolator1307.IS = IS1308

ProtoBody600.children.append(OrientationInterpolator1307)
OrientationInterpolator1312 = x3d.OrientationInterpolator(DEF="r_thigh_OI")
IS1313 = x3d.IS()
connect1314 = x3d.connect()
connect1314.nodeField = "key"
connect1314.protoField = "r_thigh_key"

IS1313.connect.append(connect1314)
connect1315 = x3d.connect()
connect1315.nodeField = "keyValue"
connect1315.protoField = "r_thigh_keyValue"

IS1313.connect.append(connect1315)
connect1316 = x3d.connect()
connect1316.nodeField = "value_changed"
connect1316.protoField = "r_thigh_changed"

IS1313.connect.append(connect1316)

OrientationInterpolator1312.IS = IS1313

ProtoBody600.children.append(OrientationInterpolator1312)
OrientationInterpolator1317 = x3d.OrientationInterpolator(DEF="r_thumb1_OI")
IS1318 = x3d.IS()
connect1319 = x3d.connect()
connect1319.nodeField = "key"
connect1319.protoField = "r_thumb1_key"

IS1318.connect.append(connect1319)
connect1320 = x3d.connect()
connect1320.nodeField = "keyValue"
connect1320.protoField = "r_thumb1_keyValue"

IS1318.connect.append(connect1320)
connect1321 = x3d.connect()
connect1321.nodeField = "value_changed"
connect1321.protoField = "r_thumb1_changed"

IS1318.connect.append(connect1321)

OrientationInterpolator1317.IS = IS1318

ProtoBody600.children.append(OrientationInterpolator1317)
OrientationInterpolator1322 = x3d.OrientationInterpolator(DEF="r_thumb2_OI")
IS1323 = x3d.IS()
connect1324 = x3d.connect()
connect1324.nodeField = "key"
connect1324.protoField = "r_thumb2_key"

IS1323.connect.append(connect1324)
connect1325 = x3d.connect()
connect1325.nodeField = "keyValue"
connect1325.protoField = "r_thumb2_keyValue"

IS1323.connect.append(connect1325)
connect1326 = x3d.connect()
connect1326.nodeField = "value_changed"
connect1326.protoField = "r_thumb2_changed"

IS1323.connect.append(connect1326)

OrientationInterpolator1322.IS = IS1323

ProtoBody600.children.append(OrientationInterpolator1322)
OrientationInterpolator1327 = x3d.OrientationInterpolator(DEF="r_thumb3_OI")
IS1328 = x3d.IS()
connect1329 = x3d.connect()
connect1329.nodeField = "key"
connect1329.protoField = "r_thumb3_key"

IS1328.connect.append(connect1329)
connect1330 = x3d.connect()
connect1330.nodeField = "keyValue"
connect1330.protoField = "r_thumb3_keyValue"

IS1328.connect.append(connect1330)
connect1331 = x3d.connect()
connect1331.nodeField = "value_changed"
connect1331.protoField = "r_thumb3_changed"

IS1328.connect.append(connect1331)

OrientationInterpolator1327.IS = IS1328

ProtoBody600.children.append(OrientationInterpolator1327)
OrientationInterpolator1332 = x3d.OrientationInterpolator(DEF="r_thumb_distal_OI")
IS1333 = x3d.IS()
connect1334 = x3d.connect()
connect1334.nodeField = "key"
connect1334.protoField = "r_thumb_distal_key"

IS1333.connect.append(connect1334)
connect1335 = x3d.connect()
connect1335.nodeField = "keyValue"
connect1335.protoField = "r_thumb_distal_keyValue"

IS1333.connect.append(connect1335)
connect1336 = x3d.connect()
connect1336.nodeField = "value_changed"
connect1336.protoField = "r_thumb_distal_changed"

IS1333.connect.append(connect1336)

OrientationInterpolator1332.IS = IS1333

ProtoBody600.children.append(OrientationInterpolator1332)
OrientationInterpolator1337 = x3d.OrientationInterpolator(DEF="r_thumb_metacarpal_OI")
IS1338 = x3d.IS()
connect1339 = x3d.connect()
connect1339.nodeField = "key"
connect1339.protoField = "r_thumb_metacarpal_key"

IS1338.connect.append(connect1339)
connect1340 = x3d.connect()
connect1340.nodeField = "keyValue"
connect1340.protoField = "r_thumb_metacarpal_keyValue"

IS1338.connect.append(connect1340)
connect1341 = x3d.connect()
connect1341.nodeField = "value_changed"
connect1341.protoField = "r_thumb_metacarpal_changed"

IS1338.connect.append(connect1341)

OrientationInterpolator1337.IS = IS1338

ProtoBody600.children.append(OrientationInterpolator1337)
OrientationInterpolator1342 = x3d.OrientationInterpolator(DEF="r_thumb_proximal_OI")
IS1343 = x3d.IS()
connect1344 = x3d.connect()
connect1344.nodeField = "key"
connect1344.protoField = "r_thumb_proximal_key"

IS1343.connect.append(connect1344)
connect1345 = x3d.connect()
connect1345.nodeField = "keyValue"
connect1345.protoField = "r_thumb_proximal_keyValue"

IS1343.connect.append(connect1345)
connect1346 = x3d.connect()
connect1346.nodeField = "value_changed"
connect1346.protoField = "r_thumb_proximal_changed"

IS1343.connect.append(connect1346)

OrientationInterpolator1342.IS = IS1343

ProtoBody600.children.append(OrientationInterpolator1342)
OrientationInterpolator1347 = x3d.OrientationInterpolator(DEF="r_upperarm_OI")
IS1348 = x3d.IS()
connect1349 = x3d.connect()
connect1349.nodeField = "key"
connect1349.protoField = "r_upperarm_key"

IS1348.connect.append(connect1349)
connect1350 = x3d.connect()
connect1350.nodeField = "keyValue"
connect1350.protoField = "r_upperarm_keyValue"

IS1348.connect.append(connect1350)
connect1351 = x3d.connect()
connect1351.nodeField = "value_changed"
connect1351.protoField = "r_upperarm_changed"

IS1348.connect.append(connect1351)

OrientationInterpolator1347.IS = IS1348

ProtoBody600.children.append(OrientationInterpolator1347)
OrientationInterpolator1352 = x3d.OrientationInterpolator(DEF="r_wrist_OI")
IS1353 = x3d.IS()
connect1354 = x3d.connect()
connect1354.nodeField = "key"
connect1354.protoField = "r_wrist_key"

IS1353.connect.append(connect1354)
connect1355 = x3d.connect()
connect1355.nodeField = "keyValue"
connect1355.protoField = "r_wrist_keyValue"

IS1353.connect.append(connect1355)
connect1356 = x3d.connect()
connect1356.nodeField = "value_changed"
connect1356.protoField = "r_wrist_changed"

IS1353.connect.append(connect1356)

OrientationInterpolator1352.IS = IS1353

ProtoBody600.children.append(OrientationInterpolator1352)
OrientationInterpolator1357 = x3d.OrientationInterpolator(DEF="sacroiliac_OI")
IS1358 = x3d.IS()
connect1359 = x3d.connect()
connect1359.nodeField = "key"
connect1359.protoField = "sacroiliac_key"

IS1358.connect.append(connect1359)
connect1360 = x3d.connect()
connect1360.nodeField = "keyValue"
connect1360.protoField = "sacroiliac_keyValue"

IS1358.connect.append(connect1360)
connect1361 = x3d.connect()
connect1361.nodeField = "value_changed"
connect1361.protoField = "sacroiliac_changed"

IS1358.connect.append(connect1361)

OrientationInterpolator1357.IS = IS1358

ProtoBody600.children.append(OrientationInterpolator1357)
OrientationInterpolator1362 = x3d.OrientationInterpolator(DEF="sacrum_OI")
IS1363 = x3d.IS()
connect1364 = x3d.connect()
connect1364.nodeField = "key"
connect1364.protoField = "sacrum_key"

IS1363.connect.append(connect1364)
connect1365 = x3d.connect()
connect1365.nodeField = "keyValue"
connect1365.protoField = "sacrum_keyValue"

IS1363.connect.append(connect1365)
connect1366 = x3d.connect()
connect1366.nodeField = "value_changed"
connect1366.protoField = "sacrum_changed"

IS1363.connect.append(connect1366)

OrientationInterpolator1362.IS = IS1363

ProtoBody600.children.append(OrientationInterpolator1362)
OrientationInterpolator1367 = x3d.OrientationInterpolator(DEF="skull_OI")
IS1368 = x3d.IS()
connect1369 = x3d.connect()
connect1369.nodeField = "key"
connect1369.protoField = "skull_key"

IS1368.connect.append(connect1369)
connect1370 = x3d.connect()
connect1370.nodeField = "keyValue"
connect1370.protoField = "skull_keyValue"

IS1368.connect.append(connect1370)
connect1371 = x3d.connect()
connect1371.nodeField = "value_changed"
connect1371.protoField = "skull_changed"

IS1368.connect.append(connect1371)

OrientationInterpolator1367.IS = IS1368

ProtoBody600.children.append(OrientationInterpolator1367)
OrientationInterpolator1372 = x3d.OrientationInterpolator(DEF="skullbase_OI")
IS1373 = x3d.IS()
connect1374 = x3d.connect()
connect1374.nodeField = "key"
connect1374.protoField = "skullbase_key"

IS1373.connect.append(connect1374)
connect1375 = x3d.connect()
connect1375.nodeField = "keyValue"
connect1375.protoField = "skullbase_keyValue"

IS1373.connect.append(connect1375)
connect1376 = x3d.connect()
connect1376.nodeField = "value_changed"
connect1376.protoField = "skullbase_changed"

IS1373.connect.append(connect1376)

OrientationInterpolator1372.IS = IS1373

ProtoBody600.children.append(OrientationInterpolator1372)
OrientationInterpolator1377 = x3d.OrientationInterpolator(DEF="t1_OI")
IS1378 = x3d.IS()
connect1379 = x3d.connect()
connect1379.nodeField = "key"
connect1379.protoField = "t1_key"

IS1378.connect.append(connect1379)
connect1380 = x3d.connect()
connect1380.nodeField = "keyValue"
connect1380.protoField = "t1_keyValue"

IS1378.connect.append(connect1380)
connect1381 = x3d.connect()
connect1381.nodeField = "value_changed"
connect1381.protoField = "t1_changed"

IS1378.connect.append(connect1381)

OrientationInterpolator1377.IS = IS1378

ProtoBody600.children.append(OrientationInterpolator1377)
OrientationInterpolator1382 = x3d.OrientationInterpolator(DEF="t2_OI")
IS1383 = x3d.IS()
connect1384 = x3d.connect()
connect1384.nodeField = "key"
connect1384.protoField = "t2_key"

IS1383.connect.append(connect1384)
connect1385 = x3d.connect()
connect1385.nodeField = "keyValue"
connect1385.protoField = "t2_keyValue"

IS1383.connect.append(connect1385)
connect1386 = x3d.connect()
connect1386.nodeField = "value_changed"
connect1386.protoField = "t2_changed"

IS1383.connect.append(connect1386)

OrientationInterpolator1382.IS = IS1383

ProtoBody600.children.append(OrientationInterpolator1382)
OrientationInterpolator1387 = x3d.OrientationInterpolator(DEF="t3_OI")
IS1388 = x3d.IS()
connect1389 = x3d.connect()
connect1389.nodeField = "key"
connect1389.protoField = "t3_key"

IS1388.connect.append(connect1389)
connect1390 = x3d.connect()
connect1390.nodeField = "keyValue"
connect1390.protoField = "t3_keyValue"

IS1388.connect.append(connect1390)
connect1391 = x3d.connect()
connect1391.nodeField = "value_changed"
connect1391.protoField = "t3_changed"

IS1388.connect.append(connect1391)

OrientationInterpolator1387.IS = IS1388

ProtoBody600.children.append(OrientationInterpolator1387)
OrientationInterpolator1392 = x3d.OrientationInterpolator(DEF="t4_OI")
IS1393 = x3d.IS()
connect1394 = x3d.connect()
connect1394.nodeField = "key"
connect1394.protoField = "t4_key"

IS1393.connect.append(connect1394)
connect1395 = x3d.connect()
connect1395.nodeField = "keyValue"
connect1395.protoField = "t4_keyValue"

IS1393.connect.append(connect1395)
connect1396 = x3d.connect()
connect1396.nodeField = "value_changed"
connect1396.protoField = "t4_changed"

IS1393.connect.append(connect1396)

OrientationInterpolator1392.IS = IS1393

ProtoBody600.children.append(OrientationInterpolator1392)
OrientationInterpolator1397 = x3d.OrientationInterpolator(DEF="t5_OI")
IS1398 = x3d.IS()
connect1399 = x3d.connect()
connect1399.nodeField = "key"
connect1399.protoField = "t5_key"

IS1398.connect.append(connect1399)
connect1400 = x3d.connect()
connect1400.nodeField = "keyValue"
connect1400.protoField = "t5_keyValue"

IS1398.connect.append(connect1400)
connect1401 = x3d.connect()
connect1401.nodeField = "value_changed"
connect1401.protoField = "t5_changed"

IS1398.connect.append(connect1401)

OrientationInterpolator1397.IS = IS1398

ProtoBody600.children.append(OrientationInterpolator1397)
OrientationInterpolator1402 = x3d.OrientationInterpolator(DEF="t6_OI")
IS1403 = x3d.IS()
connect1404 = x3d.connect()
connect1404.nodeField = "key"
connect1404.protoField = "t6_key"

IS1403.connect.append(connect1404)
connect1405 = x3d.connect()
connect1405.nodeField = "keyValue"
connect1405.protoField = "t6_keyValue"

IS1403.connect.append(connect1405)
connect1406 = x3d.connect()
connect1406.nodeField = "value_changed"
connect1406.protoField = "t6_changed"

IS1403.connect.append(connect1406)

OrientationInterpolator1402.IS = IS1403

ProtoBody600.children.append(OrientationInterpolator1402)
OrientationInterpolator1407 = x3d.OrientationInterpolator(DEF="t7_OI")
IS1408 = x3d.IS()
connect1409 = x3d.connect()
connect1409.nodeField = "key"
connect1409.protoField = "t7_key"

IS1408.connect.append(connect1409)
connect1410 = x3d.connect()
connect1410.nodeField = "keyValue"
connect1410.protoField = "t7_keyValue"

IS1408.connect.append(connect1410)
connect1411 = x3d.connect()
connect1411.nodeField = "value_changed"
connect1411.protoField = "t7_changed"

IS1408.connect.append(connect1411)

OrientationInterpolator1407.IS = IS1408

ProtoBody600.children.append(OrientationInterpolator1407)
OrientationInterpolator1412 = x3d.OrientationInterpolator(DEF="t8_OI")
IS1413 = x3d.IS()
connect1414 = x3d.connect()
connect1414.nodeField = "key"
connect1414.protoField = "t8_key"

IS1413.connect.append(connect1414)
connect1415 = x3d.connect()
connect1415.nodeField = "keyValue"
connect1415.protoField = "t8_keyValue"

IS1413.connect.append(connect1415)
connect1416 = x3d.connect()
connect1416.nodeField = "value_changed"
connect1416.protoField = "t8_changed"

IS1413.connect.append(connect1416)

OrientationInterpolator1412.IS = IS1413

ProtoBody600.children.append(OrientationInterpolator1412)
OrientationInterpolator1417 = x3d.OrientationInterpolator(DEF="t9_OI")
IS1418 = x3d.IS()
connect1419 = x3d.connect()
connect1419.nodeField = "key"
connect1419.protoField = "t9_key"

IS1418.connect.append(connect1419)
connect1420 = x3d.connect()
connect1420.nodeField = "keyValue"
connect1420.protoField = "t9_keyValue"

IS1418.connect.append(connect1420)
connect1421 = x3d.connect()
connect1421.nodeField = "value_changed"
connect1421.protoField = "t9_changed"

IS1418.connect.append(connect1421)

OrientationInterpolator1417.IS = IS1418

ProtoBody600.children.append(OrientationInterpolator1417)
OrientationInterpolator1422 = x3d.OrientationInterpolator(DEF="t10_OI")
IS1423 = x3d.IS()
connect1424 = x3d.connect()
connect1424.nodeField = "key"
connect1424.protoField = "t10_key"

IS1423.connect.append(connect1424)
connect1425 = x3d.connect()
connect1425.nodeField = "keyValue"
connect1425.protoField = "t10_keyValue"

IS1423.connect.append(connect1425)
connect1426 = x3d.connect()
connect1426.nodeField = "value_changed"
connect1426.protoField = "t10_changed"

IS1423.connect.append(connect1426)

OrientationInterpolator1422.IS = IS1423

ProtoBody600.children.append(OrientationInterpolator1422)
OrientationInterpolator1427 = x3d.OrientationInterpolator(DEF="t11_OI")
IS1428 = x3d.IS()
connect1429 = x3d.connect()
connect1429.nodeField = "key"
connect1429.protoField = "t11_key"

IS1428.connect.append(connect1429)
connect1430 = x3d.connect()
connect1430.nodeField = "keyValue"
connect1430.protoField = "t11_keyValue"

IS1428.connect.append(connect1430)
connect1431 = x3d.connect()
connect1431.nodeField = "value_changed"
connect1431.protoField = "t11_changed"

IS1428.connect.append(connect1431)

OrientationInterpolator1427.IS = IS1428

ProtoBody600.children.append(OrientationInterpolator1427)
OrientationInterpolator1432 = x3d.OrientationInterpolator(DEF="t12_OI")
IS1433 = x3d.IS()
connect1434 = x3d.connect()
connect1434.nodeField = "key"
connect1434.protoField = "t12_key"

IS1433.connect.append(connect1434)
connect1435 = x3d.connect()
connect1435.nodeField = "keyValue"
connect1435.protoField = "t12_keyValue"

IS1433.connect.append(connect1435)
connect1436 = x3d.connect()
connect1436.nodeField = "value_changed"
connect1436.protoField = "t12_changed"

IS1433.connect.append(connect1436)

OrientationInterpolator1432.IS = IS1433

ProtoBody600.children.append(OrientationInterpolator1432)
OrientationInterpolator1437 = x3d.OrientationInterpolator(DEF="temporomandibular_OI")
IS1438 = x3d.IS()
connect1439 = x3d.connect()
connect1439.nodeField = "key"
connect1439.protoField = "temporomandibular_key"

IS1438.connect.append(connect1439)
connect1440 = x3d.connect()
connect1440.nodeField = "keyValue"
connect1440.protoField = "temporomandibular_keyValue"

IS1438.connect.append(connect1440)
connect1441 = x3d.connect()
connect1441.nodeField = "value_changed"
connect1441.protoField = "temporomandibular_changed"

IS1438.connect.append(connect1441)

OrientationInterpolator1437.IS = IS1438

ProtoBody600.children.append(OrientationInterpolator1437)
OrientationInterpolator1442 = x3d.OrientationInterpolator(DEF="vc1_OI")
IS1443 = x3d.IS()
connect1444 = x3d.connect()
connect1444.nodeField = "key"
connect1444.protoField = "vc1_key"

IS1443.connect.append(connect1444)
connect1445 = x3d.connect()
connect1445.nodeField = "keyValue"
connect1445.protoField = "vc1_keyValue"

IS1443.connect.append(connect1445)
connect1446 = x3d.connect()
connect1446.nodeField = "value_changed"
connect1446.protoField = "vc1_changed"

IS1443.connect.append(connect1446)

OrientationInterpolator1442.IS = IS1443

ProtoBody600.children.append(OrientationInterpolator1442)
OrientationInterpolator1447 = x3d.OrientationInterpolator(DEF="vc2_OI")
IS1448 = x3d.IS()
connect1449 = x3d.connect()
connect1449.nodeField = "key"
connect1449.protoField = "vc2_key"

IS1448.connect.append(connect1449)
connect1450 = x3d.connect()
connect1450.nodeField = "keyValue"
connect1450.protoField = "vc2_keyValue"

IS1448.connect.append(connect1450)
connect1451 = x3d.connect()
connect1451.nodeField = "value_changed"
connect1451.protoField = "vc2_changed"

IS1448.connect.append(connect1451)

OrientationInterpolator1447.IS = IS1448

ProtoBody600.children.append(OrientationInterpolator1447)
OrientationInterpolator1452 = x3d.OrientationInterpolator(DEF="vc3_OI")
IS1453 = x3d.IS()
connect1454 = x3d.connect()
connect1454.nodeField = "key"
connect1454.protoField = "vc3_key"

IS1453.connect.append(connect1454)
connect1455 = x3d.connect()
connect1455.nodeField = "keyValue"
connect1455.protoField = "vc3_keyValue"

IS1453.connect.append(connect1455)
connect1456 = x3d.connect()
connect1456.nodeField = "value_changed"
connect1456.protoField = "vc3_changed"

IS1453.connect.append(connect1456)

OrientationInterpolator1452.IS = IS1453

ProtoBody600.children.append(OrientationInterpolator1452)
OrientationInterpolator1457 = x3d.OrientationInterpolator(DEF="vc4_OI")
IS1458 = x3d.IS()
connect1459 = x3d.connect()
connect1459.nodeField = "key"
connect1459.protoField = "vc4_key"

IS1458.connect.append(connect1459)
connect1460 = x3d.connect()
connect1460.nodeField = "keyValue"
connect1460.protoField = "vc4_keyValue"

IS1458.connect.append(connect1460)
connect1461 = x3d.connect()
connect1461.nodeField = "value_changed"
connect1461.protoField = "vc4_changed"

IS1458.connect.append(connect1461)

OrientationInterpolator1457.IS = IS1458

ProtoBody600.children.append(OrientationInterpolator1457)
OrientationInterpolator1462 = x3d.OrientationInterpolator(DEF="vc5_OI")
IS1463 = x3d.IS()
connect1464 = x3d.connect()
connect1464.nodeField = "key"
connect1464.protoField = "vc5_key"

IS1463.connect.append(connect1464)
connect1465 = x3d.connect()
connect1465.nodeField = "keyValue"
connect1465.protoField = "vc5_keyValue"

IS1463.connect.append(connect1465)
connect1466 = x3d.connect()
connect1466.nodeField = "value_changed"
connect1466.protoField = "vc5_changed"

IS1463.connect.append(connect1466)

OrientationInterpolator1462.IS = IS1463

ProtoBody600.children.append(OrientationInterpolator1462)
OrientationInterpolator1467 = x3d.OrientationInterpolator(DEF="vc6_OI")
IS1468 = x3d.IS()
connect1469 = x3d.connect()
connect1469.nodeField = "key"
connect1469.protoField = "vc6_key"

IS1468.connect.append(connect1469)
connect1470 = x3d.connect()
connect1470.nodeField = "keyValue"
connect1470.protoField = "vc6_keyValue"

IS1468.connect.append(connect1470)
connect1471 = x3d.connect()
connect1471.nodeField = "value_changed"
connect1471.protoField = "vc6_changed"

IS1468.connect.append(connect1471)

OrientationInterpolator1467.IS = IS1468

ProtoBody600.children.append(OrientationInterpolator1467)
OrientationInterpolator1472 = x3d.OrientationInterpolator(DEF="vc7_OI")
IS1473 = x3d.IS()
connect1474 = x3d.connect()
connect1474.nodeField = "key"
connect1474.protoField = "vc7_key"

IS1473.connect.append(connect1474)
connect1475 = x3d.connect()
connect1475.nodeField = "keyValue"
connect1475.protoField = "vc7_keyValue"

IS1473.connect.append(connect1475)
connect1476 = x3d.connect()
connect1476.nodeField = "value_changed"
connect1476.protoField = "vc7_changed"

IS1473.connect.append(connect1476)

OrientationInterpolator1472.IS = IS1473

ProtoBody600.children.append(OrientationInterpolator1472)
OrientationInterpolator1477 = x3d.OrientationInterpolator(DEF="vl1_OI")
IS1478 = x3d.IS()
connect1479 = x3d.connect()
connect1479.nodeField = "key"
connect1479.protoField = "vl1_key"

IS1478.connect.append(connect1479)
connect1480 = x3d.connect()
connect1480.nodeField = "keyValue"
connect1480.protoField = "vl1_keyValue"

IS1478.connect.append(connect1480)
connect1481 = x3d.connect()
connect1481.nodeField = "value_changed"
connect1481.protoField = "vl1_changed"

IS1478.connect.append(connect1481)

OrientationInterpolator1477.IS = IS1478

ProtoBody600.children.append(OrientationInterpolator1477)
OrientationInterpolator1482 = x3d.OrientationInterpolator(DEF="vl2_OI")
IS1483 = x3d.IS()
connect1484 = x3d.connect()
connect1484.nodeField = "key"
connect1484.protoField = "vl2_key"

IS1483.connect.append(connect1484)
connect1485 = x3d.connect()
connect1485.nodeField = "keyValue"
connect1485.protoField = "vl2_keyValue"

IS1483.connect.append(connect1485)
connect1486 = x3d.connect()
connect1486.nodeField = "value_changed"
connect1486.protoField = "vl2_changed"

IS1483.connect.append(connect1486)

OrientationInterpolator1482.IS = IS1483

ProtoBody600.children.append(OrientationInterpolator1482)
OrientationInterpolator1487 = x3d.OrientationInterpolator(DEF="vl3_OI")
IS1488 = x3d.IS()
connect1489 = x3d.connect()
connect1489.nodeField = "key"
connect1489.protoField = "vl3_key"

IS1488.connect.append(connect1489)
connect1490 = x3d.connect()
connect1490.nodeField = "keyValue"
connect1490.protoField = "vl3_keyValue"

IS1488.connect.append(connect1490)
connect1491 = x3d.connect()
connect1491.nodeField = "value_changed"
connect1491.protoField = "vl3_changed"

IS1488.connect.append(connect1491)

OrientationInterpolator1487.IS = IS1488

ProtoBody600.children.append(OrientationInterpolator1487)
OrientationInterpolator1492 = x3d.OrientationInterpolator(DEF="vl4_OI")
IS1493 = x3d.IS()
connect1494 = x3d.connect()
connect1494.nodeField = "key"
connect1494.protoField = "vl4_key"

IS1493.connect.append(connect1494)
connect1495 = x3d.connect()
connect1495.nodeField = "keyValue"
connect1495.protoField = "vl4_keyValue"

IS1493.connect.append(connect1495)
connect1496 = x3d.connect()
connect1496.nodeField = "value_changed"
connect1496.protoField = "vl4_changed"

IS1493.connect.append(connect1496)

OrientationInterpolator1492.IS = IS1493

ProtoBody600.children.append(OrientationInterpolator1492)
OrientationInterpolator1497 = x3d.OrientationInterpolator(DEF="vl5_OI")
IS1498 = x3d.IS()
connect1499 = x3d.connect()
connect1499.nodeField = "key"
connect1499.protoField = "vl5_key"

IS1498.connect.append(connect1499)
connect1500 = x3d.connect()
connect1500.nodeField = "keyValue"
connect1500.protoField = "vl5_keyValue"

IS1498.connect.append(connect1500)
connect1501 = x3d.connect()
connect1501.nodeField = "value_changed"
connect1501.protoField = "vl5_changed"

IS1498.connect.append(connect1501)

OrientationInterpolator1497.IS = IS1498

ProtoBody600.children.append(OrientationInterpolator1497)
OrientationInterpolator1502 = x3d.OrientationInterpolator(DEF="vt1_OI")
IS1503 = x3d.IS()
connect1504 = x3d.connect()
connect1504.nodeField = "key"
connect1504.protoField = "vt1_key"

IS1503.connect.append(connect1504)
connect1505 = x3d.connect()
connect1505.nodeField = "keyValue"
connect1505.protoField = "vt1_keyValue"

IS1503.connect.append(connect1505)
connect1506 = x3d.connect()
connect1506.nodeField = "value_changed"
connect1506.protoField = "vt1_changed"

IS1503.connect.append(connect1506)

OrientationInterpolator1502.IS = IS1503

ProtoBody600.children.append(OrientationInterpolator1502)
OrientationInterpolator1507 = x3d.OrientationInterpolator(DEF="vt2_OI")
IS1508 = x3d.IS()
connect1509 = x3d.connect()
connect1509.nodeField = "key"
connect1509.protoField = "vt2_key"

IS1508.connect.append(connect1509)
connect1510 = x3d.connect()
connect1510.nodeField = "keyValue"
connect1510.protoField = "vt2_keyValue"

IS1508.connect.append(connect1510)
connect1511 = x3d.connect()
connect1511.nodeField = "value_changed"
connect1511.protoField = "vt2_changed"

IS1508.connect.append(connect1511)

OrientationInterpolator1507.IS = IS1508

ProtoBody600.children.append(OrientationInterpolator1507)
OrientationInterpolator1512 = x3d.OrientationInterpolator(DEF="vt3_OI")
IS1513 = x3d.IS()
connect1514 = x3d.connect()
connect1514.nodeField = "key"
connect1514.protoField = "vt3_key"

IS1513.connect.append(connect1514)
connect1515 = x3d.connect()
connect1515.nodeField = "keyValue"
connect1515.protoField = "vt3_keyValue"

IS1513.connect.append(connect1515)
connect1516 = x3d.connect()
connect1516.nodeField = "value_changed"
connect1516.protoField = "vt3_changed"

IS1513.connect.append(connect1516)

OrientationInterpolator1512.IS = IS1513

ProtoBody600.children.append(OrientationInterpolator1512)
OrientationInterpolator1517 = x3d.OrientationInterpolator(DEF="vt4_OI")
IS1518 = x3d.IS()
connect1519 = x3d.connect()
connect1519.nodeField = "key"
connect1519.protoField = "vt4_key"

IS1518.connect.append(connect1519)
connect1520 = x3d.connect()
connect1520.nodeField = "keyValue"
connect1520.protoField = "vt4_keyValue"

IS1518.connect.append(connect1520)
connect1521 = x3d.connect()
connect1521.nodeField = "value_changed"
connect1521.protoField = "vt4_changed"

IS1518.connect.append(connect1521)

OrientationInterpolator1517.IS = IS1518

ProtoBody600.children.append(OrientationInterpolator1517)
OrientationInterpolator1522 = x3d.OrientationInterpolator(DEF="vt5_OI")
IS1523 = x3d.IS()
connect1524 = x3d.connect()
connect1524.nodeField = "key"
connect1524.protoField = "vt5_key"

IS1523.connect.append(connect1524)
connect1525 = x3d.connect()
connect1525.nodeField = "keyValue"
connect1525.protoField = "vt5_keyValue"

IS1523.connect.append(connect1525)
connect1526 = x3d.connect()
connect1526.nodeField = "value_changed"
connect1526.protoField = "vt5_changed"

IS1523.connect.append(connect1526)

OrientationInterpolator1522.IS = IS1523

ProtoBody600.children.append(OrientationInterpolator1522)
OrientationInterpolator1527 = x3d.OrientationInterpolator(DEF="vt6_OI")
IS1528 = x3d.IS()
connect1529 = x3d.connect()
connect1529.nodeField = "key"
connect1529.protoField = "vt6_key"

IS1528.connect.append(connect1529)
connect1530 = x3d.connect()
connect1530.nodeField = "keyValue"
connect1530.protoField = "vt6_keyValue"

IS1528.connect.append(connect1530)
connect1531 = x3d.connect()
connect1531.nodeField = "value_changed"
connect1531.protoField = "vt6_changed"

IS1528.connect.append(connect1531)

OrientationInterpolator1527.IS = IS1528

ProtoBody600.children.append(OrientationInterpolator1527)
OrientationInterpolator1532 = x3d.OrientationInterpolator(DEF="vt7_OI")
IS1533 = x3d.IS()
connect1534 = x3d.connect()
connect1534.nodeField = "key"
connect1534.protoField = "vt7_key"

IS1533.connect.append(connect1534)
connect1535 = x3d.connect()
connect1535.nodeField = "keyValue"
connect1535.protoField = "vt7_keyValue"

IS1533.connect.append(connect1535)
connect1536 = x3d.connect()
connect1536.nodeField = "value_changed"
connect1536.protoField = "vt7_changed"

IS1533.connect.append(connect1536)

OrientationInterpolator1532.IS = IS1533

ProtoBody600.children.append(OrientationInterpolator1532)
OrientationInterpolator1537 = x3d.OrientationInterpolator(DEF="vt8_OI")
IS1538 = x3d.IS()
connect1539 = x3d.connect()
connect1539.nodeField = "key"
connect1539.protoField = "vt8_key"

IS1538.connect.append(connect1539)
connect1540 = x3d.connect()
connect1540.nodeField = "keyValue"
connect1540.protoField = "vt8_keyValue"

IS1538.connect.append(connect1540)
connect1541 = x3d.connect()
connect1541.nodeField = "value_changed"
connect1541.protoField = "vt8_changed"

IS1538.connect.append(connect1541)

OrientationInterpolator1537.IS = IS1538

ProtoBody600.children.append(OrientationInterpolator1537)
OrientationInterpolator1542 = x3d.OrientationInterpolator(DEF="vt9_OI")
IS1543 = x3d.IS()
connect1544 = x3d.connect()
connect1544.nodeField = "key"
connect1544.protoField = "vt9_key"

IS1543.connect.append(connect1544)
connect1545 = x3d.connect()
connect1545.nodeField = "keyValue"
connect1545.protoField = "vt9_keyValue"

IS1543.connect.append(connect1545)
connect1546 = x3d.connect()
connect1546.nodeField = "value_changed"
connect1546.protoField = "vt9_changed"

IS1543.connect.append(connect1546)

OrientationInterpolator1542.IS = IS1543

ProtoBody600.children.append(OrientationInterpolator1542)
OrientationInterpolator1547 = x3d.OrientationInterpolator(DEF="vt10_OI")
IS1548 = x3d.IS()
connect1549 = x3d.connect()
connect1549.nodeField = "key"
connect1549.protoField = "vt10_key"

IS1548.connect.append(connect1549)
connect1550 = x3d.connect()
connect1550.nodeField = "keyValue"
connect1550.protoField = "vt10_keyValue"

IS1548.connect.append(connect1550)
connect1551 = x3d.connect()
connect1551.nodeField = "value_changed"
connect1551.protoField = "vt10_changed"

IS1548.connect.append(connect1551)

OrientationInterpolator1547.IS = IS1548

ProtoBody600.children.append(OrientationInterpolator1547)
OrientationInterpolator1552 = x3d.OrientationInterpolator(DEF="vt11_OI")
IS1553 = x3d.IS()
connect1554 = x3d.connect()
connect1554.nodeField = "key"
connect1554.protoField = "vt11_key"

IS1553.connect.append(connect1554)
connect1555 = x3d.connect()
connect1555.nodeField = "keyValue"
connect1555.protoField = "vt11_keyValue"

IS1553.connect.append(connect1555)
connect1556 = x3d.connect()
connect1556.nodeField = "value_changed"
connect1556.protoField = "vt11_changed"

IS1553.connect.append(connect1556)

OrientationInterpolator1552.IS = IS1553

ProtoBody600.children.append(OrientationInterpolator1552)
OrientationInterpolator1557 = x3d.OrientationInterpolator(DEF="vt12_OI")
IS1558 = x3d.IS()
connect1559 = x3d.connect()
connect1559.nodeField = "key"
connect1559.protoField = "vt12_key"

IS1558.connect.append(connect1559)
connect1560 = x3d.connect()
connect1560.nodeField = "keyValue"
connect1560.protoField = "vt12_keyValue"

IS1558.connect.append(connect1560)
connect1561 = x3d.connect()
connect1561.nodeField = "value_changed"
connect1561.protoField = "vt12_changed"

IS1558.connect.append(connect1561)

OrientationInterpolator1557.IS = IS1558

ProtoBody600.children.append(OrientationInterpolator1557)
ROUTE1562 = x3d.ROUTE()
ROUTE1562.fromNode = "BehaviorClock"
ROUTE1562.fromField = "fraction_changed"
ROUTE1562.toNode = "HumanoidRootPI"
ROUTE1562.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1562)
ROUTE1563 = x3d.ROUTE()
ROUTE1563.fromNode = "BehaviorClock"
ROUTE1563.fromField = "fraction_changed"
ROUTE1563.toNode = "HumanoidRootOI"
ROUTE1563.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1563)
ROUTE1564 = x3d.ROUTE()
ROUTE1564.fromNode = "BehaviorClock"
ROUTE1564.fromField = "fraction_changed"
ROUTE1564.toNode = "c1_OI"
ROUTE1564.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1564)
ROUTE1565 = x3d.ROUTE()
ROUTE1565.fromNode = "BehaviorClock"
ROUTE1565.fromField = "fraction_changed"
ROUTE1565.toNode = "c2_OI"
ROUTE1565.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1565)
ROUTE1566 = x3d.ROUTE()
ROUTE1566.fromNode = "BehaviorClock"
ROUTE1566.fromField = "fraction_changed"
ROUTE1566.toNode = "c3_OI"
ROUTE1566.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1566)
ROUTE1567 = x3d.ROUTE()
ROUTE1567.fromNode = "BehaviorClock"
ROUTE1567.fromField = "fraction_changed"
ROUTE1567.toNode = "c4_OI"
ROUTE1567.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1567)
ROUTE1568 = x3d.ROUTE()
ROUTE1568.fromNode = "BehaviorClock"
ROUTE1568.fromField = "fraction_changed"
ROUTE1568.toNode = "c5_OI"
ROUTE1568.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1568)
ROUTE1569 = x3d.ROUTE()
ROUTE1569.fromNode = "BehaviorClock"
ROUTE1569.fromField = "fraction_changed"
ROUTE1569.toNode = "c6_OI"
ROUTE1569.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1569)
ROUTE1570 = x3d.ROUTE()
ROUTE1570.fromNode = "BehaviorClock"
ROUTE1570.fromField = "fraction_changed"
ROUTE1570.toNode = "c7_OI"
ROUTE1570.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1570)
ROUTE1571 = x3d.ROUTE()
ROUTE1571.fromNode = "BehaviorClock"
ROUTE1571.fromField = "fraction_changed"
ROUTE1571.toNode = "jaw_OI"
ROUTE1571.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1571)
ROUTE1572 = x3d.ROUTE()
ROUTE1572.fromNode = "BehaviorClock"
ROUTE1572.fromField = "fraction_changed"
ROUTE1572.toNode = "l1_OI"
ROUTE1572.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1572)
ROUTE1573 = x3d.ROUTE()
ROUTE1573.fromNode = "BehaviorClock"
ROUTE1573.fromField = "fraction_changed"
ROUTE1573.toNode = "l2_OI"
ROUTE1573.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1573)
ROUTE1574 = x3d.ROUTE()
ROUTE1574.fromNode = "BehaviorClock"
ROUTE1574.fromField = "fraction_changed"
ROUTE1574.toNode = "l3_OI"
ROUTE1574.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1574)
ROUTE1575 = x3d.ROUTE()
ROUTE1575.fromNode = "BehaviorClock"
ROUTE1575.fromField = "fraction_changed"
ROUTE1575.toNode = "l4_OI"
ROUTE1575.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1575)
ROUTE1576 = x3d.ROUTE()
ROUTE1576.fromNode = "BehaviorClock"
ROUTE1576.fromField = "fraction_changed"
ROUTE1576.toNode = "l5_OI"
ROUTE1576.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1576)
ROUTE1577 = x3d.ROUTE()
ROUTE1577.fromNode = "BehaviorClock"
ROUTE1577.fromField = "fraction_changed"
ROUTE1577.toNode = "l_acromioclavicular_OI"
ROUTE1577.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1577)
ROUTE1578 = x3d.ROUTE()
ROUTE1578.fromNode = "BehaviorClock"
ROUTE1578.fromField = "fraction_changed"
ROUTE1578.toNode = "l_ankle_OI"
ROUTE1578.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1578)
ROUTE1579 = x3d.ROUTE()
ROUTE1579.fromNode = "BehaviorClock"
ROUTE1579.fromField = "fraction_changed"
ROUTE1579.toNode = "l_calf_OI"
ROUTE1579.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1579)
ROUTE1580 = x3d.ROUTE()
ROUTE1580.fromNode = "BehaviorClock"
ROUTE1580.fromField = "fraction_changed"
ROUTE1580.toNode = "l_clavicle_OI"
ROUTE1580.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1580)
ROUTE1581 = x3d.ROUTE()
ROUTE1581.fromNode = "BehaviorClock"
ROUTE1581.fromField = "fraction_changed"
ROUTE1581.toNode = "l_elbow_OI"
ROUTE1581.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1581)
ROUTE1582 = x3d.ROUTE()
ROUTE1582.fromNode = "BehaviorClock"
ROUTE1582.fromField = "fraction_changed"
ROUTE1582.toNode = "l_eyeball_OI"
ROUTE1582.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1582)
ROUTE1583 = x3d.ROUTE()
ROUTE1583.fromNode = "BehaviorClock"
ROUTE1583.fromField = "fraction_changed"
ROUTE1583.toNode = "l_eyeball_joint_OI"
ROUTE1583.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1583)
ROUTE1584 = x3d.ROUTE()
ROUTE1584.fromNode = "BehaviorClock"
ROUTE1584.fromField = "fraction_changed"
ROUTE1584.toNode = "l_eyebrow_OI"
ROUTE1584.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1584)
ROUTE1585 = x3d.ROUTE()
ROUTE1585.fromNode = "BehaviorClock"
ROUTE1585.fromField = "fraction_changed"
ROUTE1585.toNode = "l_eyebrow_joint_OI"
ROUTE1585.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1585)
ROUTE1586 = x3d.ROUTE()
ROUTE1586.fromNode = "BehaviorClock"
ROUTE1586.fromField = "fraction_changed"
ROUTE1586.toNode = "l_eyelid_OI"
ROUTE1586.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1586)
ROUTE1587 = x3d.ROUTE()
ROUTE1587.fromNode = "BehaviorClock"
ROUTE1587.fromField = "fraction_changed"
ROUTE1587.toNode = "l_eyelid_joint_OI"
ROUTE1587.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1587)
ROUTE1588 = x3d.ROUTE()
ROUTE1588.fromNode = "BehaviorClock"
ROUTE1588.fromField = "fraction_changed"
ROUTE1588.toNode = "l_forearm_OI"
ROUTE1588.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1588)
ROUTE1589 = x3d.ROUTE()
ROUTE1589.fromNode = "BehaviorClock"
ROUTE1589.fromField = "fraction_changed"
ROUTE1589.toNode = "l_forefoot_OI"
ROUTE1589.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1589)
ROUTE1590 = x3d.ROUTE()
ROUTE1590.fromNode = "BehaviorClock"
ROUTE1590.fromField = "fraction_changed"
ROUTE1590.toNode = "l_hand_OI"
ROUTE1590.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1590)
ROUTE1591 = x3d.ROUTE()
ROUTE1591.fromNode = "BehaviorClock"
ROUTE1591.fromField = "fraction_changed"
ROUTE1591.toNode = "l_hindfoot_OI"
ROUTE1591.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1591)
ROUTE1592 = x3d.ROUTE()
ROUTE1592.fromNode = "BehaviorClock"
ROUTE1592.fromField = "fraction_changed"
ROUTE1592.toNode = "l_hip_OI"
ROUTE1592.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1592)
ROUTE1593 = x3d.ROUTE()
ROUTE1593.fromNode = "BehaviorClock"
ROUTE1593.fromField = "fraction_changed"
ROUTE1593.toNode = "l_index0_OI"
ROUTE1593.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1593)
ROUTE1594 = x3d.ROUTE()
ROUTE1594.fromNode = "BehaviorClock"
ROUTE1594.fromField = "fraction_changed"
ROUTE1594.toNode = "l_index1_OI"
ROUTE1594.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1594)
ROUTE1595 = x3d.ROUTE()
ROUTE1595.fromNode = "BehaviorClock"
ROUTE1595.fromField = "fraction_changed"
ROUTE1595.toNode = "l_index2_OI"
ROUTE1595.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1595)
ROUTE1596 = x3d.ROUTE()
ROUTE1596.fromNode = "BehaviorClock"
ROUTE1596.fromField = "fraction_changed"
ROUTE1596.toNode = "l_index3_OI"
ROUTE1596.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1596)
ROUTE1597 = x3d.ROUTE()
ROUTE1597.fromNode = "BehaviorClock"
ROUTE1597.fromField = "fraction_changed"
ROUTE1597.toNode = "l_index_distal_OI"
ROUTE1597.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1597)
ROUTE1598 = x3d.ROUTE()
ROUTE1598.fromNode = "BehaviorClock"
ROUTE1598.fromField = "fraction_changed"
ROUTE1598.toNode = "l_index_metacarpal_OI"
ROUTE1598.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1598)
ROUTE1599 = x3d.ROUTE()
ROUTE1599.fromNode = "BehaviorClock"
ROUTE1599.fromField = "fraction_changed"
ROUTE1599.toNode = "l_index_middle_OI"
ROUTE1599.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1599)
ROUTE1600 = x3d.ROUTE()
ROUTE1600.fromNode = "BehaviorClock"
ROUTE1600.fromField = "fraction_changed"
ROUTE1600.toNode = "l_index_proximal_OI"
ROUTE1600.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1600)
ROUTE1601 = x3d.ROUTE()
ROUTE1601.fromNode = "BehaviorClock"
ROUTE1601.fromField = "fraction_changed"
ROUTE1601.toNode = "l_knee_OI"
ROUTE1601.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1601)
ROUTE1602 = x3d.ROUTE()
ROUTE1602.fromNode = "BehaviorClock"
ROUTE1602.fromField = "fraction_changed"
ROUTE1602.toNode = "l_metatarsal_OI"
ROUTE1602.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1602)
ROUTE1603 = x3d.ROUTE()
ROUTE1603.fromNode = "BehaviorClock"
ROUTE1603.fromField = "fraction_changed"
ROUTE1603.toNode = "l_middistal_OI"
ROUTE1603.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1603)
ROUTE1604 = x3d.ROUTE()
ROUTE1604.fromNode = "BehaviorClock"
ROUTE1604.fromField = "fraction_changed"
ROUTE1604.toNode = "l_middle0_OI"
ROUTE1604.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1604)
ROUTE1605 = x3d.ROUTE()
ROUTE1605.fromNode = "BehaviorClock"
ROUTE1605.fromField = "fraction_changed"
ROUTE1605.toNode = "l_middle1_OI"
ROUTE1605.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1605)
ROUTE1606 = x3d.ROUTE()
ROUTE1606.fromNode = "BehaviorClock"
ROUTE1606.fromField = "fraction_changed"
ROUTE1606.toNode = "l_middle2_OI"
ROUTE1606.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1606)
ROUTE1607 = x3d.ROUTE()
ROUTE1607.fromNode = "BehaviorClock"
ROUTE1607.fromField = "fraction_changed"
ROUTE1607.toNode = "l_middle3_OI"
ROUTE1607.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1607)
ROUTE1608 = x3d.ROUTE()
ROUTE1608.fromNode = "BehaviorClock"
ROUTE1608.fromField = "fraction_changed"
ROUTE1608.toNode = "l_middle_distal_OI"
ROUTE1608.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1608)
ROUTE1609 = x3d.ROUTE()
ROUTE1609.fromNode = "BehaviorClock"
ROUTE1609.fromField = "fraction_changed"
ROUTE1609.toNode = "l_middle_metacarpal_OI"
ROUTE1609.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1609)
ROUTE1610 = x3d.ROUTE()
ROUTE1610.fromNode = "BehaviorClock"
ROUTE1610.fromField = "fraction_changed"
ROUTE1610.toNode = "l_middle_middle_OI"
ROUTE1610.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1610)
ROUTE1611 = x3d.ROUTE()
ROUTE1611.fromNode = "BehaviorClock"
ROUTE1611.fromField = "fraction_changed"
ROUTE1611.toNode = "l_middle_proximal_OI"
ROUTE1611.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1611)
ROUTE1612 = x3d.ROUTE()
ROUTE1612.fromNode = "BehaviorClock"
ROUTE1612.fromField = "fraction_changed"
ROUTE1612.toNode = "l_midproximal_OI"
ROUTE1612.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1612)
ROUTE1613 = x3d.ROUTE()
ROUTE1613.fromNode = "BehaviorClock"
ROUTE1613.fromField = "fraction_changed"
ROUTE1613.toNode = "l_midtarsal_OI"
ROUTE1613.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1613)
ROUTE1614 = x3d.ROUTE()
ROUTE1614.fromNode = "BehaviorClock"
ROUTE1614.fromField = "fraction_changed"
ROUTE1614.toNode = "l_pinky0_OI"
ROUTE1614.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1614)
ROUTE1615 = x3d.ROUTE()
ROUTE1615.fromNode = "BehaviorClock"
ROUTE1615.fromField = "fraction_changed"
ROUTE1615.toNode = "l_pinky1_OI"
ROUTE1615.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1615)
ROUTE1616 = x3d.ROUTE()
ROUTE1616.fromNode = "BehaviorClock"
ROUTE1616.fromField = "fraction_changed"
ROUTE1616.toNode = "l_pinky2_OI"
ROUTE1616.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1616)
ROUTE1617 = x3d.ROUTE()
ROUTE1617.fromNode = "BehaviorClock"
ROUTE1617.fromField = "fraction_changed"
ROUTE1617.toNode = "l_pinky3_OI"
ROUTE1617.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1617)
ROUTE1618 = x3d.ROUTE()
ROUTE1618.fromNode = "BehaviorClock"
ROUTE1618.fromField = "fraction_changed"
ROUTE1618.toNode = "l_pinky_distal_OI"
ROUTE1618.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1618)
ROUTE1619 = x3d.ROUTE()
ROUTE1619.fromNode = "BehaviorClock"
ROUTE1619.fromField = "fraction_changed"
ROUTE1619.toNode = "l_pinky_metacarpal_OI"
ROUTE1619.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1619)
ROUTE1620 = x3d.ROUTE()
ROUTE1620.fromNode = "BehaviorClock"
ROUTE1620.fromField = "fraction_changed"
ROUTE1620.toNode = "l_pinky_middle_OI"
ROUTE1620.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1620)
ROUTE1621 = x3d.ROUTE()
ROUTE1621.fromNode = "BehaviorClock"
ROUTE1621.fromField = "fraction_changed"
ROUTE1621.toNode = "l_pinky_proximal_OI"
ROUTE1621.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1621)
ROUTE1622 = x3d.ROUTE()
ROUTE1622.fromNode = "BehaviorClock"
ROUTE1622.fromField = "fraction_changed"
ROUTE1622.toNode = "l_ring0_OI"
ROUTE1622.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1622)
ROUTE1623 = x3d.ROUTE()
ROUTE1623.fromNode = "BehaviorClock"
ROUTE1623.fromField = "fraction_changed"
ROUTE1623.toNode = "l_ring1_OI"
ROUTE1623.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1623)
ROUTE1624 = x3d.ROUTE()
ROUTE1624.fromNode = "BehaviorClock"
ROUTE1624.fromField = "fraction_changed"
ROUTE1624.toNode = "l_ring2_OI"
ROUTE1624.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1624)
ROUTE1625 = x3d.ROUTE()
ROUTE1625.fromNode = "BehaviorClock"
ROUTE1625.fromField = "fraction_changed"
ROUTE1625.toNode = "l_ring3_OI"
ROUTE1625.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1625)
ROUTE1626 = x3d.ROUTE()
ROUTE1626.fromNode = "BehaviorClock"
ROUTE1626.fromField = "fraction_changed"
ROUTE1626.toNode = "l_ring_distal_OI"
ROUTE1626.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1626)
ROUTE1627 = x3d.ROUTE()
ROUTE1627.fromNode = "BehaviorClock"
ROUTE1627.fromField = "fraction_changed"
ROUTE1627.toNode = "l_ring_metacarpal_OI"
ROUTE1627.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1627)
ROUTE1628 = x3d.ROUTE()
ROUTE1628.fromNode = "BehaviorClock"
ROUTE1628.fromField = "fraction_changed"
ROUTE1628.toNode = "l_ring_middle_OI"
ROUTE1628.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1628)
ROUTE1629 = x3d.ROUTE()
ROUTE1629.fromNode = "BehaviorClock"
ROUTE1629.fromField = "fraction_changed"
ROUTE1629.toNode = "l_ring_proximal_OI"
ROUTE1629.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1629)
ROUTE1630 = x3d.ROUTE()
ROUTE1630.fromNode = "BehaviorClock"
ROUTE1630.fromField = "fraction_changed"
ROUTE1630.toNode = "l_scapula_OI"
ROUTE1630.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1630)
ROUTE1631 = x3d.ROUTE()
ROUTE1631.fromNode = "BehaviorClock"
ROUTE1631.fromField = "fraction_changed"
ROUTE1631.toNode = "l_shoulder_OI"
ROUTE1631.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1631)
ROUTE1632 = x3d.ROUTE()
ROUTE1632.fromNode = "BehaviorClock"
ROUTE1632.fromField = "fraction_changed"
ROUTE1632.toNode = "l_sternoclavicular_OI"
ROUTE1632.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1632)
ROUTE1633 = x3d.ROUTE()
ROUTE1633.fromNode = "BehaviorClock"
ROUTE1633.fromField = "fraction_changed"
ROUTE1633.toNode = "l_subtalar_OI"
ROUTE1633.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1633)
ROUTE1634 = x3d.ROUTE()
ROUTE1634.fromNode = "BehaviorClock"
ROUTE1634.fromField = "fraction_changed"
ROUTE1634.toNode = "l_thigh_OI"
ROUTE1634.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1634)
ROUTE1635 = x3d.ROUTE()
ROUTE1635.fromNode = "BehaviorClock"
ROUTE1635.fromField = "fraction_changed"
ROUTE1635.toNode = "l_thumb1_OI"
ROUTE1635.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1635)
ROUTE1636 = x3d.ROUTE()
ROUTE1636.fromNode = "BehaviorClock"
ROUTE1636.fromField = "fraction_changed"
ROUTE1636.toNode = "l_thumb2_OI"
ROUTE1636.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1636)
ROUTE1637 = x3d.ROUTE()
ROUTE1637.fromNode = "BehaviorClock"
ROUTE1637.fromField = "fraction_changed"
ROUTE1637.toNode = "l_thumb3_OI"
ROUTE1637.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1637)
ROUTE1638 = x3d.ROUTE()
ROUTE1638.fromNode = "BehaviorClock"
ROUTE1638.fromField = "fraction_changed"
ROUTE1638.toNode = "l_thumb_distal_OI"
ROUTE1638.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1638)
ROUTE1639 = x3d.ROUTE()
ROUTE1639.fromNode = "BehaviorClock"
ROUTE1639.fromField = "fraction_changed"
ROUTE1639.toNode = "l_thumb_metacarpal_OI"
ROUTE1639.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1639)
ROUTE1640 = x3d.ROUTE()
ROUTE1640.fromNode = "BehaviorClock"
ROUTE1640.fromField = "fraction_changed"
ROUTE1640.toNode = "l_thumb_proximal_OI"
ROUTE1640.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1640)
ROUTE1641 = x3d.ROUTE()
ROUTE1641.fromNode = "BehaviorClock"
ROUTE1641.fromField = "fraction_changed"
ROUTE1641.toNode = "l_upperarm_OI"
ROUTE1641.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1641)
ROUTE1642 = x3d.ROUTE()
ROUTE1642.fromNode = "BehaviorClock"
ROUTE1642.fromField = "fraction_changed"
ROUTE1642.toNode = "l_wrist_OI"
ROUTE1642.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1642)
ROUTE1643 = x3d.ROUTE()
ROUTE1643.fromNode = "BehaviorClock"
ROUTE1643.fromField = "fraction_changed"
ROUTE1643.toNode = "pelvis_OI"
ROUTE1643.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1643)
ROUTE1644 = x3d.ROUTE()
ROUTE1644.fromNode = "BehaviorClock"
ROUTE1644.fromField = "fraction_changed"
ROUTE1644.toNode = "r_acromioclavicular_OI"
ROUTE1644.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1644)
ROUTE1645 = x3d.ROUTE()
ROUTE1645.fromNode = "BehaviorClock"
ROUTE1645.fromField = "fraction_changed"
ROUTE1645.toNode = "r_ankle_OI"
ROUTE1645.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1645)
ROUTE1646 = x3d.ROUTE()
ROUTE1646.fromNode = "BehaviorClock"
ROUTE1646.fromField = "fraction_changed"
ROUTE1646.toNode = "r_calf_OI"
ROUTE1646.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1646)
ROUTE1647 = x3d.ROUTE()
ROUTE1647.fromNode = "BehaviorClock"
ROUTE1647.fromField = "fraction_changed"
ROUTE1647.toNode = "r_clavicle_OI"
ROUTE1647.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1647)
ROUTE1648 = x3d.ROUTE()
ROUTE1648.fromNode = "BehaviorClock"
ROUTE1648.fromField = "fraction_changed"
ROUTE1648.toNode = "r_elbow_OI"
ROUTE1648.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1648)
ROUTE1649 = x3d.ROUTE()
ROUTE1649.fromNode = "BehaviorClock"
ROUTE1649.fromField = "fraction_changed"
ROUTE1649.toNode = "r_eyeball_OI"
ROUTE1649.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1649)
ROUTE1650 = x3d.ROUTE()
ROUTE1650.fromNode = "BehaviorClock"
ROUTE1650.fromField = "fraction_changed"
ROUTE1650.toNode = "r_eyeball_joint_OI"
ROUTE1650.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1650)
ROUTE1651 = x3d.ROUTE()
ROUTE1651.fromNode = "BehaviorClock"
ROUTE1651.fromField = "fraction_changed"
ROUTE1651.toNode = "r_eyebrow_OI"
ROUTE1651.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1651)
ROUTE1652 = x3d.ROUTE()
ROUTE1652.fromNode = "BehaviorClock"
ROUTE1652.fromField = "fraction_changed"
ROUTE1652.toNode = "r_eyebrow_joint_OI"
ROUTE1652.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1652)
ROUTE1653 = x3d.ROUTE()
ROUTE1653.fromNode = "BehaviorClock"
ROUTE1653.fromField = "fraction_changed"
ROUTE1653.toNode = "r_eyelid_OI"
ROUTE1653.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1653)
ROUTE1654 = x3d.ROUTE()
ROUTE1654.fromNode = "BehaviorClock"
ROUTE1654.fromField = "fraction_changed"
ROUTE1654.toNode = "r_eyelid_joint_OI"
ROUTE1654.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1654)
ROUTE1655 = x3d.ROUTE()
ROUTE1655.fromNode = "BehaviorClock"
ROUTE1655.fromField = "fraction_changed"
ROUTE1655.toNode = "r_forearm_OI"
ROUTE1655.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1655)
ROUTE1656 = x3d.ROUTE()
ROUTE1656.fromNode = "BehaviorClock"
ROUTE1656.fromField = "fraction_changed"
ROUTE1656.toNode = "r_forefoot_OI"
ROUTE1656.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1656)
ROUTE1657 = x3d.ROUTE()
ROUTE1657.fromNode = "BehaviorClock"
ROUTE1657.fromField = "fraction_changed"
ROUTE1657.toNode = "r_hand_OI"
ROUTE1657.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1657)
ROUTE1658 = x3d.ROUTE()
ROUTE1658.fromNode = "BehaviorClock"
ROUTE1658.fromField = "fraction_changed"
ROUTE1658.toNode = "r_hindfoot_OI"
ROUTE1658.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1658)
ROUTE1659 = x3d.ROUTE()
ROUTE1659.fromNode = "BehaviorClock"
ROUTE1659.fromField = "fraction_changed"
ROUTE1659.toNode = "r_hip_OI"
ROUTE1659.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1659)
ROUTE1660 = x3d.ROUTE()
ROUTE1660.fromNode = "BehaviorClock"
ROUTE1660.fromField = "fraction_changed"
ROUTE1660.toNode = "r_index0_OI"
ROUTE1660.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1660)
ROUTE1661 = x3d.ROUTE()
ROUTE1661.fromNode = "BehaviorClock"
ROUTE1661.fromField = "fraction_changed"
ROUTE1661.toNode = "r_index1_OI"
ROUTE1661.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1661)
ROUTE1662 = x3d.ROUTE()
ROUTE1662.fromNode = "BehaviorClock"
ROUTE1662.fromField = "fraction_changed"
ROUTE1662.toNode = "r_index2_OI"
ROUTE1662.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1662)
ROUTE1663 = x3d.ROUTE()
ROUTE1663.fromNode = "BehaviorClock"
ROUTE1663.fromField = "fraction_changed"
ROUTE1663.toNode = "r_index3_OI"
ROUTE1663.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1663)
ROUTE1664 = x3d.ROUTE()
ROUTE1664.fromNode = "BehaviorClock"
ROUTE1664.fromField = "fraction_changed"
ROUTE1664.toNode = "r_index_distal_OI"
ROUTE1664.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1664)
ROUTE1665 = x3d.ROUTE()
ROUTE1665.fromNode = "BehaviorClock"
ROUTE1665.fromField = "fraction_changed"
ROUTE1665.toNode = "r_index_metacarpal_OI"
ROUTE1665.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1665)
ROUTE1666 = x3d.ROUTE()
ROUTE1666.fromNode = "BehaviorClock"
ROUTE1666.fromField = "fraction_changed"
ROUTE1666.toNode = "r_index_middle_OI"
ROUTE1666.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1666)
ROUTE1667 = x3d.ROUTE()
ROUTE1667.fromNode = "BehaviorClock"
ROUTE1667.fromField = "fraction_changed"
ROUTE1667.toNode = "r_index_proximal_OI"
ROUTE1667.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1667)
ROUTE1668 = x3d.ROUTE()
ROUTE1668.fromNode = "BehaviorClock"
ROUTE1668.fromField = "fraction_changed"
ROUTE1668.toNode = "r_knee_OI"
ROUTE1668.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1668)
ROUTE1669 = x3d.ROUTE()
ROUTE1669.fromNode = "BehaviorClock"
ROUTE1669.fromField = "fraction_changed"
ROUTE1669.toNode = "r_metatarsal_OI"
ROUTE1669.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1669)
ROUTE1670 = x3d.ROUTE()
ROUTE1670.fromNode = "BehaviorClock"
ROUTE1670.fromField = "fraction_changed"
ROUTE1670.toNode = "r_middistal_OI"
ROUTE1670.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1670)
ROUTE1671 = x3d.ROUTE()
ROUTE1671.fromNode = "BehaviorClock"
ROUTE1671.fromField = "fraction_changed"
ROUTE1671.toNode = "r_middle0_OI"
ROUTE1671.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1671)
ROUTE1672 = x3d.ROUTE()
ROUTE1672.fromNode = "BehaviorClock"
ROUTE1672.fromField = "fraction_changed"
ROUTE1672.toNode = "r_middle1_OI"
ROUTE1672.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1672)
ROUTE1673 = x3d.ROUTE()
ROUTE1673.fromNode = "BehaviorClock"
ROUTE1673.fromField = "fraction_changed"
ROUTE1673.toNode = "r_middle2_OI"
ROUTE1673.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1673)
ROUTE1674 = x3d.ROUTE()
ROUTE1674.fromNode = "BehaviorClock"
ROUTE1674.fromField = "fraction_changed"
ROUTE1674.toNode = "r_middle3_OI"
ROUTE1674.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1674)
ROUTE1675 = x3d.ROUTE()
ROUTE1675.fromNode = "BehaviorClock"
ROUTE1675.fromField = "fraction_changed"
ROUTE1675.toNode = "r_middle_distal_OI"
ROUTE1675.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1675)
ROUTE1676 = x3d.ROUTE()
ROUTE1676.fromNode = "BehaviorClock"
ROUTE1676.fromField = "fraction_changed"
ROUTE1676.toNode = "r_middle_metacarpal_OI"
ROUTE1676.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1676)
ROUTE1677 = x3d.ROUTE()
ROUTE1677.fromNode = "BehaviorClock"
ROUTE1677.fromField = "fraction_changed"
ROUTE1677.toNode = "r_middle_middle_OI"
ROUTE1677.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1677)
ROUTE1678 = x3d.ROUTE()
ROUTE1678.fromNode = "BehaviorClock"
ROUTE1678.fromField = "fraction_changed"
ROUTE1678.toNode = "r_middle_proximal_OI"
ROUTE1678.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1678)
ROUTE1679 = x3d.ROUTE()
ROUTE1679.fromNode = "BehaviorClock"
ROUTE1679.fromField = "fraction_changed"
ROUTE1679.toNode = "r_midproximal_OI"
ROUTE1679.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1679)
ROUTE1680 = x3d.ROUTE()
ROUTE1680.fromNode = "BehaviorClock"
ROUTE1680.fromField = "fraction_changed"
ROUTE1680.toNode = "r_midtarsal_OI"
ROUTE1680.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1680)
ROUTE1681 = x3d.ROUTE()
ROUTE1681.fromNode = "BehaviorClock"
ROUTE1681.fromField = "fraction_changed"
ROUTE1681.toNode = "r_pinky0_OI"
ROUTE1681.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1681)
ROUTE1682 = x3d.ROUTE()
ROUTE1682.fromNode = "BehaviorClock"
ROUTE1682.fromField = "fraction_changed"
ROUTE1682.toNode = "r_pinky1_OI"
ROUTE1682.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1682)
ROUTE1683 = x3d.ROUTE()
ROUTE1683.fromNode = "BehaviorClock"
ROUTE1683.fromField = "fraction_changed"
ROUTE1683.toNode = "r_pinky2_OI"
ROUTE1683.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1683)
ROUTE1684 = x3d.ROUTE()
ROUTE1684.fromNode = "BehaviorClock"
ROUTE1684.fromField = "fraction_changed"
ROUTE1684.toNode = "r_pinky3_OI"
ROUTE1684.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1684)
ROUTE1685 = x3d.ROUTE()
ROUTE1685.fromNode = "BehaviorClock"
ROUTE1685.fromField = "fraction_changed"
ROUTE1685.toNode = "r_pinky_distal_OI"
ROUTE1685.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1685)
ROUTE1686 = x3d.ROUTE()
ROUTE1686.fromNode = "BehaviorClock"
ROUTE1686.fromField = "fraction_changed"
ROUTE1686.toNode = "r_pinky_metacarpal_OI"
ROUTE1686.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1686)
ROUTE1687 = x3d.ROUTE()
ROUTE1687.fromNode = "BehaviorClock"
ROUTE1687.fromField = "fraction_changed"
ROUTE1687.toNode = "r_pinky_middle_OI"
ROUTE1687.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1687)
ROUTE1688 = x3d.ROUTE()
ROUTE1688.fromNode = "BehaviorClock"
ROUTE1688.fromField = "fraction_changed"
ROUTE1688.toNode = "r_pinky_proximal_OI"
ROUTE1688.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1688)
ROUTE1689 = x3d.ROUTE()
ROUTE1689.fromNode = "BehaviorClock"
ROUTE1689.fromField = "fraction_changed"
ROUTE1689.toNode = "r_ring0_OI"
ROUTE1689.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1689)
ROUTE1690 = x3d.ROUTE()
ROUTE1690.fromNode = "BehaviorClock"
ROUTE1690.fromField = "fraction_changed"
ROUTE1690.toNode = "r_ring1_OI"
ROUTE1690.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1690)
ROUTE1691 = x3d.ROUTE()
ROUTE1691.fromNode = "BehaviorClock"
ROUTE1691.fromField = "fraction_changed"
ROUTE1691.toNode = "r_ring2_OI"
ROUTE1691.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1691)
ROUTE1692 = x3d.ROUTE()
ROUTE1692.fromNode = "BehaviorClock"
ROUTE1692.fromField = "fraction_changed"
ROUTE1692.toNode = "r_ring3_OI"
ROUTE1692.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1692)
ROUTE1693 = x3d.ROUTE()
ROUTE1693.fromNode = "BehaviorClock"
ROUTE1693.fromField = "fraction_changed"
ROUTE1693.toNode = "r_ring_distal_OI"
ROUTE1693.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1693)
ROUTE1694 = x3d.ROUTE()
ROUTE1694.fromNode = "BehaviorClock"
ROUTE1694.fromField = "fraction_changed"
ROUTE1694.toNode = "r_ring_metacarpal_OI"
ROUTE1694.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1694)
ROUTE1695 = x3d.ROUTE()
ROUTE1695.fromNode = "BehaviorClock"
ROUTE1695.fromField = "fraction_changed"
ROUTE1695.toNode = "r_ring_middle_OI"
ROUTE1695.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1695)
ROUTE1696 = x3d.ROUTE()
ROUTE1696.fromNode = "BehaviorClock"
ROUTE1696.fromField = "fraction_changed"
ROUTE1696.toNode = "r_ring_proximal_OI"
ROUTE1696.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1696)
ROUTE1697 = x3d.ROUTE()
ROUTE1697.fromNode = "BehaviorClock"
ROUTE1697.fromField = "fraction_changed"
ROUTE1697.toNode = "r_scapula_OI"
ROUTE1697.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1697)
ROUTE1698 = x3d.ROUTE()
ROUTE1698.fromNode = "BehaviorClock"
ROUTE1698.fromField = "fraction_changed"
ROUTE1698.toNode = "r_shoulder_OI"
ROUTE1698.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1698)
ROUTE1699 = x3d.ROUTE()
ROUTE1699.fromNode = "BehaviorClock"
ROUTE1699.fromField = "fraction_changed"
ROUTE1699.toNode = "r_sternoclavicular_OI"
ROUTE1699.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1699)
ROUTE1700 = x3d.ROUTE()
ROUTE1700.fromNode = "BehaviorClock"
ROUTE1700.fromField = "fraction_changed"
ROUTE1700.toNode = "r_subtalar_OI"
ROUTE1700.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1700)
ROUTE1701 = x3d.ROUTE()
ROUTE1701.fromNode = "BehaviorClock"
ROUTE1701.fromField = "fraction_changed"
ROUTE1701.toNode = "r_thigh_OI"
ROUTE1701.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1701)
ROUTE1702 = x3d.ROUTE()
ROUTE1702.fromNode = "BehaviorClock"
ROUTE1702.fromField = "fraction_changed"
ROUTE1702.toNode = "r_thumb1_OI"
ROUTE1702.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1702)
ROUTE1703 = x3d.ROUTE()
ROUTE1703.fromNode = "BehaviorClock"
ROUTE1703.fromField = "fraction_changed"
ROUTE1703.toNode = "r_thumb2_OI"
ROUTE1703.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1703)
ROUTE1704 = x3d.ROUTE()
ROUTE1704.fromNode = "BehaviorClock"
ROUTE1704.fromField = "fraction_changed"
ROUTE1704.toNode = "r_thumb3_OI"
ROUTE1704.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1704)
ROUTE1705 = x3d.ROUTE()
ROUTE1705.fromNode = "BehaviorClock"
ROUTE1705.fromField = "fraction_changed"
ROUTE1705.toNode = "r_thumb_distal_OI"
ROUTE1705.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1705)
ROUTE1706 = x3d.ROUTE()
ROUTE1706.fromNode = "BehaviorClock"
ROUTE1706.fromField = "fraction_changed"
ROUTE1706.toNode = "r_thumb_metacarpal_OI"
ROUTE1706.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1706)
ROUTE1707 = x3d.ROUTE()
ROUTE1707.fromNode = "BehaviorClock"
ROUTE1707.fromField = "fraction_changed"
ROUTE1707.toNode = "r_thumb_proximal_OI"
ROUTE1707.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1707)
ROUTE1708 = x3d.ROUTE()
ROUTE1708.fromNode = "BehaviorClock"
ROUTE1708.fromField = "fraction_changed"
ROUTE1708.toNode = "r_upperarm_OI"
ROUTE1708.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1708)
ROUTE1709 = x3d.ROUTE()
ROUTE1709.fromNode = "BehaviorClock"
ROUTE1709.fromField = "fraction_changed"
ROUTE1709.toNode = "r_wrist_OI"
ROUTE1709.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1709)
ROUTE1710 = x3d.ROUTE()
ROUTE1710.fromNode = "BehaviorClock"
ROUTE1710.fromField = "fraction_changed"
ROUTE1710.toNode = "sacroiliac_OI"
ROUTE1710.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1710)
ROUTE1711 = x3d.ROUTE()
ROUTE1711.fromNode = "BehaviorClock"
ROUTE1711.fromField = "fraction_changed"
ROUTE1711.toNode = "sacrum_OI"
ROUTE1711.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1711)
ROUTE1712 = x3d.ROUTE()
ROUTE1712.fromNode = "BehaviorClock"
ROUTE1712.fromField = "fraction_changed"
ROUTE1712.toNode = "skull_OI"
ROUTE1712.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1712)
ROUTE1713 = x3d.ROUTE()
ROUTE1713.fromNode = "BehaviorClock"
ROUTE1713.fromField = "fraction_changed"
ROUTE1713.toNode = "skullbase_OI"
ROUTE1713.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1713)
ROUTE1714 = x3d.ROUTE()
ROUTE1714.fromNode = "BehaviorClock"
ROUTE1714.fromField = "fraction_changed"
ROUTE1714.toNode = "t1_OI"
ROUTE1714.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1714)
ROUTE1715 = x3d.ROUTE()
ROUTE1715.fromNode = "BehaviorClock"
ROUTE1715.fromField = "fraction_changed"
ROUTE1715.toNode = "t2_OI"
ROUTE1715.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1715)
ROUTE1716 = x3d.ROUTE()
ROUTE1716.fromNode = "BehaviorClock"
ROUTE1716.fromField = "fraction_changed"
ROUTE1716.toNode = "t3_OI"
ROUTE1716.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1716)
ROUTE1717 = x3d.ROUTE()
ROUTE1717.fromNode = "BehaviorClock"
ROUTE1717.fromField = "fraction_changed"
ROUTE1717.toNode = "t4_OI"
ROUTE1717.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1717)
ROUTE1718 = x3d.ROUTE()
ROUTE1718.fromNode = "BehaviorClock"
ROUTE1718.fromField = "fraction_changed"
ROUTE1718.toNode = "t5_OI"
ROUTE1718.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1718)
ROUTE1719 = x3d.ROUTE()
ROUTE1719.fromNode = "BehaviorClock"
ROUTE1719.fromField = "fraction_changed"
ROUTE1719.toNode = "t6_OI"
ROUTE1719.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1719)
ROUTE1720 = x3d.ROUTE()
ROUTE1720.fromNode = "BehaviorClock"
ROUTE1720.fromField = "fraction_changed"
ROUTE1720.toNode = "t7_OI"
ROUTE1720.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1720)
ROUTE1721 = x3d.ROUTE()
ROUTE1721.fromNode = "BehaviorClock"
ROUTE1721.fromField = "fraction_changed"
ROUTE1721.toNode = "t8_OI"
ROUTE1721.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1721)
ROUTE1722 = x3d.ROUTE()
ROUTE1722.fromNode = "BehaviorClock"
ROUTE1722.fromField = "fraction_changed"
ROUTE1722.toNode = "t9_OI"
ROUTE1722.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1722)
ROUTE1723 = x3d.ROUTE()
ROUTE1723.fromNode = "BehaviorClock"
ROUTE1723.fromField = "fraction_changed"
ROUTE1723.toNode = "t10_OI"
ROUTE1723.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1723)
ROUTE1724 = x3d.ROUTE()
ROUTE1724.fromNode = "BehaviorClock"
ROUTE1724.fromField = "fraction_changed"
ROUTE1724.toNode = "t11_OI"
ROUTE1724.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1724)
ROUTE1725 = x3d.ROUTE()
ROUTE1725.fromNode = "BehaviorClock"
ROUTE1725.fromField = "fraction_changed"
ROUTE1725.toNode = "t12_OI"
ROUTE1725.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1725)
ROUTE1726 = x3d.ROUTE()
ROUTE1726.fromNode = "BehaviorClock"
ROUTE1726.fromField = "fraction_changed"
ROUTE1726.toNode = "temporomandibular_OI"
ROUTE1726.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1726)
ROUTE1727 = x3d.ROUTE()
ROUTE1727.fromNode = "BehaviorClock"
ROUTE1727.fromField = "fraction_changed"
ROUTE1727.toNode = "vc1_OI"
ROUTE1727.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1727)
ROUTE1728 = x3d.ROUTE()
ROUTE1728.fromNode = "BehaviorClock"
ROUTE1728.fromField = "fraction_changed"
ROUTE1728.toNode = "vc2_OI"
ROUTE1728.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1728)
ROUTE1729 = x3d.ROUTE()
ROUTE1729.fromNode = "BehaviorClock"
ROUTE1729.fromField = "fraction_changed"
ROUTE1729.toNode = "vc3_OI"
ROUTE1729.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1729)
ROUTE1730 = x3d.ROUTE()
ROUTE1730.fromNode = "BehaviorClock"
ROUTE1730.fromField = "fraction_changed"
ROUTE1730.toNode = "vc4_OI"
ROUTE1730.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1730)
ROUTE1731 = x3d.ROUTE()
ROUTE1731.fromNode = "BehaviorClock"
ROUTE1731.fromField = "fraction_changed"
ROUTE1731.toNode = "vc5_OI"
ROUTE1731.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1731)
ROUTE1732 = x3d.ROUTE()
ROUTE1732.fromNode = "BehaviorClock"
ROUTE1732.fromField = "fraction_changed"
ROUTE1732.toNode = "vc6_OI"
ROUTE1732.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1732)
ROUTE1733 = x3d.ROUTE()
ROUTE1733.fromNode = "BehaviorClock"
ROUTE1733.fromField = "fraction_changed"
ROUTE1733.toNode = "vc7_OI"
ROUTE1733.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1733)
ROUTE1734 = x3d.ROUTE()
ROUTE1734.fromNode = "BehaviorClock"
ROUTE1734.fromField = "fraction_changed"
ROUTE1734.toNode = "vl1_OI"
ROUTE1734.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1734)
ROUTE1735 = x3d.ROUTE()
ROUTE1735.fromNode = "BehaviorClock"
ROUTE1735.fromField = "fraction_changed"
ROUTE1735.toNode = "vl2_OI"
ROUTE1735.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1735)
ROUTE1736 = x3d.ROUTE()
ROUTE1736.fromNode = "BehaviorClock"
ROUTE1736.fromField = "fraction_changed"
ROUTE1736.toNode = "vl3_OI"
ROUTE1736.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1736)
ROUTE1737 = x3d.ROUTE()
ROUTE1737.fromNode = "BehaviorClock"
ROUTE1737.fromField = "fraction_changed"
ROUTE1737.toNode = "vl4_OI"
ROUTE1737.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1737)
ROUTE1738 = x3d.ROUTE()
ROUTE1738.fromNode = "BehaviorClock"
ROUTE1738.fromField = "fraction_changed"
ROUTE1738.toNode = "vl5_OI"
ROUTE1738.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1738)
ROUTE1739 = x3d.ROUTE()
ROUTE1739.fromNode = "BehaviorClock"
ROUTE1739.fromField = "fraction_changed"
ROUTE1739.toNode = "vt1_OI"
ROUTE1739.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1739)
ROUTE1740 = x3d.ROUTE()
ROUTE1740.fromNode = "BehaviorClock"
ROUTE1740.fromField = "fraction_changed"
ROUTE1740.toNode = "vt2_OI"
ROUTE1740.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1740)
ROUTE1741 = x3d.ROUTE()
ROUTE1741.fromNode = "BehaviorClock"
ROUTE1741.fromField = "fraction_changed"
ROUTE1741.toNode = "vt3_OI"
ROUTE1741.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1741)
ROUTE1742 = x3d.ROUTE()
ROUTE1742.fromNode = "BehaviorClock"
ROUTE1742.fromField = "fraction_changed"
ROUTE1742.toNode = "vt4_OI"
ROUTE1742.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1742)
ROUTE1743 = x3d.ROUTE()
ROUTE1743.fromNode = "BehaviorClock"
ROUTE1743.fromField = "fraction_changed"
ROUTE1743.toNode = "vt5_OI"
ROUTE1743.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1743)
ROUTE1744 = x3d.ROUTE()
ROUTE1744.fromNode = "BehaviorClock"
ROUTE1744.fromField = "fraction_changed"
ROUTE1744.toNode = "vt6_OI"
ROUTE1744.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1744)
ROUTE1745 = x3d.ROUTE()
ROUTE1745.fromNode = "BehaviorClock"
ROUTE1745.fromField = "fraction_changed"
ROUTE1745.toNode = "vt7_OI"
ROUTE1745.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1745)
ROUTE1746 = x3d.ROUTE()
ROUTE1746.fromNode = "BehaviorClock"
ROUTE1746.fromField = "fraction_changed"
ROUTE1746.toNode = "vt8_OI"
ROUTE1746.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1746)
ROUTE1747 = x3d.ROUTE()
ROUTE1747.fromNode = "BehaviorClock"
ROUTE1747.fromField = "fraction_changed"
ROUTE1747.toNode = "vt9_OI"
ROUTE1747.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1747)
ROUTE1748 = x3d.ROUTE()
ROUTE1748.fromNode = "BehaviorClock"
ROUTE1748.fromField = "fraction_changed"
ROUTE1748.toNode = "vt10_OI"
ROUTE1748.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1748)
ROUTE1749 = x3d.ROUTE()
ROUTE1749.fromNode = "BehaviorClock"
ROUTE1749.fromField = "fraction_changed"
ROUTE1749.toNode = "vt11_OI"
ROUTE1749.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1749)
ROUTE1750 = x3d.ROUTE()
ROUTE1750.fromNode = "BehaviorClock"
ROUTE1750.fromField = "fraction_changed"
ROUTE1750.toNode = "vt12_OI"
ROUTE1750.toField = "set_fraction"

ProtoBody600.children.append(ROUTE1750)

ProtoDeclare17.ProtoBody = ProtoBody600

Scene16.children.append(ProtoDeclare17)
ProtoDeclare1751 = x3d.ProtoDeclare()
ProtoDeclare1751.name = "HAnimBodyBehaviorChooser"
ProtoDeclare1751.appinfo = "The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time."
ProtoInterface1752 = x3d.ProtoInterface()
field1753 = x3d.field()
field1753.accessType = "inputOutput"
field1753.type = "SFInt32"
field1753.name = "supportedLOA"
field1753.value = -1
field1753.appinfo = "Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3."

ProtoInterface1752.field.append(field1753)
field1754 = x3d.field()
field1754.accessType = "initializeOnly"
field1754.type = "MFNode"
field1754.name = "HumanoidArray"
field1754.appinfo = "[HAnimHumanoid] nodes only"

ProtoInterface1752.field.append(field1754)
field1755 = x3d.field()
field1755.accessType = "initializeOnly"
field1755.type = "SFInt32"
field1755.name = "whichBody"
field1755.value = -1
field1755.appinfo = "whichBody is selected default is initial member of HumanoidArray"

ProtoInterface1752.field.append(field1755)
field1756 = x3d.field()
field1756.accessType = "inputOnly"
field1756.type = "SFInt32"
field1756.name = "set_whichBody"
field1756.appinfo = "whichBody is selected default is none"

ProtoInterface1752.field.append(field1756)
field1757 = x3d.field()
field1757.accessType = "outputOnly"
field1757.type = "SFInt32"
field1757.name = "whichBody_changed"
field1757.appinfo = "whichBody is selected default is none"

ProtoInterface1752.field.append(field1757)
field1758 = x3d.field()
field1758.accessType = "initializeOnly"
field1758.type = "MFNode"
field1758.name = "hAnimBehaviorNodes"
field1758.appinfo = "[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time."

ProtoInterface1752.field.append(field1758)
field1759 = x3d.field()
field1759.accessType = "initializeOnly"
field1759.type = "MFBool"
field1759.name = "enabledBehaviorsArray"
field1759.appinfo = "indicate which HAnimBehavior nodes are activated, empty indicates all enabled true"

ProtoInterface1752.field.append(field1759)
field1760 = x3d.field()
field1760.accessType = "inputOnly"
field1760.type = "SFInt32"
field1760.name = "enableBehavior"
field1760.appinfo = "enable corresponding behavior identified by index number"

ProtoInterface1752.field.append(field1760)
field1761 = x3d.field()
field1761.accessType = "inputOnly"
field1761.type = "SFInt32"
field1761.name = "disableBehavior"
field1761.appinfo = "disable corresponding behavior identified by index number"

ProtoInterface1752.field.append(field1761)
field1762 = x3d.field()
field1762.accessType = "inputOutput"
field1762.type = "SFTime"
field1762.name = "startTime"
field1762.value = 0

ProtoInterface1752.field.append(field1762)
field1763 = x3d.field()
field1763.accessType = "inputOutput"
field1763.type = "SFTime"
field1763.name = "stopTime"
field1763.value = 0

ProtoInterface1752.field.append(field1763)

ProtoDeclare1751.ProtoInterface = ProtoInterface1752
ProtoBody1764 = x3d.ProtoBody()
Switch1765 = x3d.Switch(DEF="BodySwitch")
IS1766 = x3d.IS()
connect1767 = x3d.connect()
connect1767.nodeField = "whichChoice"
connect1767.protoField = "whichBody"

IS1766.connect.append(connect1767)
connect1768 = x3d.connect()
connect1768.nodeField = "children"
connect1768.protoField = "HumanoidArray"

IS1766.connect.append(connect1768)

Switch1765.IS = IS1766

ProtoBody1764.children.append(Switch1765)
Group1769 = x3d.Group(DEF="BehaviorArrayHolder")
IS1770 = x3d.IS()
connect1771 = x3d.connect()
connect1771.nodeField = "children"
connect1771.protoField = "hAnimBehaviorNodes"

IS1770.connect.append(connect1771)

Group1769.IS = IS1770

ProtoBody1764.children.append(Group1769)
TimeSensor1772 = x3d.TimeSensor(DEF="TimeSensorHolderStartStopTimes")
IS1773 = x3d.IS()
connect1774 = x3d.connect()
connect1774.nodeField = "startTime"
connect1774.protoField = "startTime"

IS1773.connect.append(connect1774)
connect1775 = x3d.connect()
connect1775.nodeField = "stopTime"
connect1775.protoField = "stopTime"

IS1773.connect.append(connect1775)

TimeSensor1772.IS = IS1773

ProtoBody1764.children.append(TimeSensor1772)
Switch1776 = x3d.Switch(DEF="SupportedLoaHolder2")
IS1777 = x3d.IS()
connect1778 = x3d.connect()
connect1778.nodeField = "whichChoice"
connect1778.protoField = "supportedLOA"

IS1777.connect.append(connect1778)

Switch1776.IS = IS1777

ProtoBody1764.children.append(Switch1776)
Script1779 = x3d.Script(DEF="BehaviorSelectionScript")
Script1779.url = ["HAnimBehaviorPrototypesScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js"]
Script1779.directOutput = True
field1780 = x3d.field()
field1780.accessType = "initializeOnly"
field1780.type = "MFNode"
field1780.name = "HumanoidArray"
field1780.appinfo = "[HAnimHumanoid] nodes only"

Script1779.field.append(field1780)
field1781 = x3d.field()
field1781.accessType = "initializeOnly"
field1781.type = "SFInt32"
field1781.name = "whichBody"
field1781.appinfo = "whichBody is selected default is none"

Script1779.field.append(field1781)
field1782 = x3d.field()
field1782.accessType = "inputOnly"
field1782.type = "SFInt32"
field1782.name = "set_whichBody"
field1782.appinfo = "whichBody is selected default is none"

Script1779.field.append(field1782)
field1783 = x3d.field()
field1783.accessType = "outputOnly"
field1783.type = "SFInt32"
field1783.name = "whichBody_changed"
field1783.appinfo = "whichBody is selected default is none"

Script1779.field.append(field1783)
field1784 = x3d.field()
field1784.accessType = "initializeOnly"
field1784.type = "MFNode"
field1784.name = "hAnimBehaviorNodes"
field1784.appinfo = "[HAnimBehavior] nodes only"

Script1779.field.append(field1784)
field1785 = x3d.field()
field1785.accessType = "initializeOnly"
field1785.type = "MFBool"
field1785.name = "enabledBehaviorsArray"

Script1779.field.append(field1785)
field1786 = x3d.field()
field1786.accessType = "inputOnly"
field1786.type = "SFInt32"
field1786.name = "enableBehavior"
field1786.appinfo = "enable corresponding behavior"

Script1779.field.append(field1786)
field1787 = x3d.field()
field1787.accessType = "inputOnly"
field1787.type = "SFInt32"
field1787.name = "disableBehavior"
field1787.appinfo = "enable corresponding behavior"

Script1779.field.append(field1787)
field1788 = x3d.field()
field1788.accessType = "initializeOnly"
field1788.type = "SFNode"
field1788.name = "timeSensorNode"
TimeSensor1789 = x3d.TimeSensor(USE="TimeSensorHolderStartStopTimes")

field1788.children.append(TimeSensor1789)

Script1779.field.append(field1788)
field1790 = x3d.field()
field1790.accessType = "initializeOnly"
field1790.type = "SFInt32"
field1790.name = "previousBodyIndex"
field1790.value = -1
field1790.appinfo = "remember prior body index to avoid unnecessary ROUTE teardown and creation"

Script1779.field.append(field1790)
field1791 = x3d.field()
field1791.accessType = "initializeOnly"
field1791.type = "SFBool"
field1791.name = "traceEnabled"
field1791.value = True

Script1779.field.append(field1791)
IS1792 = x3d.IS()
connect1793 = x3d.connect()
connect1793.nodeField = "HumanoidArray"
connect1793.protoField = "HumanoidArray"

IS1792.connect.append(connect1793)
connect1794 = x3d.connect()
connect1794.nodeField = "whichBody"
connect1794.protoField = "whichBody"

IS1792.connect.append(connect1794)
connect1795 = x3d.connect()
connect1795.nodeField = "set_whichBody"
connect1795.protoField = "set_whichBody"

IS1792.connect.append(connect1795)
connect1796 = x3d.connect()
connect1796.nodeField = "whichBody_changed"
connect1796.protoField = "whichBody_changed"

IS1792.connect.append(connect1796)
connect1797 = x3d.connect()
connect1797.nodeField = "hAnimBehaviorNodes"
connect1797.protoField = "hAnimBehaviorNodes"

IS1792.connect.append(connect1797)
connect1798 = x3d.connect()
connect1798.nodeField = "enabledBehaviorsArray"
connect1798.protoField = "enabledBehaviorsArray"

IS1792.connect.append(connect1798)
connect1799 = x3d.connect()
connect1799.nodeField = "enableBehavior"
connect1799.protoField = "enableBehavior"

IS1792.connect.append(connect1799)
connect1800 = x3d.connect()
connect1800.nodeField = "disableBehavior"
connect1800.protoField = "disableBehavior"

IS1792.connect.append(connect1800)

Script1779.IS = IS1792

ProtoBody1764.children.append(Script1779)

ProtoDeclare1751.ProtoBody = ProtoBody1764

Scene16.children.append(ProtoDeclare1751)
WorldInfo1801 = x3d.WorldInfo()
WorldInfo1801.title = "HAnimBehaviorPrototypes.x3d"

Scene16.children.append(WorldInfo1801)
ProtoInstance1802 = x3d.ProtoInstance(DEF="BehaviorTest1")
ProtoInstance1802.name = "HAnimBehavior"
fieldValue1803 = x3d.fieldValue()
fieldValue1803.name = "HumanoidRoot_translation_key"
fieldValue1803.value = "0 0.25 0.5 0.75 1"

ProtoInstance1802.fieldValue.append(fieldValue1803)
fieldValue1804 = x3d.fieldValue()
fieldValue1804.name = "HumanoidRoot_translation_keyValue"
fieldValue1804.value = "0 0 0 0 0 10 0 0 20 0 0 30 0 0 40 0 0 50"

ProtoInstance1802.fieldValue.append(fieldValue1804)
fieldValue1805 = x3d.fieldValue()
fieldValue1805.name = "r_ankle_key"
fieldValue1805.value = "0 0.5 1"

ProtoInstance1802.fieldValue.append(fieldValue1805)
fieldValue1806 = x3d.fieldValue()
fieldValue1806.name = "r_ankle_keyValue"
fieldValue1806.value = "0 1 0 0 0 1 0 0.2 0 1 0 0.4"

ProtoInstance1802.fieldValue.append(fieldValue1806)

Scene16.children.append(ProtoInstance1802)
ProtoInstance1807 = x3d.ProtoInstance(DEF="ChooserTest")
ProtoInstance1807.name = "HAnimBodyBehaviorChooser"
fieldValue1808 = x3d.fieldValue()
fieldValue1808.name = "HumanoidArray"
HAnimHumanoid1809 = x3d.HAnimHumanoid(DEF="hanim_DiamondManLOA-1")
HAnimHumanoid1809.name = "DiamondManLOA-1"
HAnimHumanoid1809.version = "2.0"

fieldValue1808.children.append(HAnimHumanoid1809)

ProtoInstance1807.fieldValue.append(fieldValue1808)
fieldValue1810 = x3d.fieldValue()
fieldValue1810.name = "whichBody"
fieldValue1810.value = "0"

ProtoInstance1807.fieldValue.append(fieldValue1810)
fieldValue1811 = x3d.fieldValue()
fieldValue1811.name = "hAnimBehaviorNodes"
ProtoInstance1812 = x3d.ProtoInstance(USE="BehaviorTest1")
ProtoInstance1812.name = "HAnimBehavior"

fieldValue1811.children.append(ProtoInstance1812)

ProtoInstance1807.fieldValue.append(fieldValue1811)
fieldValue1813 = x3d.fieldValue()
fieldValue1813.name = "enabledBehaviorsArray"
fieldValue1813.value = "true"

ProtoInstance1807.fieldValue.append(fieldValue1813)

Scene16.children.append(ProtoInstance1807)

X3D0.Scene = Scene16
f = open("../data/HAnimBehaviorPrototypes.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimBehaviorPrototypes.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimBehaviorPrototypes.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
