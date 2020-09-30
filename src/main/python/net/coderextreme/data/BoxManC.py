import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("H-Anim")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("BoxMan.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("A Seamless VRML Human, demonstrating the H-Anim 2001 Specification. Animation scripting via EcmaScript.")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("James Smith - james@vapourtech.com")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("translator")
meta6.setContent("Don Brutzman and Matt Beitler")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("created")
meta7.setContent("1 March 2001")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("translated")
meta8.setContent("19 October 2001")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("modified")
meta9.setContent("17 November 2014")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("http://h-anim.org")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("boxman.original.wrl")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("TODO")
meta12.setContent("reconcile z-coordinate mismatches using source anthropometry, see source for details")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("http://h-anim.org/Models/H-Anim2001/boxman")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("reference")
meta14.setContent("http://h-anim.org/Models/H-Anim2001/boxman/boxman.wrl")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("reference")
meta15.setContent("http://www.vapourtech.com/team/james/boxman.wrl")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("reference")
meta16.setContent("http://h-anim.org/Specifications/H-Anim2001")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("reference")
meta17.setContent("http://h-anim.org/Models")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("reference")
meta18.setContent("http://h-anim.org/Nodes")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("reference")
meta19.setContent("http://www.web3d.org/x3d/content/X3dToVrml97.xslt")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("rights")
meta20.setContent("(C) 2000 James Smith - james@vapourtech.com")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("reference")
meta21.setContent("http://www.vapourtech.com")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("subject")
meta22.setContent("BoxMan H-Anim 2.0")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("identifier")
meta23.setContent("http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/BoxMan.x3d")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("generator")
meta24.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("license")
meta25.setContent("../license.html")

head1.addMeta(meta25)

X3D0.setHead(head1)
Scene26 = x3d.Scene()
WorldInfo27 = x3d.WorldInfo()
WorldInfo27.setInfo(["(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"])
WorldInfo27.setTitle("BoxMan - A Seamless VRML Human")

Scene26.addChildren(WorldInfo27)
Background28 = x3d.Background()
Background28.setGroundColor([0.6,0.6,0.6])
Background28.setSkyColor([0.75,0.75,0.75])

Scene26.addChildren(Background28)
#H-Anim node prototypes are provided automatically by the X3dToVrml97.xsl translation stylesheet when converting to VRML97 (which didn't include H-Anim)
HAnimHumanoid29 = x3d.HAnimHumanoid()
HAnimHumanoid29.setName("Humanoid")
HAnimHumanoid29.setDEF("HUMANOID")
HAnimHumanoid29.setInfo(["authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=2.0"])
HAnimHumanoid29.setVersion("2.0")
HAnimJoint30 = x3d.HAnimJoint()
HAnimJoint30.setName("HumanoidRoot")
HAnimJoint30.setDEF("hanim_HumanoidRoot")
HAnimJoint30.setCenter([0,0.9723,-0.0728])
HAnimJoint30.setSkinCoordIndex([0,1,2,3,4,5,6,7,8,9,10,11])
HAnimJoint30.setSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1])
HAnimJoint30.setBboxCenter([0,0,0])
HAnimJoint30.setBboxSize([-1,-1,-1])
HAnimSegment31 = x3d.HAnimSegment()
HAnimSegment31.setName("sacrum")
HAnimSegment31.setDEF("hanim_sacrum")
Transform32 = x3d.Transform()
Transform32.setTranslation([0,0.9723,-0.0728])
Transform32.setBboxCenter([0,0,0])
Transform32.setBboxSize([-1,-1,-1])
Shape33 = x3d.Shape()
Shape33.setDEF("SphereYellow")
Shape33.setBboxCenter([0,0,0])
Shape33.setBboxSize([-1,-1,-1])
Appearance34 = x3d.Appearance()
Material35 = x3d.Material()
Material35.setDiffuseColor([1,1,0])

Appearance34.setMaterial(Material35)

Shape33.setAppearance(Appearance34)
Sphere36 = x3d.Sphere()
Sphere36.setRadius(0.02)

Shape33.setGeometry(Sphere36)

Transform32.addChildren(Shape33)

HAnimSegment31.addChildren(Transform32)

HAnimJoint30.addChildren(HAnimSegment31)
HAnimJoint37 = x3d.HAnimJoint()
HAnimJoint37.setName("l_hip")
HAnimJoint37.setDEF("hanim_l_hip")
HAnimJoint37.setCenter([0.0956,0.9364,0])
HAnimJoint37.setSkinCoordIndex([12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43])
HAnimJoint37.setSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5])
HAnimJoint37.setBboxCenter([0,0,0])
HAnimJoint37.setBboxSize([-1,-1,-1])
HAnimSegment38 = x3d.HAnimSegment()
HAnimSegment38.setName("l_thigh")
HAnimSegment38.setDEF("hanim_l_thigh")
#TODO reconcile z-coordinate mismatch using source anthropometry
Transform39 = x3d.Transform()
Transform39.setTranslation([0.0956,0.9346,0])
Transform39.setBboxCenter([0,0,0])
Transform39.setBboxSize([-1,-1,-1])
Shape40 = x3d.Shape()
Shape40.setUSE("SphereYellow")

Transform39.addChildren(Shape40)

HAnimSegment38.addChildren(Transform39)

HAnimJoint37.addChildren(HAnimSegment38)
HAnimJoint41 = x3d.HAnimJoint()
HAnimJoint41.setName("l_knee")
HAnimJoint41.setDEF("hanim_l_knee")
HAnimJoint41.setCenter([0.0956,0.5095,-0.0036])
HAnimJoint41.setSkinCoordIndex([36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63])
HAnimJoint41.setSkinCoordWeight([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1])
HAnimJoint41.setBboxCenter([0,0,0])
HAnimJoint41.setBboxSize([-1,-1,-1])
HAnimSegment42 = x3d.HAnimSegment()
HAnimSegment42.setName("l_calf")
HAnimSegment42.setDEF("hanim_l_calf")
Transform43 = x3d.Transform()
Transform43.setTranslation([0.0956,0.5095,-0.0036])
Transform43.setBboxCenter([0,0,0])
Transform43.setBboxSize([-1,-1,-1])
Shape44 = x3d.Shape()
Shape44.setUSE("SphereYellow")

Transform43.addChildren(Shape44)

HAnimSegment42.addChildren(Transform43)

HAnimJoint41.addChildren(HAnimSegment42)
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.setName("l_ankle")
HAnimJoint45.setDEF("hanim_l_ankle")
HAnimJoint45.setCenter([0.0946,0.0762,-0.0261])
HAnimJoint45.setSkinCoordIndex([64,65,66,67,68,69,70,71])
HAnimJoint45.setSkinCoordWeight([1,1,1,1,1,1,1,1])
HAnimJoint45.setBboxCenter([0,0,0])
HAnimJoint45.setBboxSize([-1,-1,-1])
HAnimSegment46 = x3d.HAnimSegment()
HAnimSegment46.setName("l_hindfoot")
HAnimSegment46.setDEF("hanim_l_hindfoot")
Transform47 = x3d.Transform()
Transform47.setTranslation([0.0946,0.0762,-0.0261])
Transform47.setBboxCenter([0,0,0])
Transform47.setBboxSize([-1,-1,-1])
Shape48 = x3d.Shape()
Shape48.setUSE("SphereYellow")

Transform47.addChildren(Shape48)

HAnimSegment46.addChildren(Transform47)

HAnimJoint45.addChildren(HAnimSegment46)
HAnimJoint49 = x3d.HAnimJoint()
HAnimJoint49.setName("l_midtarsal")
HAnimJoint49.setDEF("hanim_l_midtarsal")
HAnimJoint49.setCenter([0.1079,0.0317,0.067])
HAnimJoint49.setSkinCoordIndex([72,73,74,75,76,77,78,79])
HAnimJoint49.setSkinCoordWeight([1,1,1,1,1,1,1,1])
HAnimJoint49.setBboxCenter([0,0,0])
HAnimJoint49.setBboxSize([-1,-1,-1])
HAnimSegment50 = x3d.HAnimSegment()
HAnimSegment50.setName("l_middistal")
HAnimSegment50.setDEF("hanim_l_middistal")
Transform51 = x3d.Transform()
Transform51.setTranslation([0.1079,0.0317,0.067])
Transform51.setBboxCenter([0,0,0])
Transform51.setBboxSize([-1,-1,-1])
Shape52 = x3d.Shape()
Shape52.setUSE("SphereYellow")

Transform51.addChildren(Shape52)

HAnimSegment50.addChildren(Transform51)
HAnimSite53 = x3d.HAnimSite()
HAnimSite53.setName("l_middle_distal_tip")
HAnimSite53.setDEF("hanim_l_middle_distal_tip")
HAnimSite53.setTranslation([0.095,0.0005,0.1924])
HAnimSite53.setBboxCenter([0,0,0])
HAnimSite53.setBboxSize([-1,-1,-1])

HAnimSegment50.addChildren(HAnimSite53)
Transform54 = x3d.Transform()
Transform54.setTranslation([0.095,0.0005,0.1924])
Transform54.setBboxCenter([0,0,0])
Transform54.setBboxSize([-1,-1,-1])
Shape55 = x3d.Shape()
Shape55.setDEF("SphereRed")
Shape55.setBboxCenter([0,0,0])
Shape55.setBboxSize([-1,-1,-1])
Appearance56 = x3d.Appearance()
Material57 = x3d.Material()
Material57.setDiffuseColor([1,0,0])

Appearance56.setMaterial(Material57)

Shape55.setAppearance(Appearance56)
Sphere58 = x3d.Sphere()
Sphere58.setRadius(0.02)

Shape55.setGeometry(Sphere58)

Transform54.addChildren(Shape55)

HAnimSegment50.addChildren(Transform54)

HAnimJoint49.addChildren(HAnimSegment50)

HAnimJoint45.addChildren(HAnimJoint49)

HAnimJoint41.addChildren(HAnimJoint45)

HAnimJoint37.addChildren(HAnimJoint41)

HAnimJoint30.addChildren(HAnimJoint37)
HAnimJoint59 = x3d.HAnimJoint()
HAnimJoint59.setName("r_hip")
HAnimJoint59.setDEF("hanim_r_hip")
HAnimJoint59.setCenter([-0.0956,0.9364,0])
HAnimJoint59.setSkinCoordIndex([80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111])
HAnimJoint59.setSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5])
HAnimJoint59.setBboxCenter([0,0,0])
HAnimJoint59.setBboxSize([-1,-1,-1])
HAnimSegment60 = x3d.HAnimSegment()
HAnimSegment60.setName("r_thigh")
HAnimSegment60.setDEF("hanim_r_thigh")
#TODO reconcile z-coordinate mismatch using source anthropometry
Transform61 = x3d.Transform()
Transform61.setTranslation([-0.0956,0.9346,0])
Transform61.setBboxCenter([0,0,0])
Transform61.setBboxSize([-1,-1,-1])
Shape62 = x3d.Shape()
Shape62.setUSE("SphereYellow")

Transform61.addChildren(Shape62)

HAnimSegment60.addChildren(Transform61)

HAnimJoint59.addChildren(HAnimSegment60)
HAnimJoint63 = x3d.HAnimJoint()
HAnimJoint63.setName("r_knee")
HAnimJoint63.setDEF("hanim_r_knee")
HAnimJoint63.setCenter([-0.0956,0.5095,-0.0036])
HAnimJoint63.setSkinCoordIndex([104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131])
HAnimJoint63.setSkinCoordWeight([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1])
HAnimJoint63.setBboxCenter([0,0,0])
HAnimJoint63.setBboxSize([-1,-1,-1])
HAnimSegment64 = x3d.HAnimSegment()
HAnimSegment64.setName("r_calf")
HAnimSegment64.setDEF("hanim_r_calf")
Transform65 = x3d.Transform()
Transform65.setTranslation([-0.0956,0.5095,-0.0036])
Transform65.setBboxCenter([0,0,0])
Transform65.setBboxSize([-1,-1,-1])
Shape66 = x3d.Shape()
Shape66.setUSE("SphereYellow")

Transform65.addChildren(Shape66)

HAnimSegment64.addChildren(Transform65)

HAnimJoint63.addChildren(HAnimSegment64)
HAnimJoint67 = x3d.HAnimJoint()
HAnimJoint67.setName("r_ankle")
HAnimJoint67.setDEF("hanim_r_ankle")
HAnimJoint67.setCenter([-0.0946,0.0762,-0.0261])
HAnimJoint67.setSkinCoordIndex([132,133,134,135,136,137,138,139])
HAnimJoint67.setSkinCoordWeight([1,1,1,1,1,1,1,1])
HAnimJoint67.setBboxCenter([0,0,0])
HAnimJoint67.setBboxSize([-1,-1,-1])
HAnimSegment68 = x3d.HAnimSegment()
HAnimSegment68.setName("r_hindfoot")
HAnimSegment68.setDEF("hanim_r_hindfoot")
Transform69 = x3d.Transform()
Transform69.setTranslation([-0.0946,0.0762,-0.0261])
Transform69.setBboxCenter([0,0,0])
Transform69.setBboxSize([-1,-1,-1])
Shape70 = x3d.Shape()
Shape70.setUSE("SphereYellow")

Transform69.addChildren(Shape70)

HAnimSegment68.addChildren(Transform69)

HAnimJoint67.addChildren(HAnimSegment68)
HAnimJoint71 = x3d.HAnimJoint()
HAnimJoint71.setName("r_midtarsal")
HAnimJoint71.setDEF("hanim_r_midtarsal")
HAnimJoint71.setCenter([-0.1079,0.0317,0.067])
HAnimJoint71.setSkinCoordIndex([140,141,142,143,144,145,146,147])
HAnimJoint71.setSkinCoordWeight([1,1,1,1,1,1,1,1])
HAnimJoint71.setBboxCenter([0,0,0])
HAnimJoint71.setBboxSize([-1,-1,-1])
HAnimSegment72 = x3d.HAnimSegment()
HAnimSegment72.setName("r_middistal")
HAnimSegment72.setDEF("hanim_r_middistal")
Transform73 = x3d.Transform()
Transform73.setTranslation([-0.1079,0.0317,0.067])
Transform73.setBboxCenter([0,0,0])
Transform73.setBboxSize([-1,-1,-1])
Shape74 = x3d.Shape()
Shape74.setUSE("SphereYellow")

Transform73.addChildren(Shape74)

HAnimSegment72.addChildren(Transform73)
HAnimSite75 = x3d.HAnimSite()
HAnimSite75.setName("r_middle_distal_tip")
HAnimSite75.setDEF("hanim_r_middle_distal_tip")
HAnimSite75.setTranslation([-0.095,0.0005,0.1924])
HAnimSite75.setBboxCenter([0,0,0])
HAnimSite75.setBboxSize([-1,-1,-1])

HAnimSegment72.addChildren(HAnimSite75)
Transform76 = x3d.Transform()
Transform76.setTranslation([-0.095,0.0005,0.1924])
Transform76.setBboxCenter([0,0,0])
Transform76.setBboxSize([-1,-1,-1])
Shape77 = x3d.Shape()
Shape77.setUSE("SphereRed")

Transform76.addChildren(Shape77)

HAnimSegment72.addChildren(Transform76)

HAnimJoint71.addChildren(HAnimSegment72)

HAnimJoint67.addChildren(HAnimJoint71)

HAnimJoint63.addChildren(HAnimJoint67)

HAnimJoint59.addChildren(HAnimJoint63)

HAnimJoint30.addChildren(HAnimJoint59)
HAnimJoint78 = x3d.HAnimJoint()
HAnimJoint78.setName("vl5")
HAnimJoint78.setDEF("hanim_vl5")
HAnimJoint78.setCenter([0,1.0817,-0.0728])
HAnimJoint78.setSkinCoordIndex([148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167])
HAnimJoint78.setSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1])
HAnimJoint78.setBboxCenter([0,0,0])
HAnimJoint78.setBboxSize([-1,-1,-1])
HAnimSegment79 = x3d.HAnimSegment()
HAnimSegment79.setName("l5")
HAnimSegment79.setDEF("hanim_l5")
Transform80 = x3d.Transform()
Transform80.setTranslation([0,1.0817,-0.0728])
Transform80.setBboxCenter([0,0,0])
Transform80.setBboxSize([-1,-1,-1])
Shape81 = x3d.Shape()
Shape81.setUSE("SphereYellow")

Transform80.addChildren(Shape81)

HAnimSegment79.addChildren(Transform80)

HAnimJoint78.addChildren(HAnimSegment79)
HAnimJoint82 = x3d.HAnimJoint()
HAnimJoint82.setName("skullbase")
HAnimJoint82.setDEF("hanim_skullbase")
HAnimJoint82.setCenter([0,1.644,0.036])
HAnimJoint82.setSkinCoordIndex([168,169,170,171,172,173,174,175])
HAnimJoint82.setSkinCoordWeight([1,1,1,1,1,1,1,1])
HAnimJoint82.setBboxCenter([0,0,0])
HAnimJoint82.setBboxSize([-1,-1,-1])
HAnimDisplacer83 = x3d.HAnimDisplacer()
HAnimDisplacer83.setDEF("hanim_skullbase_displacer")
HAnimDisplacer83.setDisplacements([0,0.031993,0])
HAnimDisplacer83.setCoordIndex([168])
HAnimDisplacer83.setWeight(1)

HAnimJoint82.addDisplacers(HAnimDisplacer83)
HAnimSegment84 = x3d.HAnimSegment()
HAnimSegment84.setName("skull")
HAnimSegment84.setDEF("hanim_skull")
#TODO reconcile z-coordinate mismatch using source anthropometry
Transform85 = x3d.Transform()
Transform85.setTranslation([0,1.644,0.0036])
Transform85.setBboxCenter([0,0,0])
Transform85.setBboxSize([-1,-1,-1])
Shape86 = x3d.Shape()
Shape86.setUSE("SphereYellow")

Transform85.addChildren(Shape86)

HAnimSegment84.addChildren(Transform85)
HAnimSite87 = x3d.HAnimSite()
HAnimSite87.setName("skull_tip")
HAnimSite87.setDEF("hanim_skull_tip")
HAnimSite87.setTranslation([-0.0029,1.7771,0.0274])
HAnimSite87.setBboxCenter([0,0,0])
HAnimSite87.setBboxSize([-1,-1,-1])

HAnimSegment84.addChildren(HAnimSite87)
Transform88 = x3d.Transform()
Transform88.setTranslation([-0.0029,1.7771,0.0274])
Transform88.setBboxCenter([0,0,0])
Transform88.setBboxSize([-1,-1,-1])
Shape89 = x3d.Shape()
Shape89.setUSE("SphereYellow")

Transform88.addChildren(Shape89)

HAnimSegment84.addChildren(Transform88)

HAnimJoint82.addChildren(HAnimSegment84)

HAnimJoint78.addChildren(HAnimJoint82)
HAnimJoint90 = x3d.HAnimJoint()
HAnimJoint90.setName("l_shoulder")
HAnimJoint90.setDEF("hanim_l_shoulder")
HAnimJoint90.setCenter([0.1968,1.4642,-0.0265])
HAnimJoint90.setSkinCoordIndex([176,177,178,179,180,181,182,183])
HAnimJoint90.setSkinCoordWeight([1,1,1,1,1,1,1,1])
HAnimJoint90.setBboxCenter([0,0,0])
HAnimJoint90.setBboxSize([-1,-1,-1])
HAnimSegment91 = x3d.HAnimSegment()
HAnimSegment91.setName("l_upperarm")
HAnimSegment91.setDEF("hanim_l_upperarm")
Transform92 = x3d.Transform()
Transform92.setTranslation([0.1968,1.4642,-0.0265])
Transform92.setBboxCenter([0,0,0])
Transform92.setBboxSize([-1,-1,-1])
Shape93 = x3d.Shape()
Shape93.setUSE("SphereYellow")

Transform92.addChildren(Shape93)

HAnimSegment91.addChildren(Transform92)

HAnimJoint90.addChildren(HAnimSegment91)
HAnimJoint94 = x3d.HAnimJoint()
HAnimJoint94.setName("l_elbow")
HAnimJoint94.setDEF("hanim_l_elbow")
HAnimJoint94.setCenter([0.1982,1.1622,-0.0557])
HAnimJoint94.setSkinCoordIndex([184,185,186,187,188,189,190,191])
HAnimJoint94.setSkinCoordWeight([1,1,1,1,1,1,1,1])
HAnimJoint94.setBboxCenter([0,0,0])
HAnimJoint94.setBboxSize([-1,-1,-1])
HAnimSegment95 = x3d.HAnimSegment()
HAnimSegment95.setName("l_forearm")
HAnimSegment95.setDEF("hanim_l_forearm")
Transform96 = x3d.Transform()
Transform96.setTranslation([0.1982,1.1622,-0.0557])
Transform96.setBboxCenter([0,0,0])
Transform96.setBboxSize([-1,-1,-1])
Shape97 = x3d.Shape()
Shape97.setUSE("SphereYellow")

Transform96.addChildren(Shape97)

HAnimSegment95.addChildren(Transform96)

HAnimJoint94.addChildren(HAnimSegment95)
HAnimJoint98 = x3d.HAnimJoint()
HAnimJoint98.setName("l_wrist")
HAnimJoint98.setDEF("hanim_l_wrist")
HAnimJoint98.setCenter([0.1972,0.8929,-0.069])
HAnimJoint98.setSkinCoordIndex([192,193,194,195,196,197,198,199])
HAnimJoint98.setSkinCoordWeight([1,1,1,1,1,1,1,1])
HAnimJoint98.setBboxCenter([0,0,0])
HAnimJoint98.setBboxSize([-1,-1,-1])
HAnimSegment99 = x3d.HAnimSegment()
HAnimSegment99.setName("l_hand")
HAnimSegment99.setDEF("hanim_l_hand")
Transform100 = x3d.Transform()
Transform100.setTranslation([0.1972,0.8929,-0.069])
Transform100.setBboxCenter([0,0,0])
Transform100.setBboxSize([-1,-1,-1])
Shape101 = x3d.Shape()
Shape101.setUSE("SphereYellow")

Transform100.addChildren(Shape101)

HAnimSegment99.addChildren(Transform100)
HAnimSite102 = x3d.HAnimSite()
HAnimSite102.setName("l_hand_tip")
HAnimSite102.setDEF("hanim_l_hand_tip")
HAnimSite102.setTranslation([0.1912,0.6976,-0.071])
HAnimSite102.setBboxCenter([0,0,0])
HAnimSite102.setBboxSize([-1,-1,-1])

HAnimSegment99.addChildren(HAnimSite102)
Transform103 = x3d.Transform()
Transform103.setTranslation([0.1912,0.6976,-0.071])
Transform103.setBboxCenter([0,0,0])
Transform103.setBboxSize([-1,-1,-1])
Shape104 = x3d.Shape()
Shape104.setUSE("SphereRed")

Transform103.addChildren(Shape104)

HAnimSegment99.addChildren(Transform103)

HAnimJoint98.addChildren(HAnimSegment99)

HAnimJoint94.addChildren(HAnimJoint98)

HAnimJoint90.addChildren(HAnimJoint94)

HAnimJoint78.addChildren(HAnimJoint90)
HAnimJoint105 = x3d.HAnimJoint()
HAnimJoint105.setName("r_shoulder")
HAnimJoint105.setDEF("hanim_r_shoulder")
HAnimJoint105.setCenter([-0.1968,1.4642,-0.0265])
HAnimJoint105.setSkinCoordIndex([200,201,202,203,204,205,206,207])
HAnimJoint105.setSkinCoordWeight([1,1,1,1,1,1,1,1])
HAnimJoint105.setBboxCenter([0,0,0])
HAnimJoint105.setBboxSize([-1,-1,-1])
HAnimSegment106 = x3d.HAnimSegment()
HAnimSegment106.setName("r_upperarm")
HAnimSegment106.setDEF("hanim_r_upperarm")
Transform107 = x3d.Transform()
Transform107.setTranslation([-0.1968,1.4642,-0.0265])
Transform107.setBboxCenter([0,0,0])
Transform107.setBboxSize([-1,-1,-1])
Shape108 = x3d.Shape()
Shape108.setUSE("SphereYellow")

Transform107.addChildren(Shape108)

HAnimSegment106.addChildren(Transform107)

HAnimJoint105.addChildren(HAnimSegment106)
HAnimJoint109 = x3d.HAnimJoint()
HAnimJoint109.setName("r_elbow")
HAnimJoint109.setDEF("hanim_r_elbow")
HAnimJoint109.setCenter([-0.1982,1.1622,-0.0557])
HAnimJoint109.setSkinCoordIndex([208,209,210,211,212,213,214,215])
HAnimJoint109.setSkinCoordWeight([1,1,1,1,1,1,1,1])
HAnimJoint109.setBboxCenter([0,0,0])
HAnimJoint109.setBboxSize([-1,-1,-1])
HAnimSegment110 = x3d.HAnimSegment()
HAnimSegment110.setName("r_forearm")
HAnimSegment110.setDEF("hanim_r_forearm")
Transform111 = x3d.Transform()
Transform111.setTranslation([-0.1982,1.1622,-0.0557])
Transform111.setBboxCenter([0,0,0])
Transform111.setBboxSize([-1,-1,-1])
Shape112 = x3d.Shape()
Shape112.setUSE("SphereYellow")

Transform111.addChildren(Shape112)

HAnimSegment110.addChildren(Transform111)

HAnimJoint109.addChildren(HAnimSegment110)
HAnimJoint113 = x3d.HAnimJoint()
HAnimJoint113.setName("r_wrist")
HAnimJoint113.setDEF("hanim_r_wrist")
HAnimJoint113.setCenter([-0.1972,0.8929,-0.069])
HAnimJoint113.setSkinCoordIndex([216,217,218,219,220,221,222,223])
HAnimJoint113.setSkinCoordWeight([1,1,1,1,1,1,1,1])
HAnimJoint113.setBboxCenter([0,0,0])
HAnimJoint113.setBboxSize([-1,-1,-1])
HAnimSegment114 = x3d.HAnimSegment()
HAnimSegment114.setName("r_hand")
HAnimSegment114.setDEF("hanim_r_hand")
Transform115 = x3d.Transform()
Transform115.setTranslation([-0.1972,0.8929,-0.069])
Transform115.setBboxCenter([0,0,0])
Transform115.setBboxSize([-1,-1,-1])
Shape116 = x3d.Shape()
Shape116.setUSE("SphereYellow")

Transform115.addChildren(Shape116)

HAnimSegment114.addChildren(Transform115)
HAnimSite117 = x3d.HAnimSite()
HAnimSite117.setName("r_hand_tip")
HAnimSite117.setDEF("hanim_r_hand_tip")
HAnimSite117.setTranslation([-0.1912,0.6976,-0.071])
HAnimSite117.setBboxCenter([0,0,0])
HAnimSite117.setBboxSize([-1,-1,-1])

HAnimSegment114.addChildren(HAnimSite117)
Transform118 = x3d.Transform()
Transform118.setTranslation([-0.1912,0.6976,-0.071])
Transform118.setBboxCenter([0,0,0])
Transform118.setBboxSize([-1,-1,-1])
Shape119 = x3d.Shape()
Shape119.setUSE("SphereRed")

Transform118.addChildren(Shape119)

HAnimSegment114.addChildren(Transform118)

HAnimJoint113.addChildren(HAnimSegment114)

HAnimJoint109.addChildren(HAnimJoint113)

HAnimJoint105.addChildren(HAnimJoint109)

HAnimJoint78.addChildren(HAnimJoint105)

HAnimJoint30.addChildren(HAnimJoint78)

HAnimHumanoid29.addJoints(HAnimJoint30)
## sacrum (12) # l_thigh (28) # l_calf (24) # l_hindfoot (8) # l_middistal (8) # r_thigh (28) # r_calf (24) # r_hindfoot (8) # r_middistal (8) # l5 (20) # skull (8) # l_upperarm (8) # l_forearm (8) # l_hand (8) # r_upperarm (8) # r_forearm (8) # r_hand (8)
#top-level joint references
#top-level site references
#top-level segment references
#top-level viewpoint references
Coordinate120 = x3d.Coordinate()
Coordinate120.setDEF("SKINCOORD")
Coordinate120.setPoint([-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1])

HAnimHumanoid29.setSkinCoord(Coordinate120)
Group121 = x3d.Group()
Group121.setBboxCenter([0,0,0])
Group121.setBboxSize([-1,-1,-1])
Shape122 = x3d.Shape()
Shape122.setDEF("TrouserSkin")
Shape122.setBboxCenter([0,0,0])
Shape122.setBboxSize([-1,-1,-1])
Appearance123 = x3d.Appearance()
Material124 = x3d.Material()
Material124.setDiffuseColor([0,0,1])
Material124.setTransparency(0.5)

Appearance123.setMaterial(Material124)

Shape122.setAppearance(Appearance123)
## 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40)
IndexedFaceSet125 = x3d.IndexedFaceSet()
IndexedFaceSet125.setCoordIndex([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1])
Coordinate126 = x3d.Coordinate()
Coordinate126.setUSE("SKINCOORD")

IndexedFaceSet125.setCoord(Coordinate126)

Shape122.setGeometry(IndexedFaceSet125)

Group121.addChildren(Shape122)
Shape127 = x3d.Shape()
Shape127.setDEF("ShoeSkin")
Shape127.setBboxCenter([0,0,0])
Shape127.setBboxSize([-1,-1,-1])
Appearance128 = x3d.Appearance()
Material129 = x3d.Material()
Material129.setDiffuseColor([0,0,0])
Material129.setTransparency(0.5)

Appearance128.setMaterial(Material129)

Shape127.setAppearance(Appearance128)
## 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10)
IndexedFaceSet130 = x3d.IndexedFaceSet()
IndexedFaceSet130.setCoordIndex([60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1])
Coordinate131 = x3d.Coordinate()
Coordinate131.setUSE("SKINCOORD")

IndexedFaceSet130.setCoord(Coordinate131)

Shape127.setGeometry(IndexedFaceSet130)

Group121.addChildren(Shape127)
Shape132 = x3d.Shape()
Shape132.setDEF("ShirtSkin")
Shape132.setBboxCenter([0,0,0])
Shape132.setBboxSize([-1,-1,-1])
Appearance133 = x3d.Appearance()
Material134 = x3d.Material()
Material134.setDiffuseColor([1,1,0])
Material134.setTransparency(0.5)

Appearance133.setMaterial(Material134)

Shape132.setAppearance(Appearance133)
## 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8)
IndexedFaceSet135 = x3d.IndexedFaceSet()
IndexedFaceSet135.setCoordIndex([148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1])
Coordinate136 = x3d.Coordinate()
Coordinate136.setUSE("SKINCOORD")

IndexedFaceSet135.setCoord(Coordinate136)

Shape132.setGeometry(IndexedFaceSet135)

Group121.addChildren(Shape132)
Shape137 = x3d.Shape()
Shape137.setDEF("HeadHandsFleshToneSkin")
Shape137.setBboxCenter([0,0,0])
Shape137.setBboxSize([-1,-1,-1])
Appearance138 = x3d.Appearance()
Material139 = x3d.Material()
Material139.setDiffuseColor([1,0.75,0.75])
Material139.setTransparency(0.5)

Appearance138.setMaterial(Material139)

Shape137.setAppearance(Appearance138)
## 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10)
IndexedFaceSet140 = x3d.IndexedFaceSet()
IndexedFaceSet140.setCoordIndex([172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1])
Coordinate141 = x3d.Coordinate()
Coordinate141.setUSE("SKINCOORD")

IndexedFaceSet140.setCoord(Coordinate141)

Shape137.setGeometry(IndexedFaceSet140)

Group121.addChildren(Shape137)
Shape142 = x3d.Shape()
Shape142.setDEF("SkinLines")
Shape142.setBboxCenter([0,0,0])
Shape142.setBboxSize([-1,-1,-1])
Appearance143 = x3d.Appearance()
Material144 = x3d.Material()
Material144.setDiffuseColor([0,0,0])

Appearance143.setMaterial(Material144)

Shape142.setAppearance(Appearance143)
#Combined set of prior IFS coordIndex values
IndexedLineSet145 = x3d.IndexedLineSet()
IndexedLineSet145.setCoordIndex([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1])
Coordinate146 = x3d.Coordinate()
Coordinate146.setUSE("SKINCOORD")

IndexedLineSet145.setCoord(Coordinate146)

Shape142.setGeometry(IndexedLineSet145)

Group121.addChildren(Shape142)

HAnimHumanoid29.addSkin(Group121)
HAnimJoint147 = x3d.HAnimJoint()
HAnimJoint147.setUSE("hanim_r_wrist")

HAnimHumanoid29.addJoints(HAnimJoint147)
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.setUSE("hanim_r_elbow")

HAnimHumanoid29.addJoints(HAnimJoint148)
HAnimJoint149 = x3d.HAnimJoint()
HAnimJoint149.setUSE("hanim_r_shoulder")

HAnimHumanoid29.addJoints(HAnimJoint149)
HAnimJoint150 = x3d.HAnimJoint()
HAnimJoint150.setUSE("hanim_l_wrist")

HAnimHumanoid29.addJoints(HAnimJoint150)
HAnimJoint151 = x3d.HAnimJoint()
HAnimJoint151.setUSE("hanim_l_elbow")

HAnimHumanoid29.addJoints(HAnimJoint151)
HAnimJoint152 = x3d.HAnimJoint()
HAnimJoint152.setUSE("hanim_l_shoulder")

HAnimHumanoid29.addJoints(HAnimJoint152)
HAnimJoint153 = x3d.HAnimJoint()
HAnimJoint153.setUSE("hanim_skullbase")

HAnimHumanoid29.addJoints(HAnimJoint153)
HAnimJoint154 = x3d.HAnimJoint()
HAnimJoint154.setUSE("hanim_vl5")

HAnimHumanoid29.addJoints(HAnimJoint154)
HAnimJoint155 = x3d.HAnimJoint()
HAnimJoint155.setUSE("hanim_r_midtarsal")

HAnimHumanoid29.addJoints(HAnimJoint155)
HAnimJoint156 = x3d.HAnimJoint()
HAnimJoint156.setUSE("hanim_r_ankle")

HAnimHumanoid29.addJoints(HAnimJoint156)
HAnimJoint157 = x3d.HAnimJoint()
HAnimJoint157.setUSE("hanim_r_knee")

HAnimHumanoid29.addJoints(HAnimJoint157)
HAnimJoint158 = x3d.HAnimJoint()
HAnimJoint158.setUSE("hanim_r_hip")

HAnimHumanoid29.addJoints(HAnimJoint158)
HAnimJoint159 = x3d.HAnimJoint()
HAnimJoint159.setUSE("hanim_l_midtarsal")

HAnimHumanoid29.addJoints(HAnimJoint159)
HAnimJoint160 = x3d.HAnimJoint()
HAnimJoint160.setUSE("hanim_l_ankle")

HAnimHumanoid29.addJoints(HAnimJoint160)
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.setUSE("hanim_l_knee")

HAnimHumanoid29.addJoints(HAnimJoint161)
HAnimJoint162 = x3d.HAnimJoint()
HAnimJoint162.setUSE("hanim_l_hip")

HAnimHumanoid29.addJoints(HAnimJoint162)
HAnimJoint163 = x3d.HAnimJoint()
HAnimJoint163.setUSE("hanim_HumanoidRoot")

HAnimHumanoid29.addJoints(HAnimJoint163)
HAnimSite164 = x3d.HAnimSite()
HAnimSite164.setUSE("hanim_l_middle_distal_tip")

HAnimHumanoid29.addViewpoints(HAnimSite164)
HAnimSite165 = x3d.HAnimSite()
HAnimSite165.setUSE("hanim_r_middle_distal_tip")

HAnimHumanoid29.addViewpoints(HAnimSite165)
HAnimSite166 = x3d.HAnimSite()
HAnimSite166.setUSE("hanim_skull_tip")

HAnimHumanoid29.addViewpoints(HAnimSite166)
HAnimSite167 = x3d.HAnimSite()
HAnimSite167.setUSE("hanim_l_hand_tip")

HAnimHumanoid29.addViewpoints(HAnimSite167)
HAnimSite168 = x3d.HAnimSite()
HAnimSite168.setUSE("hanim_r_hand_tip")

HAnimHumanoid29.addViewpoints(HAnimSite168)
HAnimSegment169 = x3d.HAnimSegment()
HAnimSegment169.setUSE("hanim_sacrum")

HAnimHumanoid29.addSegments(HAnimSegment169)
HAnimSegment170 = x3d.HAnimSegment()
HAnimSegment170.setUSE("hanim_l_thigh")

HAnimHumanoid29.addSegments(HAnimSegment170)
HAnimSegment171 = x3d.HAnimSegment()
HAnimSegment171.setUSE("hanim_l_calf")

HAnimHumanoid29.addSegments(HAnimSegment171)
HAnimSegment172 = x3d.HAnimSegment()
HAnimSegment172.setUSE("hanim_l_hindfoot")

HAnimHumanoid29.addSegments(HAnimSegment172)
HAnimSegment173 = x3d.HAnimSegment()
HAnimSegment173.setUSE("hanim_l_middistal")

HAnimHumanoid29.addSegments(HAnimSegment173)
HAnimSegment174 = x3d.HAnimSegment()
HAnimSegment174.setUSE("hanim_r_thigh")

HAnimHumanoid29.addSegments(HAnimSegment174)
HAnimSegment175 = x3d.HAnimSegment()
HAnimSegment175.setUSE("hanim_r_calf")

HAnimHumanoid29.addSegments(HAnimSegment175)
HAnimSegment176 = x3d.HAnimSegment()
HAnimSegment176.setUSE("hanim_r_hindfoot")

HAnimHumanoid29.addSegments(HAnimSegment176)
HAnimSegment177 = x3d.HAnimSegment()
HAnimSegment177.setUSE("hanim_r_middistal")

HAnimHumanoid29.addSegments(HAnimSegment177)
HAnimSegment178 = x3d.HAnimSegment()
HAnimSegment178.setUSE("hanim_l5")

HAnimHumanoid29.addSegments(HAnimSegment178)
HAnimSegment179 = x3d.HAnimSegment()
HAnimSegment179.setUSE("hanim_skull")

HAnimHumanoid29.addSegments(HAnimSegment179)
HAnimSegment180 = x3d.HAnimSegment()
HAnimSegment180.setUSE("hanim_l_upperarm")

HAnimHumanoid29.addSegments(HAnimSegment180)
HAnimSegment181 = x3d.HAnimSegment()
HAnimSegment181.setUSE("hanim_l_forearm")

HAnimHumanoid29.addSegments(HAnimSegment181)
HAnimSegment182 = x3d.HAnimSegment()
HAnimSegment182.setUSE("hanim_l_hand")

HAnimHumanoid29.addSegments(HAnimSegment182)
HAnimSegment183 = x3d.HAnimSegment()
HAnimSegment183.setUSE("hanim_r_upperarm")

HAnimHumanoid29.addSegments(HAnimSegment183)
HAnimSegment184 = x3d.HAnimSegment()
HAnimSegment184.setUSE("hanim_r_forearm")

HAnimHumanoid29.addSegments(HAnimSegment184)
HAnimSegment185 = x3d.HAnimSegment()
HAnimSegment185.setUSE("hanim_r_hand")

HAnimHumanoid29.addSegments(HAnimSegment185)
Viewpoint186 = x3d.Viewpoint()
Viewpoint186.setDEF("Inclined_View")
Viewpoint186.setDescription("Inclined View")
Viewpoint186.setOrientation([0,1,0,0.78])
Viewpoint186.setPosition([2,1,2])

HAnimHumanoid29.addViewpoint(Viewpoint186)
Viewpoint187 = x3d.Viewpoint()
Viewpoint187.setDEF("Best_View")
Viewpoint187.setDescription("Best View")
Viewpoint187.setOrientation([0,1,0,-1.57])
Viewpoint187.setPosition([-2,0.25,0])

HAnimHumanoid29.addViewpoint(Viewpoint187)
Viewpoint188 = x3d.Viewpoint()
Viewpoint188.setDEF("Front_View")
Viewpoint188.setDescription("Front View")
Viewpoint188.setPosition([0,1,3])

HAnimHumanoid29.addViewpoint(Viewpoint188)
Viewpoint189 = x3d.Viewpoint()
Viewpoint189.setDEF("Side_View")
Viewpoint189.setDescription("Side View")
Viewpoint189.setOrientation([0,1,0,1.57])
Viewpoint189.setPosition([3,1,0])

HAnimHumanoid29.addViewpoint(Viewpoint189)
Viewpoint190 = x3d.Viewpoint()
Viewpoint190.setDEF("Top_View")
Viewpoint190.setDescription("Top View")
Viewpoint190.setOrientation([1,0,0,-1.57])
Viewpoint190.setPosition([0,3,0])

HAnimHumanoid29.addViewpoint(Viewpoint190)

Scene26.addChildren(HAnimHumanoid29)
#ExternProtoDeclare name='LOA1_WalkAnimation' url='\"LOA1_WalkAnimation.wrl#LOA1_WalkAnimation\" \"http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation\" \"http://h-anim.org/Models/H-Anim2001/boxman/protos/LOA1WalkAnimation.wrl#LOA1WalkAnimation\" \"LOA1_WalkAnimation.x3d#LOA1_WalkAnimation\" \"http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation\" \"http://h-anim.org/Models/H-Anim2001/boxman/protos/LOA1WalkAnimation.x3d#LOA1WalkAnimation\"'> <field accessType='inputOutput' name='cycleInterval' type='SFTime'/> <field accessType='inputOutput' name='enabled' type='SFBool'/> <field accessType='inputOutput' name='loop' type='SFBool'/> <field accessType='inputOutput' name='startTime' type='SFTime'/> <field accessType='inputOutput' name='stopTime' type='SFTime'/> <field accessType='outputOnly' name='fraction_changed' type='SFFloat'/> <field accessType='outputOnly' name='HumanoidRoot_translation_changed' type='SFVec3f'/> <field accessType='outputOnly' name='HumanoidRoot_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_hip_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_knee_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_ankle_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_midtarsal_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_hip_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_knee_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_ankle_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_midtarsal_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='vl5_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='skullbase_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_shoulder_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_elbow_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_wrist_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_shoulder_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_elbow_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_wrist_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='isActive' type='SFBool'/> </ExternProtoDeclare> <ProtoInstance DEF='ANIMATOR' name='LOA1_WalkAnimation'/
Group191 = x3d.Group()
Group191.setBboxCenter([0,0,0])
Group191.setBboxSize([-1,-1,-1])
#ROUTE information for TIMER node: [from fraction_changed to HUMANOIDROOT_POSITION_ANIMATOR.set_fraction ] [from fraction_changed to HUMANOIDROOT_ANIMATOR.set_fraction ] [from fraction_changed to SACROILIAC_ANIMATOR.set_fraction ] [from fraction_changed to L_HIP_ANIMATOR.set_fraction ] [from fraction_changed to L_KNEE_ANIMATOR.set_fraction ] [from fraction_changed to L_ANKLE_ANIMATOR.set_fraction ] [from fraction_changed to L_MIDTARSAL_ANIMATOR.set_fraction ] [from fraction_changed to R_HIP_ANIMATOR.set_fraction ] [from fraction_changed to R_KNEE_ANIMATOR.set_fraction ] [from fraction_changed to R_ANKLE_ANIMATOR.set_fraction ] [from fraction_changed to R_MIDTARSAL_ANIMATOR.set_fraction ] [from fraction_changed to VL5_ANIMATOR.set_fraction ] [from fraction_changed to SKULLBASE_ANIMATOR.set_fraction ] [from fraction_changed to L_SHOULDER_ANIMATOR.set_fraction ] [from fraction_changed to L_ELBOW_ANIMATOR.set_fraction ] [from fraction_changed to L_WRIST_ANIMATOR.set_fraction ] [from fraction_changed to R_SHOULDER_ANIMATOR.set_fraction ] [from fraction_changed to R_ELBOW_ANIMATOR.set_fraction ] [from fraction_changed to R_WRIST_ANIMATOR.set_fraction ]
TimeSensor192 = x3d.TimeSensor()
TimeSensor192.setDEF("TIMER")
TimeSensor192.setCycleInterval(2)
TimeSensor192.setLoop(True)
#field name='cycleInterval' type='SFTime' value='2' accessType='inputOutput'/> <field name='enabled' type='SFBool' value='true' accessType='inputOutput'/> <field name='loop' type='SFBool' value='true' accessType='inputOutput'/> <field name='startTime' type='SFTime' value='0' accessType='inputOutput'/> <field name='stopTime' type='SFTime' value='-1' accessType='inputOutput'/!
#IS> <connect nodeField='cycleInterval' protoField='cycleInterval'/> <connect nodeField='enabled' protoField='enabled'/> <connect nodeField='loop' protoField='loop'/> <connect nodeField='startTime' protoField='startTime'/> <connect nodeField='stopTime' protoField='stopTime'/> <connect nodeField='fraction_changed' protoField='fraction_changed'/> <connect nodeField='isActive' protoField='isActive'/> </IS

Group191.addChildren(TimeSensor192)
#ROUTE information for HUMANOIDROOT_POSITION_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
PositionInterpolator193 = x3d.PositionInterpolator()
PositionInterpolator193.setDEF("HUMANOIDROOT_POSITION_ANIMATOR")
PositionInterpolator193.setKey([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1])
PositionInterpolator193.setKeyValue([0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0])
#IS> <connect nodeField='value_changed' protoField='HumanoidRoot_translation_changed'/> </IS

Group191.addChildren(PositionInterpolator193)
#ROUTE information for HUMANOIDROOT_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator194 = x3d.OrientationInterpolator()
OrientationInterpolator194.setDEF("HUMANOIDROOT_ANIMATOR")
OrientationInterpolator194.setKey([0,1])
OrientationInterpolator194.setKeyValue([0,1,0,0,0,1,0,0])
#IS> <connect nodeField='value_changed' protoField='HumanoidRoot_rotation_changed'/> </IS

Group191.addChildren(OrientationInterpolator194)
#ROUTE information for SACROILIAC_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator195 = x3d.OrientationInterpolator()
OrientationInterpolator195.setDEF("SACROILIAC_ANIMATOR")
OrientationInterpolator195.setKey([0,0.5,1])
OrientationInterpolator195.setKeyValue([0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056])
#IS> <connect nodeField='value_changed' protoField='lower_body_rotation_changed'/> </IS

Group191.addChildren(OrientationInterpolator195)
#ROUTE information for L_HIP_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator196 = x3d.OrientationInterpolator()
OrientationInterpolator196.setDEF("L_HIP_ANIMATOR")
OrientationInterpolator196.setKey([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1])
OrientationInterpolator196.setKeyValue([-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865])
#IS> <connect nodeField='value_changed' protoField='l_hip_rotation_changed'/> </IS

Group191.addChildren(OrientationInterpolator196)
#ROUTE information for L_KNEE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator197 = x3d.OrientationInterpolator()
OrientationInterpolator197.setDEF("L_KNEE_ANIMATOR")
OrientationInterpolator197.setKey([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1])
OrientationInterpolator197.setKeyValue([1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226])
#IS> <connect nodeField='value_changed' protoField='l_knee_rotation_changed'/> </IS

Group191.addChildren(OrientationInterpolator197)
#ROUTE information for L_ANKLE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator198 = x3d.OrientationInterpolator()
OrientationInterpolator198.setDEF("L_ANKLE_ANIMATOR")
OrientationInterpolator198.setKey([0,0.125,0.2083,0.375,0.6667,0.9167,1])
OrientationInterpolator198.setKeyValue([-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714])
#IS> <connect nodeField='value_changed' protoField='l_ankle_rotation_changed'/> </IS

Group191.addChildren(OrientationInterpolator198)
#ROUTE information for L_MIDTARSAL_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator199 = x3d.OrientationInterpolator()
OrientationInterpolator199.setDEF("L_MIDTARSAL_ANIMATOR")
OrientationInterpolator199.setKey([0,0.5,1])
OrientationInterpolator199.setKeyValue([1,0,0,0,1,0,0,-0.2,1,0,0,0])
#IS> <connect nodeField='value_changed' protoField='l_midtarsal_rotation_changed'/> </IS

Group191.addChildren(OrientationInterpolator199)
#ROUTE information for R_HIP_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator200 = x3d.OrientationInterpolator()
OrientationInterpolator200.setDEF("R_HIP_ANIMATOR")
OrientationInterpolator200.setKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1])
OrientationInterpolator200.setKeyValue([-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481])
#IS> <connect nodeField='value_changed' protoField='r_hip_rotation_changed'/> </IS

Group191.addChildren(OrientationInterpolator200)
#ROUTE information for R_KNEE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator201 = x3d.OrientationInterpolator()
OrientationInterpolator201.setDEF("R_KNEE_ANIMATOR")
OrientationInterpolator201.setKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1])
OrientationInterpolator201.setKeyValue([1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,-1.176e-8,-4.971e-9,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573])
#IS> <connect nodeField='value_changed' protoField='r_knee_rotation_changed'/> <IS

Group191.addChildren(OrientationInterpolator201)
#ROUTE information for R_ANKLE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator202 = x3d.OrientationInterpolator()
OrientationInterpolator202.setDEF("R_ANKLE_ANIMATOR")
OrientationInterpolator202.setKey([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1])
OrientationInterpolator202.setKeyValue([0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,-1.641e-7,1.827e-8,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0])
#IS> <connect nodeField='value_changed' protoField='r_ankle_rotation_changed'/> <IS

Group191.addChildren(OrientationInterpolator202)
#ROUTE information for R_MIDTARSAL_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator203 = x3d.OrientationInterpolator()
OrientationInterpolator203.setDEF("R_MIDTARSAL_ANIMATOR")
OrientationInterpolator203.setKey([0,0.5,1])
OrientationInterpolator203.setKeyValue([1,0,0,-0.2,1,0,0,0,1,0,0,-0.2])
#IS> <connect nodeField='value_changed' protoField='r_midtarsal_rotation_changed'/> <IS

Group191.addChildren(OrientationInterpolator203)
#ROUTE information for VL5_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator204 = x3d.OrientationInterpolator()
OrientationInterpolator204.setDEF("VL5_ANIMATOR")
OrientationInterpolator204.setKey([0,0.2083,0.375,0.75,0.8333,1])
OrientationInterpolator204.setKeyValue([0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826])
#IS> <connect nodeField='value_changed' protoField='vl5_rotation_changed'/> <IS

Group191.addChildren(OrientationInterpolator204)
#ROUTE information for SKULLBASE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator205 = x3d.OrientationInterpolator()
OrientationInterpolator205.setDEF("SKULLBASE_ANIMATOR")
OrientationInterpolator205.setKey([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1])
OrientationInterpolator205.setKeyValue([0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642])
#IS> <connect nodeField='value_changed' protoField='skullbase_rotation_changed'/> <IS

Group191.addChildren(OrientationInterpolator205)
#ROUTE information for L_SHOULDER_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator206 = x3d.OrientationInterpolator()
OrientationInterpolator206.setDEF("L_SHOULDER_ANIMATOR")
OrientationInterpolator206.setKey([0,0.375,0.9167,1])
OrientationInterpolator206.setKeyValue([1,0,0,0.1189,-1,-5.928e-7,1.525e-7,0.1861,1,-2.038e-7,-1.257e-7,0.3357,1,0,0,0.1189])
#IS> <connect nodeField='value_changed' protoField='l_shoulder_rotation_changed'/> <IS

Group191.addChildren(OrientationInterpolator206)
#ROUTE information for L_ELBOW_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator207 = x3d.OrientationInterpolator()
OrientationInterpolator207.setDEF("L_ELBOW_ANIMATOR")
OrientationInterpolator207.setKey([0,0.375,0.9167,1])
OrientationInterpolator207.setKeyValue([-1,-1.58298e-7,8.15967e-8,0.0659878,-1,-3.28826e-8,-2.31665e-8,0.488383,-1,0.00000306462,-0.00000311947,0.0177536,-1,-1.58298e-7,8.15967e-8,0.0659878])
#IS> <connect nodeField='value_changed' protoField='l_elbow_rotation_changed'/> <IS

Group191.addChildren(OrientationInterpolator207)
#ROUTE information for L_WRIST_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator208 = x3d.OrientationInterpolator()
OrientationInterpolator208.setDEF("L_WRIST_ANIMATOR")
OrientationInterpolator208.setKey([0,0.375,0.9167,1])
OrientationInterpolator208.setKeyValue([0.00000151276,-1,0.0000017724,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0.00000151276,-1,0.0000017724,0.461076])
#IS> <connect nodeField='value_changed' protoField='l_wrist_rotation_changed'/> <IS

Group191.addChildren(OrientationInterpolator208)
#ROUTE information for R_SHOULDER_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator209 = x3d.OrientationInterpolator()
OrientationInterpolator209.setDEF("R_SHOULDER_ANIMATOR")
OrientationInterpolator209.setKey([0,0.375,0.9167,1])
OrientationInterpolator209.setKeyValue([-1,-7.689e-7,-1.48e-7,0.09346,1,5.004e-8,2.254e-8,0.3197,-1,-1.104e-7,5.267e-10,0.1564,-1,-7.689e-7,-1.48e-7,0.09346])
#IS> <connect nodeField='value_changed' protoField='r_shoulder_rotation_changed'/> <IS

Group191.addChildren(OrientationInterpolator209)
#ROUTE information for R_ELBOW_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator210 = x3d.OrientationInterpolator()
OrientationInterpolator210.setDEF("R_ELBOW_ANIMATOR")
OrientationInterpolator210.setKey([0,0.375,0.9167,1])
OrientationInterpolator210.setKeyValue([-1,-4.45619e-8,2.70318e-8,0.411508,-1,8.16742e-7,-1.09556e-7,0.0925011,-1,-2.47628e-8,-7.02862e-9,0.572568,-1,-4.45619e-8,2.70318e-8,0.411508])
#IS> <connect nodeField='value_changed' protoField='r_elbow_rotation_changed'/> <IS

Group191.addChildren(OrientationInterpolator210)
#ROUTE information for R_WRIST_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator211 = x3d.OrientationInterpolator()
OrientationInterpolator211.setDEF("R_WRIST_ANIMATOR")
OrientationInterpolator211.setKey([0,0.375,0.9167,1])
OrientationInterpolator211.setKeyValue([-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346])
#IS> <connect nodeField='value_changed' protoField='r_wrist_rotation_changed'/> <IS

Group191.addChildren(OrientationInterpolator211)

Scene26.addChildren(Group191)
ROUTE212 = x3d.ROUTE()
ROUTE212.setFromNode("TIMER")
ROUTE212.setFromField("fraction_changed")
ROUTE212.setToNode("HUMANOIDROOT_POSITION_ANIMATOR")
ROUTE212.setToField("set_fraction")

Scene26.addChildren(ROUTE212)
ROUTE213 = x3d.ROUTE()
ROUTE213.setFromNode("TIMER")
ROUTE213.setFromField("fraction_changed")
ROUTE213.setToNode("HUMANOIDROOT_ANIMATOR")
ROUTE213.setToField("set_fraction")

Scene26.addChildren(ROUTE213)
ROUTE214 = x3d.ROUTE()
ROUTE214.setFromNode("TIMER")
ROUTE214.setFromField("fraction_changed")
ROUTE214.setToNode("SACROILIAC_ANIMATOR")
ROUTE214.setToField("set_fraction")

Scene26.addChildren(ROUTE214)
ROUTE215 = x3d.ROUTE()
ROUTE215.setFromNode("TIMER")
ROUTE215.setFromField("fraction_changed")
ROUTE215.setToNode("L_HIP_ANIMATOR")
ROUTE215.setToField("set_fraction")

Scene26.addChildren(ROUTE215)
ROUTE216 = x3d.ROUTE()
ROUTE216.setFromNode("TIMER")
ROUTE216.setFromField("fraction_changed")
ROUTE216.setToNode("L_KNEE_ANIMATOR")
ROUTE216.setToField("set_fraction")

Scene26.addChildren(ROUTE216)
ROUTE217 = x3d.ROUTE()
ROUTE217.setFromNode("TIMER")
ROUTE217.setFromField("fraction_changed")
ROUTE217.setToNode("L_ANKLE_ANIMATOR")
ROUTE217.setToField("set_fraction")

Scene26.addChildren(ROUTE217)
ROUTE218 = x3d.ROUTE()
ROUTE218.setFromNode("TIMER")
ROUTE218.setFromField("fraction_changed")
ROUTE218.setToNode("L_MIDTARSAL_ANIMATOR")
ROUTE218.setToField("set_fraction")

Scene26.addChildren(ROUTE218)
ROUTE219 = x3d.ROUTE()
ROUTE219.setFromNode("TIMER")
ROUTE219.setFromField("fraction_changed")
ROUTE219.setToNode("R_HIP_ANIMATOR")
ROUTE219.setToField("set_fraction")

Scene26.addChildren(ROUTE219)
ROUTE220 = x3d.ROUTE()
ROUTE220.setFromNode("TIMER")
ROUTE220.setFromField("fraction_changed")
ROUTE220.setToNode("R_KNEE_ANIMATOR")
ROUTE220.setToField("set_fraction")

Scene26.addChildren(ROUTE220)
ROUTE221 = x3d.ROUTE()
ROUTE221.setFromNode("TIMER")
ROUTE221.setFromField("fraction_changed")
ROUTE221.setToNode("R_ANKLE_ANIMATOR")
ROUTE221.setToField("set_fraction")

Scene26.addChildren(ROUTE221)
ROUTE222 = x3d.ROUTE()
ROUTE222.setFromNode("TIMER")
ROUTE222.setFromField("fraction_changed")
ROUTE222.setToNode("R_MIDTARSAL_ANIMATOR")
ROUTE222.setToField("set_fraction")

Scene26.addChildren(ROUTE222)
ROUTE223 = x3d.ROUTE()
ROUTE223.setFromNode("TIMER")
ROUTE223.setFromField("fraction_changed")
ROUTE223.setToNode("VL5_ANIMATOR")
ROUTE223.setToField("set_fraction")

Scene26.addChildren(ROUTE223)
ROUTE224 = x3d.ROUTE()
ROUTE224.setFromNode("TIMER")
ROUTE224.setFromField("fraction_changed")
ROUTE224.setToNode("SKULLBASE_ANIMATOR")
ROUTE224.setToField("set_fraction")

Scene26.addChildren(ROUTE224)
ROUTE225 = x3d.ROUTE()
ROUTE225.setFromNode("TIMER")
ROUTE225.setFromField("fraction_changed")
ROUTE225.setToNode("L_SHOULDER_ANIMATOR")
ROUTE225.setToField("set_fraction")

Scene26.addChildren(ROUTE225)
ROUTE226 = x3d.ROUTE()
ROUTE226.setFromNode("TIMER")
ROUTE226.setFromField("fraction_changed")
ROUTE226.setToNode("L_ELBOW_ANIMATOR")
ROUTE226.setToField("set_fraction")

Scene26.addChildren(ROUTE226)
ROUTE227 = x3d.ROUTE()
ROUTE227.setFromNode("TIMER")
ROUTE227.setFromField("fraction_changed")
ROUTE227.setToNode("L_WRIST_ANIMATOR")
ROUTE227.setToField("set_fraction")

Scene26.addChildren(ROUTE227)
ROUTE228 = x3d.ROUTE()
ROUTE228.setFromNode("TIMER")
ROUTE228.setFromField("fraction_changed")
ROUTE228.setToNode("R_SHOULDER_ANIMATOR")
ROUTE228.setToField("set_fraction")

Scene26.addChildren(ROUTE228)
ROUTE229 = x3d.ROUTE()
ROUTE229.setFromNode("TIMER")
ROUTE229.setFromField("fraction_changed")
ROUTE229.setToNode("R_ELBOW_ANIMATOR")
ROUTE229.setToField("set_fraction")

Scene26.addChildren(ROUTE229)
ROUTE230 = x3d.ROUTE()
ROUTE230.setFromNode("TIMER")
ROUTE230.setFromField("fraction_changed")
ROUTE230.setToNode("R_WRIST_ANIMATOR")
ROUTE230.setToField("set_fraction")

Scene26.addChildren(ROUTE230)
#Animation ROUTEs
ROUTE231 = x3d.ROUTE()
ROUTE231.setFromField("value_changed")
ROUTE231.setFromNode("HUMANOIDROOT_POSITION_ANIMATOR")
ROUTE231.setToField("set_translation")
ROUTE231.setToNode("hanim_HumanoidRoot")

Scene26.addChildren(ROUTE231)
ROUTE232 = x3d.ROUTE()
ROUTE232.setFromField("value_changed")
ROUTE232.setFromNode("HUMANOIDROOT_ANIMATOR")
ROUTE232.setToField("set_rotation")
ROUTE232.setToNode("hanim_HumanoidRoot")

Scene26.addChildren(ROUTE232)
ROUTE233 = x3d.ROUTE()
ROUTE233.setFromField("value_changed")
ROUTE233.setFromNode("L_HIP_ANIMATOR")
ROUTE233.setToField("set_rotation")
ROUTE233.setToNode("hanim_l_hip")

Scene26.addChildren(ROUTE233)
ROUTE234 = x3d.ROUTE()
ROUTE234.setFromField("value_changed")
ROUTE234.setFromNode("L_KNEE_ANIMATOR")
ROUTE234.setToField("set_rotation")
ROUTE234.setToNode("hanim_l_knee")

Scene26.addChildren(ROUTE234)
ROUTE235 = x3d.ROUTE()
ROUTE235.setFromField("value_changed")
ROUTE235.setFromNode("L_ANKLE_ANIMATOR")
ROUTE235.setToField("set_rotation")
ROUTE235.setToNode("hanim_l_ankle")

Scene26.addChildren(ROUTE235)
ROUTE236 = x3d.ROUTE()
ROUTE236.setFromField("value_changed")
ROUTE236.setFromNode("L_MIDTARSAL_ANIMATOR")
ROUTE236.setToField("set_rotation")
ROUTE236.setToNode("hanim_l_midtarsal")

Scene26.addChildren(ROUTE236)
ROUTE237 = x3d.ROUTE()
ROUTE237.setFromField("value_changed")
ROUTE237.setFromNode("R_HIP_ANIMATOR")
ROUTE237.setToField("set_rotation")
ROUTE237.setToNode("hanim_r_hip")

Scene26.addChildren(ROUTE237)
ROUTE238 = x3d.ROUTE()
ROUTE238.setFromField("value_changed")
ROUTE238.setFromNode("R_KNEE_ANIMATOR")
ROUTE238.setToField("set_rotation")
ROUTE238.setToNode("hanim_r_knee")

Scene26.addChildren(ROUTE238)
ROUTE239 = x3d.ROUTE()
ROUTE239.setFromField("value_changed")
ROUTE239.setFromNode("R_ANKLE_ANIMATOR")
ROUTE239.setToField("set_rotation")
ROUTE239.setToNode("hanim_r_ankle")

Scene26.addChildren(ROUTE239)
ROUTE240 = x3d.ROUTE()
ROUTE240.setFromField("value_changed")
ROUTE240.setFromNode("R_MIDTARSAL_ANIMATOR")
ROUTE240.setToField("set_rotation")
ROUTE240.setToNode("hanim_r_midtarsal")

Scene26.addChildren(ROUTE240)
ROUTE241 = x3d.ROUTE()
ROUTE241.setFromField("value_changed")
ROUTE241.setFromNode("VL5_ANIMATOR")
ROUTE241.setToField("set_rotation")
ROUTE241.setToNode("hanim_vl5")

Scene26.addChildren(ROUTE241)
ROUTE242 = x3d.ROUTE()
ROUTE242.setFromField("value_changed")
ROUTE242.setFromNode("SKULLBASE_ANIMATOR")
ROUTE242.setToField("set_rotation")
ROUTE242.setToNode("hanim_skullbase")

Scene26.addChildren(ROUTE242)
ROUTE243 = x3d.ROUTE()
ROUTE243.setFromField("value_changed")
ROUTE243.setFromNode("L_SHOULDER_ANIMATOR")
ROUTE243.setToField("set_rotation")
ROUTE243.setToNode("hanim_l_shoulder")

Scene26.addChildren(ROUTE243)
ROUTE244 = x3d.ROUTE()
ROUTE244.setFromField("value_changed")
ROUTE244.setFromNode("L_ELBOW_ANIMATOR")
ROUTE244.setToField("set_rotation")
ROUTE244.setToNode("hanim_l_elbow")

Scene26.addChildren(ROUTE244)
ROUTE245 = x3d.ROUTE()
ROUTE245.setFromField("value_changed")
ROUTE245.setFromNode("L_WRIST_ANIMATOR")
ROUTE245.setToField("set_rotation")
ROUTE245.setToNode("hanim_l_wrist")

Scene26.addChildren(ROUTE245)
ROUTE246 = x3d.ROUTE()
ROUTE246.setFromField("value_changed")
ROUTE246.setFromNode("R_SHOULDER_ANIMATOR")
ROUTE246.setToField("set_rotation")
ROUTE246.setToNode("hanim_r_shoulder")

Scene26.addChildren(ROUTE246)
ROUTE247 = x3d.ROUTE()
ROUTE247.setFromField("value_changed")
ROUTE247.setFromNode("R_ELBOW_ANIMATOR")
ROUTE247.setToField("set_rotation")
ROUTE247.setToNode("hanim_r_elbow")

Scene26.addChildren(ROUTE247)
ROUTE248 = x3d.ROUTE()
ROUTE248.setFromField("value_changed")
ROUTE248.setFromNode("R_WRIST_ANIMATOR")
ROUTE248.setToField("set_rotation")
ROUTE248.setToNode("hanim_r_wrist")

Scene26.addChildren(ROUTE248)
ROUTE249 = x3d.ROUTE()
ROUTE249.setFromNode("TIMER")
ROUTE249.setFromField("fraction_changed")
ROUTE249.setToNode("hanim_skullbase_displacer")
ROUTE249.setToField("weight")

Scene26.addChildren(ROUTE249)

X3D0.setScene(Scene26)
X3D0.toFileX3D("../data/BoxManC_RoundTrip.x3d")
