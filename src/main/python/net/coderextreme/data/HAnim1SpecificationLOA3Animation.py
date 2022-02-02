#x3d.py package loaded, have fun with X3D Graphics!
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
Background(skyColor=[(0.3,0.3,0.3)]),
NavigationInfo(),
Group(DEF="Original_WorldInfo", children=[
WorldInfo(info=[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "], title="HANIM 200x Default Joint Centers, LOA3")]),
#TODO move viewpoints to be internal to HAnimHumanoid

#Viewpoint centerOfRotation="0 0.9149 0.0016" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.

Viewpoint(centerOfRotation=((0,0.9149,0.0016)), description="Humanoid LOA 3 Front", position=((0,0.4,4))),
Viewpoint(centerOfRotation=((0,0.9149,0.0016)), description="Humanoid LOA 3 Front Close", position=((0,0.8,2))),
Viewpoint(centerOfRotation=((0,0.9149,0.0016)), description="Humanoid LOA 3 Front Closer", position=((0,1.2,1))),
Viewpoint(centerOfRotation=((0,1.5,0.0016)), description="Humanoid LOA 3 Front Face", position=((0,1.63,1))),
Viewpoint(centerOfRotation=((0,0.9149,0.0016)), description="Humanoid LOA 3 Right Side", orientation=((0,1,0,1.5708)), position=((2.6,0.8,0))),
Viewpoint(centerOfRotation=((0,0.9149,0.0016)), description="Humanoid LOA 3 Right Side Close", orientation=((0,1,0,1.2)), position=((1,0.8,0.5))),
Viewpoint(centerOfRotation=((0,0.9149,0.0016)), description="Humanoid LOA 3 Left Side Close", orientation=((0,1,0,-1.2)), position=((-1,0.8,0.5))),
Viewpoint(centerOfRotation=((0,0.9149,0.0016)), description="Humanoid LOA 3 Left Side", orientation=((0,1,0,-1.5708)), position=((-2.6,0.8,0))),
Viewpoint(centerOfRotation=((0,0.9149,0.0016)), description="Humanoid LOA 3 Top", orientation=((1,0,0,-1.5708)), position=((0,3.5,0))),
HAnimHumanoid(name="humanoid", DEF="hanim_humanoid", info=["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=1.0","height=1.7504"], version="1.0", skeleton=(
HAnimJoint(name="humanoid_root", DEF="hanim_humanoid_root", center=((0,0.824,0.0277)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="sacrum", DEF="hanim_sacrum", children=[
#<HAnimJoint name='humanoid_root'/> visualization sphere within <HAnimSegment name='sacrum'/>

TouchSensor(description="HAnimJoint HumanoidRoot, HAnimSegment sacrum"),
Transform(translation=((0,0.824,0.0277)), children=[
Shape(DEF="HAnimJointShape", 
geometry=
Sphere(radius=0.006), 
appearance=
Appearance(DEF="HAnimJointAppearance", 
material=
Material(diffuseColor=((1,0.5,0)), transparency=0.5)))]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0,0.824,0.0277),(0,0.9149,0.0016)]), 
color=
ColorRGBA(DEF="HAnimSegmentLineColorRGBA", color=[(1,1,0,1),(1,1,0,0.1)]))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0,0.824,0.0277),(0.0028,1.0568,-0.0776)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="sacroiliac", DEF="hanim_sacroiliac", center=((0,0.9149,0.0016)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="pelvis", DEF="hanim_pelvis", children=[
#<HAnimJoint name='sacroiliac'/> visualization sphere within <HAnimSegment name='pelvis'/>

TouchSensor(description="HAnimJoint sacroiliac, HAnimSegment pelvis"),
Transform(translation=((0,0.9149,0.0016)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0,0.9149,0.0016),(0.0961,0.9124,-0.0001)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0,0.9149,0.0016),(-0.0961,0.9124,-0.0001)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0,0.9149,0.0016),(-0.1525,1.0628,0.0035)]), 
color=
ColorRGBA(DEF="HAnimSiteLineColorRGBA", color=[(1,0,0,1),(1,0,0,0.1)]))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0,0.9149,0.0016),(-0.1689,0.8419,0.0352)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0,0.9149,0.0016),(0.1612,1.0537,0.0008)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0,0.9149,0.0016),(0.1677,0.8336,0.0303)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0,0.9149,0.0016),(-0.0887,1.0021,0.1112)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0,0.9149,0.0016),(0.0925,0.9983,0.1052)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0,0.9149,0.0016),(-0.0716,1.019,-0.1138)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0,0.9149,0.0016),(0.0774,1.019,-0.1151)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0,0.9149,0.0016),(0.0034,0.8266,0.0257)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="r_iliocristale_pt", DEF="hanim_r_iliocristale_pt", translation=((-0.1525,1.0628,0.0035)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_iliocristale"),
Shape(DEF="HAnimSiteShape", 
geometry=
IndexedFaceSet(DEF="DiamondIFS", coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, solid=False, 
coord=
Coordinate(point=[(0,0.008,0),(-0.008,0,0),(0,0,0.008),(0.008,0,0),(0,0,-0.008),(0,-0.008,0)])), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0))))),]),
HAnimSite(name="r_trochanterion_pt", DEF="hanim_r_trochanterion_pt", translation=((-0.1689,0.8419,0.0352)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_trochanterion"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_iliocristale_pt", DEF="hanim_l_iliocristale_pt", translation=((0.1612,1.0537,0.0008)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_iliocristale"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_trochanterion_pt", DEF="hanim_l_trochanterion_pt", translation=((0.1677,0.8336,0.0303)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_trochanterion"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_asis_pt", DEF="hanim_r_asis_pt", translation=((-0.0887,1.0021,0.1112)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_asis"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_asis_pt", DEF="hanim_l_asis_pt", translation=((0.0925,0.9983,0.1052)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_asis"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_psis_pt", DEF="hanim_r_psis_pt", translation=((-0.0716,1.019,-0.1138)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_psis"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_psis_pt", DEF="hanim_l_psis_pt", translation=((0.0774,1.019,-0.1151)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_psis"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="crotch_pt", DEF="hanim_crotch_pt", translation=((0.0034,0.8266,0.0257)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite crotch"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="l_hip", DEF="hanim_l_hip", center=((0.0961,0.9124,-0.0001)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_thigh", DEF="hanim_l_thigh", children=[
#<HAnimJoint name='l_hip'/> visualization sphere within <HAnimSegment name='l_thigh'/>

TouchSensor(description="HAnimJoint l_hip, HAnimSegment l_thigh"),
Transform(translation=((0.0961,0.9124,-0.0001)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0961,0.9124,-0.0001),(0.104,0.4867,0.0308)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0961,0.9124,-0.0001),(0.0993,0.4881,-0.0309)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0961,0.9124,-0.0001),(0.1598,0.4967,0.0297)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0961,0.9124,-0.0001),(0.0398,0.4946,0.0303)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="l_knee_crease_pt", DEF="hanim_l_knee_crease_pt", translation=((0.0993,0.4881,-0.0309)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_knee_crease"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_femoral_lateral_epicn_pt", DEF="hanim_l_femoral_lateral_epicn_pt", translation=((0.1598,0.4967,0.0297)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_femoral_lateral_epicn"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_femoral_medial_epicn_pt", DEF="hanim_l_femoral_medial_epicn_pt", translation=((0.0398,0.4946,0.0303)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_femoral_medial_epicn"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="l_knee", DEF="hanim_l_knee", center=((0.104,0.4867,0.0308)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_calf", DEF="hanim_l_calf", children=[
#<HAnimJoint name='l_knee'/> visualization sphere within <HAnimSegment name='l_calf'/>

TouchSensor(description="HAnimJoint l_knee, HAnimSegment l_calf"),
Transform(translation=((0.104,0.4867,0.0308)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.104,0.4867,0.0308),(0.1101,0.0656,-0.0736)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_ankle", DEF="hanim_l_ankle", center=((0.1101,0.0656,-0.0736)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_hindfoot", DEF="hanim_l_hindfoot", children=[
#<HAnimJoint name='l_ankle'/> visualization sphere within <HAnimSegment name='l_hindfoot'/>

TouchSensor(description="HAnimJoint l_ankle, HAnimSegment l_hindfoot"),
Transform(translation=((0.1101,0.0656,-0.0736)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1101,0.0656,-0.0736),(0.1086,0.0001,-0.0368)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1101,0.0656,-0.0736),(0.1308,0.0597,-0.1032)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1101,0.0656,-0.0736),(0.089,0.0716,-0.0881)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1101,0.0656,-0.0736),(0.089,0.0575,-0.0943)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1101,0.0656,-0.0736),(0.0974,0.0259,-0.1171)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="l_lateral_malleolus_pt", DEF="hanim_l_lateral_malleolus_pt", translation=((0.1308,0.0597,-0.1032)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_lateral_malleolus"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_medial_malleolus_pt", DEF="hanim_l_medial_malleolus_pt", translation=((0.089,0.0716,-0.0881)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_medial_malleolus"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_sphyrion_pt", DEF="hanim_l_sphyrion_pt", translation=((0.089,0.0575,-0.0943)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_sphyrion"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_calcaneous_post_pt", DEF="hanim_l_calcaneous_post_pt", translation=((0.0974,0.0259,-0.1171)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_calcaneous_post"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="l_subtalar", DEF="hanim_l_subtalar", center=((0.1086,0.0001,-0.0368)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_midproximal", DEF="hanim_l_midproximal", children=[
#<HAnimJoint name='l_subtalar'/> visualization sphere within <HAnimSegment name='l_midproximal'/>

TouchSensor(description="HAnimJoint l_subtalar, HAnimSegment l_midproximal"),
Transform(translation=((0.1086,0.0001,-0.0368)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1086,0.0001,-0.0368),(0.1086,0.0001,0.0368)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_midtarsal", DEF="hanim_l_midtarsal", center=((0.1086,0.0001,0.0368)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_middistal", DEF="hanim_l_middistal", children=[
#<HAnimJoint name='l_midtarsal'/> visualization sphere within <HAnimSegment name='l_middistal'/>

TouchSensor(description="HAnimJoint l_midtarsal, HAnimSegment l_middistal"),
Transform(translation=((0.1086,0.0001,0.0368)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1086,0.0001,0.0368),(0.1086,0,0.0762)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1086,0.0001,0.0368),(0.0816,0.0232,0.0106)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="l_metatarsal_pha1_pt", DEF="hanim_l_metatarsal_pha1_pt", translation=((0.0816,0.0232,0.0106)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_metatarsal_pha1"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="l_metatarsal", DEF="hanim_l_metatarsal", center=((0.1086,0,0.0762)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_forefoot", DEF="hanim_l_forefoot", children=[
#<HAnimJoint name='l_metatarsal'/> visualization sphere within <HAnimSegment name='l_forefoot'/>

TouchSensor(description="HAnimJoint l_metatarsal, HAnimSegment l_forefoot"),
Transform(translation=((0.1086,0,0.0762)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1086,0,0.0762),(0.1354,0.0016,0.1476)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1086,0,0.0762),(0.1825,0.007,0.0928)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1086,0,0.0762),(0.1195,0.0079,0.1433)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="l_forefoot_tip", DEF="hanim_l_forefoot_tip", translation=((0.1354,0.0016,0.1476)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_forefoot_tip"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_metatarsal_pha5_pt", DEF="hanim_l_metatarsal_pha5_pt", translation=((0.1825,0.007,0.0928)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_metatarsal_pha5"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_digit2_pt", DEF="hanim_l_digit2_pt", translation=((0.1195,0.0079,0.1433)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_digit2"),
Shape(USE="HAnimSiteShape"),]),])])])])])])]),
HAnimJoint(name="r_hip", DEF="hanim_r_hip", center=((-0.0961,0.9124,-0.0001)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_thigh", DEF="hanim_r_thigh", children=[
#<HAnimJoint name='r_hip'/> visualization sphere within <HAnimSegment name='r_thigh'/>

TouchSensor(description="HAnimJoint r_hip, HAnimSegment r_thigh"),
Transform(translation=((-0.0961,0.9124,-0.0001)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.0961,0.9124,-0.0001),(-0.104,0.4867,0.0308)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.0961,0.9124,-0.0001),(-0.0825,0.4932,-0.0326)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.0961,0.9124,-0.0001),(-0.1421,0.4992,0.031)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.0961,0.9124,-0.0001),(-0.0221,0.5014,0.0289)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="r_knee_crease_pt", DEF="hanim_r_knee_crease_pt", translation=((-0.0825,0.4932,-0.0326)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_knee_crease"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_femoral_lateral_epicn_pt", DEF="hanim_r_femoral_lateral_epicn_pt", translation=((-0.1421,0.4992,0.031)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_femoral_lateral_epicn"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_femoral_medial_epicn_pt", DEF="hanim_r_femoral_medial_epicn_pt", translation=((-0.0221,0.5014,0.0289)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_femoral_medial_epicn"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="r_knee", DEF="hanim_r_knee", center=((-0.104,0.4867,0.0308)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_calf", DEF="hanim_r_calf", children=[
#<HAnimJoint name='r_knee'/> visualization sphere within <HAnimSegment name='r_calf'/>

TouchSensor(description="HAnimJoint r_knee, HAnimSegment r_calf"),
Transform(translation=((-0.104,0.4867,0.0308)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.104,0.4867,0.0308),(-0.1101,0.0656,-0.0736)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_ankle", DEF="hanim_r_ankle", center=((-0.1101,0.0656,-0.0736)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_hindfoot", DEF="hanim_r_hindfoot", children=[
#<HAnimJoint name='r_ankle'/> visualization sphere within <HAnimSegment name='r_hindfoot'/>

TouchSensor(description="HAnimJoint r_ankle, HAnimSegment r_hindfoot"),
Transform(translation=((-0.1101,0.0656,-0.0736)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1101,0.0656,-0.0736),(-0.1086,0.0001,-0.0368)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1101,0.0656,-0.0736),(-0.1006,0.0658,-0.1075)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1101,0.0656,-0.0736),(-0.0591,0.076,-0.0928)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1101,0.0656,-0.0736),(-0.0603,0.061,-0.1002)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1101,0.0656,-0.0736),(-0.0692,0.0297,-0.1221)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="r_lateral_malleolus_pt", DEF="hanim_r_lateral_malleolus_pt", translation=((-0.1006,0.0658,-0.1075)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_lateral_malleolus"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_medial_malleolus_pt", DEF="hanim_r_medial_malleolus_pt", translation=((-0.0591,0.076,-0.0928)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_medial_malleolus"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_sphyrion_pt", DEF="hanim_r_sphyrion_pt", translation=((-0.0603,0.061,-0.1002)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_sphyrion"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_calcaneous_post_pt", DEF="hanim_r_calcaneous_post_pt", translation=((-0.0692,0.0297,-0.1221)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_calcaneous_post"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="r_subtalar", DEF="hanim_r_subtalar", center=((-0.1086,0.0001,-0.0368)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_midproximal", DEF="hanim_r_midproximal", children=[
#<HAnimJoint name='r_subtalar'/> visualization sphere within <HAnimSegment name='r_midproximal'/>

TouchSensor(description="HAnimJoint r_subtalar, HAnimSegment r_midproximal"),
Transform(translation=((-0.1086,0.0001,-0.0368)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1086,0.0001,-0.0368),(-0.1086,0.0001,0.0368)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_midtarsal", DEF="hanim_r_midtarsal", center=((-0.1086,0.0001,0.0368)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_middistal", DEF="hanim_r_middistal", children=[
#<HAnimJoint name='r_midtarsal'/> visualization sphere within <HAnimSegment name='r_middistal'/>

TouchSensor(description="HAnimJoint r_midtarsal, HAnimSegment r_middistal"),
Transform(translation=((-0.1086,0.0001,0.0368)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1086,0.0001,0.0368),(-0.1086,0,0.0762)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1086,0.0001,0.0368),(-0.0521,0.026,0.0127)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="r_metatarsal_pha1_pt", DEF="hanim_r_metatarsal_pha1_pt", translation=((-0.0521,0.026,0.0127)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_metatarsal_pha1"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="r_metatarsal", DEF="hanim_r_metatarsal", center=((-0.1086,0,0.0762)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_forefoot", DEF="hanim_r_forefoot", children=[
#<HAnimJoint name='r_metatarsal'/> visualization sphere within <HAnimSegment name='r_forefoot'/>

TouchSensor(description="HAnimJoint r_metatarsal, HAnimSegment r_forefoot"),
Transform(translation=((-0.1086,0,0.0762)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1086,0,0.0762),(-0.1043,0.0227,0.145)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1086,0,0.0762),(-0.1523,0.0166,0.0895)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1086,0,0.0762),(-0.0883,0.0134,0.1383)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="r_forefoot_tip", DEF="hanim_r_forefoot_tip", translation=((-0.1043,0.0227,0.145)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_forefoot_tip"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_metatarsal_pha5_pt", DEF="hanim_r_metatarsal_pha5_pt", translation=((-0.1523,0.0166,0.0895)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_metatarsal_pha5"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_digit2_pt", DEF="hanim_r_digit2_pt", translation=((-0.0883,0.0134,0.1383)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_digit2"),
Shape(USE="HAnimSiteShape"),]),])])])])])])])]),
HAnimJoint(name="vl5", DEF="hanim_vl5", center=((0.0028,1.0568,-0.0776)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l5", DEF="hanim_l5", children=[
#<HAnimJoint name='vl5'/> visualization sphere within <HAnimSegment name='l5'/>

TouchSensor(description="HAnimJoint vl5, HAnimSegment l5"),
Transform(translation=((0.0028,1.0568,-0.0776)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0028,1.0568,-0.0776),(0.0035,1.0925,-0.0787)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0028,1.0568,-0.0776),(0,1.0915,-0.1091)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0028,1.0568,-0.0776),(0.0069,1.0966,0.1017)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="waist_preferred_post_pt", DEF="hanim_waist_preferred_post_pt", translation=((0,1.0915,-0.1091)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite waist_preferred_post"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="navel_pt", DEF="hanim_navel_pt", translation=((0.0069,1.0966,0.1017)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite navel"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="vl4", DEF="hanim_vl4", center=((0.0035,1.0925,-0.0787)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l4", DEF="hanim_l4", children=[
#<HAnimJoint name='vl4'/> visualization sphere within <HAnimSegment name='l4'/>

TouchSensor(description="HAnimJoint vl4, HAnimSegment l4"),
Transform(translation=((0.0035,1.0925,-0.0787)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0035,1.0925,-0.0787),(0.0041,1.1276,-0.0796)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vl3", DEF="hanim_vl3", center=((0.0041,1.1276,-0.0796)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l3", DEF="hanim_l3", children=[
#<HAnimJoint name='vl3'/> visualization sphere within <HAnimSegment name='l3'/>

TouchSensor(description="HAnimJoint vl3, HAnimSegment l3"),
Transform(translation=((0.0041,1.1276,-0.0796)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0041,1.1276,-0.0796),(0.0045,1.1546,-0.08)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vl2", DEF="hanim_vl2", center=((0.0045,1.1546,-0.08)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l2", DEF="hanim_l2", children=[
#<HAnimJoint name='vl2'/> visualization sphere within <HAnimSegment name='l2'/>

TouchSensor(description="HAnimJoint vl2, HAnimSegment l2"),
Transform(translation=((0.0045,1.1546,-0.08)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0045,1.1546,-0.08),(0.0048,1.1912,-0.0805)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0045,1.1546,-0.08),(-0.0711,1.1941,0.1016)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0045,1.1546,-0.08),(0.0871,1.1925,0.0992)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0045,1.1546,-0.08),(0.0049,1.1908,-0.1113)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="r_rib10_pt", DEF="hanim_r_rib10_pt", translation=((-0.0711,1.1941,0.1016)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_rib10"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_rib10_pt", DEF="hanim_l_rib10_pt", translation=((0.0871,1.1925,0.0992)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_rib10"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="rib10_midspine_pt", DEF="hanim_rib10_midspine_pt", translation=((0.0049,1.1908,-0.1113)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite rib10_midspine"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="vl1", DEF="hanim_vl1", center=((0.0048,1.1912,-0.0805)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l1", DEF="hanim_l1", children=[
#<HAnimJoint name='vl1'/> visualization sphere within <HAnimSegment name='l1'/>

TouchSensor(description="HAnimJoint vl1, HAnimSegment l1"),
Transform(translation=((0.0048,1.1912,-0.0805)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0048,1.1912,-0.0805),(0.0051,1.2278,-0.0808)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vt12", DEF="hanim_vt12", center=((0.0051,1.2278,-0.0808)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t12", DEF="hanim_t12", children=[
#<HAnimJoint name='vt12'/> visualization sphere within <HAnimSegment name='t12'/>

TouchSensor(description="HAnimJoint vt12, HAnimSegment t12"),
Transform(translation=((0.0051,1.2278,-0.0808)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0051,1.2278,-0.0808),(0.0053,1.2679,-0.081)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vt11", DEF="hanim_vt11", center=((0.0053,1.2679,-0.081)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t11", DEF="hanim_t11", children=[
#<HAnimJoint name='vt11'/> visualization sphere within <HAnimSegment name='t11'/>

TouchSensor(description="HAnimJoint vt11, HAnimSegment t11"),
Transform(translation=((0.0053,1.2679,-0.081)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0053,1.2679,-0.081),(0.0056,1.2848,-0.0822)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vt10", DEF="hanim_vt10", center=((0.0056,1.2848,-0.0822)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t10", DEF="hanim_t10", children=[
#<HAnimJoint name='vt10'/> visualization sphere within <HAnimSegment name='t10'/>

TouchSensor(description="HAnimJoint vt10, HAnimSegment t10"),
Transform(translation=((0.0056,1.2848,-0.0822)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0056,1.2848,-0.0822),(0.0057,1.3126,-0.0838)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0056,1.2848,-0.0822),(0.0085,1.2995,0.1147)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="substernale_pt", DEF="hanim_substernale_pt", translation=((0.0085,1.2995,0.1147)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite substernale"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="vt9", DEF="hanim_vt9", center=((0.0057,1.3126,-0.0838)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t9", DEF="hanim_t9", children=[
#<HAnimJoint name='vt9'/> visualization sphere within <HAnimSegment name='t9'/>

TouchSensor(description="HAnimJoint vt9, HAnimSegment t9"),
Transform(translation=((0.0057,1.3126,-0.0838)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0057,1.3126,-0.0838),(0.0057,1.3382,-0.0845)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0057,1.3126,-0.0838),(-0.0736,1.3385,0.1217)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0057,1.3126,-0.0838),(0.0918,1.3382,0.1192)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="r_thelion_pt", DEF="hanim_r_thelion_pt", translation=((-0.0736,1.3385,0.1217)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_thelion"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_thelion_pt", DEF="hanim_l_thelion_pt", translation=((0.0918,1.3382,0.1192)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_thelion"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="vt8", DEF="hanim_vt8", center=((0.0057,1.3382,-0.0845)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t8", DEF="hanim_t8", children=[
#<HAnimJoint name='vt8'/> visualization sphere within <HAnimSegment name='t8'/>

TouchSensor(description="HAnimJoint vt8, HAnimSegment t8"),
Transform(translation=((0.0057,1.3382,-0.0845)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0057,1.3382,-0.0845),(0.0058,1.3625,-0.0833)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vt7", DEF="hanim_vt7", center=((0.0058,1.3625,-0.0833)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t7", DEF="hanim_t7", children=[
#<HAnimJoint name='vt7'/> visualization sphere within <HAnimSegment name='t7'/>

TouchSensor(description="HAnimJoint vt7, HAnimSegment t7"),
Transform(translation=((0.0058,1.3625,-0.0833)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0058,1.3625,-0.0833),(0.0059,1.3866,-0.08)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vt6", DEF="hanim_vt6", center=((0.0059,1.3866,-0.08)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t6", DEF="hanim_t6", children=[
#<HAnimJoint name='vt6'/> visualization sphere within <HAnimSegment name='t6'/>

TouchSensor(description="HAnimJoint vt6, HAnimSegment t6"),
Transform(translation=((0.0059,1.3866,-0.08)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0059,1.3866,-0.08),(0.006,1.4102,-0.0745)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vt5", DEF="hanim_vt5", center=((0.006,1.4102,-0.0745)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t5", DEF="hanim_t5", children=[
#<HAnimJoint name='vt5'/> visualization sphere within <HAnimSegment name='t5'/>

TouchSensor(description="HAnimJoint vt5, HAnimSegment t5"),
Transform(translation=((0.006,1.4102,-0.0745)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.006,1.4102,-0.0745),(0.0061,1.432,-0.0675)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vt4", DEF="hanim_vt4", center=((0.0061,1.432,-0.0675)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t4", DEF="hanim_t4", children=[
#<HAnimJoint name='vt4'/> visualization sphere within <HAnimSegment name='t4'/>

TouchSensor(description="HAnimJoint vt4, HAnimSegment t4"),
Transform(translation=((0.0061,1.432,-0.0675)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0061,1.432,-0.0675),(0.0062,1.4583,-0.057)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vt3", DEF="hanim_vt3", center=((0.0062,1.4583,-0.057)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t3", DEF="hanim_t3", children=[
#<HAnimJoint name='vt3'/> visualization sphere within <HAnimSegment name='t3'/>

TouchSensor(description="HAnimJoint vt3, HAnimSegment t3"),
Transform(translation=((0.0062,1.4583,-0.057)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0062,1.4583,-0.057),(0.0063,1.4761,-0.0484)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vt2", DEF="hanim_vt2", center=((0.0063,1.4761,-0.0484)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t2", DEF="hanim_t2", children=[
#<HAnimJoint name='vt2'/> visualization sphere within <HAnimSegment name='t2'/>

TouchSensor(description="HAnimJoint vt2, HAnimSegment t2"),
Transform(translation=((0.0063,1.4761,-0.0484)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0063,1.4761,-0.0484),(0.0065,1.4951,-0.0387)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vt1", DEF="hanim_vt1", center=((0.0065,1.4951,-0.0387)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t1", DEF="hanim_t1", children=[
#<HAnimJoint name='vt1'/> visualization sphere within <HAnimSegment name='t1'/>

TouchSensor(description="HAnimJoint vt1, HAnimSegment t1"),
Transform(translation=((0.0065,1.4951,-0.0387)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0065,1.4951,-0.0387),(0.0066,1.5132,-0.0301)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0065,1.4951,-0.0387),(0.082,1.4488,-0.0353)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0065,1.4951,-0.0387),(-0.082,1.4488,-0.0353)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0065,1.4951,-0.0387),(0.0084,1.4714,0.0551)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0065,1.4951,-0.0387),(0.0064,1.52,-0.0815)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="suprasternale_pt", DEF="hanim_suprasternale_pt", translation=((0.0084,1.4714,0.0551)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite suprasternale"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="cervicale_pt", DEF="hanim_cervicale_pt", translation=((0.0064,1.52,-0.0815)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite cervicale"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="vc7", DEF="hanim_vc7", center=((0.0066,1.5132,-0.0301)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c7", DEF="hanim_c7", children=[
#<HAnimJoint name='vc7'/> visualization sphere within <HAnimSegment name='c7'/>

TouchSensor(description="HAnimJoint vc7, HAnimSegment c7"),
Transform(translation=((0.0066,1.5132,-0.0301)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0066,1.5132,-0.0301),(0.0066,1.5357,-0.0143)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0066,1.5132,-0.0301),(-0.0419,1.5149,-0.022)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0066,1.5132,-0.0301),(0.0646,1.5141,-0.038)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="r_neck_base_pt", DEF="hanim_r_neck_base_pt", translation=((-0.0419,1.5149,-0.022)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_neck_base"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_neck_base_pt", DEF="hanim_l_neck_base_pt", translation=((0.0646,1.5141,-0.038)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_neck_base"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="vc6", DEF="hanim_vc6", center=((0.0066,1.5357,-0.0143)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c6", DEF="hanim_c6", children=[
#<HAnimJoint name='vc6'/> visualization sphere within <HAnimSegment name='c6'/>

TouchSensor(description="HAnimJoint vc6, HAnimSegment c6"),
Transform(translation=((0.0066,1.5357,-0.0143)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0066,1.5357,-0.0143),(0.0066,1.552,-0.0082)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vc5", DEF="hanim_vc5", center=((0.0066,1.552,-0.0082)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c5", DEF="hanim_c5", children=[
#<HAnimJoint name='vc5'/> visualization sphere within <HAnimSegment name='c5'/>

TouchSensor(description="HAnimJoint vc5, HAnimSegment c5"),
Transform(translation=((0.0066,1.552,-0.0082)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0066,1.552,-0.0082),(0.0066,1.5662,-0.0084)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vc4", DEF="hanim_vc4", center=((0.0066,1.5662,-0.0084)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c4", DEF="hanim_c4", children=[
#<HAnimJoint name='vc4'/> visualization sphere within <HAnimSegment name='c4'/>

TouchSensor(description="HAnimJoint vc4, HAnimSegment c4"),
Transform(translation=((0.0066,1.5662,-0.0084)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0066,1.5662,-0.0084),(0.0066,1.58,-0.0103)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vc3", DEF="hanim_vc3", center=((0.0066,1.58,-0.0103)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c3", DEF="hanim_c3", children=[
#<HAnimJoint name='vc3'/> visualization sphere within <HAnimSegment name='c3'/>

TouchSensor(description="HAnimJoint vc3, HAnimSegment c3"),
Transform(translation=((0.0066,1.58,-0.0103)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0066,1.58,-0.0103),(0.0066,1.5928,-0.0103)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vc2", DEF="hanim_vc2", center=((0.0066,1.5928,-0.0103)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c2", DEF="hanim_c2", children=[
#<HAnimJoint name='vc2'/> visualization sphere within <HAnimSegment name='c2'/>

TouchSensor(description="HAnimJoint vc2, HAnimSegment c2"),
Transform(translation=((0.0066,1.5928,-0.0103)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0066,1.5928,-0.0103),(0.0066,1.6144,-0.0034)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="vc1", DEF="hanim_vc1", center=((0.0066,1.6144,-0.0034)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c1", DEF="hanim_c1", children=[
#<HAnimJoint name='vc1'/> visualization sphere within <HAnimSegment name='c1'/>

TouchSensor(description="HAnimJoint vc1, HAnimSegment c1"),
Transform(translation=((0.0066,1.6144,-0.0034)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0066,1.6144,-0.0034),(0.0044,1.6209,0.0236)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="skullbase", DEF="hanim_skullbase", center=((0.0044,1.6209,0.0236)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="skull", DEF="hanim_skull", children=[
#<HAnimJoint name='skullbase'/> visualization sphere within <HAnimSegment name='skull'/>

TouchSensor(description="HAnimJoint skullbase, HAnimSegment skull"),
Transform(translation=((0.0044,1.6209,0.0236)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0.0336,1.6332,0.0502)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0.0336,1.6332,0.0502)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0.0336,1.635,0.0506)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(-0.0336,1.6332,0.0502)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(-0.0336,1.6332,0.0502)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(-0.0336,1.635,0.0506)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0.0,1.63,0.015)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0.005,1.7504,0.0055)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0.0058,1.6316,0.0852)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(-0.0237,1.6171,0.0752)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0.0341,1.6171,0.0752)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0.0061,1.541,0.0805)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(-0.0646,1.6347,0.0302)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(-0.052,1.5529,0.0347)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0.0739,1.6348,0.0282)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0.0631,1.553,0.033)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0.0039,1.5972,-0.0796)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#TODO move skull_tip x to zero

HAnimSite(name="skull_tip", DEF="hanim_skull_tip", translation=((0.005,1.7504,0.0055)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite skull_tip"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="sellion_pt", DEF="hanim_sellion_pt", translation=((0.0058,1.6316,0.0852)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite sellion"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_infraorbitale_pt", DEF="hanim_r_infraorbitale_pt", translation=((-0.0237,1.6171,0.0752)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_infraorbitale"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_infraorbitale_pt", DEF="hanim_l_infraorbitale_pt", translation=((0.0341,1.6171,0.0752)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_infraorbitale"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="supramenton_pt", DEF="hanim_supramenton_pt", translation=((0.0061,1.541,0.0805)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite supramenton"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_tragion_pt", DEF="hanim_r_tragion_pt", translation=((-0.0646,1.6347,0.0302)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_tragion"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_gonion_pt", DEF="hanim_r_gonion_pt", translation=((-0.052,1.5529,0.0347)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_gonion"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_tragion_pt", DEF="hanim_l_tragion_pt", translation=((0.0739,1.6348,0.0282)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_tragion"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_gonion_pt", DEF="hanim_l_gonion_pt", translation=((0.0631,1.553,0.033)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_gonion"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="nuchale_pt", DEF="hanim_nuchale_pt", translation=((0.0039,1.5972,-0.0796)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite nuchale"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="l_eyeball_joint", DEF="hanim_l_eyeball_joint", center=((0.0336,1.6332,0.0502)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_eyeball", DEF="hanim_l_eyeball", children=[
#<HAnimJoint name='l_eyeball_joint'/> visualization sphere within <HAnimSegment name='l_eyeball'/>

TouchSensor(description="HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball"),
Transform(translation=((0.0336,1.6332,0.0502)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0336,1.6332,0.0502),(0.034,1.64,0.05)]), 
color=
ColorRGBA(DEF="HAnimSiteViewpointLineColorRGBA", color=[(0,0,1,1),(0,0,1,0.1)]))),
HAnimSite(name="l_eyeball_site_view", DEF="hanim_l_eyeball_site_view", translation=((0.034,1.64,0.05)), children=[
Viewpoint(DEF="hanim_l_eyeball_site_viewpoint", description="l_eyeball_site_viewpoint looking forward", orientation=((0,1,0,3.141593)), position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_l_eyeball_site_view", url=["#hanim_l_eyeball_site_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(DEF="HAnimSiteViewpointShape", 
geometry=
IndexedFaceSet(DEF="SiteViewpointDiamondIFS", coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(point=[(0,0.01,0),(-0.01,0,0),(0,0,0.01),(0.01,0,0),(0,0,-0.01),(0,-0.01,0)])), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,0,1)), transparency=0.6)))])]),]),])]),
HAnimJoint(name="l_eyelid_joint", DEF="hanim_l_eyelid_joint", center=((0.0336,1.6332,0.0502)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_eyelid", DEF="hanim_l_eyelid", children=[
#<HAnimJoint name='l_eyelid_joint'/> visualization sphere within <HAnimSegment name='l_eyelid'/>

TouchSensor(description="HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid"),
Transform(translation=((0.0336,1.6332,0.0502)), children=[
Shape(USE="HAnimJointShape")]),])]),
HAnimJoint(name="l_eyebrow_joint", DEF="hanim_l_eyebrow_joint", center=((0.0336,1.635,0.0506)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_eyebrow", DEF="hanim_l_eyebrow", children=[
#<HAnimJoint name='l_eyebrow_joint'/> visualization sphere within <HAnimSegment name='l_eyebrow'/>

TouchSensor(description="HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow"),
Transform(translation=((0.0336,1.635,0.0506)), children=[
Shape(USE="HAnimJointShape")]),])]),
HAnimJoint(name="r_eyeball_joint", DEF="hanim_r_eyeball_joint", center=((-0.0336,1.6332,0.0502)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_eyeball", DEF="hanim_r_eyeball", children=[
#<HAnimJoint name='r_eyeball_joint'/> visualization sphere within <HAnimSegment name='r_eyeball'/>

TouchSensor(description="HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball"),
Transform(translation=((-0.0336,1.6332,0.0502)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.0336,1.6332,0.0502),(-0.034,1.64,0.05)]), 
color=
ColorRGBA(USE="HAnimSiteViewpointLineColorRGBA"))),
HAnimSite(name="r_eyeball_site_view", DEF="hanim_r_eyeball_site_view", translation=((-0.034,1.64,0.05)), children=[
Viewpoint(DEF="hanim_r_eyeball_site_viewpoint", description="r_eyeball_site_viewpoint looking forward", orientation=((0,1,0,3.141593)), position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_r_eyeball_site_view", url=["#hanim_r_eyeball_site_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),])]),
HAnimJoint(name="r_eyelid_joint", DEF="hanim_r_eyelid_joint", center=((-0.0336,1.6332,0.0502)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_eyelid", DEF="hanim_r_eyelid", children=[
#<HAnimJoint name='r_eyelid_joint'/> visualization sphere within <HAnimSegment name='r_eyelid'/>

TouchSensor(description="HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid"),
Transform(translation=((-0.0336,1.6332,0.0502)), children=[
Shape(USE="HAnimJointShape")]),])]),
HAnimJoint(name="r_eyebrow_joint", DEF="hanim_r_eyebrow_joint", center=((-0.0336,1.635,0.0506)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_eyebrow", DEF="hanim_r_eyebrow", children=[
#<HAnimJoint name='r_eyebrow_joint'/> visualization sphere within <HAnimSegment name='r_eyebrow'/>

TouchSensor(description="HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow"),
Transform(translation=((-0.0336,1.635,0.0506)), children=[
Shape(USE="HAnimJointShape")]),])]),
#Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint

HAnimJoint(name="temporomandibular", DEF="hanim_temporomandibular", center=((0.0,1.63,0.015)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="jaw", DEF="hanim_jaw", children=[
#<HAnimJoint name='temporomandibular'/> visualization sphere within <HAnimSegment name='jaw'/>

TouchSensor(description="HAnimJoint temporomandibular, HAnimSegment jaw"),
Transform(translation=((0.0,1.63,0.015)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0,1.63,0.015),(0.045,1.63,0.0)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0,1.63,0.015),(-0.045,1.63,0.0)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="temporomandibular_l_site_pt", DEF="hanim_temporomandibular_l_site_pt", translation=((0.045,1.63,0.0)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite temporomandibular_l_site"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="temporomandibular_r_site_pt", DEF="hanim_temporomandibular_r_site_pt", translation=((-0.045,1.63,0.0)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite temporomandibular_r_site"),
Shape(USE="HAnimSiteShape"),]),])]),])])])])])])])]),
HAnimJoint(name="l_sternoclavicular", DEF="hanim_l_sternoclavicular", center=((0.082,1.4488,-0.0353)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_clavicle", DEF="hanim_l_clavicle", children=[
#<HAnimJoint name='l_sternoclavicular'/> visualization sphere within <HAnimSegment name='l_clavicle'/>

TouchSensor(description="HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle"),
Transform(translation=((0.082,1.4488,-0.0353)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.082,1.4488,-0.0353),(0.0962,1.4269,-0.0424)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.082,1.4488,-0.0353),(0.0271,1.4943,0.0394)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.082,1.4488,-0.0353),(0.2032,1.476,-0.049)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.082,1.4488,-0.0353),(0.1777,1.4065,-0.0075)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.082,1.4488,-0.0353),(0.1706,1.4072,-0.0875)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="l_clavicale_pt", DEF="hanim_l_clavicale_pt", translation=((0.0271,1.4943,0.0394)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_clavicale"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_acromion_pt", DEF="hanim_l_acromion_pt", translation=((0.2032,1.476,-0.049)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_acromion"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_axilla_ant_pt", DEF="hanim_l_axilla_ant_pt", translation=((0.1777,1.4065,-0.0075)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_axilla_ant"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_axilla_post_pt", DEF="hanim_l_axilla_post_pt", translation=((0.1706,1.4072,-0.0875)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_axilla_post"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="l_acromioclavicular", DEF="hanim_l_acromioclavicular", center=((0.0962,1.4269,-0.0424)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_scapula", DEF="hanim_l_scapula", children=[
#<HAnimJoint name='l_acromioclavicular'/> visualization sphere within <HAnimSegment name='l_scapula'/>

TouchSensor(description="HAnimJoint l_acromioclavicular, HAnimSegment l_scapula"),
Transform(translation=((0.0962,1.4269,-0.0424)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.0962,1.4269,-0.0424),(0.2029,1.4376,-0.0387)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_shoulder", DEF="hanim_l_shoulder", center=((0.2029,1.4376,-0.0387)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_upperarm", DEF="hanim_l_upperarm", children=[
#<HAnimJoint name='l_shoulder'/> visualization sphere within <HAnimSegment name='l_upperarm'/>

TouchSensor(description="HAnimJoint l_shoulder, HAnimSegment l_upperarm"),
Transform(translation=((0.2029,1.4376,-0.0387)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.2029,1.4376,-0.0387),(0.2014,1.1357,-0.0682)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.2029,1.4376,-0.0387),(0.228,1.1482,-0.11)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="l_humeral_lateral_epicn_pt", DEF="hanim_l_humeral_lateral_epicn_pt", translation=((0.228,1.1482,-0.11)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_humeral_lateral_epicn"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="l_elbow", DEF="hanim_l_elbow", center=((0.2014,1.1357,-0.0682)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_forearm", DEF="hanim_l_forearm", children=[
#<HAnimJoint name='l_elbow'/> visualization sphere within <HAnimSegment name='l_forearm'/>

TouchSensor(description="HAnimJoint l_elbow, HAnimSegment l_forearm"),
Transform(translation=((0.2014,1.1357,-0.0682)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.2014,1.1357,-0.0682),(0.1984,0.8663,-0.0583)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.2014,1.1357,-0.0682),(0.1901,0.8645,-0.0415)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.2014,1.1357,-0.0682),(0.1962,1.1375,-0.1123)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.2014,1.1357,-0.0682),(0.1735,1.1272,-0.1113)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.2014,1.1357,-0.0682),(0.2182,1.1212,-0.1167)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="l_radial_styloid_pt", DEF="hanim_l_radial_styloid_pt", translation=((0.1901,0.8645,-0.0415)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_radial_styloid"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_olecranon_pt", DEF="hanim_l_olecranon_pt", translation=((0.1962,1.1375,-0.1123)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_olecranon"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_humeral_medial_epicn_pt", DEF="hanim_l_humeral_medial_epicn_pt", translation=((0.1735,1.1272,-0.1113)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_humeral_medial_epicn"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_radiale_pt", DEF="hanim_l_radiale_pt", translation=((0.2182,1.1212,-0.1167)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_radiale"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="l_wrist", DEF="hanim_l_wrist", center=((0.1984,0.8663,-0.0583)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_hand", DEF="hanim_l_hand", children=[
#<HAnimJoint name='l_wrist'/> visualization sphere within <HAnimSegment name='l_hand'/>

TouchSensor(description="HAnimJoint l_wrist, HAnimSegment l_hand"),
Transform(translation=((0.1984,0.8663,-0.0583)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1984,0.8663,-0.0583),(0.1924,0.8472,-0.0534)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1984,0.8663,-0.0583),(0.1983,0.8024,-0.028)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1984,0.8663,-0.0583),(0.1987,0.8029,-0.053)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1984,0.8663,-0.0583),(0.1956,0.8019,-0.0794)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1984,0.8663,-0.0583),(0.1925,0.8066,-0.1036)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1984,0.8663,-0.0583),(0.2009,0.8139,-0.0237)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1984,0.8663,-0.0583),(0.2142,0.8529,-0.0648)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1984,0.8663,-0.0583),(0.1929,0.786,-0.1122)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1984,0.8663,-0.0583),(0.3,0.75,0.45)]), 
color=
ColorRGBA(USE="HAnimSiteViewpointLineColorRGBA"))),
HAnimSite(name="l_metacarpal_pha2_pt", DEF="hanim_l_metacarpal_pha2_pt", translation=((0.2009,0.8139,-0.0237)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_metacarpal_pha2"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_ulnar_styloid_pt", DEF="hanim_l_ulnar_styloid_pt", translation=((0.2142,0.8529,-0.0648)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_ulnar_styloid"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_metacarpal_pha5_pt", DEF="hanim_l_metacarpal_pha5_pt", translation=((0.1929,0.786,-0.1122)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_metacarpal_pha5"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_hand_front_view", DEF="hanim_l_hand_front_view", translation=((0.3,0.75,0.45)), children=[
Viewpoint(DEF="hanim_l_hand_front_viewpoint", centerOfRotation=((0,0.7,0)), description="left hand front", position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_l_hand_front_view", url=["#hanim_l_hand_front_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),]),
HAnimJoint(name="l_thumb1", DEF="hanim_l_thumb1", center=((0.1924,0.8472,-0.0534)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_thumb_metacarpal", DEF="hanim_l_thumb_metacarpal", children=[
#<HAnimJoint name='l_thumb1'/> visualization sphere within <HAnimSegment name='l_thumb_metacarpal'/>

TouchSensor(description="HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal"),
Transform(translation=((0.1924,0.8472,-0.0534)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1924,0.8472,-0.0534),(0.1951,0.8226,0.0246)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_thumb2", DEF="hanim_l_thumb2", center=((0.1951,0.8226,0.0246)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_thumb_proximal", DEF="hanim_l_thumb_proximal", children=[
#<HAnimJoint name='l_thumb2'/> visualization sphere within <HAnimSegment name='l_thumb_proximal'/>

TouchSensor(description="HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal"),
Transform(translation=((0.1951,0.8226,0.0246)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1951,0.8226,0.0246),(0.1955,0.8159,0.0464)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_thumb3", DEF="hanim_l_thumb3", center=((0.1955,0.8159,0.0464)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_thumb_distal", DEF="hanim_l_thumb_distal", children=[
#<HAnimJoint name='l_thumb3'/> visualization sphere within <HAnimSegment name='l_thumb_distal'/>

TouchSensor(description="HAnimJoint l_thumb3, HAnimSegment l_thumb_distal"),
Transform(translation=((0.1955,0.8159,0.0464)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1955,0.8159,0.0464),(0.1982,0.8061,0.0759)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="l_thumb_distal_tip", DEF="hanim_l_thumb_distal_tip", translation=((0.1982,0.8061,0.0759)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_thumb_distal_tip"),
Shape(USE="HAnimSiteShape"),]),])])])]),
HAnimJoint(name="l_index0", DEF="hanim_l_index0", center=((0.1983,0.8024,-0.028)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_index_metacarpal", DEF="hanim_l_index_metacarpal", children=[
#<HAnimJoint name='l_index0'/> visualization sphere within <HAnimSegment name='l_index_metacarpal'/>

TouchSensor(description="HAnimJoint l_index0, HAnimSegment l_index_metacarpal"),
Transform(translation=((0.1983,0.8024,-0.028)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1983,0.8024,-0.028),(0.1983,0.7815,-0.028)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_index1", DEF="hanim_l_index1", center=((0.1983,0.7815,-0.028)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_index_proximal", DEF="hanim_l_index_proximal", children=[
#<HAnimJoint name='l_index1'/> visualization sphere within <HAnimSegment name='l_index_proximal'/>

TouchSensor(description="HAnimJoint l_index1, HAnimSegment l_index_proximal"),
Transform(translation=((0.1983,0.7815,-0.028)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1983,0.7815,-0.028),(0.2017,0.7363,-0.0248)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_index2", DEF="hanim_l_index2", center=((0.2017,0.7363,-0.0248)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_index_middle", DEF="hanim_l_index_middle", children=[
#<HAnimJoint name='l_index2'/> visualization sphere within <HAnimSegment name='l_index_middle'/>

TouchSensor(description="HAnimJoint l_index2, HAnimSegment l_index_middle"),
Transform(translation=((0.2017,0.7363,-0.0248)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.2017,0.7363,-0.0248),(0.2028,0.7139,-0.0236)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_index3", DEF="hanim_l_index3", center=((0.2028,0.7139,-0.0236)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_index_distal", DEF="hanim_l_index_distal", children=[
#<HAnimJoint name='l_index3'/> visualization sphere within <HAnimSegment name='l_index_distal'/>

TouchSensor(description="HAnimJoint l_index3, HAnimSegment l_index_distal"),
Transform(translation=((0.2028,0.7139,-0.0236)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.2028,0.7139,-0.0236),(0.2089,0.6858,-0.0245)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.2028,0.7139,-0.0236),(0.2056,0.6743,-0.0482)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="l_index_distal_tip", DEF="hanim_l_index_distal_tip", translation=((0.2089,0.6858,-0.0245)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_index_distal_tip"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="l_dactylion_pt", DEF="hanim_l_dactylion_pt", translation=((0.2056,0.6743,-0.0482)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_dactylion"),
Shape(USE="HAnimSiteShape"),]),])])])])]),
HAnimJoint(name="l_middle0", DEF="hanim_l_middle0", center=((0.1987,0.8029,-0.053)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_middle_metacarpal", DEF="hanim_l_middle_metacarpal", children=[
#<HAnimJoint name='l_middle0'/> visualization sphere within <HAnimSegment name='l_middle_metacarpal'/>

TouchSensor(description="HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal"),
Transform(translation=((0.1987,0.8029,-0.053)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1987,0.8029,-0.053),(0.1987,0.7818,-0.053)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_middle1", DEF="hanim_l_middle1", center=((0.1987,0.7818,-0.053)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_middle_proximal", DEF="hanim_l_middle_proximal", children=[
#<HAnimJoint name='l_middle1'/> visualization sphere within <HAnimSegment name='l_middle_proximal'/>

TouchSensor(description="HAnimJoint l_middle1, HAnimSegment l_middle_proximal"),
Transform(translation=((0.1987,0.7818,-0.053)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1987,0.7818,-0.053),(0.2013,0.7273,-0.0503)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_middle2", DEF="hanim_l_middle2", center=((0.2013,0.7273,-0.0503)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_middle_middle", DEF="hanim_l_middle_middle", children=[
#<HAnimJoint name='l_middle2'/> visualization sphere within <HAnimSegment name='l_middle_middle'/>

TouchSensor(description="HAnimJoint l_middle2, HAnimSegment l_middle_middle"),
Transform(translation=((0.2013,0.7273,-0.0503)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.2013,0.7273,-0.0503),(0.2026,0.7011,-0.0494)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_middle3", DEF="hanim_l_middle3", center=((0.2026,0.7011,-0.0494)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_middle_distal", DEF="hanim_l_middle_distal", children=[
#<HAnimJoint name='l_middle3'/> visualization sphere within <HAnimSegment name='l_middle_distal'/>

TouchSensor(description="HAnimJoint l_middle3, HAnimSegment l_middle_distal"),
Transform(translation=((0.2026,0.7011,-0.0494)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.2026,0.7011,-0.0494),(0.208,0.6731,-0.0491)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="l_middle_distal_tip", DEF="hanim_l_middle_distal_tip", translation=((0.208,0.6731,-0.0491)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_middle_distal_tip"),
Shape(USE="HAnimSiteShape"),]),])])])])]),
HAnimJoint(name="l_ring0", DEF="hanim_l_ring0", center=((0.1956,0.8019,-0.0794)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_ring_metacarpal", DEF="hanim_l_ring_metacarpal", children=[
#<HAnimJoint name='l_ring0'/> visualization sphere within <HAnimSegment name='l_ring_metacarpal'/>

TouchSensor(description="HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal"),
Transform(translation=((0.1956,0.8019,-0.0794)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1956,0.8019,-0.0794),(0.1956,0.7815,-0.0794)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_ring1", DEF="hanim_l_ring1", center=((0.1956,0.7815,-0.0794)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_ring_proximal", DEF="hanim_l_ring_proximal", children=[
#<HAnimJoint name='l_ring1'/> visualization sphere within <HAnimSegment name='l_ring_proximal'/>

TouchSensor(description="HAnimJoint l_ring1, HAnimSegment l_ring_proximal"),
Transform(translation=((0.1956,0.7815,-0.0794)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1956,0.7815,-0.0794),(0.1973,0.7287,-0.0777)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_ring2", DEF="hanim_l_ring2", center=((0.1973,0.7287,-0.0777)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_ring_middle", DEF="hanim_l_ring_middle", children=[
#<HAnimJoint name='l_ring2'/> visualization sphere within <HAnimSegment name='l_ring_middle'/>

TouchSensor(description="HAnimJoint l_ring2, HAnimSegment l_ring_middle"),
Transform(translation=((0.1973,0.7287,-0.0777)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1973,0.7287,-0.0777),(0.1983,0.7045,-0.0767)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_ring3", DEF="hanim_l_ring3", center=((0.1983,0.7045,-0.0767)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_ring_distal", DEF="hanim_l_ring_distal", children=[
#<HAnimJoint name='l_ring3'/> visualization sphere within <HAnimSegment name='l_ring_distal'/>

TouchSensor(description="HAnimJoint l_ring3, HAnimSegment l_ring_distal"),
Transform(translation=((0.1983,0.7045,-0.0767)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1983,0.7045,-0.0767),(0.2035,0.675,-0.0756)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="l_ring_distal_tip", DEF="hanim_l_ring_distal_tip", translation=((0.2035,0.675,-0.0756)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_ring_distal_tip"),
Shape(USE="HAnimSiteShape"),]),])])])])]),
HAnimJoint(name="l_pinky0", DEF="hanim_l_pinky0", center=((0.1925,0.8066,-0.1036)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_pinky_metacarpal", DEF="hanim_l_pinky_metacarpal", children=[
#<HAnimJoint name='l_pinky0'/> visualization sphere within <HAnimSegment name='l_pinky_metacarpal'/>

TouchSensor(description="HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal"),
Transform(translation=((0.1925,0.8066,-0.1036)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1925,0.8066,-0.1036),(0.1925,0.7866,-0.1036)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_pinky1", DEF="hanim_l_pinky1", center=((0.1925,0.7866,-0.1036)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_pinky_proximal", DEF="hanim_l_pinky_proximal", children=[
#<HAnimJoint name='l_pinky1'/> visualization sphere within <HAnimSegment name='l_pinky_proximal'/>

TouchSensor(description="HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal"),
Transform(translation=((0.1925,0.7866,-0.1036)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1925,0.7866,-0.1036),(0.1938,0.7452,-0.1024)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_pinky2", DEF="hanim_l_pinky2", center=((0.1938,0.7452,-0.1024)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_pinky_middle", DEF="hanim_l_pinky_middle", children=[
#<HAnimJoint name='l_pinky2'/> visualization sphere within <HAnimSegment name='l_pinky_middle'/>

TouchSensor(description="HAnimJoint l_pinky2, HAnimSegment l_pinky_middle"),
Transform(translation=((0.1938,0.7452,-0.1024)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1938,0.7452,-0.1024),(0.1948,0.7277,-0.1017)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="l_pinky3", DEF="hanim_l_pinky3", center=((0.1948,0.7277,-0.1017)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_pinky_distal", DEF="hanim_l_pinky_distal", children=[
#<HAnimJoint name='l_pinky3'/> visualization sphere within <HAnimSegment name='l_pinky_distal'/>

TouchSensor(description="HAnimJoint l_pinky3, HAnimSegment l_pinky_distal"),
Transform(translation=((0.1948,0.7277,-0.1017)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(0.1948,0.7277,-0.1017),(0.2014,0.7009,-0.1012)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="l_pinky_distal_tip", DEF="hanim_l_pinky_distal_tip", translation=((0.2014,0.7009,-0.1012)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite l_pinky_distal_tip"),
Shape(USE="HAnimSiteShape"),]),])])])])])])])])])]),
HAnimJoint(name="r_sternoclavicular", DEF="hanim_r_sternoclavicular", center=((-0.082,1.4488,-0.0353)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_clavicle", DEF="hanim_r_clavicle", children=[
#<HAnimJoint name='r_sternoclavicular'/> visualization sphere within <HAnimSegment name='r_clavicle'/>

TouchSensor(description="HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle"),
Transform(translation=((-0.082,1.4488,-0.0353)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.082,1.4488,-0.0353),(-0.0962,1.4269,-0.0424)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.082,1.4488,-0.0353),(-0.0115,1.4943,0.04)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.082,1.4488,-0.0353),(-0.1905,1.4791,-0.0431)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.082,1.4488,-0.0353),(-0.1626,1.4072,-0.0031)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.082,1.4488,-0.0353),(-0.1603,1.4098,-0.0826)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="r_clavicale_pt", DEF="hanim_r_clavicale_pt", translation=((-0.0115,1.4943,0.04)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_clavicale"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_acromion_pt", DEF="hanim_r_acromion_pt", translation=((-0.1905,1.4791,-0.0431)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_acromion"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_axilla_ant_pt", DEF="hanim_r_axilla_ant_pt", translation=((-0.1626,1.4072,-0.0031)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_axilla_ant"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_axilla_post_pt", DEF="hanim_r_axilla_post_pt", translation=((-0.1603,1.4098,-0.0826)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_axilla_post"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="r_acromioclavicular", DEF="hanim_r_acromioclavicular", center=((-0.0962,1.4269,-0.0424)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_scapula", DEF="hanim_r_scapula", children=[
#<HAnimJoint name='r_acromioclavicular'/> visualization sphere within <HAnimSegment name='r_scapula'/>

TouchSensor(description="HAnimJoint r_acromioclavicular, HAnimSegment r_scapula"),
Transform(translation=((-0.0962,1.4269,-0.0424)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.0962,1.4269,-0.0424),(-0.2029,1.4376,-0.0387)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_shoulder", DEF="hanim_r_shoulder", center=((-0.2029,1.4376,-0.0387)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_upperarm", DEF="hanim_r_upperarm", children=[
#<HAnimJoint name='r_shoulder'/> visualization sphere within <HAnimSegment name='r_upperarm'/>

TouchSensor(description="HAnimJoint r_shoulder, HAnimSegment r_upperarm"),
Transform(translation=((-0.2029,1.4376,-0.0387)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.2029,1.4376,-0.0387),(-0.2014,1.1357,-0.0682)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.2029,1.4376,-0.0387),(-0.2224,1.1517,-0.1033)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="r_humeral_lateral_epicn_pt", DEF="hanim_r_humeral_lateral_epicn_pt", translation=((-0.2224,1.1517,-0.1033)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_humeral_lateral_epicn"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="r_elbow", DEF="hanim_r_elbow", center=((-0.2014,1.1357,-0.0682)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_forearm", DEF="hanim_r_forearm", children=[
#<HAnimJoint name='r_elbow'/> visualization sphere within <HAnimSegment name='r_forearm'/>

TouchSensor(description="HAnimJoint r_elbow, HAnimSegment r_forearm"),
Transform(translation=((-0.2014,1.1357,-0.0682)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.2014,1.1357,-0.0682),(-0.1984,0.8663,-0.0583)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.2014,1.1357,-0.0682),(-0.1884,0.8676,-0.036)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.2014,1.1357,-0.0682),(-0.1907,1.1405,-0.1065)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.2014,1.1357,-0.0682),(-0.168,1.1298,-0.1062)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.2014,1.1357,-0.0682),(-0.213,1.1305,-0.1091)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="r_radial_styloid_pt", DEF="hanim_r_radial_styloid_pt", translation=((-0.1884,0.8676,-0.036)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_radial_styloid"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_olecranon_pt", DEF="hanim_r_olecranon_pt", translation=((-0.1907,1.1405,-0.1065)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_olecranon"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_humeral_medial_epicn_pt", DEF="hanim_r_humeral_medial_epicn_pt", translation=((-0.168,1.1298,-0.1062)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_humeral_medial_epicn"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_radiale_pt", DEF="hanim_r_radiale_pt", translation=((-0.213,1.1305,-0.1091)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_radiale"),
Shape(USE="HAnimSiteShape"),]),]),
HAnimJoint(name="r_wrist", DEF="hanim_r_wrist", center=((-0.1984,0.8663,-0.0583)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_hand", DEF="hanim_r_hand", children=[
#<HAnimJoint name='r_wrist'/> visualization sphere within <HAnimSegment name='r_hand'/>

TouchSensor(description="HAnimJoint r_wrist, HAnimSegment r_hand"),
Transform(translation=((-0.1984,0.8663,-0.0583)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.1924,0.8472,-0.0534)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.1983,0.8024,-0.028)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.1987,0.8029,-0.053)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.1956,0.8019,-0.0794)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.1925,0.8066,-0.1036)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.1977,0.8169,-0.0177)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.2117,0.8562,-0.0584)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.1929,0.789,-0.1064)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.3,0.75,0.45)]), 
color=
ColorRGBA(USE="HAnimSiteViewpointLineColorRGBA"))),
HAnimSite(name="r_metacarpal_pha2_pt", DEF="hanim_r_metacarpal_pha2_pt", translation=((-0.1977,0.8169,-0.0177)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_metacarpal_pha2"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_ulnar_styloid_pt", DEF="hanim_r_ulnar_styloid_pt", translation=((-0.2117,0.8562,-0.0584)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_ulnar_styloid"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_metacarpal_pha5_pt", DEF="hanim_r_metacarpal_pha5_pt", translation=((-0.1929,0.789,-0.1064)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_metacarpal_pha5"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_hand_front_view", DEF="hanim_r_hand_front_view", translation=((-0.3,0.75,0.45)), children=[
Viewpoint(DEF="hanim_r_hand_front_viewpoint", centerOfRotation=((0,0.7,0)), description="right hand front", position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_r_hand_front_view", url=["#hanim_r_hand_front_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),]),
HAnimJoint(name="r_thumb1", DEF="hanim_r_thumb1", center=((-0.1924,0.8472,-0.0534)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_thumb_metacarpal", DEF="hanim_r_thumb_metacarpal", children=[
#<HAnimJoint name='r_thumb1'/> visualization sphere within <HAnimSegment name='r_thumb_metacarpal'/>

TouchSensor(description="HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal"),
Transform(translation=((-0.1924,0.8472,-0.0534)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1924,0.8472,-0.0534),(-0.1951,0.8226,0.0246)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_thumb2", DEF="hanim_r_thumb2", center=((-0.1951,0.8226,0.0246)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_thumb_proximal", DEF="hanim_r_thumb_proximal", children=[
#<HAnimJoint name='r_thumb2'/> visualization sphere within <HAnimSegment name='r_thumb_proximal'/>

TouchSensor(description="HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal"),
Transform(translation=((-0.1951,0.8226,0.0246)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1951,0.8226,0.0246),(-0.1955,0.8159,0.0464)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_thumb3", DEF="hanim_r_thumb3", center=((-0.1955,0.8159,0.0464)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_thumb_distal", DEF="hanim_r_thumb_distal", children=[
#<HAnimJoint name='r_thumb3'/> visualization sphere within <HAnimSegment name='r_thumb_distal'/>

TouchSensor(description="HAnimJoint r_thumb3, HAnimSegment r_thumb_distal"),
Transform(translation=((-0.1955,0.8159,0.0464)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1955,0.8159,0.0464),(-0.1869,0.809,0.082)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="r_thumb_distal_tip", DEF="hanim_r_thumb_distal_tip", translation=((-0.1869,0.809,0.082)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_thumb_distal_tip"),
Shape(USE="HAnimSiteShape"),]),])])])]),
HAnimJoint(name="r_index0", DEF="hanim_r_index0", center=((-0.1983,0.8024,-0.028)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_index_metacarpal", DEF="hanim_r_index_metacarpal", children=[
#<HAnimJoint name='r_index0'/> visualization sphere within <HAnimSegment name='r_index_metacarpal'/>

TouchSensor(description="HAnimJoint r_index0, HAnimSegment r_index_metacarpal"),
Transform(translation=((-0.1983,0.8024,-0.028)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1983,0.8024,-0.028),(-0.1983,0.7815,-0.028)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_index1", DEF="hanim_r_index1", center=((-0.1983,0.7815,-0.028)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_index_proximal", DEF="hanim_r_index_proximal", children=[
#<HAnimJoint name='r_index1'/> visualization sphere within <HAnimSegment name='r_index_proximal'/>

TouchSensor(description="HAnimJoint r_index1, HAnimSegment r_index_proximal"),
Transform(translation=((-0.1983,0.7815,-0.028)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1983,0.7815,-0.028),(-0.2017,0.7363,-0.0248)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_index2", DEF="hanim_r_index2", center=((-0.2017,0.7363,-0.0248)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_index_middle", DEF="hanim_r_index_middle", children=[
#<HAnimJoint name='r_index2'/> visualization sphere within <HAnimSegment name='r_index_middle'/>

TouchSensor(description="HAnimJoint r_index2, HAnimSegment r_index_middle"),
Transform(translation=((-0.2017,0.7363,-0.0248)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.2017,0.7363,-0.0248),(-0.2028,0.7139,-0.0236)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_index3", DEF="hanim_r_index3", center=((-0.2028,0.7139,-0.0236)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_index_distal", DEF="hanim_r_index_distal", children=[
#<HAnimJoint name='r_index3'/> visualization sphere within <HAnimSegment name='r_index_distal'/>

TouchSensor(description="HAnimJoint r_index3, HAnimSegment r_index_distal"),
Transform(translation=((-0.2028,0.7139,-0.0236)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.2028,0.7139,-0.0236),(-0.198,0.6883,-0.018)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.2028,0.7139,-0.0236),(-0.1941,0.6772,-0.0423)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="r_index_distal_tip", DEF="hanim_r_index_distal_tip", translation=((-0.198,0.6883,-0.018)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_index_distal_tip"),
Shape(USE="HAnimSiteShape"),]),
HAnimSite(name="r_dactylion_pt", DEF="hanim_r_dactylion_pt", translation=((-0.1941,0.6772,-0.0423)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_dactylion"),
Shape(USE="HAnimSiteShape"),]),])])])])]),
HAnimJoint(name="r_middle0", DEF="hanim_r_middle0", center=((-0.1987,0.8029,-0.053)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_middle_metacarpal", DEF="hanim_r_middle_metacarpal", children=[
#<HAnimJoint name='r_middle0'/> visualization sphere within <HAnimSegment name='r_middle_metacarpal'/>

TouchSensor(description="HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal"),
Transform(translation=((-0.1987,0.8029,-0.053)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1987,0.8029,-0.053),(-0.1987,0.7818,-0.053)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_middle1", DEF="hanim_r_middle1", center=((-0.1987,0.7818,-0.053)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_middle_proximal", DEF="hanim_r_middle_proximal", children=[
#<HAnimJoint name='r_middle1'/> visualization sphere within <HAnimSegment name='r_middle_proximal'/>

TouchSensor(description="HAnimJoint r_middle1, HAnimSegment r_middle_proximal"),
Transform(translation=((-0.1987,0.7818,-0.053)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1987,0.7818,-0.053),(-0.2013,0.7273,-0.0503)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_middle2", DEF="hanim_r_middle2", center=((-0.2013,0.7273,-0.0503)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_middle_middle", DEF="hanim_r_middle_middle", children=[
#<HAnimJoint name='r_middle2'/> visualization sphere within <HAnimSegment name='r_middle_middle'/>

TouchSensor(description="HAnimJoint r_middle2, HAnimSegment r_middle_middle"),
Transform(translation=((-0.2013,0.7273,-0.0503)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.2013,0.7273,-0.0503),(-0.2026,0.7011,-0.0494)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_middle3", DEF="hanim_r_middle3", center=((-0.2026,0.7011,-0.0494)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_middle_distal", DEF="hanim_r_middle_distal", children=[
#<HAnimJoint name='r_middle3'/> visualization sphere within <HAnimSegment name='r_middle_distal'/>

TouchSensor(description="HAnimJoint r_middle3, HAnimSegment r_middle_distal"),
Transform(translation=((-0.2026,0.7011,-0.0494)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.2026,0.7011,-0.0494),(-0.1969,0.6758,-0.0427)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="r_middle_distal_tip", DEF="hanim_r_middle_distal_tip", translation=((-0.1969,0.6758,-0.0427)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_middle_distal_tip"),
Shape(USE="HAnimSiteShape"),]),])])])])]),
HAnimJoint(name="r_ring0", DEF="hanim_r_ring0", center=((-0.1956,0.8019,-0.0794)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_ring_metacarpal", DEF="hanim_r_ring_metacarpal", children=[
#<HAnimJoint name='r_ring0'/> visualization sphere within <HAnimSegment name='r_ring_metacarpal'/>

TouchSensor(description="HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal"),
Transform(translation=((-0.1956,0.8019,-0.0794)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1956,0.8019,-0.0794),(-0.1956,0.7815,-0.0794)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_ring1", DEF="hanim_r_ring1", center=((-0.1956,0.7815,-0.0794)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_ring_proximal", DEF="hanim_r_ring_proximal", children=[
#<HAnimJoint name='r_ring1'/> visualization sphere within <HAnimSegment name='r_ring_proximal'/>

TouchSensor(description="HAnimJoint r_ring1, HAnimSegment r_ring_proximal"),
Transform(translation=((-0.1956,0.7815,-0.0794)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1956,0.7815,-0.0794),(-0.1973,0.7287,-0.0777)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_ring2", DEF="hanim_r_ring2", center=((-0.1973,0.7287,-0.0777)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_ring_middle", DEF="hanim_r_ring_middle", children=[
#<HAnimJoint name='r_ring2'/> visualization sphere within <HAnimSegment name='r_ring_middle'/>

TouchSensor(description="HAnimJoint r_ring2, HAnimSegment r_ring_middle"),
Transform(translation=((-0.1973,0.7287,-0.0777)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1973,0.7287,-0.0777),(-0.1983,0.7045,-0.0767)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_ring3", DEF="hanim_r_ring3", center=((-0.1983,0.7045,-0.0767)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_ring_distal", DEF="hanim_r_ring_distal", children=[
#<HAnimJoint name='r_ring3'/> visualization sphere within <HAnimSegment name='r_ring_distal'/>

TouchSensor(description="HAnimJoint r_ring3, HAnimSegment r_ring_distal"),
Transform(translation=((-0.1983,0.7045,-0.0767)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1983,0.7045,-0.0767),(-0.1934,0.6778,-0.0693)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="r_ring_distal_tip", DEF="hanim_r_ring_distal_tip", translation=((-0.1934,0.6778,-0.0693)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_ring_distal_tip"),
Shape(USE="HAnimSiteShape"),]),])])])])]),
HAnimJoint(name="r_pinky0", DEF="hanim_r_pinky0", center=((-0.1925,0.8066,-0.1036)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_pinky_metacarpal", DEF="hanim_r_pinky_metacarpal", children=[
#<HAnimJoint name='r_pinky0'/> visualization sphere within <HAnimSegment name='r_pinky_metacarpal'/>

TouchSensor(description="HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal"),
Transform(translation=((-0.1925,0.8066,-0.1036)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1925,0.8066,-0.1036),(-0.1925,0.7866,-0.1036)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_pinky1", DEF="hanim_r_pinky1", center=((-0.1925,0.7866,-0.1036)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_pinky_proximal", DEF="hanim_r_pinky_proximal", children=[
#<HAnimJoint name='r_pinky1'/> visualization sphere within <HAnimSegment name='r_pinky_proximal'/>

TouchSensor(description="HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal"),
Transform(translation=((-0.1925,0.7866,-0.1036)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1925,0.7866,-0.1036),(-0.1938,0.7452,-0.1024)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_pinky2", DEF="hanim_r_pinky2", center=((-0.1938,0.7452,-0.1024)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_pinky_middle", DEF="hanim_r_pinky_middle", children=[
#<HAnimJoint name='r_pinky2'/> visualization sphere within <HAnimSegment name='r_pinky_middle'/>

TouchSensor(description="HAnimJoint r_pinky2, HAnimSegment r_pinky_middle"),
Transform(translation=((-0.1938,0.7452,-0.1024)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1938,0.7452,-0.1024),(-0.1948,0.7277,-0.1017)]), 
color=
ColorRGBA(USE="HAnimSegmentLineColorRGBA"))),]),
HAnimJoint(name="r_pinky3", DEF="hanim_r_pinky3", center=((-0.1948,0.7277,-0.1017)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_pinky_distal", DEF="hanim_r_pinky_distal", children=[
#<HAnimJoint name='r_pinky3'/> visualization sphere within <HAnimSegment name='r_pinky_distal'/>

TouchSensor(description="HAnimJoint r_pinky3, HAnimSegment r_pinky_distal"),
Transform(translation=((-0.1948,0.7277,-0.1017)), children=[
Shape(USE="HAnimJointShape")]),
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>

Shape(
geometry=
LineSet(vertexCount=[int(2)], 
coord=
Coordinate(point=[(-0.1948,0.7277,-0.1017),(-0.1938,0.7035,-0.0949)]), 
color=
ColorRGBA(USE="HAnimSiteLineColorRGBA"))),
HAnimSite(name="r_pinky_distal_tip", DEF="hanim_r_pinky_distal_tip", translation=((-0.1938,0.7035,-0.0949)), children=[
#HAnimSite visualization shape

TouchSensor(description="HAnimSite r_pinky_distal_tip"),
Shape(USE="HAnimSiteShape"),]),])])])])])])])])])])])])])])])])])])])])])])])])])])])])), viewpoints=(
HAnimSite(name="l_inclined_view", DEF="hanim_l_inclined_view", rotation=((-0.113,0.993,0.0347,0.671)), translation=((1.62,1.05,2.06)), children=[
Viewpoint(DEF="hanim_l_inclined_viewpoint", description="left inclined", position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_l_inclined_view", url=["#hanim_l_inclined_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),
HAnimSite(name="r_inclined_view", DEF="hanim_r_inclined_view", rotation=((-0.113,-0.993,0.0347,0.671)), translation=((-1.62,1.05,2.06)), children=[
Viewpoint(DEF="hanim_r_inclined_viewpoint", centerOfRotation=((0,0.9,0)), description="right inclined", position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_r_inclined_view", url=["#hanim_r_inclined_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),
HAnimSite(name="front_view", DEF="hanim_front_view", translation=((0,0.85,2.58)), children=[
Viewpoint(DEF="hanim_front_viewpoint", centerOfRotation=((0,0.9,0)), description="front", position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_front_view", url=["#hanim_front_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),
HAnimSite(name="back_view", DEF="hanim_back_view", rotation=((0,1,0,3.14)), translation=((0,0.85,-2.58)), children=[
Viewpoint(DEF="hanim_back_viewpoint", centerOfRotation=((0,0.9,0)), description="back", position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_back_view", url=["#hanim_back_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),
HAnimSite(name="l_side_view", DEF="hanim_l_side_view", rotation=((0,1,0,1.5708)), translation=((2.6,0.854,0)), children=[
Viewpoint(DEF="hanim_l_side_viewpoint", centerOfRotation=((0,0.9,0)), description="left side", position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_l_side_view", url=["#hanim_l_side_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),
HAnimSite(name="Top_view", DEF="hanim_Top_view", rotation=((1,0,0,-1.57)), translation=((0,3.5,0)), children=[
Viewpoint(DEF="hanim_Top_viewpoint", centerOfRotation=((0,0.9,0)), description="Top", position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_Top_view", url=["#hanim_Top_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),
HAnimSite(name="front_close_view", DEF="hanim_front_close_view", translation=((0,0.854,1.575)), children=[
Viewpoint(DEF="hanim_front_close_viewpoint", centerOfRotation=((0,0,1.575)), description="front close", position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_front_close_view", url=["#hanim_front_close_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),
HAnimSite(name="side_close_view", DEF="hanim_side_close_view", rotation=((0,1,0,1.5708)), translation=((1.56,0.854,0)), children=[
Viewpoint(DEF="hanim_side_close_viewpoint", centerOfRotation=((1.6,0,0)), description="side close", position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_side_close_view", url=["#hanim_side_close_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),
HAnimSite(name="head_front_close_view", DEF="hanim_head_front_close_view", translation=((0,1.5,1)), children=[
Viewpoint(DEF="hanim_head_front_close_viewpoint", centerOfRotation=((0,0,1)), description="head front close", position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_head_front_close_view", url=["#hanim_head_front_close_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),
HAnimSite(name="chest_front_close_view", DEF="hanim_chest_front_close_view", translation=((0,1.2,1)), children=[
Viewpoint(DEF="hanim_chest_front_close_viewpoint", centerOfRotation=((0,0,1)), description="chest front close", position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_chest_front_close_view", url=["#hanim_chest_front_close_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),
HAnimSite(name="pelvis_front_close_view", DEF="hanim_pelvis_front_close_view", translation=((0,0.8,1)), children=[
Viewpoint(DEF="hanim_pelvis_front_close_viewpoint", centerOfRotation=((0,0,1)), description="pelvis front close", position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_pelvis_front_close_view", url=["#hanim_pelvis_front_close_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),
HAnimSite(name="knees_front_close_view", DEF="hanim_knees_front_close_view", translation=((0,0.4,1)), children=[
Viewpoint(DEF="hanim_knees_front_close_viewpoint", centerOfRotation=((0,0.4,0)), description="knees front close", position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_knees_front_close_view", url=["#hanim_knees_front_close_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),
HAnimSite(name="feet_front_close_view", DEF="hanim_feet_front_close_view", translation=((0,0,1)), children=[
Viewpoint(DEF="hanim_feet_front_close_viewpoint", description="feet front close", position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_feet_front_close_view", url=["#hanim_feet_front_close_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),
HAnimSite(name="eye_level_view", DEF="hanim_eye_level_view", translation=((0,1.6332,0.0502)), children=[
Viewpoint(DEF="hanim_eye_level_viewpoint", description="eye level looking forward", orientation=((0,1,0,3.141593)), position=((0,0,0))),
#HAnimSite/Viewpoint visualization shape

Anchor(description="HAnimSite Viewpoint hanim_eye_level_view", url=["#hanim_eye_level_viewpoint"], children=[
LOD(forceTransitions=True, range=[float(0.04)], children=[
WorldInfo(info=["hide diamond when close"]),
Shape(USE="HAnimSiteViewpointShape")])]),]),
HAnimSite(USE="hanim_l_eyeball_site_view"),
HAnimSite(USE="hanim_r_eyeball_site_view"),
HAnimSite(USE="hanim_l_hand_front_view"),
HAnimSite(USE="hanim_r_hand_front_view")), joints=(
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
HAnimJoint(USE="hanim_l_ankle"),
HAnimJoint(USE="hanim_r_ankle"),
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
HAnimJoint(USE="hanim_l_index0"),
HAnimJoint(USE="hanim_r_index0"),
HAnimJoint(USE="hanim_l_index1"),
HAnimJoint(USE="hanim_r_index1"),
HAnimJoint(USE="hanim_l_index2"),
HAnimJoint(USE="hanim_r_index2"),
HAnimJoint(USE="hanim_l_index3"),
HAnimJoint(USE="hanim_r_index3"),
HAnimJoint(USE="hanim_l_knee"),
HAnimJoint(USE="hanim_r_knee"),
HAnimJoint(USE="hanim_l_metatarsal"),
HAnimJoint(USE="hanim_r_metatarsal"),
HAnimJoint(USE="hanim_l_middle0"),
HAnimJoint(USE="hanim_r_middle0"),
HAnimJoint(USE="hanim_l_middle1"),
HAnimJoint(USE="hanim_r_middle1"),
HAnimJoint(USE="hanim_l_middle2"),
HAnimJoint(USE="hanim_r_middle2"),
HAnimJoint(USE="hanim_l_middle3"),
HAnimJoint(USE="hanim_r_middle3"),
HAnimJoint(USE="hanim_l_midtarsal"),
HAnimJoint(USE="hanim_r_midtarsal"),
HAnimJoint(USE="hanim_l_pinky0"),
HAnimJoint(USE="hanim_r_pinky0"),
HAnimJoint(USE="hanim_l_pinky1"),
HAnimJoint(USE="hanim_r_pinky1"),
HAnimJoint(USE="hanim_l_pinky2"),
HAnimJoint(USE="hanim_r_pinky2"),
HAnimJoint(USE="hanim_l_pinky3"),
HAnimJoint(USE="hanim_r_pinky3"),
HAnimJoint(USE="hanim_l_ring0"),
HAnimJoint(USE="hanim_r_ring0"),
HAnimJoint(USE="hanim_l_ring1"),
HAnimJoint(USE="hanim_r_ring1"),
HAnimJoint(USE="hanim_l_ring2"),
HAnimJoint(USE="hanim_r_ring2"),
HAnimJoint(USE="hanim_l_ring3"),
HAnimJoint(USE="hanim_r_ring3"),
HAnimJoint(USE="hanim_l_shoulder"),
HAnimJoint(USE="hanim_r_shoulder"),
HAnimJoint(USE="hanim_l_sternoclavicular"),
HAnimJoint(USE="hanim_r_sternoclavicular"),
HAnimJoint(USE="hanim_l_subtalar"),
HAnimJoint(USE="hanim_r_subtalar"),
HAnimJoint(USE="hanim_l_thumb1"),
HAnimJoint(USE="hanim_r_thumb1"),
HAnimJoint(USE="hanim_l_thumb2"),
HAnimJoint(USE="hanim_r_thumb2"),
HAnimJoint(USE="hanim_l_thumb3"),
HAnimJoint(USE="hanim_r_thumb3"),
HAnimJoint(USE="hanim_l_wrist"),
HAnimJoint(USE="hanim_r_wrist")), segments=(
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
HAnimSegment(USE="hanim_l_forefoot"),
HAnimSegment(USE="hanim_r_forefoot"),
HAnimSegment(USE="hanim_l_hand"),
HAnimSegment(USE="hanim_r_hand"),
HAnimSegment(USE="hanim_l_hindfoot"),
HAnimSegment(USE="hanim_r_hindfoot"),
HAnimSegment(USE="hanim_l_index_distal"),
HAnimSegment(USE="hanim_r_index_distal"),
HAnimSegment(USE="hanim_l_index_metacarpal"),
HAnimSegment(USE="hanim_r_index_metacarpal"),
HAnimSegment(USE="hanim_l_index_middle"),
HAnimSegment(USE="hanim_r_index_middle"),
HAnimSegment(USE="hanim_l_index_proximal"),
HAnimSegment(USE="hanim_r_index_proximal"),
HAnimSegment(USE="hanim_l_middistal"),
HAnimSegment(USE="hanim_r_middistal"),
HAnimSegment(USE="hanim_l_middle_distal"),
HAnimSegment(USE="hanim_r_middle_distal"),
HAnimSegment(USE="hanim_l_middle_metacarpal"),
HAnimSegment(USE="hanim_r_middle_metacarpal"),
HAnimSegment(USE="hanim_l_middle_middle"),
HAnimSegment(USE="hanim_r_middle_middle"),
HAnimSegment(USE="hanim_l_middle_proximal"),
HAnimSegment(USE="hanim_r_middle_proximal"),
HAnimSegment(USE="hanim_l_midproximal"),
HAnimSegment(USE="hanim_r_midproximal"),
HAnimSegment(USE="hanim_l_pinky_distal"),
HAnimSegment(USE="hanim_r_pinky_distal"),
HAnimSegment(USE="hanim_l_pinky_metacarpal"),
HAnimSegment(USE="hanim_r_pinky_metacarpal"),
HAnimSegment(USE="hanim_l_pinky_middle"),
HAnimSegment(USE="hanim_r_pinky_middle"),
HAnimSegment(USE="hanim_l_pinky_proximal"),
HAnimSegment(USE="hanim_r_pinky_proximal"),
HAnimSegment(USE="hanim_l_ring_distal"),
HAnimSegment(USE="hanim_r_ring_distal"),
HAnimSegment(USE="hanim_l_ring_metacarpal"),
HAnimSegment(USE="hanim_r_ring_metacarpal"),
HAnimSegment(USE="hanim_l_ring_middle"),
HAnimSegment(USE="hanim_r_ring_middle"),
HAnimSegment(USE="hanim_l_ring_proximal"),
HAnimSegment(USE="hanim_r_ring_proximal"),
HAnimSegment(USE="hanim_l_scapula"),
HAnimSegment(USE="hanim_r_scapula"),
HAnimSegment(USE="hanim_l_thigh"),
HAnimSegment(USE="hanim_r_thigh"),
HAnimSegment(USE="hanim_l_thumb_distal"),
HAnimSegment(USE="hanim_r_thumb_distal"),
HAnimSegment(USE="hanim_l_thumb_metacarpal"),
HAnimSegment(USE="hanim_r_thumb_metacarpal"),
HAnimSegment(USE="hanim_l_thumb_proximal"),
HAnimSegment(USE="hanim_r_thumb_proximal"),
HAnimSegment(USE="hanim_l_upperarm"),
HAnimSegment(USE="hanim_r_upperarm")), sites=(
HAnimSite(USE="hanim_crotch_pt"),
HAnimSite(USE="hanim_skull_tip"),
HAnimSite(USE="hanim_sellion_pt"),
HAnimSite(USE="hanim_supramenton_pt"),
HAnimSite(USE="hanim_nuchale_pt"),
HAnimSite(USE="hanim_suprasternale_pt"),
HAnimSite(USE="hanim_cervicale_pt"),
HAnimSite(USE="hanim_substernale_pt"),
HAnimSite(USE="hanim_rib10_midspine_pt"),
HAnimSite(USE="hanim_waist_preferred_post_pt"),
HAnimSite(USE="hanim_navel_pt"),
HAnimSite(USE="hanim_l_acromion_pt"),
HAnimSite(USE="hanim_r_acromion_pt"),
HAnimSite(USE="hanim_r_asis_pt"),
HAnimSite(USE="hanim_l_asis_pt"),
HAnimSite(USE="hanim_l_axilla_ant_pt"),
HAnimSite(USE="hanim_r_axilla_ant_pt"),
HAnimSite(USE="hanim_l_axilla_post_pt"),
HAnimSite(USE="hanim_r_axilla_post_pt"),
HAnimSite(USE="hanim_l_calcaneous_post_pt"),
HAnimSite(USE="hanim_r_calcaneous_post_pt"),
HAnimSite(USE="hanim_l_clavicale_pt"),
HAnimSite(USE="hanim_r_clavicale_pt"),
HAnimSite(USE="hanim_l_dactylion_pt"),
HAnimSite(USE="hanim_r_dactylion_pt"),
HAnimSite(USE="hanim_l_digit2_pt"),
HAnimSite(USE="hanim_r_digit2_pt"),
HAnimSite(USE="hanim_l_femoral_lateral_epicn_pt"),
HAnimSite(USE="hanim_r_femoral_lateral_epicn_pt"),
HAnimSite(USE="hanim_l_femoral_medial_epicn_pt"),
HAnimSite(USE="hanim_r_femoral_medial_epicn_pt"),
HAnimSite(USE="hanim_l_forefoot_tip"),
HAnimSite(USE="hanim_r_forefoot_tip"),
HAnimSite(USE="hanim_r_gonion_pt"),
HAnimSite(USE="hanim_l_gonion_pt"),
HAnimSite(USE="hanim_l_humeral_lateral_epicn_pt"),
HAnimSite(USE="hanim_r_humeral_lateral_epicn_pt"),
HAnimSite(USE="hanim_l_humeral_medial_epicn_pt"),
HAnimSite(USE="hanim_r_humeral_medial_epicn_pt"),
HAnimSite(USE="hanim_r_iliocristale_pt"),
HAnimSite(USE="hanim_l_iliocristale_pt"),
HAnimSite(USE="hanim_l_index_distal_tip"),
HAnimSite(USE="hanim_r_index_distal_tip"),
HAnimSite(USE="hanim_r_infraorbitale_pt"),
HAnimSite(USE="hanim_l_infraorbitale_pt"),
HAnimSite(USE="hanim_l_knee_crease_pt"),
HAnimSite(USE="hanim_r_knee_crease_pt"),
HAnimSite(USE="hanim_l_lateral_malleolus_pt"),
HAnimSite(USE="hanim_r_lateral_malleolus_pt"),
HAnimSite(USE="hanim_l_medial_malleolus_pt"),
HAnimSite(USE="hanim_r_medial_malleolus_pt"),
HAnimSite(USE="hanim_l_metacarpal_pha2_pt"),
HAnimSite(USE="hanim_r_metacarpal_pha2_pt"),
HAnimSite(USE="hanim_l_metacarpal_pha5_pt"),
HAnimSite(USE="hanim_r_metacarpal_pha5_pt"),
HAnimSite(USE="hanim_l_metatarsal_pha1_pt"),
HAnimSite(USE="hanim_r_metatarsal_pha1_pt"),
HAnimSite(USE="hanim_l_metatarsal_pha5_pt"),
HAnimSite(USE="hanim_r_metatarsal_pha5_pt"),
HAnimSite(USE="hanim_l_middle_distal_tip"),
HAnimSite(USE="hanim_r_middle_distal_tip"),
HAnimSite(USE="hanim_r_neck_base_pt"),
HAnimSite(USE="hanim_l_neck_base_pt"),
HAnimSite(USE="hanim_l_olecranon_pt"),
HAnimSite(USE="hanim_r_olecranon_pt"),
HAnimSite(USE="hanim_l_pinky_distal_tip"),
HAnimSite(USE="hanim_r_pinky_distal_tip"),
HAnimSite(USE="hanim_r_psis_pt"),
HAnimSite(USE="hanim_l_psis_pt"),
HAnimSite(USE="hanim_l_radial_styloid_pt"),
HAnimSite(USE="hanim_r_radial_styloid_pt"),
HAnimSite(USE="hanim_l_radiale_pt"),
HAnimSite(USE="hanim_r_radiale_pt"),
HAnimSite(USE="hanim_r_rib10_pt"),
HAnimSite(USE="hanim_l_rib10_pt"),
HAnimSite(USE="hanim_l_ring_distal_tip"),
HAnimSite(USE="hanim_r_ring_distal_tip"),
HAnimSite(USE="hanim_temporomandibular_l_site_pt"),
HAnimSite(USE="hanim_temporomandibular_r_site_pt"),
HAnimSite(USE="hanim_l_sphyrion_pt"),
HAnimSite(USE="hanim_r_sphyrion_pt"),
HAnimSite(USE="hanim_r_thelion_pt"),
HAnimSite(USE="hanim_l_thelion_pt"),
HAnimSite(USE="hanim_l_thumb_distal_tip"),
HAnimSite(USE="hanim_r_thumb_distal_tip"),
HAnimSite(USE="hanim_r_tragion_pt"),
HAnimSite(USE="hanim_l_tragion_pt"),
HAnimSite(USE="hanim_r_trochanterion_pt"),
HAnimSite(USE="hanim_l_trochanterion_pt"),
HAnimSite(USE="hanim_l_ulnar_styloid_pt"),
HAnimSite(USE="hanim_r_ulnar_styloid_pt"))),
Group(DEF="StopAnimation", children=[
TimeSensor(DEF="StopTimer", cycleInterval=5.73, loop=True),
PositionInterpolator(DEF="Stop_humanoid_root_TranslationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(0,0,0),(0,0,0),(0,0,0)]),
OrientationInterpolator(DEF="Stop_humanoid_root_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_sacroiliac_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_hip_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_knee_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_ankle_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_subtalar_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_midtarsal_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_metatarsal_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_hip_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_knee_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_ankle_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_subtalar_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_midtarsal_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_metatarsal_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vl5_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vl4_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vl3_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vl2_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vl1_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt12_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt11_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt10_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt9_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt8_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt7_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt6_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt5_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt4_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt3_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt2_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt1_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vc7_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vc6_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vc5_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vc4_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vc3_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vc2_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vc1_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_skullbase_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_eyeball_joint_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_eyeball_joint_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_sternoclavicular_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_acromioclavicular_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_shoulder_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_elbow_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_wrist_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_thumb1_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_thumb2_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_thumb3_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_index0_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_index1_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_index2_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_index3_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_middle0_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_middle1_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_middle2_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_middle3_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_ring0_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_ring1_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_ring2_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_ring3_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_pinky0_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_pinky1_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_pinky2_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_pinky3_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_sternoclavicular_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_acromioclavicular_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_shoulder_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_elbow_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_wrist_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_thumb1_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_thumb2_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_thumb3_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_index0_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_index1_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_index2_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_index3_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_middle0_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_middle1_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_middle2_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_middle3_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_ring0_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_ring1_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_ring2_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_ring3_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_pinky0_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_pinky1_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_pinky2_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_pinky3_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_humanoid_root_TranslationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_humanoid_root_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_sacroiliac_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_hip_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_knee_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_ankle_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_subtalar_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_midtarsal_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_metatarsal_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_hip_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_knee_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_ankle_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_subtalar_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_midtarsal_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_metatarsal_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vl5_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vl4_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vl3_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vl2_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vl1_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vt12_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vt11_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vt10_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vt9_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vt8_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vt7_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vt6_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vt5_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vt4_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vt3_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vt2_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vt1_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vc7_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vc6_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vc5_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vc4_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vc3_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vc2_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_vc1_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_skullbase_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_eyeball_joint_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_eyeball_joint_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_sternoclavicular_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_acromioclavicular_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_shoulder_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_elbow_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_wrist_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_thumb1_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_thumb2_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_thumb3_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_index0_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_index1_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_index2_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_index3_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_middle0_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_middle1_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_middle2_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_middle3_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_ring0_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_ring1_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_ring2_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_ring3_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_pinky0_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_pinky1_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_pinky2_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_l_pinky3_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_sternoclavicular_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_acromioclavicular_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_shoulder_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_elbow_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_wrist_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_thumb1_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_thumb2_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_thumb3_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_index0_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_index1_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_index2_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_index3_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_middle0_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_middle1_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_middle2_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_middle3_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_ring0_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_ring1_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_ring2_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_ring3_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_pinky0_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_pinky1_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_pinky2_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StopTimer", toField="set_fraction", toNode="Stop_r_pinky3_RotationInterpolator"),
ROUTE(fromField="value_changed", fromNode="Stop_humanoid_root_TranslationInterpolator", toField="translation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Stop_humanoid_root_RotationInterpolator", toField="rotation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Stop_sacroiliac_RotationInterpolator", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Stop_l_hip_RotationInterpolator", toField="rotation", toNode="hanim_l_hip"),
ROUTE(fromField="value_changed", fromNode="Stop_l_knee_RotationInterpolator", toField="rotation", toNode="hanim_l_knee"),
ROUTE(fromField="value_changed", fromNode="Stop_l_ankle_RotationInterpolator", toField="rotation", toNode="hanim_l_ankle"),
ROUTE(fromField="value_changed", fromNode="Stop_l_subtalar_RotationInterpolator", toField="rotation", toNode="hanim_l_subtalar"),
ROUTE(fromField="value_changed", fromNode="Stop_l_midtarsal_RotationInterpolator", toField="rotation", toNode="hanim_l_midtarsal"),
ROUTE(fromField="value_changed", fromNode="Stop_l_metatarsal_RotationInterpolator", toField="rotation", toNode="hanim_l_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Stop_r_hip_RotationInterpolator", toField="rotation", toNode="hanim_r_hip"),
ROUTE(fromField="value_changed", fromNode="Stop_r_knee_RotationInterpolator", toField="rotation", toNode="hanim_r_knee"),
ROUTE(fromField="value_changed", fromNode="Stop_r_ankle_RotationInterpolator", toField="rotation", toNode="hanim_r_ankle"),
ROUTE(fromField="value_changed", fromNode="Stop_r_subtalar_RotationInterpolator", toField="rotation", toNode="hanim_r_subtalar"),
ROUTE(fromField="value_changed", fromNode="Stop_r_midtarsal_RotationInterpolator", toField="rotation", toNode="hanim_r_midtarsal"),
ROUTE(fromField="value_changed", fromNode="Stop_r_metatarsal_RotationInterpolator", toField="rotation", toNode="hanim_r_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Stop_vl5_RotationInterpolator", toField="rotation", toNode="hanim_vl5"),
ROUTE(fromField="value_changed", fromNode="Stop_vl4_RotationInterpolator", toField="rotation", toNode="hanim_vl4"),
ROUTE(fromField="value_changed", fromNode="Stop_vl3_RotationInterpolator", toField="rotation", toNode="hanim_vl3"),
ROUTE(fromField="value_changed", fromNode="Stop_vl2_RotationInterpolator", toField="rotation", toNode="hanim_vl2"),
ROUTE(fromField="value_changed", fromNode="Stop_vl1_RotationInterpolator", toField="rotation", toNode="hanim_vl1"),
ROUTE(fromField="value_changed", fromNode="Stop_vt12_RotationInterpolator", toField="rotation", toNode="hanim_vt12"),
ROUTE(fromField="value_changed", fromNode="Stop_vt11_RotationInterpolator", toField="rotation", toNode="hanim_vt11"),
ROUTE(fromField="value_changed", fromNode="Stop_vt10_RotationInterpolator", toField="rotation", toNode="hanim_vt10"),
ROUTE(fromField="value_changed", fromNode="Stop_vt9_RotationInterpolator", toField="rotation", toNode="hanim_vt9"),
ROUTE(fromField="value_changed", fromNode="Stop_vt8_RotationInterpolator", toField="rotation", toNode="hanim_vt8"),
ROUTE(fromField="value_changed", fromNode="Stop_vt7_RotationInterpolator", toField="rotation", toNode="hanim_vt7"),
ROUTE(fromField="value_changed", fromNode="Stop_vt6_RotationInterpolator", toField="rotation", toNode="hanim_vt6"),
ROUTE(fromField="value_changed", fromNode="Stop_vt5_RotationInterpolator", toField="rotation", toNode="hanim_vt5"),
ROUTE(fromField="value_changed", fromNode="Stop_vt4_RotationInterpolator", toField="rotation", toNode="hanim_vt4"),
ROUTE(fromField="value_changed", fromNode="Stop_vt3_RotationInterpolator", toField="rotation", toNode="hanim_vt3"),
ROUTE(fromField="value_changed", fromNode="Stop_vt2_RotationInterpolator", toField="rotation", toNode="hanim_vt2"),
ROUTE(fromField="value_changed", fromNode="Stop_vt1_RotationInterpolator", toField="rotation", toNode="hanim_vt1"),
ROUTE(fromField="value_changed", fromNode="Stop_vc7_RotationInterpolator", toField="rotation", toNode="hanim_vc7"),
ROUTE(fromField="value_changed", fromNode="Stop_vc6_RotationInterpolator", toField="rotation", toNode="hanim_vc6"),
ROUTE(fromField="value_changed", fromNode="Stop_vc5_RotationInterpolator", toField="rotation", toNode="hanim_vc5"),
ROUTE(fromField="value_changed", fromNode="Stop_vc4_RotationInterpolator", toField="rotation", toNode="hanim_vc4"),
ROUTE(fromField="value_changed", fromNode="Stop_vc3_RotationInterpolator", toField="rotation", toNode="hanim_vc3"),
ROUTE(fromField="value_changed", fromNode="Stop_vc2_RotationInterpolator", toField="rotation", toNode="hanim_vc2"),
ROUTE(fromField="value_changed", fromNode="Stop_vc1_RotationInterpolator", toField="rotation", toNode="hanim_vc1"),
ROUTE(fromField="value_changed", fromNode="Stop_skullbase_RotationInterpolator", toField="rotation", toNode="hanim_skullbase"),
ROUTE(fromField="value_changed", fromNode="Stop_l_eyeball_joint_RotationInterpolator", toField="rotation", toNode="hanim_l_eyeball_joint"),
ROUTE(fromField="value_changed", fromNode="Stop_r_eyeball_joint_RotationInterpolator", toField="rotation", toNode="hanim_r_eyeball_joint"),
ROUTE(fromField="value_changed", fromNode="Stop_l_sternoclavicular_RotationInterpolator", toField="rotation", toNode="hanim_l_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Stop_l_acromioclavicular_RotationInterpolator", toField="rotation", toNode="hanim_l_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Stop_l_shoulder_RotationInterpolator", toField="rotation", toNode="hanim_l_shoulder"),
ROUTE(fromField="value_changed", fromNode="Stop_l_elbow_RotationInterpolator", toField="rotation", toNode="hanim_l_elbow"),
ROUTE(fromField="value_changed", fromNode="Stop_l_wrist_RotationInterpolator", toField="rotation", toNode="hanim_l_wrist"),
ROUTE(fromField="value_changed", fromNode="Stop_l_thumb1_RotationInterpolator", toField="rotation", toNode="hanim_l_thumb1"),
ROUTE(fromField="value_changed", fromNode="Stop_l_thumb2_RotationInterpolator", toField="rotation", toNode="hanim_l_thumb2"),
ROUTE(fromField="value_changed", fromNode="Stop_l_thumb3_RotationInterpolator", toField="rotation", toNode="hanim_l_thumb3"),
ROUTE(fromField="value_changed", fromNode="Stop_l_index0_RotationInterpolator", toField="rotation", toNode="hanim_l_index0"),
ROUTE(fromField="value_changed", fromNode="Stop_l_index1_RotationInterpolator", toField="rotation", toNode="hanim_l_index1"),
ROUTE(fromField="value_changed", fromNode="Stop_l_index2_RotationInterpolator", toField="rotation", toNode="hanim_l_index2"),
ROUTE(fromField="value_changed", fromNode="Stop_l_index3_RotationInterpolator", toField="rotation", toNode="hanim_l_index3"),
ROUTE(fromField="value_changed", fromNode="Stop_l_middle0_RotationInterpolator", toField="rotation", toNode="hanim_l_middle0"),
ROUTE(fromField="value_changed", fromNode="Stop_l_middle1_RotationInterpolator", toField="rotation", toNode="hanim_l_middle1"),
ROUTE(fromField="value_changed", fromNode="Stop_l_middle2_RotationInterpolator", toField="rotation", toNode="hanim_l_middle2"),
ROUTE(fromField="value_changed", fromNode="Stop_l_middle3_RotationInterpolator", toField="rotation", toNode="hanim_l_middle3"),
ROUTE(fromField="value_changed", fromNode="Stop_l_ring0_RotationInterpolator", toField="rotation", toNode="hanim_l_ring0"),
ROUTE(fromField="value_changed", fromNode="Stop_l_ring1_RotationInterpolator", toField="rotation", toNode="hanim_l_ring1"),
ROUTE(fromField="value_changed", fromNode="Stop_l_ring2_RotationInterpolator", toField="rotation", toNode="hanim_l_ring2"),
ROUTE(fromField="value_changed", fromNode="Stop_l_ring3_RotationInterpolator", toField="rotation", toNode="hanim_l_ring3"),
ROUTE(fromField="value_changed", fromNode="Stop_l_pinky0_RotationInterpolator", toField="rotation", toNode="hanim_l_pinky0"),
ROUTE(fromField="value_changed", fromNode="Stop_l_pinky1_RotationInterpolator", toField="rotation", toNode="hanim_l_pinky1"),
ROUTE(fromField="value_changed", fromNode="Stop_l_pinky2_RotationInterpolator", toField="rotation", toNode="hanim_l_pinky2"),
ROUTE(fromField="value_changed", fromNode="Stop_l_pinky3_RotationInterpolator", toField="rotation", toNode="hanim_l_pinky3"),
ROUTE(fromField="value_changed", fromNode="Stop_r_sternoclavicular_RotationInterpolator", toField="rotation", toNode="hanim_r_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Stop_r_acromioclavicular_RotationInterpolator", toField="rotation", toNode="hanim_r_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Stop_r_shoulder_RotationInterpolator", toField="rotation", toNode="hanim_r_shoulder"),
ROUTE(fromField="value_changed", fromNode="Stop_r_elbow_RotationInterpolator", toField="rotation", toNode="hanim_r_elbow"),
ROUTE(fromField="value_changed", fromNode="Stop_r_wrist_RotationInterpolator", toField="rotation", toNode="hanim_r_wrist"),
ROUTE(fromField="value_changed", fromNode="Stop_r_thumb1_RotationInterpolator", toField="rotation", toNode="hanim_r_thumb1"),
ROUTE(fromField="value_changed", fromNode="Stop_r_thumb2_RotationInterpolator", toField="rotation", toNode="hanim_r_thumb2"),
ROUTE(fromField="value_changed", fromNode="Stop_r_thumb3_RotationInterpolator", toField="rotation", toNode="hanim_r_thumb3"),
ROUTE(fromField="value_changed", fromNode="Stop_r_index0_RotationInterpolator", toField="rotation", toNode="hanim_r_index0"),
ROUTE(fromField="value_changed", fromNode="Stop_r_index1_RotationInterpolator", toField="rotation", toNode="hanim_r_index1"),
ROUTE(fromField="value_changed", fromNode="Stop_r_index2_RotationInterpolator", toField="rotation", toNode="hanim_r_index2"),
ROUTE(fromField="value_changed", fromNode="Stop_r_index3_RotationInterpolator", toField="rotation", toNode="hanim_r_index3"),
ROUTE(fromField="value_changed", fromNode="Stop_r_middle0_RotationInterpolator", toField="rotation", toNode="hanim_r_middle0"),
ROUTE(fromField="value_changed", fromNode="Stop_r_middle1_RotationInterpolator", toField="rotation", toNode="hanim_r_middle1"),
ROUTE(fromField="value_changed", fromNode="Stop_r_middle2_RotationInterpolator", toField="rotation", toNode="hanim_r_middle2"),
ROUTE(fromField="value_changed", fromNode="Stop_r_middle3_RotationInterpolator", toField="rotation", toNode="hanim_r_middle3"),
ROUTE(fromField="value_changed", fromNode="Stop_r_ring0_RotationInterpolator", toField="rotation", toNode="hanim_r_ring0"),
ROUTE(fromField="value_changed", fromNode="Stop_r_ring1_RotationInterpolator", toField="rotation", toNode="hanim_r_ring1"),
ROUTE(fromField="value_changed", fromNode="Stop_r_ring2_RotationInterpolator", toField="rotation", toNode="hanim_r_ring2"),
ROUTE(fromField="value_changed", fromNode="Stop_r_ring3_RotationInterpolator", toField="rotation", toNode="hanim_r_ring3"),
ROUTE(fromField="value_changed", fromNode="Stop_r_pinky0_RotationInterpolator", toField="rotation", toNode="hanim_r_pinky0"),
ROUTE(fromField="value_changed", fromNode="Stop_r_pinky1_RotationInterpolator", toField="rotation", toNode="hanim_r_pinky1"),
ROUTE(fromField="value_changed", fromNode="Stop_r_pinky2_RotationInterpolator", toField="rotation", toNode="hanim_r_pinky2"),
ROUTE(fromField="value_changed", fromNode="Stop_r_pinky3_RotationInterpolator", toField="rotation", toNode="hanim_r_pinky3")]),
Group(DEF="StandAnimation", children=[
TimeSensor(DEF="StandTimer", cycleInterval=5.73, loop=True),
OrientationInterpolator(DEF="Stand_r_metatarsal_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(-1),float(0),float(0),float(0.015)),(float(1),float(0),float(0),float(0.17)),(float(-1),float(0),float(0),float(0.025)),(float(1),float(0),float(0),float(0.01)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Stand_r_ankle_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_knee_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_hip_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_l_ankle_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_l_knee_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_l_hip_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_wrist_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(0.25)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_elbow_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_shoulder_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_l_wrist_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_l_elbow_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_l_shoulder_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_head_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_neck_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_l_eyeball_RotationInterpolator", key=[float(0),float(0.4),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(0.45)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_eyeball_RotationInterpolator", key=[float(0),float(0.4),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(0.45)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_lower_body_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_upper_body_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_whole_body_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
PositionInterpolator(DEF="Stand_whole_body_TranslationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(0,0,0),(0,0,0),(0,0,0)]),
OrientationInterpolator(DEF="Stand_l_sternoclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_l_acromioclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_sternoclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_acromioclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_sacroiliac_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_vl5_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_vc6_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0)),(float(-1),float(0),float(0),float(0)),(float(0),float(-1),float(0),float(0)),(float(0),float(1),float(0),float(0))]),
OrientationInterpolator(DEF="Stand_l_thumb1_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_thumb1_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(0.1)),(float(1),float(0),float(0),float(0.27)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Stand_r_index1_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.1)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0.3)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_index2_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.4)),(float(0),float(0),float(1),float(0.32)),(float(0),float(0),float(1),float(0.25)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_index3_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0.3)),(float(0),float(0),float(1),float(0.35)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0))]),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_r_ankle_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_r_knee_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_r_hip_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_l_ankle_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_l_knee_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_l_hip_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_lower_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_r_wrist_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_r_elbow_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_r_shoulder_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_l_wrist_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_l_elbow_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_l_shoulder_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_head_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_neck_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_l_eyeball_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_r_eyeball_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_upper_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_whole_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_whole_body_TranslationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_l_sternoclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_l_acromioclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_r_sternoclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_r_acromioclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_r_metatarsal_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_sacroiliac_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_vl5_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_vc6_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_l_thumb1_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_r_thumb1_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_r_index1_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_r_index2_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="StandTimer", toField="set_fraction", toNode="Stand_r_index3_RollInterpolator"),
ROUTE(fromField="value_changed", fromNode="Stand_r_ankle_RotationInterpolator", toField="rotation", toNode="hanim_r_ankle"),
ROUTE(fromField="value_changed", fromNode="Stand_r_knee_RotationInterpolator", toField="rotation", toNode="hanim_r_knee"),
ROUTE(fromField="value_changed", fromNode="Stand_r_hip_RotationInterpolator", toField="rotation", toNode="hanim_r_hip"),
ROUTE(fromField="value_changed", fromNode="Stand_l_ankle_RotationInterpolator", toField="rotation", toNode="hanim_l_ankle"),
ROUTE(fromField="value_changed", fromNode="Stand_l_knee_RotationInterpolator", toField="rotation", toNode="hanim_l_knee"),
ROUTE(fromField="value_changed", fromNode="Stand_l_hip_RotationInterpolator", toField="rotation", toNode="hanim_l_hip"),
ROUTE(fromField="value_changed", fromNode="Stand_r_wrist_RotationInterpolator", toField="rotation", toNode="hanim_r_wrist"),
ROUTE(fromField="value_changed", fromNode="Stand_r_elbow_RotationInterpolator", toField="rotation", toNode="hanim_r_elbow"),
ROUTE(fromField="value_changed", fromNode="Stand_r_shoulder_RotationInterpolator", toField="rotation", toNode="hanim_r_shoulder"),
ROUTE(fromField="value_changed", fromNode="Stand_l_wrist_RotationInterpolator", toField="rotation", toNode="hanim_l_wrist"),
ROUTE(fromField="value_changed", fromNode="Stand_l_elbow_RotationInterpolator", toField="rotation", toNode="hanim_l_elbow"),
ROUTE(fromField="value_changed", fromNode="Stand_l_shoulder_RotationInterpolator", toField="rotation", toNode="hanim_l_shoulder"),
ROUTE(fromField="value_changed", fromNode="Stand_head_RotationInterpolator", toField="rotation", toNode="hanim_skullbase"),
ROUTE(fromField="value_changed", fromNode="Stand_neck_RotationInterpolator", toField="rotation", toNode="hanim_vc7"),
ROUTE(fromField="value_changed", fromNode="Stand_l_eyeball_RotationInterpolator", toField="rotation", toNode="hanim_l_eyeball_joint"),
ROUTE(fromField="value_changed", fromNode="Stand_r_eyeball_RotationInterpolator", toField="rotation", toNode="hanim_r_eyeball_joint"),
ROUTE(fromField="value_changed", fromNode="Stand_upper_body_RotationInterpolator", toField="rotation", toNode="hanim_vl1"),
ROUTE(fromField="value_changed", fromNode="Stand_lower_body_RotationInterpolator", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Stand_whole_body_RotationInterpolator", toField="rotation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Stand_whole_body_TranslationInterpolator", toField="translation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Stand_l_sternoclavicular_RollInterpolator", toField="rotation", toNode="hanim_l_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Stand_l_acromioclavicular_RollInterpolator", toField="rotation", toNode="hanim_l_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Stand_r_sternoclavicular_RollInterpolator", toField="rotation", toNode="hanim_r_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Stand_r_acromioclavicular_RollInterpolator", toField="rotation", toNode="hanim_r_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Stand_r_metatarsal_PitchInterpolator", toField="rotation", toNode="hanim_l_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Stand_r_metatarsal_PitchInterpolator", toField="rotation", toNode="hanim_r_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Stand_sacroiliac_YawInterpolator", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Stand_vl5_YawInterpolator", toField="rotation", toNode="hanim_vl5"),
ROUTE(fromField="value_changed", fromNode="Stand_vc6_YawInterpolator", toField="rotation", toNode="hanim_vc6"),
ROUTE(fromField="value_changed", fromNode="Stand_l_thumb1_PitchInterpolator", toField="rotation", toNode="hanim_l_thumb1"),
ROUTE(fromField="value_changed", fromNode="Stand_r_thumb1_PitchInterpolator", toField="rotation", toNode="hanim_r_thumb1"),
ROUTE(fromField="value_changed", fromNode="Stand_r_index1_RollInterpolator", toField="rotation", toNode="hanim_r_index1"),
ROUTE(fromField="value_changed", fromNode="Stand_r_index2_RollInterpolator", toField="rotation", toNode="hanim_r_index2"),
ROUTE(fromField="value_changed", fromNode="Stand_r_index3_RollInterpolator", toField="rotation", toNode="hanim_r_index3"),
ROUTE(fromField="value_changed", fromNode="Stand_r_index1_RollInterpolator", toField="rotation", toNode="hanim_r_middle1"),
ROUTE(fromField="value_changed", fromNode="Stand_r_index2_RollInterpolator", toField="rotation", toNode="hanim_r_middle2"),
ROUTE(fromField="value_changed", fromNode="Stand_r_index3_RollInterpolator", toField="rotation", toNode="hanim_r_middle3"),
ROUTE(fromField="value_changed", fromNode="Stand_r_index1_RollInterpolator", toField="rotation", toNode="hanim_r_ring1"),
ROUTE(fromField="value_changed", fromNode="Stand_r_index2_RollInterpolator", toField="rotation", toNode="hanim_r_ring2"),
ROUTE(fromField="value_changed", fromNode="Stand_r_index3_RollInterpolator", toField="rotation", toNode="hanim_r_ring3"),
ROUTE(fromField="value_changed", fromNode="Stand_r_index1_RollInterpolator", toField="rotation", toNode="hanim_r_pinky1"),
ROUTE(fromField="value_changed", fromNode="Stand_r_index2_RollInterpolator", toField="rotation", toNode="hanim_r_pinky2"),
ROUTE(fromField="value_changed", fromNode="Stand_r_index3_RollInterpolator", toField="rotation", toNode="hanim_r_pinky3")]),
Group(DEF="PitchesAnimation", children=[
TimeSensor(DEF="PitchTimer", cycleInterval=5.73, loop=True),
OrientationInterpolator(DEF="Pitch_r_metatarsal_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(-1),float(0),float(0),float(0.5)),(float(-1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.75)),(float(-1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Pitches_r_ankle_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_r_knee_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_r_hip_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_l_ankle_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_l_knee_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_l_hip_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_r_wrist_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_r_elbow_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_r_shoulder_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_l_wrist_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_l_elbow_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_l_shoulder_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_head_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_neck_RotationInterpolator", key=[float(0),float(0.25),float(0.55),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(0.55)),(float(-1),float(0),float(0),float(1.05)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_lower_body_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_upper_body_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_whole_body_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
PositionInterpolator(DEF="Pitches_whole_body_TranslationInterpolator", key=[float(0),float(0.125),float(0.25),float(0.375),float(0.5),float(0.625),float(0.75),float(0.875),float(1)], keyValue=[(0,0,0),(0,-0.15,0),(0,-0.7,0),(0,-0.15,0),(0,0,0),(0,-0.15,0),(0,-0.7,0),(0,-0.15,0),(0,0,0)]),
OrientationInterpolator(DEF="Pitch_l_sternoclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitch_l_acromioclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitch_r_sternoclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitch_r_acromioclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitch_sacroiliac_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitch_vl5_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitch_vc6_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitch_l_thumb1_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.25)),(float(1),float(0),float(0),float(0.3)),(float(1),float(0),float(0),float(0.27)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Pitch_r_thumb1_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.25)),(float(1),float(0),float(0),float(0.3)),(float(1),float(0),float(0),float(0.27)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_r_ankle_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_r_knee_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_r_hip_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_l_ankle_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_l_knee_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_l_hip_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_lower_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_r_wrist_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_r_elbow_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_r_shoulder_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_l_wrist_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_l_elbow_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_l_shoulder_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_head_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_neck_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_upper_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_whole_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitches_whole_body_TranslationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitch_l_sternoclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitch_l_acromioclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitch_r_sternoclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitch_r_acromioclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitch_r_metatarsal_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitch_sacroiliac_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitch_vl5_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitch_vc6_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitch_l_thumb1_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="PitchTimer", toField="set_fraction", toNode="Pitch_r_thumb1_PitchInterpolator"),
ROUTE(fromField="value_changed", fromNode="Pitches_r_ankle_RotationInterpolator", toField="rotation", toNode="hanim_r_ankle"),
ROUTE(fromField="value_changed", fromNode="Pitches_r_knee_RotationInterpolator", toField="rotation", toNode="hanim_r_knee"),
ROUTE(fromField="value_changed", fromNode="Pitches_r_hip_RotationInterpolator", toField="rotation", toNode="hanim_r_hip"),
ROUTE(fromField="value_changed", fromNode="Pitches_l_ankle_RotationInterpolator", toField="rotation", toNode="hanim_l_ankle"),
ROUTE(fromField="value_changed", fromNode="Pitches_l_knee_RotationInterpolator", toField="rotation", toNode="hanim_l_knee"),
ROUTE(fromField="value_changed", fromNode="Pitches_l_hip_RotationInterpolator", toField="rotation", toNode="hanim_l_hip"),
ROUTE(fromField="value_changed", fromNode="Pitches_lower_body_RotationInterpolator", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Pitches_r_wrist_RotationInterpolator", toField="rotation", toNode="hanim_r_wrist"),
ROUTE(fromField="value_changed", fromNode="Pitches_r_elbow_RotationInterpolator", toField="rotation", toNode="hanim_r_elbow"),
ROUTE(fromField="value_changed", fromNode="Pitches_r_shoulder_RotationInterpolator", toField="rotation", toNode="hanim_r_shoulder"),
ROUTE(fromField="value_changed", fromNode="Pitches_l_wrist_RotationInterpolator", toField="rotation", toNode="hanim_l_wrist"),
ROUTE(fromField="value_changed", fromNode="Pitches_l_elbow_RotationInterpolator", toField="rotation", toNode="hanim_l_elbow"),
ROUTE(fromField="value_changed", fromNode="Pitches_l_shoulder_RotationInterpolator", toField="rotation", toNode="hanim_l_shoulder"),
ROUTE(fromField="value_changed", fromNode="Pitches_head_RotationInterpolator", toField="rotation", toNode="hanim_skullbase"),
ROUTE(fromField="value_changed", fromNode="Pitches_neck_RotationInterpolator", toField="rotation", toNode="hanim_vc4"),
ROUTE(fromField="value_changed", fromNode="Pitches_upper_body_RotationInterpolator", toField="rotation", toNode="hanim_vl1"),
ROUTE(fromField="value_changed", fromNode="Pitches_whole_body_RotationInterpolator", toField="rotation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Pitches_whole_body_TranslationInterpolator", toField="translation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Pitch_l_sternoclavicular_RollInterpolator", toField="rotation", toNode="hanim_l_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Pitch_l_acromioclavicular_RollInterpolator", toField="rotation", toNode="hanim_l_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Pitch_r_sternoclavicular_RollInterpolator", toField="rotation", toNode="hanim_r_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Pitch_r_acromioclavicular_RollInterpolator", toField="rotation", toNode="hanim_r_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Pitch_r_metatarsal_PitchInterpolator", toField="rotation", toNode="hanim_l_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Pitch_r_metatarsal_PitchInterpolator", toField="rotation", toNode="hanim_r_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Pitch_sacroiliac_YawInterpolator", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Pitch_vl5_YawInterpolator", toField="rotation", toNode="hanim_vl5"),
ROUTE(fromField="value_changed", fromNode="Pitch_vc6_YawInterpolator", toField="rotation", toNode="hanim_vc6"),
ROUTE(fromField="value_changed", fromNode="Pitch_l_thumb1_PitchInterpolator", toField="rotation", toNode="hanim_l_thumb1"),
ROUTE(fromField="value_changed", fromNode="Pitch_r_thumb1_PitchInterpolator", toField="rotation", toNode="hanim_r_thumb1")]),
Group(DEF="YawsAnimation", children=[
TimeSensor(DEF="YawTimer", cycleInterval=5.73, loop=True),
OrientationInterpolator(DEF="Yaw_r_metatarsal_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_r_ankle_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(-1),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_r_knee_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(-1),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_r_hip_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_l_ankle_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(-1),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_l_knee_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(-1),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_l_hip_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_r_wrist_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_r_elbow_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_r_shoulder_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_l_wrist_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_l_elbow_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_l_shoulder_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_head_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_neck_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(-1),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_upper_body_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(-1),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_lower_body_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_whole_body_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
PositionInterpolator(DEF="Yaws_whole_body_TranslationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(0,0,0),(0,0,0),(0,0,0)]),
OrientationInterpolator(DEF="Yaw_l_sternoclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaw_l_acromioclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaw_r_sternoclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaw_r_acromioclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaw_sacroiliac_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(-1),float(0),float(0.1)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0.24)),(float(0),float(-1),float(0),float(0.4)),(float(0),float(1),float(0),float(0))]),
OrientationInterpolator(DEF="Yaw_vl5_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaw_vc6_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaw_l_thumb1_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaw_r_thumb1_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_r_ankle_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_r_knee_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_r_hip_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_l_ankle_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_l_knee_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_l_hip_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_lower_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_r_wrist_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_r_elbow_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_r_shoulder_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_l_wrist_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_l_elbow_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_l_shoulder_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_head_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_neck_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_upper_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_whole_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaws_whole_body_TranslationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaw_l_sternoclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaw_l_acromioclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaw_r_sternoclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaw_r_acromioclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaw_r_metatarsal_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaw_sacroiliac_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaw_vl5_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaw_vc6_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaw_l_thumb1_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="YawTimer", toField="set_fraction", toNode="Yaw_r_thumb1_PitchInterpolator"),
ROUTE(fromField="value_changed", fromNode="Yaws_r_ankle_RotationInterpolator", toField="rotation", toNode="hanim_r_ankle"),
ROUTE(fromField="value_changed", fromNode="Yaws_r_knee_RotationInterpolator", toField="rotation", toNode="hanim_r_knee"),
ROUTE(fromField="value_changed", fromNode="Yaws_r_hip_RotationInterpolator", toField="rotation", toNode="hanim_r_hip"),
ROUTE(fromField="value_changed", fromNode="Yaws_l_ankle_RotationInterpolator", toField="rotation", toNode="hanim_l_ankle"),
ROUTE(fromField="value_changed", fromNode="Yaws_l_knee_RotationInterpolator", toField="rotation", toNode="hanim_l_knee"),
ROUTE(fromField="value_changed", fromNode="Yaws_l_hip_RotationInterpolator", toField="rotation", toNode="hanim_l_hip"),
ROUTE(fromField="value_changed", fromNode="Yaws_lower_body_RotationInterpolator", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Yaws_r_wrist_RotationInterpolator", toField="rotation", toNode="hanim_r_wrist"),
ROUTE(fromField="value_changed", fromNode="Yaws_r_elbow_RotationInterpolator", toField="rotation", toNode="hanim_r_elbow"),
ROUTE(fromField="value_changed", fromNode="Yaws_r_shoulder_RotationInterpolator", toField="rotation", toNode="hanim_r_shoulder"),
ROUTE(fromField="value_changed", fromNode="Yaws_l_wrist_RotationInterpolator", toField="rotation", toNode="hanim_l_wrist"),
ROUTE(fromField="value_changed", fromNode="Yaws_l_elbow_RotationInterpolator", toField="rotation", toNode="hanim_l_elbow"),
ROUTE(fromField="value_changed", fromNode="Yaws_l_shoulder_RotationInterpolator", toField="rotation", toNode="hanim_l_shoulder"),
ROUTE(fromField="value_changed", fromNode="Yaws_head_RotationInterpolator", toField="rotation", toNode="hanim_skullbase"),
ROUTE(fromField="value_changed", fromNode="Yaws_neck_RotationInterpolator", toField="rotation", toNode="hanim_vc4"),
ROUTE(fromField="value_changed", fromNode="Yaws_upper_body_RotationInterpolator", toField="rotation", toNode="hanim_vl1"),
ROUTE(fromField="value_changed", fromNode="Yaws_whole_body_RotationInterpolator", toField="rotation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Yaws_whole_body_TranslationInterpolator", toField="translation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Yaw_l_sternoclavicular_RollInterpolator", toField="rotation", toNode="hanim_l_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Yaw_l_acromioclavicular_RollInterpolator", toField="rotation", toNode="hanim_l_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Yaw_r_sternoclavicular_RollInterpolator", toField="rotation", toNode="hanim_r_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Yaw_r_acromioclavicular_RollInterpolator", toField="rotation", toNode="hanim_r_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Yaw_r_metatarsal_PitchInterpolator", toField="rotation", toNode="hanim_l_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Yaw_r_metatarsal_PitchInterpolator", toField="rotation", toNode="hanim_r_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Yaw_sacroiliac_YawInterpolator", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Yaw_vl5_YawInterpolator", toField="rotation", toNode="hanim_vl5"),
ROUTE(fromField="value_changed", fromNode="Yaw_vc6_YawInterpolator", toField="rotation", toNode="hanim_vc6"),
ROUTE(fromField="value_changed", fromNode="Yaw_l_thumb1_PitchInterpolator", toField="rotation", toNode="hanim_l_thumb1"),
ROUTE(fromField="value_changed", fromNode="Yaw_r_thumb1_PitchInterpolator", toField="rotation", toNode="hanim_r_thumb1")]),
Group(DEF="RollsAnimation", children=[
TimeSensor(DEF="RollTimer", cycleInterval=5.73, loop=True),
OrientationInterpolator(DEF="Roll_r_metatarsal_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_r_ankle_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_r_knee_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_r_hip_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(-1),float(0)),(float(0),float(0),float(-1),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_l_ankle_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_l_knee_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_l_hip_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_r_wrist_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_r_elbow_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_r_shoulder_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(1.5)),(float(0),float(0),float(-1),float(3)),(float(0),float(0),float(-1),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_l_wrist_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_l_elbow_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_l_shoulder_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.5)),(float(0),float(0),float(1),float(3)),(float(0),float(0),float(1),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_head_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_neck_RotationInterpolator", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.25)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(1.25)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_lower_body_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_upper_body_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_whole_body_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
PositionInterpolator(DEF="Rolls_whole_body_TranslationInterpolator", key=[float(0),float(0.125),float(0.25),float(0.375),float(0.5),float(0.625),float(0.75),float(0.875),float(1)], keyValue=[(0,0,0),(0,-0.25,0),(0,-0.8,0),(0,-0.25,0),(0,0,0),(0,-0.25,0),(0,-0.8,0),(0,-0.25,0),(0,0,0)]),
OrientationInterpolator(DEF="Roll_l_sternoclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0.22)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Roll_l_acromioclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.05)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Roll_r_sternoclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(-0.2)),(float(0),float(0),float(1),float(-0.22)),(float(0),float(0),float(1),float(-0.2)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Roll_r_acromioclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(-0.05)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Roll_sacroiliac_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Roll_vl5_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Roll_vc6_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Roll_l_thumb1_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Roll_r_thumb1_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_r_ankle_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_r_knee_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_r_hip_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_l_ankle_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_l_knee_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_l_hip_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_lower_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_r_wrist_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_r_elbow_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_r_shoulder_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_l_wrist_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_l_elbow_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_l_shoulder_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_head_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_neck_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_upper_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_whole_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Rolls_whole_body_TranslationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Roll_l_sternoclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Roll_l_acromioclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Roll_r_sternoclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Roll_r_acromioclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Roll_r_metatarsal_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Roll_sacroiliac_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Roll_vl5_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Roll_vc6_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Roll_l_thumb1_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RollTimer", toField="set_fraction", toNode="Roll_r_thumb1_PitchInterpolator"),
ROUTE(fromField="value_changed", fromNode="Rolls_r_ankle_RotationInterpolator", toField="rotation", toNode="hanim_r_ankle"),
ROUTE(fromField="value_changed", fromNode="Rolls_r_knee_RotationInterpolator", toField="rotation", toNode="hanim_r_knee"),
ROUTE(fromField="value_changed", fromNode="Rolls_r_hip_RotationInterpolator", toField="rotation", toNode="hanim_r_hip"),
ROUTE(fromField="value_changed", fromNode="Rolls_l_ankle_RotationInterpolator", toField="rotation", toNode="hanim_l_ankle"),
ROUTE(fromField="value_changed", fromNode="Rolls_l_knee_RotationInterpolator", toField="rotation", toNode="hanim_l_knee"),
ROUTE(fromField="value_changed", fromNode="Rolls_l_hip_RotationInterpolator", toField="rotation", toNode="hanim_l_hip"),
ROUTE(fromField="value_changed", fromNode="Rolls_lower_body_RotationInterpolator", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Rolls_r_wrist_RotationInterpolator", toField="rotation", toNode="hanim_r_wrist"),
ROUTE(fromField="value_changed", fromNode="Rolls_r_elbow_RotationInterpolator", toField="rotation", toNode="hanim_r_elbow"),
ROUTE(fromField="value_changed", fromNode="Rolls_r_shoulder_RotationInterpolator", toField="rotation", toNode="hanim_r_shoulder"),
ROUTE(fromField="value_changed", fromNode="Rolls_l_wrist_RotationInterpolator", toField="rotation", toNode="hanim_l_wrist"),
ROUTE(fromField="value_changed", fromNode="Rolls_l_elbow_RotationInterpolator", toField="rotation", toNode="hanim_l_elbow"),
ROUTE(fromField="value_changed", fromNode="Rolls_l_shoulder_RotationInterpolator", toField="rotation", toNode="hanim_l_shoulder"),
ROUTE(fromField="value_changed", fromNode="Rolls_head_RotationInterpolator", toField="rotation", toNode="hanim_skullbase"),
ROUTE(fromField="value_changed", fromNode="Rolls_neck_RotationInterpolator", toField="rotation", toNode="hanim_vc4"),
ROUTE(fromField="value_changed", fromNode="Rolls_upper_body_RotationInterpolator", toField="rotation", toNode="hanim_vl1"),
ROUTE(fromField="value_changed", fromNode="Rolls_whole_body_RotationInterpolator", toField="rotation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Rolls_whole_body_TranslationInterpolator", toField="translation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Roll_l_sternoclavicular_RollInterpolator", toField="rotation", toNode="hanim_l_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Roll_l_acromioclavicular_RollInterpolator", toField="rotation", toNode="hanim_l_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Roll_r_sternoclavicular_RollInterpolator", toField="rotation", toNode="hanim_r_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Roll_r_acromioclavicular_RollInterpolator", toField="rotation", toNode="hanim_r_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Roll_r_metatarsal_PitchInterpolator", toField="rotation", toNode="hanim_l_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Roll_r_metatarsal_PitchInterpolator", toField="rotation", toNode="hanim_r_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Roll_sacroiliac_YawInterpolator", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Roll_vl5_YawInterpolator", toField="rotation", toNode="hanim_vl5"),
ROUTE(fromField="value_changed", fromNode="Roll_vc6_YawInterpolator", toField="rotation", toNode="hanim_vc6"),
ROUTE(fromField="value_changed", fromNode="Roll_l_thumb1_PitchInterpolator", toField="rotation", toNode="hanim_l_thumb1"),
ROUTE(fromField="value_changed", fromNode="Roll_r_thumb1_PitchInterpolator", toField="rotation", toNode="hanim_r_thumb1")]),
Group(DEF="WalkAnimation", children=[
TimeSensor(DEF="WalkTimer", cycleInterval=1.73, loop=True),
OrientationInterpolator(DEF="Walk_r_metatarsal_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_r_ankle_RotationInterpolator", key=[float(0),float(0.125),float(0.2083),float(0.375),float(0.4583),float(0.5),float(0.6667),float(0.75),float(0.7917),float(0.9167),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.3533)),(float(-1),float(0),float(0),float(0.1072)),(float(1),float(0),float(0),float(0.2612)),(float(1),float(0),float(0),float(0.1268)),(float(-1),float(0),float(0),float(0.01793)),(float(-1),float(0),float(0),float(0.05824)),(float(-1),float(0),float(0),float(0.2398)),(float(-1),float(0),float(0),float(0.35)),(float(-1),float(0),float(0),float(0.3322)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_r_knee_RotationInterpolator", key=[float(0),float(0.125),float(0.2083),float(0.2917),float(0.375),float(0.5),float(0.6667),float(0.7917),float(0.9167),float(1)], keyValue=[(float(1),float(0),float(0),float(0.8573)),(float(1),float(0),float(0),float(0.8926)),(float(1),float(0),float(0),float(0.5351)),(float(1),float(0),float(0),float(0.1756)),(float(1),float(0),float(0),float(0.1194)),(float(1),float(0),float(0),float(0.3153)),(float(1),float(0),float(0),float(0.09354)),(float(1),float(0),float(0),float(0.08558)),(float(1),float(0),float(0),float(0.2475)),(float(1),float(0),float(0),float(0.8573))]),
OrientationInterpolator(DEF="Walk_r_hip_RotationInterpolator", key=[float(0),float(0.125),float(0.2083),float(0.2917),float(0.375),float(0.5),float(0.6667),float(0.7917),float(0.9167),float(1)], keyValue=[(float(-0.5831),float(0.03511),float(0.8116),float(0.1481)),(float(-0.995),float(0.02296),float(0.09674),float(0.4683)),(float(-1),float(0.00192),float(0.007964),float(0.4732)),(float(-0.998),float(-0.0158),float(-0.06102),float(0.5079)),(float(-0.9911),float(-0.03541),float(-0.1286),float(0.5419)),(float(-0.9131),float(-0.06243),float(-0.403),float(0.3361)),(float(-0.4306),float(-0.07962),float(-0.899),float(0.07038)),(float(1),float(0),float(0),float(0.2571)),(float(0.9891),float(-0.02805),float(0.1444),float(0.3879)),(float(-0.5831),float(0.03511),float(0.8116),float(0.1481))]),
OrientationInterpolator(DEF="Walk_l_ankle_RotationInterpolator", key=[float(0),float(0.125),float(0.2083),float(0.375),float(0.6667),float(0.9167),float(1)], keyValue=[(float(-1),float(0),float(0),float(0.06714)),(float(-1),float(0),float(0),float(0.2152)),(float(-1),float(0),float(0),float(0.3184)),(float(-1),float(0),float(0),float(0.4717)),(float(-1),float(0),float(0),float(0.2912)),(float(1),float(0),float(0),float(0.1222)),(float(-1),float(0),float(0),float(0.06714))]),
OrientationInterpolator(DEF="Walk_l_knee_RotationInterpolator", key=[float(0),float(0.2083),float(0.375),float(0.5),float(0.6667),float(0.7917),float(0.9167),float(1)], keyValue=[(float(1),float(0),float(0),float(0.3226)),(float(1),float(0),float(0),float(0.1556)),(float(1),float(0),float(0),float(0.08678)),(float(1),float(0),float(0),float(0.8751)),(float(1),float(0),float(0),float(1.131)),(float(1),float(0),float(0),float(0.09961)),(float(1),float(0),float(0),float(0.3942)),(float(1),float(0),float(0),float(0.3226))]),
OrientationInterpolator(DEF="Walk_l_hip_RotationInterpolator", key=[float(0),float(0.25),float(0.375),float(0.5),float(0.6667),float(0.7917),float(0.9167),float(1)], keyValue=[(float(-0.873),float(0.06094),float(0.484),float(0.2865)),(float(0.9963),float(-0.01057),float(0.08481),float(0.2488)),(float(0.9965),float(0.01591),float(-0.08222),float(0.3836)),(float(-0.7018),float(-0.03223),float(-0.7117),float(0.1289)),(float(-1),float(0),float(0),float(0.5518)),(float(-0.9964),float(0.02231),float(0.0817),float(0.5351)),(float(-0.9809),float(0.04912),float(0.1881),float(0.5204)),(float(-0.873),float(0.06094),float(0.484),float(0.2865))]),
OrientationInterpolator(DEF="Walk_lower_body_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(-1),float(0.1056)),(float(0),float(0),float(1),float(0.09018)),(float(0),float(0),float(-1),float(0.1056))]),
OrientationInterpolator(DEF="Walk_r_wrist_RotationInterpolator", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(-0.8129),float(0.4759),float(-0.3357),float(0.1346)),(float(0.1533),float(-0.9878),float(0.02582),float(0.3902)),(float(-0.5701),float(0.7604),float(-0.311),float(0.366)),(float(-0.8129),float(0.4759),float(-0.3357),float(0.1346))]),
OrientationInterpolator(DEF="Walk_r_elbow_RotationInterpolator", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(-1),float(0),float(0),float(0.411508)),(float(-1),float(0),float(0),float(0.0925011)),(float(-1),float(0),float(0),float(0.572568)),(float(-1),float(0),float(0),float(0.411508))]),
OrientationInterpolator(DEF="Walk_r_shoulder_RotationInterpolator", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(-1),float(0),float(0),float(0.09346)),(float(1),float(0),float(0),float(0.3197)),(float(-1),float(0),float(0),float(0.1564)),(float(-1),float(0),float(0),float(0.09346))]),
OrientationInterpolator(DEF="Walk_l_wrist_RotationInterpolator", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(0),float(-1),float(0),float(0.461076)),(float(-0.330195),float(-0.927451),float(0.175516),float(0.538852)),(float(0.0327774),float(-0.999314),float(-0.0172185),float(0.492033)),(float(0),float(-1),float(0),float(0.461076))]),
OrientationInterpolator(DEF="Walk_l_elbow_RotationInterpolator", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(-1),float(0),float(0),float(0.0659878)),(float(-1),float(0),float(0),float(0.488383)),(float(-1),float(0),float(0),float(0.0177536)),(float(-1),float(0),float(0),float(0.0659878))]),
OrientationInterpolator(DEF="Walk_l_shoulder_RotationInterpolator", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(1),float(0),float(0),float(0.1189)),(float(-1),float(0),float(0),float(0.1861)),(float(1),float(0),float(0),float(0.3357)),(float(1),float(0),float(0),float(0.1189))]),
OrientationInterpolator(DEF="Walk_head_RotationInterpolator", key=[float(0),float(0.375),float(0.4167),float(0.5),float(0.5833),float(0.6667),float(0.75),float(0.8333),float(0.9167),float(1)], keyValue=[(float(0),float(-1),float(0),float(0.08642)),(float(0),float(1),float(0),float(0.1825)),(float(0),float(1),float(0),float(0.1505)),(float(0),float(1),float(0),float(0.1053)),(float(0),float(1),float(0),float(0.04391)),(float(0),float(-1),float(0),float(0.03119)),(float(0),float(-1),float(0),float(0.07936)),(float(0),float(-1),float(0),float(0.1616)),(float(0),float(-1),float(0),float(0.155)),(float(0),float(-1),float(0),float(0.08642))]),
OrientationInterpolator(DEF="Walk_neck_RotationInterpolator", key=[float(0),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_upper_body_RotationInterpolator", key=[float(0),float(0.2083),float(0.375),float(0.75),float(0.8333),float(1)], keyValue=[(float(0),float(1),float(0),float(0.0826)),(float(-0.01972),float(-0.5974),float(0.8017),float(0.08231)),(float(0.009296),float(-0.9648),float(0.2627),float(0.1734)),(float(-0.01238),float(0.9549),float(-0.2968),float(0.08732)),(float(-0.008125),float(0.9691),float(-0.2463),float(0.158)),(float(0),float(1),float(0),float(0.0826))]),
OrientationInterpolator(DEF="Walk_whole_body_RotationInterpolator", key=[float(0),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
PositionInterpolator(DEF="Walk_whole_body_TranslationInterpolator", key=[float(0),float(0.04167),float(0.125),float(0.1667),float(0.2083),float(0.25),float(0.2917),float(0.375),float(0.4583),float(0.5),float(0.5417),float(0.5833),float(0.625),float(0.7083),float(0.75),float(0.7917),float(0.875),float(0.9167),float(1)], keyValue=[(0,-0.00928,0),(0,-0.003858,0),(0,-0.008847,0),(0,-0.01486,0),(0,-0.02641,0),(0,-0.03934,0),(0,-0.0502,0),(0,-0.07469,0),(0,-0.02732,0),(0,-0.01608,0),(0,-0.01129,0),(0,-0.005819,0),(0,-0.002004,0),(0,-0.002579,0),(0,-0.0143,0),(0,-0.03799,0),(0,-0.05648,0),(0,-0.045,0),(0,-0.00928,0)]),
OrientationInterpolator(DEF="Walk_l_sternoclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_l_acromioclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_r_sternoclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_r_acromioclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_sacroiliac_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_vl5_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_vc6_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_l_thumb1_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.25)),(float(1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Walk_r_thumb1_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.25)),(float(1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_r_ankle_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_r_knee_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_r_hip_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_l_ankle_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_l_knee_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_l_hip_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_lower_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_r_wrist_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_r_elbow_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_r_shoulder_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_l_wrist_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_l_elbow_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_l_shoulder_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_head_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_neck_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_upper_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_whole_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_whole_body_TranslationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_l_sternoclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_l_acromioclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_r_sternoclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_r_acromioclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_r_metatarsal_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_sacroiliac_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_vl5_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_vc6_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_l_thumb1_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="WalkTimer", toField="set_fraction", toNode="Walk_r_thumb1_PitchInterpolator"),
ROUTE(fromField="value_changed", fromNode="Walk_r_ankle_RotationInterpolator", toField="rotation", toNode="hanim_r_ankle"),
ROUTE(fromField="value_changed", fromNode="Walk_r_knee_RotationInterpolator", toField="rotation", toNode="hanim_r_knee"),
ROUTE(fromField="value_changed", fromNode="Walk_r_hip_RotationInterpolator", toField="rotation", toNode="hanim_r_hip"),
ROUTE(fromField="value_changed", fromNode="Walk_l_ankle_RotationInterpolator", toField="rotation", toNode="hanim_l_ankle"),
ROUTE(fromField="value_changed", fromNode="Walk_l_knee_RotationInterpolator", toField="rotation", toNode="hanim_l_knee"),
ROUTE(fromField="value_changed", fromNode="Walk_l_hip_RotationInterpolator", toField="rotation", toNode="hanim_l_hip"),
ROUTE(fromField="value_changed", fromNode="Walk_lower_body_RotationInterpolator", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Walk_r_wrist_RotationInterpolator", toField="rotation", toNode="hanim_r_wrist"),
ROUTE(fromField="value_changed", fromNode="Walk_r_elbow_RotationInterpolator", toField="rotation", toNode="hanim_r_elbow"),
ROUTE(fromField="value_changed", fromNode="Walk_r_shoulder_RotationInterpolator", toField="rotation", toNode="hanim_r_shoulder"),
ROUTE(fromField="value_changed", fromNode="Walk_l_wrist_RotationInterpolator", toField="rotation", toNode="hanim_l_wrist"),
ROUTE(fromField="value_changed", fromNode="Walk_l_elbow_RotationInterpolator", toField="rotation", toNode="hanim_l_elbow"),
ROUTE(fromField="value_changed", fromNode="Walk_l_shoulder_RotationInterpolator", toField="rotation", toNode="hanim_l_shoulder"),
ROUTE(fromField="value_changed", fromNode="Walk_head_RotationInterpolator", toField="rotation", toNode="hanim_skullbase"),
ROUTE(fromField="value_changed", fromNode="Walk_neck_RotationInterpolator", toField="rotation", toNode="hanim_vc4"),
ROUTE(fromField="value_changed", fromNode="Walk_upper_body_RotationInterpolator", toField="rotation", toNode="hanim_vl1"),
ROUTE(fromField="value_changed", fromNode="Walk_whole_body_RotationInterpolator", toField="rotation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Walk_whole_body_TranslationInterpolator", toField="translation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Walk_l_sternoclavicular_RollInterpolator", toField="rotation", toNode="hanim_l_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Walk_l_acromioclavicular_RollInterpolator", toField="rotation", toNode="hanim_l_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Walk_r_sternoclavicular_RollInterpolator", toField="rotation", toNode="hanim_r_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Walk_r_acromioclavicular_RollInterpolator", toField="rotation", toNode="hanim_r_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Walk_r_metatarsal_PitchInterpolator", toField="rotation", toNode="hanim_l_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Walk_r_metatarsal_PitchInterpolator", toField="rotation", toNode="hanim_r_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Walk_sacroiliac_YawInterpolator", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Walk_vl5_YawInterpolator", toField="rotation", toNode="hanim_vl5"),
ROUTE(fromField="value_changed", fromNode="Walk_vc6_YawInterpolator", toField="rotation", toNode="hanim_vc6"),
ROUTE(fromField="value_changed", fromNode="Walk_l_thumb1_PitchInterpolator", toField="rotation", toNode="hanim_l_thumb1"),
ROUTE(fromField="value_changed", fromNode="Walk_r_thumb1_PitchInterpolator", toField="rotation", toNode="hanim_r_thumb1")]),
Group(DEF="RunAnimation", children=[
TimeSensor(DEF="RunTimer", cycleInterval=0.9, loop=True),
OrientationInterpolator(DEF="Run_r_metatarsal_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Run_l_hip_RotationInterpolator_Run", key=[float(0),float(0.2182),float(0.4909),float(0.7455),float(1)], keyValue=[(float(-0.99),float(0.033),float(0.04),float(1.42)),(float(-0.99),float(0.1328),float(0.067),float(0.42)),(float(0.99),float(0.014),float(0.009),float(0.9)),(float(-0.99),float(0.0703),float(0.05),float(0.7)),(float(-0.99),float(0.033),float(0.04),float(1.42))]),
OrientationInterpolator(DEF="Run_l_knee_RotationInterpolator_Run", key=[float(0),float(0.2182),float(0.4909),float(0.7455),float(1)], keyValue=[(float(1),float(0),float(0),float(1.01)),(float(1),float(0),float(0),float(0.426)),(float(1),float(0),float(0),float(0.705)),(float(1),float(0),float(0),float(2.179)),(float(1),float(0),float(0),float(1.01))]),
OrientationInterpolator(DEF="Run_l_ankle_RotationInterpolator_Run", key=[float(0),float(0.22),float(0.3),float(0.4),float(1)], keyValue=[(float(1),float(0),float(0),float(0.0374)),(float(-1),float(0),float(0),float(0.1037)),(float(-1),float(0),float(0),float(0.4328)),(float(1),float(0),float(0),float(0.1929)),(float(1),float(0),float(0),float(0.03574))]),
OrientationInterpolator(DEF="Run_r_hip_RotationInterpolator_Run", key=[float(0),float(0.2545),float(0.4909),float(0.7091),float(1)], keyValue=[(float(0.99),float(-0.014),float(0.009),float(0.9)),(float(-0.99),float(-0.0703),float(-0.05),float(0.7)),(float(-0.99),float(-0.033),float(0.04),float(1.42)),(float(-0.99),float(-0.1328),float(-0.067),float(0.42)),(float(0.99),float(-0.014),float(0.009),float(0.9))]),
OrientationInterpolator(DEF="Run_r_knee_RotationInterpolator_Run", key=[float(0),float(0.2545),float(0.4909),float(0.7091),float(1)], keyValue=[(float(1),float(0),float(0),float(0.705)),(float(1),float(0),float(0),float(2.179)),(float(1),float(0),float(0),float(1.01)),(float(1),float(0),float(0),float(0.426)),(float(1),float(0),float(0),float(0.705))]),
OrientationInterpolator(DEF="Run_r_ankle_RotationInterpolator_Run", key=[float(0),float(0.4),float(0.71),float(0.8),float(0.82),float(1)], keyValue=[(float(1),float(0),float(0),float(0.2323)),(float(-1),float(0),float(0),float(0.07843)),(float(-1),float(0),float(0),float(0.32)),(float(-1),float(0),float(0),float(0.374)),(float(-1),float(0),float(0),float(0.3478)),(float(1),float(0),float(0),float(0.2323))]),
OrientationInterpolator(DEF="Run_l_shoulder_RotationInterpolator_Run", key=[float(0),float(0.2182),float(0.4909),float(0.7455),float(1)], keyValue=[(float(0.99),float(-0.074),float(0.25),float(1.5)),(float(0.99),float(-0.092),float(0.44),float(0.3)),(float(-0.99),float(0.136),float(0.25),float(0.85)),(float(0.99),float(-0.081),float(0.38),float(0.4)),(float(0.99),float(-0.074),float(0.25),float(1.5))]),
OrientationInterpolator(DEF="Run_l_elbow_RotationInterpolator_Run", key=[float(0),float(0.2182),float(0.4909),float(0.7455),float(1)], keyValue=[(float(-1),float(0),float(0),float(1.85)),(float(-0.99),float(-0.19),float(0.18),float(1.35)),(float(-1),float(0),float(0),float(0.975)),(float(-0.99),float(-0.09),float(-0.02),float(1.55)),(float(-1),float(0),float(0),float(1.85))]),
OrientationInterpolator(DEF="Run_l_wrist_RotationInterpolator_Run", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(-0.25),float(-1),float(0.08),float(0.14)),(float(0.25),float(1),float(0.08),float(0.14)),(float(0),float(0),float(1),float(0)),(float(-0.25),float(1),float(0.08),float(-0.14)),(float(-0.25),float(1),float(0.08),float(0.14))]),
OrientationInterpolator(DEF="Run_r_shoulder_RotationInterpolator_Run", key=[float(0),float(0.2545),float(0.4909),float(0.7091),float(1)], keyValue=[(float(-0.99),float(-0.136),float(-0.25),float(0.85)),(float(0.99),float(0.081),float(-0.38),float(0.4)),(float(0.99),float(0.074),float(-0.25),float(1.5)),(float(0.99),float(0.081),float(-0.38),float(0.4)),(float(-0.99),float(-0.136),float(-0.25),float(0.85))]),
OrientationInterpolator(DEF="Run_r_elbow_RotationInterpolator_Run", key=[float(0),float(0.2545),float(0.4909),float(0.7091),float(1)], keyValue=[(float(-1),float(0),float(0),float(0.975)),(float(-0.99),float(0.09),float(0.02),float(1.55)),(float(-1),float(0),float(0),float(1.85)),(float(-0.99),float(0.19),float(-0.18),float(1.35)),(float(-1),float(0),float(0),float(0.975))]),
OrientationInterpolator(DEF="Run_r_wrist_RotationInterpolator_Run", key=[float(0),float(1)], keyValue=[(float(-0.917742),float(-0.237244),float(-0.318536),float(0.214273)),(float(-0.917742),float(-0.237244),float(-0.318536),float(0.214273))]),
OrientationInterpolator(DEF="Run_lower_body_RotationInterpolator_Run", key=[float(0),float(0.2182),float(0.4909),float(0.7455),float(1)], keyValue=[(float(0),float(-1),float(0),float(0.125)),(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(0.125)),(float(0),float(0),float(1),float(0)),(float(0),float(-1),float(0),float(0.125))]),
OrientationInterpolator(DEF="Run_head_RotationInterpolator_Run", key=[float(0),float(0.2545),float(0.4909),float(0.7091),float(1)], keyValue=[(float(1),float(0),float(0),float(0.08)),(float(1),float(0),float(0),float(0.12)),(float(1),float(0),float(0),float(0.3)),(float(1),float(0),float(0),float(0.3)),(float(1),float(0),float(0),float(0.08))]),
OrientationInterpolator(DEF="Run_neck_RotationInterpolator_Run", key=[float(0),float(0.2545),float(0.4909),float(0.7091),float(1)], keyValue=[(float(0.7),float(0),float(0),float(0.4)),(float(-0.7),float(-0.7),float(0),float(0.4)),(float(0),float(0),float(0),float(0.4)),(float(-0.7),float(0.7),float(0),float(0.4)),(float(0.7),float(0),float(0),float(0.4))]),
OrientationInterpolator(DEF="Run_upper_body_RotationInterpolator_Run", key=[float(0),float(0.2545),float(0.4909),float(0.7636),float(1)], keyValue=[(float(0.97),float(0.65),float(0.086),float(0.5)),(float(0.9),float(0.003),float(-0.02),float(0.38)),(float(0.95),float(-0.68),float(-0.086),float(0.5)),(float(0.9),float(0.004),float(-0.025),float(0.4)),(float(0.97),float(0.65),float(0.086),float(0.5))]),
OrientationInterpolator(DEF="Run_whole_body_RotationInterpolator_Run", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(1),float(0),float(0),float(0.06)),(float(1),float(0),float(0),float(0.167)),(float(1),float(0),float(0),float(0.06)),(float(1),float(0),float(0),float(0.168)),(float(1),float(0),float(0),float(0.06))]),
PositionInterpolator(DEF="Run_whole_body_TranslationInterpolator_Run", key=[float(0),float(0.22),float(0.3),float(0.31),float(0.5),float(0.69),float(0.7),float(0.78),float(1)], keyValue=[(0,-0.01,0),(0,-0.037,0),(0,-0.049,0),(0,-0.037,0),(0,-0.01,0),(0,-0.037,0),(0,-0.049,0),(0,-0.037,0),(0,-0.01,0)]),
OrientationInterpolator(DEF="Run_l_sternoclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Run_l_acromioclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Run_r_sternoclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Run_r_acromioclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Run_sacroiliac_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Run_vl5_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Run_vc6_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Run_l_thumb1_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.25)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.27)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Run_r_thumb1_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.25)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.27)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_r_ankle_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_r_knee_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_r_hip_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_l_ankle_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_l_knee_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_l_hip_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_lower_body_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_r_wrist_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_r_elbow_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_r_shoulder_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_l_wrist_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_l_elbow_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_l_shoulder_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_head_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_neck_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_upper_body_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_whole_body_RotationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_whole_body_TranslationInterpolator_Run"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_l_sternoclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_l_acromioclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_r_sternoclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_r_acromioclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_r_metatarsal_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_sacroiliac_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_vl5_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_vc6_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_l_thumb1_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="RunTimer", toField="set_fraction", toNode="Run_r_thumb1_PitchInterpolator"),
ROUTE(fromField="value_changed", fromNode="Run_r_ankle_RotationInterpolator_Run", toField="rotation", toNode="hanim_r_ankle"),
ROUTE(fromField="value_changed", fromNode="Run_r_knee_RotationInterpolator_Run", toField="rotation", toNode="hanim_r_knee"),
ROUTE(fromField="value_changed", fromNode="Run_r_hip_RotationInterpolator_Run", toField="rotation", toNode="hanim_r_hip"),
ROUTE(fromField="value_changed", fromNode="Run_l_ankle_RotationInterpolator_Run", toField="rotation", toNode="hanim_l_ankle"),
ROUTE(fromField="value_changed", fromNode="Run_l_knee_RotationInterpolator_Run", toField="rotation", toNode="hanim_l_knee"),
ROUTE(fromField="value_changed", fromNode="Run_l_hip_RotationInterpolator_Run", toField="rotation", toNode="hanim_l_hip"),
ROUTE(fromField="value_changed", fromNode="Run_r_wrist_RotationInterpolator_Run", toField="rotation", toNode="hanim_r_wrist"),
ROUTE(fromField="value_changed", fromNode="Run_r_elbow_RotationInterpolator_Run", toField="rotation", toNode="hanim_r_elbow"),
ROUTE(fromField="value_changed", fromNode="Run_r_shoulder_RotationInterpolator_Run", toField="rotation", toNode="hanim_r_shoulder"),
ROUTE(fromField="value_changed", fromNode="Run_l_wrist_RotationInterpolator_Run", toField="rotation", toNode="hanim_l_wrist"),
ROUTE(fromField="value_changed", fromNode="Run_l_elbow_RotationInterpolator_Run", toField="rotation", toNode="hanim_l_elbow"),
ROUTE(fromField="value_changed", fromNode="Run_l_shoulder_RotationInterpolator_Run", toField="rotation", toNode="hanim_l_shoulder"),
ROUTE(fromField="value_changed", fromNode="Run_lower_body_RotationInterpolator_Run", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Run_head_RotationInterpolator_Run", toField="rotation", toNode="hanim_skullbase"),
ROUTE(fromField="value_changed", fromNode="Run_neck_RotationInterpolator_Run", toField="rotation", toNode="hanim_vc4"),
ROUTE(fromField="value_changed", fromNode="Run_upper_body_RotationInterpolator_Run", toField="rotation", toNode="hanim_vl1"),
ROUTE(fromField="value_changed", fromNode="Run_whole_body_RotationInterpolator_Run", toField="rotation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Run_whole_body_TranslationInterpolator_Run", toField="translation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Run_l_sternoclavicular_RollInterpolator", toField="rotation", toNode="hanim_l_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Run_l_acromioclavicular_RollInterpolator", toField="rotation", toNode="hanim_l_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Run_r_sternoclavicular_RollInterpolator", toField="rotation", toNode="hanim_r_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Run_r_acromioclavicular_RollInterpolator", toField="rotation", toNode="hanim_r_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Run_r_metatarsal_PitchInterpolator", toField="rotation", toNode="hanim_l_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Run_r_metatarsal_PitchInterpolator", toField="rotation", toNode="hanim_r_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Run_sacroiliac_YawInterpolator", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Run_vl5_YawInterpolator", toField="rotation", toNode="hanim_vl5"),
ROUTE(fromField="value_changed", fromNode="Run_vc6_YawInterpolator", toField="rotation", toNode="hanim_vc6"),
ROUTE(fromField="value_changed", fromNode="Run_l_thumb1_PitchInterpolator", toField="rotation", toNode="hanim_l_thumb1"),
ROUTE(fromField="value_changed", fromNode="Run_r_thumb1_PitchInterpolator", toField="rotation", toNode="hanim_r_thumb1")]),
Group(DEF="JumpAnimation", children=[
TimeSensor(DEF="JumpTimer", cycleInterval=3.73, loop=True),
OrientationInterpolator(DEF="Jump_r_metatarsal_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_r_ankle_RotationInterpolator", key=[float(0),float(0.1),float(0.15),float(0.25),float(0.28),float(0.32),float(0.35),float(0.64),float(0.76),float(0.84),float(0.88),float(0.92),float(0.96),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.6735)),(float(-1),float(0),float(0),float(0.6735)),(float(-1),float(0),float(0),float(0.3527)),(float(-1),float(0),float(0),float(0.3038)),(float(-1),float(0),float(0),float(0.07964)),(float(1),float(0),float(0),float(1.3)),(float(1),float(0),float(0),float(0.6509)),(float(1),float(0),float(0),float(0.3001)),(float(-1),float(0),float(0),float(0.2087)),(float(-1),float(0),float(0),float(0.3756)),(float(-1),float(0),float(0),float(0.3279)),(float(-1),float(0),float(0),float(0.1193)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_r_knee_RotationInterpolator", key=[float(0),float(0.2),float(0.25),float(0.3),float(0.64),float(0.76),float(0.88),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(2.5)),(float(1),float(0),float(0),float(1.7)),(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(0.9507)),(float(1),float(0),float(0),float(0.5845)),(float(1),float(0),float(0),float(0.9054)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_r_hip_RotationInterpolator", key=[float(0),float(0.18),float(0.24),float(0.26),float(0.28),float(0.32),float(0.48),float(0.64),float(0.76),float(0.88),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(1.63)),(float(-1),float(0),float(0),float(1.7)),(float(-1),float(0),float(0),float(1.55)),(float(-1),float(0),float(0),float(0.8943)),(float(-1),float(0),float(0),float(0.3698)),(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.4963)),(float(-1),float(0),float(0),float(0.3829)),(float(-1),float(0),float(0),float(0.5169)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_l_ankle_RotationInterpolator", key=[float(0),float(0.28),float(0.32),float(0.36),float(0.4),float(0.44),float(0.48),float(0.64),float(0.76),float(0.84),float(0.88),float(0.92),float(0.96),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.625)),(float(-1),float(0),float(0),float(0.625)),(float(-1),float(0),float(0),float(0.3364)),(float(-1),float(0),float(0),float(0.2742)),(float(-1),float(0),float(0),float(0.05078)),(float(1),float(0),float(0),float(0.2833)),(float(1),float(0),float(0),float(0.6667)),(float(1),float(0),float(0),float(0.2833)),(float(-1),float(0),float(0),float(0.2108)),(float(-1),float(0),float(0),float(0.375)),(float(-1),float(0),float(0),float(0.3146)),(float(-1),float(0),float(0),float(0.1174)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_l_knee_RotationInterpolator", key=[float(0),float(0.28),float(0.32),float(0.48),float(0.64),float(0.76),float(0.88),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(2.047)),(float(1),float(0),float(0),float(2.047)),(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.566)),(float(1),float(0),float(0),float(0.5913)),(float(1),float(0),float(0),float(0.9235)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_l_hip_RotationInterpolator", key=[float(0),float(0.28),float(0.32),float(0.36),float(0.4),float(0.44),float(0.48),float(0.64),float(0.76),float(0.88),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(4.349)),(float(1),float(0),float(0),float(4.349)),(float(1),float(0),float(0),float(4.615)),(float(-1),float(0),float(0),float(0.9136)),(float(-1),float(0),float(0),float(0.3614)),(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.7869)),(float(-1),float(0),float(0),float(0.3918)),(float(-1),float(0),float(0),float(0.5433)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_lower_body_RotationInterpolator", key=[float(0),float(0.28),float(0.32),float(0.48),float(0.76),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(0.1892)),(float(1),float(0),float(0),float(0.1892)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_r_wrist_RotationInterpolator", key=[float(0),float(0.28),float(0.32),float(0.64),float(0.76),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-0.0585279),float(0.983903),float(-0.168849),float(1.85956)),(float(-0.0585279),float(0.983903),float(-0.168849),float(1.85956)),(float(-0.00222418),float(0.99801),float(-0.0630095),float(1.46072)),(float(0),float(1),float(0),float(0.497349)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_r_elbow_RotationInterpolator", key=[float(0),float(0.28),float(0.32),float(0.64),float(0.76),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.04151)),(float(-1),float(0),float(0),float(0.04151)),(float(-1),float(0),float(0),float(0.5855)),(float(-1),float(0),float(0),float(0.5852)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_r_shoulder_RotationInterpolator", key=[float(0),float(0.28),float(0.32),float(0.64),float(0.76),float(0.88),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0.9992),float(0.02042),float(0.03558),float(4.688)),(float(0.9992),float(0.02042),float(0.03558),float(4.688)),(float(0.9989),float(-0.04623),float(0.005159),float(4.079)),(float(-0.8687),float(-0.2525),float(-0.4261),float(1.501)),(float(-0.941),float(-0.2893),float(-0.1754),float(0.4788)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_l_wrist_RotationInterpolator", key=[float(0),float(0.48),float(0.52),float(0.64),float(0.76),float(0.88),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0.0672928),float(0.989475),float(-0.128107),float(4.15574)),(float(0.0672928),float(0.989475),float(-0.128107),float(4.15574)),(float(0.00364942),float(0.999901),float(0.0135896),float(4.5822)),(float(0),float(-1),float(0),float(0.655922)),(float(-0.00050618),float(-0.999999),float(0.0012782),float(1.28397)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_l_elbow_RotationInterpolator", key=[float(0),float(0.28),float(0.32),float(0.58),float(0.72),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(1.13)),(float(-1),float(0),float(0),float(1.7)),(float(-1),float(0),float(0),float(1.7)),(float(-1),float(0),float(0),float(0.4)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_l_shoulder_RotationInterpolator", key=[float(0),float(0.28),float(0.32),float(0.64),float(0.76),float(0.88),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-0.9987),float(0.02554),float(0.04498),float(1.57)),(float(-0.9987),float(0.02554),float(0.04498),float(1.57)),(float(1),float(0.0004113),float(0.003055),float(4.114)),(float(-0.8413),float(0.3238),float(0.4329),float(1.453)),(float(-0.877),float(0.4198),float(0.2337),float(0.6009)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_head_RotationInterpolator", key=[float(0),float(0.28),float(0.32),float(0.48),float(0.76),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.5989)),(float(-1),float(0),float(0),float(0.5989)),(float(-1),float(0),float(0),float(0.3216)),(float(1),float(0),float(0),float(0.06503)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_neck_RotationInterpolator", key=[float(0),float(0.28),float(0.32),float(0.48),float(0.76),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.1942)),(float(-1),float(0),float(0),float(0.1942)),(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(0.2284)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_upper_body_RotationInterpolator", key=[float(0),float(0.22),float(0.28),float(0.34),float(0.71),float(0.88),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.05)),(float(1),float(0),float(0),float(1.051)),(float(-1),float(0),float(0),float(0.257)),(float(1),float(0),float(0),float(0.2171)),(float(1),float(0),float(0),float(0.3465)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_whole_body_RotationInterpolator", key=[float(0),float(0.28),float(0.32),float(0.48),float(0.64),float(0.76),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(0.3273)),(float(1),float(0),float(0),float(0.3273)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
PositionInterpolator(DEF="Jump_whole_body_TranslationInterpolator", key=[float(0),float(0.04),float(0.07),float(0.11),float(0.15),float(0.19),float(0.22),float(0.25),float(0.27),float(0.31),float(0.33),float(0.35),float(0.38),float(0.53),float(0.544),float(0.76),float(0.8),float(0.84),float(0.88),float(0.92),float(0.96),float(1)], keyValue=[(0,0,0),(0,-0.01264,-0.01289),(0,-0.04712,-0.03738),(-0.0003345,-0.1049,-0.05353),(-0.0005712,-0.1892,-0.06561),(-0.0008233,-0.286,-0.06276),(-0.0009591,-0.3795,-0.05148),(-0.00106,-0.4484,-0.03656),(-0.00106,-0.4484,-0.03656),(-0.001122,-0.25,-0.1499),(-0.0008616,-0.05,-0.06358),(-0.0005128,0.15,-0.05488),(0.0004779,0.55,0.02732),(0.0001728,1.385,0.006873),(0.00017,1.395,0.0069),(0,0.35,0.02148),(0,-0.01299,-0.01057),(0,-0.06932,-0.01064),(0.0001365,-0.1037,-0.005059),(0.0001279,-0.07198,-0.007596),(0.000141,-0.01626,-0.004935),(0,0,0)]),
OrientationInterpolator(DEF="Jump_l_sternoclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0.22)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_l_acromioclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.05)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_r_sternoclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(-0.2)),(float(0),float(0),float(1),float(-0.22)),(float(0),float(0),float(1),float(-0.2)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_r_acromioclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(-0.05)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_sacroiliac_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(-1),float(0),float(0.1)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(-1),float(0.24)),(float(0),float(-1),float(0),float(0.4)),(float(0),float(1),float(0),float(0))]),
OrientationInterpolator(DEF="Jump_vl5_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(-0.1)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0)),(float(1),float(0),float(0),float(0.6)),(float(0),float(1),float(0),float(0.1)),(float(0),float(1),float(0),float(0))]),
OrientationInterpolator(DEF="Jump_vc6_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0.8)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0)),(float(-1),float(0),float(0),float(0.6)),(float(0),float(-1),float(0),float(0.8)),(float(0),float(1),float(0),float(0))]),
OrientationInterpolator(DEF="Jump_l_thumb1_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(1.1)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Jump_r_thumb1_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(1.1)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_r_ankle_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_r_knee_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_r_hip_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_l_ankle_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_l_knee_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_l_hip_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_lower_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_r_wrist_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_r_elbow_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_r_shoulder_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_l_wrist_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_l_elbow_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_l_shoulder_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_head_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_neck_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_upper_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_whole_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_whole_body_TranslationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_l_sternoclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_l_acromioclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_r_sternoclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_r_acromioclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_r_metatarsal_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_sacroiliac_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_vl5_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_vc6_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_l_thumb1_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="JumpTimer", toField="set_fraction", toNode="Jump_r_thumb1_PitchInterpolator"),
ROUTE(fromField="value_changed", fromNode="Jump_r_ankle_RotationInterpolator", toField="rotation", toNode="hanim_r_ankle"),
ROUTE(fromField="value_changed", fromNode="Jump_r_knee_RotationInterpolator", toField="rotation", toNode="hanim_r_knee"),
ROUTE(fromField="value_changed", fromNode="Jump_r_hip_RotationInterpolator", toField="rotation", toNode="hanim_r_hip"),
ROUTE(fromField="value_changed", fromNode="Jump_l_ankle_RotationInterpolator", toField="rotation", toNode="hanim_l_ankle"),
ROUTE(fromField="value_changed", fromNode="Jump_l_knee_RotationInterpolator", toField="rotation", toNode="hanim_l_knee"),
ROUTE(fromField="value_changed", fromNode="Jump_l_hip_RotationInterpolator", toField="rotation", toNode="hanim_l_hip"),
ROUTE(fromField="value_changed", fromNode="Jump_lower_body_RotationInterpolator", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Jump_r_wrist_RotationInterpolator", toField="rotation", toNode="hanim_r_wrist"),
ROUTE(fromField="value_changed", fromNode="Jump_r_elbow_RotationInterpolator", toField="rotation", toNode="hanim_r_elbow"),
ROUTE(fromField="value_changed", fromNode="Jump_r_shoulder_RotationInterpolator", toField="rotation", toNode="hanim_r_shoulder"),
ROUTE(fromField="value_changed", fromNode="Jump_l_wrist_RotationInterpolator", toField="rotation", toNode="hanim_l_wrist"),
ROUTE(fromField="value_changed", fromNode="Jump_l_elbow_RotationInterpolator", toField="rotation", toNode="hanim_l_elbow"),
ROUTE(fromField="value_changed", fromNode="Jump_l_shoulder_RotationInterpolator", toField="rotation", toNode="hanim_l_shoulder"),
ROUTE(fromField="value_changed", fromNode="Jump_head_RotationInterpolator", toField="rotation", toNode="hanim_skullbase"),
ROUTE(fromField="value_changed", fromNode="Jump_neck_RotationInterpolator", toField="rotation", toNode="hanim_vc4"),
ROUTE(fromField="value_changed", fromNode="Jump_upper_body_RotationInterpolator", toField="rotation", toNode="hanim_vl1"),
ROUTE(fromField="value_changed", fromNode="Jump_whole_body_RotationInterpolator", toField="rotation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Jump_whole_body_TranslationInterpolator", toField="translation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Jump_l_sternoclavicular_RollInterpolator", toField="rotation", toNode="hanim_l_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Jump_l_acromioclavicular_RollInterpolator", toField="rotation", toNode="hanim_l_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Jump_r_sternoclavicular_RollInterpolator", toField="rotation", toNode="hanim_r_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Jump_r_acromioclavicular_RollInterpolator", toField="rotation", toNode="hanim_r_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Jump_r_metatarsal_PitchInterpolator", toField="rotation", toNode="hanim_l_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Jump_r_metatarsal_PitchInterpolator", toField="rotation", toNode="hanim_r_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Jump_sacroiliac_YawInterpolator", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Jump_vl5_YawInterpolator", toField="rotation", toNode="hanim_vl5"),
ROUTE(fromField="value_changed", fromNode="Jump_vc6_YawInterpolator", toField="rotation", toNode="hanim_vc6"),
ROUTE(fromField="value_changed", fromNode="Jump_l_thumb1_PitchInterpolator", toField="rotation", toNode="hanim_l_thumb1"),
ROUTE(fromField="value_changed", fromNode="Jump_r_thumb1_PitchInterpolator", toField="rotation", toNode="hanim_r_thumb1")]),
Group(DEF="KickAnimation", children=[
TimeSensor(DEF="KickTimer", cycleInterval=3.73, loop=True),
OrientationInterpolator(DEF="Kick_l_sternoclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0.22)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_l_acromioclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.05)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_l_shoulder_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.76)),(float(-0.25),float(0),float(1),float(1.76)),(float(0),float(0),float(1),float(1.256)),(float(0),float(0),float(1),float(0.05)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_l_ForeArm_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(-0.55)),(float(-1),float(0.25),float(0),float(2.55)),(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_l_wrist_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(0.55)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_l_thumb1_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(1.1)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_r_sternoclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(-0.2)),(float(0),float(0),float(1),float(-0.22)),(float(0),float(0),float(1),float(-0.2)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_r_acromioclavicular_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(-0.05)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_r_shoulder_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(-1.76)),(float(0.25),float(0),float(1),float(-1.76)),(float(0),float(0),float(1),float(-1.256)),(float(0),float(0),float(1),float(-0.05)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_r_ForeArm_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(-0.55)),(float(1),float(0.25),float(0),float(-2.55)),(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_r_wrist_RollInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(-0.55)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_r_thumb1_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(1.1)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_r_hip_PitchInterpolator", key=[float(0),float(0.2),float(0.3),float(0.5),float(0.6),float(0.9),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.9)),(float(-1),float(0),float(0),float(1.75)),(float(-1),float(0),float(0),float(2.25)),(float(-1),float(0),float(0),float(2)),(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_r_knee_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.95)),(float(1),float(0),float(0),float(1.75)),(float(-1),float(0),float(0),float(0.28)),(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_l_hip_PitchInterpolator", key=[float(0),float(0.2),float(0.3),float(0.5),float(0.6),float(0.9),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_l_knee_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_r_ankle_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.9)),(float(-1),float(0),float(0),float(0.95)),(float(1),float(0),float(0),float(0.75)),(float(-1),float(0),float(0),float(0.05)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_r_metatarsal_PitchInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(-1),float(0),float(0),float(0.5)),(float(-1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.75)),(float(-1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_sacroiliac_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(-1),float(0),float(0.1)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(-1),float(0.24)),(float(0),float(-1),float(0),float(0.4)),(float(0),float(1),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_vl5_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_vc6_YawInterpolator", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_lower_body_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_upper_body_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_whole_body_RotationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
PositionInterpolator(DEF="Kick_whole_body_TranslationInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(0,0,0),(0,0,0),(0,0,0)]),
OrientationInterpolator(DEF="Kick_neck_RotationInterpolator", key=[float(0),float(0.25),float(0.55),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.5)),(float(0),float(0),float(1),float(0))]),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_l_sternoclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_l_acromioclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_l_shoulder_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_l_ForeArm_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_l_wrist_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_l_thumb1_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_r_sternoclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_r_acromioclavicular_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_r_shoulder_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_r_ForeArm_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_r_wrist_RollInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_r_thumb1_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_r_hip_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_r_knee_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_l_hip_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_l_knee_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_r_ankle_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_r_metatarsal_PitchInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_sacroiliac_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_vl5_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_vc6_YawInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_lower_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_upper_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_whole_body_RotationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_whole_body_TranslationInterpolator"),
ROUTE(fromField="fraction_changed", fromNode="KickTimer", toField="set_fraction", toNode="Kick_neck_RotationInterpolator"),
ROUTE(fromField="value_changed", fromNode="Kick_l_sternoclavicular_RollInterpolator", toField="rotation", toNode="hanim_l_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Kick_l_acromioclavicular_RollInterpolator", toField="rotation", toNode="hanim_l_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Kick_l_shoulder_RollInterpolator", toField="rotation", toNode="hanim_l_shoulder"),
ROUTE(fromField="value_changed", fromNode="Kick_l_ForeArm_PitchInterpolator", toField="rotation", toNode="hanim_l_elbow"),
ROUTE(fromField="value_changed", fromNode="Kick_l_wrist_RollInterpolator", toField="rotation", toNode="hanim_l_wrist"),
ROUTE(fromField="value_changed", fromNode="Kick_l_thumb1_PitchInterpolator", toField="rotation", toNode="hanim_l_thumb1"),
ROUTE(fromField="value_changed", fromNode="Kick_r_sternoclavicular_RollInterpolator", toField="rotation", toNode="hanim_r_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="Kick_r_acromioclavicular_RollInterpolator", toField="rotation", toNode="hanim_r_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="Kick_r_shoulder_RollInterpolator", toField="rotation", toNode="hanim_r_shoulder"),
ROUTE(fromField="value_changed", fromNode="Kick_r_ForeArm_PitchInterpolator", toField="rotation", toNode="hanim_r_elbow"),
ROUTE(fromField="value_changed", fromNode="Kick_r_wrist_RollInterpolator", toField="rotation", toNode="hanim_r_wrist"),
ROUTE(fromField="value_changed", fromNode="Kick_r_thumb1_PitchInterpolator", toField="rotation", toNode="hanim_r_thumb1"),
ROUTE(fromField="value_changed", fromNode="Kick_r_hip_PitchInterpolator", toField="rotation", toNode="hanim_r_hip"),
ROUTE(fromField="value_changed", fromNode="Kick_r_knee_PitchInterpolator", toField="rotation", toNode="hanim_r_knee"),
ROUTE(fromField="value_changed", fromNode="Kick_r_ankle_PitchInterpolator", toField="rotation", toNode="hanim_r_ankle"),
ROUTE(fromField="value_changed", fromNode="Kick_r_metatarsal_PitchInterpolator", toField="rotation", toNode="hanim_r_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Kick_l_hip_PitchInterpolator", toField="rotation", toNode="hanim_l_hip"),
ROUTE(fromField="value_changed", fromNode="Kick_l_knee_PitchInterpolator", toField="rotation", toNode="hanim_l_knee"),
ROUTE(fromField="value_changed", fromNode="Kick_r_ankle_PitchInterpolator", toField="rotation", toNode="hanim_l_ankle"),
ROUTE(fromField="value_changed", fromNode="Kick_r_metatarsal_PitchInterpolator", toField="rotation", toNode="hanim_l_metatarsal"),
ROUTE(fromField="value_changed", fromNode="Kick_sacroiliac_YawInterpolator", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Kick_vl5_YawInterpolator", toField="rotation", toNode="hanim_vl5"),
ROUTE(fromField="value_changed", fromNode="Kick_vc6_YawInterpolator", toField="rotation", toNode="hanim_vc6"),
ROUTE(fromField="value_changed", fromNode="Kick_upper_body_RotationInterpolator", toField="rotation", toNode="hanim_vl1"),
ROUTE(fromField="value_changed", fromNode="Kick_lower_body_RotationInterpolator", toField="rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="Kick_whole_body_RotationInterpolator", toField="rotation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Kick_whole_body_TranslationInterpolator", toField="translation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="Kick_neck_RotationInterpolator", toField="rotation", toNode="hanim_vc4")]),
Group(DEF="UserInterface", children=[
#Authoring hint: these axes are aligned within local coordinate system

Transform(DEF="CoordinateAxesAdjustedScale", scale=((0.175,0.175,0.175)), children=[
Inline(DEF="CoordinateAxes", url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"])]),
Transform(DEF="cordsys", scale=((0.175,0.175,0.175)), children=[
#<Inline bboxCenter='0.05143541 0.07883984 0.04731131' bboxSize='2.202872 2.25768 2.194624' url='"JointCoordinateAxes.x3dv"'/>
]),
ProximitySensor(DEF="HudProximitySensor", center=((0,20,0)), size=((500,100,500))),
Transform(DEF="Stage", scale=((1,0.0125,1)), translation=((0,-0.0125,0)), children=[
Shape(
appearance=
Appearance(
material=
Material(transparency=0.6)), 
geometry=
Box()),
Transform(DEF="Circle0", scale=((1.175,1,1.175)), children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.9,0,0.7)), emissiveColor=((0.424956,0.483976,1)))), 
geometry=
IndexedLineSet(DEF="Orbit1", coordIndex=[int(0),int(1),int(2),int(3),int(4),int(5),int(6),int(7),int(8),int(9),int(10),int(11),int(12),int(13),int(14),int(15),int(16),int(17),int(18),int(19),int(20),int(21),int(22),int(23),int(24),int(25),int(26),int(27),int(28),int(29),int(30),int(31),int(32),int(33),int(34),int(35),int(36),int(37),int(38),int(39),int(40),int(41),int(42),int(43),int(44),int(45),int(46),int(47),int(48),int(49),int(50),int(51),int(52),int(53),int(54),int(55),int(56),int(57),int(58),int(59),int(60),int(-1)], 
coord=
Coordinate(point=[(1,0,0),(0.995,0,-0.105),(0.979,0,-0.208),(0.951,0,-0.309),(0.914,0,-0.407),(0.866,0,-0.5),(0.809,0,-0.588),(0.743,0,-0.669),(0.669,0,-0.743),(0.588,0,-0.809),(0.5,0,-0.866),(0.407,0,-0.914),(0.309,0,-0.951),(0.208,0,-0.978),(0.105,0,-0.995),(0,0,-1),(-0.105,0,-0.994522),(-0.208,0,-0.978),(-0.309,0,-0.951),(-0.407,0,-0.914),(-0.5,0,-0.866),(-0.588,0,-0.809),(-0.669,0,-0.743),(-0.743,0,-0.669),(-0.809,0,-0.588),(-0.866,0,-0.5),(-0.914,0,-0.407),(-0.951,0,-0.309),(-0.978,0,-0.208),(-0.995,0,-0.105),(-1,0,0),(-0.995,0,0.105),(-0.978,0,0.208),(-0.951,0,0.309),(-0.914,0,0.407),(-0.866,0,0.5),(-0.809,0,0.588),(-0.743,0,0.669),(-0.669,0,0.743),(-0.588,0,0.809),(-0.5,0,0.866),(-0.407,0,0.914),(-0.309,0,0.951),(-0.208,0,0.978),(-0.105,0,0.995),(0,0,1),(0.105,0,0.995),(0.208,0,0.978),(0.309,0,0.951),(0.407,0,0.914),(0.5,0,0.866),(0.588,0,0.809),(0.669,0,0.743),(0.743,0,0.669),(0.809,0,0.588),(0.866,0,0.5),(0.914,0,0.407),(0.951,0,0.309),(0.978,0,0.208),(0.995,0,0.104),(1,0,0)])))]),
Transform(DEF="Circle1", scale=((0.5,1,0.5)), children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.9,0,0.7)), emissiveColor=((0.424956,0.483976,1)))), 
geometry=
IndexedLineSet(USE="Orbit1"))]),
Transform(DEF="Circle2", scale=((0.25,1,0.25)), children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.9,0,0.7)), emissiveColor=((0.424956,0.483976,1)))), 
geometry=
IndexedLineSet(USE="Orbit1"))])]),
Transform(DEF="HudXform", rotation=((-0.09996068,0.9942513,0.03837026,0.7131352)), translation=((1.705442,1.042139,1.989742)), children=[
Transform(scale=((0.035,0.035,0.035)), translation=((-0.42,-0.2,-0.75)), children=[
Transform(DEF="StandTransform", translation=((0,-1,0)), children=[
TouchSensor(DEF="Stand_Touch", description="touch to select"),
Shape(DEF="StandTextShape", 
appearance=
Appearance(
material=
Material(DEF="text_color", ambientIntensity=1, diffuseColor=((0.819,0.521,0.169)), emissiveColor=((0.819,0.521,0.169)), specularColor=((0.819,0.521,0.169)))), 
geometry=
Text(string=["Stand"])),
Shape(DEF="Stand_Back", 
appearance=
Appearance(
material=
Material(DEF="Clear", ambientIntensity=1, diffuseColor=((0,0.5,0)), emissiveColor=((0,0.5,0)), transparency=0.8)), 
geometry=
IndexedFaceSet(DEF="Backing", coordIndex=[int(0),int(1),int(2),int(3),int(-1)], 
coord=
Coordinate(point=[(-0.2,-1.2,-0.01),(2.5,-1.2,-0.01),(2.5,0.75,-0.01),(-0.2,0.75,-0.01)])))]),
Transform(DEF="PitchTransform", translation=((3,-1,0)), children=[
TouchSensor(DEF="Pitch_Touch", description="touch to select"),
Shape(DEF="PitchTextShape", 
appearance=
Appearance(
material=
Material(USE="text_color")), 
geometry=
Text(string=["Pitch"])),
Shape(DEF="Pitch_Back", 
appearance=
Appearance(
material=
Material(USE="Clear")), 
geometry=
IndexedFaceSet(USE="Backing"))]),
Transform(DEF="YawTransform", translation=((6,-1,0)), children=[
TouchSensor(DEF="Yaw_Touch", description="touch to select"),
Shape(DEF="YawText", 
appearance=
Appearance(
material=
Material(USE="text_color")), 
geometry=
Text(string=["Yaw"])),
Shape(DEF="Yaw_Back", 
appearance=
Appearance(
material=
Material(USE="Clear")), 
geometry=
IndexedFaceSet(USE="Backing"))]),
Transform(DEF="RollTransform", translation=((9,-1,0)), children=[
TouchSensor(DEF="Roll_Touch", description="touch to select"),
Shape(DEF="_RollInterpolator", 
appearance=
Appearance(
material=
Material(USE="text_color")), 
geometry=
Text(string=["Roll"])),
Shape(DEF="Roll_Back", 
appearance=
Appearance(
material=
Material(USE="Clear")), 
geometry=
IndexedFaceSet(USE="Backing"))]),
Transform(DEF="WalkTransform", translation=((12,-1,0)), children=[
TouchSensor(DEF="Walk_Touch", description="touch to select"),
Shape(DEF="WalkText", 
appearance=
Appearance(
material=
Material(USE="text_color")), 
geometry=
Text(string=["Walk"])),
Shape(DEF="Walk_Back", 
appearance=
Appearance(
material=
Material(USE="Clear")), 
geometry=
IndexedFaceSet(USE="Backing"))]),
Transform(DEF="RunTransform", translation=((15,-1,0)), children=[
TouchSensor(DEF="Run_Touch", description="touch to select"),
Shape(DEF="RunText", 
appearance=
Appearance(
material=
Material(USE="text_color")), 
geometry=
Text(string=["Run"])),
Shape(DEF="Run_Back", 
appearance=
Appearance(
material=
Material(USE="Clear")), 
geometry=
IndexedFaceSet(USE="Backing"))]),
Transform(DEF="JumpTransform", translation=((18,-1,0)), children=[
TouchSensor(DEF="Jump_Touch", description="touch to select"),
Shape(DEF="Jump", 
appearance=
Appearance(
material=
Material(USE="text_color")), 
geometry=
Text(string=["Jump"])),
Shape(DEF="Jump_Back", 
appearance=
Appearance(
material=
Material(USE="Clear")), 
geometry=
IndexedFaceSet(USE="Backing"))]),
Transform(DEF="KickTransform", translation=((21,-1,0)), children=[
TouchSensor(DEF="Kick_Touch", description="touch to select"),
Shape(DEF="KickText", 
appearance=
Appearance(
material=
Material(USE="text_color")), 
geometry=
Text(string=["Kick"])),
Shape(DEF="Kick_Back", 
appearance=
Appearance(
material=
Material(USE="Clear")), 
geometry=
IndexedFaceSet(USE="Backing"))]),
Transform(DEF="Stop_Text", translation=((0,1.4,0)), children=[
TouchSensor(DEF="Stop_Touch", description="touch to select"),
Shape(DEF="StopText", 
appearance=
Appearance(
material=
Material(USE="text_color")), 
geometry=
Text(string=["Stop","Default Pose"])),
Shape(DEF="Stop_Back", 
appearance=
Appearance(
material=
Material(USE="Clear")), 
geometry=
IndexedFaceSet(USE="Backing"))])])]),
ROUTE(fromField="position_changed", fromNode="HudProximitySensor", toField="translation", toNode="HudXform"),
ROUTE(fromField="orientation_changed", fromNode="HudProximitySensor", toField="rotation", toNode="HudXform"),]),
Group(DEF="BehaviorSynchronization", children=[
ROUTE(fromField="touchTime", fromNode="Stand_Touch", toField="stopTime", toNode="PitchTimer"),
ROUTE(fromField="touchTime", fromNode="Stand_Touch", toField="stopTime", toNode="YawTimer"),
ROUTE(fromField="touchTime", fromNode="Stand_Touch", toField="stopTime", toNode="RollTimer"),
ROUTE(fromField="touchTime", fromNode="Stand_Touch", toField="stopTime", toNode="WalkTimer"),
ROUTE(fromField="touchTime", fromNode="Stand_Touch", toField="stopTime", toNode="RunTimer"),
ROUTE(fromField="touchTime", fromNode="Stand_Touch", toField="stopTime", toNode="JumpTimer"),
ROUTE(fromField="touchTime", fromNode="Stand_Touch", toField="stopTime", toNode="KickTimer"),
ROUTE(fromField="touchTime", fromNode="Stand_Touch", toField="stopTime", toNode="StopTimer"),
ROUTE(fromField="touchTime", fromNode="Stand_Touch", toField="startTime", toNode="StandTimer"),
ROUTE(fromField="touchTime", fromNode="Pitch_Touch", toField="stopTime", toNode="StandTimer"),
ROUTE(fromField="touchTime", fromNode="Pitch_Touch", toField="stopTime", toNode="YawTimer"),
ROUTE(fromField="touchTime", fromNode="Pitch_Touch", toField="stopTime", toNode="RollTimer"),
ROUTE(fromField="touchTime", fromNode="Pitch_Touch", toField="stopTime", toNode="WalkTimer"),
ROUTE(fromField="touchTime", fromNode="Pitch_Touch", toField="stopTime", toNode="RunTimer"),
ROUTE(fromField="touchTime", fromNode="Pitch_Touch", toField="stopTime", toNode="JumpTimer"),
ROUTE(fromField="touchTime", fromNode="Pitch_Touch", toField="stopTime", toNode="KickTimer"),
ROUTE(fromField="touchTime", fromNode="Pitch_Touch", toField="stopTime", toNode="StopTimer"),
ROUTE(fromField="touchTime", fromNode="Pitch_Touch", toField="startTime", toNode="PitchTimer"),
ROUTE(fromField="touchTime", fromNode="Yaw_Touch", toField="stopTime", toNode="StandTimer"),
ROUTE(fromField="touchTime", fromNode="Yaw_Touch", toField="stopTime", toNode="PitchTimer"),
ROUTE(fromField="touchTime", fromNode="Yaw_Touch", toField="stopTime", toNode="RollTimer"),
ROUTE(fromField="touchTime", fromNode="Yaw_Touch", toField="stopTime", toNode="WalkTimer"),
ROUTE(fromField="touchTime", fromNode="Yaw_Touch", toField="stopTime", toNode="RunTimer"),
ROUTE(fromField="touchTime", fromNode="Yaw_Touch", toField="stopTime", toNode="JumpTimer"),
ROUTE(fromField="touchTime", fromNode="Yaw_Touch", toField="stopTime", toNode="KickTimer"),
ROUTE(fromField="touchTime", fromNode="Yaw_Touch", toField="stopTime", toNode="StopTimer"),
ROUTE(fromField="touchTime", fromNode="Yaw_Touch", toField="startTime", toNode="YawTimer"),
ROUTE(fromField="touchTime", fromNode="Walk_Touch", toField="stopTime", toNode="StandTimer"),
ROUTE(fromField="touchTime", fromNode="Walk_Touch", toField="stopTime", toNode="PitchTimer"),
ROUTE(fromField="touchTime", fromNode="Walk_Touch", toField="stopTime", toNode="YawTimer"),
ROUTE(fromField="touchTime", fromNode="Walk_Touch", toField="stopTime", toNode="RollTimer"),
ROUTE(fromField="touchTime", fromNode="Walk_Touch", toField="stopTime", toNode="RunTimer"),
ROUTE(fromField="touchTime", fromNode="Walk_Touch", toField="stopTime", toNode="JumpTimer"),
ROUTE(fromField="touchTime", fromNode="Walk_Touch", toField="stopTime", toNode="KickTimer"),
ROUTE(fromField="touchTime", fromNode="Walk_Touch", toField="stopTime", toNode="StopTimer"),
ROUTE(fromField="touchTime", fromNode="Walk_Touch", toField="startTime", toNode="WalkTimer"),
ROUTE(fromField="touchTime", fromNode="Roll_Touch", toField="stopTime", toNode="StandTimer"),
ROUTE(fromField="touchTime", fromNode="Roll_Touch", toField="stopTime", toNode="PitchTimer"),
ROUTE(fromField="touchTime", fromNode="Roll_Touch", toField="stopTime", toNode="YawTimer"),
ROUTE(fromField="touchTime", fromNode="Roll_Touch", toField="stopTime", toNode="WalkTimer"),
ROUTE(fromField="touchTime", fromNode="Roll_Touch", toField="stopTime", toNode="RunTimer"),
ROUTE(fromField="touchTime", fromNode="Roll_Touch", toField="stopTime", toNode="JumpTimer"),
ROUTE(fromField="touchTime", fromNode="Roll_Touch", toField="stopTime", toNode="KickTimer"),
ROUTE(fromField="touchTime", fromNode="Roll_Touch", toField="stopTime", toNode="StopTimer"),
ROUTE(fromField="touchTime", fromNode="Roll_Touch", toField="startTime", toNode="RollTimer"),
ROUTE(fromField="touchTime", fromNode="Run_Touch", toField="stopTime", toNode="StandTimer"),
ROUTE(fromField="touchTime", fromNode="Run_Touch", toField="stopTime", toNode="PitchTimer"),
ROUTE(fromField="touchTime", fromNode="Run_Touch", toField="stopTime", toNode="YawTimer"),
ROUTE(fromField="touchTime", fromNode="Run_Touch", toField="stopTime", toNode="RollTimer"),
ROUTE(fromField="touchTime", fromNode="Run_Touch", toField="stopTime", toNode="WalkTimer"),
ROUTE(fromField="touchTime", fromNode="Run_Touch", toField="stopTime", toNode="JumpTimer"),
ROUTE(fromField="touchTime", fromNode="Run_Touch", toField="stopTime", toNode="KickTimer"),
ROUTE(fromField="touchTime", fromNode="Run_Touch", toField="stopTime", toNode="StopTimer"),
ROUTE(fromField="touchTime", fromNode="Run_Touch", toField="startTime", toNode="RunTimer"),
ROUTE(fromField="touchTime", fromNode="Jump_Touch", toField="stopTime", toNode="StandTimer"),
ROUTE(fromField="touchTime", fromNode="Jump_Touch", toField="stopTime", toNode="PitchTimer"),
ROUTE(fromField="touchTime", fromNode="Jump_Touch", toField="stopTime", toNode="YawTimer"),
ROUTE(fromField="touchTime", fromNode="Jump_Touch", toField="stopTime", toNode="RollTimer"),
ROUTE(fromField="touchTime", fromNode="Jump_Touch", toField="stopTime", toNode="WalkTimer"),
ROUTE(fromField="touchTime", fromNode="Jump_Touch", toField="stopTime", toNode="RunTimer"),
ROUTE(fromField="touchTime", fromNode="Jump_Touch", toField="stopTime", toNode="KickTimer"),
ROUTE(fromField="touchTime", fromNode="Jump_Touch", toField="stopTime", toNode="StopTimer"),
ROUTE(fromField="touchTime", fromNode="Jump_Touch", toField="startTime", toNode="JumpTimer"),
ROUTE(fromField="touchTime", fromNode="Kick_Touch", toField="stopTime", toNode="StandTimer"),
ROUTE(fromField="touchTime", fromNode="Kick_Touch", toField="stopTime", toNode="PitchTimer"),
ROUTE(fromField="touchTime", fromNode="Kick_Touch", toField="stopTime", toNode="YawTimer"),
ROUTE(fromField="touchTime", fromNode="Kick_Touch", toField="stopTime", toNode="RollTimer"),
ROUTE(fromField="touchTime", fromNode="Kick_Touch", toField="stopTime", toNode="WalkTimer"),
ROUTE(fromField="touchTime", fromNode="Kick_Touch", toField="stopTime", toNode="RunTimer"),
ROUTE(fromField="touchTime", fromNode="Kick_Touch", toField="stopTime", toNode="JumpTimer"),
ROUTE(fromField="touchTime", fromNode="Kick_Touch", toField="stopTime", toNode="StopTimer"),
ROUTE(fromField="touchTime", fromNode="Kick_Touch", toField="startTime", toNode="KickTimer"),
ROUTE(fromField="touchTime", fromNode="Stop_Touch", toField="stopTime", toNode="StandTimer"),
ROUTE(fromField="touchTime", fromNode="Stop_Touch", toField="stopTime", toNode="PitchTimer"),
ROUTE(fromField="touchTime", fromNode="Stop_Touch", toField="stopTime", toNode="YawTimer"),
ROUTE(fromField="touchTime", fromNode="Stop_Touch", toField="stopTime", toNode="RollTimer"),
ROUTE(fromField="touchTime", fromNode="Stop_Touch", toField="stopTime", toNode="WalkTimer"),
ROUTE(fromField="touchTime", fromNode="Stop_Touch", toField="stopTime", toNode="RunTimer"),
ROUTE(fromField="touchTime", fromNode="Stop_Touch", toField="stopTime", toNode="JumpTimer"),
ROUTE(fromField="touchTime", fromNode="Stop_Touch", toField="stopTime", toNode="KickTimer"),
ROUTE(fromField="touchTime", fromNode="Stop_Touch", toField="startTime", toNode="StopTimer")]),]))
.XML())
