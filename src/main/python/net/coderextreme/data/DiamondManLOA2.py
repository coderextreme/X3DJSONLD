'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="4.0", 
head=head(), 
Scene=Scene(children=[
WorldInfo(info=["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"], title="HANIM 1.1 Default Joint Centers, LOA1"),
NavigationInfo(speed=1.5),
Viewpoint(centerOfRotation=((0,1,0)), description="Diamond Man, LOA 2", position=((0,1,3))),
Transform(translation=((1.0,1.5,0)), children=[
Billboard(children=[
Shape(
geometry=
Text(string=["Diamond Man Key"], 
fontStyle=
FontStyle(family=["SANS"], size=0.1)), 
appearance=
Appearance(
material=
Material(DEF="TextMaterial", diffuseColor=((0.9,0.9,0.9))))),
Transform(translation=((0,-0.3,0)), children=[
Shape(
geometry=
Sphere(radius=0.08), 
appearance=
Appearance(
material=
Material(DEF="MIN_COLOR", diffuseColor=((1,0,0))))),
Transform(translation=((0.2,0,0)), children=[
Shape(
geometry=
Text(string=["Minimal Humanoid Joints"], 
fontStyle=
FontStyle(family=["SANS"], size=0.1)), 
appearance=
Appearance(
material=
Material(USE="TextMaterial")))])]),
Transform(translation=((0,-0.5,0)), children=[
Shape(
geometry=
Sphere(radius=0.08), 
appearance=
Appearance(
material=
Material(DEF="JOINT_COLOR", diffuseColor=((1,1,0))))),
Transform(translation=((0.2,0,0)), children=[
Shape(
geometry=
Text(string=["Humanoid Joints"], 
fontStyle=
FontStyle(family=["SANS"], size=0.1)), 
appearance=
Appearance(
material=
Material(USE="TextMaterial")))])]),
Transform(translation=((0,-0.7,0)), children=[
Shape(
geometry=
Sphere(radius=0.08), 
appearance=
Appearance(
material=
Material(DEF="REC_SPINAL_COLOR", diffuseColor=((1,0,1))))),
Transform(translation=((0.2,0,0)), children=[
Shape(
geometry=
Text(string=["Recommended Spinal Joints"], 
fontStyle=
FontStyle(family=["SANS"], size=0.1)), 
appearance=
Appearance(
material=
Material(USE="TextMaterial")))])]),
Transform(translation=((0,-0.9,0)), children=[
Shape(
geometry=
Sphere(radius=0.08), 
appearance=
Appearance(
material=
Material(DEF="SPINAL_COLOR", diffuseColor=((0,1,0))))),
Transform(translation=((0.2,0,0)), children=[
Shape(
geometry=
Text(string=["Spinal Joints"], 
fontStyle=
FontStyle(family=["SANS"], size=0.1)), 
appearance=
Appearance(
material=
Material(USE="TextMaterial")))])]),
Transform(translation=((0,-1.3,0)), children=[
Shape(
geometry=
Sphere(radius=0.08), 
appearance=
Appearance(
material=
Material(DEF="SITE_COLOR", diffuseColor=((0,0,1))))),
Transform(translation=((0.2,0,0)), children=[
Shape(
geometry=
Text(string=["Humanoid Sites"], 
fontStyle=
FontStyle(family=["SANS"], size=0.1)), 
appearance=
Appearance(
material=
Material(USE="TextMaterial")))])]),
Transform(translation=((0,-1.1,0)), children=[
Shape(
geometry=
Sphere(radius=0.08), 
appearance=
Appearance(
material=
Material(DEF="HAND_FEET_COLOR", diffuseColor=((0,1,1))))),
Transform(translation=((0.2,0,0)), children=[
Shape(
geometry=
Text(string=["Hand & Feet Joints"], 
fontStyle=
FontStyle(family=["SANS"], size=0.1)), 
appearance=
Appearance(
material=
Material(USE="TextMaterial")))])])])]),
HAnimHumanoid(name="humanoid", DEF="hanim_humanoid", loa=2, version="2.0", 
metadata=(
MetadataSet(name="HAnimHumanoid.info", reference="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid", value=[
MetadataString(name="humanoidVersion", value=["Nancy V1.2b"]),
MetadataString(name="authorEmail", value=["cindy@ballreich.net"]),
MetadataString(name="authorName", value=["Cindy Ballreich"]),
MetadataString(name="copyright", value=["1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved."]),
MetadataString(name="creationDate", value=["Tue Dec 30 08:30:08 PST 1997"]),
MetadataString(name="usageRestrictions", value=["Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given."])])), skeleton=[
HAnimJoint(name="humanoid_root", DEF="hanim_humanoid_root", center=((0.0,0.824,0.0277)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="sacrum", DEF="hanim_sacrum", children=[
Transform(translation=((0.0,0.824,0.0277)), children=[
Shape(DEF="DiamondShape", 
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(DEF="points", point=[(0,0.01,0),(-0.01,0,0),(0,0,0.01),(0.01,0,0),(0,0,-0.01),(0,-0.01,0)])), 
appearance=
Appearance(
material=
Material(DEF="ROOT_COLOR", diffuseColor=((1,1,1))))),
Transform(translation=((0,0.01,0)), children=[
Billboard(children=[
Shape(
geometry=
Text(string=["Humanoid Root"], 
fontStyle=
FontStyle(family=["SANS"], size=0.01, style_="ITALIC")), 
appearance=
Appearance(
material=
Material(diffuseColor=((0.039216,1,0.568627)))))])])])]),
HAnimJoint(name="sacroiliac", DEF="hanim_sacroiliac", center=((0.0,0.9149,0.0016)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="pelvis", DEF="hanim_pelvis", children=[
Transform(DEF="sacroiliacPos", translation=((0.0,0.9149,0.0016)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="MIN_COLOR")))]),
HAnimSite(name="r_iliocristale_pt", DEF="hanim_r_iliocristale_pt", translation=((-0.1525,1.0628,0.0035)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="r_trochanterion_pt", DEF="hanim_r_trochanterion_pt", translation=((-0.1689,0.8419,0.0352)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="l_iliocristale_pt", DEF="hanim_l_iliocristale_pt", translation=((0.1612,1.0537,0.0008)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="l_trochanterion_pt", DEF="hanim_l_trochanterion_pt", translation=((0.1677,0.8336,0.0303)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="r_asis_pt", DEF="hanim_r_asis_pt", translation=((-0.0887,1.0021,0.1112)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="l_asis_pt", DEF="hanim_l_asis_pt", translation=((0.0925,0.9983,0.1052)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="r_psis_pt", DEF="hanim_r_psis_pt", translation=((-0.0716,1.019,-0.1138)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="l_psis_pt", DEF="hanim_l_psis_pt", translation=((0.0774,1.019,-0.1151)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="crotch_pt", DEF="hanim_crotch_pt", translation=((0.0034,0.8266,0.0257)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))])]),
HAnimJoint(name="l_hip", DEF="hanim_l_hip", center=((0.0961,0.9124,-0.0001)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_thigh", DEF="hanim_l_thigh", children=[
Transform(translation=((0.0961,0.9124,-0.0001)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="MIN_COLOR")))]),
HAnimSite(name="l_knee_crease_pt", DEF="hanim_l_knee_crease_pt", translation=((0.0993,0.4881,-0.0309)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="l_femoral_lateral_epicondyle_pt", DEF="hanim_l_femoral_lateral_epicondyle_pt", translation=((0.1598,0.4967,0.0297)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="l_femoral_medial_epicondyle_pt", DEF="hanim_l_femoral_medial_epicondyle_pt", translation=((0.0398,0.4946,0.0303)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))])]),
HAnimJoint(name="l_knee", DEF="hanim_l_knee", center=((0.104,0.4867,0.0308)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_calf", DEF="hanim_l_calf", children=[
Transform(translation=((0.104,0.4867,0.0308)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="MIN_COLOR")))])]),
HAnimJoint(name="l_talocrural", DEF="hanim_l_talocrural", center=((0.1101,0.0656,-0.0736)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_talus", DEF="hanim_l_talus", children=[
Transform(translation=((0.1101,0.0656,-0.0736)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="MIN_COLOR")))]),
HAnimSite(name="l_lateral_malleolus_pt", DEF="hanim_l_lateral_malleolus_pt", translation=((0.1308,0.0597,-0.1032)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))]),
HAnimSite(name="l_medial_malleolus_pt", DEF="hanim_l_medial_malleolus_pt", translation=((0.089,0.0716,-0.0881)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))]),
HAnimSite(name="l_sphyrion_pt", DEF="hanim_l_sphyrion_pt", translation=((0.089,0.0575,-0.0943)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))]),
HAnimSite(name="l_calcaneus_posterior_pt", DEF="hanim_l_calcaneus_posterior_pt", translation=((0.0974,0.0259,-0.1171)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))])]),
HAnimJoint(name="l_tarsometatarsal_2", DEF="hanim_l_tarsometatarsal_2", center=((0.1086,0.0001,-0.0368)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metatarsal_2", DEF="hanim_l_metatarsal_2", children=[
Transform(translation=((0.1086,0.0001,-0.0368)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="MIN_COLOR")))])]),
HAnimJoint(name="l_metatarsophalangeal_2", DEF="hanim_l_metatarsophalangeal_2", center=((0.1086,0.0001,0.0368)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_proximal_phalanx_2", DEF="hanim_l_tarsal_proximal_phalanx_2", children=[
Transform(translation=((0.1086,0.0001,0.0368)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="JOINT_COLOR")))]),
HAnimSite(name="l_middistal_tip", DEF="hanim_l_middistal_tip", translation=((0.1354,0.0016,0.1476)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))]),
HAnimSite(name="l_metatarsal_phalanx_1_pt", DEF="hanim_l_metatarsal_phalanx_1_pt", translation=((0.0816,0.0232,0.0106)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))])]),
HAnimJoint(name="l_tarsal_distal_interphalangeal_2", DEF="hanim_l_tarsal_distal_interphalangeal_2", center=((0.1086,0.0,0.0762)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_distal_phalanx_2", DEF="hanim_l_tarsal_distal_phalanx_2", children=[
Transform(translation=((0.1086,0.0,0.0762)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="JOINT_COLOR")))]),
HAnimSite(name="l_forefoot_tip", DEF="hanim_l_forefoot_tip", translation=((0.1354,0.0016,0.1476)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))]),
HAnimSite(name="l_metatarsal_phalanx_5_pt", DEF="hanim_l_metatarsal_phalanx_5_pt", translation=((0.1825,0.007,0.0928)), children=[
## CAESAR Feature Point #66

Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR"))),]),
HAnimSite(name="l_tarsal_distal_phalanx_2_pt", DEF="hanim_l_tarsal_distal_phalanx_2_pt", translation=((0.1195,0.0079,0.1433)), children=[
## CAESAR Feature Point #72

Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR"))),])])])])])])])]),
HAnimJoint(name="r_hip", DEF="hanim_r_hip", center=((-0.095,0.9171,0.0029)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_thigh", DEF="hanim_r_thigh", children=[
Transform(translation=((-0.095,0.9171,0.0029)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="MIN_COLOR")))]),
HAnimSite(name="r_knee_crease_pt", DEF="hanim_r_knee_crease_pt", translation=((-0.0825,0.4932,-0.0326)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="r_femoral_lateral_epicondyle_pt", DEF="hanim_r_femoral_lateral_epicondyle_pt", translation=((-0.1421,0.4992,0.031)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="r_femoral_medial_epicondyle_pt", DEF="hanim_r_femoral_medial_epicondyle_pt", translation=((-0.0221,0.5014,0.0289)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))])]),
HAnimJoint(name="r_knee", DEF="hanim_r_knee", center=((-0.0867,0.4913,0.0318)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_calf", DEF="hanim_r_calf", children=[
Transform(translation=((-0.0867,0.4913,0.0318)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))])]),
HAnimJoint(name="r_talocrural", DEF="hanim_r_talocrural", center=((-0.0801,0.0712,-0.0766)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_talus", DEF="hanim_r_talus", children=[
Transform(translation=((-0.0801,0.0712,-0.0766)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="MIN_COLOR")))]),
HAnimSite(name="r_lateral_malleolus_pt", DEF="hanim_r_lateral_malleolus_pt", translation=((-0.1006,0.0658,-0.1075)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))]),
HAnimSite(name="r_medial_malleolus_pt", DEF="hanim_r_medial_malleolus_pt", translation=((-0.0591,0.076,-0.0928)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))]),
HAnimSite(name="r_sphyrion_pt", DEF="hanim_r_sphyrion_pt", translation=((-0.0603,0.061,-0.1002)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))]),
HAnimSite(name="r_calcaneus_posterior_pt", DEF="hanim_r_calcaneus_posterior_pt", translation=((-0.0692,0.0297,-0.1221)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))])]),
HAnimJoint(name="r_metatarsophalangeal_2", DEF="hanim_r_metatarsophalangeal_2", center=((-0.0801,0.0,0.0368)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_tarsal_proximal_phalanx_2", DEF="hanim_r_tarsal_proximal_phalanx_2", children=[
Transform(translation=((-0.0801,0.0,0.0368)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="JOINT_COLOR")))]),
HAnimSite(name="r_middistal_tip", DEF="hanim_r_middistal_tip", translation=((-0.1043,-0.0227,0.145)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))]),
HAnimSite(name="r_metatarsal_phalanx_5_pt", DEF="hanim_r_metatarsal_phalanx_5_pt", translation=((-0.1523,0.0166,0.0895)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))]),
HAnimSite(name="r_metatarsal_phalanx_1_pt", DEF="hanim_r_metatarsal_phalanx_1_pt", translation=((-0.0521,0.026,0.0127)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))]),
HAnimSite(name="r_tarsal_distal_phalanx_2_pt", DEF="hanim_r_tarsal_distal_phalanx_2_pt", translation=((-0.0883,0.0134,0.1383)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))])])])])])])]),
HAnimJoint(name="vl5", DEF="hanim_vl5", center=((0.0028,1.0568,-0.0776)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l5", DEF="hanim_l5", children=[
Transform(translation=((0.0028,1.0568,-0.0776)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="REC_SPINAL_COLOR")))])]),
HAnimJoint(name="vl4", DEF="hanim_vl4", center=((0.0035,1.0925,-0.0787)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l4", DEF="hanim_l4", children=[
Transform(translation=((0.0035,1.0925,-0.0787)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="vl3", DEF="hanim_vl3", center=((0.0041,1.1276,-0.0796)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l3", DEF="hanim_l3", children=[
Transform(translation=((0.0041,1.1276,-0.0796)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="REC_SPINAL_COLOR")))])]),
HAnimJoint(name="vl2", DEF="hanim_vl2", center=((0.0045,1.1546,-0.08)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l2", DEF="hanim_l2", children=[
Transform(translation=((0.0045,1.1546,-0.08)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="vl1", DEF="hanim_vl1", center=((0.0048,1.1912,-0.0805)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l1", DEF="hanim_l1", children=[
Transform(translation=((0.0048,1.1912,-0.0805)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="REC_SPINAL_COLOR")))])]),
HAnimJoint(name="vt12", DEF="hanim_vt12", center=((0.0051,1.2278,-0.0808)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t12", DEF="hanim_t12", children=[
Transform(translation=((0.0051,1.2278,-0.0808)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="vt11", DEF="hanim_vt11", center=((0.0053,1.2679,-0.081)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t11", DEF="hanim_t11", children=[
Transform(translation=((0.0053,1.2679,-0.081)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="vt10", DEF="hanim_vt10", center=((0.0056,1.2848,-0.0822)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t10", DEF="hanim_t10", children=[
Transform(translation=((0.0056,1.2848,-0.0822)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="REC_SPINAL_COLOR")))])]),
HAnimJoint(name="vt9", DEF="hanim_vt9", center=((0.0057,1.3126,-0.0838)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t9", DEF="hanim_t9", children=[
Transform(translation=((0.0057,1.3126,-0.0838)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="vt8", DEF="hanim_vt8", center=((0.0057,1.3382,-0.0845)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t8", DEF="hanim_t8", children=[
Transform(translation=((0.0057,1.3382,-0.0845)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="vt7", DEF="hanim_vt7", center=((0.0058,1.3625,-0.0833)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t7", DEF="hanim_t7", children=[
Transform(translation=((0.0058,1.3625,-0.0833)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="vt6", DEF="hanim_vt6", center=((0.0059,1.3866,-0.08)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t6", DEF="hanim_t6", children=[
Transform(translation=((0.0059,1.3866,-0.08)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="REC_SPINAL_COLOR")))])]),
HAnimJoint(name="vt5", DEF="hanim_vt5", center=((0.006,1.4102,-0.0745)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t5", DEF="hanim_t5", children=[
Transform(translation=((0.006,1.4102,-0.0745)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="vt4", DEF="hanim_vt4", center=((0.0061,1.432,-0.0675)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t4", DEF="hanim_t4", children=[
Transform(translation=((0.0061,1.432,-0.0675)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="vt3", DEF="hanim_vt3", center=((0.0062,1.4583,-0.057)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t3", DEF="hanim_t3", children=[
Transform(translation=((0.0062,1.4583,-0.057)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="vt2", DEF="hanim_vt2", center=((0.0063,1.4761,-0.0484)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t2", DEF="hanim_t2", children=[
Transform(translation=((0.0063,1.4761,-0.0484)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="vt1", DEF="hanim_vt1", center=((0.0065,1.4951,-0.0387)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t1", DEF="hanim_t1", children=[
Transform(translation=((0.0065,1.4951,-0.0387)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="REC_SPINAL_COLOR")))])]),
HAnimJoint(name="l_shoulder", DEF="hanim_l_shoulder", center=((0.2029,1.4376,-0.0387)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_upperarm", DEF="hanim_l_upperarm", children=[
Transform(translation=((0.2029,1.4376,-0.0387)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="MIN_COLOR")))]),
Transform(DEF="l_upperarm_adjust", center=((0.182,1.22,-0.047)), rotation=((1,0,0,0.119)), translation=((0.2029,1.4376,-0.0387))),
HAnimSite(name="l_humeral_lateral_epicondyle_pt", DEF="hanim_l_humeral_lateral_epicondyle_pt", translation=((0.228,1.1482,-0.11)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))])]),
HAnimJoint(name="l_elbow", DEF="hanim_l_elbow", center=((0.2014,1.1357,-0.0682)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_forearm", DEF="hanim_l_forearm", children=[
Transform(translation=((0.2014,1.1357,-0.0682)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="MIN_COLOR")))]),
Transform(DEF="l_forearm_adjust", center=((0.198,0.961,-0.0405)), rotation=((-1,0,0,0.1)), translation=((0.2014,1.1357,-0.0682))),
HAnimSite(name="l_radial_styloid_pt", DEF="hanim_l_radial_styloid_pt", translation=((0.1901,0.8645,-0.0415)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="l_olecranon_pt", DEF="hanim_l_olecranon_pt", translation=((-0.1962,1.1375,-0.1123)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="l_humeral_medial_epicondyle_pt", DEF="hanim_l_humeral_medial_epicondyle_pt", translation=((0.1735,1.1272,-0.1113)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="l_radiale_pt", DEF="hanim_l_radiale_pt", translation=((0.2182,1.1212,-0.1167)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))])]),
HAnimJoint(name="l_radiocarpal", DEF="hanim_l_radiocarpal", center=((0.1984,0.8663,-0.0583)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal", DEF="hanim_l_carpal", children=[
Transform(translation=((0.1984,0.8663,-0.0583)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="MIN_COLOR")))]),
Transform(DEF="l_hand_adjust", center=((0.213,0.811,-0.0338)), rotation=((-0.06361,-0.9967,0.04988,1.333)), translation=((0.1984,0.8663,-0.0583))),
HAnimSite(name="l_hand_tip", DEF="hanim_l_hand_tip", translation=((0.208,0.6731,-0.0491)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="l_metacarpal_phalanx_2_pt", DEF="hanim_l_metacarpal_phalanx_2_pt", translation=((0.2009,0.8139,-0.0237)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="l_dactylion_pt", DEF="hanim_l_dactylion_pt", translation=((0.2056,0.6743,-0.0482)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="l_ulnar_styloid_pt", DEF="hanim_l_ulnar_styloid_pt", translation=((-0.2142,0.8529,-0.0648)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="l_metacarpal_phalanx_5_pt", DEF="hanim_l_metacarpal_phalanx_5_pt", translation=((0.1929,0.786,-0.1122)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))])]),
HAnimJoint(name="l_carpometacarpal_1", DEF="hanim_l_carpometacarpal_1", center=((0.1924,0.8472,-0.0534)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metacarpal_1", DEF="hanim_l_metacarpal_1", children=[
Transform(translation=((0.1924,0.8472,-0.0534)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="JOINT_COLOR")))])]),
HAnimJoint(name="l_metacarpophalangeal_1", DEF="hanim_l_metacarpophalangeal_1", center=((0.1951,0.8226,0.0246)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_proximal_phalanx_1", DEF="hanim_l_carpal_proximal_phalanx_1", children=[
Transform(translation=((0.1951,0.8226,0.0246)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="JOINT_COLOR")))])]),
HAnimJoint(name="l_carpal_interphalangeal_1", DEF="hanim_l_carpal_interphalangeal_1", center=((0.1955,0.8159,0.0464)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_distal_phalanx_1", DEF="hanim_l_carpal_distal_phalanx_1", children=[
Transform(translation=((0.1955,0.8159,0.0464)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="JOINT_COLOR")))]),
HAnimSite(name="l_carpal_distal_phalanx_1_tip", DEF="hanim_l_carpal_distal_phalanx_1_tip", translation=((0.1982,0.8061,0.0759)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))])])])])]),
HAnimJoint(name="l_carpometacarpal_2", DEF="hanim_l_carpometacarpal_2", center=((0.1983,0.8024,-0.028)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metacarpal_2", DEF="hanim_l_metacarpal_2", children=[
Transform(translation=((0.1983,0.8024,-0.028)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="JOINT_COLOR")))])]),
HAnimJoint(name="l_metacarpophalangeal_2", DEF="hanim_l_metacarpophalangeal_2", center=((0.1983,0.7815,-0.028)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_proximal_phalanx_2", DEF="hanim_l_carpal_proximal_phalanx_2", children=[
Transform(translation=((0.1983,0.7815,-0.028)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="JOINT_COLOR")))])]),
HAnimJoint(name="l_carpal_proximal_interphalangeal_2", DEF="hanim_l_carpal_proximal_interphalangeal_2", center=((0.2017,0.7363,-0.0248)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_middle_phalanx_2", DEF="hanim_l_carpal_middle_phalanx_2", children=[
Transform(translation=((0.2017,0.7363,-0.0248)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="JOINT_COLOR")))])]),
HAnimJoint(name="l_carpal_distal_interphalangeal_2", DEF="hanim_l_carpal_distal_interphalangeal_2", center=((0.2028,0.7139,-0.0236)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_distal_phalanx_2", DEF="hanim_l_carpal_distal_phalanx_2", children=[
Transform(translation=((0.2028,0.7139,-0.0236)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="JOINT_COLOR")))]),
HAnimSite(name="l_carpal_distal_phalanx_2_tip", DEF="hanim_l_carpal_distal_phalanx_2_tip", translation=((0.2089,0.6858,-0.0245)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="HAND_FEET_COLOR")))])])])])])])])])]),
HAnimJoint(name="r_shoulder", DEF="hanim_r_shoulder", center=((-0.1907,1.4407,-0.0325)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_upperarm", DEF="hanim_r_upperarm", children=[
Transform(translation=((-0.1907,1.4407,-0.0325)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="MIN_COLOR")))]),
Transform(DEF="r_upperarm_adjust", center=((-0.182,1.22,-0.047)), rotation=((1,0,0,0.0836)), translation=((-0.1907,1.4407,-0.0325))),
HAnimSite(name="r_humeral_lateral_epicondyle_pt", DEF="hanim_r_humeral_lateral_epicondyle_pt", translation=((-0.2224,1.1517,-0.1033)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))])]),
HAnimJoint(name="r_elbow", DEF="hanim_r_elbow", center=((-0.1949,1.1388,-0.062)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_forearm", DEF="hanim_r_forearm", children=[
Transform(translation=((-0.1949,1.1388,-0.062)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="MIN_COLOR")))]),
Transform(DEF="r_forearm_adjust", center=((-0.198,0.961,-0.0397)), rotation=((-1,0,0,0.1254)), translation=((-0.1949,1.1388,-0.062))),
HAnimSite(name="r_radial_styloid_pt", DEF="hanim_r_radial_styloid_pt", translation=((-0.1884,0.8676,-0.036)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="r_olecranon_pt", DEF="hanim_r_olecranon_pt", translation=((-0.1907,1.1405,-0.1065)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="r_humeral_medial_epicondyle_pt", DEF="hanim_r_humeral_medial_epicondyle_pt", translation=((-0.168,1.1298,-0.1062)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="r_radiale_pt", DEF="hanim_r_radiale_pt", translation=((-0.213,1.1305,-0.1091)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))])]),
HAnimJoint(name="r_radiocarpal", DEF="hanim_r_radiocarpal", center=((-0.1959,0.8694,-0.0521)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_carpal", DEF="hanim_r_carpal", children=[
Transform(translation=((-0.1959,0.8694,-0.0521)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="MIN_COLOR")))]),
Transform(DEF="r_hand_adjust", center=((-0.217,0.811,-0.0338)), rotation=((-0.09024,0.994,-0.0624,1.216))),
HAnimSite(name="r_hand_tip", DEF="hanim_r_hand_tip", translation=((-0.1969,0.6758,-0.0427)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="r_metacarpal_phalanx_2_pt", DEF="hanim_r_metacarpal_phalanx_2_pt", translation=((-0.1977,0.8169,-0.0177)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="r_dactylion_pt", DEF="hanim_r_dactylion_pt", translation=((-0.1941,0.6772,-0.0423)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="r_ulnar_styloid_pt", DEF="hanim_r_ulnar_styloid_pt", translation=((-0.2117,0.8562,-0.0584)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="r_metacarpal_phalanx_5_pt", DEF="hanim_r_metacarpal_phalanx_5_pt", translation=((-0.1929,0.789,-0.1064)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))])])])])]),
HAnimJoint(name="vc7", DEF="hanim_vc7", center=((0.0066,1.5132,-0.0301)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c7", DEF="hanim_c7", children=[
Transform(translation=((0.0066,1.5132,-0.0301)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="vc6", DEF="hanim_vc6", center=((0.0066,1.5357,-0.0143)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c6", DEF="hanim_c6", children=[
Transform(translation=((0.0066,1.5357,-0.0143)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="vc5", DEF="hanim_vc5", center=((0.0066,1.552,-0.0082)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c5", DEF="hanim_c5", children=[
Transform(translation=((0.0066,1.552,-0.0082)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="vc4", DEF="hanim_vc4", center=((0.0066,1.5662,-0.0084)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c4", DEF="hanim_c4", children=[
Transform(translation=((0.0066,1.5662,-0.0084)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="vc3", DEF="hanim_vc3", center=((0.0066,1.58,-0.0103)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c3", DEF="hanim_c3", children=[
Transform(translation=((0.0066,1.58,-0.0103)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="vc2", DEF="hanim_vc2", center=((0.0066,1.5928,-0.0103)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c2", DEF="hanim_c2", children=[
Transform(translation=((0.0066,1.5928,-0.0103)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="REC_SPINAL_COLOR")))])]),
HAnimJoint(name="vc1", DEF="hanim_vc1", center=((0.0066,1.6144,-0.0034)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c1", DEF="hanim_c1", children=[
Transform(translation=((0.0066,1.6144,-0.0034)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SPINAL_COLOR")))])]),
HAnimJoint(name="skullbase", DEF="hanim_skullbase", center=((0.0044,1.6209,0.0236)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="skull", DEF="hanim_skull", children=[
Transform(translation=((0.0044,1.6209,0.0236)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="MIN_COLOR")))]),
HAnimSite(name="skull_vertex_tip", DEF="hanim_skull_vertex_tip", translation=((0.005,1.7504,0.0055)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="sellion_pt", DEF="hanim_sellion_pt", translation=((0.0058,1.6316,0.0852)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="r_infraorbitale_pt", DEF="hanim_r_infraorbitale_pt", translation=((-0.0237,1.6171,0.0752)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="l_infraorbitale_pt", DEF="hanim_l_infraorbitale_pt", translation=((0.0341,1.6171,0.0752)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="supramenton_pt", DEF="hanim_supramenton_pt", translation=((0.0061,1.541,0.0805)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="r_tragion_pt", DEF="hanim_r_tragion_pt", translation=((-0.0646,1.6347,0.0302)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="r_gonion_pt", DEF="hanim_r_gonion_pt", translation=((-0.052,1.5529,0.0347)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="l_tragion_pt", DEF="hanim_l_tragion_pt", translation=((0.0739,1.6348,0.0282)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="l_gonion_pt", DEF="hanim_l_gonion_pt", translation=((0.0631,1.553,0.033)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))]),
HAnimSite(name="nuchale_pt", DEF="hanim_nuchale_pt", translation=((0.0039,1.5972,-0.0796)), children=[
Shape(
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(USE="points")), 
appearance=
Appearance(
material=
Material(USE="SITE_COLOR")))])])])])])])])])])])])])])])])])])])])])])])])])])])])])], viewpoints=[
HAnimSite(name="DiamondManLOA2_view", DEF="hanim_DiamondManLOA2_view", children=[
Viewpoint(DEF="FrontView", description="Front View", position=((0.35,0.854,2.57665))),
Viewpoint(DEF="SideView", description="Side View", orientation=((0,1,0,1.57079)), position=((2,0.854,0))),
Viewpoint(DEF="TopView", description="Top View", orientation=((1,0,0,-1.57079)), position=((0,3.4495,0))),
Viewpoint(DEF="RootView", description="Humanoid Root View", position=((0.0,0.824,0.277))),
Viewpoint(DEF="InclinedView", description="Inclined View", orientation=((-0.113,0.993,0.0347,0.671)), position=((1.62,1.05,2.06)))])], joints=(
HAnimJoint(USE="hanim_humanoid_root"),
HAnimJoint(USE="hanim_sacroiliac"),
HAnimJoint(USE="hanim_vl1"),
HAnimJoint(USE="hanim_vc4"),
HAnimJoint(USE="hanim_skullbase"),
HAnimJoint(USE="hanim_vl5"),
HAnimJoint(USE="hanim_vl4"),
HAnimJoint(USE="hanim_vl3"),
HAnimJoint(USE="hanim_vl2"),
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
HAnimJoint(USE="hanim_vc3"),
HAnimJoint(USE="hanim_vc2"),
HAnimJoint(USE="hanim_vc1"),
HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_2"),
HAnimJoint(USE="hanim_l_carpal_interphalangeal_1"),
HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_2"),
HAnimJoint(USE="hanim_l_carpometacarpal_1"),
HAnimJoint(USE="hanim_l_carpometacarpal_2"),
HAnimJoint(USE="hanim_l_elbow"),
HAnimJoint(USE="hanim_r_elbow"),
HAnimJoint(USE="hanim_l_hip"),
HAnimJoint(USE="hanim_r_hip"),
HAnimJoint(USE="hanim_l_knee"),
HAnimJoint(USE="hanim_r_knee"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_1"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_2"),
HAnimJoint(USE="hanim_l_metatarsophalangeal_2"),
HAnimJoint(USE="hanim_r_metatarsophalangeal_2"),
HAnimJoint(USE="hanim_l_radiocarpal"),
HAnimJoint(USE="hanim_r_radiocarpal"),
HAnimJoint(USE="hanim_l_shoulder"),
HAnimJoint(USE="hanim_r_shoulder"),
HAnimJoint(USE="hanim_l_talocrural"),
HAnimJoint(USE="hanim_r_talocrural"),
HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_2"),
HAnimJoint(USE="hanim_l_tarsometatarsal_2")), segments=[
HAnimSegment(USE="hanim_pelvis"),
HAnimSegment(USE="hanim_c7"),
HAnimSegment(USE="hanim_c4"),
HAnimSegment(USE="hanim_skull"),
HAnimSegment(USE="hanim_sacrum"),
HAnimSegment(USE="hanim_l5"),
HAnimSegment(USE="hanim_l4"),
HAnimSegment(USE="hanim_l3"),
HAnimSegment(USE="hanim_l2"),
HAnimSegment(USE="hanim_l1"),
HAnimSegment(USE="hanim_t12"),
HAnimSegment(USE="hanim_t11"),
HAnimSegment(USE="hanim_t10"),
HAnimSegment(USE="hanim_t9"),
HAnimSegment(USE="hanim_t8"),
HAnimSegment(USE="hanim_t7"),
HAnimSegment(USE="hanim_t6"),
HAnimSegment(USE="hanim_t5"),
HAnimSegment(USE="hanim_t4"),
HAnimSegment(USE="hanim_t3"),
HAnimSegment(USE="hanim_t2"),
HAnimSegment(USE="hanim_t1"),
HAnimSegment(USE="hanim_c6"),
HAnimSegment(USE="hanim_c5"),
HAnimSegment(USE="hanim_c3"),
HAnimSegment(USE="hanim_c2"),
HAnimSegment(USE="hanim_c1"),
HAnimSegment(USE="hanim_l_calf"),
HAnimSegment(USE="hanim_r_calf"),
HAnimSegment(USE="hanim_l_carpal"),
HAnimSegment(USE="hanim_r_carpal"),
HAnimSegment(USE="hanim_l_carpal_distal_phalanx_1"),
HAnimSegment(USE="hanim_l_carpal_distal_phalanx_2"),
HAnimSegment(USE="hanim_l_carpal_middle_phalanx_2"),
HAnimSegment(USE="hanim_l_carpal_proximal_phalanx_1"),
HAnimSegment(USE="hanim_l_carpal_proximal_phalanx_2"),
HAnimSegment(USE="hanim_l_forearm"),
HAnimSegment(USE="hanim_r_forearm"),
HAnimSegment(USE="hanim_l_metacarpal_1"),
HAnimSegment(USE="hanim_l_metacarpal_2"),
HAnimSegment(USE="hanim_l_metatarsal_2"),
HAnimSegment(USE="hanim_l_talus"),
HAnimSegment(USE="hanim_r_talus"),
HAnimSegment(USE="hanim_l_tarsal_distal_phalanx_2"),
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
HAnimSite(USE="hanim_r_asis_pt"),
HAnimSite(USE="hanim_l_asis_pt"),
HAnimSite(USE="hanim_l_calcaneus_posterior_pt"),
HAnimSite(USE="hanim_r_calcaneus_posterior_pt"),
HAnimSite(USE="hanim_l_carpal_distal_phalanx_1_tip"),
HAnimSite(USE="hanim_l_carpal_distal_phalanx_2_tip"),
HAnimSite(USE="hanim_l_dactylion_pt"),
HAnimSite(USE="hanim_r_dactylion_pt"),
HAnimSite(USE="hanim_l_femoral_lateral_epicondyle_pt"),
HAnimSite(USE="hanim_r_femoral_lateral_epicondyle_pt"),
HAnimSite(USE="hanim_l_femoral_medial_epicondyle_pt"),
HAnimSite(USE="hanim_r_femoral_medial_epicondyle_pt"),
HAnimSite(USE="hanim_l_forefoot_tip"),
HAnimSite(USE="hanim_r_gonion_pt"),
HAnimSite(USE="hanim_l_gonion_pt"),
HAnimSite(USE="hanim_l_hand_tip"),
HAnimSite(USE="hanim_r_hand_tip"),
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
HAnimSite(USE="hanim_l_middistal_tip"),
HAnimSite(USE="hanim_r_middistal_tip"),
HAnimSite(USE="hanim_l_olecranon_pt"),
HAnimSite(USE="hanim_r_olecranon_pt"),
HAnimSite(USE="hanim_r_psis_pt"),
HAnimSite(USE="hanim_l_psis_pt"),
HAnimSite(USE="hanim_l_radial_styloid_pt"),
HAnimSite(USE="hanim_r_radial_styloid_pt"),
HAnimSite(USE="hanim_l_radiale_pt"),
HAnimSite(USE="hanim_r_radiale_pt"),
HAnimSite(USE="hanim_l_sphyrion_pt"),
HAnimSite(USE="hanim_r_sphyrion_pt"),
HAnimSite(USE="hanim_l_tarsal_distal_phalanx_2_pt"),
HAnimSite(USE="hanim_r_tarsal_distal_phalanx_2_pt"),
HAnimSite(USE="hanim_r_tragion_pt"),
HAnimSite(USE="hanim_l_tragion_pt"),
HAnimSite(USE="hanim_r_trochanterion_pt"),
HAnimSite(USE="hanim_l_trochanterion_pt"),
HAnimSite(USE="hanim_l_ulnar_styloid_pt"),
HAnimSite(USE="hanim_r_ulnar_styloid_pt")])]))
.XML())
