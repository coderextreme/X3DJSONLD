import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("HAnim")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("HAnimBehaviorPrototypes.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("Prototypes for HAnimBehavior node, which collects OrientationInterpolators for aggregate animation of an HAnim humanoid model, and HAnimBodyBehaviorChooser, which selects one body and enables/disables multiple aggregated behaviors.")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("Don Brutzman, Jeff Weekley, MV4205 Advanced X3D Authoring class, and Keith Victor")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("2 May 2006")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("4 July 2020")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("Web3D2007BlendedBehaviorsChangeableBodies.pdf")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("https://www.web3d.org/files/specifications/19774/V1.0")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-X3DAbstractSpecification_Revision1_to_Part1/Part01/components/hanim.html")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("InterchangableActorsViaDynamicRoutingPrototypes.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("ApaydinThesis.pdf")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("subject")
meta13.setContent("X3D HAnim humanoid animation behaviors")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("warning")
meta14.setContent("under development. should joint translations be exposed? upgrade to HAnim v2.2")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("identifier")
meta15.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypes.x3d")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("generator")
meta16.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("license")
meta17.setContent("../license.html")

head1.addMeta(meta17)

X3D0.setHead(head1)
Scene18 = x3d.Scene()
WorldInfo19 = x3d.WorldInfo()
WorldInfo19.setTitle("HAnimBehaviorPrototypes.x3d")

Scene18.addChildren(WorldInfo19)
ProtoDeclare20 = x3d.ProtoDeclare()
ProtoDeclare20.setName("HAnimBehavior")
ProtoDeclare20.setAppinfo("The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior.")
ProtoDeclare20.setDocumentation("https://www.web3d.org/files/specifications/19774/V1.0/")
ProtoInterface21 = x3d.ProtoInterface()
#supported Level of Articulation (LOA)
#shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations
#TODO: add other X3D 3.0 TimeSensor fields (pause etc.)
#Not supported: animated translation of individual joints
#pass in key/keyValue array pairs for single PositionInterpolator
#pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint
field22 = x3d.field()
field22.setName("supportedLOA")
field22.setAccessType("inputOutput")
field22.setAppinfo("Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.")
field22.setType("SFInt32")
field22.setValue("-1")

ProtoInterface21.addField(field22)
field23 = x3d.field()
field23.setName("enabled")
field23.setAccessType("inputOutput")
field23.setAppinfo("is this behavior enabled?")
field23.setType("SFBool")
field23.setValue("true")

ProtoInterface21.addField(field23)
field24 = x3d.field()
field24.setName("cycleInterval")
field24.setAccessType("inputOutput")
field24.setAppinfo("how long do these interpolators take to execute?")
field24.setType("SFTime")
field24.setValue("1")

ProtoInterface21.addField(field24)
field25 = x3d.field()
field25.setName("loop")
field25.setAccessType("inputOutput")
field25.setAppinfo("whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands).")
field25.setType("SFBool")
field25.setValue("false")

ProtoInterface21.addField(field25)
field26 = x3d.field()
field26.setName("startTime")
field26.setAccessType("inputOutput")
field26.setAppinfo("when time now >= startTime isActive becomes true and TimeSensor becomes active")
field26.setType("SFTime")
field26.setValue("0")

ProtoInterface21.addField(field26)
field27 = x3d.field()
field27.setName("stopTime")
field27.setAccessType("inputOutput")
field27.setAppinfo("when stopTime becomes <= time now isActive becomes false and TimeSensor becomes inactive")
field27.setType("SFTime")
field27.setValue("0")

ProtoInterface21.addField(field27)
field28 = x3d.field()
field28.setName("pauseTime")
field28.setAccessType("inputOutput")
field28.setAppinfo("when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused")
field28.setType("SFTime")
field28.setValue("0")

ProtoInterface21.addField(field28)
field29 = x3d.field()
field29.setName("resumeTime")
field29.setAccessType("inputOutput")
field29.setAppinfo("when resumeTime becomes <= time now isPaused becomes false and TimeSensor becomes inactive")
field29.setType("SFTime")
field29.setValue("0")

ProtoInterface21.addField(field29)
field30 = x3d.field()
field30.setName("cycleTime")
field30.setAccessType("outputOnly")
field30.setAppinfo("cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle")
field30.setType("SFTime")

ProtoInterface21.addField(field30)
field31 = x3d.field()
field31.setName("isActive")
field31.setAccessType("outputOnly")
field31.setAppinfo("isActive true/false events are sent when TimeSensor starts/stops running")
field31.setType("SFBool")

ProtoInterface21.addField(field31)
field32 = x3d.field()
field32.setName("isPaused")
field32.setAccessType("outputOnly")
field32.setAppinfo("isPaused true/false events are sent when TimeSensor is paused/resumed")
field32.setType("SFBool")

ProtoInterface21.addField(field32)
field33 = x3d.field()
field33.setName("elapsedTime")
field33.setAccessType("outputOnly")
field33.setAppinfo("current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time")
field33.setType("SFBool")

ProtoInterface21.addField(field33)
field34 = x3d.field()
field34.setName("time")
field34.setAccessType("outputOnly")
field34.setAppinfo("continuously sends the absolute time (since January 1 1970)")
field34.setType("SFBool")

ProtoInterface21.addField(field34)
field35 = x3d.field()
field35.setName("fraction_changed")
field35.setAccessType("outputOnly")
field35.setAppinfo("fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle.")
field35.setType("SFFloat")

ProtoInterface21.addField(field35)
field36 = x3d.field()
field36.setName("HumanoidRoot_translation_key")
field36.setAccessType("inputOutput")
field36.setType("MFFloat")
#no default value

ProtoInterface21.addField(field36)
field37 = x3d.field()
field37.setName("HumanoidRoot_translation_keyValue")
field37.setAccessType("inputOutput")
field37.setType("MFVec3f")
#no default value

ProtoInterface21.addField(field37)
field38 = x3d.field()
field38.setName("HumanoidRoot_translation_changed")
field38.setAccessType("outputOnly")
field38.setType("SFVec3f")

ProtoInterface21.addField(field38)
field39 = x3d.field()
field39.setName("HumanoidRoot_rotation_key")
field39.setAccessType("inputOutput")
field39.setType("MFFloat")
#no default value

ProtoInterface21.addField(field39)
field40 = x3d.field()
field40.setName("HumanoidRoot_rotation_keyValue")
field40.setAccessType("inputOutput")
field40.setType("MFRotation")
#no default value

ProtoInterface21.addField(field40)
field41 = x3d.field()
field41.setName("HumanoidRoot_rotation_changed")
field41.setAccessType("outputOnly")
field41.setType("SFRotation")

ProtoInterface21.addField(field41)
field42 = x3d.field()
field42.setName("c1_key")
field42.setAccessType("inputOutput")
field42.setType("MFFloat")
#no default value

ProtoInterface21.addField(field42)
field43 = x3d.field()
field43.setName("c1_keyValue")
field43.setAccessType("inputOutput")
field43.setType("MFRotation")
#no default value

ProtoInterface21.addField(field43)
field44 = x3d.field()
field44.setName("c1_changed")
field44.setAccessType("outputOnly")
field44.setType("SFRotation")

ProtoInterface21.addField(field44)
field45 = x3d.field()
field45.setName("c2_key")
field45.setAccessType("inputOutput")
field45.setType("MFFloat")
#no default value

ProtoInterface21.addField(field45)
field46 = x3d.field()
field46.setName("c2_keyValue")
field46.setAccessType("inputOutput")
field46.setType("MFRotation")
#no default value

ProtoInterface21.addField(field46)
field47 = x3d.field()
field47.setName("c2_changed")
field47.setAccessType("outputOnly")
field47.setType("SFRotation")

ProtoInterface21.addField(field47)
field48 = x3d.field()
field48.setName("c3_key")
field48.setAccessType("inputOutput")
field48.setType("MFFloat")
#no default value

ProtoInterface21.addField(field48)
field49 = x3d.field()
field49.setName("c3_keyValue")
field49.setAccessType("inputOutput")
field49.setType("MFRotation")
#no default value

ProtoInterface21.addField(field49)
field50 = x3d.field()
field50.setName("c3_changed")
field50.setAccessType("outputOnly")
field50.setType("SFRotation")

ProtoInterface21.addField(field50)
field51 = x3d.field()
field51.setName("c4_key")
field51.setAccessType("inputOutput")
field51.setType("MFFloat")
#no default value

ProtoInterface21.addField(field51)
field52 = x3d.field()
field52.setName("c4_keyValue")
field52.setAccessType("inputOutput")
field52.setType("MFRotation")
#no default value

ProtoInterface21.addField(field52)
field53 = x3d.field()
field53.setName("c4_changed")
field53.setAccessType("outputOnly")
field53.setType("SFRotation")

ProtoInterface21.addField(field53)
field54 = x3d.field()
field54.setName("c5_key")
field54.setAccessType("inputOutput")
field54.setType("MFFloat")
#no default value

ProtoInterface21.addField(field54)
field55 = x3d.field()
field55.setName("c5_keyValue")
field55.setAccessType("inputOutput")
field55.setType("MFRotation")
#no default value

ProtoInterface21.addField(field55)
field56 = x3d.field()
field56.setName("c5_changed")
field56.setAccessType("outputOnly")
field56.setType("SFRotation")

ProtoInterface21.addField(field56)
field57 = x3d.field()
field57.setName("c6_key")
field57.setAccessType("inputOutput")
field57.setType("MFFloat")
#no default value

ProtoInterface21.addField(field57)
field58 = x3d.field()
field58.setName("c6_keyValue")
field58.setAccessType("inputOutput")
field58.setType("MFRotation")
#no default value

ProtoInterface21.addField(field58)
field59 = x3d.field()
field59.setName("c6_changed")
field59.setAccessType("outputOnly")
field59.setType("SFRotation")

ProtoInterface21.addField(field59)
field60 = x3d.field()
field60.setName("c7_key")
field60.setAccessType("inputOutput")
field60.setType("MFFloat")
#no default value

ProtoInterface21.addField(field60)
field61 = x3d.field()
field61.setName("c7_keyValue")
field61.setAccessType("inputOutput")
field61.setType("MFRotation")
#no default value

ProtoInterface21.addField(field61)
field62 = x3d.field()
field62.setName("c7_changed")
field62.setAccessType("outputOnly")
field62.setType("SFRotation")

ProtoInterface21.addField(field62)
field63 = x3d.field()
field63.setName("jaw_key")
field63.setAccessType("inputOutput")
field63.setType("MFFloat")
#no default value

ProtoInterface21.addField(field63)
field64 = x3d.field()
field64.setName("jaw_keyValue")
field64.setAccessType("inputOutput")
field64.setType("MFRotation")
#no default value

ProtoInterface21.addField(field64)
field65 = x3d.field()
field65.setName("jaw_changed")
field65.setAccessType("outputOnly")
field65.setType("SFRotation")

ProtoInterface21.addField(field65)
field66 = x3d.field()
field66.setName("l1_key")
field66.setAccessType("inputOutput")
field66.setType("MFFloat")
#no default value

ProtoInterface21.addField(field66)
field67 = x3d.field()
field67.setName("l1_keyValue")
field67.setAccessType("inputOutput")
field67.setType("MFRotation")
#no default value

ProtoInterface21.addField(field67)
field68 = x3d.field()
field68.setName("l1_changed")
field68.setAccessType("outputOnly")
field68.setType("SFRotation")

ProtoInterface21.addField(field68)
field69 = x3d.field()
field69.setName("l2_key")
field69.setAccessType("inputOutput")
field69.setType("MFFloat")
#no default value

ProtoInterface21.addField(field69)
field70 = x3d.field()
field70.setName("l2_keyValue")
field70.setAccessType("inputOutput")
field70.setType("MFRotation")
#no default value

ProtoInterface21.addField(field70)
field71 = x3d.field()
field71.setName("l2_changed")
field71.setAccessType("outputOnly")
field71.setType("SFRotation")

ProtoInterface21.addField(field71)
field72 = x3d.field()
field72.setName("l3_key")
field72.setAccessType("inputOutput")
field72.setType("MFFloat")
#no default value

ProtoInterface21.addField(field72)
field73 = x3d.field()
field73.setName("l3_keyValue")
field73.setAccessType("inputOutput")
field73.setType("MFRotation")
#no default value

ProtoInterface21.addField(field73)
field74 = x3d.field()
field74.setName("l3_changed")
field74.setAccessType("outputOnly")
field74.setType("SFRotation")

ProtoInterface21.addField(field74)
field75 = x3d.field()
field75.setName("l4_key")
field75.setAccessType("inputOutput")
field75.setType("MFFloat")
#no default value

ProtoInterface21.addField(field75)
field76 = x3d.field()
field76.setName("l4_keyValue")
field76.setAccessType("inputOutput")
field76.setType("MFRotation")
#no default value

ProtoInterface21.addField(field76)
field77 = x3d.field()
field77.setName("l4_changed")
field77.setAccessType("outputOnly")
field77.setType("SFRotation")

ProtoInterface21.addField(field77)
field78 = x3d.field()
field78.setName("l5_key")
field78.setAccessType("inputOutput")
field78.setType("MFFloat")
#no default value

ProtoInterface21.addField(field78)
field79 = x3d.field()
field79.setName("l5_keyValue")
field79.setAccessType("inputOutput")
field79.setType("MFRotation")
#no default value

ProtoInterface21.addField(field79)
field80 = x3d.field()
field80.setName("l5_changed")
field80.setAccessType("outputOnly")
field80.setType("SFRotation")

ProtoInterface21.addField(field80)
field81 = x3d.field()
field81.setName("l_acromioclavicular_key")
field81.setAccessType("inputOutput")
field81.setType("MFFloat")
#no default value

ProtoInterface21.addField(field81)
field82 = x3d.field()
field82.setName("l_acromioclavicular_keyValue")
field82.setAccessType("inputOutput")
field82.setType("MFRotation")
#no default value

ProtoInterface21.addField(field82)
field83 = x3d.field()
field83.setName("l_acromioclavicular_changed")
field83.setAccessType("outputOnly")
field83.setType("SFRotation")

ProtoInterface21.addField(field83)
field84 = x3d.field()
field84.setName("l_ankle_key")
field84.setAccessType("inputOutput")
field84.setType("MFFloat")
#no default value

ProtoInterface21.addField(field84)
field85 = x3d.field()
field85.setName("l_ankle_keyValue")
field85.setAccessType("inputOutput")
field85.setType("MFRotation")
#no default value

ProtoInterface21.addField(field85)
field86 = x3d.field()
field86.setName("l_ankle_changed")
field86.setAccessType("outputOnly")
field86.setType("SFRotation")

ProtoInterface21.addField(field86)
field87 = x3d.field()
field87.setName("l_calf_key")
field87.setAccessType("inputOutput")
field87.setType("MFFloat")
#no default value

ProtoInterface21.addField(field87)
field88 = x3d.field()
field88.setName("l_calf_keyValue")
field88.setAccessType("inputOutput")
field88.setType("MFRotation")
#no default value

ProtoInterface21.addField(field88)
field89 = x3d.field()
field89.setName("l_calf_changed")
field89.setAccessType("outputOnly")
field89.setType("SFRotation")

ProtoInterface21.addField(field89)
field90 = x3d.field()
field90.setName("l_clavicle_key")
field90.setAccessType("inputOutput")
field90.setType("MFFloat")
#no default value

ProtoInterface21.addField(field90)
field91 = x3d.field()
field91.setName("l_clavicle_keyValue")
field91.setAccessType("inputOutput")
field91.setType("MFRotation")
#no default value

ProtoInterface21.addField(field91)
field92 = x3d.field()
field92.setName("l_clavicle_changed")
field92.setAccessType("outputOnly")
field92.setType("SFRotation")

ProtoInterface21.addField(field92)
field93 = x3d.field()
field93.setName("l_elbow_key")
field93.setAccessType("inputOutput")
field93.setType("MFFloat")
#no default value

ProtoInterface21.addField(field93)
field94 = x3d.field()
field94.setName("l_elbow_keyValue")
field94.setAccessType("inputOutput")
field94.setType("MFRotation")
#no default value

ProtoInterface21.addField(field94)
field95 = x3d.field()
field95.setName("l_elbow_changed")
field95.setAccessType("outputOnly")
field95.setType("SFRotation")

ProtoInterface21.addField(field95)
field96 = x3d.field()
field96.setName("l_eyeball_key")
field96.setAccessType("inputOutput")
field96.setType("MFFloat")
#no default value

ProtoInterface21.addField(field96)
field97 = x3d.field()
field97.setName("l_eyeball_keyValue")
field97.setAccessType("inputOutput")
field97.setType("MFRotation")
#no default value

ProtoInterface21.addField(field97)
field98 = x3d.field()
field98.setName("l_eyeball_changed")
field98.setAccessType("outputOnly")
field98.setType("SFRotation")

ProtoInterface21.addField(field98)
field99 = x3d.field()
field99.setName("l_eyeball_joint_key")
field99.setAccessType("inputOutput")
field99.setType("MFFloat")
#no default value

ProtoInterface21.addField(field99)
field100 = x3d.field()
field100.setName("l_eyeball_joint_keyValue")
field100.setAccessType("inputOutput")
field100.setType("MFRotation")
#no default value

ProtoInterface21.addField(field100)
field101 = x3d.field()
field101.setName("l_eyeball_joint_changed")
field101.setAccessType("outputOnly")
field101.setType("SFRotation")

ProtoInterface21.addField(field101)
field102 = x3d.field()
field102.setName("l_eyebrow_key")
field102.setAccessType("inputOutput")
field102.setType("MFFloat")
#no default value

ProtoInterface21.addField(field102)
field103 = x3d.field()
field103.setName("l_eyebrow_keyValue")
field103.setAccessType("inputOutput")
field103.setType("MFRotation")
#no default value

ProtoInterface21.addField(field103)
field104 = x3d.field()
field104.setName("l_eyebrow_changed")
field104.setAccessType("outputOnly")
field104.setType("SFRotation")

ProtoInterface21.addField(field104)
field105 = x3d.field()
field105.setName("l_eyebrow_joint_key")
field105.setAccessType("inputOutput")
field105.setType("MFFloat")
#no default value

ProtoInterface21.addField(field105)
field106 = x3d.field()
field106.setName("l_eyebrow_joint_keyValue")
field106.setAccessType("inputOutput")
field106.setType("MFRotation")
#no default value

ProtoInterface21.addField(field106)
field107 = x3d.field()
field107.setName("l_eyebrow_joint_changed")
field107.setAccessType("outputOnly")
field107.setType("SFRotation")

ProtoInterface21.addField(field107)
field108 = x3d.field()
field108.setName("l_eyelid_key")
field108.setAccessType("inputOutput")
field108.setType("MFFloat")
#no default value

ProtoInterface21.addField(field108)
field109 = x3d.field()
field109.setName("l_eyelid_keyValue")
field109.setAccessType("inputOutput")
field109.setType("MFRotation")
#no default value

ProtoInterface21.addField(field109)
field110 = x3d.field()
field110.setName("l_eyelid_changed")
field110.setAccessType("outputOnly")
field110.setType("SFRotation")

ProtoInterface21.addField(field110)
field111 = x3d.field()
field111.setName("l_eyelid_joint_key")
field111.setAccessType("inputOutput")
field111.setType("MFFloat")
#no default value

ProtoInterface21.addField(field111)
field112 = x3d.field()
field112.setName("l_eyelid_joint_keyValue")
field112.setAccessType("inputOutput")
field112.setType("MFRotation")
#no default value

ProtoInterface21.addField(field112)
field113 = x3d.field()
field113.setName("l_eyelid_joint_changed")
field113.setAccessType("outputOnly")
field113.setType("SFRotation")

ProtoInterface21.addField(field113)
field114 = x3d.field()
field114.setName("l_forearm_key")
field114.setAccessType("inputOutput")
field114.setType("MFFloat")
#no default value

ProtoInterface21.addField(field114)
field115 = x3d.field()
field115.setName("l_forearm_keyValue")
field115.setAccessType("inputOutput")
field115.setType("MFRotation")
#no default value

ProtoInterface21.addField(field115)
field116 = x3d.field()
field116.setName("l_forearm_changed")
field116.setAccessType("outputOnly")
field116.setType("SFRotation")

ProtoInterface21.addField(field116)
field117 = x3d.field()
field117.setName("l_forefoot_key")
field117.setAccessType("inputOutput")
field117.setType("MFFloat")
#no default value

ProtoInterface21.addField(field117)
field118 = x3d.field()
field118.setName("l_forefoot_keyValue")
field118.setAccessType("inputOutput")
field118.setType("MFRotation")
#no default value

ProtoInterface21.addField(field118)
field119 = x3d.field()
field119.setName("l_forefoot_changed")
field119.setAccessType("outputOnly")
field119.setType("SFRotation")

ProtoInterface21.addField(field119)
field120 = x3d.field()
field120.setName("l_hand_key")
field120.setAccessType("inputOutput")
field120.setType("MFFloat")
#no default value

ProtoInterface21.addField(field120)
field121 = x3d.field()
field121.setName("l_hand_keyValue")
field121.setAccessType("inputOutput")
field121.setType("MFRotation")
#no default value

ProtoInterface21.addField(field121)
field122 = x3d.field()
field122.setName("l_hand_changed")
field122.setAccessType("outputOnly")
field122.setType("SFRotation")

ProtoInterface21.addField(field122)
field123 = x3d.field()
field123.setName("l_hindfoot_key")
field123.setAccessType("inputOutput")
field123.setType("MFFloat")
#no default value

ProtoInterface21.addField(field123)
field124 = x3d.field()
field124.setName("l_hindfoot_keyValue")
field124.setAccessType("inputOutput")
field124.setType("MFRotation")
#no default value

ProtoInterface21.addField(field124)
field125 = x3d.field()
field125.setName("l_hindfoot_changed")
field125.setAccessType("outputOnly")
field125.setType("SFRotation")

ProtoInterface21.addField(field125)
field126 = x3d.field()
field126.setName("l_hip_key")
field126.setAccessType("inputOutput")
field126.setType("MFFloat")
#no default value

ProtoInterface21.addField(field126)
field127 = x3d.field()
field127.setName("l_hip_keyValue")
field127.setAccessType("inputOutput")
field127.setType("MFRotation")
#no default value

ProtoInterface21.addField(field127)
field128 = x3d.field()
field128.setName("l_hip_changed")
field128.setAccessType("outputOnly")
field128.setType("SFRotation")

ProtoInterface21.addField(field128)
field129 = x3d.field()
field129.setName("l_index0_key")
field129.setAccessType("inputOutput")
field129.setType("MFFloat")
#no default value

ProtoInterface21.addField(field129)
field130 = x3d.field()
field130.setName("l_index0_keyValue")
field130.setAccessType("inputOutput")
field130.setType("MFRotation")
#no default value

ProtoInterface21.addField(field130)
field131 = x3d.field()
field131.setName("l_index0_changed")
field131.setAccessType("outputOnly")
field131.setType("SFRotation")

ProtoInterface21.addField(field131)
field132 = x3d.field()
field132.setName("l_index1_key")
field132.setAccessType("inputOutput")
field132.setType("MFFloat")
#no default value

ProtoInterface21.addField(field132)
field133 = x3d.field()
field133.setName("l_index1_keyValue")
field133.setAccessType("inputOutput")
field133.setType("MFRotation")
#no default value

ProtoInterface21.addField(field133)
field134 = x3d.field()
field134.setName("l_index1_changed")
field134.setAccessType("outputOnly")
field134.setType("SFRotation")

ProtoInterface21.addField(field134)
field135 = x3d.field()
field135.setName("l_index2_key")
field135.setAccessType("inputOutput")
field135.setType("MFFloat")
#no default value

ProtoInterface21.addField(field135)
field136 = x3d.field()
field136.setName("l_index2_keyValue")
field136.setAccessType("inputOutput")
field136.setType("MFRotation")
#no default value

ProtoInterface21.addField(field136)
field137 = x3d.field()
field137.setName("l_index2_changed")
field137.setAccessType("outputOnly")
field137.setType("SFRotation")

ProtoInterface21.addField(field137)
field138 = x3d.field()
field138.setName("l_index3_key")
field138.setAccessType("inputOutput")
field138.setType("MFFloat")
#no default value

ProtoInterface21.addField(field138)
field139 = x3d.field()
field139.setName("l_index3_keyValue")
field139.setAccessType("inputOutput")
field139.setType("MFRotation")
#no default value

ProtoInterface21.addField(field139)
field140 = x3d.field()
field140.setName("l_index3_changed")
field140.setAccessType("outputOnly")
field140.setType("SFRotation")

ProtoInterface21.addField(field140)
field141 = x3d.field()
field141.setName("l_index_distal_key")
field141.setAccessType("inputOutput")
field141.setType("MFFloat")
#no default value

ProtoInterface21.addField(field141)
field142 = x3d.field()
field142.setName("l_index_distal_keyValue")
field142.setAccessType("inputOutput")
field142.setType("MFRotation")
#no default value

ProtoInterface21.addField(field142)
field143 = x3d.field()
field143.setName("l_index_distal_changed")
field143.setAccessType("outputOnly")
field143.setType("SFRotation")

ProtoInterface21.addField(field143)
field144 = x3d.field()
field144.setName("l_index_metacarpal_key")
field144.setAccessType("inputOutput")
field144.setType("MFFloat")
#no default value

ProtoInterface21.addField(field144)
field145 = x3d.field()
field145.setName("l_index_metacarpal_keyValue")
field145.setAccessType("inputOutput")
field145.setType("MFRotation")
#no default value

ProtoInterface21.addField(field145)
field146 = x3d.field()
field146.setName("l_index_metacarpal_changed")
field146.setAccessType("outputOnly")
field146.setType("SFRotation")

ProtoInterface21.addField(field146)
field147 = x3d.field()
field147.setName("l_index_middle_key")
field147.setAccessType("inputOutput")
field147.setType("MFFloat")
#no default value

ProtoInterface21.addField(field147)
field148 = x3d.field()
field148.setName("l_index_middle_keyValue")
field148.setAccessType("inputOutput")
field148.setType("MFRotation")
#no default value

ProtoInterface21.addField(field148)
field149 = x3d.field()
field149.setName("l_index_middle_changed")
field149.setAccessType("outputOnly")
field149.setType("SFRotation")

ProtoInterface21.addField(field149)
field150 = x3d.field()
field150.setName("l_index_proximal_key")
field150.setAccessType("inputOutput")
field150.setType("MFFloat")
#no default value

ProtoInterface21.addField(field150)
field151 = x3d.field()
field151.setName("l_index_proximal_keyValue")
field151.setAccessType("inputOutput")
field151.setType("MFRotation")
#no default value

ProtoInterface21.addField(field151)
field152 = x3d.field()
field152.setName("l_index_proximal_changed")
field152.setAccessType("outputOnly")
field152.setType("SFRotation")

ProtoInterface21.addField(field152)
field153 = x3d.field()
field153.setName("l_knee_key")
field153.setAccessType("inputOutput")
field153.setType("MFFloat")
#no default value

ProtoInterface21.addField(field153)
field154 = x3d.field()
field154.setName("l_knee_keyValue")
field154.setAccessType("inputOutput")
field154.setType("MFRotation")
#no default value

ProtoInterface21.addField(field154)
field155 = x3d.field()
field155.setName("l_knee_changed")
field155.setAccessType("outputOnly")
field155.setType("SFRotation")

ProtoInterface21.addField(field155)
field156 = x3d.field()
field156.setName("l_metatarsal_key")
field156.setAccessType("inputOutput")
field156.setType("MFFloat")
#no default value

ProtoInterface21.addField(field156)
field157 = x3d.field()
field157.setName("l_metatarsal_keyValue")
field157.setAccessType("inputOutput")
field157.setType("MFRotation")
#no default value

ProtoInterface21.addField(field157)
field158 = x3d.field()
field158.setName("l_metatarsal_changed")
field158.setAccessType("outputOnly")
field158.setType("SFRotation")

ProtoInterface21.addField(field158)
field159 = x3d.field()
field159.setName("l_middistal_key")
field159.setAccessType("inputOutput")
field159.setType("MFFloat")
#no default value

ProtoInterface21.addField(field159)
field160 = x3d.field()
field160.setName("l_middistal_keyValue")
field160.setAccessType("inputOutput")
field160.setType("MFRotation")
#no default value

ProtoInterface21.addField(field160)
field161 = x3d.field()
field161.setName("l_middistal_changed")
field161.setAccessType("outputOnly")
field161.setType("SFRotation")

ProtoInterface21.addField(field161)
field162 = x3d.field()
field162.setName("l_middle0_key")
field162.setAccessType("inputOutput")
field162.setType("MFFloat")
#no default value

ProtoInterface21.addField(field162)
field163 = x3d.field()
field163.setName("l_middle0_keyValue")
field163.setAccessType("inputOutput")
field163.setType("MFRotation")
#no default value

ProtoInterface21.addField(field163)
field164 = x3d.field()
field164.setName("l_middle0_changed")
field164.setAccessType("outputOnly")
field164.setType("SFRotation")

ProtoInterface21.addField(field164)
field165 = x3d.field()
field165.setName("l_middle1_key")
field165.setAccessType("inputOutput")
field165.setType("MFFloat")
#no default value

ProtoInterface21.addField(field165)
field166 = x3d.field()
field166.setName("l_middle1_keyValue")
field166.setAccessType("inputOutput")
field166.setType("MFRotation")
#no default value

ProtoInterface21.addField(field166)
field167 = x3d.field()
field167.setName("l_middle1_changed")
field167.setAccessType("outputOnly")
field167.setType("SFRotation")

ProtoInterface21.addField(field167)
field168 = x3d.field()
field168.setName("l_middle2_key")
field168.setAccessType("inputOutput")
field168.setType("MFFloat")
#no default value

ProtoInterface21.addField(field168)
field169 = x3d.field()
field169.setName("l_middle2_keyValue")
field169.setAccessType("inputOutput")
field169.setType("MFRotation")
#no default value

ProtoInterface21.addField(field169)
field170 = x3d.field()
field170.setName("l_middle2_changed")
field170.setAccessType("outputOnly")
field170.setType("SFRotation")

ProtoInterface21.addField(field170)
field171 = x3d.field()
field171.setName("l_middle3_key")
field171.setAccessType("inputOutput")
field171.setType("MFFloat")
#no default value

ProtoInterface21.addField(field171)
field172 = x3d.field()
field172.setName("l_middle3_keyValue")
field172.setAccessType("inputOutput")
field172.setType("MFRotation")
#no default value

ProtoInterface21.addField(field172)
field173 = x3d.field()
field173.setName("l_middle3_changed")
field173.setAccessType("outputOnly")
field173.setType("SFRotation")

ProtoInterface21.addField(field173)
field174 = x3d.field()
field174.setName("l_middle_distal_key")
field174.setAccessType("inputOutput")
field174.setType("MFFloat")
#no default value

ProtoInterface21.addField(field174)
field175 = x3d.field()
field175.setName("l_middle_distal_keyValue")
field175.setAccessType("inputOutput")
field175.setType("MFRotation")
#no default value

ProtoInterface21.addField(field175)
field176 = x3d.field()
field176.setName("l_middle_distal_changed")
field176.setAccessType("outputOnly")
field176.setType("SFRotation")

ProtoInterface21.addField(field176)
field177 = x3d.field()
field177.setName("l_middle_metacarpal_key")
field177.setAccessType("inputOutput")
field177.setType("MFFloat")
#no default value

ProtoInterface21.addField(field177)
field178 = x3d.field()
field178.setName("l_middle_metacarpal_keyValue")
field178.setAccessType("inputOutput")
field178.setType("MFRotation")
#no default value

ProtoInterface21.addField(field178)
field179 = x3d.field()
field179.setName("l_middle_metacarpal_changed")
field179.setAccessType("outputOnly")
field179.setType("SFRotation")

ProtoInterface21.addField(field179)
field180 = x3d.field()
field180.setName("l_middle_middle_key")
field180.setAccessType("inputOutput")
field180.setType("MFFloat")
#no default value

ProtoInterface21.addField(field180)
field181 = x3d.field()
field181.setName("l_middle_middle_keyValue")
field181.setAccessType("inputOutput")
field181.setType("MFRotation")
#no default value

ProtoInterface21.addField(field181)
field182 = x3d.field()
field182.setName("l_middle_middle_changed")
field182.setAccessType("outputOnly")
field182.setType("SFRotation")

ProtoInterface21.addField(field182)
field183 = x3d.field()
field183.setName("l_middle_proximal_key")
field183.setAccessType("inputOutput")
field183.setType("MFFloat")
#no default value

ProtoInterface21.addField(field183)
field184 = x3d.field()
field184.setName("l_middle_proximal_keyValue")
field184.setAccessType("inputOutput")
field184.setType("MFRotation")
#no default value

ProtoInterface21.addField(field184)
field185 = x3d.field()
field185.setName("l_middle_proximal_changed")
field185.setAccessType("outputOnly")
field185.setType("SFRotation")

ProtoInterface21.addField(field185)
field186 = x3d.field()
field186.setName("l_midproximal_key")
field186.setAccessType("inputOutput")
field186.setType("MFFloat")
#no default value

ProtoInterface21.addField(field186)
field187 = x3d.field()
field187.setName("l_midproximal_keyValue")
field187.setAccessType("inputOutput")
field187.setType("MFRotation")
#no default value

ProtoInterface21.addField(field187)
field188 = x3d.field()
field188.setName("l_midproximal_changed")
field188.setAccessType("outputOnly")
field188.setType("SFRotation")

ProtoInterface21.addField(field188)
field189 = x3d.field()
field189.setName("l_midtarsal_key")
field189.setAccessType("inputOutput")
field189.setType("MFFloat")
#no default value

ProtoInterface21.addField(field189)
field190 = x3d.field()
field190.setName("l_midtarsal_keyValue")
field190.setAccessType("inputOutput")
field190.setType("MFRotation")
#no default value

ProtoInterface21.addField(field190)
field191 = x3d.field()
field191.setName("l_midtarsal_changed")
field191.setAccessType("outputOnly")
field191.setType("SFRotation")

ProtoInterface21.addField(field191)
field192 = x3d.field()
field192.setName("l_pinky0_key")
field192.setAccessType("inputOutput")
field192.setType("MFFloat")
#no default value

ProtoInterface21.addField(field192)
field193 = x3d.field()
field193.setName("l_pinky0_keyValue")
field193.setAccessType("inputOutput")
field193.setType("MFRotation")
#no default value

ProtoInterface21.addField(field193)
field194 = x3d.field()
field194.setName("l_pinky0_changed")
field194.setAccessType("outputOnly")
field194.setType("SFRotation")

ProtoInterface21.addField(field194)
field195 = x3d.field()
field195.setName("l_pinky1_key")
field195.setAccessType("inputOutput")
field195.setType("MFFloat")
#no default value

ProtoInterface21.addField(field195)
field196 = x3d.field()
field196.setName("l_pinky1_keyValue")
field196.setAccessType("inputOutput")
field196.setType("MFRotation")
#no default value

ProtoInterface21.addField(field196)
field197 = x3d.field()
field197.setName("l_pinky1_changed")
field197.setAccessType("outputOnly")
field197.setType("SFRotation")

ProtoInterface21.addField(field197)
field198 = x3d.field()
field198.setName("l_pinky2_key")
field198.setAccessType("inputOutput")
field198.setType("MFFloat")
#no default value

ProtoInterface21.addField(field198)
field199 = x3d.field()
field199.setName("l_pinky2_keyValue")
field199.setAccessType("inputOutput")
field199.setType("MFRotation")
#no default value

ProtoInterface21.addField(field199)
field200 = x3d.field()
field200.setName("l_pinky2_changed")
field200.setAccessType("outputOnly")
field200.setType("SFRotation")

ProtoInterface21.addField(field200)
field201 = x3d.field()
field201.setName("l_pinky3_key")
field201.setAccessType("inputOutput")
field201.setType("MFFloat")
#no default value

ProtoInterface21.addField(field201)
field202 = x3d.field()
field202.setName("l_pinky3_keyValue")
field202.setAccessType("inputOutput")
field202.setType("MFRotation")
#no default value

ProtoInterface21.addField(field202)
field203 = x3d.field()
field203.setName("l_pinky3_changed")
field203.setAccessType("outputOnly")
field203.setType("SFRotation")

ProtoInterface21.addField(field203)
field204 = x3d.field()
field204.setName("l_pinky_distal_key")
field204.setAccessType("inputOutput")
field204.setType("MFFloat")
#no default value

ProtoInterface21.addField(field204)
field205 = x3d.field()
field205.setName("l_pinky_distal_keyValue")
field205.setAccessType("inputOutput")
field205.setType("MFRotation")
#no default value

ProtoInterface21.addField(field205)
field206 = x3d.field()
field206.setName("l_pinky_distal_changed")
field206.setAccessType("outputOnly")
field206.setType("SFRotation")

ProtoInterface21.addField(field206)
field207 = x3d.field()
field207.setName("l_pinky_metacarpal_key")
field207.setAccessType("inputOutput")
field207.setType("MFFloat")
#no default value

ProtoInterface21.addField(field207)
field208 = x3d.field()
field208.setName("l_pinky_metacarpal_keyValue")
field208.setAccessType("inputOutput")
field208.setType("MFRotation")
#no default value

ProtoInterface21.addField(field208)
field209 = x3d.field()
field209.setName("l_pinky_metacarpal_changed")
field209.setAccessType("outputOnly")
field209.setType("SFRotation")

ProtoInterface21.addField(field209)
field210 = x3d.field()
field210.setName("l_pinky_middle_key")
field210.setAccessType("inputOutput")
field210.setType("MFFloat")
#no default value

ProtoInterface21.addField(field210)
field211 = x3d.field()
field211.setName("l_pinky_middle_keyValue")
field211.setAccessType("inputOutput")
field211.setType("MFRotation")
#no default value

ProtoInterface21.addField(field211)
field212 = x3d.field()
field212.setName("l_pinky_middle_changed")
field212.setAccessType("outputOnly")
field212.setType("SFRotation")

ProtoInterface21.addField(field212)
field213 = x3d.field()
field213.setName("l_pinky_proximal_key")
field213.setAccessType("inputOutput")
field213.setType("MFFloat")
#no default value

ProtoInterface21.addField(field213)
field214 = x3d.field()
field214.setName("l_pinky_proximal_keyValue")
field214.setAccessType("inputOutput")
field214.setType("MFRotation")
#no default value

ProtoInterface21.addField(field214)
field215 = x3d.field()
field215.setName("l_pinky_proximal_changed")
field215.setAccessType("outputOnly")
field215.setType("SFRotation")

ProtoInterface21.addField(field215)
field216 = x3d.field()
field216.setName("l_ring0_key")
field216.setAccessType("inputOutput")
field216.setType("MFFloat")
#no default value

ProtoInterface21.addField(field216)
field217 = x3d.field()
field217.setName("l_ring0_keyValue")
field217.setAccessType("inputOutput")
field217.setType("MFRotation")
#no default value

ProtoInterface21.addField(field217)
field218 = x3d.field()
field218.setName("l_ring0_changed")
field218.setAccessType("outputOnly")
field218.setType("SFRotation")

ProtoInterface21.addField(field218)
field219 = x3d.field()
field219.setName("l_ring1_key")
field219.setAccessType("inputOutput")
field219.setType("MFFloat")
#no default value

ProtoInterface21.addField(field219)
field220 = x3d.field()
field220.setName("l_ring1_keyValue")
field220.setAccessType("inputOutput")
field220.setType("MFRotation")
#no default value

ProtoInterface21.addField(field220)
field221 = x3d.field()
field221.setName("l_ring1_changed")
field221.setAccessType("outputOnly")
field221.setType("SFRotation")

ProtoInterface21.addField(field221)
field222 = x3d.field()
field222.setName("l_ring2_key")
field222.setAccessType("inputOutput")
field222.setType("MFFloat")
#no default value

ProtoInterface21.addField(field222)
field223 = x3d.field()
field223.setName("l_ring2_keyValue")
field223.setAccessType("inputOutput")
field223.setType("MFRotation")
#no default value

ProtoInterface21.addField(field223)
field224 = x3d.field()
field224.setName("l_ring2_changed")
field224.setAccessType("outputOnly")
field224.setType("SFRotation")

ProtoInterface21.addField(field224)
field225 = x3d.field()
field225.setName("l_ring3_key")
field225.setAccessType("inputOutput")
field225.setType("MFFloat")
#no default value

ProtoInterface21.addField(field225)
field226 = x3d.field()
field226.setName("l_ring3_keyValue")
field226.setAccessType("inputOutput")
field226.setType("MFRotation")
#no default value

ProtoInterface21.addField(field226)
field227 = x3d.field()
field227.setName("l_ring3_changed")
field227.setAccessType("outputOnly")
field227.setType("SFRotation")

ProtoInterface21.addField(field227)
field228 = x3d.field()
field228.setName("l_ring_distal_key")
field228.setAccessType("inputOutput")
field228.setType("MFFloat")
#no default value

ProtoInterface21.addField(field228)
field229 = x3d.field()
field229.setName("l_ring_distal_keyValue")
field229.setAccessType("inputOutput")
field229.setType("MFRotation")
#no default value

ProtoInterface21.addField(field229)
field230 = x3d.field()
field230.setName("l_ring_distal_changed")
field230.setAccessType("outputOnly")
field230.setType("SFRotation")

ProtoInterface21.addField(field230)
field231 = x3d.field()
field231.setName("l_ring_metacarpal_key")
field231.setAccessType("inputOutput")
field231.setType("MFFloat")
#no default value

ProtoInterface21.addField(field231)
field232 = x3d.field()
field232.setName("l_ring_metacarpal_keyValue")
field232.setAccessType("inputOutput")
field232.setType("MFRotation")
#no default value

ProtoInterface21.addField(field232)
field233 = x3d.field()
field233.setName("l_ring_metacarpal_changed")
field233.setAccessType("outputOnly")
field233.setType("SFRotation")

ProtoInterface21.addField(field233)
field234 = x3d.field()
field234.setName("l_ring_middle_key")
field234.setAccessType("inputOutput")
field234.setType("MFFloat")
#no default value

ProtoInterface21.addField(field234)
field235 = x3d.field()
field235.setName("l_ring_middle_keyValue")
field235.setAccessType("inputOutput")
field235.setType("MFRotation")
#no default value

ProtoInterface21.addField(field235)
field236 = x3d.field()
field236.setName("l_ring_middle_changed")
field236.setAccessType("outputOnly")
field236.setType("SFRotation")

ProtoInterface21.addField(field236)
field237 = x3d.field()
field237.setName("l_ring_proximal_key")
field237.setAccessType("inputOutput")
field237.setType("MFFloat")
#no default value

ProtoInterface21.addField(field237)
field238 = x3d.field()
field238.setName("l_ring_proximal_keyValue")
field238.setAccessType("inputOutput")
field238.setType("MFRotation")
#no default value

ProtoInterface21.addField(field238)
field239 = x3d.field()
field239.setName("l_ring_proximal_changed")
field239.setAccessType("outputOnly")
field239.setType("SFRotation")

ProtoInterface21.addField(field239)
field240 = x3d.field()
field240.setName("l_scapula_key")
field240.setAccessType("inputOutput")
field240.setType("MFFloat")
#no default value

ProtoInterface21.addField(field240)
field241 = x3d.field()
field241.setName("l_scapula_keyValue")
field241.setAccessType("inputOutput")
field241.setType("MFRotation")
#no default value

ProtoInterface21.addField(field241)
field242 = x3d.field()
field242.setName("l_scapula_changed")
field242.setAccessType("outputOnly")
field242.setType("SFRotation")

ProtoInterface21.addField(field242)
field243 = x3d.field()
field243.setName("l_shoulder_key")
field243.setAccessType("inputOutput")
field243.setType("MFFloat")
#no default value

ProtoInterface21.addField(field243)
field244 = x3d.field()
field244.setName("l_shoulder_keyValue")
field244.setAccessType("inputOutput")
field244.setType("MFRotation")
#no default value

ProtoInterface21.addField(field244)
field245 = x3d.field()
field245.setName("l_shoulder_changed")
field245.setAccessType("outputOnly")
field245.setType("SFRotation")

ProtoInterface21.addField(field245)
field246 = x3d.field()
field246.setName("l_sternoclavicular_key")
field246.setAccessType("inputOutput")
field246.setType("MFFloat")
#no default value

ProtoInterface21.addField(field246)
field247 = x3d.field()
field247.setName("l_sternoclavicular_keyValue")
field247.setAccessType("inputOutput")
field247.setType("MFRotation")
#no default value

ProtoInterface21.addField(field247)
field248 = x3d.field()
field248.setName("l_sternoclavicular_changed")
field248.setAccessType("outputOnly")
field248.setType("SFRotation")

ProtoInterface21.addField(field248)
field249 = x3d.field()
field249.setName("l_subtalar_key")
field249.setAccessType("inputOutput")
field249.setType("MFFloat")
#no default value

ProtoInterface21.addField(field249)
field250 = x3d.field()
field250.setName("l_subtalar_keyValue")
field250.setAccessType("inputOutput")
field250.setType("MFRotation")
#no default value

ProtoInterface21.addField(field250)
field251 = x3d.field()
field251.setName("l_subtalar_changed")
field251.setAccessType("outputOnly")
field251.setType("SFRotation")

ProtoInterface21.addField(field251)
field252 = x3d.field()
field252.setName("l_thigh_key")
field252.setAccessType("inputOutput")
field252.setType("MFFloat")
#no default value

ProtoInterface21.addField(field252)
field253 = x3d.field()
field253.setName("l_thigh_keyValue")
field253.setAccessType("inputOutput")
field253.setType("MFRotation")
#no default value

ProtoInterface21.addField(field253)
field254 = x3d.field()
field254.setName("l_thigh_changed")
field254.setAccessType("outputOnly")
field254.setType("SFRotation")

ProtoInterface21.addField(field254)
field255 = x3d.field()
field255.setName("l_thumb1_key")
field255.setAccessType("inputOutput")
field255.setType("MFFloat")
#no default value

ProtoInterface21.addField(field255)
field256 = x3d.field()
field256.setName("l_thumb1_keyValue")
field256.setAccessType("inputOutput")
field256.setType("MFRotation")
#no default value

ProtoInterface21.addField(field256)
field257 = x3d.field()
field257.setName("l_thumb1_changed")
field257.setAccessType("outputOnly")
field257.setType("SFRotation")

ProtoInterface21.addField(field257)
field258 = x3d.field()
field258.setName("l_thumb2_key")
field258.setAccessType("inputOutput")
field258.setType("MFFloat")
#no default value

ProtoInterface21.addField(field258)
field259 = x3d.field()
field259.setName("l_thumb2_keyValue")
field259.setAccessType("inputOutput")
field259.setType("MFRotation")
#no default value

ProtoInterface21.addField(field259)
field260 = x3d.field()
field260.setName("l_thumb2_changed")
field260.setAccessType("outputOnly")
field260.setType("SFRotation")

ProtoInterface21.addField(field260)
field261 = x3d.field()
field261.setName("l_thumb3_key")
field261.setAccessType("inputOutput")
field261.setType("MFFloat")
#no default value

ProtoInterface21.addField(field261)
field262 = x3d.field()
field262.setName("l_thumb3_keyValue")
field262.setAccessType("inputOutput")
field262.setType("MFRotation")
#no default value

ProtoInterface21.addField(field262)
field263 = x3d.field()
field263.setName("l_thumb3_changed")
field263.setAccessType("outputOnly")
field263.setType("SFRotation")

ProtoInterface21.addField(field263)
field264 = x3d.field()
field264.setName("l_thumb_distal_key")
field264.setAccessType("inputOutput")
field264.setType("MFFloat")
#no default value

ProtoInterface21.addField(field264)
field265 = x3d.field()
field265.setName("l_thumb_distal_keyValue")
field265.setAccessType("inputOutput")
field265.setType("MFRotation")
#no default value

ProtoInterface21.addField(field265)
field266 = x3d.field()
field266.setName("l_thumb_distal_changed")
field266.setAccessType("outputOnly")
field266.setType("SFRotation")

ProtoInterface21.addField(field266)
field267 = x3d.field()
field267.setName("l_thumb_metacarpal_key")
field267.setAccessType("inputOutput")
field267.setType("MFFloat")
#no default value

ProtoInterface21.addField(field267)
field268 = x3d.field()
field268.setName("l_thumb_metacarpal_keyValue")
field268.setAccessType("inputOutput")
field268.setType("MFRotation")
#no default value

ProtoInterface21.addField(field268)
field269 = x3d.field()
field269.setName("l_thumb_metacarpal_changed")
field269.setAccessType("outputOnly")
field269.setType("SFRotation")

ProtoInterface21.addField(field269)
field270 = x3d.field()
field270.setName("l_thumb_proximal_key")
field270.setAccessType("inputOutput")
field270.setType("MFFloat")
#no default value

ProtoInterface21.addField(field270)
field271 = x3d.field()
field271.setName("l_thumb_proximal_keyValue")
field271.setAccessType("inputOutput")
field271.setType("MFRotation")
#no default value

ProtoInterface21.addField(field271)
field272 = x3d.field()
field272.setName("l_thumb_proximal_changed")
field272.setAccessType("outputOnly")
field272.setType("SFRotation")

ProtoInterface21.addField(field272)
field273 = x3d.field()
field273.setName("l_upperarm_key")
field273.setAccessType("inputOutput")
field273.setType("MFFloat")
#no default value

ProtoInterface21.addField(field273)
field274 = x3d.field()
field274.setName("l_upperarm_keyValue")
field274.setAccessType("inputOutput")
field274.setType("MFRotation")
#no default value

ProtoInterface21.addField(field274)
field275 = x3d.field()
field275.setName("l_upperarm_changed")
field275.setAccessType("outputOnly")
field275.setType("SFRotation")

ProtoInterface21.addField(field275)
field276 = x3d.field()
field276.setName("l_wrist_key")
field276.setAccessType("inputOutput")
field276.setType("MFFloat")
#no default value

ProtoInterface21.addField(field276)
field277 = x3d.field()
field277.setName("l_wrist_keyValue")
field277.setAccessType("inputOutput")
field277.setType("MFRotation")
#no default value

ProtoInterface21.addField(field277)
field278 = x3d.field()
field278.setName("l_wrist_changed")
field278.setAccessType("outputOnly")
field278.setType("SFRotation")

ProtoInterface21.addField(field278)
field279 = x3d.field()
field279.setName("pelvis_key")
field279.setAccessType("inputOutput")
field279.setType("MFFloat")
#no default value

ProtoInterface21.addField(field279)
field280 = x3d.field()
field280.setName("pelvis_keyValue")
field280.setAccessType("inputOutput")
field280.setType("MFRotation")
#no default value

ProtoInterface21.addField(field280)
field281 = x3d.field()
field281.setName("pelvis_changed")
field281.setAccessType("outputOnly")
field281.setType("SFRotation")

ProtoInterface21.addField(field281)
field282 = x3d.field()
field282.setName("r_acromioclavicular_key")
field282.setAccessType("inputOutput")
field282.setType("MFFloat")
#no default value

ProtoInterface21.addField(field282)
field283 = x3d.field()
field283.setName("r_acromioclavicular_keyValue")
field283.setAccessType("inputOutput")
field283.setType("MFRotation")
#no default value

ProtoInterface21.addField(field283)
field284 = x3d.field()
field284.setName("r_acromioclavicular_changed")
field284.setAccessType("outputOnly")
field284.setType("SFRotation")

ProtoInterface21.addField(field284)
field285 = x3d.field()
field285.setName("r_ankle_key")
field285.setAccessType("inputOutput")
field285.setType("MFFloat")
#no default value

ProtoInterface21.addField(field285)
field286 = x3d.field()
field286.setName("r_ankle_keyValue")
field286.setAccessType("inputOutput")
field286.setType("MFRotation")
#no default value

ProtoInterface21.addField(field286)
field287 = x3d.field()
field287.setName("r_ankle_changed")
field287.setAccessType("outputOnly")
field287.setType("SFRotation")

ProtoInterface21.addField(field287)
field288 = x3d.field()
field288.setName("r_calf_key")
field288.setAccessType("inputOutput")
field288.setType("MFFloat")
#no default value

ProtoInterface21.addField(field288)
field289 = x3d.field()
field289.setName("r_calf_keyValue")
field289.setAccessType("inputOutput")
field289.setType("MFRotation")
#no default value

ProtoInterface21.addField(field289)
field290 = x3d.field()
field290.setName("r_calf_changed")
field290.setAccessType("outputOnly")
field290.setType("SFRotation")

ProtoInterface21.addField(field290)
field291 = x3d.field()
field291.setName("r_clavicle_key")
field291.setAccessType("inputOutput")
field291.setType("MFFloat")
#no default value

ProtoInterface21.addField(field291)
field292 = x3d.field()
field292.setName("r_clavicle_keyValue")
field292.setAccessType("inputOutput")
field292.setType("MFRotation")
#no default value

ProtoInterface21.addField(field292)
field293 = x3d.field()
field293.setName("r_clavicle_changed")
field293.setAccessType("outputOnly")
field293.setType("SFRotation")

ProtoInterface21.addField(field293)
field294 = x3d.field()
field294.setName("r_elbow_key")
field294.setAccessType("inputOutput")
field294.setType("MFFloat")
#no default value

ProtoInterface21.addField(field294)
field295 = x3d.field()
field295.setName("r_elbow_keyValue")
field295.setAccessType("inputOutput")
field295.setType("MFRotation")
#no default value

ProtoInterface21.addField(field295)
field296 = x3d.field()
field296.setName("r_elbow_changed")
field296.setAccessType("outputOnly")
field296.setType("SFRotation")

ProtoInterface21.addField(field296)
field297 = x3d.field()
field297.setName("r_eyeball_key")
field297.setAccessType("inputOutput")
field297.setType("MFFloat")
#no default value

ProtoInterface21.addField(field297)
field298 = x3d.field()
field298.setName("r_eyeball_keyValue")
field298.setAccessType("inputOutput")
field298.setType("MFRotation")
#no default value

ProtoInterface21.addField(field298)
field299 = x3d.field()
field299.setName("r_eyeball_changed")
field299.setAccessType("outputOnly")
field299.setType("SFRotation")

ProtoInterface21.addField(field299)
field300 = x3d.field()
field300.setName("r_eyeball_joint_key")
field300.setAccessType("inputOutput")
field300.setType("MFFloat")
#no default value

ProtoInterface21.addField(field300)
field301 = x3d.field()
field301.setName("r_eyeball_joint_keyValue")
field301.setAccessType("inputOutput")
field301.setType("MFRotation")
#no default value

ProtoInterface21.addField(field301)
field302 = x3d.field()
field302.setName("r_eyeball_joint_changed")
field302.setAccessType("outputOnly")
field302.setType("SFRotation")

ProtoInterface21.addField(field302)
field303 = x3d.field()
field303.setName("r_eyebrow_key")
field303.setAccessType("inputOutput")
field303.setType("MFFloat")
#no default value

ProtoInterface21.addField(field303)
field304 = x3d.field()
field304.setName("r_eyebrow_keyValue")
field304.setAccessType("inputOutput")
field304.setType("MFRotation")
#no default value

ProtoInterface21.addField(field304)
field305 = x3d.field()
field305.setName("r_eyebrow_changed")
field305.setAccessType("outputOnly")
field305.setType("SFRotation")

ProtoInterface21.addField(field305)
field306 = x3d.field()
field306.setName("r_eyebrow_joint_key")
field306.setAccessType("inputOutput")
field306.setType("MFFloat")
#no default value

ProtoInterface21.addField(field306)
field307 = x3d.field()
field307.setName("r_eyebrow_joint_keyValue")
field307.setAccessType("inputOutput")
field307.setType("MFRotation")
#no default value

ProtoInterface21.addField(field307)
field308 = x3d.field()
field308.setName("r_eyebrow_joint_changed")
field308.setAccessType("outputOnly")
field308.setType("SFRotation")

ProtoInterface21.addField(field308)
field309 = x3d.field()
field309.setName("r_eyelid_key")
field309.setAccessType("inputOutput")
field309.setType("MFFloat")
#no default value

ProtoInterface21.addField(field309)
field310 = x3d.field()
field310.setName("r_eyelid_keyValue")
field310.setAccessType("inputOutput")
field310.setType("MFRotation")
#no default value

ProtoInterface21.addField(field310)
field311 = x3d.field()
field311.setName("r_eyelid_changed")
field311.setAccessType("outputOnly")
field311.setType("SFRotation")

ProtoInterface21.addField(field311)
field312 = x3d.field()
field312.setName("r_eyelid_joint_key")
field312.setAccessType("inputOutput")
field312.setType("MFFloat")
#no default value

ProtoInterface21.addField(field312)
field313 = x3d.field()
field313.setName("r_eyelid_joint_keyValue")
field313.setAccessType("inputOutput")
field313.setType("MFRotation")
#no default value

ProtoInterface21.addField(field313)
field314 = x3d.field()
field314.setName("r_eyelid_joint_changed")
field314.setAccessType("outputOnly")
field314.setType("SFRotation")

ProtoInterface21.addField(field314)
field315 = x3d.field()
field315.setName("r_forearm_key")
field315.setAccessType("inputOutput")
field315.setType("MFFloat")
#no default value

ProtoInterface21.addField(field315)
field316 = x3d.field()
field316.setName("r_forearm_keyValue")
field316.setAccessType("inputOutput")
field316.setType("MFRotation")
#no default value

ProtoInterface21.addField(field316)
field317 = x3d.field()
field317.setName("r_forearm_changed")
field317.setAccessType("outputOnly")
field317.setType("SFRotation")

ProtoInterface21.addField(field317)
field318 = x3d.field()
field318.setName("r_forefoot_key")
field318.setAccessType("inputOutput")
field318.setType("MFFloat")
#no default value

ProtoInterface21.addField(field318)
field319 = x3d.field()
field319.setName("r_forefoot_keyValue")
field319.setAccessType("inputOutput")
field319.setType("MFRotation")
#no default value

ProtoInterface21.addField(field319)
field320 = x3d.field()
field320.setName("r_forefoot_changed")
field320.setAccessType("outputOnly")
field320.setType("SFRotation")

ProtoInterface21.addField(field320)
field321 = x3d.field()
field321.setName("r_hand_key")
field321.setAccessType("inputOutput")
field321.setType("MFFloat")
#no default value

ProtoInterface21.addField(field321)
field322 = x3d.field()
field322.setName("r_hand_keyValue")
field322.setAccessType("inputOutput")
field322.setType("MFRotation")
#no default value

ProtoInterface21.addField(field322)
field323 = x3d.field()
field323.setName("r_hand_changed")
field323.setAccessType("outputOnly")
field323.setType("SFRotation")

ProtoInterface21.addField(field323)
field324 = x3d.field()
field324.setName("r_hindfoot_key")
field324.setAccessType("inputOutput")
field324.setType("MFFloat")
#no default value

ProtoInterface21.addField(field324)
field325 = x3d.field()
field325.setName("r_hindfoot_keyValue")
field325.setAccessType("inputOutput")
field325.setType("MFRotation")
#no default value

ProtoInterface21.addField(field325)
field326 = x3d.field()
field326.setName("r_hindfoot_changed")
field326.setAccessType("outputOnly")
field326.setType("SFRotation")

ProtoInterface21.addField(field326)
field327 = x3d.field()
field327.setName("r_hip_key")
field327.setAccessType("inputOutput")
field327.setType("MFFloat")
#no default value

ProtoInterface21.addField(field327)
field328 = x3d.field()
field328.setName("r_hip_keyValue")
field328.setAccessType("inputOutput")
field328.setType("MFRotation")
#no default value

ProtoInterface21.addField(field328)
field329 = x3d.field()
field329.setName("r_hip_changed")
field329.setAccessType("outputOnly")
field329.setType("SFRotation")

ProtoInterface21.addField(field329)
field330 = x3d.field()
field330.setName("r_index0_key")
field330.setAccessType("inputOutput")
field330.setType("MFFloat")
#no default value

ProtoInterface21.addField(field330)
field331 = x3d.field()
field331.setName("r_index0_keyValue")
field331.setAccessType("inputOutput")
field331.setType("MFRotation")
#no default value

ProtoInterface21.addField(field331)
field332 = x3d.field()
field332.setName("r_index0_changed")
field332.setAccessType("outputOnly")
field332.setType("SFRotation")

ProtoInterface21.addField(field332)
field333 = x3d.field()
field333.setName("r_index1_key")
field333.setAccessType("inputOutput")
field333.setType("MFFloat")
#no default value

ProtoInterface21.addField(field333)
field334 = x3d.field()
field334.setName("r_index1_keyValue")
field334.setAccessType("inputOutput")
field334.setType("MFRotation")
#no default value

ProtoInterface21.addField(field334)
field335 = x3d.field()
field335.setName("r_index1_changed")
field335.setAccessType("outputOnly")
field335.setType("SFRotation")

ProtoInterface21.addField(field335)
field336 = x3d.field()
field336.setName("r_index2_key")
field336.setAccessType("inputOutput")
field336.setType("MFFloat")
#no default value

ProtoInterface21.addField(field336)
field337 = x3d.field()
field337.setName("r_index2_keyValue")
field337.setAccessType("inputOutput")
field337.setType("MFRotation")
#no default value

ProtoInterface21.addField(field337)
field338 = x3d.field()
field338.setName("r_index2_changed")
field338.setAccessType("outputOnly")
field338.setType("SFRotation")

ProtoInterface21.addField(field338)
field339 = x3d.field()
field339.setName("r_index3_key")
field339.setAccessType("inputOutput")
field339.setType("MFFloat")
#no default value

ProtoInterface21.addField(field339)
field340 = x3d.field()
field340.setName("r_index3_keyValue")
field340.setAccessType("inputOutput")
field340.setType("MFRotation")
#no default value

ProtoInterface21.addField(field340)
field341 = x3d.field()
field341.setName("r_index3_changed")
field341.setAccessType("outputOnly")
field341.setType("SFRotation")

ProtoInterface21.addField(field341)
field342 = x3d.field()
field342.setName("r_index_distal_key")
field342.setAccessType("inputOutput")
field342.setType("MFFloat")
#no default value

ProtoInterface21.addField(field342)
field343 = x3d.field()
field343.setName("r_index_distal_keyValue")
field343.setAccessType("inputOutput")
field343.setType("MFRotation")
#no default value

ProtoInterface21.addField(field343)
field344 = x3d.field()
field344.setName("r_index_distal_changed")
field344.setAccessType("outputOnly")
field344.setType("SFRotation")

ProtoInterface21.addField(field344)
field345 = x3d.field()
field345.setName("r_index_metacarpal_key")
field345.setAccessType("inputOutput")
field345.setType("MFFloat")
#no default value

ProtoInterface21.addField(field345)
field346 = x3d.field()
field346.setName("r_index_metacarpal_keyValue")
field346.setAccessType("inputOutput")
field346.setType("MFRotation")
#no default value

ProtoInterface21.addField(field346)
field347 = x3d.field()
field347.setName("r_index_metacarpal_changed")
field347.setAccessType("outputOnly")
field347.setType("SFRotation")

ProtoInterface21.addField(field347)
field348 = x3d.field()
field348.setName("r_index_middle_key")
field348.setAccessType("inputOutput")
field348.setType("MFFloat")
#no default value

ProtoInterface21.addField(field348)
field349 = x3d.field()
field349.setName("r_index_middle_keyValue")
field349.setAccessType("inputOutput")
field349.setType("MFRotation")
#no default value

ProtoInterface21.addField(field349)
field350 = x3d.field()
field350.setName("r_index_middle_changed")
field350.setAccessType("outputOnly")
field350.setType("SFRotation")

ProtoInterface21.addField(field350)
field351 = x3d.field()
field351.setName("r_index_proximal_key")
field351.setAccessType("inputOutput")
field351.setType("MFFloat")
#no default value

ProtoInterface21.addField(field351)
field352 = x3d.field()
field352.setName("r_index_proximal_keyValue")
field352.setAccessType("inputOutput")
field352.setType("MFRotation")
#no default value

ProtoInterface21.addField(field352)
field353 = x3d.field()
field353.setName("r_index_proximal_changed")
field353.setAccessType("outputOnly")
field353.setType("SFRotation")

ProtoInterface21.addField(field353)
field354 = x3d.field()
field354.setName("r_knee_key")
field354.setAccessType("inputOutput")
field354.setType("MFFloat")
#no default value

ProtoInterface21.addField(field354)
field355 = x3d.field()
field355.setName("r_knee_keyValue")
field355.setAccessType("inputOutput")
field355.setType("MFRotation")
#no default value

ProtoInterface21.addField(field355)
field356 = x3d.field()
field356.setName("r_knee_changed")
field356.setAccessType("outputOnly")
field356.setType("SFRotation")

ProtoInterface21.addField(field356)
field357 = x3d.field()
field357.setName("r_metatarsal_key")
field357.setAccessType("inputOutput")
field357.setType("MFFloat")
#no default value

ProtoInterface21.addField(field357)
field358 = x3d.field()
field358.setName("r_metatarsal_keyValue")
field358.setAccessType("inputOutput")
field358.setType("MFRotation")
#no default value

ProtoInterface21.addField(field358)
field359 = x3d.field()
field359.setName("r_metatarsal_changed")
field359.setAccessType("outputOnly")
field359.setType("SFRotation")

ProtoInterface21.addField(field359)
field360 = x3d.field()
field360.setName("r_middistal_key")
field360.setAccessType("inputOutput")
field360.setType("MFFloat")
#no default value

ProtoInterface21.addField(field360)
field361 = x3d.field()
field361.setName("r_middistal_keyValue")
field361.setAccessType("inputOutput")
field361.setType("MFRotation")
#no default value

ProtoInterface21.addField(field361)
field362 = x3d.field()
field362.setName("r_middistal_changed")
field362.setAccessType("outputOnly")
field362.setType("SFRotation")

ProtoInterface21.addField(field362)
field363 = x3d.field()
field363.setName("r_middle0_key")
field363.setAccessType("inputOutput")
field363.setType("MFFloat")
#no default value

ProtoInterface21.addField(field363)
field364 = x3d.field()
field364.setName("r_middle0_keyValue")
field364.setAccessType("inputOutput")
field364.setType("MFRotation")
#no default value

ProtoInterface21.addField(field364)
field365 = x3d.field()
field365.setName("r_middle0_changed")
field365.setAccessType("outputOnly")
field365.setType("SFRotation")

ProtoInterface21.addField(field365)
field366 = x3d.field()
field366.setName("r_middle1_key")
field366.setAccessType("inputOutput")
field366.setType("MFFloat")
#no default value

ProtoInterface21.addField(field366)
field367 = x3d.field()
field367.setName("r_middle1_keyValue")
field367.setAccessType("inputOutput")
field367.setType("MFRotation")
#no default value

ProtoInterface21.addField(field367)
field368 = x3d.field()
field368.setName("r_middle1_changed")
field368.setAccessType("outputOnly")
field368.setType("SFRotation")

ProtoInterface21.addField(field368)
field369 = x3d.field()
field369.setName("r_middle2_key")
field369.setAccessType("inputOutput")
field369.setType("MFFloat")
#no default value

ProtoInterface21.addField(field369)
field370 = x3d.field()
field370.setName("r_middle2_keyValue")
field370.setAccessType("inputOutput")
field370.setType("MFRotation")
#no default value

ProtoInterface21.addField(field370)
field371 = x3d.field()
field371.setName("r_middle2_changed")
field371.setAccessType("outputOnly")
field371.setType("SFRotation")

ProtoInterface21.addField(field371)
field372 = x3d.field()
field372.setName("r_middle3_key")
field372.setAccessType("inputOutput")
field372.setType("MFFloat")
#no default value

ProtoInterface21.addField(field372)
field373 = x3d.field()
field373.setName("r_middle3_keyValue")
field373.setAccessType("inputOutput")
field373.setType("MFRotation")
#no default value

ProtoInterface21.addField(field373)
field374 = x3d.field()
field374.setName("r_middle3_changed")
field374.setAccessType("outputOnly")
field374.setType("SFRotation")

ProtoInterface21.addField(field374)
field375 = x3d.field()
field375.setName("r_middle_distal_key")
field375.setAccessType("inputOutput")
field375.setType("MFFloat")
#no default value

ProtoInterface21.addField(field375)
field376 = x3d.field()
field376.setName("r_middle_distal_keyValue")
field376.setAccessType("inputOutput")
field376.setType("MFRotation")
#no default value

ProtoInterface21.addField(field376)
field377 = x3d.field()
field377.setName("r_middle_distal_changed")
field377.setAccessType("outputOnly")
field377.setType("SFRotation")

ProtoInterface21.addField(field377)
field378 = x3d.field()
field378.setName("r_middle_metacarpal_key")
field378.setAccessType("inputOutput")
field378.setType("MFFloat")
#no default value

ProtoInterface21.addField(field378)
field379 = x3d.field()
field379.setName("r_middle_metacarpal_keyValue")
field379.setAccessType("inputOutput")
field379.setType("MFRotation")
#no default value

ProtoInterface21.addField(field379)
field380 = x3d.field()
field380.setName("r_middle_metacarpal_changed")
field380.setAccessType("outputOnly")
field380.setType("SFRotation")

ProtoInterface21.addField(field380)
field381 = x3d.field()
field381.setName("r_middle_middle_key")
field381.setAccessType("inputOutput")
field381.setType("MFFloat")
#no default value

ProtoInterface21.addField(field381)
field382 = x3d.field()
field382.setName("r_middle_middle_keyValue")
field382.setAccessType("inputOutput")
field382.setType("MFRotation")
#no default value

ProtoInterface21.addField(field382)
field383 = x3d.field()
field383.setName("r_middle_middle_changed")
field383.setAccessType("outputOnly")
field383.setType("SFRotation")

ProtoInterface21.addField(field383)
field384 = x3d.field()
field384.setName("r_middle_proximal_key")
field384.setAccessType("inputOutput")
field384.setType("MFFloat")
#no default value

ProtoInterface21.addField(field384)
field385 = x3d.field()
field385.setName("r_middle_proximal_keyValue")
field385.setAccessType("inputOutput")
field385.setType("MFRotation")
#no default value

ProtoInterface21.addField(field385)
field386 = x3d.field()
field386.setName("r_middle_proximal_changed")
field386.setAccessType("outputOnly")
field386.setType("SFRotation")

ProtoInterface21.addField(field386)
field387 = x3d.field()
field387.setName("r_midproximal_key")
field387.setAccessType("inputOutput")
field387.setType("MFFloat")
#no default value

ProtoInterface21.addField(field387)
field388 = x3d.field()
field388.setName("r_midproximal_keyValue")
field388.setAccessType("inputOutput")
field388.setType("MFRotation")
#no default value

ProtoInterface21.addField(field388)
field389 = x3d.field()
field389.setName("r_midproximal_changed")
field389.setAccessType("outputOnly")
field389.setType("SFRotation")

ProtoInterface21.addField(field389)
field390 = x3d.field()
field390.setName("r_midtarsal_key")
field390.setAccessType("inputOutput")
field390.setType("MFFloat")
#no default value

ProtoInterface21.addField(field390)
field391 = x3d.field()
field391.setName("r_midtarsal_keyValue")
field391.setAccessType("inputOutput")
field391.setType("MFRotation")
#no default value

ProtoInterface21.addField(field391)
field392 = x3d.field()
field392.setName("r_midtarsal_changed")
field392.setAccessType("outputOnly")
field392.setType("SFRotation")

ProtoInterface21.addField(field392)
field393 = x3d.field()
field393.setName("r_pinky0_key")
field393.setAccessType("inputOutput")
field393.setType("MFFloat")
#no default value

ProtoInterface21.addField(field393)
field394 = x3d.field()
field394.setName("r_pinky0_keyValue")
field394.setAccessType("inputOutput")
field394.setType("MFRotation")
#no default value

ProtoInterface21.addField(field394)
field395 = x3d.field()
field395.setName("r_pinky0_changed")
field395.setAccessType("outputOnly")
field395.setType("SFRotation")

ProtoInterface21.addField(field395)
field396 = x3d.field()
field396.setName("r_pinky1_key")
field396.setAccessType("inputOutput")
field396.setType("MFFloat")
#no default value

ProtoInterface21.addField(field396)
field397 = x3d.field()
field397.setName("r_pinky1_keyValue")
field397.setAccessType("inputOutput")
field397.setType("MFRotation")
#no default value

ProtoInterface21.addField(field397)
field398 = x3d.field()
field398.setName("r_pinky1_changed")
field398.setAccessType("outputOnly")
field398.setType("SFRotation")

ProtoInterface21.addField(field398)
field399 = x3d.field()
field399.setName("r_pinky2_key")
field399.setAccessType("inputOutput")
field399.setType("MFFloat")
#no default value

ProtoInterface21.addField(field399)
field400 = x3d.field()
field400.setName("r_pinky2_keyValue")
field400.setAccessType("inputOutput")
field400.setType("MFRotation")
#no default value

ProtoInterface21.addField(field400)
field401 = x3d.field()
field401.setName("r_pinky2_changed")
field401.setAccessType("outputOnly")
field401.setType("SFRotation")

ProtoInterface21.addField(field401)
field402 = x3d.field()
field402.setName("r_pinky3_key")
field402.setAccessType("inputOutput")
field402.setType("MFFloat")
#no default value

ProtoInterface21.addField(field402)
field403 = x3d.field()
field403.setName("r_pinky3_keyValue")
field403.setAccessType("inputOutput")
field403.setType("MFRotation")
#no default value

ProtoInterface21.addField(field403)
field404 = x3d.field()
field404.setName("r_pinky3_changed")
field404.setAccessType("outputOnly")
field404.setType("SFRotation")

ProtoInterface21.addField(field404)
field405 = x3d.field()
field405.setName("r_pinky_distal_key")
field405.setAccessType("inputOutput")
field405.setType("MFFloat")
#no default value

ProtoInterface21.addField(field405)
field406 = x3d.field()
field406.setName("r_pinky_distal_keyValue")
field406.setAccessType("inputOutput")
field406.setType("MFRotation")
#no default value

ProtoInterface21.addField(field406)
field407 = x3d.field()
field407.setName("r_pinky_distal_changed")
field407.setAccessType("outputOnly")
field407.setType("SFRotation")

ProtoInterface21.addField(field407)
field408 = x3d.field()
field408.setName("r_pinky_metacarpal_key")
field408.setAccessType("inputOutput")
field408.setType("MFFloat")
#no default value

ProtoInterface21.addField(field408)
field409 = x3d.field()
field409.setName("r_pinky_metacarpal_keyValue")
field409.setAccessType("inputOutput")
field409.setType("MFRotation")
#no default value

ProtoInterface21.addField(field409)
field410 = x3d.field()
field410.setName("r_pinky_metacarpal_changed")
field410.setAccessType("outputOnly")
field410.setType("SFRotation")

ProtoInterface21.addField(field410)
field411 = x3d.field()
field411.setName("r_pinky_middle_key")
field411.setAccessType("inputOutput")
field411.setType("MFFloat")
#no default value

ProtoInterface21.addField(field411)
field412 = x3d.field()
field412.setName("r_pinky_middle_keyValue")
field412.setAccessType("inputOutput")
field412.setType("MFRotation")
#no default value

ProtoInterface21.addField(field412)
field413 = x3d.field()
field413.setName("r_pinky_middle_changed")
field413.setAccessType("outputOnly")
field413.setType("SFRotation")

ProtoInterface21.addField(field413)
field414 = x3d.field()
field414.setName("r_pinky_proximal_key")
field414.setAccessType("inputOutput")
field414.setType("MFFloat")
#no default value

ProtoInterface21.addField(field414)
field415 = x3d.field()
field415.setName("r_pinky_proximal_keyValue")
field415.setAccessType("inputOutput")
field415.setType("MFRotation")
#no default value

ProtoInterface21.addField(field415)
field416 = x3d.field()
field416.setName("r_pinky_proximal_changed")
field416.setAccessType("outputOnly")
field416.setType("SFRotation")

ProtoInterface21.addField(field416)
field417 = x3d.field()
field417.setName("r_ring0_key")
field417.setAccessType("inputOutput")
field417.setType("MFFloat")
#no default value

ProtoInterface21.addField(field417)
field418 = x3d.field()
field418.setName("r_ring0_keyValue")
field418.setAccessType("inputOutput")
field418.setType("MFRotation")
#no default value

ProtoInterface21.addField(field418)
field419 = x3d.field()
field419.setName("r_ring0_changed")
field419.setAccessType("outputOnly")
field419.setType("SFRotation")

ProtoInterface21.addField(field419)
field420 = x3d.field()
field420.setName("r_ring1_key")
field420.setAccessType("inputOutput")
field420.setType("MFFloat")
#no default value

ProtoInterface21.addField(field420)
field421 = x3d.field()
field421.setName("r_ring1_keyValue")
field421.setAccessType("inputOutput")
field421.setType("MFRotation")
#no default value

ProtoInterface21.addField(field421)
field422 = x3d.field()
field422.setName("r_ring1_changed")
field422.setAccessType("outputOnly")
field422.setType("SFRotation")

ProtoInterface21.addField(field422)
field423 = x3d.field()
field423.setName("r_ring2_key")
field423.setAccessType("inputOutput")
field423.setType("MFFloat")
#no default value

ProtoInterface21.addField(field423)
field424 = x3d.field()
field424.setName("r_ring2_keyValue")
field424.setAccessType("inputOutput")
field424.setType("MFRotation")
#no default value

ProtoInterface21.addField(field424)
field425 = x3d.field()
field425.setName("r_ring2_changed")
field425.setAccessType("outputOnly")
field425.setType("SFRotation")

ProtoInterface21.addField(field425)
field426 = x3d.field()
field426.setName("r_ring3_key")
field426.setAccessType("inputOutput")
field426.setType("MFFloat")
#no default value

ProtoInterface21.addField(field426)
field427 = x3d.field()
field427.setName("r_ring3_keyValue")
field427.setAccessType("inputOutput")
field427.setType("MFRotation")
#no default value

ProtoInterface21.addField(field427)
field428 = x3d.field()
field428.setName("r_ring3_changed")
field428.setAccessType("outputOnly")
field428.setType("SFRotation")

ProtoInterface21.addField(field428)
field429 = x3d.field()
field429.setName("r_ring_distal_key")
field429.setAccessType("inputOutput")
field429.setType("MFFloat")
#no default value

ProtoInterface21.addField(field429)
field430 = x3d.field()
field430.setName("r_ring_distal_keyValue")
field430.setAccessType("inputOutput")
field430.setType("MFRotation")
#no default value

ProtoInterface21.addField(field430)
field431 = x3d.field()
field431.setName("r_ring_distal_changed")
field431.setAccessType("outputOnly")
field431.setType("SFRotation")

ProtoInterface21.addField(field431)
field432 = x3d.field()
field432.setName("r_ring_metacarpal_key")
field432.setAccessType("inputOutput")
field432.setType("MFFloat")
#no default value

ProtoInterface21.addField(field432)
field433 = x3d.field()
field433.setName("r_ring_metacarpal_keyValue")
field433.setAccessType("inputOutput")
field433.setType("MFRotation")
#no default value

ProtoInterface21.addField(field433)
field434 = x3d.field()
field434.setName("r_ring_metacarpal_changed")
field434.setAccessType("outputOnly")
field434.setType("SFRotation")

ProtoInterface21.addField(field434)
field435 = x3d.field()
field435.setName("r_ring_middle_key")
field435.setAccessType("inputOutput")
field435.setType("MFFloat")
#no default value

ProtoInterface21.addField(field435)
field436 = x3d.field()
field436.setName("r_ring_middle_keyValue")
field436.setAccessType("inputOutput")
field436.setType("MFRotation")
#no default value

ProtoInterface21.addField(field436)
field437 = x3d.field()
field437.setName("r_ring_middle_changed")
field437.setAccessType("outputOnly")
field437.setType("SFRotation")

ProtoInterface21.addField(field437)
field438 = x3d.field()
field438.setName("r_ring_proximal_key")
field438.setAccessType("inputOutput")
field438.setType("MFFloat")
#no default value

ProtoInterface21.addField(field438)
field439 = x3d.field()
field439.setName("r_ring_proximal_keyValue")
field439.setAccessType("inputOutput")
field439.setType("MFRotation")
#no default value

ProtoInterface21.addField(field439)
field440 = x3d.field()
field440.setName("r_ring_proximal_changed")
field440.setAccessType("outputOnly")
field440.setType("SFRotation")

ProtoInterface21.addField(field440)
field441 = x3d.field()
field441.setName("r_scapula_key")
field441.setAccessType("inputOutput")
field441.setType("MFFloat")
#no default value

ProtoInterface21.addField(field441)
field442 = x3d.field()
field442.setName("r_scapula_keyValue")
field442.setAccessType("inputOutput")
field442.setType("MFRotation")
#no default value

ProtoInterface21.addField(field442)
field443 = x3d.field()
field443.setName("r_scapula_changed")
field443.setAccessType("outputOnly")
field443.setType("SFRotation")

ProtoInterface21.addField(field443)
field444 = x3d.field()
field444.setName("r_shoulder_key")
field444.setAccessType("inputOutput")
field444.setType("MFFloat")
#no default value

ProtoInterface21.addField(field444)
field445 = x3d.field()
field445.setName("r_shoulder_keyValue")
field445.setAccessType("inputOutput")
field445.setType("MFRotation")
#no default value

ProtoInterface21.addField(field445)
field446 = x3d.field()
field446.setName("r_shoulder_changed")
field446.setAccessType("outputOnly")
field446.setType("SFRotation")

ProtoInterface21.addField(field446)
field447 = x3d.field()
field447.setName("r_sternoclavicular_key")
field447.setAccessType("inputOutput")
field447.setType("MFFloat")
#no default value

ProtoInterface21.addField(field447)
field448 = x3d.field()
field448.setName("r_sternoclavicular_keyValue")
field448.setAccessType("inputOutput")
field448.setType("MFRotation")
#no default value

ProtoInterface21.addField(field448)
field449 = x3d.field()
field449.setName("r_sternoclavicular_changed")
field449.setAccessType("outputOnly")
field449.setType("SFRotation")

ProtoInterface21.addField(field449)
field450 = x3d.field()
field450.setName("r_subtalar_key")
field450.setAccessType("inputOutput")
field450.setType("MFFloat")
#no default value

ProtoInterface21.addField(field450)
field451 = x3d.field()
field451.setName("r_subtalar_keyValue")
field451.setAccessType("inputOutput")
field451.setType("MFRotation")
#no default value

ProtoInterface21.addField(field451)
field452 = x3d.field()
field452.setName("r_subtalar_changed")
field452.setAccessType("outputOnly")
field452.setType("SFRotation")

ProtoInterface21.addField(field452)
field453 = x3d.field()
field453.setName("r_thigh_key")
field453.setAccessType("inputOutput")
field453.setType("MFFloat")
#no default value

ProtoInterface21.addField(field453)
field454 = x3d.field()
field454.setName("r_thigh_keyValue")
field454.setAccessType("inputOutput")
field454.setType("MFRotation")
#no default value

ProtoInterface21.addField(field454)
field455 = x3d.field()
field455.setName("r_thigh_changed")
field455.setAccessType("outputOnly")
field455.setType("SFRotation")

ProtoInterface21.addField(field455)
field456 = x3d.field()
field456.setName("r_thumb1_key")
field456.setAccessType("inputOutput")
field456.setType("MFFloat")
#no default value

ProtoInterface21.addField(field456)
field457 = x3d.field()
field457.setName("r_thumb1_keyValue")
field457.setAccessType("inputOutput")
field457.setType("MFRotation")
#no default value

ProtoInterface21.addField(field457)
field458 = x3d.field()
field458.setName("r_thumb1_changed")
field458.setAccessType("outputOnly")
field458.setType("SFRotation")

ProtoInterface21.addField(field458)
field459 = x3d.field()
field459.setName("r_thumb2_key")
field459.setAccessType("inputOutput")
field459.setType("MFFloat")
#no default value

ProtoInterface21.addField(field459)
field460 = x3d.field()
field460.setName("r_thumb2_keyValue")
field460.setAccessType("inputOutput")
field460.setType("MFRotation")
#no default value

ProtoInterface21.addField(field460)
field461 = x3d.field()
field461.setName("r_thumb2_changed")
field461.setAccessType("outputOnly")
field461.setType("SFRotation")

ProtoInterface21.addField(field461)
field462 = x3d.field()
field462.setName("r_thumb3_key")
field462.setAccessType("inputOutput")
field462.setType("MFFloat")
#no default value

ProtoInterface21.addField(field462)
field463 = x3d.field()
field463.setName("r_thumb3_keyValue")
field463.setAccessType("inputOutput")
field463.setType("MFRotation")
#no default value

ProtoInterface21.addField(field463)
field464 = x3d.field()
field464.setName("r_thumb3_changed")
field464.setAccessType("outputOnly")
field464.setType("SFRotation")

ProtoInterface21.addField(field464)
field465 = x3d.field()
field465.setName("r_thumb_distal_key")
field465.setAccessType("inputOutput")
field465.setType("MFFloat")
#no default value

ProtoInterface21.addField(field465)
field466 = x3d.field()
field466.setName("r_thumb_distal_keyValue")
field466.setAccessType("inputOutput")
field466.setType("MFRotation")
#no default value

ProtoInterface21.addField(field466)
field467 = x3d.field()
field467.setName("r_thumb_distal_changed")
field467.setAccessType("outputOnly")
field467.setType("SFRotation")

ProtoInterface21.addField(field467)
field468 = x3d.field()
field468.setName("r_thumb_metacarpal_key")
field468.setAccessType("inputOutput")
field468.setType("MFFloat")
#no default value

ProtoInterface21.addField(field468)
field469 = x3d.field()
field469.setName("r_thumb_metacarpal_keyValue")
field469.setAccessType("inputOutput")
field469.setType("MFRotation")
#no default value

ProtoInterface21.addField(field469)
field470 = x3d.field()
field470.setName("r_thumb_metacarpal_changed")
field470.setAccessType("outputOnly")
field470.setType("SFRotation")

ProtoInterface21.addField(field470)
field471 = x3d.field()
field471.setName("r_thumb_proximal_key")
field471.setAccessType("inputOutput")
field471.setType("MFFloat")
#no default value

ProtoInterface21.addField(field471)
field472 = x3d.field()
field472.setName("r_thumb_proximal_keyValue")
field472.setAccessType("inputOutput")
field472.setType("MFRotation")
#no default value

ProtoInterface21.addField(field472)
field473 = x3d.field()
field473.setName("r_thumb_proximal_changed")
field473.setAccessType("outputOnly")
field473.setType("SFRotation")

ProtoInterface21.addField(field473)
field474 = x3d.field()
field474.setName("r_upperarm_key")
field474.setAccessType("inputOutput")
field474.setType("MFFloat")
#no default value

ProtoInterface21.addField(field474)
field475 = x3d.field()
field475.setName("r_upperarm_keyValue")
field475.setAccessType("inputOutput")
field475.setType("MFRotation")
#no default value

ProtoInterface21.addField(field475)
field476 = x3d.field()
field476.setName("r_upperarm_changed")
field476.setAccessType("outputOnly")
field476.setType("SFRotation")

ProtoInterface21.addField(field476)
field477 = x3d.field()
field477.setName("r_wrist_key")
field477.setAccessType("inputOutput")
field477.setType("MFFloat")
#no default value

ProtoInterface21.addField(field477)
field478 = x3d.field()
field478.setName("r_wrist_keyValue")
field478.setAccessType("inputOutput")
field478.setType("MFRotation")
#no default value

ProtoInterface21.addField(field478)
field479 = x3d.field()
field479.setName("r_wrist_changed")
field479.setAccessType("outputOnly")
field479.setType("SFRotation")

ProtoInterface21.addField(field479)
field480 = x3d.field()
field480.setName("sacroiliac_key")
field480.setAccessType("inputOutput")
field480.setType("MFFloat")
#no default value

ProtoInterface21.addField(field480)
field481 = x3d.field()
field481.setName("sacroiliac_keyValue")
field481.setAccessType("inputOutput")
field481.setType("MFRotation")
#no default value

ProtoInterface21.addField(field481)
field482 = x3d.field()
field482.setName("sacroiliac_changed")
field482.setAccessType("outputOnly")
field482.setType("SFRotation")

ProtoInterface21.addField(field482)
field483 = x3d.field()
field483.setName("sacrum_key")
field483.setAccessType("inputOutput")
field483.setType("MFFloat")
#no default value

ProtoInterface21.addField(field483)
field484 = x3d.field()
field484.setName("sacrum_keyValue")
field484.setAccessType("inputOutput")
field484.setType("MFRotation")
#no default value

ProtoInterface21.addField(field484)
field485 = x3d.field()
field485.setName("sacrum_changed")
field485.setAccessType("outputOnly")
field485.setType("SFRotation")

ProtoInterface21.addField(field485)
field486 = x3d.field()
field486.setName("skull_key")
field486.setAccessType("inputOutput")
field486.setType("MFFloat")
#no default value

ProtoInterface21.addField(field486)
field487 = x3d.field()
field487.setName("skull_keyValue")
field487.setAccessType("inputOutput")
field487.setType("MFRotation")
#no default value

ProtoInterface21.addField(field487)
field488 = x3d.field()
field488.setName("skull_changed")
field488.setAccessType("outputOnly")
field488.setType("SFRotation")

ProtoInterface21.addField(field488)
field489 = x3d.field()
field489.setName("skullbase_key")
field489.setAccessType("inputOutput")
field489.setType("MFFloat")
#no default value

ProtoInterface21.addField(field489)
field490 = x3d.field()
field490.setName("skullbase_keyValue")
field490.setAccessType("inputOutput")
field490.setType("MFRotation")
#no default value

ProtoInterface21.addField(field490)
field491 = x3d.field()
field491.setName("skullbase_changed")
field491.setAccessType("outputOnly")
field491.setType("SFRotation")

ProtoInterface21.addField(field491)
field492 = x3d.field()
field492.setName("t10_key")
field492.setAccessType("inputOutput")
field492.setType("MFFloat")
#no default value

ProtoInterface21.addField(field492)
field493 = x3d.field()
field493.setName("t10_keyValue")
field493.setAccessType("inputOutput")
field493.setType("MFRotation")
#no default value

ProtoInterface21.addField(field493)
field494 = x3d.field()
field494.setName("t10_changed")
field494.setAccessType("outputOnly")
field494.setType("SFRotation")

ProtoInterface21.addField(field494)
field495 = x3d.field()
field495.setName("t11_key")
field495.setAccessType("inputOutput")
field495.setType("MFFloat")
#no default value

ProtoInterface21.addField(field495)
field496 = x3d.field()
field496.setName("t11_keyValue")
field496.setAccessType("inputOutput")
field496.setType("MFRotation")
#no default value

ProtoInterface21.addField(field496)
field497 = x3d.field()
field497.setName("t11_changed")
field497.setAccessType("outputOnly")
field497.setType("SFRotation")

ProtoInterface21.addField(field497)
field498 = x3d.field()
field498.setName("t12_key")
field498.setAccessType("inputOutput")
field498.setType("MFFloat")
#no default value

ProtoInterface21.addField(field498)
field499 = x3d.field()
field499.setName("t12_keyValue")
field499.setAccessType("inputOutput")
field499.setType("MFRotation")
#no default value

ProtoInterface21.addField(field499)
field500 = x3d.field()
field500.setName("t12_changed")
field500.setAccessType("outputOnly")
field500.setType("SFRotation")

ProtoInterface21.addField(field500)
field501 = x3d.field()
field501.setName("t1_key")
field501.setAccessType("inputOutput")
field501.setType("MFFloat")
#no default value

ProtoInterface21.addField(field501)
field502 = x3d.field()
field502.setName("t1_keyValue")
field502.setAccessType("inputOutput")
field502.setType("MFRotation")
#no default value

ProtoInterface21.addField(field502)
field503 = x3d.field()
field503.setName("t1_changed")
field503.setAccessType("outputOnly")
field503.setType("SFRotation")

ProtoInterface21.addField(field503)
field504 = x3d.field()
field504.setName("t2_key")
field504.setAccessType("inputOutput")
field504.setType("MFFloat")
#no default value

ProtoInterface21.addField(field504)
field505 = x3d.field()
field505.setName("t2_keyValue")
field505.setAccessType("inputOutput")
field505.setType("MFRotation")
#no default value

ProtoInterface21.addField(field505)
field506 = x3d.field()
field506.setName("t2_changed")
field506.setAccessType("outputOnly")
field506.setType("SFRotation")

ProtoInterface21.addField(field506)
field507 = x3d.field()
field507.setName("t3_key")
field507.setAccessType("inputOutput")
field507.setType("MFFloat")
#no default value

ProtoInterface21.addField(field507)
field508 = x3d.field()
field508.setName("t3_keyValue")
field508.setAccessType("inputOutput")
field508.setType("MFRotation")
#no default value

ProtoInterface21.addField(field508)
field509 = x3d.field()
field509.setName("t3_changed")
field509.setAccessType("outputOnly")
field509.setType("SFRotation")

ProtoInterface21.addField(field509)
field510 = x3d.field()
field510.setName("t4_key")
field510.setAccessType("inputOutput")
field510.setType("MFFloat")
#no default value

ProtoInterface21.addField(field510)
field511 = x3d.field()
field511.setName("t4_keyValue")
field511.setAccessType("inputOutput")
field511.setType("MFRotation")
#no default value

ProtoInterface21.addField(field511)
field512 = x3d.field()
field512.setName("t4_changed")
field512.setAccessType("outputOnly")
field512.setType("SFRotation")

ProtoInterface21.addField(field512)
field513 = x3d.field()
field513.setName("t5_key")
field513.setAccessType("inputOutput")
field513.setType("MFFloat")
#no default value

ProtoInterface21.addField(field513)
field514 = x3d.field()
field514.setName("t5_keyValue")
field514.setAccessType("inputOutput")
field514.setType("MFRotation")
#no default value

ProtoInterface21.addField(field514)
field515 = x3d.field()
field515.setName("t5_changed")
field515.setAccessType("outputOnly")
field515.setType("SFRotation")

ProtoInterface21.addField(field515)
field516 = x3d.field()
field516.setName("t6_key")
field516.setAccessType("inputOutput")
field516.setType("MFFloat")
#no default value

ProtoInterface21.addField(field516)
field517 = x3d.field()
field517.setName("t6_keyValue")
field517.setAccessType("inputOutput")
field517.setType("MFRotation")
#no default value

ProtoInterface21.addField(field517)
field518 = x3d.field()
field518.setName("t6_changed")
field518.setAccessType("outputOnly")
field518.setType("SFRotation")

ProtoInterface21.addField(field518)
field519 = x3d.field()
field519.setName("t7_key")
field519.setAccessType("inputOutput")
field519.setType("MFFloat")
#no default value

ProtoInterface21.addField(field519)
field520 = x3d.field()
field520.setName("t7_keyValue")
field520.setAccessType("inputOutput")
field520.setType("MFRotation")
#no default value

ProtoInterface21.addField(field520)
field521 = x3d.field()
field521.setName("t7_changed")
field521.setAccessType("outputOnly")
field521.setType("SFRotation")

ProtoInterface21.addField(field521)
field522 = x3d.field()
field522.setName("t8_key")
field522.setAccessType("inputOutput")
field522.setType("MFFloat")
#no default value

ProtoInterface21.addField(field522)
field523 = x3d.field()
field523.setName("t8_keyValue")
field523.setAccessType("inputOutput")
field523.setType("MFRotation")
#no default value

ProtoInterface21.addField(field523)
field524 = x3d.field()
field524.setName("t8_changed")
field524.setAccessType("outputOnly")
field524.setType("SFRotation")

ProtoInterface21.addField(field524)
field525 = x3d.field()
field525.setName("t9_key")
field525.setAccessType("inputOutput")
field525.setType("MFFloat")
#no default value

ProtoInterface21.addField(field525)
field526 = x3d.field()
field526.setName("t9_keyValue")
field526.setAccessType("inputOutput")
field526.setType("MFRotation")
#no default value

ProtoInterface21.addField(field526)
field527 = x3d.field()
field527.setName("t9_changed")
field527.setAccessType("outputOnly")
field527.setType("SFRotation")

ProtoInterface21.addField(field527)
field528 = x3d.field()
field528.setName("temporomandibular_key")
field528.setAccessType("inputOutput")
field528.setType("MFFloat")
#no default value

ProtoInterface21.addField(field528)
field529 = x3d.field()
field529.setName("temporomandibular_keyValue")
field529.setAccessType("inputOutput")
field529.setType("MFRotation")
#no default value

ProtoInterface21.addField(field529)
field530 = x3d.field()
field530.setName("temporomandibular_changed")
field530.setAccessType("outputOnly")
field530.setType("SFRotation")

ProtoInterface21.addField(field530)
field531 = x3d.field()
field531.setName("vc1_key")
field531.setAccessType("inputOutput")
field531.setType("MFFloat")
#no default value

ProtoInterface21.addField(field531)
field532 = x3d.field()
field532.setName("vc1_keyValue")
field532.setAccessType("inputOutput")
field532.setType("MFRotation")
#no default value

ProtoInterface21.addField(field532)
field533 = x3d.field()
field533.setName("vc1_changed")
field533.setAccessType("outputOnly")
field533.setType("SFRotation")

ProtoInterface21.addField(field533)
field534 = x3d.field()
field534.setName("vc2_key")
field534.setAccessType("inputOutput")
field534.setType("MFFloat")
#no default value

ProtoInterface21.addField(field534)
field535 = x3d.field()
field535.setName("vc2_keyValue")
field535.setAccessType("inputOutput")
field535.setType("MFRotation")
#no default value

ProtoInterface21.addField(field535)
field536 = x3d.field()
field536.setName("vc2_changed")
field536.setAccessType("outputOnly")
field536.setType("SFRotation")

ProtoInterface21.addField(field536)
field537 = x3d.field()
field537.setName("vc3_key")
field537.setAccessType("inputOutput")
field537.setType("MFFloat")
#no default value

ProtoInterface21.addField(field537)
field538 = x3d.field()
field538.setName("vc3_keyValue")
field538.setAccessType("inputOutput")
field538.setType("MFRotation")
#no default value

ProtoInterface21.addField(field538)
field539 = x3d.field()
field539.setName("vc3_changed")
field539.setAccessType("outputOnly")
field539.setType("SFRotation")

ProtoInterface21.addField(field539)
field540 = x3d.field()
field540.setName("vc4_key")
field540.setAccessType("inputOutput")
field540.setType("MFFloat")
#no default value

ProtoInterface21.addField(field540)
field541 = x3d.field()
field541.setName("vc4_keyValue")
field541.setAccessType("inputOutput")
field541.setType("MFRotation")
#no default value

ProtoInterface21.addField(field541)
field542 = x3d.field()
field542.setName("vc4_changed")
field542.setAccessType("outputOnly")
field542.setType("SFRotation")

ProtoInterface21.addField(field542)
field543 = x3d.field()
field543.setName("vc5_key")
field543.setAccessType("inputOutput")
field543.setType("MFFloat")
#no default value

ProtoInterface21.addField(field543)
field544 = x3d.field()
field544.setName("vc5_keyValue")
field544.setAccessType("inputOutput")
field544.setType("MFRotation")
#no default value

ProtoInterface21.addField(field544)
field545 = x3d.field()
field545.setName("vc5_changed")
field545.setAccessType("outputOnly")
field545.setType("SFRotation")

ProtoInterface21.addField(field545)
field546 = x3d.field()
field546.setName("vc6_key")
field546.setAccessType("inputOutput")
field546.setType("MFFloat")
#no default value

ProtoInterface21.addField(field546)
field547 = x3d.field()
field547.setName("vc6_keyValue")
field547.setAccessType("inputOutput")
field547.setType("MFRotation")
#no default value

ProtoInterface21.addField(field547)
field548 = x3d.field()
field548.setName("vc6_changed")
field548.setAccessType("outputOnly")
field548.setType("SFRotation")

ProtoInterface21.addField(field548)
field549 = x3d.field()
field549.setName("vc7_key")
field549.setAccessType("inputOutput")
field549.setType("MFFloat")
#no default value

ProtoInterface21.addField(field549)
field550 = x3d.field()
field550.setName("vc7_keyValue")
field550.setAccessType("inputOutput")
field550.setType("MFRotation")
#no default value

ProtoInterface21.addField(field550)
field551 = x3d.field()
field551.setName("vc7_changed")
field551.setAccessType("outputOnly")
field551.setType("SFRotation")

ProtoInterface21.addField(field551)
field552 = x3d.field()
field552.setName("vl1_key")
field552.setAccessType("inputOutput")
field552.setType("MFFloat")
#no default value

ProtoInterface21.addField(field552)
field553 = x3d.field()
field553.setName("vl1_keyValue")
field553.setAccessType("inputOutput")
field553.setType("MFRotation")
#no default value

ProtoInterface21.addField(field553)
field554 = x3d.field()
field554.setName("vl1_changed")
field554.setAccessType("outputOnly")
field554.setType("SFRotation")

ProtoInterface21.addField(field554)
field555 = x3d.field()
field555.setName("vl2_key")
field555.setAccessType("inputOutput")
field555.setType("MFFloat")
#no default value

ProtoInterface21.addField(field555)
field556 = x3d.field()
field556.setName("vl2_keyValue")
field556.setAccessType("inputOutput")
field556.setType("MFRotation")
#no default value

ProtoInterface21.addField(field556)
field557 = x3d.field()
field557.setName("vl2_changed")
field557.setAccessType("outputOnly")
field557.setType("SFRotation")

ProtoInterface21.addField(field557)
field558 = x3d.field()
field558.setName("vl3_key")
field558.setAccessType("inputOutput")
field558.setType("MFFloat")
#no default value

ProtoInterface21.addField(field558)
field559 = x3d.field()
field559.setName("vl3_keyValue")
field559.setAccessType("inputOutput")
field559.setType("MFRotation")
#no default value

ProtoInterface21.addField(field559)
field560 = x3d.field()
field560.setName("vl3_changed")
field560.setAccessType("outputOnly")
field560.setType("SFRotation")

ProtoInterface21.addField(field560)
field561 = x3d.field()
field561.setName("vl4_key")
field561.setAccessType("inputOutput")
field561.setType("MFFloat")
#no default value

ProtoInterface21.addField(field561)
field562 = x3d.field()
field562.setName("vl4_keyValue")
field562.setAccessType("inputOutput")
field562.setType("MFRotation")
#no default value

ProtoInterface21.addField(field562)
field563 = x3d.field()
field563.setName("vl4_changed")
field563.setAccessType("outputOnly")
field563.setType("SFRotation")

ProtoInterface21.addField(field563)
field564 = x3d.field()
field564.setName("vl5_key")
field564.setAccessType("inputOutput")
field564.setType("MFFloat")
#no default value

ProtoInterface21.addField(field564)
field565 = x3d.field()
field565.setName("vl5_keyValue")
field565.setAccessType("inputOutput")
field565.setType("MFRotation")
#no default value

ProtoInterface21.addField(field565)
field566 = x3d.field()
field566.setName("vl5_changed")
field566.setAccessType("outputOnly")
field566.setType("SFRotation")

ProtoInterface21.addField(field566)
field567 = x3d.field()
field567.setName("vt10_key")
field567.setAccessType("inputOutput")
field567.setType("MFFloat")
#no default value

ProtoInterface21.addField(field567)
field568 = x3d.field()
field568.setName("vt10_keyValue")
field568.setAccessType("inputOutput")
field568.setType("MFRotation")
#no default value

ProtoInterface21.addField(field568)
field569 = x3d.field()
field569.setName("vt10_changed")
field569.setAccessType("outputOnly")
field569.setType("SFRotation")

ProtoInterface21.addField(field569)
field570 = x3d.field()
field570.setName("vt11_key")
field570.setAccessType("inputOutput")
field570.setType("MFFloat")
#no default value

ProtoInterface21.addField(field570)
field571 = x3d.field()
field571.setName("vt11_keyValue")
field571.setAccessType("inputOutput")
field571.setType("MFRotation")
#no default value

ProtoInterface21.addField(field571)
field572 = x3d.field()
field572.setName("vt11_changed")
field572.setAccessType("outputOnly")
field572.setType("SFRotation")

ProtoInterface21.addField(field572)
field573 = x3d.field()
field573.setName("vt12_key")
field573.setAccessType("inputOutput")
field573.setType("MFFloat")
#no default value

ProtoInterface21.addField(field573)
field574 = x3d.field()
field574.setName("vt12_keyValue")
field574.setAccessType("inputOutput")
field574.setType("MFRotation")
#no default value

ProtoInterface21.addField(field574)
field575 = x3d.field()
field575.setName("vt12_changed")
field575.setAccessType("outputOnly")
field575.setType("SFRotation")

ProtoInterface21.addField(field575)
field576 = x3d.field()
field576.setName("vt1_key")
field576.setAccessType("inputOutput")
field576.setType("MFFloat")
#no default value

ProtoInterface21.addField(field576)
field577 = x3d.field()
field577.setName("vt1_keyValue")
field577.setAccessType("inputOutput")
field577.setType("MFRotation")
#no default value

ProtoInterface21.addField(field577)
field578 = x3d.field()
field578.setName("vt1_changed")
field578.setAccessType("outputOnly")
field578.setType("SFRotation")

ProtoInterface21.addField(field578)
field579 = x3d.field()
field579.setName("vt2_key")
field579.setAccessType("inputOutput")
field579.setType("MFFloat")
#no default value

ProtoInterface21.addField(field579)
field580 = x3d.field()
field580.setName("vt2_keyValue")
field580.setAccessType("inputOutput")
field580.setType("MFRotation")
#no default value

ProtoInterface21.addField(field580)
field581 = x3d.field()
field581.setName("vt2_changed")
field581.setAccessType("outputOnly")
field581.setType("SFRotation")

ProtoInterface21.addField(field581)
field582 = x3d.field()
field582.setName("vt3_key")
field582.setAccessType("inputOutput")
field582.setType("MFFloat")
#no default value

ProtoInterface21.addField(field582)
field583 = x3d.field()
field583.setName("vt3_keyValue")
field583.setAccessType("inputOutput")
field583.setType("MFRotation")
#no default value

ProtoInterface21.addField(field583)
field584 = x3d.field()
field584.setName("vt3_changed")
field584.setAccessType("outputOnly")
field584.setType("SFRotation")

ProtoInterface21.addField(field584)
field585 = x3d.field()
field585.setName("vt4_key")
field585.setAccessType("inputOutput")
field585.setType("MFFloat")
#no default value

ProtoInterface21.addField(field585)
field586 = x3d.field()
field586.setName("vt4_keyValue")
field586.setAccessType("inputOutput")
field586.setType("MFRotation")
#no default value

ProtoInterface21.addField(field586)
field587 = x3d.field()
field587.setName("vt4_changed")
field587.setAccessType("outputOnly")
field587.setType("SFRotation")

ProtoInterface21.addField(field587)
field588 = x3d.field()
field588.setName("vt5_key")
field588.setAccessType("inputOutput")
field588.setType("MFFloat")
#no default value

ProtoInterface21.addField(field588)
field589 = x3d.field()
field589.setName("vt5_keyValue")
field589.setAccessType("inputOutput")
field589.setType("MFRotation")
#no default value

ProtoInterface21.addField(field589)
field590 = x3d.field()
field590.setName("vt5_changed")
field590.setAccessType("outputOnly")
field590.setType("SFRotation")

ProtoInterface21.addField(field590)
field591 = x3d.field()
field591.setName("vt6_key")
field591.setAccessType("inputOutput")
field591.setType("MFFloat")
#no default value

ProtoInterface21.addField(field591)
field592 = x3d.field()
field592.setName("vt6_keyValue")
field592.setAccessType("inputOutput")
field592.setType("MFRotation")
#no default value

ProtoInterface21.addField(field592)
field593 = x3d.field()
field593.setName("vt6_changed")
field593.setAccessType("outputOnly")
field593.setType("SFRotation")

ProtoInterface21.addField(field593)
field594 = x3d.field()
field594.setName("vt7_key")
field594.setAccessType("inputOutput")
field594.setType("MFFloat")
#no default value

ProtoInterface21.addField(field594)
field595 = x3d.field()
field595.setName("vt7_keyValue")
field595.setAccessType("inputOutput")
field595.setType("MFRotation")
#no default value

ProtoInterface21.addField(field595)
field596 = x3d.field()
field596.setName("vt7_changed")
field596.setAccessType("outputOnly")
field596.setType("SFRotation")

ProtoInterface21.addField(field596)
field597 = x3d.field()
field597.setName("vt8_key")
field597.setAccessType("inputOutput")
field597.setType("MFFloat")
#no default value

ProtoInterface21.addField(field597)
field598 = x3d.field()
field598.setName("vt8_keyValue")
field598.setAccessType("inputOutput")
field598.setType("MFRotation")
#no default value

ProtoInterface21.addField(field598)
field599 = x3d.field()
field599.setName("vt8_changed")
field599.setAccessType("outputOnly")
field599.setType("SFRotation")

ProtoInterface21.addField(field599)
field600 = x3d.field()
field600.setName("vt9_key")
field600.setAccessType("inputOutput")
field600.setType("MFFloat")
#no default value

ProtoInterface21.addField(field600)
field601 = x3d.field()
field601.setName("vt9_keyValue")
field601.setAccessType("inputOutput")
field601.setType("MFRotation")
#no default value

ProtoInterface21.addField(field601)
field602 = x3d.field()
field602.setName("vt9_changed")
field602.setAccessType("outputOnly")
field602.setType("SFRotation")

ProtoInterface21.addField(field602)

ProtoDeclare20.setProtoInterface(ProtoInterface21)
ProtoBody603 = x3d.ProtoBody()
#design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators
TimeSensor604 = x3d.TimeSensor()
TimeSensor604.setDEF("BehaviorClock")
IS605 = x3d.IS()
connect606 = x3d.connect()
connect606.setNodeField("enabled")
connect606.setProtoField("enabled")

IS605.addConnect(connect606)
connect607 = x3d.connect()
connect607.setNodeField("cycleInterval")
connect607.setProtoField("cycleInterval")

IS605.addConnect(connect607)
connect608 = x3d.connect()
connect608.setNodeField("loop")
connect608.setProtoField("loop")

IS605.addConnect(connect608)
connect609 = x3d.connect()
connect609.setNodeField("startTime")
connect609.setProtoField("startTime")

IS605.addConnect(connect609)
connect610 = x3d.connect()
connect610.setNodeField("stopTime")
connect610.setProtoField("stopTime")

IS605.addConnect(connect610)
connect611 = x3d.connect()
connect611.setNodeField("pauseTime")
connect611.setProtoField("pauseTime")

IS605.addConnect(connect611)
connect612 = x3d.connect()
connect612.setNodeField("resumeTime")
connect612.setProtoField("resumeTime")

IS605.addConnect(connect612)
connect613 = x3d.connect()
connect613.setNodeField("cycleTime")
connect613.setProtoField("cycleTime")

IS605.addConnect(connect613)
connect614 = x3d.connect()
connect614.setNodeField("isActive")
connect614.setProtoField("isActive")

IS605.addConnect(connect614)
connect615 = x3d.connect()
connect615.setNodeField("isPaused")
connect615.setProtoField("isPaused")

IS605.addConnect(connect615)
connect616 = x3d.connect()
connect616.setNodeField("elapsedTime")
connect616.setProtoField("elapsedTime")

IS605.addConnect(connect616)
connect617 = x3d.connect()
connect617.setNodeField("time")
connect617.setProtoField("time")

IS605.addConnect(connect617)
connect618 = x3d.connect()
connect618.setNodeField("fraction_changed")
connect618.setProtoField("fraction_changed")

IS605.addConnect(connect618)

TimeSensor604.setIS(IS605)

ProtoBody603.addChildren(TimeSensor604)
#note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless
Switch619 = x3d.Switch()
Switch619.setDEF("SupportedLoaHolder1")
Switch619.setWhichChoice(-1)
IS620 = x3d.IS()
connect621 = x3d.connect()
connect621.setNodeField("whichChoice")
connect621.setProtoField("supportedLOA")

IS620.addConnect(connect621)

Switch619.setIS(IS620)

ProtoBody603.addChildren(Switch619)
PositionInterpolator622 = x3d.PositionInterpolator()
PositionInterpolator622.setDEF("HumanoidRootPI")
IS623 = x3d.IS()
connect624 = x3d.connect()
connect624.setNodeField("key")
connect624.setProtoField("HumanoidRoot_translation_key")

IS623.addConnect(connect624)
connect625 = x3d.connect()
connect625.setNodeField("keyValue")
connect625.setProtoField("HumanoidRoot_translation_keyValue")

IS623.addConnect(connect625)
connect626 = x3d.connect()
connect626.setNodeField("value_changed")
connect626.setProtoField("HumanoidRoot_translation_changed")

IS623.addConnect(connect626)

PositionInterpolator622.setIS(IS623)

ProtoBody603.addChildren(PositionInterpolator622)
ROUTE627 = x3d.ROUTE()
ROUTE627.setFromField("fraction_changed")
ROUTE627.setFromNode("BehaviorClock")
ROUTE627.setToField("set_fraction")
ROUTE627.setToNode("HumanoidRootPI")

ProtoBody603.addChildren(ROUTE627)
OrientationInterpolator628 = x3d.OrientationInterpolator()
OrientationInterpolator628.setDEF("HumanoidRootOI")
IS629 = x3d.IS()
connect630 = x3d.connect()
connect630.setNodeField("key")
connect630.setProtoField("HumanoidRoot_rotation_key")

IS629.addConnect(connect630)
connect631 = x3d.connect()
connect631.setNodeField("keyValue")
connect631.setProtoField("HumanoidRoot_rotation_keyValue")

IS629.addConnect(connect631)
connect632 = x3d.connect()
connect632.setNodeField("value_changed")
connect632.setProtoField("HumanoidRoot_rotation_changed")

IS629.addConnect(connect632)

OrientationInterpolator628.setIS(IS629)

ProtoBody603.addChildren(OrientationInterpolator628)
ROUTE633 = x3d.ROUTE()
ROUTE633.setFromField("fraction_changed")
ROUTE633.setFromNode("BehaviorClock")
ROUTE633.setToField("set_fraction")
ROUTE633.setToNode("HumanoidRootOI")

ProtoBody603.addChildren(ROUTE633)
OrientationInterpolator634 = x3d.OrientationInterpolator()
OrientationInterpolator634.setDEF("c1_OI")
IS635 = x3d.IS()
connect636 = x3d.connect()
connect636.setNodeField("key")
connect636.setProtoField("c1_key")

IS635.addConnect(connect636)
connect637 = x3d.connect()
connect637.setNodeField("keyValue")
connect637.setProtoField("c1_keyValue")

IS635.addConnect(connect637)
connect638 = x3d.connect()
connect638.setNodeField("value_changed")
connect638.setProtoField("c1_changed")

IS635.addConnect(connect638)

OrientationInterpolator634.setIS(IS635)

ProtoBody603.addChildren(OrientationInterpolator634)
ROUTE639 = x3d.ROUTE()
ROUTE639.setFromField("fraction_changed")
ROUTE639.setFromNode("BehaviorClock")
ROUTE639.setToField("set_fraction")
ROUTE639.setToNode("c1_OI")

ProtoBody603.addChildren(ROUTE639)
OrientationInterpolator640 = x3d.OrientationInterpolator()
OrientationInterpolator640.setDEF("c2_OI")
IS641 = x3d.IS()
connect642 = x3d.connect()
connect642.setNodeField("key")
connect642.setProtoField("c2_key")

IS641.addConnect(connect642)
connect643 = x3d.connect()
connect643.setNodeField("keyValue")
connect643.setProtoField("c2_keyValue")

IS641.addConnect(connect643)
connect644 = x3d.connect()
connect644.setNodeField("value_changed")
connect644.setProtoField("c2_changed")

IS641.addConnect(connect644)

OrientationInterpolator640.setIS(IS641)

ProtoBody603.addChildren(OrientationInterpolator640)
ROUTE645 = x3d.ROUTE()
ROUTE645.setFromField("fraction_changed")
ROUTE645.setFromNode("BehaviorClock")
ROUTE645.setToField("set_fraction")
ROUTE645.setToNode("c2_OI")

ProtoBody603.addChildren(ROUTE645)
OrientationInterpolator646 = x3d.OrientationInterpolator()
OrientationInterpolator646.setDEF("c3_OI")
IS647 = x3d.IS()
connect648 = x3d.connect()
connect648.setNodeField("key")
connect648.setProtoField("c3_key")

IS647.addConnect(connect648)
connect649 = x3d.connect()
connect649.setNodeField("keyValue")
connect649.setProtoField("c3_keyValue")

IS647.addConnect(connect649)
connect650 = x3d.connect()
connect650.setNodeField("value_changed")
connect650.setProtoField("c3_changed")

IS647.addConnect(connect650)

OrientationInterpolator646.setIS(IS647)

ProtoBody603.addChildren(OrientationInterpolator646)
ROUTE651 = x3d.ROUTE()
ROUTE651.setFromField("fraction_changed")
ROUTE651.setFromNode("BehaviorClock")
ROUTE651.setToField("set_fraction")
ROUTE651.setToNode("c3_OI")

ProtoBody603.addChildren(ROUTE651)
OrientationInterpolator652 = x3d.OrientationInterpolator()
OrientationInterpolator652.setDEF("c4_OI")
IS653 = x3d.IS()
connect654 = x3d.connect()
connect654.setNodeField("key")
connect654.setProtoField("c4_key")

IS653.addConnect(connect654)
connect655 = x3d.connect()
connect655.setNodeField("keyValue")
connect655.setProtoField("c4_keyValue")

IS653.addConnect(connect655)
connect656 = x3d.connect()
connect656.setNodeField("value_changed")
connect656.setProtoField("c4_changed")

IS653.addConnect(connect656)

OrientationInterpolator652.setIS(IS653)

ProtoBody603.addChildren(OrientationInterpolator652)
ROUTE657 = x3d.ROUTE()
ROUTE657.setFromField("fraction_changed")
ROUTE657.setFromNode("BehaviorClock")
ROUTE657.setToField("set_fraction")
ROUTE657.setToNode("c4_OI")

ProtoBody603.addChildren(ROUTE657)
OrientationInterpolator658 = x3d.OrientationInterpolator()
OrientationInterpolator658.setDEF("c5_OI")
IS659 = x3d.IS()
connect660 = x3d.connect()
connect660.setNodeField("key")
connect660.setProtoField("c5_key")

IS659.addConnect(connect660)
connect661 = x3d.connect()
connect661.setNodeField("keyValue")
connect661.setProtoField("c5_keyValue")

IS659.addConnect(connect661)
connect662 = x3d.connect()
connect662.setNodeField("value_changed")
connect662.setProtoField("c5_changed")

IS659.addConnect(connect662)

OrientationInterpolator658.setIS(IS659)

ProtoBody603.addChildren(OrientationInterpolator658)
ROUTE663 = x3d.ROUTE()
ROUTE663.setFromField("fraction_changed")
ROUTE663.setFromNode("BehaviorClock")
ROUTE663.setToField("set_fraction")
ROUTE663.setToNode("c5_OI")

ProtoBody603.addChildren(ROUTE663)
OrientationInterpolator664 = x3d.OrientationInterpolator()
OrientationInterpolator664.setDEF("c6_OI")
IS665 = x3d.IS()
connect666 = x3d.connect()
connect666.setNodeField("key")
connect666.setProtoField("c6_key")

IS665.addConnect(connect666)
connect667 = x3d.connect()
connect667.setNodeField("keyValue")
connect667.setProtoField("c6_keyValue")

IS665.addConnect(connect667)
connect668 = x3d.connect()
connect668.setNodeField("value_changed")
connect668.setProtoField("c6_changed")

IS665.addConnect(connect668)

OrientationInterpolator664.setIS(IS665)

ProtoBody603.addChildren(OrientationInterpolator664)
ROUTE669 = x3d.ROUTE()
ROUTE669.setFromField("fraction_changed")
ROUTE669.setFromNode("BehaviorClock")
ROUTE669.setToField("set_fraction")
ROUTE669.setToNode("c6_OI")

ProtoBody603.addChildren(ROUTE669)
OrientationInterpolator670 = x3d.OrientationInterpolator()
OrientationInterpolator670.setDEF("c7_OI")
IS671 = x3d.IS()
connect672 = x3d.connect()
connect672.setNodeField("key")
connect672.setProtoField("c7_key")

IS671.addConnect(connect672)
connect673 = x3d.connect()
connect673.setNodeField("keyValue")
connect673.setProtoField("c7_keyValue")

IS671.addConnect(connect673)
connect674 = x3d.connect()
connect674.setNodeField("value_changed")
connect674.setProtoField("c7_changed")

IS671.addConnect(connect674)

OrientationInterpolator670.setIS(IS671)

ProtoBody603.addChildren(OrientationInterpolator670)
ROUTE675 = x3d.ROUTE()
ROUTE675.setFromField("fraction_changed")
ROUTE675.setFromNode("BehaviorClock")
ROUTE675.setToField("set_fraction")
ROUTE675.setToNode("c7_OI")

ProtoBody603.addChildren(ROUTE675)
OrientationInterpolator676 = x3d.OrientationInterpolator()
OrientationInterpolator676.setDEF("jaw_OI")
IS677 = x3d.IS()
connect678 = x3d.connect()
connect678.setNodeField("key")
connect678.setProtoField("jaw_key")

IS677.addConnect(connect678)
connect679 = x3d.connect()
connect679.setNodeField("keyValue")
connect679.setProtoField("jaw_keyValue")

IS677.addConnect(connect679)
connect680 = x3d.connect()
connect680.setNodeField("value_changed")
connect680.setProtoField("jaw_changed")

IS677.addConnect(connect680)

OrientationInterpolator676.setIS(IS677)

ProtoBody603.addChildren(OrientationInterpolator676)
ROUTE681 = x3d.ROUTE()
ROUTE681.setFromField("fraction_changed")
ROUTE681.setFromNode("BehaviorClock")
ROUTE681.setToField("set_fraction")
ROUTE681.setToNode("jaw_OI")

ProtoBody603.addChildren(ROUTE681)
OrientationInterpolator682 = x3d.OrientationInterpolator()
OrientationInterpolator682.setDEF("l1_OI")
IS683 = x3d.IS()
connect684 = x3d.connect()
connect684.setNodeField("key")
connect684.setProtoField("l1_key")

IS683.addConnect(connect684)
connect685 = x3d.connect()
connect685.setNodeField("keyValue")
connect685.setProtoField("l1_keyValue")

IS683.addConnect(connect685)
connect686 = x3d.connect()
connect686.setNodeField("value_changed")
connect686.setProtoField("l1_changed")

IS683.addConnect(connect686)

OrientationInterpolator682.setIS(IS683)

ProtoBody603.addChildren(OrientationInterpolator682)
ROUTE687 = x3d.ROUTE()
ROUTE687.setFromField("fraction_changed")
ROUTE687.setFromNode("BehaviorClock")
ROUTE687.setToField("set_fraction")
ROUTE687.setToNode("l1_OI")

ProtoBody603.addChildren(ROUTE687)
OrientationInterpolator688 = x3d.OrientationInterpolator()
OrientationInterpolator688.setDEF("l2_OI")
IS689 = x3d.IS()
connect690 = x3d.connect()
connect690.setNodeField("key")
connect690.setProtoField("l2_key")

IS689.addConnect(connect690)
connect691 = x3d.connect()
connect691.setNodeField("keyValue")
connect691.setProtoField("l2_keyValue")

IS689.addConnect(connect691)
connect692 = x3d.connect()
connect692.setNodeField("value_changed")
connect692.setProtoField("l2_changed")

IS689.addConnect(connect692)

OrientationInterpolator688.setIS(IS689)

ProtoBody603.addChildren(OrientationInterpolator688)
ROUTE693 = x3d.ROUTE()
ROUTE693.setFromField("fraction_changed")
ROUTE693.setFromNode("BehaviorClock")
ROUTE693.setToField("set_fraction")
ROUTE693.setToNode("l2_OI")

ProtoBody603.addChildren(ROUTE693)
OrientationInterpolator694 = x3d.OrientationInterpolator()
OrientationInterpolator694.setDEF("l3_OI")
IS695 = x3d.IS()
connect696 = x3d.connect()
connect696.setNodeField("key")
connect696.setProtoField("l3_key")

IS695.addConnect(connect696)
connect697 = x3d.connect()
connect697.setNodeField("keyValue")
connect697.setProtoField("l3_keyValue")

IS695.addConnect(connect697)
connect698 = x3d.connect()
connect698.setNodeField("value_changed")
connect698.setProtoField("l3_changed")

IS695.addConnect(connect698)

OrientationInterpolator694.setIS(IS695)

ProtoBody603.addChildren(OrientationInterpolator694)
ROUTE699 = x3d.ROUTE()
ROUTE699.setFromField("fraction_changed")
ROUTE699.setFromNode("BehaviorClock")
ROUTE699.setToField("set_fraction")
ROUTE699.setToNode("l3_OI")

ProtoBody603.addChildren(ROUTE699)
OrientationInterpolator700 = x3d.OrientationInterpolator()
OrientationInterpolator700.setDEF("l4_OI")
IS701 = x3d.IS()
connect702 = x3d.connect()
connect702.setNodeField("key")
connect702.setProtoField("l4_key")

IS701.addConnect(connect702)
connect703 = x3d.connect()
connect703.setNodeField("keyValue")
connect703.setProtoField("l4_keyValue")

IS701.addConnect(connect703)
connect704 = x3d.connect()
connect704.setNodeField("value_changed")
connect704.setProtoField("l4_changed")

IS701.addConnect(connect704)

OrientationInterpolator700.setIS(IS701)

ProtoBody603.addChildren(OrientationInterpolator700)
ROUTE705 = x3d.ROUTE()
ROUTE705.setFromField("fraction_changed")
ROUTE705.setFromNode("BehaviorClock")
ROUTE705.setToField("set_fraction")
ROUTE705.setToNode("l4_OI")

ProtoBody603.addChildren(ROUTE705)
OrientationInterpolator706 = x3d.OrientationInterpolator()
OrientationInterpolator706.setDEF("l5_OI")
IS707 = x3d.IS()
connect708 = x3d.connect()
connect708.setNodeField("key")
connect708.setProtoField("l5_key")

IS707.addConnect(connect708)
connect709 = x3d.connect()
connect709.setNodeField("keyValue")
connect709.setProtoField("l5_keyValue")

IS707.addConnect(connect709)
connect710 = x3d.connect()
connect710.setNodeField("value_changed")
connect710.setProtoField("l5_changed")

IS707.addConnect(connect710)

OrientationInterpolator706.setIS(IS707)

ProtoBody603.addChildren(OrientationInterpolator706)
ROUTE711 = x3d.ROUTE()
ROUTE711.setFromField("fraction_changed")
ROUTE711.setFromNode("BehaviorClock")
ROUTE711.setToField("set_fraction")
ROUTE711.setToNode("l5_OI")

ProtoBody603.addChildren(ROUTE711)
OrientationInterpolator712 = x3d.OrientationInterpolator()
OrientationInterpolator712.setDEF("l_acromioclavicular_OI")
IS713 = x3d.IS()
connect714 = x3d.connect()
connect714.setNodeField("key")
connect714.setProtoField("l_acromioclavicular_key")

IS713.addConnect(connect714)
connect715 = x3d.connect()
connect715.setNodeField("keyValue")
connect715.setProtoField("l_acromioclavicular_keyValue")

IS713.addConnect(connect715)
connect716 = x3d.connect()
connect716.setNodeField("value_changed")
connect716.setProtoField("l_acromioclavicular_changed")

IS713.addConnect(connect716)

OrientationInterpolator712.setIS(IS713)

ProtoBody603.addChildren(OrientationInterpolator712)
ROUTE717 = x3d.ROUTE()
ROUTE717.setFromField("fraction_changed")
ROUTE717.setFromNode("BehaviorClock")
ROUTE717.setToField("set_fraction")
ROUTE717.setToNode("l_acromioclavicular_OI")

ProtoBody603.addChildren(ROUTE717)
OrientationInterpolator718 = x3d.OrientationInterpolator()
OrientationInterpolator718.setDEF("l_ankle_OI")
IS719 = x3d.IS()
connect720 = x3d.connect()
connect720.setNodeField("key")
connect720.setProtoField("l_ankle_key")

IS719.addConnect(connect720)
connect721 = x3d.connect()
connect721.setNodeField("keyValue")
connect721.setProtoField("l_ankle_keyValue")

IS719.addConnect(connect721)
connect722 = x3d.connect()
connect722.setNodeField("value_changed")
connect722.setProtoField("l_ankle_changed")

IS719.addConnect(connect722)

OrientationInterpolator718.setIS(IS719)

ProtoBody603.addChildren(OrientationInterpolator718)
ROUTE723 = x3d.ROUTE()
ROUTE723.setFromField("fraction_changed")
ROUTE723.setFromNode("BehaviorClock")
ROUTE723.setToField("set_fraction")
ROUTE723.setToNode("l_ankle_OI")

ProtoBody603.addChildren(ROUTE723)
OrientationInterpolator724 = x3d.OrientationInterpolator()
OrientationInterpolator724.setDEF("l_calf_OI")
IS725 = x3d.IS()
connect726 = x3d.connect()
connect726.setNodeField("key")
connect726.setProtoField("l_calf_key")

IS725.addConnect(connect726)
connect727 = x3d.connect()
connect727.setNodeField("keyValue")
connect727.setProtoField("l_calf_keyValue")

IS725.addConnect(connect727)
connect728 = x3d.connect()
connect728.setNodeField("value_changed")
connect728.setProtoField("l_calf_changed")

IS725.addConnect(connect728)

OrientationInterpolator724.setIS(IS725)

ProtoBody603.addChildren(OrientationInterpolator724)
ROUTE729 = x3d.ROUTE()
ROUTE729.setFromField("fraction_changed")
ROUTE729.setFromNode("BehaviorClock")
ROUTE729.setToField("set_fraction")
ROUTE729.setToNode("l_calf_OI")

ProtoBody603.addChildren(ROUTE729)
OrientationInterpolator730 = x3d.OrientationInterpolator()
OrientationInterpolator730.setDEF("l_clavicle_OI")
IS731 = x3d.IS()
connect732 = x3d.connect()
connect732.setNodeField("key")
connect732.setProtoField("l_clavicle_key")

IS731.addConnect(connect732)
connect733 = x3d.connect()
connect733.setNodeField("keyValue")
connect733.setProtoField("l_clavicle_keyValue")

IS731.addConnect(connect733)
connect734 = x3d.connect()
connect734.setNodeField("value_changed")
connect734.setProtoField("l_clavicle_changed")

IS731.addConnect(connect734)

OrientationInterpolator730.setIS(IS731)

ProtoBody603.addChildren(OrientationInterpolator730)
ROUTE735 = x3d.ROUTE()
ROUTE735.setFromField("fraction_changed")
ROUTE735.setFromNode("BehaviorClock")
ROUTE735.setToField("set_fraction")
ROUTE735.setToNode("l_clavicle_OI")

ProtoBody603.addChildren(ROUTE735)
OrientationInterpolator736 = x3d.OrientationInterpolator()
OrientationInterpolator736.setDEF("l_elbow_OI")
IS737 = x3d.IS()
connect738 = x3d.connect()
connect738.setNodeField("key")
connect738.setProtoField("l_elbow_key")

IS737.addConnect(connect738)
connect739 = x3d.connect()
connect739.setNodeField("keyValue")
connect739.setProtoField("l_elbow_keyValue")

IS737.addConnect(connect739)
connect740 = x3d.connect()
connect740.setNodeField("value_changed")
connect740.setProtoField("l_elbow_changed")

IS737.addConnect(connect740)

OrientationInterpolator736.setIS(IS737)

ProtoBody603.addChildren(OrientationInterpolator736)
ROUTE741 = x3d.ROUTE()
ROUTE741.setFromField("fraction_changed")
ROUTE741.setFromNode("BehaviorClock")
ROUTE741.setToField("set_fraction")
ROUTE741.setToNode("l_elbow_OI")

ProtoBody603.addChildren(ROUTE741)
OrientationInterpolator742 = x3d.OrientationInterpolator()
OrientationInterpolator742.setDEF("l_eyeball_OI")
IS743 = x3d.IS()
connect744 = x3d.connect()
connect744.setNodeField("key")
connect744.setProtoField("l_eyeball_key")

IS743.addConnect(connect744)
connect745 = x3d.connect()
connect745.setNodeField("keyValue")
connect745.setProtoField("l_eyeball_keyValue")

IS743.addConnect(connect745)
connect746 = x3d.connect()
connect746.setNodeField("value_changed")
connect746.setProtoField("l_eyeball_changed")

IS743.addConnect(connect746)

OrientationInterpolator742.setIS(IS743)

ProtoBody603.addChildren(OrientationInterpolator742)
ROUTE747 = x3d.ROUTE()
ROUTE747.setFromField("fraction_changed")
ROUTE747.setFromNode("BehaviorClock")
ROUTE747.setToField("set_fraction")
ROUTE747.setToNode("l_eyeball_OI")

ProtoBody603.addChildren(ROUTE747)
OrientationInterpolator748 = x3d.OrientationInterpolator()
OrientationInterpolator748.setDEF("l_eyeball_joint_OI")
IS749 = x3d.IS()
connect750 = x3d.connect()
connect750.setNodeField("key")
connect750.setProtoField("l_eyeball_joint_key")

IS749.addConnect(connect750)
connect751 = x3d.connect()
connect751.setNodeField("keyValue")
connect751.setProtoField("l_eyeball_joint_keyValue")

IS749.addConnect(connect751)
connect752 = x3d.connect()
connect752.setNodeField("value_changed")
connect752.setProtoField("l_eyeball_joint_changed")

IS749.addConnect(connect752)

OrientationInterpolator748.setIS(IS749)

ProtoBody603.addChildren(OrientationInterpolator748)
ROUTE753 = x3d.ROUTE()
ROUTE753.setFromField("fraction_changed")
ROUTE753.setFromNode("BehaviorClock")
ROUTE753.setToField("set_fraction")
ROUTE753.setToNode("l_eyeball_joint_OI")

ProtoBody603.addChildren(ROUTE753)
OrientationInterpolator754 = x3d.OrientationInterpolator()
OrientationInterpolator754.setDEF("l_eyebrow_OI")
IS755 = x3d.IS()
connect756 = x3d.connect()
connect756.setNodeField("key")
connect756.setProtoField("l_eyebrow_key")

IS755.addConnect(connect756)
connect757 = x3d.connect()
connect757.setNodeField("keyValue")
connect757.setProtoField("l_eyebrow_keyValue")

IS755.addConnect(connect757)
connect758 = x3d.connect()
connect758.setNodeField("value_changed")
connect758.setProtoField("l_eyebrow_changed")

IS755.addConnect(connect758)

OrientationInterpolator754.setIS(IS755)

ProtoBody603.addChildren(OrientationInterpolator754)
ROUTE759 = x3d.ROUTE()
ROUTE759.setFromField("fraction_changed")
ROUTE759.setFromNode("BehaviorClock")
ROUTE759.setToField("set_fraction")
ROUTE759.setToNode("l_eyebrow_OI")

ProtoBody603.addChildren(ROUTE759)
OrientationInterpolator760 = x3d.OrientationInterpolator()
OrientationInterpolator760.setDEF("l_eyebrow_joint_OI")
IS761 = x3d.IS()
connect762 = x3d.connect()
connect762.setNodeField("key")
connect762.setProtoField("l_eyebrow_joint_key")

IS761.addConnect(connect762)
connect763 = x3d.connect()
connect763.setNodeField("keyValue")
connect763.setProtoField("l_eyebrow_joint_keyValue")

IS761.addConnect(connect763)
connect764 = x3d.connect()
connect764.setNodeField("value_changed")
connect764.setProtoField("l_eyebrow_joint_changed")

IS761.addConnect(connect764)

OrientationInterpolator760.setIS(IS761)

ProtoBody603.addChildren(OrientationInterpolator760)
ROUTE765 = x3d.ROUTE()
ROUTE765.setFromField("fraction_changed")
ROUTE765.setFromNode("BehaviorClock")
ROUTE765.setToField("set_fraction")
ROUTE765.setToNode("l_eyebrow_joint_OI")

ProtoBody603.addChildren(ROUTE765)
OrientationInterpolator766 = x3d.OrientationInterpolator()
OrientationInterpolator766.setDEF("l_eyelid_OI")
IS767 = x3d.IS()
connect768 = x3d.connect()
connect768.setNodeField("key")
connect768.setProtoField("l_eyelid_key")

IS767.addConnect(connect768)
connect769 = x3d.connect()
connect769.setNodeField("keyValue")
connect769.setProtoField("l_eyelid_keyValue")

IS767.addConnect(connect769)
connect770 = x3d.connect()
connect770.setNodeField("value_changed")
connect770.setProtoField("l_eyelid_changed")

IS767.addConnect(connect770)

OrientationInterpolator766.setIS(IS767)

ProtoBody603.addChildren(OrientationInterpolator766)
ROUTE771 = x3d.ROUTE()
ROUTE771.setFromField("fraction_changed")
ROUTE771.setFromNode("BehaviorClock")
ROUTE771.setToField("set_fraction")
ROUTE771.setToNode("l_eyelid_OI")

ProtoBody603.addChildren(ROUTE771)
OrientationInterpolator772 = x3d.OrientationInterpolator()
OrientationInterpolator772.setDEF("l_eyelid_joint_OI")
IS773 = x3d.IS()
connect774 = x3d.connect()
connect774.setNodeField("key")
connect774.setProtoField("l_eyelid_joint_key")

IS773.addConnect(connect774)
connect775 = x3d.connect()
connect775.setNodeField("keyValue")
connect775.setProtoField("l_eyelid_joint_keyValue")

IS773.addConnect(connect775)
connect776 = x3d.connect()
connect776.setNodeField("value_changed")
connect776.setProtoField("l_eyelid_joint_changed")

IS773.addConnect(connect776)

OrientationInterpolator772.setIS(IS773)

ProtoBody603.addChildren(OrientationInterpolator772)
ROUTE777 = x3d.ROUTE()
ROUTE777.setFromField("fraction_changed")
ROUTE777.setFromNode("BehaviorClock")
ROUTE777.setToField("set_fraction")
ROUTE777.setToNode("l_eyelid_joint_OI")

ProtoBody603.addChildren(ROUTE777)
OrientationInterpolator778 = x3d.OrientationInterpolator()
OrientationInterpolator778.setDEF("l_forearm_OI")
IS779 = x3d.IS()
connect780 = x3d.connect()
connect780.setNodeField("key")
connect780.setProtoField("l_forearm_key")

IS779.addConnect(connect780)
connect781 = x3d.connect()
connect781.setNodeField("keyValue")
connect781.setProtoField("l_forearm_keyValue")

IS779.addConnect(connect781)
connect782 = x3d.connect()
connect782.setNodeField("value_changed")
connect782.setProtoField("l_forearm_changed")

IS779.addConnect(connect782)

OrientationInterpolator778.setIS(IS779)

ProtoBody603.addChildren(OrientationInterpolator778)
ROUTE783 = x3d.ROUTE()
ROUTE783.setFromField("fraction_changed")
ROUTE783.setFromNode("BehaviorClock")
ROUTE783.setToField("set_fraction")
ROUTE783.setToNode("l_forearm_OI")

ProtoBody603.addChildren(ROUTE783)
OrientationInterpolator784 = x3d.OrientationInterpolator()
OrientationInterpolator784.setDEF("l_forefoot_OI")
IS785 = x3d.IS()
connect786 = x3d.connect()
connect786.setNodeField("key")
connect786.setProtoField("l_forefoot_key")

IS785.addConnect(connect786)
connect787 = x3d.connect()
connect787.setNodeField("keyValue")
connect787.setProtoField("l_forefoot_keyValue")

IS785.addConnect(connect787)
connect788 = x3d.connect()
connect788.setNodeField("value_changed")
connect788.setProtoField("l_forefoot_changed")

IS785.addConnect(connect788)

OrientationInterpolator784.setIS(IS785)

ProtoBody603.addChildren(OrientationInterpolator784)
ROUTE789 = x3d.ROUTE()
ROUTE789.setFromField("fraction_changed")
ROUTE789.setFromNode("BehaviorClock")
ROUTE789.setToField("set_fraction")
ROUTE789.setToNode("l_forefoot_OI")

ProtoBody603.addChildren(ROUTE789)
OrientationInterpolator790 = x3d.OrientationInterpolator()
OrientationInterpolator790.setDEF("l_hand_OI")
IS791 = x3d.IS()
connect792 = x3d.connect()
connect792.setNodeField("key")
connect792.setProtoField("l_hand_key")

IS791.addConnect(connect792)
connect793 = x3d.connect()
connect793.setNodeField("keyValue")
connect793.setProtoField("l_hand_keyValue")

IS791.addConnect(connect793)
connect794 = x3d.connect()
connect794.setNodeField("value_changed")
connect794.setProtoField("l_hand_changed")

IS791.addConnect(connect794)

OrientationInterpolator790.setIS(IS791)

ProtoBody603.addChildren(OrientationInterpolator790)
ROUTE795 = x3d.ROUTE()
ROUTE795.setFromField("fraction_changed")
ROUTE795.setFromNode("BehaviorClock")
ROUTE795.setToField("set_fraction")
ROUTE795.setToNode("l_hand_OI")

ProtoBody603.addChildren(ROUTE795)
OrientationInterpolator796 = x3d.OrientationInterpolator()
OrientationInterpolator796.setDEF("l_hindfoot_OI")
IS797 = x3d.IS()
connect798 = x3d.connect()
connect798.setNodeField("key")
connect798.setProtoField("l_hindfoot_key")

IS797.addConnect(connect798)
connect799 = x3d.connect()
connect799.setNodeField("keyValue")
connect799.setProtoField("l_hindfoot_keyValue")

IS797.addConnect(connect799)
connect800 = x3d.connect()
connect800.setNodeField("value_changed")
connect800.setProtoField("l_hindfoot_changed")

IS797.addConnect(connect800)

OrientationInterpolator796.setIS(IS797)

ProtoBody603.addChildren(OrientationInterpolator796)
ROUTE801 = x3d.ROUTE()
ROUTE801.setFromField("fraction_changed")
ROUTE801.setFromNode("BehaviorClock")
ROUTE801.setToField("set_fraction")
ROUTE801.setToNode("l_hindfoot_OI")

ProtoBody603.addChildren(ROUTE801)
OrientationInterpolator802 = x3d.OrientationInterpolator()
OrientationInterpolator802.setDEF("l_hip_OI")
IS803 = x3d.IS()
connect804 = x3d.connect()
connect804.setNodeField("key")
connect804.setProtoField("l_hip_key")

IS803.addConnect(connect804)
connect805 = x3d.connect()
connect805.setNodeField("keyValue")
connect805.setProtoField("l_hip_keyValue")

IS803.addConnect(connect805)
connect806 = x3d.connect()
connect806.setNodeField("value_changed")
connect806.setProtoField("l_hip_changed")

IS803.addConnect(connect806)

OrientationInterpolator802.setIS(IS803)

ProtoBody603.addChildren(OrientationInterpolator802)
ROUTE807 = x3d.ROUTE()
ROUTE807.setFromField("fraction_changed")
ROUTE807.setFromNode("BehaviorClock")
ROUTE807.setToField("set_fraction")
ROUTE807.setToNode("l_hip_OI")

ProtoBody603.addChildren(ROUTE807)
OrientationInterpolator808 = x3d.OrientationInterpolator()
OrientationInterpolator808.setDEF("l_index0_OI")
IS809 = x3d.IS()
connect810 = x3d.connect()
connect810.setNodeField("key")
connect810.setProtoField("l_index0_key")

IS809.addConnect(connect810)
connect811 = x3d.connect()
connect811.setNodeField("keyValue")
connect811.setProtoField("l_index0_keyValue")

IS809.addConnect(connect811)
connect812 = x3d.connect()
connect812.setNodeField("value_changed")
connect812.setProtoField("l_index0_changed")

IS809.addConnect(connect812)

OrientationInterpolator808.setIS(IS809)

ProtoBody603.addChildren(OrientationInterpolator808)
ROUTE813 = x3d.ROUTE()
ROUTE813.setFromField("fraction_changed")
ROUTE813.setFromNode("BehaviorClock")
ROUTE813.setToField("set_fraction")
ROUTE813.setToNode("l_index0_OI")

ProtoBody603.addChildren(ROUTE813)
OrientationInterpolator814 = x3d.OrientationInterpolator()
OrientationInterpolator814.setDEF("l_index1_OI")
IS815 = x3d.IS()
connect816 = x3d.connect()
connect816.setNodeField("key")
connect816.setProtoField("l_index1_key")

IS815.addConnect(connect816)
connect817 = x3d.connect()
connect817.setNodeField("keyValue")
connect817.setProtoField("l_index1_keyValue")

IS815.addConnect(connect817)
connect818 = x3d.connect()
connect818.setNodeField("value_changed")
connect818.setProtoField("l_index1_changed")

IS815.addConnect(connect818)

OrientationInterpolator814.setIS(IS815)

ProtoBody603.addChildren(OrientationInterpolator814)
ROUTE819 = x3d.ROUTE()
ROUTE819.setFromField("fraction_changed")
ROUTE819.setFromNode("BehaviorClock")
ROUTE819.setToField("set_fraction")
ROUTE819.setToNode("l_index1_OI")

ProtoBody603.addChildren(ROUTE819)
OrientationInterpolator820 = x3d.OrientationInterpolator()
OrientationInterpolator820.setDEF("l_index2_OI")
IS821 = x3d.IS()
connect822 = x3d.connect()
connect822.setNodeField("key")
connect822.setProtoField("l_index2_key")

IS821.addConnect(connect822)
connect823 = x3d.connect()
connect823.setNodeField("keyValue")
connect823.setProtoField("l_index2_keyValue")

IS821.addConnect(connect823)
connect824 = x3d.connect()
connect824.setNodeField("value_changed")
connect824.setProtoField("l_index2_changed")

IS821.addConnect(connect824)

OrientationInterpolator820.setIS(IS821)

ProtoBody603.addChildren(OrientationInterpolator820)
ROUTE825 = x3d.ROUTE()
ROUTE825.setFromField("fraction_changed")
ROUTE825.setFromNode("BehaviorClock")
ROUTE825.setToField("set_fraction")
ROUTE825.setToNode("l_index2_OI")

ProtoBody603.addChildren(ROUTE825)
OrientationInterpolator826 = x3d.OrientationInterpolator()
OrientationInterpolator826.setDEF("l_index3_OI")
IS827 = x3d.IS()
connect828 = x3d.connect()
connect828.setNodeField("key")
connect828.setProtoField("l_index3_key")

IS827.addConnect(connect828)
connect829 = x3d.connect()
connect829.setNodeField("keyValue")
connect829.setProtoField("l_index3_keyValue")

IS827.addConnect(connect829)
connect830 = x3d.connect()
connect830.setNodeField("value_changed")
connect830.setProtoField("l_index3_changed")

IS827.addConnect(connect830)

OrientationInterpolator826.setIS(IS827)

ProtoBody603.addChildren(OrientationInterpolator826)
ROUTE831 = x3d.ROUTE()
ROUTE831.setFromField("fraction_changed")
ROUTE831.setFromNode("BehaviorClock")
ROUTE831.setToField("set_fraction")
ROUTE831.setToNode("l_index3_OI")

ProtoBody603.addChildren(ROUTE831)
OrientationInterpolator832 = x3d.OrientationInterpolator()
OrientationInterpolator832.setDEF("l_index_distal_OI")
IS833 = x3d.IS()
connect834 = x3d.connect()
connect834.setNodeField("key")
connect834.setProtoField("l_index_distal_key")

IS833.addConnect(connect834)
connect835 = x3d.connect()
connect835.setNodeField("keyValue")
connect835.setProtoField("l_index_distal_keyValue")

IS833.addConnect(connect835)
connect836 = x3d.connect()
connect836.setNodeField("value_changed")
connect836.setProtoField("l_index_distal_changed")

IS833.addConnect(connect836)

OrientationInterpolator832.setIS(IS833)

ProtoBody603.addChildren(OrientationInterpolator832)
ROUTE837 = x3d.ROUTE()
ROUTE837.setFromField("fraction_changed")
ROUTE837.setFromNode("BehaviorClock")
ROUTE837.setToField("set_fraction")
ROUTE837.setToNode("l_index_distal_OI")

ProtoBody603.addChildren(ROUTE837)
OrientationInterpolator838 = x3d.OrientationInterpolator()
OrientationInterpolator838.setDEF("l_index_metacarpal_OI")
IS839 = x3d.IS()
connect840 = x3d.connect()
connect840.setNodeField("key")
connect840.setProtoField("l_index_metacarpal_key")

IS839.addConnect(connect840)
connect841 = x3d.connect()
connect841.setNodeField("keyValue")
connect841.setProtoField("l_index_metacarpal_keyValue")

IS839.addConnect(connect841)
connect842 = x3d.connect()
connect842.setNodeField("value_changed")
connect842.setProtoField("l_index_metacarpal_changed")

IS839.addConnect(connect842)

OrientationInterpolator838.setIS(IS839)

ProtoBody603.addChildren(OrientationInterpolator838)
ROUTE843 = x3d.ROUTE()
ROUTE843.setFromField("fraction_changed")
ROUTE843.setFromNode("BehaviorClock")
ROUTE843.setToField("set_fraction")
ROUTE843.setToNode("l_index_metacarpal_OI")

ProtoBody603.addChildren(ROUTE843)
OrientationInterpolator844 = x3d.OrientationInterpolator()
OrientationInterpolator844.setDEF("l_index_middle_OI")
IS845 = x3d.IS()
connect846 = x3d.connect()
connect846.setNodeField("key")
connect846.setProtoField("l_index_middle_key")

IS845.addConnect(connect846)
connect847 = x3d.connect()
connect847.setNodeField("keyValue")
connect847.setProtoField("l_index_middle_keyValue")

IS845.addConnect(connect847)
connect848 = x3d.connect()
connect848.setNodeField("value_changed")
connect848.setProtoField("l_index_middle_changed")

IS845.addConnect(connect848)

OrientationInterpolator844.setIS(IS845)

ProtoBody603.addChildren(OrientationInterpolator844)
ROUTE849 = x3d.ROUTE()
ROUTE849.setFromField("fraction_changed")
ROUTE849.setFromNode("BehaviorClock")
ROUTE849.setToField("set_fraction")
ROUTE849.setToNode("l_index_middle_OI")

ProtoBody603.addChildren(ROUTE849)
OrientationInterpolator850 = x3d.OrientationInterpolator()
OrientationInterpolator850.setDEF("l_index_proximal_OI")
IS851 = x3d.IS()
connect852 = x3d.connect()
connect852.setNodeField("key")
connect852.setProtoField("l_index_proximal_key")

IS851.addConnect(connect852)
connect853 = x3d.connect()
connect853.setNodeField("keyValue")
connect853.setProtoField("l_index_proximal_keyValue")

IS851.addConnect(connect853)
connect854 = x3d.connect()
connect854.setNodeField("value_changed")
connect854.setProtoField("l_index_proximal_changed")

IS851.addConnect(connect854)

OrientationInterpolator850.setIS(IS851)

ProtoBody603.addChildren(OrientationInterpolator850)
ROUTE855 = x3d.ROUTE()
ROUTE855.setFromField("fraction_changed")
ROUTE855.setFromNode("BehaviorClock")
ROUTE855.setToField("set_fraction")
ROUTE855.setToNode("l_index_proximal_OI")

ProtoBody603.addChildren(ROUTE855)
OrientationInterpolator856 = x3d.OrientationInterpolator()
OrientationInterpolator856.setDEF("l_knee_OI")
IS857 = x3d.IS()
connect858 = x3d.connect()
connect858.setNodeField("key")
connect858.setProtoField("l_knee_key")

IS857.addConnect(connect858)
connect859 = x3d.connect()
connect859.setNodeField("keyValue")
connect859.setProtoField("l_knee_keyValue")

IS857.addConnect(connect859)
connect860 = x3d.connect()
connect860.setNodeField("value_changed")
connect860.setProtoField("l_knee_changed")

IS857.addConnect(connect860)

OrientationInterpolator856.setIS(IS857)

ProtoBody603.addChildren(OrientationInterpolator856)
ROUTE861 = x3d.ROUTE()
ROUTE861.setFromField("fraction_changed")
ROUTE861.setFromNode("BehaviorClock")
ROUTE861.setToField("set_fraction")
ROUTE861.setToNode("l_knee_OI")

ProtoBody603.addChildren(ROUTE861)
OrientationInterpolator862 = x3d.OrientationInterpolator()
OrientationInterpolator862.setDEF("l_metatarsal_OI")
IS863 = x3d.IS()
connect864 = x3d.connect()
connect864.setNodeField("key")
connect864.setProtoField("l_metatarsal_key")

IS863.addConnect(connect864)
connect865 = x3d.connect()
connect865.setNodeField("keyValue")
connect865.setProtoField("l_metatarsal_keyValue")

IS863.addConnect(connect865)
connect866 = x3d.connect()
connect866.setNodeField("value_changed")
connect866.setProtoField("l_metatarsal_changed")

IS863.addConnect(connect866)

OrientationInterpolator862.setIS(IS863)

ProtoBody603.addChildren(OrientationInterpolator862)
ROUTE867 = x3d.ROUTE()
ROUTE867.setFromField("fraction_changed")
ROUTE867.setFromNode("BehaviorClock")
ROUTE867.setToField("set_fraction")
ROUTE867.setToNode("l_metatarsal_OI")

ProtoBody603.addChildren(ROUTE867)
OrientationInterpolator868 = x3d.OrientationInterpolator()
OrientationInterpolator868.setDEF("l_middistal_OI")
IS869 = x3d.IS()
connect870 = x3d.connect()
connect870.setNodeField("key")
connect870.setProtoField("l_middistal_key")

IS869.addConnect(connect870)
connect871 = x3d.connect()
connect871.setNodeField("keyValue")
connect871.setProtoField("l_middistal_keyValue")

IS869.addConnect(connect871)
connect872 = x3d.connect()
connect872.setNodeField("value_changed")
connect872.setProtoField("l_middistal_changed")

IS869.addConnect(connect872)

OrientationInterpolator868.setIS(IS869)

ProtoBody603.addChildren(OrientationInterpolator868)
ROUTE873 = x3d.ROUTE()
ROUTE873.setFromField("fraction_changed")
ROUTE873.setFromNode("BehaviorClock")
ROUTE873.setToField("set_fraction")
ROUTE873.setToNode("l_middistal_OI")

ProtoBody603.addChildren(ROUTE873)
OrientationInterpolator874 = x3d.OrientationInterpolator()
OrientationInterpolator874.setDEF("l_middle0_OI")
IS875 = x3d.IS()
connect876 = x3d.connect()
connect876.setNodeField("key")
connect876.setProtoField("l_middle0_key")

IS875.addConnect(connect876)
connect877 = x3d.connect()
connect877.setNodeField("keyValue")
connect877.setProtoField("l_middle0_keyValue")

IS875.addConnect(connect877)
connect878 = x3d.connect()
connect878.setNodeField("value_changed")
connect878.setProtoField("l_middle0_changed")

IS875.addConnect(connect878)

OrientationInterpolator874.setIS(IS875)

ProtoBody603.addChildren(OrientationInterpolator874)
ROUTE879 = x3d.ROUTE()
ROUTE879.setFromField("fraction_changed")
ROUTE879.setFromNode("BehaviorClock")
ROUTE879.setToField("set_fraction")
ROUTE879.setToNode("l_middle0_OI")

ProtoBody603.addChildren(ROUTE879)
OrientationInterpolator880 = x3d.OrientationInterpolator()
OrientationInterpolator880.setDEF("l_middle1_OI")
IS881 = x3d.IS()
connect882 = x3d.connect()
connect882.setNodeField("key")
connect882.setProtoField("l_middle1_key")

IS881.addConnect(connect882)
connect883 = x3d.connect()
connect883.setNodeField("keyValue")
connect883.setProtoField("l_middle1_keyValue")

IS881.addConnect(connect883)
connect884 = x3d.connect()
connect884.setNodeField("value_changed")
connect884.setProtoField("l_middle1_changed")

IS881.addConnect(connect884)

OrientationInterpolator880.setIS(IS881)

ProtoBody603.addChildren(OrientationInterpolator880)
ROUTE885 = x3d.ROUTE()
ROUTE885.setFromField("fraction_changed")
ROUTE885.setFromNode("BehaviorClock")
ROUTE885.setToField("set_fraction")
ROUTE885.setToNode("l_middle1_OI")

ProtoBody603.addChildren(ROUTE885)
OrientationInterpolator886 = x3d.OrientationInterpolator()
OrientationInterpolator886.setDEF("l_middle2_OI")
IS887 = x3d.IS()
connect888 = x3d.connect()
connect888.setNodeField("key")
connect888.setProtoField("l_middle2_key")

IS887.addConnect(connect888)
connect889 = x3d.connect()
connect889.setNodeField("keyValue")
connect889.setProtoField("l_middle2_keyValue")

IS887.addConnect(connect889)
connect890 = x3d.connect()
connect890.setNodeField("value_changed")
connect890.setProtoField("l_middle2_changed")

IS887.addConnect(connect890)

OrientationInterpolator886.setIS(IS887)

ProtoBody603.addChildren(OrientationInterpolator886)
ROUTE891 = x3d.ROUTE()
ROUTE891.setFromField("fraction_changed")
ROUTE891.setFromNode("BehaviorClock")
ROUTE891.setToField("set_fraction")
ROUTE891.setToNode("l_middle2_OI")

ProtoBody603.addChildren(ROUTE891)
OrientationInterpolator892 = x3d.OrientationInterpolator()
OrientationInterpolator892.setDEF("l_middle3_OI")
IS893 = x3d.IS()
connect894 = x3d.connect()
connect894.setNodeField("key")
connect894.setProtoField("l_middle3_key")

IS893.addConnect(connect894)
connect895 = x3d.connect()
connect895.setNodeField("keyValue")
connect895.setProtoField("l_middle3_keyValue")

IS893.addConnect(connect895)
connect896 = x3d.connect()
connect896.setNodeField("value_changed")
connect896.setProtoField("l_middle3_changed")

IS893.addConnect(connect896)

OrientationInterpolator892.setIS(IS893)

ProtoBody603.addChildren(OrientationInterpolator892)
ROUTE897 = x3d.ROUTE()
ROUTE897.setFromField("fraction_changed")
ROUTE897.setFromNode("BehaviorClock")
ROUTE897.setToField("set_fraction")
ROUTE897.setToNode("l_middle3_OI")

ProtoBody603.addChildren(ROUTE897)
OrientationInterpolator898 = x3d.OrientationInterpolator()
OrientationInterpolator898.setDEF("l_middle_distal_OI")
IS899 = x3d.IS()
connect900 = x3d.connect()
connect900.setNodeField("key")
connect900.setProtoField("l_middle_distal_key")

IS899.addConnect(connect900)
connect901 = x3d.connect()
connect901.setNodeField("keyValue")
connect901.setProtoField("l_middle_distal_keyValue")

IS899.addConnect(connect901)
connect902 = x3d.connect()
connect902.setNodeField("value_changed")
connect902.setProtoField("l_middle_distal_changed")

IS899.addConnect(connect902)

OrientationInterpolator898.setIS(IS899)

ProtoBody603.addChildren(OrientationInterpolator898)
ROUTE903 = x3d.ROUTE()
ROUTE903.setFromField("fraction_changed")
ROUTE903.setFromNode("BehaviorClock")
ROUTE903.setToField("set_fraction")
ROUTE903.setToNode("l_middle_distal_OI")

ProtoBody603.addChildren(ROUTE903)
OrientationInterpolator904 = x3d.OrientationInterpolator()
OrientationInterpolator904.setDEF("l_middle_metacarpal_OI")
IS905 = x3d.IS()
connect906 = x3d.connect()
connect906.setNodeField("key")
connect906.setProtoField("l_middle_metacarpal_key")

IS905.addConnect(connect906)
connect907 = x3d.connect()
connect907.setNodeField("keyValue")
connect907.setProtoField("l_middle_metacarpal_keyValue")

IS905.addConnect(connect907)
connect908 = x3d.connect()
connect908.setNodeField("value_changed")
connect908.setProtoField("l_middle_metacarpal_changed")

IS905.addConnect(connect908)

OrientationInterpolator904.setIS(IS905)

ProtoBody603.addChildren(OrientationInterpolator904)
ROUTE909 = x3d.ROUTE()
ROUTE909.setFromField("fraction_changed")
ROUTE909.setFromNode("BehaviorClock")
ROUTE909.setToField("set_fraction")
ROUTE909.setToNode("l_middle_metacarpal_OI")

ProtoBody603.addChildren(ROUTE909)
OrientationInterpolator910 = x3d.OrientationInterpolator()
OrientationInterpolator910.setDEF("l_middle_middle_OI")
IS911 = x3d.IS()
connect912 = x3d.connect()
connect912.setNodeField("key")
connect912.setProtoField("l_middle_middle_key")

IS911.addConnect(connect912)
connect913 = x3d.connect()
connect913.setNodeField("keyValue")
connect913.setProtoField("l_middle_middle_keyValue")

IS911.addConnect(connect913)
connect914 = x3d.connect()
connect914.setNodeField("value_changed")
connect914.setProtoField("l_middle_middle_changed")

IS911.addConnect(connect914)

OrientationInterpolator910.setIS(IS911)

ProtoBody603.addChildren(OrientationInterpolator910)
ROUTE915 = x3d.ROUTE()
ROUTE915.setFromField("fraction_changed")
ROUTE915.setFromNode("BehaviorClock")
ROUTE915.setToField("set_fraction")
ROUTE915.setToNode("l_middle_middle_OI")

ProtoBody603.addChildren(ROUTE915)
OrientationInterpolator916 = x3d.OrientationInterpolator()
OrientationInterpolator916.setDEF("l_middle_proximal_OI")
IS917 = x3d.IS()
connect918 = x3d.connect()
connect918.setNodeField("key")
connect918.setProtoField("l_middle_proximal_key")

IS917.addConnect(connect918)
connect919 = x3d.connect()
connect919.setNodeField("keyValue")
connect919.setProtoField("l_middle_proximal_keyValue")

IS917.addConnect(connect919)
connect920 = x3d.connect()
connect920.setNodeField("value_changed")
connect920.setProtoField("l_middle_proximal_changed")

IS917.addConnect(connect920)

OrientationInterpolator916.setIS(IS917)

ProtoBody603.addChildren(OrientationInterpolator916)
ROUTE921 = x3d.ROUTE()
ROUTE921.setFromField("fraction_changed")
ROUTE921.setFromNode("BehaviorClock")
ROUTE921.setToField("set_fraction")
ROUTE921.setToNode("l_middle_proximal_OI")

ProtoBody603.addChildren(ROUTE921)
OrientationInterpolator922 = x3d.OrientationInterpolator()
OrientationInterpolator922.setDEF("l_midproximal_OI")
IS923 = x3d.IS()
connect924 = x3d.connect()
connect924.setNodeField("key")
connect924.setProtoField("l_midproximal_key")

IS923.addConnect(connect924)
connect925 = x3d.connect()
connect925.setNodeField("keyValue")
connect925.setProtoField("l_midproximal_keyValue")

IS923.addConnect(connect925)
connect926 = x3d.connect()
connect926.setNodeField("value_changed")
connect926.setProtoField("l_midproximal_changed")

IS923.addConnect(connect926)

OrientationInterpolator922.setIS(IS923)

ProtoBody603.addChildren(OrientationInterpolator922)
ROUTE927 = x3d.ROUTE()
ROUTE927.setFromField("fraction_changed")
ROUTE927.setFromNode("BehaviorClock")
ROUTE927.setToField("set_fraction")
ROUTE927.setToNode("l_midproximal_OI")

ProtoBody603.addChildren(ROUTE927)
OrientationInterpolator928 = x3d.OrientationInterpolator()
OrientationInterpolator928.setDEF("l_midtarsal_OI")
IS929 = x3d.IS()
connect930 = x3d.connect()
connect930.setNodeField("key")
connect930.setProtoField("l_midtarsal_key")

IS929.addConnect(connect930)
connect931 = x3d.connect()
connect931.setNodeField("keyValue")
connect931.setProtoField("l_midtarsal_keyValue")

IS929.addConnect(connect931)
connect932 = x3d.connect()
connect932.setNodeField("value_changed")
connect932.setProtoField("l_midtarsal_changed")

IS929.addConnect(connect932)

OrientationInterpolator928.setIS(IS929)

ProtoBody603.addChildren(OrientationInterpolator928)
ROUTE933 = x3d.ROUTE()
ROUTE933.setFromField("fraction_changed")
ROUTE933.setFromNode("BehaviorClock")
ROUTE933.setToField("set_fraction")
ROUTE933.setToNode("l_midtarsal_OI")

ProtoBody603.addChildren(ROUTE933)
OrientationInterpolator934 = x3d.OrientationInterpolator()
OrientationInterpolator934.setDEF("l_pinky0_OI")
IS935 = x3d.IS()
connect936 = x3d.connect()
connect936.setNodeField("key")
connect936.setProtoField("l_pinky0_key")

IS935.addConnect(connect936)
connect937 = x3d.connect()
connect937.setNodeField("keyValue")
connect937.setProtoField("l_pinky0_keyValue")

IS935.addConnect(connect937)
connect938 = x3d.connect()
connect938.setNodeField("value_changed")
connect938.setProtoField("l_pinky0_changed")

IS935.addConnect(connect938)

OrientationInterpolator934.setIS(IS935)

ProtoBody603.addChildren(OrientationInterpolator934)
ROUTE939 = x3d.ROUTE()
ROUTE939.setFromField("fraction_changed")
ROUTE939.setFromNode("BehaviorClock")
ROUTE939.setToField("set_fraction")
ROUTE939.setToNode("l_pinky0_OI")

ProtoBody603.addChildren(ROUTE939)
OrientationInterpolator940 = x3d.OrientationInterpolator()
OrientationInterpolator940.setDEF("l_pinky1_OI")
IS941 = x3d.IS()
connect942 = x3d.connect()
connect942.setNodeField("key")
connect942.setProtoField("l_pinky1_key")

IS941.addConnect(connect942)
connect943 = x3d.connect()
connect943.setNodeField("keyValue")
connect943.setProtoField("l_pinky1_keyValue")

IS941.addConnect(connect943)
connect944 = x3d.connect()
connect944.setNodeField("value_changed")
connect944.setProtoField("l_pinky1_changed")

IS941.addConnect(connect944)

OrientationInterpolator940.setIS(IS941)

ProtoBody603.addChildren(OrientationInterpolator940)
ROUTE945 = x3d.ROUTE()
ROUTE945.setFromField("fraction_changed")
ROUTE945.setFromNode("BehaviorClock")
ROUTE945.setToField("set_fraction")
ROUTE945.setToNode("l_pinky1_OI")

ProtoBody603.addChildren(ROUTE945)
OrientationInterpolator946 = x3d.OrientationInterpolator()
OrientationInterpolator946.setDEF("l_pinky2_OI")
IS947 = x3d.IS()
connect948 = x3d.connect()
connect948.setNodeField("key")
connect948.setProtoField("l_pinky2_key")

IS947.addConnect(connect948)
connect949 = x3d.connect()
connect949.setNodeField("keyValue")
connect949.setProtoField("l_pinky2_keyValue")

IS947.addConnect(connect949)
connect950 = x3d.connect()
connect950.setNodeField("value_changed")
connect950.setProtoField("l_pinky2_changed")

IS947.addConnect(connect950)

OrientationInterpolator946.setIS(IS947)

ProtoBody603.addChildren(OrientationInterpolator946)
ROUTE951 = x3d.ROUTE()
ROUTE951.setFromField("fraction_changed")
ROUTE951.setFromNode("BehaviorClock")
ROUTE951.setToField("set_fraction")
ROUTE951.setToNode("l_pinky2_OI")

ProtoBody603.addChildren(ROUTE951)
OrientationInterpolator952 = x3d.OrientationInterpolator()
OrientationInterpolator952.setDEF("l_pinky3_OI")
IS953 = x3d.IS()
connect954 = x3d.connect()
connect954.setNodeField("key")
connect954.setProtoField("l_pinky3_key")

IS953.addConnect(connect954)
connect955 = x3d.connect()
connect955.setNodeField("keyValue")
connect955.setProtoField("l_pinky3_keyValue")

IS953.addConnect(connect955)
connect956 = x3d.connect()
connect956.setNodeField("value_changed")
connect956.setProtoField("l_pinky3_changed")

IS953.addConnect(connect956)

OrientationInterpolator952.setIS(IS953)

ProtoBody603.addChildren(OrientationInterpolator952)
ROUTE957 = x3d.ROUTE()
ROUTE957.setFromField("fraction_changed")
ROUTE957.setFromNode("BehaviorClock")
ROUTE957.setToField("set_fraction")
ROUTE957.setToNode("l_pinky3_OI")

ProtoBody603.addChildren(ROUTE957)
OrientationInterpolator958 = x3d.OrientationInterpolator()
OrientationInterpolator958.setDEF("l_pinky_distal_OI")
IS959 = x3d.IS()
connect960 = x3d.connect()
connect960.setNodeField("key")
connect960.setProtoField("l_pinky_distal_key")

IS959.addConnect(connect960)
connect961 = x3d.connect()
connect961.setNodeField("keyValue")
connect961.setProtoField("l_pinky_distal_keyValue")

IS959.addConnect(connect961)
connect962 = x3d.connect()
connect962.setNodeField("value_changed")
connect962.setProtoField("l_pinky_distal_changed")

IS959.addConnect(connect962)

OrientationInterpolator958.setIS(IS959)

ProtoBody603.addChildren(OrientationInterpolator958)
ROUTE963 = x3d.ROUTE()
ROUTE963.setFromField("fraction_changed")
ROUTE963.setFromNode("BehaviorClock")
ROUTE963.setToField("set_fraction")
ROUTE963.setToNode("l_pinky_distal_OI")

ProtoBody603.addChildren(ROUTE963)
OrientationInterpolator964 = x3d.OrientationInterpolator()
OrientationInterpolator964.setDEF("l_pinky_metacarpal_OI")
IS965 = x3d.IS()
connect966 = x3d.connect()
connect966.setNodeField("key")
connect966.setProtoField("l_pinky_metacarpal_key")

IS965.addConnect(connect966)
connect967 = x3d.connect()
connect967.setNodeField("keyValue")
connect967.setProtoField("l_pinky_metacarpal_keyValue")

IS965.addConnect(connect967)
connect968 = x3d.connect()
connect968.setNodeField("value_changed")
connect968.setProtoField("l_pinky_metacarpal_changed")

IS965.addConnect(connect968)

OrientationInterpolator964.setIS(IS965)

ProtoBody603.addChildren(OrientationInterpolator964)
ROUTE969 = x3d.ROUTE()
ROUTE969.setFromField("fraction_changed")
ROUTE969.setFromNode("BehaviorClock")
ROUTE969.setToField("set_fraction")
ROUTE969.setToNode("l_pinky_metacarpal_OI")

ProtoBody603.addChildren(ROUTE969)
OrientationInterpolator970 = x3d.OrientationInterpolator()
OrientationInterpolator970.setDEF("l_pinky_middle_OI")
IS971 = x3d.IS()
connect972 = x3d.connect()
connect972.setNodeField("key")
connect972.setProtoField("l_pinky_middle_key")

IS971.addConnect(connect972)
connect973 = x3d.connect()
connect973.setNodeField("keyValue")
connect973.setProtoField("l_pinky_middle_keyValue")

IS971.addConnect(connect973)
connect974 = x3d.connect()
connect974.setNodeField("value_changed")
connect974.setProtoField("l_pinky_middle_changed")

IS971.addConnect(connect974)

OrientationInterpolator970.setIS(IS971)

ProtoBody603.addChildren(OrientationInterpolator970)
ROUTE975 = x3d.ROUTE()
ROUTE975.setFromField("fraction_changed")
ROUTE975.setFromNode("BehaviorClock")
ROUTE975.setToField("set_fraction")
ROUTE975.setToNode("l_pinky_middle_OI")

ProtoBody603.addChildren(ROUTE975)
OrientationInterpolator976 = x3d.OrientationInterpolator()
OrientationInterpolator976.setDEF("l_pinky_proximal_OI")
IS977 = x3d.IS()
connect978 = x3d.connect()
connect978.setNodeField("key")
connect978.setProtoField("l_pinky_proximal_key")

IS977.addConnect(connect978)
connect979 = x3d.connect()
connect979.setNodeField("keyValue")
connect979.setProtoField("l_pinky_proximal_keyValue")

IS977.addConnect(connect979)
connect980 = x3d.connect()
connect980.setNodeField("value_changed")
connect980.setProtoField("l_pinky_proximal_changed")

IS977.addConnect(connect980)

OrientationInterpolator976.setIS(IS977)

ProtoBody603.addChildren(OrientationInterpolator976)
ROUTE981 = x3d.ROUTE()
ROUTE981.setFromField("fraction_changed")
ROUTE981.setFromNode("BehaviorClock")
ROUTE981.setToField("set_fraction")
ROUTE981.setToNode("l_pinky_proximal_OI")

ProtoBody603.addChildren(ROUTE981)
OrientationInterpolator982 = x3d.OrientationInterpolator()
OrientationInterpolator982.setDEF("l_ring0_OI")
IS983 = x3d.IS()
connect984 = x3d.connect()
connect984.setNodeField("key")
connect984.setProtoField("l_ring0_key")

IS983.addConnect(connect984)
connect985 = x3d.connect()
connect985.setNodeField("keyValue")
connect985.setProtoField("l_ring0_keyValue")

IS983.addConnect(connect985)
connect986 = x3d.connect()
connect986.setNodeField("value_changed")
connect986.setProtoField("l_ring0_changed")

IS983.addConnect(connect986)

OrientationInterpolator982.setIS(IS983)

ProtoBody603.addChildren(OrientationInterpolator982)
ROUTE987 = x3d.ROUTE()
ROUTE987.setFromField("fraction_changed")
ROUTE987.setFromNode("BehaviorClock")
ROUTE987.setToField("set_fraction")
ROUTE987.setToNode("l_ring0_OI")

ProtoBody603.addChildren(ROUTE987)
OrientationInterpolator988 = x3d.OrientationInterpolator()
OrientationInterpolator988.setDEF("l_ring1_OI")
IS989 = x3d.IS()
connect990 = x3d.connect()
connect990.setNodeField("key")
connect990.setProtoField("l_ring1_key")

IS989.addConnect(connect990)
connect991 = x3d.connect()
connect991.setNodeField("keyValue")
connect991.setProtoField("l_ring1_keyValue")

IS989.addConnect(connect991)
connect992 = x3d.connect()
connect992.setNodeField("value_changed")
connect992.setProtoField("l_ring1_changed")

IS989.addConnect(connect992)

OrientationInterpolator988.setIS(IS989)

ProtoBody603.addChildren(OrientationInterpolator988)
ROUTE993 = x3d.ROUTE()
ROUTE993.setFromField("fraction_changed")
ROUTE993.setFromNode("BehaviorClock")
ROUTE993.setToField("set_fraction")
ROUTE993.setToNode("l_ring1_OI")

ProtoBody603.addChildren(ROUTE993)
OrientationInterpolator994 = x3d.OrientationInterpolator()
OrientationInterpolator994.setDEF("l_ring2_OI")
IS995 = x3d.IS()
connect996 = x3d.connect()
connect996.setNodeField("key")
connect996.setProtoField("l_ring2_key")

IS995.addConnect(connect996)
connect997 = x3d.connect()
connect997.setNodeField("keyValue")
connect997.setProtoField("l_ring2_keyValue")

IS995.addConnect(connect997)
connect998 = x3d.connect()
connect998.setNodeField("value_changed")
connect998.setProtoField("l_ring2_changed")

IS995.addConnect(connect998)

OrientationInterpolator994.setIS(IS995)

ProtoBody603.addChildren(OrientationInterpolator994)
ROUTE999 = x3d.ROUTE()
ROUTE999.setFromField("fraction_changed")
ROUTE999.setFromNode("BehaviorClock")
ROUTE999.setToField("set_fraction")
ROUTE999.setToNode("l_ring2_OI")

ProtoBody603.addChildren(ROUTE999)
OrientationInterpolator1000 = x3d.OrientationInterpolator()
OrientationInterpolator1000.setDEF("l_ring3_OI")
IS1001 = x3d.IS()
connect1002 = x3d.connect()
connect1002.setNodeField("key")
connect1002.setProtoField("l_ring3_key")

IS1001.addConnect(connect1002)
connect1003 = x3d.connect()
connect1003.setNodeField("keyValue")
connect1003.setProtoField("l_ring3_keyValue")

IS1001.addConnect(connect1003)
connect1004 = x3d.connect()
connect1004.setNodeField("value_changed")
connect1004.setProtoField("l_ring3_changed")

IS1001.addConnect(connect1004)

OrientationInterpolator1000.setIS(IS1001)

ProtoBody603.addChildren(OrientationInterpolator1000)
ROUTE1005 = x3d.ROUTE()
ROUTE1005.setFromField("fraction_changed")
ROUTE1005.setFromNode("BehaviorClock")
ROUTE1005.setToField("set_fraction")
ROUTE1005.setToNode("l_ring3_OI")

ProtoBody603.addChildren(ROUTE1005)
OrientationInterpolator1006 = x3d.OrientationInterpolator()
OrientationInterpolator1006.setDEF("l_ring_distal_OI")
IS1007 = x3d.IS()
connect1008 = x3d.connect()
connect1008.setNodeField("key")
connect1008.setProtoField("l_ring_distal_key")

IS1007.addConnect(connect1008)
connect1009 = x3d.connect()
connect1009.setNodeField("keyValue")
connect1009.setProtoField("l_ring_distal_keyValue")

IS1007.addConnect(connect1009)
connect1010 = x3d.connect()
connect1010.setNodeField("value_changed")
connect1010.setProtoField("l_ring_distal_changed")

IS1007.addConnect(connect1010)

OrientationInterpolator1006.setIS(IS1007)

ProtoBody603.addChildren(OrientationInterpolator1006)
ROUTE1011 = x3d.ROUTE()
ROUTE1011.setFromField("fraction_changed")
ROUTE1011.setFromNode("BehaviorClock")
ROUTE1011.setToField("set_fraction")
ROUTE1011.setToNode("l_ring_distal_OI")

ProtoBody603.addChildren(ROUTE1011)
OrientationInterpolator1012 = x3d.OrientationInterpolator()
OrientationInterpolator1012.setDEF("l_ring_metacarpal_OI")
IS1013 = x3d.IS()
connect1014 = x3d.connect()
connect1014.setNodeField("key")
connect1014.setProtoField("l_ring_metacarpal_key")

IS1013.addConnect(connect1014)
connect1015 = x3d.connect()
connect1015.setNodeField("keyValue")
connect1015.setProtoField("l_ring_metacarpal_keyValue")

IS1013.addConnect(connect1015)
connect1016 = x3d.connect()
connect1016.setNodeField("value_changed")
connect1016.setProtoField("l_ring_metacarpal_changed")

IS1013.addConnect(connect1016)

OrientationInterpolator1012.setIS(IS1013)

ProtoBody603.addChildren(OrientationInterpolator1012)
ROUTE1017 = x3d.ROUTE()
ROUTE1017.setFromField("fraction_changed")
ROUTE1017.setFromNode("BehaviorClock")
ROUTE1017.setToField("set_fraction")
ROUTE1017.setToNode("l_ring_metacarpal_OI")

ProtoBody603.addChildren(ROUTE1017)
OrientationInterpolator1018 = x3d.OrientationInterpolator()
OrientationInterpolator1018.setDEF("l_ring_middle_OI")
IS1019 = x3d.IS()
connect1020 = x3d.connect()
connect1020.setNodeField("key")
connect1020.setProtoField("l_ring_middle_key")

IS1019.addConnect(connect1020)
connect1021 = x3d.connect()
connect1021.setNodeField("keyValue")
connect1021.setProtoField("l_ring_middle_keyValue")

IS1019.addConnect(connect1021)
connect1022 = x3d.connect()
connect1022.setNodeField("value_changed")
connect1022.setProtoField("l_ring_middle_changed")

IS1019.addConnect(connect1022)

OrientationInterpolator1018.setIS(IS1019)

ProtoBody603.addChildren(OrientationInterpolator1018)
ROUTE1023 = x3d.ROUTE()
ROUTE1023.setFromField("fraction_changed")
ROUTE1023.setFromNode("BehaviorClock")
ROUTE1023.setToField("set_fraction")
ROUTE1023.setToNode("l_ring_middle_OI")

ProtoBody603.addChildren(ROUTE1023)
OrientationInterpolator1024 = x3d.OrientationInterpolator()
OrientationInterpolator1024.setDEF("l_ring_proximal_OI")
IS1025 = x3d.IS()
connect1026 = x3d.connect()
connect1026.setNodeField("key")
connect1026.setProtoField("l_ring_proximal_key")

IS1025.addConnect(connect1026)
connect1027 = x3d.connect()
connect1027.setNodeField("keyValue")
connect1027.setProtoField("l_ring_proximal_keyValue")

IS1025.addConnect(connect1027)
connect1028 = x3d.connect()
connect1028.setNodeField("value_changed")
connect1028.setProtoField("l_ring_proximal_changed")

IS1025.addConnect(connect1028)

OrientationInterpolator1024.setIS(IS1025)

ProtoBody603.addChildren(OrientationInterpolator1024)
ROUTE1029 = x3d.ROUTE()
ROUTE1029.setFromField("fraction_changed")
ROUTE1029.setFromNode("BehaviorClock")
ROUTE1029.setToField("set_fraction")
ROUTE1029.setToNode("l_ring_proximal_OI")

ProtoBody603.addChildren(ROUTE1029)
OrientationInterpolator1030 = x3d.OrientationInterpolator()
OrientationInterpolator1030.setDEF("l_scapula_OI")
IS1031 = x3d.IS()
connect1032 = x3d.connect()
connect1032.setNodeField("key")
connect1032.setProtoField("l_scapula_key")

IS1031.addConnect(connect1032)
connect1033 = x3d.connect()
connect1033.setNodeField("keyValue")
connect1033.setProtoField("l_scapula_keyValue")

IS1031.addConnect(connect1033)
connect1034 = x3d.connect()
connect1034.setNodeField("value_changed")
connect1034.setProtoField("l_scapula_changed")

IS1031.addConnect(connect1034)

OrientationInterpolator1030.setIS(IS1031)

ProtoBody603.addChildren(OrientationInterpolator1030)
ROUTE1035 = x3d.ROUTE()
ROUTE1035.setFromField("fraction_changed")
ROUTE1035.setFromNode("BehaviorClock")
ROUTE1035.setToField("set_fraction")
ROUTE1035.setToNode("l_scapula_OI")

ProtoBody603.addChildren(ROUTE1035)
OrientationInterpolator1036 = x3d.OrientationInterpolator()
OrientationInterpolator1036.setDEF("l_shoulder_OI")
IS1037 = x3d.IS()
connect1038 = x3d.connect()
connect1038.setNodeField("key")
connect1038.setProtoField("l_shoulder_key")

IS1037.addConnect(connect1038)
connect1039 = x3d.connect()
connect1039.setNodeField("keyValue")
connect1039.setProtoField("l_shoulder_keyValue")

IS1037.addConnect(connect1039)
connect1040 = x3d.connect()
connect1040.setNodeField("value_changed")
connect1040.setProtoField("l_shoulder_changed")

IS1037.addConnect(connect1040)

OrientationInterpolator1036.setIS(IS1037)

ProtoBody603.addChildren(OrientationInterpolator1036)
ROUTE1041 = x3d.ROUTE()
ROUTE1041.setFromField("fraction_changed")
ROUTE1041.setFromNode("BehaviorClock")
ROUTE1041.setToField("set_fraction")
ROUTE1041.setToNode("l_shoulder_OI")

ProtoBody603.addChildren(ROUTE1041)
OrientationInterpolator1042 = x3d.OrientationInterpolator()
OrientationInterpolator1042.setDEF("l_sternoclavicular_OI")
IS1043 = x3d.IS()
connect1044 = x3d.connect()
connect1044.setNodeField("key")
connect1044.setProtoField("l_sternoclavicular_key")

IS1043.addConnect(connect1044)
connect1045 = x3d.connect()
connect1045.setNodeField("keyValue")
connect1045.setProtoField("l_sternoclavicular_keyValue")

IS1043.addConnect(connect1045)
connect1046 = x3d.connect()
connect1046.setNodeField("value_changed")
connect1046.setProtoField("l_sternoclavicular_changed")

IS1043.addConnect(connect1046)

OrientationInterpolator1042.setIS(IS1043)

ProtoBody603.addChildren(OrientationInterpolator1042)
ROUTE1047 = x3d.ROUTE()
ROUTE1047.setFromField("fraction_changed")
ROUTE1047.setFromNode("BehaviorClock")
ROUTE1047.setToField("set_fraction")
ROUTE1047.setToNode("l_sternoclavicular_OI")

ProtoBody603.addChildren(ROUTE1047)
OrientationInterpolator1048 = x3d.OrientationInterpolator()
OrientationInterpolator1048.setDEF("l_subtalar_OI")
IS1049 = x3d.IS()
connect1050 = x3d.connect()
connect1050.setNodeField("key")
connect1050.setProtoField("l_subtalar_key")

IS1049.addConnect(connect1050)
connect1051 = x3d.connect()
connect1051.setNodeField("keyValue")
connect1051.setProtoField("l_subtalar_keyValue")

IS1049.addConnect(connect1051)
connect1052 = x3d.connect()
connect1052.setNodeField("value_changed")
connect1052.setProtoField("l_subtalar_changed")

IS1049.addConnect(connect1052)

OrientationInterpolator1048.setIS(IS1049)

ProtoBody603.addChildren(OrientationInterpolator1048)
ROUTE1053 = x3d.ROUTE()
ROUTE1053.setFromField("fraction_changed")
ROUTE1053.setFromNode("BehaviorClock")
ROUTE1053.setToField("set_fraction")
ROUTE1053.setToNode("l_subtalar_OI")

ProtoBody603.addChildren(ROUTE1053)
OrientationInterpolator1054 = x3d.OrientationInterpolator()
OrientationInterpolator1054.setDEF("l_thigh_OI")
IS1055 = x3d.IS()
connect1056 = x3d.connect()
connect1056.setNodeField("key")
connect1056.setProtoField("l_thigh_key")

IS1055.addConnect(connect1056)
connect1057 = x3d.connect()
connect1057.setNodeField("keyValue")
connect1057.setProtoField("l_thigh_keyValue")

IS1055.addConnect(connect1057)
connect1058 = x3d.connect()
connect1058.setNodeField("value_changed")
connect1058.setProtoField("l_thigh_changed")

IS1055.addConnect(connect1058)

OrientationInterpolator1054.setIS(IS1055)

ProtoBody603.addChildren(OrientationInterpolator1054)
ROUTE1059 = x3d.ROUTE()
ROUTE1059.setFromField("fraction_changed")
ROUTE1059.setFromNode("BehaviorClock")
ROUTE1059.setToField("set_fraction")
ROUTE1059.setToNode("l_thigh_OI")

ProtoBody603.addChildren(ROUTE1059)
OrientationInterpolator1060 = x3d.OrientationInterpolator()
OrientationInterpolator1060.setDEF("l_thumb1_OI")
IS1061 = x3d.IS()
connect1062 = x3d.connect()
connect1062.setNodeField("key")
connect1062.setProtoField("l_thumb1_key")

IS1061.addConnect(connect1062)
connect1063 = x3d.connect()
connect1063.setNodeField("keyValue")
connect1063.setProtoField("l_thumb1_keyValue")

IS1061.addConnect(connect1063)
connect1064 = x3d.connect()
connect1064.setNodeField("value_changed")
connect1064.setProtoField("l_thumb1_changed")

IS1061.addConnect(connect1064)

OrientationInterpolator1060.setIS(IS1061)

ProtoBody603.addChildren(OrientationInterpolator1060)
ROUTE1065 = x3d.ROUTE()
ROUTE1065.setFromField("fraction_changed")
ROUTE1065.setFromNode("BehaviorClock")
ROUTE1065.setToField("set_fraction")
ROUTE1065.setToNode("l_thumb1_OI")

ProtoBody603.addChildren(ROUTE1065)
OrientationInterpolator1066 = x3d.OrientationInterpolator()
OrientationInterpolator1066.setDEF("l_thumb2_OI")
IS1067 = x3d.IS()
connect1068 = x3d.connect()
connect1068.setNodeField("key")
connect1068.setProtoField("l_thumb2_key")

IS1067.addConnect(connect1068)
connect1069 = x3d.connect()
connect1069.setNodeField("keyValue")
connect1069.setProtoField("l_thumb2_keyValue")

IS1067.addConnect(connect1069)
connect1070 = x3d.connect()
connect1070.setNodeField("value_changed")
connect1070.setProtoField("l_thumb2_changed")

IS1067.addConnect(connect1070)

OrientationInterpolator1066.setIS(IS1067)

ProtoBody603.addChildren(OrientationInterpolator1066)
ROUTE1071 = x3d.ROUTE()
ROUTE1071.setFromField("fraction_changed")
ROUTE1071.setFromNode("BehaviorClock")
ROUTE1071.setToField("set_fraction")
ROUTE1071.setToNode("l_thumb2_OI")

ProtoBody603.addChildren(ROUTE1071)
OrientationInterpolator1072 = x3d.OrientationInterpolator()
OrientationInterpolator1072.setDEF("l_thumb3_OI")
IS1073 = x3d.IS()
connect1074 = x3d.connect()
connect1074.setNodeField("key")
connect1074.setProtoField("l_thumb3_key")

IS1073.addConnect(connect1074)
connect1075 = x3d.connect()
connect1075.setNodeField("keyValue")
connect1075.setProtoField("l_thumb3_keyValue")

IS1073.addConnect(connect1075)
connect1076 = x3d.connect()
connect1076.setNodeField("value_changed")
connect1076.setProtoField("l_thumb3_changed")

IS1073.addConnect(connect1076)

OrientationInterpolator1072.setIS(IS1073)

ProtoBody603.addChildren(OrientationInterpolator1072)
ROUTE1077 = x3d.ROUTE()
ROUTE1077.setFromField("fraction_changed")
ROUTE1077.setFromNode("BehaviorClock")
ROUTE1077.setToField("set_fraction")
ROUTE1077.setToNode("l_thumb3_OI")

ProtoBody603.addChildren(ROUTE1077)
OrientationInterpolator1078 = x3d.OrientationInterpolator()
OrientationInterpolator1078.setDEF("l_thumb_distal_OI")
IS1079 = x3d.IS()
connect1080 = x3d.connect()
connect1080.setNodeField("key")
connect1080.setProtoField("l_thumb_distal_key")

IS1079.addConnect(connect1080)
connect1081 = x3d.connect()
connect1081.setNodeField("keyValue")
connect1081.setProtoField("l_thumb_distal_keyValue")

IS1079.addConnect(connect1081)
connect1082 = x3d.connect()
connect1082.setNodeField("value_changed")
connect1082.setProtoField("l_thumb_distal_changed")

IS1079.addConnect(connect1082)

OrientationInterpolator1078.setIS(IS1079)

ProtoBody603.addChildren(OrientationInterpolator1078)
ROUTE1083 = x3d.ROUTE()
ROUTE1083.setFromField("fraction_changed")
ROUTE1083.setFromNode("BehaviorClock")
ROUTE1083.setToField("set_fraction")
ROUTE1083.setToNode("l_thumb_distal_OI")

ProtoBody603.addChildren(ROUTE1083)
OrientationInterpolator1084 = x3d.OrientationInterpolator()
OrientationInterpolator1084.setDEF("l_thumb_metacarpal_OI")
IS1085 = x3d.IS()
connect1086 = x3d.connect()
connect1086.setNodeField("key")
connect1086.setProtoField("l_thumb_metacarpal_key")

IS1085.addConnect(connect1086)
connect1087 = x3d.connect()
connect1087.setNodeField("keyValue")
connect1087.setProtoField("l_thumb_metacarpal_keyValue")

IS1085.addConnect(connect1087)
connect1088 = x3d.connect()
connect1088.setNodeField("value_changed")
connect1088.setProtoField("l_thumb_metacarpal_changed")

IS1085.addConnect(connect1088)

OrientationInterpolator1084.setIS(IS1085)

ProtoBody603.addChildren(OrientationInterpolator1084)
ROUTE1089 = x3d.ROUTE()
ROUTE1089.setFromField("fraction_changed")
ROUTE1089.setFromNode("BehaviorClock")
ROUTE1089.setToField("set_fraction")
ROUTE1089.setToNode("l_thumb_metacarpal_OI")

ProtoBody603.addChildren(ROUTE1089)
OrientationInterpolator1090 = x3d.OrientationInterpolator()
OrientationInterpolator1090.setDEF("l_thumb_proximal_OI")
IS1091 = x3d.IS()
connect1092 = x3d.connect()
connect1092.setNodeField("key")
connect1092.setProtoField("l_thumb_proximal_key")

IS1091.addConnect(connect1092)
connect1093 = x3d.connect()
connect1093.setNodeField("keyValue")
connect1093.setProtoField("l_thumb_proximal_keyValue")

IS1091.addConnect(connect1093)
connect1094 = x3d.connect()
connect1094.setNodeField("value_changed")
connect1094.setProtoField("l_thumb_proximal_changed")

IS1091.addConnect(connect1094)

OrientationInterpolator1090.setIS(IS1091)

ProtoBody603.addChildren(OrientationInterpolator1090)
ROUTE1095 = x3d.ROUTE()
ROUTE1095.setFromField("fraction_changed")
ROUTE1095.setFromNode("BehaviorClock")
ROUTE1095.setToField("set_fraction")
ROUTE1095.setToNode("l_thumb_proximal_OI")

ProtoBody603.addChildren(ROUTE1095)
OrientationInterpolator1096 = x3d.OrientationInterpolator()
OrientationInterpolator1096.setDEF("l_upperarm_OI")
IS1097 = x3d.IS()
connect1098 = x3d.connect()
connect1098.setNodeField("key")
connect1098.setProtoField("l_upperarm_key")

IS1097.addConnect(connect1098)
connect1099 = x3d.connect()
connect1099.setNodeField("keyValue")
connect1099.setProtoField("l_upperarm_keyValue")

IS1097.addConnect(connect1099)
connect1100 = x3d.connect()
connect1100.setNodeField("value_changed")
connect1100.setProtoField("l_upperarm_changed")

IS1097.addConnect(connect1100)

OrientationInterpolator1096.setIS(IS1097)

ProtoBody603.addChildren(OrientationInterpolator1096)
ROUTE1101 = x3d.ROUTE()
ROUTE1101.setFromField("fraction_changed")
ROUTE1101.setFromNode("BehaviorClock")
ROUTE1101.setToField("set_fraction")
ROUTE1101.setToNode("l_upperarm_OI")

ProtoBody603.addChildren(ROUTE1101)
OrientationInterpolator1102 = x3d.OrientationInterpolator()
OrientationInterpolator1102.setDEF("l_wrist_OI")
IS1103 = x3d.IS()
connect1104 = x3d.connect()
connect1104.setNodeField("key")
connect1104.setProtoField("l_wrist_key")

IS1103.addConnect(connect1104)
connect1105 = x3d.connect()
connect1105.setNodeField("keyValue")
connect1105.setProtoField("l_wrist_keyValue")

IS1103.addConnect(connect1105)
connect1106 = x3d.connect()
connect1106.setNodeField("value_changed")
connect1106.setProtoField("l_wrist_changed")

IS1103.addConnect(connect1106)

OrientationInterpolator1102.setIS(IS1103)

ProtoBody603.addChildren(OrientationInterpolator1102)
ROUTE1107 = x3d.ROUTE()
ROUTE1107.setFromField("fraction_changed")
ROUTE1107.setFromNode("BehaviorClock")
ROUTE1107.setToField("set_fraction")
ROUTE1107.setToNode("l_wrist_OI")

ProtoBody603.addChildren(ROUTE1107)
OrientationInterpolator1108 = x3d.OrientationInterpolator()
OrientationInterpolator1108.setDEF("pelvis_OI")
IS1109 = x3d.IS()
connect1110 = x3d.connect()
connect1110.setNodeField("key")
connect1110.setProtoField("pelvis_key")

IS1109.addConnect(connect1110)
connect1111 = x3d.connect()
connect1111.setNodeField("keyValue")
connect1111.setProtoField("pelvis_keyValue")

IS1109.addConnect(connect1111)
connect1112 = x3d.connect()
connect1112.setNodeField("value_changed")
connect1112.setProtoField("pelvis_changed")

IS1109.addConnect(connect1112)

OrientationInterpolator1108.setIS(IS1109)

ProtoBody603.addChildren(OrientationInterpolator1108)
ROUTE1113 = x3d.ROUTE()
ROUTE1113.setFromField("fraction_changed")
ROUTE1113.setFromNode("BehaviorClock")
ROUTE1113.setToField("set_fraction")
ROUTE1113.setToNode("pelvis_OI")

ProtoBody603.addChildren(ROUTE1113)
OrientationInterpolator1114 = x3d.OrientationInterpolator()
OrientationInterpolator1114.setDEF("r_acromioclavicular_OI")
IS1115 = x3d.IS()
connect1116 = x3d.connect()
connect1116.setNodeField("key")
connect1116.setProtoField("r_acromioclavicular_key")

IS1115.addConnect(connect1116)
connect1117 = x3d.connect()
connect1117.setNodeField("keyValue")
connect1117.setProtoField("r_acromioclavicular_keyValue")

IS1115.addConnect(connect1117)
connect1118 = x3d.connect()
connect1118.setNodeField("value_changed")
connect1118.setProtoField("r_acromioclavicular_changed")

IS1115.addConnect(connect1118)

OrientationInterpolator1114.setIS(IS1115)

ProtoBody603.addChildren(OrientationInterpolator1114)
ROUTE1119 = x3d.ROUTE()
ROUTE1119.setFromField("fraction_changed")
ROUTE1119.setFromNode("BehaviorClock")
ROUTE1119.setToField("set_fraction")
ROUTE1119.setToNode("r_acromioclavicular_OI")

ProtoBody603.addChildren(ROUTE1119)
OrientationInterpolator1120 = x3d.OrientationInterpolator()
OrientationInterpolator1120.setDEF("r_ankle_OI")
IS1121 = x3d.IS()
connect1122 = x3d.connect()
connect1122.setNodeField("key")
connect1122.setProtoField("r_ankle_key")

IS1121.addConnect(connect1122)
connect1123 = x3d.connect()
connect1123.setNodeField("keyValue")
connect1123.setProtoField("r_ankle_keyValue")

IS1121.addConnect(connect1123)
connect1124 = x3d.connect()
connect1124.setNodeField("value_changed")
connect1124.setProtoField("r_ankle_changed")

IS1121.addConnect(connect1124)

OrientationInterpolator1120.setIS(IS1121)

ProtoBody603.addChildren(OrientationInterpolator1120)
ROUTE1125 = x3d.ROUTE()
ROUTE1125.setFromField("fraction_changed")
ROUTE1125.setFromNode("BehaviorClock")
ROUTE1125.setToField("set_fraction")
ROUTE1125.setToNode("r_ankle_OI")

ProtoBody603.addChildren(ROUTE1125)
OrientationInterpolator1126 = x3d.OrientationInterpolator()
OrientationInterpolator1126.setDEF("r_calf_OI")
IS1127 = x3d.IS()
connect1128 = x3d.connect()
connect1128.setNodeField("key")
connect1128.setProtoField("r_calf_key")

IS1127.addConnect(connect1128)
connect1129 = x3d.connect()
connect1129.setNodeField("keyValue")
connect1129.setProtoField("r_calf_keyValue")

IS1127.addConnect(connect1129)
connect1130 = x3d.connect()
connect1130.setNodeField("value_changed")
connect1130.setProtoField("r_calf_changed")

IS1127.addConnect(connect1130)

OrientationInterpolator1126.setIS(IS1127)

ProtoBody603.addChildren(OrientationInterpolator1126)
ROUTE1131 = x3d.ROUTE()
ROUTE1131.setFromField("fraction_changed")
ROUTE1131.setFromNode("BehaviorClock")
ROUTE1131.setToField("set_fraction")
ROUTE1131.setToNode("r_calf_OI")

ProtoBody603.addChildren(ROUTE1131)
OrientationInterpolator1132 = x3d.OrientationInterpolator()
OrientationInterpolator1132.setDEF("r_clavicle_OI")
IS1133 = x3d.IS()
connect1134 = x3d.connect()
connect1134.setNodeField("key")
connect1134.setProtoField("r_clavicle_key")

IS1133.addConnect(connect1134)
connect1135 = x3d.connect()
connect1135.setNodeField("keyValue")
connect1135.setProtoField("r_clavicle_keyValue")

IS1133.addConnect(connect1135)
connect1136 = x3d.connect()
connect1136.setNodeField("value_changed")
connect1136.setProtoField("r_clavicle_changed")

IS1133.addConnect(connect1136)

OrientationInterpolator1132.setIS(IS1133)

ProtoBody603.addChildren(OrientationInterpolator1132)
ROUTE1137 = x3d.ROUTE()
ROUTE1137.setFromField("fraction_changed")
ROUTE1137.setFromNode("BehaviorClock")
ROUTE1137.setToField("set_fraction")
ROUTE1137.setToNode("r_clavicle_OI")

ProtoBody603.addChildren(ROUTE1137)
OrientationInterpolator1138 = x3d.OrientationInterpolator()
OrientationInterpolator1138.setDEF("r_elbow_OI")
IS1139 = x3d.IS()
connect1140 = x3d.connect()
connect1140.setNodeField("key")
connect1140.setProtoField("r_elbow_key")

IS1139.addConnect(connect1140)
connect1141 = x3d.connect()
connect1141.setNodeField("keyValue")
connect1141.setProtoField("r_elbow_keyValue")

IS1139.addConnect(connect1141)
connect1142 = x3d.connect()
connect1142.setNodeField("value_changed")
connect1142.setProtoField("r_elbow_changed")

IS1139.addConnect(connect1142)

OrientationInterpolator1138.setIS(IS1139)

ProtoBody603.addChildren(OrientationInterpolator1138)
ROUTE1143 = x3d.ROUTE()
ROUTE1143.setFromField("fraction_changed")
ROUTE1143.setFromNode("BehaviorClock")
ROUTE1143.setToField("set_fraction")
ROUTE1143.setToNode("r_elbow_OI")

ProtoBody603.addChildren(ROUTE1143)
OrientationInterpolator1144 = x3d.OrientationInterpolator()
OrientationInterpolator1144.setDEF("r_eyeball_OI")
IS1145 = x3d.IS()
connect1146 = x3d.connect()
connect1146.setNodeField("key")
connect1146.setProtoField("r_eyeball_key")

IS1145.addConnect(connect1146)
connect1147 = x3d.connect()
connect1147.setNodeField("keyValue")
connect1147.setProtoField("r_eyeball_keyValue")

IS1145.addConnect(connect1147)
connect1148 = x3d.connect()
connect1148.setNodeField("value_changed")
connect1148.setProtoField("r_eyeball_changed")

IS1145.addConnect(connect1148)

OrientationInterpolator1144.setIS(IS1145)

ProtoBody603.addChildren(OrientationInterpolator1144)
ROUTE1149 = x3d.ROUTE()
ROUTE1149.setFromField("fraction_changed")
ROUTE1149.setFromNode("BehaviorClock")
ROUTE1149.setToField("set_fraction")
ROUTE1149.setToNode("r_eyeball_OI")

ProtoBody603.addChildren(ROUTE1149)
OrientationInterpolator1150 = x3d.OrientationInterpolator()
OrientationInterpolator1150.setDEF("r_eyeball_joint_OI")
IS1151 = x3d.IS()
connect1152 = x3d.connect()
connect1152.setNodeField("key")
connect1152.setProtoField("r_eyeball_joint_key")

IS1151.addConnect(connect1152)
connect1153 = x3d.connect()
connect1153.setNodeField("keyValue")
connect1153.setProtoField("r_eyeball_joint_keyValue")

IS1151.addConnect(connect1153)
connect1154 = x3d.connect()
connect1154.setNodeField("value_changed")
connect1154.setProtoField("r_eyeball_joint_changed")

IS1151.addConnect(connect1154)

OrientationInterpolator1150.setIS(IS1151)

ProtoBody603.addChildren(OrientationInterpolator1150)
ROUTE1155 = x3d.ROUTE()
ROUTE1155.setFromField("fraction_changed")
ROUTE1155.setFromNode("BehaviorClock")
ROUTE1155.setToField("set_fraction")
ROUTE1155.setToNode("r_eyeball_joint_OI")

ProtoBody603.addChildren(ROUTE1155)
OrientationInterpolator1156 = x3d.OrientationInterpolator()
OrientationInterpolator1156.setDEF("r_eyebrow_OI")
IS1157 = x3d.IS()
connect1158 = x3d.connect()
connect1158.setNodeField("key")
connect1158.setProtoField("r_eyebrow_key")

IS1157.addConnect(connect1158)
connect1159 = x3d.connect()
connect1159.setNodeField("keyValue")
connect1159.setProtoField("r_eyebrow_keyValue")

IS1157.addConnect(connect1159)
connect1160 = x3d.connect()
connect1160.setNodeField("value_changed")
connect1160.setProtoField("r_eyebrow_changed")

IS1157.addConnect(connect1160)

OrientationInterpolator1156.setIS(IS1157)

ProtoBody603.addChildren(OrientationInterpolator1156)
ROUTE1161 = x3d.ROUTE()
ROUTE1161.setFromField("fraction_changed")
ROUTE1161.setFromNode("BehaviorClock")
ROUTE1161.setToField("set_fraction")
ROUTE1161.setToNode("r_eyebrow_OI")

ProtoBody603.addChildren(ROUTE1161)
OrientationInterpolator1162 = x3d.OrientationInterpolator()
OrientationInterpolator1162.setDEF("r_eyebrow_joint_OI")
IS1163 = x3d.IS()
connect1164 = x3d.connect()
connect1164.setNodeField("key")
connect1164.setProtoField("r_eyebrow_joint_key")

IS1163.addConnect(connect1164)
connect1165 = x3d.connect()
connect1165.setNodeField("keyValue")
connect1165.setProtoField("r_eyebrow_joint_keyValue")

IS1163.addConnect(connect1165)
connect1166 = x3d.connect()
connect1166.setNodeField("value_changed")
connect1166.setProtoField("r_eyebrow_joint_changed")

IS1163.addConnect(connect1166)

OrientationInterpolator1162.setIS(IS1163)

ProtoBody603.addChildren(OrientationInterpolator1162)
ROUTE1167 = x3d.ROUTE()
ROUTE1167.setFromField("fraction_changed")
ROUTE1167.setFromNode("BehaviorClock")
ROUTE1167.setToField("set_fraction")
ROUTE1167.setToNode("r_eyebrow_joint_OI")

ProtoBody603.addChildren(ROUTE1167)
OrientationInterpolator1168 = x3d.OrientationInterpolator()
OrientationInterpolator1168.setDEF("r_eyelid_OI")
IS1169 = x3d.IS()
connect1170 = x3d.connect()
connect1170.setNodeField("key")
connect1170.setProtoField("r_eyelid_key")

IS1169.addConnect(connect1170)
connect1171 = x3d.connect()
connect1171.setNodeField("keyValue")
connect1171.setProtoField("r_eyelid_keyValue")

IS1169.addConnect(connect1171)
connect1172 = x3d.connect()
connect1172.setNodeField("value_changed")
connect1172.setProtoField("r_eyelid_changed")

IS1169.addConnect(connect1172)

OrientationInterpolator1168.setIS(IS1169)

ProtoBody603.addChildren(OrientationInterpolator1168)
ROUTE1173 = x3d.ROUTE()
ROUTE1173.setFromField("fraction_changed")
ROUTE1173.setFromNode("BehaviorClock")
ROUTE1173.setToField("set_fraction")
ROUTE1173.setToNode("r_eyelid_OI")

ProtoBody603.addChildren(ROUTE1173)
OrientationInterpolator1174 = x3d.OrientationInterpolator()
OrientationInterpolator1174.setDEF("r_eyelid_joint_OI")
IS1175 = x3d.IS()
connect1176 = x3d.connect()
connect1176.setNodeField("key")
connect1176.setProtoField("r_eyelid_joint_key")

IS1175.addConnect(connect1176)
connect1177 = x3d.connect()
connect1177.setNodeField("keyValue")
connect1177.setProtoField("r_eyelid_joint_keyValue")

IS1175.addConnect(connect1177)
connect1178 = x3d.connect()
connect1178.setNodeField("value_changed")
connect1178.setProtoField("r_eyelid_joint_changed")

IS1175.addConnect(connect1178)

OrientationInterpolator1174.setIS(IS1175)

ProtoBody603.addChildren(OrientationInterpolator1174)
ROUTE1179 = x3d.ROUTE()
ROUTE1179.setFromField("fraction_changed")
ROUTE1179.setFromNode("BehaviorClock")
ROUTE1179.setToField("set_fraction")
ROUTE1179.setToNode("r_eyelid_joint_OI")

ProtoBody603.addChildren(ROUTE1179)
OrientationInterpolator1180 = x3d.OrientationInterpolator()
OrientationInterpolator1180.setDEF("r_forearm_OI")
IS1181 = x3d.IS()
connect1182 = x3d.connect()
connect1182.setNodeField("key")
connect1182.setProtoField("r_forearm_key")

IS1181.addConnect(connect1182)
connect1183 = x3d.connect()
connect1183.setNodeField("keyValue")
connect1183.setProtoField("r_forearm_keyValue")

IS1181.addConnect(connect1183)
connect1184 = x3d.connect()
connect1184.setNodeField("value_changed")
connect1184.setProtoField("r_forearm_changed")

IS1181.addConnect(connect1184)

OrientationInterpolator1180.setIS(IS1181)

ProtoBody603.addChildren(OrientationInterpolator1180)
ROUTE1185 = x3d.ROUTE()
ROUTE1185.setFromField("fraction_changed")
ROUTE1185.setFromNode("BehaviorClock")
ROUTE1185.setToField("set_fraction")
ROUTE1185.setToNode("r_forearm_OI")

ProtoBody603.addChildren(ROUTE1185)
OrientationInterpolator1186 = x3d.OrientationInterpolator()
OrientationInterpolator1186.setDEF("r_forefoot_OI")
IS1187 = x3d.IS()
connect1188 = x3d.connect()
connect1188.setNodeField("key")
connect1188.setProtoField("r_forefoot_key")

IS1187.addConnect(connect1188)
connect1189 = x3d.connect()
connect1189.setNodeField("keyValue")
connect1189.setProtoField("r_forefoot_keyValue")

IS1187.addConnect(connect1189)
connect1190 = x3d.connect()
connect1190.setNodeField("value_changed")
connect1190.setProtoField("r_forefoot_changed")

IS1187.addConnect(connect1190)

OrientationInterpolator1186.setIS(IS1187)

ProtoBody603.addChildren(OrientationInterpolator1186)
ROUTE1191 = x3d.ROUTE()
ROUTE1191.setFromField("fraction_changed")
ROUTE1191.setFromNode("BehaviorClock")
ROUTE1191.setToField("set_fraction")
ROUTE1191.setToNode("r_forefoot_OI")

ProtoBody603.addChildren(ROUTE1191)
OrientationInterpolator1192 = x3d.OrientationInterpolator()
OrientationInterpolator1192.setDEF("r_hand_OI")
IS1193 = x3d.IS()
connect1194 = x3d.connect()
connect1194.setNodeField("key")
connect1194.setProtoField("r_hand_key")

IS1193.addConnect(connect1194)
connect1195 = x3d.connect()
connect1195.setNodeField("keyValue")
connect1195.setProtoField("r_hand_keyValue")

IS1193.addConnect(connect1195)
connect1196 = x3d.connect()
connect1196.setNodeField("value_changed")
connect1196.setProtoField("r_hand_changed")

IS1193.addConnect(connect1196)

OrientationInterpolator1192.setIS(IS1193)

ProtoBody603.addChildren(OrientationInterpolator1192)
ROUTE1197 = x3d.ROUTE()
ROUTE1197.setFromField("fraction_changed")
ROUTE1197.setFromNode("BehaviorClock")
ROUTE1197.setToField("set_fraction")
ROUTE1197.setToNode("r_hand_OI")

ProtoBody603.addChildren(ROUTE1197)
OrientationInterpolator1198 = x3d.OrientationInterpolator()
OrientationInterpolator1198.setDEF("r_hindfoot_OI")
IS1199 = x3d.IS()
connect1200 = x3d.connect()
connect1200.setNodeField("key")
connect1200.setProtoField("r_hindfoot_key")

IS1199.addConnect(connect1200)
connect1201 = x3d.connect()
connect1201.setNodeField("keyValue")
connect1201.setProtoField("r_hindfoot_keyValue")

IS1199.addConnect(connect1201)
connect1202 = x3d.connect()
connect1202.setNodeField("value_changed")
connect1202.setProtoField("r_hindfoot_changed")

IS1199.addConnect(connect1202)

OrientationInterpolator1198.setIS(IS1199)

ProtoBody603.addChildren(OrientationInterpolator1198)
ROUTE1203 = x3d.ROUTE()
ROUTE1203.setFromField("fraction_changed")
ROUTE1203.setFromNode("BehaviorClock")
ROUTE1203.setToField("set_fraction")
ROUTE1203.setToNode("r_hindfoot_OI")

ProtoBody603.addChildren(ROUTE1203)
OrientationInterpolator1204 = x3d.OrientationInterpolator()
OrientationInterpolator1204.setDEF("r_hip_OI")
IS1205 = x3d.IS()
connect1206 = x3d.connect()
connect1206.setNodeField("key")
connect1206.setProtoField("r_hip_key")

IS1205.addConnect(connect1206)
connect1207 = x3d.connect()
connect1207.setNodeField("keyValue")
connect1207.setProtoField("r_hip_keyValue")

IS1205.addConnect(connect1207)
connect1208 = x3d.connect()
connect1208.setNodeField("value_changed")
connect1208.setProtoField("r_hip_changed")

IS1205.addConnect(connect1208)

OrientationInterpolator1204.setIS(IS1205)

ProtoBody603.addChildren(OrientationInterpolator1204)
ROUTE1209 = x3d.ROUTE()
ROUTE1209.setFromField("fraction_changed")
ROUTE1209.setFromNode("BehaviorClock")
ROUTE1209.setToField("set_fraction")
ROUTE1209.setToNode("r_hip_OI")

ProtoBody603.addChildren(ROUTE1209)
OrientationInterpolator1210 = x3d.OrientationInterpolator()
OrientationInterpolator1210.setDEF("r_index0_OI")
IS1211 = x3d.IS()
connect1212 = x3d.connect()
connect1212.setNodeField("key")
connect1212.setProtoField("r_index0_key")

IS1211.addConnect(connect1212)
connect1213 = x3d.connect()
connect1213.setNodeField("keyValue")
connect1213.setProtoField("r_index0_keyValue")

IS1211.addConnect(connect1213)
connect1214 = x3d.connect()
connect1214.setNodeField("value_changed")
connect1214.setProtoField("r_index0_changed")

IS1211.addConnect(connect1214)

OrientationInterpolator1210.setIS(IS1211)

ProtoBody603.addChildren(OrientationInterpolator1210)
ROUTE1215 = x3d.ROUTE()
ROUTE1215.setFromField("fraction_changed")
ROUTE1215.setFromNode("BehaviorClock")
ROUTE1215.setToField("set_fraction")
ROUTE1215.setToNode("r_index0_OI")

ProtoBody603.addChildren(ROUTE1215)
OrientationInterpolator1216 = x3d.OrientationInterpolator()
OrientationInterpolator1216.setDEF("r_index1_OI")
IS1217 = x3d.IS()
connect1218 = x3d.connect()
connect1218.setNodeField("key")
connect1218.setProtoField("r_index1_key")

IS1217.addConnect(connect1218)
connect1219 = x3d.connect()
connect1219.setNodeField("keyValue")
connect1219.setProtoField("r_index1_keyValue")

IS1217.addConnect(connect1219)
connect1220 = x3d.connect()
connect1220.setNodeField("value_changed")
connect1220.setProtoField("r_index1_changed")

IS1217.addConnect(connect1220)

OrientationInterpolator1216.setIS(IS1217)

ProtoBody603.addChildren(OrientationInterpolator1216)
ROUTE1221 = x3d.ROUTE()
ROUTE1221.setFromField("fraction_changed")
ROUTE1221.setFromNode("BehaviorClock")
ROUTE1221.setToField("set_fraction")
ROUTE1221.setToNode("r_index1_OI")

ProtoBody603.addChildren(ROUTE1221)
OrientationInterpolator1222 = x3d.OrientationInterpolator()
OrientationInterpolator1222.setDEF("r_index2_OI")
IS1223 = x3d.IS()
connect1224 = x3d.connect()
connect1224.setNodeField("key")
connect1224.setProtoField("r_index2_key")

IS1223.addConnect(connect1224)
connect1225 = x3d.connect()
connect1225.setNodeField("keyValue")
connect1225.setProtoField("r_index2_keyValue")

IS1223.addConnect(connect1225)
connect1226 = x3d.connect()
connect1226.setNodeField("value_changed")
connect1226.setProtoField("r_index2_changed")

IS1223.addConnect(connect1226)

OrientationInterpolator1222.setIS(IS1223)

ProtoBody603.addChildren(OrientationInterpolator1222)
ROUTE1227 = x3d.ROUTE()
ROUTE1227.setFromField("fraction_changed")
ROUTE1227.setFromNode("BehaviorClock")
ROUTE1227.setToField("set_fraction")
ROUTE1227.setToNode("r_index2_OI")

ProtoBody603.addChildren(ROUTE1227)
OrientationInterpolator1228 = x3d.OrientationInterpolator()
OrientationInterpolator1228.setDEF("r_index3_OI")
IS1229 = x3d.IS()
connect1230 = x3d.connect()
connect1230.setNodeField("key")
connect1230.setProtoField("r_index3_key")

IS1229.addConnect(connect1230)
connect1231 = x3d.connect()
connect1231.setNodeField("keyValue")
connect1231.setProtoField("r_index3_keyValue")

IS1229.addConnect(connect1231)
connect1232 = x3d.connect()
connect1232.setNodeField("value_changed")
connect1232.setProtoField("r_index3_changed")

IS1229.addConnect(connect1232)

OrientationInterpolator1228.setIS(IS1229)

ProtoBody603.addChildren(OrientationInterpolator1228)
ROUTE1233 = x3d.ROUTE()
ROUTE1233.setFromField("fraction_changed")
ROUTE1233.setFromNode("BehaviorClock")
ROUTE1233.setToField("set_fraction")
ROUTE1233.setToNode("r_index3_OI")

ProtoBody603.addChildren(ROUTE1233)
OrientationInterpolator1234 = x3d.OrientationInterpolator()
OrientationInterpolator1234.setDEF("r_index_distal_OI")
IS1235 = x3d.IS()
connect1236 = x3d.connect()
connect1236.setNodeField("key")
connect1236.setProtoField("r_index_distal_key")

IS1235.addConnect(connect1236)
connect1237 = x3d.connect()
connect1237.setNodeField("keyValue")
connect1237.setProtoField("r_index_distal_keyValue")

IS1235.addConnect(connect1237)
connect1238 = x3d.connect()
connect1238.setNodeField("value_changed")
connect1238.setProtoField("r_index_distal_changed")

IS1235.addConnect(connect1238)

OrientationInterpolator1234.setIS(IS1235)

ProtoBody603.addChildren(OrientationInterpolator1234)
ROUTE1239 = x3d.ROUTE()
ROUTE1239.setFromField("fraction_changed")
ROUTE1239.setFromNode("BehaviorClock")
ROUTE1239.setToField("set_fraction")
ROUTE1239.setToNode("r_index_distal_OI")

ProtoBody603.addChildren(ROUTE1239)
OrientationInterpolator1240 = x3d.OrientationInterpolator()
OrientationInterpolator1240.setDEF("r_index_metacarpal_OI")
IS1241 = x3d.IS()
connect1242 = x3d.connect()
connect1242.setNodeField("key")
connect1242.setProtoField("r_index_metacarpal_key")

IS1241.addConnect(connect1242)
connect1243 = x3d.connect()
connect1243.setNodeField("keyValue")
connect1243.setProtoField("r_index_metacarpal_keyValue")

IS1241.addConnect(connect1243)
connect1244 = x3d.connect()
connect1244.setNodeField("value_changed")
connect1244.setProtoField("r_index_metacarpal_changed")

IS1241.addConnect(connect1244)

OrientationInterpolator1240.setIS(IS1241)

ProtoBody603.addChildren(OrientationInterpolator1240)
ROUTE1245 = x3d.ROUTE()
ROUTE1245.setFromField("fraction_changed")
ROUTE1245.setFromNode("BehaviorClock")
ROUTE1245.setToField("set_fraction")
ROUTE1245.setToNode("r_index_metacarpal_OI")

ProtoBody603.addChildren(ROUTE1245)
OrientationInterpolator1246 = x3d.OrientationInterpolator()
OrientationInterpolator1246.setDEF("r_index_middle_OI")
IS1247 = x3d.IS()
connect1248 = x3d.connect()
connect1248.setNodeField("key")
connect1248.setProtoField("r_index_middle_key")

IS1247.addConnect(connect1248)
connect1249 = x3d.connect()
connect1249.setNodeField("keyValue")
connect1249.setProtoField("r_index_middle_keyValue")

IS1247.addConnect(connect1249)
connect1250 = x3d.connect()
connect1250.setNodeField("value_changed")
connect1250.setProtoField("r_index_middle_changed")

IS1247.addConnect(connect1250)

OrientationInterpolator1246.setIS(IS1247)

ProtoBody603.addChildren(OrientationInterpolator1246)
ROUTE1251 = x3d.ROUTE()
ROUTE1251.setFromField("fraction_changed")
ROUTE1251.setFromNode("BehaviorClock")
ROUTE1251.setToField("set_fraction")
ROUTE1251.setToNode("r_index_middle_OI")

ProtoBody603.addChildren(ROUTE1251)
OrientationInterpolator1252 = x3d.OrientationInterpolator()
OrientationInterpolator1252.setDEF("r_index_proximal_OI")
IS1253 = x3d.IS()
connect1254 = x3d.connect()
connect1254.setNodeField("key")
connect1254.setProtoField("r_index_proximal_key")

IS1253.addConnect(connect1254)
connect1255 = x3d.connect()
connect1255.setNodeField("keyValue")
connect1255.setProtoField("r_index_proximal_keyValue")

IS1253.addConnect(connect1255)
connect1256 = x3d.connect()
connect1256.setNodeField("value_changed")
connect1256.setProtoField("r_index_proximal_changed")

IS1253.addConnect(connect1256)

OrientationInterpolator1252.setIS(IS1253)

ProtoBody603.addChildren(OrientationInterpolator1252)
ROUTE1257 = x3d.ROUTE()
ROUTE1257.setFromField("fraction_changed")
ROUTE1257.setFromNode("BehaviorClock")
ROUTE1257.setToField("set_fraction")
ROUTE1257.setToNode("r_index_proximal_OI")

ProtoBody603.addChildren(ROUTE1257)
OrientationInterpolator1258 = x3d.OrientationInterpolator()
OrientationInterpolator1258.setDEF("r_knee_OI")
IS1259 = x3d.IS()
connect1260 = x3d.connect()
connect1260.setNodeField("key")
connect1260.setProtoField("r_knee_key")

IS1259.addConnect(connect1260)
connect1261 = x3d.connect()
connect1261.setNodeField("keyValue")
connect1261.setProtoField("r_knee_keyValue")

IS1259.addConnect(connect1261)
connect1262 = x3d.connect()
connect1262.setNodeField("value_changed")
connect1262.setProtoField("r_knee_changed")

IS1259.addConnect(connect1262)

OrientationInterpolator1258.setIS(IS1259)

ProtoBody603.addChildren(OrientationInterpolator1258)
ROUTE1263 = x3d.ROUTE()
ROUTE1263.setFromField("fraction_changed")
ROUTE1263.setFromNode("BehaviorClock")
ROUTE1263.setToField("set_fraction")
ROUTE1263.setToNode("r_knee_OI")

ProtoBody603.addChildren(ROUTE1263)
OrientationInterpolator1264 = x3d.OrientationInterpolator()
OrientationInterpolator1264.setDEF("r_metatarsal_OI")
IS1265 = x3d.IS()
connect1266 = x3d.connect()
connect1266.setNodeField("key")
connect1266.setProtoField("r_metatarsal_key")

IS1265.addConnect(connect1266)
connect1267 = x3d.connect()
connect1267.setNodeField("keyValue")
connect1267.setProtoField("r_metatarsal_keyValue")

IS1265.addConnect(connect1267)
connect1268 = x3d.connect()
connect1268.setNodeField("value_changed")
connect1268.setProtoField("r_metatarsal_changed")

IS1265.addConnect(connect1268)

OrientationInterpolator1264.setIS(IS1265)

ProtoBody603.addChildren(OrientationInterpolator1264)
ROUTE1269 = x3d.ROUTE()
ROUTE1269.setFromField("fraction_changed")
ROUTE1269.setFromNode("BehaviorClock")
ROUTE1269.setToField("set_fraction")
ROUTE1269.setToNode("r_metatarsal_OI")

ProtoBody603.addChildren(ROUTE1269)
OrientationInterpolator1270 = x3d.OrientationInterpolator()
OrientationInterpolator1270.setDEF("r_middistal_OI")
IS1271 = x3d.IS()
connect1272 = x3d.connect()
connect1272.setNodeField("key")
connect1272.setProtoField("r_middistal_key")

IS1271.addConnect(connect1272)
connect1273 = x3d.connect()
connect1273.setNodeField("keyValue")
connect1273.setProtoField("r_middistal_keyValue")

IS1271.addConnect(connect1273)
connect1274 = x3d.connect()
connect1274.setNodeField("value_changed")
connect1274.setProtoField("r_middistal_changed")

IS1271.addConnect(connect1274)

OrientationInterpolator1270.setIS(IS1271)

ProtoBody603.addChildren(OrientationInterpolator1270)
ROUTE1275 = x3d.ROUTE()
ROUTE1275.setFromField("fraction_changed")
ROUTE1275.setFromNode("BehaviorClock")
ROUTE1275.setToField("set_fraction")
ROUTE1275.setToNode("r_middistal_OI")

ProtoBody603.addChildren(ROUTE1275)
OrientationInterpolator1276 = x3d.OrientationInterpolator()
OrientationInterpolator1276.setDEF("r_middle0_OI")
IS1277 = x3d.IS()
connect1278 = x3d.connect()
connect1278.setNodeField("key")
connect1278.setProtoField("r_middle0_key")

IS1277.addConnect(connect1278)
connect1279 = x3d.connect()
connect1279.setNodeField("keyValue")
connect1279.setProtoField("r_middle0_keyValue")

IS1277.addConnect(connect1279)
connect1280 = x3d.connect()
connect1280.setNodeField("value_changed")
connect1280.setProtoField("r_middle0_changed")

IS1277.addConnect(connect1280)

OrientationInterpolator1276.setIS(IS1277)

ProtoBody603.addChildren(OrientationInterpolator1276)
ROUTE1281 = x3d.ROUTE()
ROUTE1281.setFromField("fraction_changed")
ROUTE1281.setFromNode("BehaviorClock")
ROUTE1281.setToField("set_fraction")
ROUTE1281.setToNode("r_middle0_OI")

ProtoBody603.addChildren(ROUTE1281)
OrientationInterpolator1282 = x3d.OrientationInterpolator()
OrientationInterpolator1282.setDEF("r_middle1_OI")
IS1283 = x3d.IS()
connect1284 = x3d.connect()
connect1284.setNodeField("key")
connect1284.setProtoField("r_middle1_key")

IS1283.addConnect(connect1284)
connect1285 = x3d.connect()
connect1285.setNodeField("keyValue")
connect1285.setProtoField("r_middle1_keyValue")

IS1283.addConnect(connect1285)
connect1286 = x3d.connect()
connect1286.setNodeField("value_changed")
connect1286.setProtoField("r_middle1_changed")

IS1283.addConnect(connect1286)

OrientationInterpolator1282.setIS(IS1283)

ProtoBody603.addChildren(OrientationInterpolator1282)
ROUTE1287 = x3d.ROUTE()
ROUTE1287.setFromField("fraction_changed")
ROUTE1287.setFromNode("BehaviorClock")
ROUTE1287.setToField("set_fraction")
ROUTE1287.setToNode("r_middle1_OI")

ProtoBody603.addChildren(ROUTE1287)
OrientationInterpolator1288 = x3d.OrientationInterpolator()
OrientationInterpolator1288.setDEF("r_middle2_OI")
IS1289 = x3d.IS()
connect1290 = x3d.connect()
connect1290.setNodeField("key")
connect1290.setProtoField("r_middle2_key")

IS1289.addConnect(connect1290)
connect1291 = x3d.connect()
connect1291.setNodeField("keyValue")
connect1291.setProtoField("r_middle2_keyValue")

IS1289.addConnect(connect1291)
connect1292 = x3d.connect()
connect1292.setNodeField("value_changed")
connect1292.setProtoField("r_middle2_changed")

IS1289.addConnect(connect1292)

OrientationInterpolator1288.setIS(IS1289)

ProtoBody603.addChildren(OrientationInterpolator1288)
ROUTE1293 = x3d.ROUTE()
ROUTE1293.setFromField("fraction_changed")
ROUTE1293.setFromNode("BehaviorClock")
ROUTE1293.setToField("set_fraction")
ROUTE1293.setToNode("r_middle2_OI")

ProtoBody603.addChildren(ROUTE1293)
OrientationInterpolator1294 = x3d.OrientationInterpolator()
OrientationInterpolator1294.setDEF("r_middle3_OI")
IS1295 = x3d.IS()
connect1296 = x3d.connect()
connect1296.setNodeField("key")
connect1296.setProtoField("r_middle3_key")

IS1295.addConnect(connect1296)
connect1297 = x3d.connect()
connect1297.setNodeField("keyValue")
connect1297.setProtoField("r_middle3_keyValue")

IS1295.addConnect(connect1297)
connect1298 = x3d.connect()
connect1298.setNodeField("value_changed")
connect1298.setProtoField("r_middle3_changed")

IS1295.addConnect(connect1298)

OrientationInterpolator1294.setIS(IS1295)

ProtoBody603.addChildren(OrientationInterpolator1294)
ROUTE1299 = x3d.ROUTE()
ROUTE1299.setFromField("fraction_changed")
ROUTE1299.setFromNode("BehaviorClock")
ROUTE1299.setToField("set_fraction")
ROUTE1299.setToNode("r_middle3_OI")

ProtoBody603.addChildren(ROUTE1299)
OrientationInterpolator1300 = x3d.OrientationInterpolator()
OrientationInterpolator1300.setDEF("r_middle_distal_OI")
IS1301 = x3d.IS()
connect1302 = x3d.connect()
connect1302.setNodeField("key")
connect1302.setProtoField("r_middle_distal_key")

IS1301.addConnect(connect1302)
connect1303 = x3d.connect()
connect1303.setNodeField("keyValue")
connect1303.setProtoField("r_middle_distal_keyValue")

IS1301.addConnect(connect1303)
connect1304 = x3d.connect()
connect1304.setNodeField("value_changed")
connect1304.setProtoField("r_middle_distal_changed")

IS1301.addConnect(connect1304)

OrientationInterpolator1300.setIS(IS1301)

ProtoBody603.addChildren(OrientationInterpolator1300)
ROUTE1305 = x3d.ROUTE()
ROUTE1305.setFromField("fraction_changed")
ROUTE1305.setFromNode("BehaviorClock")
ROUTE1305.setToField("set_fraction")
ROUTE1305.setToNode("r_middle_distal_OI")

ProtoBody603.addChildren(ROUTE1305)
OrientationInterpolator1306 = x3d.OrientationInterpolator()
OrientationInterpolator1306.setDEF("r_middle_metacarpal_OI")
IS1307 = x3d.IS()
connect1308 = x3d.connect()
connect1308.setNodeField("key")
connect1308.setProtoField("r_middle_metacarpal_key")

IS1307.addConnect(connect1308)
connect1309 = x3d.connect()
connect1309.setNodeField("keyValue")
connect1309.setProtoField("r_middle_metacarpal_keyValue")

IS1307.addConnect(connect1309)
connect1310 = x3d.connect()
connect1310.setNodeField("value_changed")
connect1310.setProtoField("r_middle_metacarpal_changed")

IS1307.addConnect(connect1310)

OrientationInterpolator1306.setIS(IS1307)

ProtoBody603.addChildren(OrientationInterpolator1306)
ROUTE1311 = x3d.ROUTE()
ROUTE1311.setFromField("fraction_changed")
ROUTE1311.setFromNode("BehaviorClock")
ROUTE1311.setToField("set_fraction")
ROUTE1311.setToNode("r_middle_metacarpal_OI")

ProtoBody603.addChildren(ROUTE1311)
OrientationInterpolator1312 = x3d.OrientationInterpolator()
OrientationInterpolator1312.setDEF("r_middle_middle_OI")
IS1313 = x3d.IS()
connect1314 = x3d.connect()
connect1314.setNodeField("key")
connect1314.setProtoField("r_middle_middle_key")

IS1313.addConnect(connect1314)
connect1315 = x3d.connect()
connect1315.setNodeField("keyValue")
connect1315.setProtoField("r_middle_middle_keyValue")

IS1313.addConnect(connect1315)
connect1316 = x3d.connect()
connect1316.setNodeField("value_changed")
connect1316.setProtoField("r_middle_middle_changed")

IS1313.addConnect(connect1316)

OrientationInterpolator1312.setIS(IS1313)

ProtoBody603.addChildren(OrientationInterpolator1312)
ROUTE1317 = x3d.ROUTE()
ROUTE1317.setFromField("fraction_changed")
ROUTE1317.setFromNode("BehaviorClock")
ROUTE1317.setToField("set_fraction")
ROUTE1317.setToNode("r_middle_middle_OI")

ProtoBody603.addChildren(ROUTE1317)
OrientationInterpolator1318 = x3d.OrientationInterpolator()
OrientationInterpolator1318.setDEF("r_middle_proximal_OI")
IS1319 = x3d.IS()
connect1320 = x3d.connect()
connect1320.setNodeField("key")
connect1320.setProtoField("r_middle_proximal_key")

IS1319.addConnect(connect1320)
connect1321 = x3d.connect()
connect1321.setNodeField("keyValue")
connect1321.setProtoField("r_middle_proximal_keyValue")

IS1319.addConnect(connect1321)
connect1322 = x3d.connect()
connect1322.setNodeField("value_changed")
connect1322.setProtoField("r_middle_proximal_changed")

IS1319.addConnect(connect1322)

OrientationInterpolator1318.setIS(IS1319)

ProtoBody603.addChildren(OrientationInterpolator1318)
ROUTE1323 = x3d.ROUTE()
ROUTE1323.setFromField("fraction_changed")
ROUTE1323.setFromNode("BehaviorClock")
ROUTE1323.setToField("set_fraction")
ROUTE1323.setToNode("r_middle_proximal_OI")

ProtoBody603.addChildren(ROUTE1323)
OrientationInterpolator1324 = x3d.OrientationInterpolator()
OrientationInterpolator1324.setDEF("r_midproximal_OI")
IS1325 = x3d.IS()
connect1326 = x3d.connect()
connect1326.setNodeField("key")
connect1326.setProtoField("r_midproximal_key")

IS1325.addConnect(connect1326)
connect1327 = x3d.connect()
connect1327.setNodeField("keyValue")
connect1327.setProtoField("r_midproximal_keyValue")

IS1325.addConnect(connect1327)
connect1328 = x3d.connect()
connect1328.setNodeField("value_changed")
connect1328.setProtoField("r_midproximal_changed")

IS1325.addConnect(connect1328)

OrientationInterpolator1324.setIS(IS1325)

ProtoBody603.addChildren(OrientationInterpolator1324)
ROUTE1329 = x3d.ROUTE()
ROUTE1329.setFromField("fraction_changed")
ROUTE1329.setFromNode("BehaviorClock")
ROUTE1329.setToField("set_fraction")
ROUTE1329.setToNode("r_midproximal_OI")

ProtoBody603.addChildren(ROUTE1329)
OrientationInterpolator1330 = x3d.OrientationInterpolator()
OrientationInterpolator1330.setDEF("r_midtarsal_OI")
IS1331 = x3d.IS()
connect1332 = x3d.connect()
connect1332.setNodeField("key")
connect1332.setProtoField("r_midtarsal_key")

IS1331.addConnect(connect1332)
connect1333 = x3d.connect()
connect1333.setNodeField("keyValue")
connect1333.setProtoField("r_midtarsal_keyValue")

IS1331.addConnect(connect1333)
connect1334 = x3d.connect()
connect1334.setNodeField("value_changed")
connect1334.setProtoField("r_midtarsal_changed")

IS1331.addConnect(connect1334)

OrientationInterpolator1330.setIS(IS1331)

ProtoBody603.addChildren(OrientationInterpolator1330)
ROUTE1335 = x3d.ROUTE()
ROUTE1335.setFromField("fraction_changed")
ROUTE1335.setFromNode("BehaviorClock")
ROUTE1335.setToField("set_fraction")
ROUTE1335.setToNode("r_midtarsal_OI")

ProtoBody603.addChildren(ROUTE1335)
OrientationInterpolator1336 = x3d.OrientationInterpolator()
OrientationInterpolator1336.setDEF("r_pinky0_OI")
IS1337 = x3d.IS()
connect1338 = x3d.connect()
connect1338.setNodeField("key")
connect1338.setProtoField("r_pinky0_key")

IS1337.addConnect(connect1338)
connect1339 = x3d.connect()
connect1339.setNodeField("keyValue")
connect1339.setProtoField("r_pinky0_keyValue")

IS1337.addConnect(connect1339)
connect1340 = x3d.connect()
connect1340.setNodeField("value_changed")
connect1340.setProtoField("r_pinky0_changed")

IS1337.addConnect(connect1340)

OrientationInterpolator1336.setIS(IS1337)

ProtoBody603.addChildren(OrientationInterpolator1336)
ROUTE1341 = x3d.ROUTE()
ROUTE1341.setFromField("fraction_changed")
ROUTE1341.setFromNode("BehaviorClock")
ROUTE1341.setToField("set_fraction")
ROUTE1341.setToNode("r_pinky0_OI")

ProtoBody603.addChildren(ROUTE1341)
OrientationInterpolator1342 = x3d.OrientationInterpolator()
OrientationInterpolator1342.setDEF("r_pinky1_OI")
IS1343 = x3d.IS()
connect1344 = x3d.connect()
connect1344.setNodeField("key")
connect1344.setProtoField("r_pinky1_key")

IS1343.addConnect(connect1344)
connect1345 = x3d.connect()
connect1345.setNodeField("keyValue")
connect1345.setProtoField("r_pinky1_keyValue")

IS1343.addConnect(connect1345)
connect1346 = x3d.connect()
connect1346.setNodeField("value_changed")
connect1346.setProtoField("r_pinky1_changed")

IS1343.addConnect(connect1346)

OrientationInterpolator1342.setIS(IS1343)

ProtoBody603.addChildren(OrientationInterpolator1342)
ROUTE1347 = x3d.ROUTE()
ROUTE1347.setFromField("fraction_changed")
ROUTE1347.setFromNode("BehaviorClock")
ROUTE1347.setToField("set_fraction")
ROUTE1347.setToNode("r_pinky1_OI")

ProtoBody603.addChildren(ROUTE1347)
OrientationInterpolator1348 = x3d.OrientationInterpolator()
OrientationInterpolator1348.setDEF("r_pinky2_OI")
IS1349 = x3d.IS()
connect1350 = x3d.connect()
connect1350.setNodeField("key")
connect1350.setProtoField("r_pinky2_key")

IS1349.addConnect(connect1350)
connect1351 = x3d.connect()
connect1351.setNodeField("keyValue")
connect1351.setProtoField("r_pinky2_keyValue")

IS1349.addConnect(connect1351)
connect1352 = x3d.connect()
connect1352.setNodeField("value_changed")
connect1352.setProtoField("r_pinky2_changed")

IS1349.addConnect(connect1352)

OrientationInterpolator1348.setIS(IS1349)

ProtoBody603.addChildren(OrientationInterpolator1348)
ROUTE1353 = x3d.ROUTE()
ROUTE1353.setFromField("fraction_changed")
ROUTE1353.setFromNode("BehaviorClock")
ROUTE1353.setToField("set_fraction")
ROUTE1353.setToNode("r_pinky2_OI")

ProtoBody603.addChildren(ROUTE1353)
OrientationInterpolator1354 = x3d.OrientationInterpolator()
OrientationInterpolator1354.setDEF("r_pinky3_OI")
IS1355 = x3d.IS()
connect1356 = x3d.connect()
connect1356.setNodeField("key")
connect1356.setProtoField("r_pinky3_key")

IS1355.addConnect(connect1356)
connect1357 = x3d.connect()
connect1357.setNodeField("keyValue")
connect1357.setProtoField("r_pinky3_keyValue")

IS1355.addConnect(connect1357)
connect1358 = x3d.connect()
connect1358.setNodeField("value_changed")
connect1358.setProtoField("r_pinky3_changed")

IS1355.addConnect(connect1358)

OrientationInterpolator1354.setIS(IS1355)

ProtoBody603.addChildren(OrientationInterpolator1354)
ROUTE1359 = x3d.ROUTE()
ROUTE1359.setFromField("fraction_changed")
ROUTE1359.setFromNode("BehaviorClock")
ROUTE1359.setToField("set_fraction")
ROUTE1359.setToNode("r_pinky3_OI")

ProtoBody603.addChildren(ROUTE1359)
OrientationInterpolator1360 = x3d.OrientationInterpolator()
OrientationInterpolator1360.setDEF("r_pinky_distal_OI")
IS1361 = x3d.IS()
connect1362 = x3d.connect()
connect1362.setNodeField("key")
connect1362.setProtoField("r_pinky_distal_key")

IS1361.addConnect(connect1362)
connect1363 = x3d.connect()
connect1363.setNodeField("keyValue")
connect1363.setProtoField("r_pinky_distal_keyValue")

IS1361.addConnect(connect1363)
connect1364 = x3d.connect()
connect1364.setNodeField("value_changed")
connect1364.setProtoField("r_pinky_distal_changed")

IS1361.addConnect(connect1364)

OrientationInterpolator1360.setIS(IS1361)

ProtoBody603.addChildren(OrientationInterpolator1360)
ROUTE1365 = x3d.ROUTE()
ROUTE1365.setFromField("fraction_changed")
ROUTE1365.setFromNode("BehaviorClock")
ROUTE1365.setToField("set_fraction")
ROUTE1365.setToNode("r_pinky_distal_OI")

ProtoBody603.addChildren(ROUTE1365)
OrientationInterpolator1366 = x3d.OrientationInterpolator()
OrientationInterpolator1366.setDEF("r_pinky_metacarpal_OI")
IS1367 = x3d.IS()
connect1368 = x3d.connect()
connect1368.setNodeField("key")
connect1368.setProtoField("r_pinky_metacarpal_key")

IS1367.addConnect(connect1368)
connect1369 = x3d.connect()
connect1369.setNodeField("keyValue")
connect1369.setProtoField("r_pinky_metacarpal_keyValue")

IS1367.addConnect(connect1369)
connect1370 = x3d.connect()
connect1370.setNodeField("value_changed")
connect1370.setProtoField("r_pinky_metacarpal_changed")

IS1367.addConnect(connect1370)

OrientationInterpolator1366.setIS(IS1367)

ProtoBody603.addChildren(OrientationInterpolator1366)
ROUTE1371 = x3d.ROUTE()
ROUTE1371.setFromField("fraction_changed")
ROUTE1371.setFromNode("BehaviorClock")
ROUTE1371.setToField("set_fraction")
ROUTE1371.setToNode("r_pinky_metacarpal_OI")

ProtoBody603.addChildren(ROUTE1371)
OrientationInterpolator1372 = x3d.OrientationInterpolator()
OrientationInterpolator1372.setDEF("r_pinky_middle_OI")
IS1373 = x3d.IS()
connect1374 = x3d.connect()
connect1374.setNodeField("key")
connect1374.setProtoField("r_pinky_middle_key")

IS1373.addConnect(connect1374)
connect1375 = x3d.connect()
connect1375.setNodeField("keyValue")
connect1375.setProtoField("r_pinky_middle_keyValue")

IS1373.addConnect(connect1375)
connect1376 = x3d.connect()
connect1376.setNodeField("value_changed")
connect1376.setProtoField("r_pinky_middle_changed")

IS1373.addConnect(connect1376)

OrientationInterpolator1372.setIS(IS1373)

ProtoBody603.addChildren(OrientationInterpolator1372)
ROUTE1377 = x3d.ROUTE()
ROUTE1377.setFromField("fraction_changed")
ROUTE1377.setFromNode("BehaviorClock")
ROUTE1377.setToField("set_fraction")
ROUTE1377.setToNode("r_pinky_middle_OI")

ProtoBody603.addChildren(ROUTE1377)
OrientationInterpolator1378 = x3d.OrientationInterpolator()
OrientationInterpolator1378.setDEF("r_pinky_proximal_OI")
IS1379 = x3d.IS()
connect1380 = x3d.connect()
connect1380.setNodeField("key")
connect1380.setProtoField("r_pinky_proximal_key")

IS1379.addConnect(connect1380)
connect1381 = x3d.connect()
connect1381.setNodeField("keyValue")
connect1381.setProtoField("r_pinky_proximal_keyValue")

IS1379.addConnect(connect1381)
connect1382 = x3d.connect()
connect1382.setNodeField("value_changed")
connect1382.setProtoField("r_pinky_proximal_changed")

IS1379.addConnect(connect1382)

OrientationInterpolator1378.setIS(IS1379)

ProtoBody603.addChildren(OrientationInterpolator1378)
ROUTE1383 = x3d.ROUTE()
ROUTE1383.setFromField("fraction_changed")
ROUTE1383.setFromNode("BehaviorClock")
ROUTE1383.setToField("set_fraction")
ROUTE1383.setToNode("r_pinky_proximal_OI")

ProtoBody603.addChildren(ROUTE1383)
OrientationInterpolator1384 = x3d.OrientationInterpolator()
OrientationInterpolator1384.setDEF("r_ring0_OI")
IS1385 = x3d.IS()
connect1386 = x3d.connect()
connect1386.setNodeField("key")
connect1386.setProtoField("r_ring0_key")

IS1385.addConnect(connect1386)
connect1387 = x3d.connect()
connect1387.setNodeField("keyValue")
connect1387.setProtoField("r_ring0_keyValue")

IS1385.addConnect(connect1387)
connect1388 = x3d.connect()
connect1388.setNodeField("value_changed")
connect1388.setProtoField("r_ring0_changed")

IS1385.addConnect(connect1388)

OrientationInterpolator1384.setIS(IS1385)

ProtoBody603.addChildren(OrientationInterpolator1384)
ROUTE1389 = x3d.ROUTE()
ROUTE1389.setFromField("fraction_changed")
ROUTE1389.setFromNode("BehaviorClock")
ROUTE1389.setToField("set_fraction")
ROUTE1389.setToNode("r_ring0_OI")

ProtoBody603.addChildren(ROUTE1389)
OrientationInterpolator1390 = x3d.OrientationInterpolator()
OrientationInterpolator1390.setDEF("r_ring1_OI")
IS1391 = x3d.IS()
connect1392 = x3d.connect()
connect1392.setNodeField("key")
connect1392.setProtoField("r_ring1_key")

IS1391.addConnect(connect1392)
connect1393 = x3d.connect()
connect1393.setNodeField("keyValue")
connect1393.setProtoField("r_ring1_keyValue")

IS1391.addConnect(connect1393)
connect1394 = x3d.connect()
connect1394.setNodeField("value_changed")
connect1394.setProtoField("r_ring1_changed")

IS1391.addConnect(connect1394)

OrientationInterpolator1390.setIS(IS1391)

ProtoBody603.addChildren(OrientationInterpolator1390)
ROUTE1395 = x3d.ROUTE()
ROUTE1395.setFromField("fraction_changed")
ROUTE1395.setFromNode("BehaviorClock")
ROUTE1395.setToField("set_fraction")
ROUTE1395.setToNode("r_ring1_OI")

ProtoBody603.addChildren(ROUTE1395)
OrientationInterpolator1396 = x3d.OrientationInterpolator()
OrientationInterpolator1396.setDEF("r_ring2_OI")
IS1397 = x3d.IS()
connect1398 = x3d.connect()
connect1398.setNodeField("key")
connect1398.setProtoField("r_ring2_key")

IS1397.addConnect(connect1398)
connect1399 = x3d.connect()
connect1399.setNodeField("keyValue")
connect1399.setProtoField("r_ring2_keyValue")

IS1397.addConnect(connect1399)
connect1400 = x3d.connect()
connect1400.setNodeField("value_changed")
connect1400.setProtoField("r_ring2_changed")

IS1397.addConnect(connect1400)

OrientationInterpolator1396.setIS(IS1397)

ProtoBody603.addChildren(OrientationInterpolator1396)
ROUTE1401 = x3d.ROUTE()
ROUTE1401.setFromField("fraction_changed")
ROUTE1401.setFromNode("BehaviorClock")
ROUTE1401.setToField("set_fraction")
ROUTE1401.setToNode("r_ring2_OI")

ProtoBody603.addChildren(ROUTE1401)
OrientationInterpolator1402 = x3d.OrientationInterpolator()
OrientationInterpolator1402.setDEF("r_ring3_OI")
IS1403 = x3d.IS()
connect1404 = x3d.connect()
connect1404.setNodeField("key")
connect1404.setProtoField("r_ring3_key")

IS1403.addConnect(connect1404)
connect1405 = x3d.connect()
connect1405.setNodeField("keyValue")
connect1405.setProtoField("r_ring3_keyValue")

IS1403.addConnect(connect1405)
connect1406 = x3d.connect()
connect1406.setNodeField("value_changed")
connect1406.setProtoField("r_ring3_changed")

IS1403.addConnect(connect1406)

OrientationInterpolator1402.setIS(IS1403)

ProtoBody603.addChildren(OrientationInterpolator1402)
ROUTE1407 = x3d.ROUTE()
ROUTE1407.setFromField("fraction_changed")
ROUTE1407.setFromNode("BehaviorClock")
ROUTE1407.setToField("set_fraction")
ROUTE1407.setToNode("r_ring3_OI")

ProtoBody603.addChildren(ROUTE1407)
OrientationInterpolator1408 = x3d.OrientationInterpolator()
OrientationInterpolator1408.setDEF("r_ring_distal_OI")
IS1409 = x3d.IS()
connect1410 = x3d.connect()
connect1410.setNodeField("key")
connect1410.setProtoField("r_ring_distal_key")

IS1409.addConnect(connect1410)
connect1411 = x3d.connect()
connect1411.setNodeField("keyValue")
connect1411.setProtoField("r_ring_distal_keyValue")

IS1409.addConnect(connect1411)
connect1412 = x3d.connect()
connect1412.setNodeField("value_changed")
connect1412.setProtoField("r_ring_distal_changed")

IS1409.addConnect(connect1412)

OrientationInterpolator1408.setIS(IS1409)

ProtoBody603.addChildren(OrientationInterpolator1408)
ROUTE1413 = x3d.ROUTE()
ROUTE1413.setFromField("fraction_changed")
ROUTE1413.setFromNode("BehaviorClock")
ROUTE1413.setToField("set_fraction")
ROUTE1413.setToNode("r_ring_distal_OI")

ProtoBody603.addChildren(ROUTE1413)
OrientationInterpolator1414 = x3d.OrientationInterpolator()
OrientationInterpolator1414.setDEF("r_ring_metacarpal_OI")
IS1415 = x3d.IS()
connect1416 = x3d.connect()
connect1416.setNodeField("key")
connect1416.setProtoField("r_ring_metacarpal_key")

IS1415.addConnect(connect1416)
connect1417 = x3d.connect()
connect1417.setNodeField("keyValue")
connect1417.setProtoField("r_ring_metacarpal_keyValue")

IS1415.addConnect(connect1417)
connect1418 = x3d.connect()
connect1418.setNodeField("value_changed")
connect1418.setProtoField("r_ring_metacarpal_changed")

IS1415.addConnect(connect1418)

OrientationInterpolator1414.setIS(IS1415)

ProtoBody603.addChildren(OrientationInterpolator1414)
ROUTE1419 = x3d.ROUTE()
ROUTE1419.setFromField("fraction_changed")
ROUTE1419.setFromNode("BehaviorClock")
ROUTE1419.setToField("set_fraction")
ROUTE1419.setToNode("r_ring_metacarpal_OI")

ProtoBody603.addChildren(ROUTE1419)
OrientationInterpolator1420 = x3d.OrientationInterpolator()
OrientationInterpolator1420.setDEF("r_ring_middle_OI")
IS1421 = x3d.IS()
connect1422 = x3d.connect()
connect1422.setNodeField("key")
connect1422.setProtoField("r_ring_middle_key")

IS1421.addConnect(connect1422)
connect1423 = x3d.connect()
connect1423.setNodeField("keyValue")
connect1423.setProtoField("r_ring_middle_keyValue")

IS1421.addConnect(connect1423)
connect1424 = x3d.connect()
connect1424.setNodeField("value_changed")
connect1424.setProtoField("r_ring_middle_changed")

IS1421.addConnect(connect1424)

OrientationInterpolator1420.setIS(IS1421)

ProtoBody603.addChildren(OrientationInterpolator1420)
ROUTE1425 = x3d.ROUTE()
ROUTE1425.setFromField("fraction_changed")
ROUTE1425.setFromNode("BehaviorClock")
ROUTE1425.setToField("set_fraction")
ROUTE1425.setToNode("r_ring_middle_OI")

ProtoBody603.addChildren(ROUTE1425)
OrientationInterpolator1426 = x3d.OrientationInterpolator()
OrientationInterpolator1426.setDEF("r_ring_proximal_OI")
IS1427 = x3d.IS()
connect1428 = x3d.connect()
connect1428.setNodeField("key")
connect1428.setProtoField("r_ring_proximal_key")

IS1427.addConnect(connect1428)
connect1429 = x3d.connect()
connect1429.setNodeField("keyValue")
connect1429.setProtoField("r_ring_proximal_keyValue")

IS1427.addConnect(connect1429)
connect1430 = x3d.connect()
connect1430.setNodeField("value_changed")
connect1430.setProtoField("r_ring_proximal_changed")

IS1427.addConnect(connect1430)

OrientationInterpolator1426.setIS(IS1427)

ProtoBody603.addChildren(OrientationInterpolator1426)
ROUTE1431 = x3d.ROUTE()
ROUTE1431.setFromField("fraction_changed")
ROUTE1431.setFromNode("BehaviorClock")
ROUTE1431.setToField("set_fraction")
ROUTE1431.setToNode("r_ring_proximal_OI")

ProtoBody603.addChildren(ROUTE1431)
OrientationInterpolator1432 = x3d.OrientationInterpolator()
OrientationInterpolator1432.setDEF("r_scapula_OI")
IS1433 = x3d.IS()
connect1434 = x3d.connect()
connect1434.setNodeField("key")
connect1434.setProtoField("r_scapula_key")

IS1433.addConnect(connect1434)
connect1435 = x3d.connect()
connect1435.setNodeField("keyValue")
connect1435.setProtoField("r_scapula_keyValue")

IS1433.addConnect(connect1435)
connect1436 = x3d.connect()
connect1436.setNodeField("value_changed")
connect1436.setProtoField("r_scapula_changed")

IS1433.addConnect(connect1436)

OrientationInterpolator1432.setIS(IS1433)

ProtoBody603.addChildren(OrientationInterpolator1432)
ROUTE1437 = x3d.ROUTE()
ROUTE1437.setFromField("fraction_changed")
ROUTE1437.setFromNode("BehaviorClock")
ROUTE1437.setToField("set_fraction")
ROUTE1437.setToNode("r_scapula_OI")

ProtoBody603.addChildren(ROUTE1437)
OrientationInterpolator1438 = x3d.OrientationInterpolator()
OrientationInterpolator1438.setDEF("r_shoulder_OI")
IS1439 = x3d.IS()
connect1440 = x3d.connect()
connect1440.setNodeField("key")
connect1440.setProtoField("r_shoulder_key")

IS1439.addConnect(connect1440)
connect1441 = x3d.connect()
connect1441.setNodeField("keyValue")
connect1441.setProtoField("r_shoulder_keyValue")

IS1439.addConnect(connect1441)
connect1442 = x3d.connect()
connect1442.setNodeField("value_changed")
connect1442.setProtoField("r_shoulder_changed")

IS1439.addConnect(connect1442)

OrientationInterpolator1438.setIS(IS1439)

ProtoBody603.addChildren(OrientationInterpolator1438)
ROUTE1443 = x3d.ROUTE()
ROUTE1443.setFromField("fraction_changed")
ROUTE1443.setFromNode("BehaviorClock")
ROUTE1443.setToField("set_fraction")
ROUTE1443.setToNode("r_shoulder_OI")

ProtoBody603.addChildren(ROUTE1443)
OrientationInterpolator1444 = x3d.OrientationInterpolator()
OrientationInterpolator1444.setDEF("r_sternoclavicular_OI")
IS1445 = x3d.IS()
connect1446 = x3d.connect()
connect1446.setNodeField("key")
connect1446.setProtoField("r_sternoclavicular_key")

IS1445.addConnect(connect1446)
connect1447 = x3d.connect()
connect1447.setNodeField("keyValue")
connect1447.setProtoField("r_sternoclavicular_keyValue")

IS1445.addConnect(connect1447)
connect1448 = x3d.connect()
connect1448.setNodeField("value_changed")
connect1448.setProtoField("r_sternoclavicular_changed")

IS1445.addConnect(connect1448)

OrientationInterpolator1444.setIS(IS1445)

ProtoBody603.addChildren(OrientationInterpolator1444)
ROUTE1449 = x3d.ROUTE()
ROUTE1449.setFromField("fraction_changed")
ROUTE1449.setFromNode("BehaviorClock")
ROUTE1449.setToField("set_fraction")
ROUTE1449.setToNode("r_sternoclavicular_OI")

ProtoBody603.addChildren(ROUTE1449)
OrientationInterpolator1450 = x3d.OrientationInterpolator()
OrientationInterpolator1450.setDEF("r_subtalar_OI")
IS1451 = x3d.IS()
connect1452 = x3d.connect()
connect1452.setNodeField("key")
connect1452.setProtoField("r_subtalar_key")

IS1451.addConnect(connect1452)
connect1453 = x3d.connect()
connect1453.setNodeField("keyValue")
connect1453.setProtoField("r_subtalar_keyValue")

IS1451.addConnect(connect1453)
connect1454 = x3d.connect()
connect1454.setNodeField("value_changed")
connect1454.setProtoField("r_subtalar_changed")

IS1451.addConnect(connect1454)

OrientationInterpolator1450.setIS(IS1451)

ProtoBody603.addChildren(OrientationInterpolator1450)
ROUTE1455 = x3d.ROUTE()
ROUTE1455.setFromField("fraction_changed")
ROUTE1455.setFromNode("BehaviorClock")
ROUTE1455.setToField("set_fraction")
ROUTE1455.setToNode("r_subtalar_OI")

ProtoBody603.addChildren(ROUTE1455)
OrientationInterpolator1456 = x3d.OrientationInterpolator()
OrientationInterpolator1456.setDEF("r_thigh_OI")
IS1457 = x3d.IS()
connect1458 = x3d.connect()
connect1458.setNodeField("key")
connect1458.setProtoField("r_thigh_key")

IS1457.addConnect(connect1458)
connect1459 = x3d.connect()
connect1459.setNodeField("keyValue")
connect1459.setProtoField("r_thigh_keyValue")

IS1457.addConnect(connect1459)
connect1460 = x3d.connect()
connect1460.setNodeField("value_changed")
connect1460.setProtoField("r_thigh_changed")

IS1457.addConnect(connect1460)

OrientationInterpolator1456.setIS(IS1457)

ProtoBody603.addChildren(OrientationInterpolator1456)
ROUTE1461 = x3d.ROUTE()
ROUTE1461.setFromField("fraction_changed")
ROUTE1461.setFromNode("BehaviorClock")
ROUTE1461.setToField("set_fraction")
ROUTE1461.setToNode("r_thigh_OI")

ProtoBody603.addChildren(ROUTE1461)
OrientationInterpolator1462 = x3d.OrientationInterpolator()
OrientationInterpolator1462.setDEF("r_thumb1_OI")
IS1463 = x3d.IS()
connect1464 = x3d.connect()
connect1464.setNodeField("key")
connect1464.setProtoField("r_thumb1_key")

IS1463.addConnect(connect1464)
connect1465 = x3d.connect()
connect1465.setNodeField("keyValue")
connect1465.setProtoField("r_thumb1_keyValue")

IS1463.addConnect(connect1465)
connect1466 = x3d.connect()
connect1466.setNodeField("value_changed")
connect1466.setProtoField("r_thumb1_changed")

IS1463.addConnect(connect1466)

OrientationInterpolator1462.setIS(IS1463)

ProtoBody603.addChildren(OrientationInterpolator1462)
ROUTE1467 = x3d.ROUTE()
ROUTE1467.setFromField("fraction_changed")
ROUTE1467.setFromNode("BehaviorClock")
ROUTE1467.setToField("set_fraction")
ROUTE1467.setToNode("r_thumb1_OI")

ProtoBody603.addChildren(ROUTE1467)
OrientationInterpolator1468 = x3d.OrientationInterpolator()
OrientationInterpolator1468.setDEF("r_thumb2_OI")
IS1469 = x3d.IS()
connect1470 = x3d.connect()
connect1470.setNodeField("key")
connect1470.setProtoField("r_thumb2_key")

IS1469.addConnect(connect1470)
connect1471 = x3d.connect()
connect1471.setNodeField("keyValue")
connect1471.setProtoField("r_thumb2_keyValue")

IS1469.addConnect(connect1471)
connect1472 = x3d.connect()
connect1472.setNodeField("value_changed")
connect1472.setProtoField("r_thumb2_changed")

IS1469.addConnect(connect1472)

OrientationInterpolator1468.setIS(IS1469)

ProtoBody603.addChildren(OrientationInterpolator1468)
ROUTE1473 = x3d.ROUTE()
ROUTE1473.setFromField("fraction_changed")
ROUTE1473.setFromNode("BehaviorClock")
ROUTE1473.setToField("set_fraction")
ROUTE1473.setToNode("r_thumb2_OI")

ProtoBody603.addChildren(ROUTE1473)
OrientationInterpolator1474 = x3d.OrientationInterpolator()
OrientationInterpolator1474.setDEF("r_thumb3_OI")
IS1475 = x3d.IS()
connect1476 = x3d.connect()
connect1476.setNodeField("key")
connect1476.setProtoField("r_thumb3_key")

IS1475.addConnect(connect1476)
connect1477 = x3d.connect()
connect1477.setNodeField("keyValue")
connect1477.setProtoField("r_thumb3_keyValue")

IS1475.addConnect(connect1477)
connect1478 = x3d.connect()
connect1478.setNodeField("value_changed")
connect1478.setProtoField("r_thumb3_changed")

IS1475.addConnect(connect1478)

OrientationInterpolator1474.setIS(IS1475)

ProtoBody603.addChildren(OrientationInterpolator1474)
ROUTE1479 = x3d.ROUTE()
ROUTE1479.setFromField("fraction_changed")
ROUTE1479.setFromNode("BehaviorClock")
ROUTE1479.setToField("set_fraction")
ROUTE1479.setToNode("r_thumb3_OI")

ProtoBody603.addChildren(ROUTE1479)
OrientationInterpolator1480 = x3d.OrientationInterpolator()
OrientationInterpolator1480.setDEF("r_thumb_distal_OI")
IS1481 = x3d.IS()
connect1482 = x3d.connect()
connect1482.setNodeField("key")
connect1482.setProtoField("r_thumb_distal_key")

IS1481.addConnect(connect1482)
connect1483 = x3d.connect()
connect1483.setNodeField("keyValue")
connect1483.setProtoField("r_thumb_distal_keyValue")

IS1481.addConnect(connect1483)
connect1484 = x3d.connect()
connect1484.setNodeField("value_changed")
connect1484.setProtoField("r_thumb_distal_changed")

IS1481.addConnect(connect1484)

OrientationInterpolator1480.setIS(IS1481)

ProtoBody603.addChildren(OrientationInterpolator1480)
ROUTE1485 = x3d.ROUTE()
ROUTE1485.setFromField("fraction_changed")
ROUTE1485.setFromNode("BehaviorClock")
ROUTE1485.setToField("set_fraction")
ROUTE1485.setToNode("r_thumb_distal_OI")

ProtoBody603.addChildren(ROUTE1485)
OrientationInterpolator1486 = x3d.OrientationInterpolator()
OrientationInterpolator1486.setDEF("r_thumb_metacarpal_OI")
IS1487 = x3d.IS()
connect1488 = x3d.connect()
connect1488.setNodeField("key")
connect1488.setProtoField("r_thumb_metacarpal_key")

IS1487.addConnect(connect1488)
connect1489 = x3d.connect()
connect1489.setNodeField("keyValue")
connect1489.setProtoField("r_thumb_metacarpal_keyValue")

IS1487.addConnect(connect1489)
connect1490 = x3d.connect()
connect1490.setNodeField("value_changed")
connect1490.setProtoField("r_thumb_metacarpal_changed")

IS1487.addConnect(connect1490)

OrientationInterpolator1486.setIS(IS1487)

ProtoBody603.addChildren(OrientationInterpolator1486)
ROUTE1491 = x3d.ROUTE()
ROUTE1491.setFromField("fraction_changed")
ROUTE1491.setFromNode("BehaviorClock")
ROUTE1491.setToField("set_fraction")
ROUTE1491.setToNode("r_thumb_metacarpal_OI")

ProtoBody603.addChildren(ROUTE1491)
OrientationInterpolator1492 = x3d.OrientationInterpolator()
OrientationInterpolator1492.setDEF("r_thumb_proximal_OI")
IS1493 = x3d.IS()
connect1494 = x3d.connect()
connect1494.setNodeField("key")
connect1494.setProtoField("r_thumb_proximal_key")

IS1493.addConnect(connect1494)
connect1495 = x3d.connect()
connect1495.setNodeField("keyValue")
connect1495.setProtoField("r_thumb_proximal_keyValue")

IS1493.addConnect(connect1495)
connect1496 = x3d.connect()
connect1496.setNodeField("value_changed")
connect1496.setProtoField("r_thumb_proximal_changed")

IS1493.addConnect(connect1496)

OrientationInterpolator1492.setIS(IS1493)

ProtoBody603.addChildren(OrientationInterpolator1492)
ROUTE1497 = x3d.ROUTE()
ROUTE1497.setFromField("fraction_changed")
ROUTE1497.setFromNode("BehaviorClock")
ROUTE1497.setToField("set_fraction")
ROUTE1497.setToNode("r_thumb_proximal_OI")

ProtoBody603.addChildren(ROUTE1497)
OrientationInterpolator1498 = x3d.OrientationInterpolator()
OrientationInterpolator1498.setDEF("r_upperarm_OI")
IS1499 = x3d.IS()
connect1500 = x3d.connect()
connect1500.setNodeField("key")
connect1500.setProtoField("r_upperarm_key")

IS1499.addConnect(connect1500)
connect1501 = x3d.connect()
connect1501.setNodeField("keyValue")
connect1501.setProtoField("r_upperarm_keyValue")

IS1499.addConnect(connect1501)
connect1502 = x3d.connect()
connect1502.setNodeField("value_changed")
connect1502.setProtoField("r_upperarm_changed")

IS1499.addConnect(connect1502)

OrientationInterpolator1498.setIS(IS1499)

ProtoBody603.addChildren(OrientationInterpolator1498)
ROUTE1503 = x3d.ROUTE()
ROUTE1503.setFromField("fraction_changed")
ROUTE1503.setFromNode("BehaviorClock")
ROUTE1503.setToField("set_fraction")
ROUTE1503.setToNode("r_upperarm_OI")

ProtoBody603.addChildren(ROUTE1503)
OrientationInterpolator1504 = x3d.OrientationInterpolator()
OrientationInterpolator1504.setDEF("r_wrist_OI")
IS1505 = x3d.IS()
connect1506 = x3d.connect()
connect1506.setNodeField("key")
connect1506.setProtoField("r_wrist_key")

IS1505.addConnect(connect1506)
connect1507 = x3d.connect()
connect1507.setNodeField("keyValue")
connect1507.setProtoField("r_wrist_keyValue")

IS1505.addConnect(connect1507)
connect1508 = x3d.connect()
connect1508.setNodeField("value_changed")
connect1508.setProtoField("r_wrist_changed")

IS1505.addConnect(connect1508)

OrientationInterpolator1504.setIS(IS1505)

ProtoBody603.addChildren(OrientationInterpolator1504)
ROUTE1509 = x3d.ROUTE()
ROUTE1509.setFromField("fraction_changed")
ROUTE1509.setFromNode("BehaviorClock")
ROUTE1509.setToField("set_fraction")
ROUTE1509.setToNode("r_wrist_OI")

ProtoBody603.addChildren(ROUTE1509)
OrientationInterpolator1510 = x3d.OrientationInterpolator()
OrientationInterpolator1510.setDEF("sacroiliac_OI")
IS1511 = x3d.IS()
connect1512 = x3d.connect()
connect1512.setNodeField("key")
connect1512.setProtoField("sacroiliac_key")

IS1511.addConnect(connect1512)
connect1513 = x3d.connect()
connect1513.setNodeField("keyValue")
connect1513.setProtoField("sacroiliac_keyValue")

IS1511.addConnect(connect1513)
connect1514 = x3d.connect()
connect1514.setNodeField("value_changed")
connect1514.setProtoField("sacroiliac_changed")

IS1511.addConnect(connect1514)

OrientationInterpolator1510.setIS(IS1511)

ProtoBody603.addChildren(OrientationInterpolator1510)
ROUTE1515 = x3d.ROUTE()
ROUTE1515.setFromField("fraction_changed")
ROUTE1515.setFromNode("BehaviorClock")
ROUTE1515.setToField("set_fraction")
ROUTE1515.setToNode("sacroiliac_OI")

ProtoBody603.addChildren(ROUTE1515)
OrientationInterpolator1516 = x3d.OrientationInterpolator()
OrientationInterpolator1516.setDEF("sacrum_OI")
IS1517 = x3d.IS()
connect1518 = x3d.connect()
connect1518.setNodeField("key")
connect1518.setProtoField("sacrum_key")

IS1517.addConnect(connect1518)
connect1519 = x3d.connect()
connect1519.setNodeField("keyValue")
connect1519.setProtoField("sacrum_keyValue")

IS1517.addConnect(connect1519)
connect1520 = x3d.connect()
connect1520.setNodeField("value_changed")
connect1520.setProtoField("sacrum_changed")

IS1517.addConnect(connect1520)

OrientationInterpolator1516.setIS(IS1517)

ProtoBody603.addChildren(OrientationInterpolator1516)
ROUTE1521 = x3d.ROUTE()
ROUTE1521.setFromField("fraction_changed")
ROUTE1521.setFromNode("BehaviorClock")
ROUTE1521.setToField("set_fraction")
ROUTE1521.setToNode("sacrum_OI")

ProtoBody603.addChildren(ROUTE1521)
OrientationInterpolator1522 = x3d.OrientationInterpolator()
OrientationInterpolator1522.setDEF("skull_OI")
IS1523 = x3d.IS()
connect1524 = x3d.connect()
connect1524.setNodeField("key")
connect1524.setProtoField("skull_key")

IS1523.addConnect(connect1524)
connect1525 = x3d.connect()
connect1525.setNodeField("keyValue")
connect1525.setProtoField("skull_keyValue")

IS1523.addConnect(connect1525)
connect1526 = x3d.connect()
connect1526.setNodeField("value_changed")
connect1526.setProtoField("skull_changed")

IS1523.addConnect(connect1526)

OrientationInterpolator1522.setIS(IS1523)

ProtoBody603.addChildren(OrientationInterpolator1522)
ROUTE1527 = x3d.ROUTE()
ROUTE1527.setFromField("fraction_changed")
ROUTE1527.setFromNode("BehaviorClock")
ROUTE1527.setToField("set_fraction")
ROUTE1527.setToNode("skull_OI")

ProtoBody603.addChildren(ROUTE1527)
OrientationInterpolator1528 = x3d.OrientationInterpolator()
OrientationInterpolator1528.setDEF("skullbase_OI")
IS1529 = x3d.IS()
connect1530 = x3d.connect()
connect1530.setNodeField("key")
connect1530.setProtoField("skullbase_key")

IS1529.addConnect(connect1530)
connect1531 = x3d.connect()
connect1531.setNodeField("keyValue")
connect1531.setProtoField("skullbase_keyValue")

IS1529.addConnect(connect1531)
connect1532 = x3d.connect()
connect1532.setNodeField("value_changed")
connect1532.setProtoField("skullbase_changed")

IS1529.addConnect(connect1532)

OrientationInterpolator1528.setIS(IS1529)

ProtoBody603.addChildren(OrientationInterpolator1528)
ROUTE1533 = x3d.ROUTE()
ROUTE1533.setFromField("fraction_changed")
ROUTE1533.setFromNode("BehaviorClock")
ROUTE1533.setToField("set_fraction")
ROUTE1533.setToNode("skullbase_OI")

ProtoBody603.addChildren(ROUTE1533)
OrientationInterpolator1534 = x3d.OrientationInterpolator()
OrientationInterpolator1534.setDEF("t1_OI")
IS1535 = x3d.IS()
connect1536 = x3d.connect()
connect1536.setNodeField("key")
connect1536.setProtoField("t1_key")

IS1535.addConnect(connect1536)
connect1537 = x3d.connect()
connect1537.setNodeField("keyValue")
connect1537.setProtoField("t1_keyValue")

IS1535.addConnect(connect1537)
connect1538 = x3d.connect()
connect1538.setNodeField("value_changed")
connect1538.setProtoField("t1_changed")

IS1535.addConnect(connect1538)

OrientationInterpolator1534.setIS(IS1535)

ProtoBody603.addChildren(OrientationInterpolator1534)
ROUTE1539 = x3d.ROUTE()
ROUTE1539.setFromField("fraction_changed")
ROUTE1539.setFromNode("BehaviorClock")
ROUTE1539.setToField("set_fraction")
ROUTE1539.setToNode("t1_OI")

ProtoBody603.addChildren(ROUTE1539)
OrientationInterpolator1540 = x3d.OrientationInterpolator()
OrientationInterpolator1540.setDEF("t2_OI")
IS1541 = x3d.IS()
connect1542 = x3d.connect()
connect1542.setNodeField("key")
connect1542.setProtoField("t2_key")

IS1541.addConnect(connect1542)
connect1543 = x3d.connect()
connect1543.setNodeField("keyValue")
connect1543.setProtoField("t2_keyValue")

IS1541.addConnect(connect1543)
connect1544 = x3d.connect()
connect1544.setNodeField("value_changed")
connect1544.setProtoField("t2_changed")

IS1541.addConnect(connect1544)

OrientationInterpolator1540.setIS(IS1541)

ProtoBody603.addChildren(OrientationInterpolator1540)
ROUTE1545 = x3d.ROUTE()
ROUTE1545.setFromField("fraction_changed")
ROUTE1545.setFromNode("BehaviorClock")
ROUTE1545.setToField("set_fraction")
ROUTE1545.setToNode("t2_OI")

ProtoBody603.addChildren(ROUTE1545)
OrientationInterpolator1546 = x3d.OrientationInterpolator()
OrientationInterpolator1546.setDEF("t3_OI")
IS1547 = x3d.IS()
connect1548 = x3d.connect()
connect1548.setNodeField("key")
connect1548.setProtoField("t3_key")

IS1547.addConnect(connect1548)
connect1549 = x3d.connect()
connect1549.setNodeField("keyValue")
connect1549.setProtoField("t3_keyValue")

IS1547.addConnect(connect1549)
connect1550 = x3d.connect()
connect1550.setNodeField("value_changed")
connect1550.setProtoField("t3_changed")

IS1547.addConnect(connect1550)

OrientationInterpolator1546.setIS(IS1547)

ProtoBody603.addChildren(OrientationInterpolator1546)
ROUTE1551 = x3d.ROUTE()
ROUTE1551.setFromField("fraction_changed")
ROUTE1551.setFromNode("BehaviorClock")
ROUTE1551.setToField("set_fraction")
ROUTE1551.setToNode("t3_OI")

ProtoBody603.addChildren(ROUTE1551)
OrientationInterpolator1552 = x3d.OrientationInterpolator()
OrientationInterpolator1552.setDEF("t4_OI")
IS1553 = x3d.IS()
connect1554 = x3d.connect()
connect1554.setNodeField("key")
connect1554.setProtoField("t4_key")

IS1553.addConnect(connect1554)
connect1555 = x3d.connect()
connect1555.setNodeField("keyValue")
connect1555.setProtoField("t4_keyValue")

IS1553.addConnect(connect1555)
connect1556 = x3d.connect()
connect1556.setNodeField("value_changed")
connect1556.setProtoField("t4_changed")

IS1553.addConnect(connect1556)

OrientationInterpolator1552.setIS(IS1553)

ProtoBody603.addChildren(OrientationInterpolator1552)
ROUTE1557 = x3d.ROUTE()
ROUTE1557.setFromField("fraction_changed")
ROUTE1557.setFromNode("BehaviorClock")
ROUTE1557.setToField("set_fraction")
ROUTE1557.setToNode("t4_OI")

ProtoBody603.addChildren(ROUTE1557)
OrientationInterpolator1558 = x3d.OrientationInterpolator()
OrientationInterpolator1558.setDEF("t5_OI")
IS1559 = x3d.IS()
connect1560 = x3d.connect()
connect1560.setNodeField("key")
connect1560.setProtoField("t5_key")

IS1559.addConnect(connect1560)
connect1561 = x3d.connect()
connect1561.setNodeField("keyValue")
connect1561.setProtoField("t5_keyValue")

IS1559.addConnect(connect1561)
connect1562 = x3d.connect()
connect1562.setNodeField("value_changed")
connect1562.setProtoField("t5_changed")

IS1559.addConnect(connect1562)

OrientationInterpolator1558.setIS(IS1559)

ProtoBody603.addChildren(OrientationInterpolator1558)
ROUTE1563 = x3d.ROUTE()
ROUTE1563.setFromField("fraction_changed")
ROUTE1563.setFromNode("BehaviorClock")
ROUTE1563.setToField("set_fraction")
ROUTE1563.setToNode("t5_OI")

ProtoBody603.addChildren(ROUTE1563)
OrientationInterpolator1564 = x3d.OrientationInterpolator()
OrientationInterpolator1564.setDEF("t6_OI")
IS1565 = x3d.IS()
connect1566 = x3d.connect()
connect1566.setNodeField("key")
connect1566.setProtoField("t6_key")

IS1565.addConnect(connect1566)
connect1567 = x3d.connect()
connect1567.setNodeField("keyValue")
connect1567.setProtoField("t6_keyValue")

IS1565.addConnect(connect1567)
connect1568 = x3d.connect()
connect1568.setNodeField("value_changed")
connect1568.setProtoField("t6_changed")

IS1565.addConnect(connect1568)

OrientationInterpolator1564.setIS(IS1565)

ProtoBody603.addChildren(OrientationInterpolator1564)
ROUTE1569 = x3d.ROUTE()
ROUTE1569.setFromField("fraction_changed")
ROUTE1569.setFromNode("BehaviorClock")
ROUTE1569.setToField("set_fraction")
ROUTE1569.setToNode("t6_OI")

ProtoBody603.addChildren(ROUTE1569)
OrientationInterpolator1570 = x3d.OrientationInterpolator()
OrientationInterpolator1570.setDEF("t7_OI")
IS1571 = x3d.IS()
connect1572 = x3d.connect()
connect1572.setNodeField("key")
connect1572.setProtoField("t7_key")

IS1571.addConnect(connect1572)
connect1573 = x3d.connect()
connect1573.setNodeField("keyValue")
connect1573.setProtoField("t7_keyValue")

IS1571.addConnect(connect1573)
connect1574 = x3d.connect()
connect1574.setNodeField("value_changed")
connect1574.setProtoField("t7_changed")

IS1571.addConnect(connect1574)

OrientationInterpolator1570.setIS(IS1571)

ProtoBody603.addChildren(OrientationInterpolator1570)
ROUTE1575 = x3d.ROUTE()
ROUTE1575.setFromField("fraction_changed")
ROUTE1575.setFromNode("BehaviorClock")
ROUTE1575.setToField("set_fraction")
ROUTE1575.setToNode("t7_OI")

ProtoBody603.addChildren(ROUTE1575)
OrientationInterpolator1576 = x3d.OrientationInterpolator()
OrientationInterpolator1576.setDEF("t8_OI")
IS1577 = x3d.IS()
connect1578 = x3d.connect()
connect1578.setNodeField("key")
connect1578.setProtoField("t8_key")

IS1577.addConnect(connect1578)
connect1579 = x3d.connect()
connect1579.setNodeField("keyValue")
connect1579.setProtoField("t8_keyValue")

IS1577.addConnect(connect1579)
connect1580 = x3d.connect()
connect1580.setNodeField("value_changed")
connect1580.setProtoField("t8_changed")

IS1577.addConnect(connect1580)

OrientationInterpolator1576.setIS(IS1577)

ProtoBody603.addChildren(OrientationInterpolator1576)
ROUTE1581 = x3d.ROUTE()
ROUTE1581.setFromField("fraction_changed")
ROUTE1581.setFromNode("BehaviorClock")
ROUTE1581.setToField("set_fraction")
ROUTE1581.setToNode("t8_OI")

ProtoBody603.addChildren(ROUTE1581)
OrientationInterpolator1582 = x3d.OrientationInterpolator()
OrientationInterpolator1582.setDEF("t9_OI")
IS1583 = x3d.IS()
connect1584 = x3d.connect()
connect1584.setNodeField("key")
connect1584.setProtoField("t9_key")

IS1583.addConnect(connect1584)
connect1585 = x3d.connect()
connect1585.setNodeField("keyValue")
connect1585.setProtoField("t9_keyValue")

IS1583.addConnect(connect1585)
connect1586 = x3d.connect()
connect1586.setNodeField("value_changed")
connect1586.setProtoField("t9_changed")

IS1583.addConnect(connect1586)

OrientationInterpolator1582.setIS(IS1583)

ProtoBody603.addChildren(OrientationInterpolator1582)
ROUTE1587 = x3d.ROUTE()
ROUTE1587.setFromField("fraction_changed")
ROUTE1587.setFromNode("BehaviorClock")
ROUTE1587.setToField("set_fraction")
ROUTE1587.setToNode("t9_OI")

ProtoBody603.addChildren(ROUTE1587)
OrientationInterpolator1588 = x3d.OrientationInterpolator()
OrientationInterpolator1588.setDEF("t10_OI")
IS1589 = x3d.IS()
connect1590 = x3d.connect()
connect1590.setNodeField("key")
connect1590.setProtoField("t10_key")

IS1589.addConnect(connect1590)
connect1591 = x3d.connect()
connect1591.setNodeField("keyValue")
connect1591.setProtoField("t10_keyValue")

IS1589.addConnect(connect1591)
connect1592 = x3d.connect()
connect1592.setNodeField("value_changed")
connect1592.setProtoField("t10_changed")

IS1589.addConnect(connect1592)

OrientationInterpolator1588.setIS(IS1589)

ProtoBody603.addChildren(OrientationInterpolator1588)
ROUTE1593 = x3d.ROUTE()
ROUTE1593.setFromField("fraction_changed")
ROUTE1593.setFromNode("BehaviorClock")
ROUTE1593.setToField("set_fraction")
ROUTE1593.setToNode("t10_OI")

ProtoBody603.addChildren(ROUTE1593)
OrientationInterpolator1594 = x3d.OrientationInterpolator()
OrientationInterpolator1594.setDEF("t11_OI")
IS1595 = x3d.IS()
connect1596 = x3d.connect()
connect1596.setNodeField("key")
connect1596.setProtoField("t11_key")

IS1595.addConnect(connect1596)
connect1597 = x3d.connect()
connect1597.setNodeField("keyValue")
connect1597.setProtoField("t11_keyValue")

IS1595.addConnect(connect1597)
connect1598 = x3d.connect()
connect1598.setNodeField("value_changed")
connect1598.setProtoField("t11_changed")

IS1595.addConnect(connect1598)

OrientationInterpolator1594.setIS(IS1595)

ProtoBody603.addChildren(OrientationInterpolator1594)
ROUTE1599 = x3d.ROUTE()
ROUTE1599.setFromField("fraction_changed")
ROUTE1599.setFromNode("BehaviorClock")
ROUTE1599.setToField("set_fraction")
ROUTE1599.setToNode("t11_OI")

ProtoBody603.addChildren(ROUTE1599)
OrientationInterpolator1600 = x3d.OrientationInterpolator()
OrientationInterpolator1600.setDEF("t12_OI")
IS1601 = x3d.IS()
connect1602 = x3d.connect()
connect1602.setNodeField("key")
connect1602.setProtoField("t12_key")

IS1601.addConnect(connect1602)
connect1603 = x3d.connect()
connect1603.setNodeField("keyValue")
connect1603.setProtoField("t12_keyValue")

IS1601.addConnect(connect1603)
connect1604 = x3d.connect()
connect1604.setNodeField("value_changed")
connect1604.setProtoField("t12_changed")

IS1601.addConnect(connect1604)

OrientationInterpolator1600.setIS(IS1601)

ProtoBody603.addChildren(OrientationInterpolator1600)
ROUTE1605 = x3d.ROUTE()
ROUTE1605.setFromField("fraction_changed")
ROUTE1605.setFromNode("BehaviorClock")
ROUTE1605.setToField("set_fraction")
ROUTE1605.setToNode("t12_OI")

ProtoBody603.addChildren(ROUTE1605)
OrientationInterpolator1606 = x3d.OrientationInterpolator()
OrientationInterpolator1606.setDEF("temporomandibular_OI")
IS1607 = x3d.IS()
connect1608 = x3d.connect()
connect1608.setNodeField("key")
connect1608.setProtoField("temporomandibular_key")

IS1607.addConnect(connect1608)
connect1609 = x3d.connect()
connect1609.setNodeField("keyValue")
connect1609.setProtoField("temporomandibular_keyValue")

IS1607.addConnect(connect1609)
connect1610 = x3d.connect()
connect1610.setNodeField("value_changed")
connect1610.setProtoField("temporomandibular_changed")

IS1607.addConnect(connect1610)

OrientationInterpolator1606.setIS(IS1607)

ProtoBody603.addChildren(OrientationInterpolator1606)
ROUTE1611 = x3d.ROUTE()
ROUTE1611.setFromField("fraction_changed")
ROUTE1611.setFromNode("BehaviorClock")
ROUTE1611.setToField("set_fraction")
ROUTE1611.setToNode("temporomandibular_OI")

ProtoBody603.addChildren(ROUTE1611)
OrientationInterpolator1612 = x3d.OrientationInterpolator()
OrientationInterpolator1612.setDEF("vc1_OI")
IS1613 = x3d.IS()
connect1614 = x3d.connect()
connect1614.setNodeField("key")
connect1614.setProtoField("vc1_key")

IS1613.addConnect(connect1614)
connect1615 = x3d.connect()
connect1615.setNodeField("keyValue")
connect1615.setProtoField("vc1_keyValue")

IS1613.addConnect(connect1615)
connect1616 = x3d.connect()
connect1616.setNodeField("value_changed")
connect1616.setProtoField("vc1_changed")

IS1613.addConnect(connect1616)

OrientationInterpolator1612.setIS(IS1613)

ProtoBody603.addChildren(OrientationInterpolator1612)
ROUTE1617 = x3d.ROUTE()
ROUTE1617.setFromField("fraction_changed")
ROUTE1617.setFromNode("BehaviorClock")
ROUTE1617.setToField("set_fraction")
ROUTE1617.setToNode("vc1_OI")

ProtoBody603.addChildren(ROUTE1617)
OrientationInterpolator1618 = x3d.OrientationInterpolator()
OrientationInterpolator1618.setDEF("vc2_OI")
IS1619 = x3d.IS()
connect1620 = x3d.connect()
connect1620.setNodeField("key")
connect1620.setProtoField("vc2_key")

IS1619.addConnect(connect1620)
connect1621 = x3d.connect()
connect1621.setNodeField("keyValue")
connect1621.setProtoField("vc2_keyValue")

IS1619.addConnect(connect1621)
connect1622 = x3d.connect()
connect1622.setNodeField("value_changed")
connect1622.setProtoField("vc2_changed")

IS1619.addConnect(connect1622)

OrientationInterpolator1618.setIS(IS1619)

ProtoBody603.addChildren(OrientationInterpolator1618)
ROUTE1623 = x3d.ROUTE()
ROUTE1623.setFromField("fraction_changed")
ROUTE1623.setFromNode("BehaviorClock")
ROUTE1623.setToField("set_fraction")
ROUTE1623.setToNode("vc2_OI")

ProtoBody603.addChildren(ROUTE1623)
OrientationInterpolator1624 = x3d.OrientationInterpolator()
OrientationInterpolator1624.setDEF("vc3_OI")
IS1625 = x3d.IS()
connect1626 = x3d.connect()
connect1626.setNodeField("key")
connect1626.setProtoField("vc3_key")

IS1625.addConnect(connect1626)
connect1627 = x3d.connect()
connect1627.setNodeField("keyValue")
connect1627.setProtoField("vc3_keyValue")

IS1625.addConnect(connect1627)
connect1628 = x3d.connect()
connect1628.setNodeField("value_changed")
connect1628.setProtoField("vc3_changed")

IS1625.addConnect(connect1628)

OrientationInterpolator1624.setIS(IS1625)

ProtoBody603.addChildren(OrientationInterpolator1624)
ROUTE1629 = x3d.ROUTE()
ROUTE1629.setFromField("fraction_changed")
ROUTE1629.setFromNode("BehaviorClock")
ROUTE1629.setToField("set_fraction")
ROUTE1629.setToNode("vc3_OI")

ProtoBody603.addChildren(ROUTE1629)
OrientationInterpolator1630 = x3d.OrientationInterpolator()
OrientationInterpolator1630.setDEF("vc4_OI")
IS1631 = x3d.IS()
connect1632 = x3d.connect()
connect1632.setNodeField("key")
connect1632.setProtoField("vc4_key")

IS1631.addConnect(connect1632)
connect1633 = x3d.connect()
connect1633.setNodeField("keyValue")
connect1633.setProtoField("vc4_keyValue")

IS1631.addConnect(connect1633)
connect1634 = x3d.connect()
connect1634.setNodeField("value_changed")
connect1634.setProtoField("vc4_changed")

IS1631.addConnect(connect1634)

OrientationInterpolator1630.setIS(IS1631)

ProtoBody603.addChildren(OrientationInterpolator1630)
ROUTE1635 = x3d.ROUTE()
ROUTE1635.setFromField("fraction_changed")
ROUTE1635.setFromNode("BehaviorClock")
ROUTE1635.setToField("set_fraction")
ROUTE1635.setToNode("vc4_OI")

ProtoBody603.addChildren(ROUTE1635)
OrientationInterpolator1636 = x3d.OrientationInterpolator()
OrientationInterpolator1636.setDEF("vc5_OI")
IS1637 = x3d.IS()
connect1638 = x3d.connect()
connect1638.setNodeField("key")
connect1638.setProtoField("vc5_key")

IS1637.addConnect(connect1638)
connect1639 = x3d.connect()
connect1639.setNodeField("keyValue")
connect1639.setProtoField("vc5_keyValue")

IS1637.addConnect(connect1639)
connect1640 = x3d.connect()
connect1640.setNodeField("value_changed")
connect1640.setProtoField("vc5_changed")

IS1637.addConnect(connect1640)

OrientationInterpolator1636.setIS(IS1637)

ProtoBody603.addChildren(OrientationInterpolator1636)
ROUTE1641 = x3d.ROUTE()
ROUTE1641.setFromField("fraction_changed")
ROUTE1641.setFromNode("BehaviorClock")
ROUTE1641.setToField("set_fraction")
ROUTE1641.setToNode("vc5_OI")

ProtoBody603.addChildren(ROUTE1641)
OrientationInterpolator1642 = x3d.OrientationInterpolator()
OrientationInterpolator1642.setDEF("vc6_OI")
IS1643 = x3d.IS()
connect1644 = x3d.connect()
connect1644.setNodeField("key")
connect1644.setProtoField("vc6_key")

IS1643.addConnect(connect1644)
connect1645 = x3d.connect()
connect1645.setNodeField("keyValue")
connect1645.setProtoField("vc6_keyValue")

IS1643.addConnect(connect1645)
connect1646 = x3d.connect()
connect1646.setNodeField("value_changed")
connect1646.setProtoField("vc6_changed")

IS1643.addConnect(connect1646)

OrientationInterpolator1642.setIS(IS1643)

ProtoBody603.addChildren(OrientationInterpolator1642)
ROUTE1647 = x3d.ROUTE()
ROUTE1647.setFromField("fraction_changed")
ROUTE1647.setFromNode("BehaviorClock")
ROUTE1647.setToField("set_fraction")
ROUTE1647.setToNode("vc6_OI")

ProtoBody603.addChildren(ROUTE1647)
OrientationInterpolator1648 = x3d.OrientationInterpolator()
OrientationInterpolator1648.setDEF("vc7_OI")
IS1649 = x3d.IS()
connect1650 = x3d.connect()
connect1650.setNodeField("key")
connect1650.setProtoField("vc7_key")

IS1649.addConnect(connect1650)
connect1651 = x3d.connect()
connect1651.setNodeField("keyValue")
connect1651.setProtoField("vc7_keyValue")

IS1649.addConnect(connect1651)
connect1652 = x3d.connect()
connect1652.setNodeField("value_changed")
connect1652.setProtoField("vc7_changed")

IS1649.addConnect(connect1652)

OrientationInterpolator1648.setIS(IS1649)

ProtoBody603.addChildren(OrientationInterpolator1648)
ROUTE1653 = x3d.ROUTE()
ROUTE1653.setFromField("fraction_changed")
ROUTE1653.setFromNode("BehaviorClock")
ROUTE1653.setToField("set_fraction")
ROUTE1653.setToNode("vc7_OI")

ProtoBody603.addChildren(ROUTE1653)
OrientationInterpolator1654 = x3d.OrientationInterpolator()
OrientationInterpolator1654.setDEF("vl1_OI")
IS1655 = x3d.IS()
connect1656 = x3d.connect()
connect1656.setNodeField("key")
connect1656.setProtoField("vl1_key")

IS1655.addConnect(connect1656)
connect1657 = x3d.connect()
connect1657.setNodeField("keyValue")
connect1657.setProtoField("vl1_keyValue")

IS1655.addConnect(connect1657)
connect1658 = x3d.connect()
connect1658.setNodeField("value_changed")
connect1658.setProtoField("vl1_changed")

IS1655.addConnect(connect1658)

OrientationInterpolator1654.setIS(IS1655)

ProtoBody603.addChildren(OrientationInterpolator1654)
ROUTE1659 = x3d.ROUTE()
ROUTE1659.setFromField("fraction_changed")
ROUTE1659.setFromNode("BehaviorClock")
ROUTE1659.setToField("set_fraction")
ROUTE1659.setToNode("vl1_OI")

ProtoBody603.addChildren(ROUTE1659)
OrientationInterpolator1660 = x3d.OrientationInterpolator()
OrientationInterpolator1660.setDEF("vl2_OI")
IS1661 = x3d.IS()
connect1662 = x3d.connect()
connect1662.setNodeField("key")
connect1662.setProtoField("vl2_key")

IS1661.addConnect(connect1662)
connect1663 = x3d.connect()
connect1663.setNodeField("keyValue")
connect1663.setProtoField("vl2_keyValue")

IS1661.addConnect(connect1663)
connect1664 = x3d.connect()
connect1664.setNodeField("value_changed")
connect1664.setProtoField("vl2_changed")

IS1661.addConnect(connect1664)

OrientationInterpolator1660.setIS(IS1661)

ProtoBody603.addChildren(OrientationInterpolator1660)
ROUTE1665 = x3d.ROUTE()
ROUTE1665.setFromField("fraction_changed")
ROUTE1665.setFromNode("BehaviorClock")
ROUTE1665.setToField("set_fraction")
ROUTE1665.setToNode("vl2_OI")

ProtoBody603.addChildren(ROUTE1665)
OrientationInterpolator1666 = x3d.OrientationInterpolator()
OrientationInterpolator1666.setDEF("vl3_OI")
IS1667 = x3d.IS()
connect1668 = x3d.connect()
connect1668.setNodeField("key")
connect1668.setProtoField("vl3_key")

IS1667.addConnect(connect1668)
connect1669 = x3d.connect()
connect1669.setNodeField("keyValue")
connect1669.setProtoField("vl3_keyValue")

IS1667.addConnect(connect1669)
connect1670 = x3d.connect()
connect1670.setNodeField("value_changed")
connect1670.setProtoField("vl3_changed")

IS1667.addConnect(connect1670)

OrientationInterpolator1666.setIS(IS1667)

ProtoBody603.addChildren(OrientationInterpolator1666)
ROUTE1671 = x3d.ROUTE()
ROUTE1671.setFromField("fraction_changed")
ROUTE1671.setFromNode("BehaviorClock")
ROUTE1671.setToField("set_fraction")
ROUTE1671.setToNode("vl3_OI")

ProtoBody603.addChildren(ROUTE1671)
OrientationInterpolator1672 = x3d.OrientationInterpolator()
OrientationInterpolator1672.setDEF("vl4_OI")
IS1673 = x3d.IS()
connect1674 = x3d.connect()
connect1674.setNodeField("key")
connect1674.setProtoField("vl4_key")

IS1673.addConnect(connect1674)
connect1675 = x3d.connect()
connect1675.setNodeField("keyValue")
connect1675.setProtoField("vl4_keyValue")

IS1673.addConnect(connect1675)
connect1676 = x3d.connect()
connect1676.setNodeField("value_changed")
connect1676.setProtoField("vl4_changed")

IS1673.addConnect(connect1676)

OrientationInterpolator1672.setIS(IS1673)

ProtoBody603.addChildren(OrientationInterpolator1672)
ROUTE1677 = x3d.ROUTE()
ROUTE1677.setFromField("fraction_changed")
ROUTE1677.setFromNode("BehaviorClock")
ROUTE1677.setToField("set_fraction")
ROUTE1677.setToNode("vl4_OI")

ProtoBody603.addChildren(ROUTE1677)
OrientationInterpolator1678 = x3d.OrientationInterpolator()
OrientationInterpolator1678.setDEF("vl5_OI")
IS1679 = x3d.IS()
connect1680 = x3d.connect()
connect1680.setNodeField("key")
connect1680.setProtoField("vl5_key")

IS1679.addConnect(connect1680)
connect1681 = x3d.connect()
connect1681.setNodeField("keyValue")
connect1681.setProtoField("vl5_keyValue")

IS1679.addConnect(connect1681)
connect1682 = x3d.connect()
connect1682.setNodeField("value_changed")
connect1682.setProtoField("vl5_changed")

IS1679.addConnect(connect1682)

OrientationInterpolator1678.setIS(IS1679)

ProtoBody603.addChildren(OrientationInterpolator1678)
ROUTE1683 = x3d.ROUTE()
ROUTE1683.setFromField("fraction_changed")
ROUTE1683.setFromNode("BehaviorClock")
ROUTE1683.setToField("set_fraction")
ROUTE1683.setToNode("vl5_OI")

ProtoBody603.addChildren(ROUTE1683)
OrientationInterpolator1684 = x3d.OrientationInterpolator()
OrientationInterpolator1684.setDEF("vt1_OI")
IS1685 = x3d.IS()
connect1686 = x3d.connect()
connect1686.setNodeField("key")
connect1686.setProtoField("vt1_key")

IS1685.addConnect(connect1686)
connect1687 = x3d.connect()
connect1687.setNodeField("keyValue")
connect1687.setProtoField("vt1_keyValue")

IS1685.addConnect(connect1687)
connect1688 = x3d.connect()
connect1688.setNodeField("value_changed")
connect1688.setProtoField("vt1_changed")

IS1685.addConnect(connect1688)

OrientationInterpolator1684.setIS(IS1685)

ProtoBody603.addChildren(OrientationInterpolator1684)
ROUTE1689 = x3d.ROUTE()
ROUTE1689.setFromField("fraction_changed")
ROUTE1689.setFromNode("BehaviorClock")
ROUTE1689.setToField("set_fraction")
ROUTE1689.setToNode("vt1_OI")

ProtoBody603.addChildren(ROUTE1689)
OrientationInterpolator1690 = x3d.OrientationInterpolator()
OrientationInterpolator1690.setDEF("vt2_OI")
IS1691 = x3d.IS()
connect1692 = x3d.connect()
connect1692.setNodeField("key")
connect1692.setProtoField("vt2_key")

IS1691.addConnect(connect1692)
connect1693 = x3d.connect()
connect1693.setNodeField("keyValue")
connect1693.setProtoField("vt2_keyValue")

IS1691.addConnect(connect1693)
connect1694 = x3d.connect()
connect1694.setNodeField("value_changed")
connect1694.setProtoField("vt2_changed")

IS1691.addConnect(connect1694)

OrientationInterpolator1690.setIS(IS1691)

ProtoBody603.addChildren(OrientationInterpolator1690)
ROUTE1695 = x3d.ROUTE()
ROUTE1695.setFromField("fraction_changed")
ROUTE1695.setFromNode("BehaviorClock")
ROUTE1695.setToField("set_fraction")
ROUTE1695.setToNode("vt2_OI")

ProtoBody603.addChildren(ROUTE1695)
OrientationInterpolator1696 = x3d.OrientationInterpolator()
OrientationInterpolator1696.setDEF("vt3_OI")
IS1697 = x3d.IS()
connect1698 = x3d.connect()
connect1698.setNodeField("key")
connect1698.setProtoField("vt3_key")

IS1697.addConnect(connect1698)
connect1699 = x3d.connect()
connect1699.setNodeField("keyValue")
connect1699.setProtoField("vt3_keyValue")

IS1697.addConnect(connect1699)
connect1700 = x3d.connect()
connect1700.setNodeField("value_changed")
connect1700.setProtoField("vt3_changed")

IS1697.addConnect(connect1700)

OrientationInterpolator1696.setIS(IS1697)

ProtoBody603.addChildren(OrientationInterpolator1696)
ROUTE1701 = x3d.ROUTE()
ROUTE1701.setFromField("fraction_changed")
ROUTE1701.setFromNode("BehaviorClock")
ROUTE1701.setToField("set_fraction")
ROUTE1701.setToNode("vt3_OI")

ProtoBody603.addChildren(ROUTE1701)
OrientationInterpolator1702 = x3d.OrientationInterpolator()
OrientationInterpolator1702.setDEF("vt4_OI")
IS1703 = x3d.IS()
connect1704 = x3d.connect()
connect1704.setNodeField("key")
connect1704.setProtoField("vt4_key")

IS1703.addConnect(connect1704)
connect1705 = x3d.connect()
connect1705.setNodeField("keyValue")
connect1705.setProtoField("vt4_keyValue")

IS1703.addConnect(connect1705)
connect1706 = x3d.connect()
connect1706.setNodeField("value_changed")
connect1706.setProtoField("vt4_changed")

IS1703.addConnect(connect1706)

OrientationInterpolator1702.setIS(IS1703)

ProtoBody603.addChildren(OrientationInterpolator1702)
ROUTE1707 = x3d.ROUTE()
ROUTE1707.setFromField("fraction_changed")
ROUTE1707.setFromNode("BehaviorClock")
ROUTE1707.setToField("set_fraction")
ROUTE1707.setToNode("vt4_OI")

ProtoBody603.addChildren(ROUTE1707)
OrientationInterpolator1708 = x3d.OrientationInterpolator()
OrientationInterpolator1708.setDEF("vt5_OI")
IS1709 = x3d.IS()
connect1710 = x3d.connect()
connect1710.setNodeField("key")
connect1710.setProtoField("vt5_key")

IS1709.addConnect(connect1710)
connect1711 = x3d.connect()
connect1711.setNodeField("keyValue")
connect1711.setProtoField("vt5_keyValue")

IS1709.addConnect(connect1711)
connect1712 = x3d.connect()
connect1712.setNodeField("value_changed")
connect1712.setProtoField("vt5_changed")

IS1709.addConnect(connect1712)

OrientationInterpolator1708.setIS(IS1709)

ProtoBody603.addChildren(OrientationInterpolator1708)
ROUTE1713 = x3d.ROUTE()
ROUTE1713.setFromField("fraction_changed")
ROUTE1713.setFromNode("BehaviorClock")
ROUTE1713.setToField("set_fraction")
ROUTE1713.setToNode("vt5_OI")

ProtoBody603.addChildren(ROUTE1713)
OrientationInterpolator1714 = x3d.OrientationInterpolator()
OrientationInterpolator1714.setDEF("vt6_OI")
IS1715 = x3d.IS()
connect1716 = x3d.connect()
connect1716.setNodeField("key")
connect1716.setProtoField("vt6_key")

IS1715.addConnect(connect1716)
connect1717 = x3d.connect()
connect1717.setNodeField("keyValue")
connect1717.setProtoField("vt6_keyValue")

IS1715.addConnect(connect1717)
connect1718 = x3d.connect()
connect1718.setNodeField("value_changed")
connect1718.setProtoField("vt6_changed")

IS1715.addConnect(connect1718)

OrientationInterpolator1714.setIS(IS1715)

ProtoBody603.addChildren(OrientationInterpolator1714)
ROUTE1719 = x3d.ROUTE()
ROUTE1719.setFromField("fraction_changed")
ROUTE1719.setFromNode("BehaviorClock")
ROUTE1719.setToField("set_fraction")
ROUTE1719.setToNode("vt6_OI")

ProtoBody603.addChildren(ROUTE1719)
OrientationInterpolator1720 = x3d.OrientationInterpolator()
OrientationInterpolator1720.setDEF("vt7_OI")
IS1721 = x3d.IS()
connect1722 = x3d.connect()
connect1722.setNodeField("key")
connect1722.setProtoField("vt7_key")

IS1721.addConnect(connect1722)
connect1723 = x3d.connect()
connect1723.setNodeField("keyValue")
connect1723.setProtoField("vt7_keyValue")

IS1721.addConnect(connect1723)
connect1724 = x3d.connect()
connect1724.setNodeField("value_changed")
connect1724.setProtoField("vt7_changed")

IS1721.addConnect(connect1724)

OrientationInterpolator1720.setIS(IS1721)

ProtoBody603.addChildren(OrientationInterpolator1720)
ROUTE1725 = x3d.ROUTE()
ROUTE1725.setFromField("fraction_changed")
ROUTE1725.setFromNode("BehaviorClock")
ROUTE1725.setToField("set_fraction")
ROUTE1725.setToNode("vt7_OI")

ProtoBody603.addChildren(ROUTE1725)
OrientationInterpolator1726 = x3d.OrientationInterpolator()
OrientationInterpolator1726.setDEF("vt8_OI")
IS1727 = x3d.IS()
connect1728 = x3d.connect()
connect1728.setNodeField("key")
connect1728.setProtoField("vt8_key")

IS1727.addConnect(connect1728)
connect1729 = x3d.connect()
connect1729.setNodeField("keyValue")
connect1729.setProtoField("vt8_keyValue")

IS1727.addConnect(connect1729)
connect1730 = x3d.connect()
connect1730.setNodeField("value_changed")
connect1730.setProtoField("vt8_changed")

IS1727.addConnect(connect1730)

OrientationInterpolator1726.setIS(IS1727)

ProtoBody603.addChildren(OrientationInterpolator1726)
ROUTE1731 = x3d.ROUTE()
ROUTE1731.setFromField("fraction_changed")
ROUTE1731.setFromNode("BehaviorClock")
ROUTE1731.setToField("set_fraction")
ROUTE1731.setToNode("vt8_OI")

ProtoBody603.addChildren(ROUTE1731)
OrientationInterpolator1732 = x3d.OrientationInterpolator()
OrientationInterpolator1732.setDEF("vt9_OI")
IS1733 = x3d.IS()
connect1734 = x3d.connect()
connect1734.setNodeField("key")
connect1734.setProtoField("vt9_key")

IS1733.addConnect(connect1734)
connect1735 = x3d.connect()
connect1735.setNodeField("keyValue")
connect1735.setProtoField("vt9_keyValue")

IS1733.addConnect(connect1735)
connect1736 = x3d.connect()
connect1736.setNodeField("value_changed")
connect1736.setProtoField("vt9_changed")

IS1733.addConnect(connect1736)

OrientationInterpolator1732.setIS(IS1733)

ProtoBody603.addChildren(OrientationInterpolator1732)
ROUTE1737 = x3d.ROUTE()
ROUTE1737.setFromField("fraction_changed")
ROUTE1737.setFromNode("BehaviorClock")
ROUTE1737.setToField("set_fraction")
ROUTE1737.setToNode("vt9_OI")

ProtoBody603.addChildren(ROUTE1737)
OrientationInterpolator1738 = x3d.OrientationInterpolator()
OrientationInterpolator1738.setDEF("vt10_OI")
IS1739 = x3d.IS()
connect1740 = x3d.connect()
connect1740.setNodeField("key")
connect1740.setProtoField("vt10_key")

IS1739.addConnect(connect1740)
connect1741 = x3d.connect()
connect1741.setNodeField("keyValue")
connect1741.setProtoField("vt10_keyValue")

IS1739.addConnect(connect1741)
connect1742 = x3d.connect()
connect1742.setNodeField("value_changed")
connect1742.setProtoField("vt10_changed")

IS1739.addConnect(connect1742)

OrientationInterpolator1738.setIS(IS1739)

ProtoBody603.addChildren(OrientationInterpolator1738)
ROUTE1743 = x3d.ROUTE()
ROUTE1743.setFromField("fraction_changed")
ROUTE1743.setFromNode("BehaviorClock")
ROUTE1743.setToField("set_fraction")
ROUTE1743.setToNode("vt10_OI")

ProtoBody603.addChildren(ROUTE1743)
OrientationInterpolator1744 = x3d.OrientationInterpolator()
OrientationInterpolator1744.setDEF("vt11_OI")
IS1745 = x3d.IS()
connect1746 = x3d.connect()
connect1746.setNodeField("key")
connect1746.setProtoField("vt11_key")

IS1745.addConnect(connect1746)
connect1747 = x3d.connect()
connect1747.setNodeField("keyValue")
connect1747.setProtoField("vt11_keyValue")

IS1745.addConnect(connect1747)
connect1748 = x3d.connect()
connect1748.setNodeField("value_changed")
connect1748.setProtoField("vt11_changed")

IS1745.addConnect(connect1748)

OrientationInterpolator1744.setIS(IS1745)

ProtoBody603.addChildren(OrientationInterpolator1744)
ROUTE1749 = x3d.ROUTE()
ROUTE1749.setFromField("fraction_changed")
ROUTE1749.setFromNode("BehaviorClock")
ROUTE1749.setToField("set_fraction")
ROUTE1749.setToNode("vt11_OI")

ProtoBody603.addChildren(ROUTE1749)
OrientationInterpolator1750 = x3d.OrientationInterpolator()
OrientationInterpolator1750.setDEF("vt12_OI")
IS1751 = x3d.IS()
connect1752 = x3d.connect()
connect1752.setNodeField("key")
connect1752.setProtoField("vt12_key")

IS1751.addConnect(connect1752)
connect1753 = x3d.connect()
connect1753.setNodeField("keyValue")
connect1753.setProtoField("vt12_keyValue")

IS1751.addConnect(connect1753)
connect1754 = x3d.connect()
connect1754.setNodeField("value_changed")
connect1754.setProtoField("vt12_changed")

IS1751.addConnect(connect1754)

OrientationInterpolator1750.setIS(IS1751)

ProtoBody603.addChildren(OrientationInterpolator1750)
ROUTE1755 = x3d.ROUTE()
ROUTE1755.setFromField("fraction_changed")
ROUTE1755.setFromNode("BehaviorClock")
ROUTE1755.setToField("set_fraction")
ROUTE1755.setToNode("vt12_OI")

ProtoBody603.addChildren(ROUTE1755)

ProtoDeclare20.setProtoBody(ProtoBody603)

Scene18.addChildren(ProtoDeclare20)
ProtoDeclare1756 = x3d.ProtoDeclare()
ProtoDeclare1756.setName("HAnimBodyBehaviorChooser")
ProtoDeclare1756.setAppinfo("The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time.")
ProtoInterface1757 = x3d.ProtoInterface()
#TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs
#accessType=\"inputOutput\" avoided to maintain backwards compatilibility with VRML97 scripting constraints
#shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs
#TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName
#TODO: consider addBody, removeBody, addBehavior, removeBehavior
#TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName
field1758 = x3d.field()
field1758.setName("supportedLOA")
field1758.setAccessType("inputOutput")
field1758.setAppinfo("Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.")
field1758.setType("SFInt32")
field1758.setValue("-1")

ProtoInterface1757.addField(field1758)
field1759 = x3d.field()
field1759.setName("HumanoidArray")
field1759.setAccessType("initializeOnly")
field1759.setAppinfo("[HAnimHumanoid] nodes only")
field1759.setType("MFNode")
#default NULL

ProtoInterface1757.addField(field1759)
field1760 = x3d.field()
field1760.setName("whichBody")
field1760.setAccessType("initializeOnly")
field1760.setAppinfo("whichBody is selected default is initial member of HumanoidArray")
field1760.setType("SFInt32")
field1760.setValue("-1")

ProtoInterface1757.addField(field1760)
field1761 = x3d.field()
field1761.setName("set_whichBody")
field1761.setAccessType("inputOnly")
field1761.setAppinfo("whichBody is selected default is none")
field1761.setType("SFInt32")

ProtoInterface1757.addField(field1761)
field1762 = x3d.field()
field1762.setName("whichBody_changed")
field1762.setAccessType("outputOnly")
field1762.setAppinfo("whichBody is selected default is none")
field1762.setType("SFInt32")

ProtoInterface1757.addField(field1762)
field1763 = x3d.field()
field1763.setName("hAnimBehaviorNodes")
field1763.setAccessType("initializeOnly")
field1763.setAppinfo("[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time.")
field1763.setType("MFNode")
#default NULL

ProtoInterface1757.addField(field1763)
field1764 = x3d.field()
field1764.setName("enabledBehaviorsArray")
field1764.setAccessType("initializeOnly")
field1764.setAppinfo("indicate which HAnimBehavior nodes are activated, empty indicates all enabled true")
field1764.setType("MFBool")
#no default values

ProtoInterface1757.addField(field1764)
field1765 = x3d.field()
field1765.setName("enableBehavior")
field1765.setAccessType("inputOnly")
field1765.setAppinfo("enable corresponding behavior identified by index number")
field1765.setType("SFInt32")

ProtoInterface1757.addField(field1765)
field1766 = x3d.field()
field1766.setName("disableBehavior")
field1766.setAccessType("inputOnly")
field1766.setAppinfo("disable corresponding behavior identified by index number")
field1766.setType("SFInt32")

ProtoInterface1757.addField(field1766)
field1767 = x3d.field()
field1767.setName("startTime")
field1767.setAccessType("inputOutput")
field1767.setType("SFTime")
field1767.setValue("0")

ProtoInterface1757.addField(field1767)
field1768 = x3d.field()
field1768.setName("stopTime")
field1768.setAccessType("inputOutput")
field1768.setType("SFTime")
field1768.setValue("0")

ProtoInterface1757.addField(field1768)

ProtoDeclare1756.setProtoInterface(ProtoInterface1757)
ProtoBody1769 = x3d.ProtoBody()
Switch1770 = x3d.Switch()
Switch1770.setDEF("BodySwitch")
Switch1770.setWhichChoice(-1)
IS1771 = x3d.IS()
connect1772 = x3d.connect()
connect1772.setNodeField("whichChoice")
connect1772.setProtoField("whichBody")

IS1771.addConnect(connect1772)
connect1773 = x3d.connect()
connect1773.setNodeField("children")
connect1773.setProtoField("HumanoidArray")

IS1771.addConnect(connect1773)

Switch1770.setIS(IS1771)

ProtoBody1769.addChildren(Switch1770)
#note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless
Group1774 = x3d.Group()
Group1774.setDEF("BehaviorArrayHolder")
IS1775 = x3d.IS()
connect1776 = x3d.connect()
connect1776.setNodeField("children")
connect1776.setProtoField("hAnimBehaviorNodes")

IS1775.addConnect(connect1776)

Group1774.setIS(IS1775)

ProtoBody1769.addChildren(Group1774)
TimeSensor1777 = x3d.TimeSensor()
TimeSensor1777.setDEF("TimeSensorHolderStartStopTimes")
IS1778 = x3d.IS()
connect1779 = x3d.connect()
connect1779.setNodeField("startTime")
connect1779.setProtoField("startTime")

IS1778.addConnect(connect1779)
connect1780 = x3d.connect()
connect1780.setNodeField("stopTime")
connect1780.setProtoField("stopTime")

IS1778.addConnect(connect1780)

TimeSensor1777.setIS(IS1778)

ProtoBody1769.addChildren(TimeSensor1777)
Switch1781 = x3d.Switch()
Switch1781.setDEF("SupportedLoaHolder2")
Switch1781.setWhichChoice(-1)
IS1782 = x3d.IS()
connect1783 = x3d.connect()
connect1783.setNodeField("whichChoice")
connect1783.setProtoField("supportedLOA")

IS1782.addConnect(connect1783)

Switch1781.setIS(IS1782)

ProtoBody1769.addChildren(Switch1781)
Script1784 = x3d.Script()
Script1784.setDEF("BehaviorSelectionScript")
Script1784.setDirectOutput(True)
Script1784.setUrl(["HAnimBehaviorPrototypesScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js"])
field1785 = x3d.field()
field1785.setName("HumanoidArray")
field1785.setAccessType("initializeOnly")
field1785.setAppinfo("[HAnimHumanoid] nodes only")
field1785.setType("MFNode")

Script1784.addField(field1785)
field1786 = x3d.field()
field1786.setName("whichBody")
field1786.setAccessType("initializeOnly")
field1786.setAppinfo("whichBody is selected default is none")
field1786.setType("SFInt32")

Script1784.addField(field1786)
field1787 = x3d.field()
field1787.setName("set_whichBody")
field1787.setAccessType("inputOnly")
field1787.setAppinfo("whichBody is selected default is none")
field1787.setType("SFInt32")

Script1784.addField(field1787)
field1788 = x3d.field()
field1788.setName("whichBody_changed")
field1788.setAccessType("outputOnly")
field1788.setAppinfo("whichBody is selected default is none")
field1788.setType("SFInt32")

Script1784.addField(field1788)
field1789 = x3d.field()
field1789.setName("hAnimBehaviorNodes")
field1789.setAccessType("initializeOnly")
field1789.setAppinfo("[HAnimBehavior] nodes only")
field1789.setType("MFNode")
#TODO: might consider accessType=\"inputOutput\" if VRML97 compatibility not needed

Script1784.addField(field1789)
field1790 = x3d.field()
field1790.setName("enabledBehaviorsArray")
field1790.setAccessType("initializeOnly")
field1790.setType("MFBool")

Script1784.addField(field1790)
field1791 = x3d.field()
field1791.setName("enableBehavior")
field1791.setAccessType("inputOnly")
field1791.setAppinfo("enable corresponding behavior")
field1791.setType("SFInt32")

Script1784.addField(field1791)
field1792 = x3d.field()
field1792.setName("disableBehavior")
field1792.setAccessType("inputOnly")
field1792.setAppinfo("enable corresponding behavior")
field1792.setType("SFInt32")

Script1784.addField(field1792)
field1793 = x3d.field()
field1793.setName("timeSensorNode")
field1793.setAccessType("initializeOnly")
field1793.setType("SFNode")
TimeSensor1794 = x3d.TimeSensor()
TimeSensor1794.setUSE("TimeSensorHolderStartStopTimes")

field1793.addChildren(TimeSensor1794)

Script1784.addField(field1793)
field1795 = x3d.field()
field1795.setName("previousBodyIndex")
field1795.setAccessType("initializeOnly")
field1795.setAppinfo("remember prior body index to avoid unnecessary ROUTE teardown and creation")
field1795.setType("SFInt32")
field1795.setValue("-1")

Script1784.addField(field1795)
field1796 = x3d.field()
field1796.setName("traceEnabled")
field1796.setAccessType("initializeOnly")
field1796.setType("SFBool")
field1796.setValue("true")

Script1784.addField(field1796)
IS1797 = x3d.IS()
connect1798 = x3d.connect()
connect1798.setNodeField("HumanoidArray")
connect1798.setProtoField("HumanoidArray")

IS1797.addConnect(connect1798)
connect1799 = x3d.connect()
connect1799.setNodeField("whichBody")
connect1799.setProtoField("whichBody")

IS1797.addConnect(connect1799)
connect1800 = x3d.connect()
connect1800.setNodeField("set_whichBody")
connect1800.setProtoField("set_whichBody")

IS1797.addConnect(connect1800)
connect1801 = x3d.connect()
connect1801.setNodeField("whichBody_changed")
connect1801.setProtoField("whichBody_changed")

IS1797.addConnect(connect1801)
connect1802 = x3d.connect()
connect1802.setNodeField("hAnimBehaviorNodes")
connect1802.setProtoField("hAnimBehaviorNodes")

IS1797.addConnect(connect1802)
connect1803 = x3d.connect()
connect1803.setNodeField("enabledBehaviorsArray")
connect1803.setProtoField("enabledBehaviorsArray")

IS1797.addConnect(connect1803)
connect1804 = x3d.connect()
connect1804.setNodeField("enableBehavior")
connect1804.setProtoField("enableBehavior")

IS1797.addConnect(connect1804)
connect1805 = x3d.connect()
connect1805.setNodeField("disableBehavior")
connect1805.setProtoField("disableBehavior")

IS1797.addConnect(connect1805)

Script1784.setIS(IS1797)

ProtoBody1769.addChildren(Script1784)

ProtoDeclare1756.setProtoBody(ProtoBody1769)

Scene18.addChildren(ProtoDeclare1756)
#TODO: Goal is to have 3 different ways to present a body: local creation, Inline with IMPORT/EXPORT, or external prototype.
ProtoInstance1806 = x3d.ProtoInstance()
ProtoInstance1806.setName("HAnimBehavior")
ProtoInstance1806.setDEF("BehaviorTest1")
#only one PositionInterpolator key/keyValue definition for entire humanoid - optional
#must have paired overrides of each key/keyValue array being defined
fieldValue1807 = x3d.fieldValue()
fieldValue1807.setName("HumanoidRoot_translation_key")
fieldValue1807.setValue("0 0.25 0.5 0.75 1")

ProtoInstance1806.addFieldValue(fieldValue1807)
fieldValue1808 = x3d.fieldValue()
fieldValue1808.setName("HumanoidRoot_translation_keyValue")
fieldValue1808.setValue("0 0 0 0 0 10 0 0 20 0 0 30 0 0 40 0 0 50")

ProtoInstance1806.addFieldValue(fieldValue1808)
fieldValue1809 = x3d.fieldValue()
fieldValue1809.setName("r_ankle_key")
fieldValue1809.setValue("0 0.5 1")

ProtoInstance1806.addFieldValue(fieldValue1809)
fieldValue1810 = x3d.fieldValue()
fieldValue1810.setName("r_ankle_keyValue")
fieldValue1810.setValue("0 1 0 0 0 1 0 0.2 0 1 0 0.4")

ProtoInstance1806.addFieldValue(fieldValue1810)

Scene18.addChildren(ProtoInstance1806)
ProtoInstance1811 = x3d.ProtoInstance()
ProtoInstance1811.setName("HAnimBodyBehaviorChooser")
ProtoInstance1811.setDEF("ChooserTest")
fieldValue1812 = x3d.fieldValue()
fieldValue1812.setName("HumanoidArray")
HAnimHumanoid1813 = x3d.HAnimHumanoid()
HAnimHumanoid1813.setName("DiamondManLOA-1")
HAnimHumanoid1813.setDEF("hanim_DiamondManLOA-1")
HAnimHumanoid1813.setVersion("2.0")

fieldValue1812.addChildren(HAnimHumanoid1813)

ProtoInstance1811.addFieldValue(fieldValue1812)
fieldValue1814 = x3d.fieldValue()
fieldValue1814.setName("whichBody")
fieldValue1814.setValue("0")

ProtoInstance1811.addFieldValue(fieldValue1814)
fieldValue1815 = x3d.fieldValue()
fieldValue1815.setName("hAnimBehaviorNodes")
ProtoInstance1816 = x3d.ProtoInstance()
ProtoInstance1816.setUSE("BehaviorTest1")

fieldValue1815.addChildren(ProtoInstance1816)

ProtoInstance1811.addFieldValue(fieldValue1815)
fieldValue1817 = x3d.fieldValue()
fieldValue1817.setName("enabledBehaviorsArray")
fieldValue1817.setValue("true")

ProtoInstance1811.addFieldValue(fieldValue1817)

Scene18.addChildren(ProtoInstance1811)

X3D0.setScene(Scene18)
X3D0.toFileX3D("../data/HAnimBehaviorPrototypes.new.python.x3d")
X3D0.toFileJSON("../data/HAnimBehaviorPrototypes.new.python.json")
