# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="4.0", 
head=head(children=[component(name="HAnim", level=1),
meta(name="title", content="HAnim2SpecificationLOA3Invisible.x3d"),
meta(name="description", content="HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template."),
meta(name="reference", content="https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"),
meta(name="created", content="24 April 2013"),
meta(name="modified", content="23 December 2021"),
meta(name="creator", content="Matthew T. Beitler, Joe D. Williams, Don Brutzman"),
meta(name="reference", content="HAnim2SpecificationLOA3Illustrated.x3d"),
meta(name="reference", content="HAnim2SpecificationLOA3Animation.x3d"),
meta(name="reference", content="HAnimSpecificationExampleChangeLog.txt"),
meta(name="Image", content="images/BonesAllSkeletonFrontViewLOA1.png"),
meta(name="Image", content="images/BonesAllSkeletonFrontViewLOA2.png"),
meta(name="Image", content="images/BonesAllSkeletonFrontViewLOA3.png"),
meta(name="TODO", content="move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"),
meta(name="TODO", content="insert MetadataInteger nodes indicating LOA for each Joint and Segment"),
meta(name="reference", content="Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989."),
meta(name="reference", content="http://www.cis.upenn.edu/~badler/anthro/89-71.ps"),
meta(name="reference", content="tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf"),
meta(name="translator", content="Don Brutzman and Joe Williams"),
meta(name="generator", content="BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"),
meta(name="reference", content="originals/LOA3ExampleSourceWithDiamondsOriginal.wrl"),
meta(name="reference", content="originals/LOA3ExampleSourceWithDiamondsOriginal.x3d"),
meta(name="reference", content="originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d"),
meta(name="reference", content="HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames"),
meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
meta(name="identifier", content="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Invisible.x3d"),
meta(name="license", content="../license.html"),
meta(name="translated", content="24 March 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
Background(skyColor=[(0.3,0.3,0.3)]),
NavigationInfo(),
Group(DEF="Original_WorldInfo", children=[
WorldInfo(info=[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "], title="HANIM 200x Default Joint Centers, LOA3")]),
Comment(value=''' TODO move viewpoints to be internal to HAnimHumanoid '''),

Comment(value=''' Viewpoint centerOfRotation="0 0.9149 0.0016" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human. '''),

Viewpoint(centerOfRotation=((0,0.9149,0.0016)), description="Humanoid LOA 3 Front", position=((0,0.4,4))),
Viewpoint(centerOfRotation=((0,0.9149,0.0016)), description="Humanoid LOA 3 Front Close", position=((0,0.8,2))),
Viewpoint(centerOfRotation=((0,0.9149,0.0016)), description="Humanoid LOA 3 Front Closer", position=((0,1.2,1))),
Viewpoint(centerOfRotation=((0,1.5,0.0016)), description="Humanoid LOA 3 Front Face", position=((0,1.63,1))),
Viewpoint(centerOfRotation=((0,0.9149,0.0016)), description="Humanoid LOA 3 Right Side", orientation=((0,1,0,1.5708)), position=((2.6,0.8,0))),
Viewpoint(centerOfRotation=((0,0.9149,0.0016)), description="Humanoid LOA 3 Right Side Close", orientation=((0,1,0,1.2)), position=((1,0.8,0.5))),
Viewpoint(centerOfRotation=((0,0.9149,0.0016)), description="Humanoid LOA 3 Left Side Close", orientation=((0,1,0,-1.2)), position=((-1,0.8,0.5))),
Viewpoint(centerOfRotation=((0,0.9149,0.0016)), description="Humanoid LOA 3 Left Side", orientation=((0,1,0,-1.5708)), position=((-2.6,0.8,0))),
Viewpoint(centerOfRotation=((0,0.9149,0.0016)), description="Humanoid LOA 3 Top", orientation=((1,0,0,-1.5708)), position=((0,3.5,0))),
HAnimHumanoid(name="humanoid", DEF="hanim_humanoid", loa=3, version="2.0", 
metadata=(
MetadataSet(name="HAnimHumanoid.info", reference="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid", value=[
MetadataString(name="authorName", value=["Matthew T. Beitler Joe D. Williams Don Brutzman"]),
MetadataString(name="authorEmail", value=["HAnim@web3D.org"]),
MetadataString(name="copyright", value=["none"]),
MetadataString(name="creationDate", value=["12 May 1999"]),
MetadataFloat(name="height", value=[float(1.7504)]),
MetadataString(name="humanoidVersion", value=["2.0"]),
MetadataString(name="usageRestrictions", value=["none"])])), skeleton=[
HAnimJoint(name="humanoid_root", DEF="hanim_humanoid_root", center=((0,0.824,0.0277)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="sacrum", DEF="hanim_sacrum"),
HAnimJoint(name="sacroiliac", DEF="hanim_sacroiliac", center=((0,0.9149,0.0016)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="pelvis", DEF="hanim_pelvis", children=[
HAnimSite(name="r_iliocristale_pt", DEF="hanim_r_iliocristale_pt", translation=((-0.1525,1.0628,0.0035))),
HAnimSite(name="r_trochanterion_pt", DEF="hanim_r_trochanterion_pt", translation=((-0.1689,0.8419,0.0352))),
HAnimSite(name="l_iliocristale_pt", DEF="hanim_l_iliocristale_pt", translation=((0.1612,1.0537,0.0008))),
HAnimSite(name="l_trochanterion_pt", DEF="hanim_l_trochanterion_pt", translation=((0.1677,0.8336,0.0303))),
HAnimSite(name="r_asis_pt", DEF="hanim_r_asis_pt", translation=((-0.0887,1.0021,0.1112))),
HAnimSite(name="l_asis_pt", DEF="hanim_l_asis_pt", translation=((0.0925,0.9983,0.1052))),
HAnimSite(name="r_psis_pt", DEF="hanim_r_psis_pt", translation=((-0.0716,1.019,-0.1138))),
HAnimSite(name="l_psis_pt", DEF="hanim_l_psis_pt", translation=((0.0774,1.019,-0.1151))),
HAnimSite(name="crotch_pt", DEF="hanim_crotch_pt", translation=((0.0034,0.8266,0.0257)))]),
HAnimJoint(name="l_hip", DEF="hanim_l_hip", center=((0.0961,0.9124,-0.0001)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_thigh", DEF="hanim_l_thigh", children=[
HAnimSite(name="l_knee_crease_pt", DEF="hanim_l_knee_crease_pt", translation=((0.0993,0.4881,-0.0309))),
HAnimSite(name="l_femoral_lateral_epicondyle_pt", DEF="hanim_l_femoral_lateral_epicondyle_pt", translation=((0.1598,0.4967,0.0297))),
HAnimSite(name="l_femoral_medial_epicondyle_pt", DEF="hanim_l_femoral_medial_epicondyle_pt", translation=((0.0398,0.4946,0.0303)))]),
HAnimJoint(name="l_knee", DEF="hanim_l_knee", center=((0.104,0.4867,0.0308)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_calf", DEF="hanim_l_calf"),
HAnimJoint(name="l_talocrural", DEF="hanim_l_talocrural", center=((0.1101,0.0656,-0.0736)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_talus", DEF="hanim_l_talus", children=[
HAnimSite(name="l_lateral_malleolus_pt", DEF="hanim_l_lateral_malleolus_pt", translation=((0.1308,0.0597,-0.1032))),
HAnimSite(name="l_medial_malleolus_pt", DEF="hanim_l_medial_malleolus_pt", translation=((0.089,0.0716,-0.0881))),
HAnimSite(name="l_sphyrion_pt", DEF="hanim_l_sphyrion_pt", translation=((0.089,0.0575,-0.0943))),
HAnimSite(name="l_calcaneus_posterior_pt", DEF="hanim_l_calcaneus_posterior_pt", translation=((0.0974,0.0259,-0.1171)))]),
HAnimJoint(name="l_tarsometatarsal_2", DEF="hanim_l_tarsometatarsal_2", center=((0.1086,0.0001,-0.0368)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metatarsal_2", DEF="hanim_l_metatarsal_2"),
HAnimJoint(name="l_metatarsophalangeal_2", DEF="hanim_l_metatarsophalangeal_2", center=((0.1086,0.0001,0.0368)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_proximal_phalanx_2", DEF="hanim_l_tarsal_proximal_phalanx_2", children=[
HAnimSite(name="l_metatarsal_phalanx_1_pt", DEF="hanim_l_metatarsal_phalanx_1_pt", translation=((0.0816,0.0232,0.0106)))]),
HAnimJoint(name="l_tarsal_distal_interphalangeal_2", DEF="hanim_l_tarsal_distal_interphalangeal_2", center=((0.1086,0,0.0762)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_distal_phalanx_2", DEF="hanim_l_tarsal_distal_phalanx_2", children=[
HAnimSite(name="l_forefoot_tip", DEF="hanim_l_forefoot_tip", translation=((0.1354,0.0016,0.1476))),
HAnimSite(name="l_metatarsal_phalanx_5_pt", DEF="hanim_l_metatarsal_phalanx_5_pt", translation=((0.1825,0.007,0.0928))),
HAnimSite(name="l_tarsal_distal_phalanx_2_pt", DEF="hanim_l_tarsal_distal_phalanx_2_pt", translation=((0.1195,0.0079,0.1433)))])])])])])])]),
HAnimJoint(name="r_hip", DEF="hanim_r_hip", center=((-0.0961,0.9124,-0.0001)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_thigh", DEF="hanim_r_thigh", children=[
HAnimSite(name="r_knee_crease_pt", DEF="hanim_r_knee_crease_pt", translation=((-0.0825,0.4932,-0.0326))),
HAnimSite(name="r_femoral_lateral_epicondyle_pt", DEF="hanim_r_femoral_lateral_epicondyle_pt", translation=((-0.1421,0.4992,0.031))),
HAnimSite(name="r_femoral_medial_epicondyle_pt", DEF="hanim_r_femoral_medial_epicondyle_pt", translation=((-0.0221,0.5014,0.0289)))]),
HAnimJoint(name="r_knee", DEF="hanim_r_knee", center=((-0.104,0.4867,0.0308)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_calf", DEF="hanim_r_calf"),
HAnimJoint(name="r_talocrural", DEF="hanim_r_talocrural", center=((-0.1101,0.0656,-0.0736)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_talus", DEF="hanim_r_talus", children=[
HAnimSite(name="r_lateral_malleolus_pt", DEF="hanim_r_lateral_malleolus_pt", translation=((-0.1006,0.0658,-0.1075))),
HAnimSite(name="r_medial_malleolus_pt", DEF="hanim_r_medial_malleolus_pt", translation=((-0.0591,0.076,-0.0928))),
HAnimSite(name="r_sphyrion_pt", DEF="hanim_r_sphyrion_pt", translation=((-0.0603,0.061,-0.1002))),
HAnimSite(name="r_calcaneus_posterior_pt", DEF="hanim_r_calcaneus_posterior_pt", translation=((-0.0692,0.0297,-0.1221)))]),
HAnimJoint(name="r_tarsometatarsal_2", DEF="hanim_r_tarsometatarsal_2", center=((-0.1086,0.0001,-0.0368)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_metatarsal_2", DEF="hanim_r_metatarsal_2"),
HAnimJoint(name="r_metatarsophalangeal_2", DEF="hanim_r_metatarsophalangeal_2", center=((-0.1086,0.0001,0.0368)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_tarsal_proximal_phalanx_2", DEF="hanim_r_tarsal_proximal_phalanx_2", children=[
HAnimSite(name="r_metatarsal_phalanx_1_pt", DEF="hanim_r_metatarsal_phalanx_1_pt", translation=((-0.0521,0.026,0.0127)))]),
HAnimJoint(name="r_tarsal_distal_interphalangeal_2", DEF="hanim_r_tarsal_distal_interphalangeal_2", center=((-0.1086,0,0.0762)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_tarsal_distal_phalanx_2", DEF="hanim_r_tarsal_distal_phalanx_2", children=[
HAnimSite(name="r_forefoot_tip", DEF="hanim_r_forefoot_tip", translation=((-0.1043,0.0227,0.145))),
HAnimSite(name="r_metatarsal_phalanx_5_pt", DEF="hanim_r_metatarsal_phalanx_5_pt", translation=((-0.1523,0.0166,0.0895))),
HAnimSite(name="r_tarsal_distal_phalanx_2_pt", DEF="hanim_r_tarsal_distal_phalanx_2_pt", translation=((-0.0883,0.0134,0.1383)))])])])])])])])]),
HAnimJoint(name="vl5", DEF="hanim_vl5", center=((0.0028,1.0568,-0.0776)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l5", DEF="hanim_l5", children=[
HAnimSite(name="waist_preferred_posterior_pt", DEF="hanim_waist_preferred_posterior_pt", translation=((0,1.0915,-0.1091))),
HAnimSite(name="navel_pt", DEF="hanim_navel_pt", translation=((0.0069,1.0966,0.1017)))]),
HAnimJoint(name="vl4", DEF="hanim_vl4", center=((0.0035,1.0925,-0.0787)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l4", DEF="hanim_l4"),
HAnimJoint(name="vl3", DEF="hanim_vl3", center=((0.0041,1.1276,-0.0796)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l3", DEF="hanim_l3"),
HAnimJoint(name="vl2", DEF="hanim_vl2", center=((0.0045,1.1546,-0.08)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l2", DEF="hanim_l2", children=[
HAnimSite(name="r_rib10_pt", DEF="hanim_r_rib10_pt", translation=((-0.0711,1.1941,0.1016))),
HAnimSite(name="l_rib10_pt", DEF="hanim_l_rib10_pt", translation=((0.0871,1.1925,0.0992))),
HAnimSite(name="rib10_midspine_pt", DEF="hanim_rib10_midspine_pt", translation=((0.0049,1.1908,-0.1113)))]),
HAnimJoint(name="vl1", DEF="hanim_vl1", center=((0.0048,1.1912,-0.0805)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l1", DEF="hanim_l1"),
HAnimJoint(name="vt12", DEF="hanim_vt12", center=((0.0051,1.2278,-0.0808)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t12", DEF="hanim_t12"),
HAnimJoint(name="vt11", DEF="hanim_vt11", center=((0.0053,1.2679,-0.081)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t11", DEF="hanim_t11"),
HAnimJoint(name="vt10", DEF="hanim_vt10", center=((0.0056,1.2848,-0.0822)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t10", DEF="hanim_t10", children=[
HAnimSite(name="substernale_pt", DEF="hanim_substernale_pt", translation=((0.0085,1.2995,0.1147)))]),
HAnimJoint(name="vt9", DEF="hanim_vt9", center=((0.0057,1.3126,-0.0838)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t9", DEF="hanim_t9", children=[
HAnimSite(name="r_thelion_pt", DEF="hanim_r_thelion_pt", translation=((-0.0736,1.3385,0.1217))),
HAnimSite(name="l_thelion_pt", DEF="hanim_l_thelion_pt", translation=((0.0918,1.3382,0.1192)))]),
HAnimJoint(name="vt8", DEF="hanim_vt8", center=((0.0057,1.3382,-0.0845)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t8", DEF="hanim_t8"),
HAnimJoint(name="vt7", DEF="hanim_vt7", center=((0.0058,1.3625,-0.0833)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t7", DEF="hanim_t7"),
HAnimJoint(name="vt6", DEF="hanim_vt6", center=((0.0059,1.3866,-0.08)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t6", DEF="hanim_t6"),
HAnimJoint(name="vt5", DEF="hanim_vt5", center=((0.006,1.4102,-0.0745)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t5", DEF="hanim_t5"),
HAnimJoint(name="vt4", DEF="hanim_vt4", center=((0.0061,1.432,-0.0675)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t4", DEF="hanim_t4"),
HAnimJoint(name="vt3", DEF="hanim_vt3", center=((0.0062,1.4583,-0.057)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t3", DEF="hanim_t3"),
HAnimJoint(name="vt2", DEF="hanim_vt2", center=((0.0063,1.4761,-0.0484)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t2", DEF="hanim_t2"),
HAnimJoint(name="vt1", DEF="hanim_vt1", center=((0.0065,1.4951,-0.0387)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t1", DEF="hanim_t1", children=[
HAnimSite(name="suprasternale_pt", DEF="hanim_suprasternale_pt", translation=((0.0084,1.4714,0.0551))),
HAnimSite(name="cervicale_pt", DEF="hanim_cervicale_pt", translation=((0.0064,1.52,-0.0815)))]),
HAnimJoint(name="vc7", DEF="hanim_vc7", center=((0.0066,1.5132,-0.0301)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c7", DEF="hanim_c7", children=[
HAnimSite(name="r_neck_base_pt", DEF="hanim_r_neck_base_pt", translation=((-0.0419,1.5149,-0.022))),
HAnimSite(name="l_neck_base_pt", DEF="hanim_l_neck_base_pt", translation=((0.0646,1.5141,-0.038)))]),
HAnimJoint(name="vc6", DEF="hanim_vc6", center=((0.0066,1.5357,-0.0143)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c6", DEF="hanim_c6"),
HAnimJoint(name="vc5", DEF="hanim_vc5", center=((0.0066,1.552,-0.0082)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c5", DEF="hanim_c5"),
HAnimJoint(name="vc4", DEF="hanim_vc4", center=((0.0066,1.5662,-0.0084)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c4", DEF="hanim_c4"),
HAnimJoint(name="vc3", DEF="hanim_vc3", center=((0.0066,1.58,-0.0103)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c3", DEF="hanim_c3"),
HAnimJoint(name="vc2", DEF="hanim_vc2", center=((0.0066,1.5928,-0.0103)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c2", DEF="hanim_c2"),
HAnimJoint(name="vc1", DEF="hanim_vc1", center=((0.0066,1.6144,-0.0034)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c1", DEF="hanim_c1"),
HAnimJoint(name="skullbase", DEF="hanim_skullbase", center=((0.0044,1.6209,0.0236)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="skull", DEF="hanim_skull", children=[
HAnimSite(name="skull_vertex_tip", DEF="hanim_skull_vertex_tip", translation=((0.005,1.7504,0.0055)), children=[
Comment(value=''' TODO move skull_tip x to zero, check others for symmetry '''),
]),
HAnimSite(name="sellion_pt", DEF="hanim_sellion_pt", translation=((0.0058,1.6316,0.0852))),
HAnimSite(name="r_infraorbitale_pt", DEF="hanim_r_infraorbitale_pt", translation=((-0.0237,1.6171,0.0752))),
HAnimSite(name="l_infraorbitale_pt", DEF="hanim_l_infraorbitale_pt", translation=((0.0341,1.6171,0.0752))),
HAnimSite(name="supramenton_pt", DEF="hanim_supramenton_pt", translation=((0.0061,1.541,0.0805))),
HAnimSite(name="r_tragion_pt", DEF="hanim_r_tragion_pt", translation=((-0.0646,1.6347,0.0302))),
HAnimSite(name="r_gonion_pt", DEF="hanim_r_gonion_pt", translation=((-0.052,1.5529,0.0347))),
HAnimSite(name="l_tragion_pt", DEF="hanim_l_tragion_pt", translation=((0.0739,1.6348,0.0282))),
HAnimSite(name="l_gonion_pt", DEF="hanim_l_gonion_pt", translation=((0.0631,1.553,0.033))),
HAnimSite(name="nuchale_pt", DEF="hanim_nuchale_pt", translation=((0.0039,1.5972,-0.0796)))]),
HAnimJoint(name="l_eyeball_joint", DEF="hanim_l_eyeball_joint", center=((0.0336,1.6332,0.0502)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_eyeball", DEF="hanim_l_eyeball", children=[
HAnimSite(name="l_eyeball_site_view", DEF="hanim_l_eyeball_site_view", translation=((0.034,1.64,0.05)), children=[
Viewpoint(DEF="hanim_l_eyeball_site_viewpoint", description="l_eyeball_site_viewpoint looking forward", orientation=((0,1,0,3.141593)), position=((0,0,0)))])])]),
HAnimJoint(name="l_eyelid_joint", DEF="hanim_l_eyelid_joint", center=((0.0336,1.6332,0.0502)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_eyelid", DEF="hanim_l_eyelid")]),
HAnimJoint(name="l_eyebrow_joint", DEF="hanim_l_eyebrow_joint", center=((0.0336,1.635,0.0506)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_eyebrow", DEF="hanim_l_eyebrow")]),
HAnimJoint(name="r_eyeball_joint", DEF="hanim_r_eyeball_joint", center=((-0.0336,1.6332,0.0502)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_eyeball", DEF="hanim_r_eyeball", children=[
HAnimSite(name="r_eyeball_site_view", DEF="hanim_r_eyeball_site_view", translation=((-0.034,1.64,0.05)), children=[
Viewpoint(DEF="hanim_r_eyeball_site_viewpoint", description="r_eyeball_site_viewpoint looking forward", orientation=((0,1,0,3.141593)), position=((0,0,0)))])])]),
HAnimJoint(name="r_eyelid_joint", DEF="hanim_r_eyelid_joint", center=((-0.0336,1.6332,0.0502)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_eyelid", DEF="hanim_r_eyelid")]),
HAnimJoint(name="r_eyebrow_joint", DEF="hanim_r_eyebrow_joint", center=((-0.0336,1.635,0.0506)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_eyebrow", DEF="hanim_r_eyebrow")]),
HAnimJoint(name="temporomandibular", DEF="hanim_temporomandibular", center=((0.0,1.63,0.015)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint '''),

HAnimSegment(name="jaw", DEF="hanim_jaw", children=[
HAnimSite(name="temporomandibular_l_site_pt", DEF="hanim_temporomandibular_l_site_pt", translation=((0.045,1.63,0.0))),
HAnimSite(name="temporomandibular_r_site_pt", DEF="hanim_temporomandibular_r_site_pt", translation=((-0.045,1.63,0.0)))]),])])])])])])])])]),
HAnimJoint(name="l_sternoclavicular", DEF="hanim_l_sternoclavicular", center=((0.082,1.4488,-0.0353)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_clavicle", DEF="hanim_l_clavicle", children=[
HAnimSite(name="l_clavicle_pt", DEF="hanim_l_clavicle_pt", translation=((0.0271,1.4943,0.0394))),
HAnimSite(name="l_acromion_pt", DEF="hanim_l_acromion_pt", translation=((0.2032,1.476,-0.049))),
HAnimSite(name="l_axilla_proximal_pt", DEF="hanim_l_axilla_proximal_pt", translation=((0.1777,1.4065,-0.0075))),
HAnimSite(name="l_axilla_distal_pt", DEF="hanim_l_axilla_distal_pt", translation=((0.1706,1.4072,-0.0875)))]),
HAnimJoint(name="l_acromioclavicular", DEF="hanim_l_acromioclavicular", center=((0.0962,1.4269,-0.0424)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_scapula", DEF="hanim_l_scapula"),
HAnimJoint(name="l_shoulder", DEF="hanim_l_shoulder", center=((0.2029,1.4376,-0.0387)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_upperarm", DEF="hanim_l_upperarm", children=[
HAnimSite(name="l_humeral_lateral_epicondyle_pt", DEF="hanim_l_humeral_lateral_epicondyle_pt", translation=((0.228,1.1482,-0.11)))]),
HAnimJoint(name="l_elbow", DEF="hanim_l_elbow", center=((0.2014,1.1357,-0.0682)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_forearm", DEF="hanim_l_forearm", children=[
HAnimSite(name="l_radial_styloid_pt", DEF="hanim_l_radial_styloid_pt", translation=((0.1901,0.8645,-0.0415))),
HAnimSite(name="l_olecranon_pt", DEF="hanim_l_olecranon_pt", translation=((0.1962,1.1375,-0.1123))),
HAnimSite(name="l_humeral_medial_epicondyle_pt", DEF="hanim_l_humeral_medial_epicondyle_pt", translation=((0.1735,1.1272,-0.1113))),
HAnimSite(name="l_radiale_pt", DEF="hanim_l_radiale_pt", translation=((0.2182,1.1212,-0.1167)))]),
HAnimJoint(name="l_radiocarpal", DEF="hanim_l_radiocarpal", center=((0.1984,0.8663,-0.0583)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal", DEF="hanim_l_carpal", children=[
HAnimSite(name="l_metacarpal_phalanx_2_pt", DEF="hanim_l_metacarpal_phalanx_2_pt", translation=((0.2009,0.8139,-0.0237))),
HAnimSite(name="l_ulnar_styloid_pt", DEF="hanim_l_ulnar_styloid_pt", translation=((0.2142,0.8529,-0.0648))),
HAnimSite(name="l_metacarpal_phalanx_5_pt", DEF="hanim_l_metacarpal_phalanx_5_pt", translation=((0.1929,0.786,-0.1122))),
HAnimSite(name="l_hand_front_view", DEF="hanim_l_hand_front_view", translation=((0.3,0.75,0.45)), children=[
Viewpoint(DEF="hanim_l_hand_front_viewpoint", centerOfRotation=((0,0.7,0)), description="left hand front", position=((0,0,0)))])]),
HAnimJoint(name="l_carpometacarpal_1", DEF="hanim_l_carpometacarpal_1", center=((0.1924,0.8472,-0.0534)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metacarpal_1", DEF="hanim_l_metacarpal_1"),
HAnimJoint(name="l_metacarpophalangeal_1", DEF="hanim_l_metacarpophalangeal_1", center=((0.1951,0.8226,0.0246)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_proximal_phalanx_1", DEF="hanim_l_carpal_proximal_phalanx_1"),
HAnimJoint(name="l_carpal_interphalangeal_1", DEF="hanim_l_carpal_interphalangeal_1", center=((0.1955,0.8159,0.0464)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_distal_phalanx_1", DEF="hanim_l_carpal_distal_phalanx_1", children=[
HAnimSite(name="l_carpal_distal_phalanx_1_tip", DEF="hanim_l_carpal_distal_phalanx_1_tip", translation=((0.1982,0.8061,0.0759)))])])])]),
HAnimJoint(name="l_carpometacarpal_2", DEF="hanim_l_carpometacarpal_2", center=((0.1983,0.8024,-0.028)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metacarpal_2", DEF="hanim_l_metacarpal_2"),
HAnimJoint(name="l_metacarpophalangeal_2", DEF="hanim_l_metacarpophalangeal_2", center=((0.1983,0.7815,-0.028)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_proximal_phalanx_2", DEF="hanim_l_carpal_proximal_phalanx_2"),
HAnimJoint(name="l_carpal_proximal_interphalangeal_2", DEF="hanim_l_carpal_proximal_interphalangeal_2", center=((0.2017,0.7363,-0.0248)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_middle_phalanx_2", DEF="hanim_l_carpal_middle_phalanx_2"),
HAnimJoint(name="l_carpal_distal_interphalangeal_2", DEF="hanim_l_carpal_distal_interphalangeal_2", center=((0.2028,0.7139,-0.0236)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_distal_phalanx_2", DEF="hanim_l_carpal_distal_phalanx_2", children=[
HAnimSite(name="l_carpal_distal_phalanx_2_tip", DEF="hanim_l_carpal_distal_phalanx_2_tip", translation=((0.2089,0.6858,-0.0245))),
HAnimSite(name="l_dactylion_pt", DEF="hanim_l_dactylion_pt", translation=((0.2056,0.6743,-0.0482)))])])])])]),
HAnimJoint(name="l_carpometacarpal_3", DEF="hanim_l_carpometacarpal_3", center=((0.1987,0.8029,-0.053)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metacarpal_3", DEF="hanim_l_metacarpal_3"),
HAnimJoint(name="l_metacarpophalangeal_3", DEF="hanim_l_metacarpophalangeal_3", center=((0.1987,0.7818,-0.053)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_proximal_phalanx_3", DEF="hanim_l_carpal_proximal_phalanx_3"),
HAnimJoint(name="l_carpal_proximal_interphalangeal_3", DEF="hanim_l_carpal_proximal_interphalangeal_3", center=((0.2013,0.7273,-0.0503)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_middle_phalanx_3", DEF="hanim_l_carpal_middle_phalanx_3"),
HAnimJoint(name="l_carpal_distal_interphalangeal_3", DEF="hanim_l_carpal_distal_interphalangeal_3", center=((0.2026,0.7011,-0.0494)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_distal_phalanx_3", DEF="hanim_l_carpal_distal_phalanx_3", children=[
HAnimSite(name="l_carpal_distal_phalanx_3_tip", DEF="hanim_l_carpal_distal_phalanx_3_tip", translation=((0.208,0.6731,-0.0491)))])])])])]),
HAnimJoint(name="l_carpometacarpal_4", DEF="hanim_l_carpometacarpal_4", center=((0.1956,0.8019,-0.0794)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metacarpal_4", DEF="hanim_l_metacarpal_4"),
HAnimJoint(name="l_metacarpophalangeal_4", DEF="hanim_l_metacarpophalangeal_4", center=((0.1956,0.7815,-0.0794)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_proximal_phalanx_4", DEF="hanim_l_carpal_proximal_phalanx_4"),
HAnimJoint(name="l_carpal_proximal_interphalangeal_4", DEF="hanim_l_carpal_proximal_interphalangeal_4", center=((0.1973,0.7287,-0.0777)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_middle_phalanx_4", DEF="hanim_l_carpal_middle_phalanx_4"),
HAnimJoint(name="l_carpal_distal_interphalangeal_4", DEF="hanim_l_carpal_distal_interphalangeal_4", center=((0.1983,0.7045,-0.0767)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_distal_phalanx_4", DEF="hanim_l_carpal_distal_phalanx_4", children=[
HAnimSite(name="l_carpal_distal_phalanx_4_tip", DEF="hanim_l_carpal_distal_phalanx_4_tip", translation=((0.2035,0.675,-0.0756)))])])])])]),
HAnimJoint(name="l_carpometacarpal_5", DEF="hanim_l_carpometacarpal_5", center=((0.1925,0.8066,-0.1036)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metacarpal_5", DEF="hanim_l_metacarpal_5"),
HAnimJoint(name="l_metacarpophalangeal_5", DEF="hanim_l_metacarpophalangeal_5", center=((0.1925,0.7866,-0.1036)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_proximal_phalanx_5", DEF="hanim_l_carpal_proximal_phalanx_5"),
HAnimJoint(name="l_carpal_proximal_interphalangeal_5", DEF="hanim_l_carpal_proximal_interphalangeal_5", center=((0.1938,0.7452,-0.1024)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_middle_phalanx_5", DEF="hanim_l_carpal_middle_phalanx_5"),
HAnimJoint(name="l_carpal_distal_interphalangeal_5", DEF="hanim_l_carpal_distal_interphalangeal_5", center=((0.1948,0.7277,-0.1017)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_distal_phalanx_5", DEF="hanim_l_carpal_distal_phalanx_5", children=[
HAnimSite(name="l_carpal_distal_phalanx_5_tip", DEF="hanim_l_carpal_distal_phalanx_5_tip", translation=((0.2014,0.7009,-0.1012)))])])])])])])])])])]),
HAnimJoint(name="r_sternoclavicular", DEF="hanim_r_sternoclavicular", center=((-0.082,1.4488,-0.0353)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_clavicle", DEF="hanim_r_clavicle", children=[
HAnimSite(name="r_clavicle_pt", DEF="hanim_r_clavicle_pt", translation=((-0.0115,1.4943,0.04))),
HAnimSite(name="r_acromion_pt", DEF="hanim_r_acromion_pt", translation=((-0.1905,1.4791,-0.0431))),
HAnimSite(name="r_axilla_proximal_pt", DEF="hanim_r_axilla_proximal_pt", translation=((-0.1626,1.4072,-0.0031))),
HAnimSite(name="r_axilla_distal_pt", DEF="hanim_r_axilla_distal_pt", translation=((-0.1603,1.4098,-0.0826)))]),
HAnimJoint(name="r_acromioclavicular", DEF="hanim_r_acromioclavicular", center=((-0.0962,1.4269,-0.0424)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_scapula", DEF="hanim_r_scapula"),
HAnimJoint(name="r_shoulder", DEF="hanim_r_shoulder", center=((-0.2029,1.4376,-0.0387)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_upperarm", DEF="hanim_r_upperarm", children=[
HAnimSite(name="r_humeral_lateral_epicondyle_pt", DEF="hanim_r_humeral_lateral_epicondyle_pt", translation=((-0.2224,1.1517,-0.1033)))]),
HAnimJoint(name="r_elbow", DEF="hanim_r_elbow", center=((-0.2014,1.1357,-0.0682)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_forearm", DEF="hanim_r_forearm", children=[
HAnimSite(name="r_radial_styloid_pt", DEF="hanim_r_radial_styloid_pt", translation=((-0.1884,0.8676,-0.036))),
HAnimSite(name="r_olecranon_pt", DEF="hanim_r_olecranon_pt", translation=((-0.1907,1.1405,-0.1065))),
HAnimSite(name="r_humeral_medial_epicondyle_pt", DEF="hanim_r_humeral_medial_epicondyle_pt", translation=((-0.168,1.1298,-0.1062))),
HAnimSite(name="r_radiale_pt", DEF="hanim_r_radiale_pt", translation=((-0.213,1.1305,-0.1091)))]),
HAnimJoint(name="r_radiocarpal", DEF="hanim_r_radiocarpal", center=((-0.1984,0.8663,-0.0583)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_carpal", DEF="hanim_r_carpal", children=[
HAnimSite(name="r_metacarpal_phalanx_2_pt", DEF="hanim_r_metacarpal_phalanx_2_pt", translation=((-0.1977,0.8169,-0.0177))),
HAnimSite(name="r_ulnar_styloid_pt", DEF="hanim_r_ulnar_styloid_pt", translation=((-0.2117,0.8562,-0.0584))),
HAnimSite(name="r_metacarpal_phalanx_5_pt", DEF="hanim_r_metacarpal_phalanx_5_pt", translation=((-0.1929,0.789,-0.1064))),
HAnimSite(name="r_hand_front_view", DEF="hanim_r_hand_front_view", translation=((-0.3,0.75,0.45)), children=[
Viewpoint(DEF="hanim_r_hand_front_viewpoint", centerOfRotation=((0,0.7,0)), description="right hand front", position=((0,0,0)))])]),
HAnimJoint(name="r_carpometacarpal_1", DEF="hanim_r_carpometacarpal_1", center=((-0.1924,0.8472,-0.0534)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_metacarpal_1", DEF="hanim_r_metacarpal_1"),
HAnimJoint(name="r_metacarpophalangeal_1", DEF="hanim_r_metacarpophalangeal_1", center=((-0.1951,0.8226,0.0246)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_carpal_proximal_phalanx_1", DEF="hanim_r_carpal_proximal_phalanx_1"),
HAnimJoint(name="r_carpal_interphalangeal_1", DEF="hanim_r_carpal_interphalangeal_1", center=((-0.1955,0.8159,0.0464)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_carpal_distal_phalanx_1", DEF="hanim_r_carpal_distal_phalanx_1", children=[
HAnimSite(name="r_carpal_distal_phalanx_1_tip", DEF="hanim_r_carpal_distal_phalanx_1_tip", translation=((-0.1869,0.809,0.082)))])])])]),
HAnimJoint(name="r_carpometacarpal_2", DEF="hanim_r_carpometacarpal_2", center=((-0.1983,0.8024,-0.028)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_metacarpal_2", DEF="hanim_r_metacarpal_2"),
HAnimJoint(name="r_metacarpophalangeal_2", DEF="hanim_r_metacarpophalangeal_2", center=((-0.1983,0.7815,-0.028)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_carpal_proximal_phalanx_2", DEF="hanim_r_carpal_proximal_phalanx_2"),
HAnimJoint(name="r_carpal_proximal_interphalangeal_2", DEF="hanim_r_carpal_proximal_interphalangeal_2", center=((-0.2017,0.7363,-0.0248)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_carpal_middle_phalanx_2", DEF="hanim_r_carpal_middle_phalanx_2"),
HAnimJoint(name="r_carpal_distal_interphalangeal_2", DEF="hanim_r_carpal_distal_interphalangeal_2", center=((-0.2028,0.7139,-0.0236)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_carpal_distal_phalanx_2", DEF="hanim_r_carpal_distal_phalanx_2", children=[
HAnimSite(name="r_carpal_distal_phalanx_2_tip", DEF="hanim_r_carpal_distal_phalanx_2_tip", translation=((-0.198,0.6883,-0.018))),
HAnimSite(name="r_dactylion_pt", DEF="hanim_r_dactylion_pt", translation=((-0.1941,0.6772,-0.0423)))])])])])]),
HAnimJoint(name="r_carpometacarpal_3", DEF="hanim_r_carpometacarpal_3", center=((-0.1987,0.8029,-0.053)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_metacarpal_3", DEF="hanim_r_metacarpal_3"),
HAnimJoint(name="r_metacarpophalangeal_3", DEF="hanim_r_metacarpophalangeal_3", center=((-0.1987,0.7818,-0.053)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_carpal_proximal_phalanx_3", DEF="hanim_r_carpal_proximal_phalanx_3"),
HAnimJoint(name="r_carpal_proximal_interphalangeal_3", DEF="hanim_r_carpal_proximal_interphalangeal_3", center=((-0.2013,0.7273,-0.0503)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_carpal_middle_phalanx_3", DEF="hanim_r_carpal_middle_phalanx_3"),
HAnimJoint(name="r_carpal_distal_interphalangeal_3", DEF="hanim_r_carpal_distal_interphalangeal_3", center=((-0.2026,0.7011,-0.0494)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_carpal_distal_phalanx_3", DEF="hanim_r_carpal_distal_phalanx_3", children=[
HAnimSite(name="r_carpal_distal_phalanx_3_tip", DEF="hanim_r_carpal_distal_phalanx_3_tip", translation=((-0.1969,0.6758,-0.0427)))])])])])]),
HAnimJoint(name="r_carpometacarpal_4", DEF="hanim_r_carpometacarpal_4", center=((-0.1956,0.8019,-0.0794)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_metacarpal_4", DEF="hanim_r_metacarpal_4"),
HAnimJoint(name="r_metacarpophalangeal_4", DEF="hanim_r_metacarpophalangeal_4", center=((-0.1956,0.7815,-0.0794)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_carpal_proximal_phalanx_4", DEF="hanim_r_carpal_proximal_phalanx_4"),
HAnimJoint(name="r_carpal_proximal_interphalangeal_4", DEF="hanim_r_carpal_proximal_interphalangeal_4", center=((-0.1973,0.7287,-0.0777)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_carpal_middle_phalanx_4", DEF="hanim_r_carpal_middle_phalanx_4"),
HAnimJoint(name="r_carpal_distal_interphalangeal_4", DEF="hanim_r_carpal_distal_interphalangeal_4", center=((-0.1983,0.7045,-0.0767)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_carpal_distal_phalanx_4", DEF="hanim_r_carpal_distal_phalanx_4", children=[
HAnimSite(name="r_carpal_distal_phalanx_4_tip", DEF="hanim_r_carpal_distal_phalanx_4_tip", translation=((-0.1934,0.6778,-0.0693)))])])])])]),
HAnimJoint(name="r_carpometacarpal_5", DEF="hanim_r_carpometacarpal_5", center=((-0.1925,0.8066,-0.1036)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_metacarpal_5", DEF="hanim_r_metacarpal_5"),
HAnimJoint(name="r_metacarpophalangeal_5", DEF="hanim_r_metacarpophalangeal_5", center=((-0.1925,0.7866,-0.1036)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_carpal_proximal_phalanx_5", DEF="hanim_r_carpal_proximal_phalanx_5"),
HAnimJoint(name="r_carpal_proximal_interphalangeal_5", DEF="hanim_r_carpal_proximal_interphalangeal_5", center=((-0.1938,0.7452,-0.1024)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_carpal_middle_phalanx_5", DEF="hanim_r_carpal_middle_phalanx_5"),
HAnimJoint(name="r_carpal_distal_interphalangeal_5", DEF="hanim_r_carpal_distal_interphalangeal_5", center=((-0.1948,0.7277,-0.1017)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_carpal_distal_phalanx_5", DEF="hanim_r_carpal_distal_phalanx_5", children=[
HAnimSite(name="r_carpal_distal_phalanx_5_tip", DEF="hanim_r_carpal_distal_phalanx_5_tip", translation=((-0.1938,0.7035,-0.0949)))])])])])])])])])])])])])])])])])])])])])])])])])])])])])], viewpoints=[
HAnimSite(name="l_inclined_view", DEF="hanim_l_inclined_view", rotation=((-0.113,0.993,0.0347,0.671)), translation=((1.62,1.05,2.06)), children=[
Viewpoint(DEF="hanim_l_inclined_viewpoint", description="left inclined", position=((0,0,0)))]),
HAnimSite(name="r_inclined_view", DEF="hanim_r_inclined_view", rotation=((-0.113,-0.993,0.0347,0.671)), translation=((-1.62,1.05,2.06)), children=[
Viewpoint(DEF="hanim_r_inclined_viewpoint", centerOfRotation=((0,0.9,0)), description="right inclined", position=((0,0,0)))]),
HAnimSite(name="front_view", DEF="hanim_front_view", translation=((0,0.85,2.58)), children=[
Viewpoint(DEF="hanim_front_viewpoint", centerOfRotation=((0,0.9,0)), description="front", position=((0,0,0)))]),
HAnimSite(name="back_view", DEF="hanim_back_view", rotation=((0,1,0,3.14)), translation=((0,0.85,-2.58)), children=[
Viewpoint(DEF="hanim_back_viewpoint", centerOfRotation=((0,0.9,0)), description="back", position=((0,0,0)))]),
HAnimSite(name="l_side_view", DEF="hanim_l_side_view", rotation=((0,1,0,1.5708)), translation=((2.6,0.854,0)), children=[
Viewpoint(DEF="hanim_l_side_viewpoint", centerOfRotation=((0,0.9,0)), description="left side", position=((0,0,0)))]),
HAnimSite(name="Top_view", DEF="hanim_Top_view", rotation=((1,0,0,-1.57)), translation=((0,3.5,0)), children=[
Viewpoint(DEF="hanim_Top_viewpoint", centerOfRotation=((0,0.9,0)), description="Top", position=((0,0,0)))]),
HAnimSite(name="front_close_view", DEF="hanim_front_close_view", translation=((0,0.854,1.575)), children=[
Viewpoint(DEF="hanim_front_close_viewpoint", centerOfRotation=((0,0,1.575)), description="front close", position=((0,0,0)))]),
HAnimSite(name="side_close_view", DEF="hanim_side_close_view", rotation=((0,1,0,1.5708)), translation=((1.56,0.854,0)), children=[
Viewpoint(DEF="hanim_side_close_viewpoint", centerOfRotation=((1.6,0,0)), description="side close", position=((0,0,0)))]),
HAnimSite(name="head_front_close_view", DEF="hanim_head_front_close_view", translation=((0,1.5,1)), children=[
Viewpoint(DEF="hanim_head_front_close_viewpoint", centerOfRotation=((0,0,1)), description="head front close", position=((0,0,0)))]),
HAnimSite(name="chest_front_close_view", DEF="hanim_chest_front_close_view", translation=((0,1.2,1)), children=[
Viewpoint(DEF="hanim_chest_front_close_viewpoint", centerOfRotation=((0,0,1)), description="chest front close", position=((0,0,0)))]),
HAnimSite(name="pelvis_front_close_view", DEF="hanim_pelvis_front_close_view", translation=((0,0.8,1)), children=[
Viewpoint(DEF="hanim_pelvis_front_close_viewpoint", centerOfRotation=((0,0,1)), description="pelvis front close", position=((0,0,0)))]),
HAnimSite(name="knees_front_close_view", DEF="hanim_knees_front_close_view", translation=((0,0.4,1)), children=[
Viewpoint(DEF="hanim_knees_front_close_viewpoint", centerOfRotation=((0,0.4,0)), description="knees front close", position=((0,0,0)))]),
HAnimSite(name="feet_front_close_view", DEF="hanim_feet_front_close_view", translation=((0,0,1)), children=[
Viewpoint(DEF="hanim_feet_front_close_viewpoint", description="feet front close", position=((0,0,0)))]),
HAnimSite(name="eye_level_view", DEF="hanim_eye_level_view", translation=((0,1.6332,0.0502)), children=[
Viewpoint(DEF="hanim_eye_level_viewpoint", description="eye level looking forward", orientation=((0,1,0,3.141593)), position=((0,0,0)))]),
HAnimSite(USE="hanim_l_eyeball_site_view"),
HAnimSite(USE="hanim_r_eyeball_site_view"),
HAnimSite(USE="hanim_l_hand_front_view"),
HAnimSite(USE="hanim_r_hand_front_view")], joints=(
HAnimJoint(USE="hanim_humanoid_root"),
HAnimJoint(USE="hanim_sacroiliac"),
HAnimJoint(USE="hanim_vl5"),
HAnimJoint(USE="hanim_vl4"),
HAnimJoint(USE="hanim_vl3"),
HAnimJoint(USE="hanim_vl2"),
HAnimJoint(USE="hanim_vl1"),
HAnimJoint(USE="hanim_vt12"),
HAnimJoint(USE="hanim_vt11"),
HAnimJoint(USE="hanim_vt10"),
HAnimJoint(USE="hanim_vt9"),
HAnimJoint(USE="hanim_vt8"),
HAnimJoint(USE="hanim_vt7"),
HAnimJoint(USE="hanim_vt6"),
HAnimJoint(USE="hanim_vt5"),
HAnimJoint(USE="hanim_vt4"),
HAnimJoint(USE="hanim_vt3"),
HAnimJoint(USE="hanim_vt2"),
HAnimJoint(USE="hanim_vt1"),
HAnimJoint(USE="hanim_vc7"),
HAnimJoint(USE="hanim_vc6"),
HAnimJoint(USE="hanim_vc5"),
HAnimJoint(USE="hanim_vc4"),
HAnimJoint(USE="hanim_vc3"),
HAnimJoint(USE="hanim_vc2"),
HAnimJoint(USE="hanim_vc1"),
HAnimJoint(USE="hanim_skullbase"),
HAnimJoint(USE="hanim_temporomandibular"),
HAnimJoint(USE="hanim_l_acromioclavicular"),
HAnimJoint(USE="hanim_r_acromioclavicular"),
HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_2"),
HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_2"),
HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_3"),
HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_3"),
HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_4"),
HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_4"),
HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_5"),
HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_5"),
HAnimJoint(USE="hanim_l_carpal_interphalangeal_1"),
HAnimJoint(USE="hanim_r_carpal_interphalangeal_1"),
HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_2"),
HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_2"),
HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_3"),
HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_3"),
HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_4"),
HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_4"),
HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_5"),
HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_5"),
HAnimJoint(USE="hanim_l_carpometacarpal_1"),
HAnimJoint(USE="hanim_r_carpometacarpal_1"),
HAnimJoint(USE="hanim_l_carpometacarpal_2"),
HAnimJoint(USE="hanim_r_carpometacarpal_2"),
HAnimJoint(USE="hanim_l_carpometacarpal_3"),
HAnimJoint(USE="hanim_r_carpometacarpal_3"),
HAnimJoint(USE="hanim_l_carpometacarpal_4"),
HAnimJoint(USE="hanim_r_carpometacarpal_4"),
HAnimJoint(USE="hanim_l_carpometacarpal_5"),
HAnimJoint(USE="hanim_r_carpometacarpal_5"),
HAnimJoint(USE="hanim_l_elbow"),
HAnimJoint(USE="hanim_r_elbow"),
HAnimJoint(USE="hanim_l_eyeball_joint"),
HAnimJoint(USE="hanim_r_eyeball_joint"),
HAnimJoint(USE="hanim_l_eyebrow_joint"),
HAnimJoint(USE="hanim_r_eyebrow_joint"),
HAnimJoint(USE="hanim_l_eyelid_joint"),
HAnimJoint(USE="hanim_r_eyelid_joint"),
HAnimJoint(USE="hanim_l_hip"),
HAnimJoint(USE="hanim_r_hip"),
HAnimJoint(USE="hanim_l_knee"),
HAnimJoint(USE="hanim_r_knee"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_1"),
HAnimJoint(USE="hanim_r_metacarpophalangeal_1"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_2"),
HAnimJoint(USE="hanim_r_metacarpophalangeal_2"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_3"),
HAnimJoint(USE="hanim_r_metacarpophalangeal_3"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_4"),
HAnimJoint(USE="hanim_r_metacarpophalangeal_4"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_5"),
HAnimJoint(USE="hanim_r_metacarpophalangeal_5"),
HAnimJoint(USE="hanim_l_metatarsophalangeal_2"),
HAnimJoint(USE="hanim_r_metatarsophalangeal_2"),
HAnimJoint(USE="hanim_l_radiocarpal"),
HAnimJoint(USE="hanim_r_radiocarpal"),
HAnimJoint(USE="hanim_l_shoulder"),
HAnimJoint(USE="hanim_r_shoulder"),
HAnimJoint(USE="hanim_l_sternoclavicular"),
HAnimJoint(USE="hanim_r_sternoclavicular"),
HAnimJoint(USE="hanim_l_talocrural"),
HAnimJoint(USE="hanim_r_talocrural"),
HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_2"),
HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_2"),
HAnimJoint(USE="hanim_l_tarsometatarsal_2"),
HAnimJoint(USE="hanim_r_tarsometatarsal_2")), segments=[
HAnimSegment(USE="hanim_pelvis"),
HAnimSegment(USE="hanim_skull"),
HAnimSegment(USE="hanim_jaw"),
HAnimSegment(USE="hanim_c1"),
HAnimSegment(USE="hanim_c2"),
HAnimSegment(USE="hanim_c3"),
HAnimSegment(USE="hanim_c4"),
HAnimSegment(USE="hanim_c5"),
HAnimSegment(USE="hanim_c6"),
HAnimSegment(USE="hanim_c7"),
HAnimSegment(USE="hanim_t1"),
HAnimSegment(USE="hanim_t2"),
HAnimSegment(USE="hanim_t3"),
HAnimSegment(USE="hanim_t4"),
HAnimSegment(USE="hanim_t5"),
HAnimSegment(USE="hanim_t6"),
HAnimSegment(USE="hanim_t7"),
HAnimSegment(USE="hanim_t8"),
HAnimSegment(USE="hanim_t9"),
HAnimSegment(USE="hanim_t10"),
HAnimSegment(USE="hanim_t11"),
HAnimSegment(USE="hanim_t12"),
HAnimSegment(USE="hanim_l1"),
HAnimSegment(USE="hanim_l2"),
HAnimSegment(USE="hanim_l3"),
HAnimSegment(USE="hanim_l4"),
HAnimSegment(USE="hanim_l5"),
HAnimSegment(USE="hanim_sacrum"),
HAnimSegment(USE="hanim_l_calf"),
HAnimSegment(USE="hanim_r_calf"),
HAnimSegment(USE="hanim_l_carpal"),
HAnimSegment(USE="hanim_r_carpal"),
HAnimSegment(USE="hanim_l_carpal_distal_phalanx_1"),
HAnimSegment(USE="hanim_r_carpal_distal_phalanx_1"),
HAnimSegment(USE="hanim_l_carpal_distal_phalanx_2"),
HAnimSegment(USE="hanim_r_carpal_distal_phalanx_2"),
HAnimSegment(USE="hanim_l_carpal_distal_phalanx_3"),
HAnimSegment(USE="hanim_r_carpal_distal_phalanx_3"),
HAnimSegment(USE="hanim_l_carpal_distal_phalanx_4"),
HAnimSegment(USE="hanim_r_carpal_distal_phalanx_4"),
HAnimSegment(USE="hanim_l_carpal_distal_phalanx_5"),
HAnimSegment(USE="hanim_r_carpal_distal_phalanx_5"),
HAnimSegment(USE="hanim_l_carpal_middle_phalanx_2"),
HAnimSegment(USE="hanim_r_carpal_middle_phalanx_2"),
HAnimSegment(USE="hanim_l_carpal_middle_phalanx_3"),
HAnimSegment(USE="hanim_r_carpal_middle_phalanx_3"),
HAnimSegment(USE="hanim_l_carpal_middle_phalanx_4"),
HAnimSegment(USE="hanim_r_carpal_middle_phalanx_4"),
HAnimSegment(USE="hanim_l_carpal_middle_phalanx_5"),
HAnimSegment(USE="hanim_r_carpal_middle_phalanx_5"),
HAnimSegment(USE="hanim_l_carpal_proximal_phalanx_1"),
HAnimSegment(USE="hanim_r_carpal_proximal_phalanx_1"),
HAnimSegment(USE="hanim_l_carpal_proximal_phalanx_2"),
HAnimSegment(USE="hanim_r_carpal_proximal_phalanx_2"),
HAnimSegment(USE="hanim_l_carpal_proximal_phalanx_3"),
HAnimSegment(USE="hanim_r_carpal_proximal_phalanx_3"),
HAnimSegment(USE="hanim_l_carpal_proximal_phalanx_4"),
HAnimSegment(USE="hanim_r_carpal_proximal_phalanx_4"),
HAnimSegment(USE="hanim_l_carpal_proximal_phalanx_5"),
HAnimSegment(USE="hanim_r_carpal_proximal_phalanx_5"),
HAnimSegment(USE="hanim_l_clavicle"),
HAnimSegment(USE="hanim_r_clavicle"),
HAnimSegment(USE="hanim_l_eyeball"),
HAnimSegment(USE="hanim_r_eyeball"),
HAnimSegment(USE="hanim_l_eyebrow"),
HAnimSegment(USE="hanim_r_eyebrow"),
HAnimSegment(USE="hanim_l_eyelid"),
HAnimSegment(USE="hanim_r_eyelid"),
HAnimSegment(USE="hanim_l_forearm"),
HAnimSegment(USE="hanim_r_forearm"),
HAnimSegment(USE="hanim_l_metacarpal_1"),
HAnimSegment(USE="hanim_r_metacarpal_1"),
HAnimSegment(USE="hanim_l_metacarpal_2"),
HAnimSegment(USE="hanim_r_metacarpal_2"),
HAnimSegment(USE="hanim_l_metacarpal_3"),
HAnimSegment(USE="hanim_r_metacarpal_3"),
HAnimSegment(USE="hanim_l_metacarpal_4"),
HAnimSegment(USE="hanim_r_metacarpal_4"),
HAnimSegment(USE="hanim_l_metacarpal_5"),
HAnimSegment(USE="hanim_r_metacarpal_5"),
HAnimSegment(USE="hanim_l_metatarsal_2"),
HAnimSegment(USE="hanim_r_metatarsal_2"),
HAnimSegment(USE="hanim_l_scapula"),
HAnimSegment(USE="hanim_r_scapula"),
HAnimSegment(USE="hanim_l_talus"),
HAnimSegment(USE="hanim_r_talus"),
HAnimSegment(USE="hanim_l_tarsal_distal_phalanx_2"),
HAnimSegment(USE="hanim_r_tarsal_distal_phalanx_2"),
HAnimSegment(USE="hanim_l_tarsal_proximal_phalanx_2"),
HAnimSegment(USE="hanim_r_tarsal_proximal_phalanx_2"),
HAnimSegment(USE="hanim_l_thigh"),
HAnimSegment(USE="hanim_r_thigh"),
HAnimSegment(USE="hanim_l_upperarm"),
HAnimSegment(USE="hanim_r_upperarm")], sites=[
HAnimSite(USE="hanim_crotch_pt"),
HAnimSite(USE="hanim_skull_vertex_tip"),
HAnimSite(USE="hanim_sellion_pt"),
HAnimSite(USE="hanim_supramenton_pt"),
HAnimSite(USE="hanim_nuchale_pt"),
HAnimSite(USE="hanim_suprasternale_pt"),
HAnimSite(USE="hanim_cervicale_pt"),
HAnimSite(USE="hanim_substernale_pt"),
HAnimSite(USE="hanim_rib10_midspine_pt"),
HAnimSite(USE="hanim_waist_preferred_posterior_pt"),
HAnimSite(USE="hanim_navel_pt"),
HAnimSite(USE="hanim_l_acromion_pt"),
HAnimSite(USE="hanim_r_acromion_pt"),
HAnimSite(USE="hanim_r_asis_pt"),
HAnimSite(USE="hanim_l_asis_pt"),
HAnimSite(USE="hanim_l_axilla_distal_pt"),
HAnimSite(USE="hanim_r_axilla_distal_pt"),
HAnimSite(USE="hanim_l_axilla_proximal_pt"),
HAnimSite(USE="hanim_r_axilla_proximal_pt"),
HAnimSite(USE="hanim_l_calcaneus_posterior_pt"),
HAnimSite(USE="hanim_r_calcaneus_posterior_pt"),
HAnimSite(USE="hanim_l_carpal_distal_phalanx_1_tip"),
HAnimSite(USE="hanim_r_carpal_distal_phalanx_1_tip"),
HAnimSite(USE="hanim_l_carpal_distal_phalanx_2_tip"),
HAnimSite(USE="hanim_r_carpal_distal_phalanx_2_tip"),
HAnimSite(USE="hanim_l_carpal_distal_phalanx_3_tip"),
HAnimSite(USE="hanim_r_carpal_distal_phalanx_3_tip"),
HAnimSite(USE="hanim_l_carpal_distal_phalanx_4_tip"),
HAnimSite(USE="hanim_r_carpal_distal_phalanx_4_tip"),
HAnimSite(USE="hanim_l_carpal_distal_phalanx_5_tip"),
HAnimSite(USE="hanim_r_carpal_distal_phalanx_5_tip"),
HAnimSite(USE="hanim_l_clavicle_pt"),
HAnimSite(USE="hanim_r_clavicle_pt"),
HAnimSite(USE="hanim_l_dactylion_pt"),
HAnimSite(USE="hanim_r_dactylion_pt"),
HAnimSite(USE="hanim_l_femoral_lateral_epicondyle_pt"),
HAnimSite(USE="hanim_r_femoral_lateral_epicondyle_pt"),
HAnimSite(USE="hanim_l_femoral_medial_epicondyle_pt"),
HAnimSite(USE="hanim_r_femoral_medial_epicondyle_pt"),
HAnimSite(USE="hanim_l_forefoot_tip"),
HAnimSite(USE="hanim_r_forefoot_tip"),
HAnimSite(USE="hanim_r_gonion_pt"),
HAnimSite(USE="hanim_l_gonion_pt"),
HAnimSite(USE="hanim_l_humeral_lateral_epicondyle_pt"),
HAnimSite(USE="hanim_r_humeral_lateral_epicondyle_pt"),
HAnimSite(USE="hanim_l_humeral_medial_epicondyle_pt"),
HAnimSite(USE="hanim_r_humeral_medial_epicondyle_pt"),
HAnimSite(USE="hanim_r_iliocristale_pt"),
HAnimSite(USE="hanim_l_iliocristale_pt"),
HAnimSite(USE="hanim_r_infraorbitale_pt"),
HAnimSite(USE="hanim_l_infraorbitale_pt"),
HAnimSite(USE="hanim_l_knee_crease_pt"),
HAnimSite(USE="hanim_r_knee_crease_pt"),
HAnimSite(USE="hanim_l_lateral_malleolus_pt"),
HAnimSite(USE="hanim_r_lateral_malleolus_pt"),
HAnimSite(USE="hanim_l_medial_malleolus_pt"),
HAnimSite(USE="hanim_r_medial_malleolus_pt"),
HAnimSite(USE="hanim_l_metacarpal_phalanx_2_pt"),
HAnimSite(USE="hanim_r_metacarpal_phalanx_2_pt"),
HAnimSite(USE="hanim_l_metacarpal_phalanx_5_pt"),
HAnimSite(USE="hanim_r_metacarpal_phalanx_5_pt"),
HAnimSite(USE="hanim_l_metatarsal_phalanx_1_pt"),
HAnimSite(USE="hanim_r_metatarsal_phalanx_1_pt"),
HAnimSite(USE="hanim_l_metatarsal_phalanx_5_pt"),
HAnimSite(USE="hanim_r_metatarsal_phalanx_5_pt"),
HAnimSite(USE="hanim_r_neck_base_pt"),
HAnimSite(USE="hanim_l_neck_base_pt"),
HAnimSite(USE="hanim_l_olecranon_pt"),
HAnimSite(USE="hanim_r_olecranon_pt"),
HAnimSite(USE="hanim_r_psis_pt"),
HAnimSite(USE="hanim_l_psis_pt"),
HAnimSite(USE="hanim_l_radial_styloid_pt"),
HAnimSite(USE="hanim_r_radial_styloid_pt"),
HAnimSite(USE="hanim_l_radiale_pt"),
HAnimSite(USE="hanim_r_radiale_pt"),
HAnimSite(USE="hanim_r_rib10_pt"),
HAnimSite(USE="hanim_l_rib10_pt"),
HAnimSite(USE="hanim_temporomandibular_l_site_pt"),
HAnimSite(USE="hanim_temporomandibular_r_site_pt"),
HAnimSite(USE="hanim_l_sphyrion_pt"),
HAnimSite(USE="hanim_r_sphyrion_pt"),
HAnimSite(USE="hanim_l_tarsal_distal_phalanx_2_pt"),
HAnimSite(USE="hanim_r_tarsal_distal_phalanx_2_pt"),
HAnimSite(USE="hanim_r_thelion_pt"),
HAnimSite(USE="hanim_l_thelion_pt"),
HAnimSite(USE="hanim_r_tragion_pt"),
HAnimSite(USE="hanim_l_tragion_pt"),
HAnimSite(USE="hanim_r_trochanterion_pt"),
HAnimSite(USE="hanim_l_trochanterion_pt"),
HAnimSite(USE="hanim_l_ulnar_styloid_pt"),
HAnimSite(USE="hanim_r_ulnar_styloid_pt")]),]))
.XML())
