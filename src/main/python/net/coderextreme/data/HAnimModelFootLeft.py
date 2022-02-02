#x3d.py package loaded, have fun with X3D Graphics!
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="4.0", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="HAnimModelFootLeft.x3d"),
HAnimHumanoid(name="Foot_Left", DEF="hanim_Foot_Left", loa=4, version="2.0", 
metadata=(
MetadataSet(name="HAnimHumanoid.info", reference="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid", value=[
MetadataString(name="authorName", value=["Kwan-Hee YOO, Don Brutzman and Joe Williams"])])), skeleton=(
HAnimJoint(name="humanoid_root", DEF="hanim_humanoid_root", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
#Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model

HAnimJoint(name="l_talocrural", DEF="hanim_l_talocrural", description="connection joint of foot to leg above", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_talus", DEF="hanim_l_talus", children=[
Transform(children=[
Shape(DEF="HAnimJointShape", 
geometry=
Sphere(radius=0.025), 
appearance=
Appearance(DEF="HAnimJointAppearance", 
material=
Material(diffuseColor=((0,0,1)))))]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="TCtoTCN", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0,0,0),(0.0,-0.3,0)]))),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="TCtoCC", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0,0,0),(0.2,0.3,0)])))]),
#TCN

HAnimJoint(name="l_talocalcaneonavicular", DEF="hanim_l_talocalcaneonavicular", center=((0.0,-0.3,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_navicular", DEF="hanim_l_navicular", children=[
Transform(translation=((0.0,-0.3,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="TCNtoCN1", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.0,-0.3,0),(-0.1,-0.45,0)]))),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="TCNtoCN2", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.0,-0.3,0),(0.0,-0.45,0)]))),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="TCNtoCN3", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.0,-0.3,0),(0.1,-0.4,0)])))]),
#CN1

HAnimJoint(name="l_cuneonavicular_1", DEF="hanim_l_cuneonavicular_1", center=((-0.1,-0.45,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_cuneiform_1", DEF="hanim_l_cuneiform_1", children=[
Transform(translation=((-0.1,-0.45,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="CN1toTMT1", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(-0.1,-0.45,0),(-0.1,-0.6,0)])))]),
HAnimJoint(name="l_tarsometatarsal_1", DEF="hanim_l_tarsometatarsal_1", center=((-0.1,-0.6,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metatarsal_1", DEF="hanim_l_metatarsal_1", children=[
Transform(translation=((-0.1,-0.6,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="TMT1toMTP1", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(-0.1,-0.6,0),(-0.1,-0.9,0)])))]),
HAnimJoint(name="l_metatarsophalangeal_1", DEF="hanim_l_metatarsophalangeal_1", center=((-0.1,-0.9,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_proximal_phalanx_1", DEF="hanim_l_tarsal_proximal_phalanx_1", children=[
Transform(translation=((-0.1,-0.9,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="MTP1toIP1", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(-0.1,-0.9,0),(-0.1,-1.05,0)])))]),
HAnimJoint(name="l_tarsal_interphalangeal_1", DEF="hanim_l_tarsal_interphalangeal_1", center=((-0.1,-1.05,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_distal_phalanx_1", DEF="hanim_l_tarsal_distal_phalanx_1", children=[
Transform(translation=((-0.1,-1.05,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="tiptoe_l_tarsal_distal_interphalangeal_1", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(-0.1,-1.05,0),(-0.1,-1.1,0)])))])])])])]),
#CN2

HAnimJoint(name="l_cuneonavicular_2", DEF="hanim_l_cuneonavicular_2", center=((0.0,-0.45,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_cuneiform_2", DEF="hanim_l_cuneiform_2", children=[
Transform(translation=((0.0,-0.45,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="CN2toTMT2", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.0,-0.45,0),(0.05,-0.6,0)])))]),
HAnimJoint(name="l_tarsometatarsal_2", DEF="hanim_l_tarsometatarsal_2", center=((0.05,-0.6,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metatarsal_2", DEF="hanim_l_metatarsal_2", children=[
Transform(translation=((0.05,-0.6,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="TMT2toMTP2", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.05,-0.6,0),(0.05,-0.9,0)])))]),
HAnimJoint(name="l_metatarsophalangeal_2", DEF="hanim_l_metatarsophalangeal_2", center=((0.05,-0.9,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_proximal_phalanx_2", DEF="hanim_l_tarsal_proximal_phalanx_2", children=[
Transform(translation=((0.05,-0.9,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="MTP2toPIP2", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.05,-0.9,0),(0.05,-1.05,0)])))]),
HAnimJoint(name="l_tarsal_proximal_interphalangeal_2", DEF="hanim_l_tarsal_proximal_interphalangeal_2", center=((0.05,-1.05,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_middle_phalanx_2", DEF="hanim_l_tarsal_middle_phalanx_2", children=[
Transform(translation=((0.05,-1.05,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="PIP2toDIP2", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.05,-1.05,0),(0.05,-1.12,0)])))]),
HAnimJoint(name="l_tarsal_distal_interphalangeal_2", DEF="hanim_l_tarsal_distal_interphalangeal_2", center=((0.05,-1.12,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_distal_phalanx_2", DEF="hanim_l_tarsal_distal_phalanx_2", children=[
Transform(translation=((0.05,-1.12,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="tiptoe_l_tarsal_distal_phalanx_2", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.05,-1.12,0),(0.05,-1.16,0)])))])])])])])]),
#CN3

HAnimJoint(name="l_cuneonavicular_3", DEF="hanim_l_cuneonavicular_3", center=((0.1,-0.4,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_cuneiform_3", DEF="hanim_l_cuneiform_3", children=[
Transform(translation=((0.1,-0.4,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="CN3toTMT3", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.1,-0.4,0),(0.15,-0.6,0)])))]),
HAnimJoint(name="l_tarsometatarsal_3", DEF="hanim_l_tarsometatarsal_3", center=((0.15,-0.6,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metatarsal_3", DEF="hanim_l_metatarsal_3", children=[
Transform(translation=((0.15,-0.6,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="TMT3toMTP3", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.15,-0.6,0),(0.15,-0.9,0)])))]),
HAnimJoint(name="l_metatarsophalangeal_3", DEF="hanim_l_metatarsophalangeal_3", center=((0.15,-0.9,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_proximal_phalanx_3", DEF="hanim_l_tarsal_proximal_phalanx_3", children=[
Transform(translation=((0.15,-0.9,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="MTP3toPIP3", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.15,-0.9,0),(0.15,-1.05,0)])))]),
HAnimJoint(name="l_tarsal_proximal_interphalangeal_3", DEF="hanim_l_tarsal_proximal_interphalangeal_3", center=((0.15,-1.05,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_middle_phalanx_3", DEF="hanim_l_tarsal_middle_phalanx_3", children=[
Transform(translation=((0.15,-1.05,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="PIP3toDIP3", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.15,-1.05,0),(0.15,-1.13,0)])))]),
HAnimJoint(name="l_tarsal_distal_interphalangeal_3", DEF="hanim_l_tarsal_distal_interphalangeal_3", center=((0.15,-1.13,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_distal_phalanx_3", DEF="hanim_l_tarsal_distal_phalanx_3", children=[
Transform(translation=((0.15,-1.13,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="tiptoe_l_tarsal_distal_interphalangeal_3", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.15,-1.13,0),(0.15,-1.16,0)])))])])])])])]),]),
#CC

HAnimJoint(name="l_calcaneocuboid", DEF="hanim_l_calcaneocuboid", center=((0.2,0.3,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_calcaneus", DEF="hanim_l_calcaneus", children=[
Transform(translation=((0.2,0.3,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="CCtoTT", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.2,0.3,0),(0.21,-0.3,0)])))]),
#TT

HAnimJoint(name="l_transversetarsal", DEF="hanim_l_transversetarsal", center=((0.21,-0.3,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_cuboid", DEF="hanim_l_cuboid", children=[
Transform(translation=((0.21,-0.3,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="TTtoTMT4", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.21,-0.3,0),(0.25,-0.58,0)]))),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="TTtoTMT5", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.21,-0.3,0),(0.33,-0.52,0)])))]),
#TMT4

HAnimJoint(name="l_tarsometatarsal_4", DEF="hanim_l_tarsometatarsal_4", center=((0.25,-0.58,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metatarsal_4", DEF="hanim_l_metatarsal_4", children=[
Transform(translation=((0.25,-0.58,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="TMT4toMTP4", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.25,-0.58,0),(0.25,-0.87,0)])))]),
HAnimJoint(name="l_metatarsophalangeal_4", DEF="hanim_l_metatarsophalangeal_4", center=((0.25,-0.87,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_proximal_phalanx_4", DEF="hanim_l_tarsal_proximal_phalanx_4", children=[
Transform(translation=((0.25,-0.87,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="MTP4toPIP4", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.25,-0.87,0),(0.25,-1.0,0)])))]),
HAnimJoint(name="l_tarsal_proximal_interphalangeal_4", DEF="hanim_l_tarsal_proximal_interphalangeal_4", center=((0.25,-1.0,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_middle_phalanx_4", DEF="hanim_l_tarsal_middle_phalanx_4", children=[
Transform(translation=((0.25,-1.0,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="PIP4toDIP4", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.25,-1.0,0),(0.25,-1.1,0)])))]),
HAnimJoint(name="l_tarsal_distal_interphalangeal_4", DEF="hanim_l_tarsal_distal_interphalangeal_4", center=((0.25,-1.1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_distal_phalanx_4", DEF="hanim_l_tarsal_distal_phalanx_4", children=[
Transform(translation=((0.25,-1.1,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="tiptoe_l_tarsal_distal_interphalangeal_4", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.25,-1.1,0),(0.25,-1.15,0)])))])])])])]),
#TMT5

HAnimJoint(name="l_tarsometatarsal_5", DEF="hanim_l_tarsometatarsal_5", center=((0.33,-0.52,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metatarsal_5", DEF="hanim_l_metatarsal_5", children=[
Transform(translation=((0.33,-0.52,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="TMT5toMTP5", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.33,-0.52,0),(0.34,-0.8,0)])))]),
HAnimJoint(name="l_metatarsophalangeal_5", DEF="hanim_l_metatarsophalangeal_5", center=((0.34,-0.8,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_proximal_phalanx_5", DEF="hanim_l_tarsal_proximal_phalanx_5", children=[
Transform(translation=((0.34,-0.8,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="MTP5toPIP5", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.34,-0.8,0),(0.34,-0.95,0)])))]),
HAnimJoint(name="l_tarsal_proximal_interphalangeal_5", DEF="hanim_l_tarsal_proximal_interphalangeal_5", center=((0.34,-0.95,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_middle_phalanx_5", DEF="hanim_l_tarsal_middle_phalanx_5", children=[
Transform(translation=((0.34,-0.95,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="PIP5toDIP5", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.34,-0.95,0),(0.34,-1.05,0)])))]),
HAnimJoint(name="l_tarsal_distal_interphalangeal_5", DEF="hanim_l_tarsal_distal_interphalangeal_5", center=((0.34,-1.05,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_tarsal_distal_phalanx_5", DEF="hanim_l_tarsal_distal_phalanx_5", children=[
Transform(translation=((0.34,-1.05,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="tiptoe_l_tarsal_distal_interphalangeal_5", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.34,-1.05,0),(0.34,-1.08,0)])))])])])])]),]),]),]),])), joints=(
HAnimJoint(USE="hanim_humanoid_root"),
HAnimJoint(USE="hanim_l_calcaneocuboid"),
HAnimJoint(USE="hanim_l_cuneonavicular_1"),
HAnimJoint(USE="hanim_l_cuneonavicular_2"),
HAnimJoint(USE="hanim_l_cuneonavicular_3"),
HAnimJoint(USE="hanim_l_metatarsophalangeal_1"),
HAnimJoint(USE="hanim_l_metatarsophalangeal_2"),
HAnimJoint(USE="hanim_l_metatarsophalangeal_3"),
HAnimJoint(USE="hanim_l_metatarsophalangeal_4"),
HAnimJoint(USE="hanim_l_metatarsophalangeal_5"),
HAnimJoint(USE="hanim_l_talocalcaneonavicular"),
HAnimJoint(USE="hanim_l_talocrural"),
HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_2"),
HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_3"),
HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_4"),
HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_5"),
HAnimJoint(USE="hanim_l_tarsal_interphalangeal_1"),
HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_2"),
HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_3"),
HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_4"),
HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_5"),
HAnimJoint(USE="hanim_l_tarsometatarsal_1"),
HAnimJoint(USE="hanim_l_tarsometatarsal_2"),
HAnimJoint(USE="hanim_l_tarsometatarsal_3"),
HAnimJoint(USE="hanim_l_tarsometatarsal_4"),
HAnimJoint(USE="hanim_l_tarsometatarsal_5"),
HAnimJoint(USE="hanim_l_transversetarsal")), segments=(
HAnimSegment(USE="hanim_l_calcaneus"),
HAnimSegment(USE="hanim_l_cuboid"),
HAnimSegment(USE="hanim_l_cuneiform_1"),
HAnimSegment(USE="hanim_l_cuneiform_2"),
HAnimSegment(USE="hanim_l_cuneiform_3"),
HAnimSegment(USE="hanim_l_metatarsal_1"),
HAnimSegment(USE="hanim_l_metatarsal_2"),
HAnimSegment(USE="hanim_l_metatarsal_3"),
HAnimSegment(USE="hanim_l_metatarsal_4"),
HAnimSegment(USE="hanim_l_metatarsal_5"),
HAnimSegment(USE="hanim_l_navicular"),
HAnimSegment(USE="hanim_l_talus"),
HAnimSegment(USE="hanim_l_tarsal_distal_phalanx_1"),
HAnimSegment(USE="hanim_l_tarsal_distal_phalanx_2"),
HAnimSegment(USE="hanim_l_tarsal_distal_phalanx_3"),
HAnimSegment(USE="hanim_l_tarsal_distal_phalanx_4"),
HAnimSegment(USE="hanim_l_tarsal_distal_phalanx_5"),
HAnimSegment(USE="hanim_l_tarsal_middle_phalanx_2"),
HAnimSegment(USE="hanim_l_tarsal_middle_phalanx_3"),
HAnimSegment(USE="hanim_l_tarsal_middle_phalanx_4"),
HAnimSegment(USE="hanim_l_tarsal_middle_phalanx_5"),
HAnimSegment(USE="hanim_l_tarsal_proximal_phalanx_1"),
HAnimSegment(USE="hanim_l_tarsal_proximal_phalanx_2"),
HAnimSegment(USE="hanim_l_tarsal_proximal_phalanx_3"),
HAnimSegment(USE="hanim_l_tarsal_proximal_phalanx_4"),
HAnimSegment(USE="hanim_l_tarsal_proximal_phalanx_5")))]))
.XML())
