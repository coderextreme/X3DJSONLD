# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="4.0", 
head=head(children=[component(name="HAnim", level=1),
meta(name="title", content="HAnimModelFootLeft.x3d"),
meta(name="description", content="Left foot, using high-fidelity definitions for HAnim version 2.0"),
meta(name="creator", content="Kwan-Hee YOO, Don Brutzman and Joe Williams"),
meta(name="created", content="26 January 2015"),
meta(name="modified", content="23 December 2021"),
meta(name="warning", content="not yet to scale"),
meta(name="warning", content="TODO will X3D HAnim component add a new level to support LOA-4 functionality?"),
meta(name="info", content="TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"),
meta(name="reference", content="https://www.web3d.org/working-groups/humanoid-animation-HAnim"),
meta(name="reference", content="https://www.web3d.org/documents/specifications/19774/V2.0"),
meta(name="reference", content="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet"),
meta(name="reference", content="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints"),
meta(name="reference", content="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"),
meta(name="reference", content="https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"),
meta(name="subject", content="X3D HAnim humanoid animation"),
meta(name="TODO", content="Integrate and confirm Segment/Joint names, Viewpoints."),
meta(name="identifier", content="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d"),
meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
meta(name="license", content="../license.html"),
meta(name="translated", content="24 March 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
WorldInfo(title="HAnimModelFootLeft.x3d"),
HAnimHumanoid(name="Foot_Left", DEF="hanim_Foot_Left", loa=4, version="2.0", 
metadata=(
MetadataSet(name="HAnimHumanoid.info", reference="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid", value=[
MetadataString(name="authorName", value=["Kwan-Hee YOO, Don Brutzman and Joe Williams"])])), skeleton=[
HAnimJoint(name="humanoid_root", DEF="hanim_humanoid_root", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Comment(value=''' Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model '''),

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
IndexedLineSet(DEF="TCtoTCN", coordIndex=[0,1], 
coord=
Coordinate(point=[(0,0,0),(0.0,-0.3,0)]))),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="TCtoCC", coordIndex=[0,1], 
coord=
Coordinate(point=[(0,0,0),(0.2,0.3,0)])))]),
Comment(value=''' TCN '''),

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
IndexedLineSet(DEF="TCNtoCN1", coordIndex=[0,1], 
coord=
Coordinate(point=[(0.0,-0.3,0),(-0.1,-0.45,0)]))),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="TCNtoCN2", coordIndex=[0,1], 
coord=
Coordinate(point=[(0.0,-0.3,0),(0.0,-0.45,0)]))),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="TCNtoCN3", coordIndex=[0,1], 
coord=
Coordinate(point=[(0.0,-0.3,0),(0.1,-0.4,0)])))]),
Comment(value=''' CN1 '''),

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
IndexedLineSet(DEF="CN1toTMT1", coordIndex=[0,1], 
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
IndexedLineSet(DEF="TMT1toMTP1", coordIndex=[0,1], 
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
IndexedLineSet(DEF="MTP1toIP1", coordIndex=[0,1], 
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
IndexedLineSet(DEF="tiptoe_l_tarsal_distal_interphalangeal_1", coordIndex=[0,1], 
coord=
Coordinate(point=[(-0.1,-1.05,0),(-0.1,-1.1,0)])))])])])])]),
Comment(value=''' CN2 '''),

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
IndexedLineSet(DEF="CN2toTMT2", coordIndex=[0,1], 
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
IndexedLineSet(DEF="TMT2toMTP2", coordIndex=[0,1], 
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
IndexedLineSet(DEF="MTP2toPIP2", coordIndex=[0,1], 
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
IndexedLineSet(DEF="PIP2toDIP2", coordIndex=[0,1], 
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
IndexedLineSet(DEF="tiptoe_l_tarsal_distal_phalanx_2", coordIndex=[0,1], 
coord=
Coordinate(point=[(0.05,-1.12,0),(0.05,-1.16,0)])))])])])])])]),
Comment(value=''' CN3 '''),

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
IndexedLineSet(DEF="CN3toTMT3", coordIndex=[0,1], 
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
IndexedLineSet(DEF="TMT3toMTP3", coordIndex=[0,1], 
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
IndexedLineSet(DEF="MTP3toPIP3", coordIndex=[0,1], 
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
IndexedLineSet(DEF="PIP3toDIP3", coordIndex=[0,1], 
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
IndexedLineSet(DEF="tiptoe_l_tarsal_distal_interphalangeal_3", coordIndex=[0,1], 
coord=
Coordinate(point=[(0.15,-1.13,0),(0.15,-1.16,0)])))])])])])])]),]),
Comment(value=''' CC '''),

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
IndexedLineSet(DEF="CCtoTT", coordIndex=[0,1], 
coord=
Coordinate(point=[(0.2,0.3,0),(0.21,-0.3,0)])))]),
Comment(value=''' TT '''),

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
IndexedLineSet(DEF="TTtoTMT4", coordIndex=[0,1], 
coord=
Coordinate(point=[(0.21,-0.3,0),(0.25,-0.58,0)]))),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="TTtoTMT5", coordIndex=[0,1], 
coord=
Coordinate(point=[(0.21,-0.3,0),(0.33,-0.52,0)])))]),
Comment(value=''' TMT4 '''),

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
IndexedLineSet(DEF="TMT4toMTP4", coordIndex=[0,1], 
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
IndexedLineSet(DEF="MTP4toPIP4", coordIndex=[0,1], 
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
IndexedLineSet(DEF="PIP4toDIP4", coordIndex=[0,1], 
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
IndexedLineSet(DEF="tiptoe_l_tarsal_distal_interphalangeal_4", coordIndex=[0,1], 
coord=
Coordinate(point=[(0.25,-1.1,0),(0.25,-1.15,0)])))])])])])]),
Comment(value=''' TMT5 '''),

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
IndexedLineSet(DEF="TMT5toMTP5", coordIndex=[0,1], 
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
IndexedLineSet(DEF="MTP5toPIP5", coordIndex=[0,1], 
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
IndexedLineSet(DEF="PIP5toDIP5", coordIndex=[0,1], 
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
IndexedLineSet(DEF="tiptoe_l_tarsal_distal_interphalangeal_5", coordIndex=[0,1], 
coord=
Coordinate(point=[(0.34,-1.05,0),(0.34,-1.08,0)])))])])])])]),]),]),]),])], joints=(
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
HAnimJoint(USE="hanim_l_transversetarsal")), segments=[
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
HAnimSegment(USE="hanim_l_tarsal_proximal_phalanx_5")])]))
.XML())
