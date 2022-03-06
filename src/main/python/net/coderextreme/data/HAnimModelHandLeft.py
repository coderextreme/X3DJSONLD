#x3d.py package 4.0.60 loaded, have fun with X3D Graphics!
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="4.0", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="HAnimModelHandLeft.x3d"),
HAnimHumanoid(name="Hand_Left", DEF="hanim_Hand_Left", loa=4, version="2.0", 
metadata=(
MetadataSet(name="HAnimHumanoid.info", reference="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid", value=[
MetadataString(name="authorName", value=["Kwan-Hee YOO, Don Brutzman and Joe Williams"])])), skeleton=[
HAnimJoint(name="humanoid_root", DEF="hanim_humanoid_root", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
#Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model

HAnimJoint(name="l_radiocarpal", DEF="hanim_l_radiocarpal", description="connection joint of hand to leg above", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal", DEF="hanim_l_carpal", children=[
Transform(children=[
Shape(DEF="HAnimJointShape", 
geometry=
Sphere(radius=0.025), 
appearance=
Appearance(DEF="HAnimJointAppearanceBlue", 
material=
Material(diffuseColor=((0,0,1)))))]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="RCToMC12", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0,0,0),(0.1,0.1,0)]))),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="RCToMC3", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0,0,0),(0.0,0.07,0)]))),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="RCToMC45", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0,0,0),(-0.1,0.1,0)])))]),
#MC1

HAnimJoint(name="l_midcarpal_1", DEF="hanim_l_midcarpal_1", center=((0.14,0.09,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_trapezium", DEF="hanim_l_trapezium", children=[
Transform(translation=((0.14,0.09,0)), children=[
Shape(DEF="HAnimNewJointShape", 
geometry=
Sphere(radius=0.025), 
appearance=
Appearance(DEF="HAnimJointAppearanceRed", 
material=
Material(diffuseColor=((1,0,0)))))]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="MC12toCMC1", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.1,0.1,0),(0.2,0.15,0)]))),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="MC1toCMC1", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.1,0.1,0),(0.1,0.2,0)])))]),
#thumb finger

HAnimJoint(name="l_carpometacarpal_1", DEF="hanim_l_carpometacarpal_1", center=((0.2,0.15,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metacarpal_1", DEF="hanim_l_metacarpal_1", children=[
Transform(translation=((0.2,0.15,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="CMC1toMCP1", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.2,0.15,0),(0.3,0.3,0)])))]),
HAnimJoint(name="l_metacarpophalangeal_1", DEF="hanim_l_metacarpophalangeal_1", center=((0.3,0.3,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_proximal_phalanx_1", DEF="hanim_l_carpal_proximal_phalanx_1", children=[
Transform(translation=((0.3,0.3,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="MCP11toIP1", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.3,0.3,0),(0.35,0.4,0)])))]),
HAnimJoint(name="l_carpal_interphalangeal_1", DEF="hanim_l_carpal_interphalangeal_1", center=((0.35,0.4,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_distal_phalanx_1", DEF="hanim_l_carpal_distal_phalanx_1", children=[
Transform(translation=((0.35,0.4,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="fingertip_l_carpal_interphalangeal_1", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.35,0.4,0),(0.36,0.45,0)])))])])])]),]),
#MC2

HAnimJoint(name="l_midcarpal_2", DEF="hanim_l_midcarpal_2", center=((0.07,0.07,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_trapezoid", DEF="hanim_l_trapezoid", children=[
Transform(translation=((0.07,0.07,0)), children=[
Shape(USE="HAnimNewJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="MC2toCMC2", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(-0.1,0.1,0),(-0.1,0.2,0)])))]),
#index finger

HAnimJoint(name="l_carpometacarpal_2", DEF="hanim_l_carpometacarpal_2", center=((0.1,0.2,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metacarpal_2", DEF="hanim_l_metacarpal_2", children=[
Transform(translation=((0.1,0.2,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="CMC2toMCP2", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.1,0.2,0),(0.15,0.5,0)])))]),
HAnimJoint(name="l_metacarpophalangeal_2", DEF="hanim_l_metacarpophalangeal_2", center=((0.15,0.5,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_proximal_phalanx_2", DEF="hanim_l_carpal_proximal_phalanx_2", children=[
Transform(translation=((0.15,0.5,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="MCP2toPIP2", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.15,0.5,0),(0.2,0.7,0)])))]),
HAnimJoint(name="l_carpal_proximal_interphalangeal_2", DEF="hanim_l_carpal_proximal_interphalangeal_2", center=((0.2,0.7,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_middle_phalanx_2", DEF="hanim_l_carpal_middle_phalanx_2", children=[
Transform(translation=((0.2,0.7,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="PIP2toDIP2", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.2,0.7,0),(0.24,0.87,0)])))]),
HAnimJoint(name="l_carpal_distal_interphalangeal_2", DEF="hanim_l_carpal_distal_interphalangeal_2", center=((0.24,0.87,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_distal_phalanx_2", DEF="hanim_l_carpal_distal_phalanx_2", children=[
Transform(translation=((0.24,0.87,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="fingertip_l_carpal_distal_interphalangeal_2", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.24,0.87,0),(0.26,0.93,0)])))])])])])]),]),
#MC3

HAnimJoint(name="l_midcarpal_3", DEF="hanim_l_midcarpal_3", center=((0.0,0.07,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_capitate", DEF="hanim_l_capitate", children=[
Transform(translation=((0.0,0.07,0)), children=[
Shape(USE="HAnimNewJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="MC3toCMC3", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.0,0.07,0),(0.0,0.2,0)])))]),
#Middle fingle

HAnimJoint(name="l_carpometacarpal_3", DEF="hanim_l_carpometacarpal_3", center=((0.0,0.2,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metacarpal_3", DEF="hanim_l_metacarpal_3", children=[
Transform(translation=((0.0,0.2,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="CMC3toMCP3", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.0,0.2,0),(0.03,0.5,0)])))]),
HAnimJoint(name="l_metacarpophalangeal_3", DEF="hanim_l_metacarpophalangeal_3", center=((0.03,0.5,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_proximal_phalanx_3", DEF="hanim_l_carpal_proximal_phalanx_3", children=[
Transform(translation=((0.03,0.5,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="MCP3toPIP3", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.03,0.5,0),(0.05,0.75,0)])))]),
HAnimJoint(name="l_carpal_proximal_interphalangeal_3", DEF="hanim_l_carpal_proximal_interphalangeal_3", center=((0.05,0.75,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_middle_phalanx_3", DEF="hanim_l_carpal_middle_phalanx_3", children=[
Transform(translation=((0.05,0.75,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="PIP3toDIP3", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.05,0.75,0),(0.08,0.96,0)])))]),
HAnimJoint(name="l_carpal_distal_interphalangeal_3", DEF="hanim_l_carpal_distal_interphalangeal_3", center=((0.08,0.96,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_distal_phalanx_3", DEF="hanim_l_carpal_distal_phalanx_3", children=[
Transform(translation=((0.08,0.96,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="fingertip_l_carpal_distal_interphalangeal_3", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(0.08,0.96,0),(0.09,1.05,0)])))])])])])]),]),
#MC45

HAnimJoint(name="l_midcarpal_4_5", DEF="hanim_l_midcarpal_4_5", center=((-0.1,0.1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_hamate", DEF="hanim_l_hamate", children=[
Transform(translation=((-0.1,0.1,0)), children=[
Shape(USE="HAnimNewJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="MC45toCMC4", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(-0.1,0.1,0),(-0.1,0.2,0)]))),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="MC45toCMC5", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(-0.1,0.1,0),(-0.15,0.17,0)])))]),
#ring finger

HAnimJoint(name="l_carpometacarpal_4", DEF="hanim_l_carpometacarpal_4", center=((-0.1,0.2,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metacarpal_4", DEF="hanim_l_metacarpal_4", children=[
Transform(translation=((-0.1,0.2,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="CMC4toMCP4", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(-0.1,0.2,0),(-0.1,0.47,0)])))]),
HAnimJoint(name="l_metacarpophalangeal_4", DEF="hanim_l_metacarpophalangeal_4", center=((-0.1,0.47,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_proximal_phalanx_4", DEF="hanim_l_carpal_proximal_phalanx_4", children=[
Transform(translation=((-0.1,0.47,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="MCP4toPIP4", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(-0.1,0.47,0),(-0.1,0.7,0)])))]),
HAnimJoint(name="l_carpal_proximal_interphalangeal_4", DEF="hanim_l_carpal_proximal_interphalangeal_4", center=((-0.1,0.7,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_middle_phalanx_4", DEF="hanim_l_carpal_middle_phalanx_4", children=[
Transform(translation=((-0.1,0.7,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="PIP4toDIP4", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(-0.1,0.7,0),(-0.1,0.93,0)])))]),
HAnimJoint(name="l_carpal_distal_interphalangeal_4", DEF="hanim_l_carpal_distal_interphalangeal_4", center=((-0.1,0.93,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_distal_phalanx_4", DEF="hanim_l_carpal_distal_phalanx_4", children=[
Transform(translation=((-0.1,0.93,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="fingertip_l_carpal_distal_interphalangeal_4", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(-0.1,0.93,0),(-0.1,1.0,0)])))])])])])]),
#pinky finger

HAnimJoint(name="l_carpometacarpal_5", DEF="hanim_l_carpometacarpal_5", center=((-0.15,0.17,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_metacarpal_5", DEF="hanim_l_metacarpal_5", children=[
Transform(translation=((-0.15,0.17,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="CMC5toMCP5", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(-0.15,0.17,0),(-0.2,0.4,0)])))]),
HAnimJoint(name="l_metacarpophalangeal_5", DEF="hanim_l_metacarpophalangeal_5", center=((-0.2,0.4,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_proximal_phalanx_5", DEF="hanim_l_carpal_proximal_phalanx_5", children=[
Transform(translation=((-0.2,0.4,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="MCP5toPIP5", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(-0.2,0.4,0),(-0.23,0.63,0)])))]),
HAnimJoint(name="l_carpal_proximal_interphalangeal_5", DEF="hanim_l_carpal_proximal_interphalangeal_5", center=((-0.23,0.63,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_middle_phalanx_5", DEF="hanim_l_carpal_middle_phalanx_5", children=[
Transform(translation=((-0.23,0.63,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="PIP5toDIP5", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(-0.23,0.63,0),(-0.25,0.79,0)])))]),
HAnimJoint(name="l_carpal_distal_interphalangeal_5", DEF="hanim_l_carpal_distal_interphalangeal_5", center=((-0.25,0.79,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_carpal_distal_phalanx_5", DEF="hanim_l_carpal_distal_phalanx_5", children=[
Transform(translation=((-0.25,0.79,0)), children=[
Shape(USE="HAnimJointShape")]),
Shape(
appearance=
Appearance(
material=
Material(emissiveColor=((1,1,1)))), 
geometry=
IndexedLineSet(DEF="fingertip_l_carpal_distal_interphalangeal_5", coordIndex=[int(0),int(1)], 
coord=
Coordinate(point=[(-0.25,0.79,0),(-0.26,0.85,0)])))])])])])]),]),]),])], joints=(
HAnimJoint(USE="hanim_humanoid_root"),
HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_2"),
HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_3"),
HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_4"),
HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_5"),
HAnimJoint(USE="hanim_l_carpal_interphalangeal_1"),
HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_2"),
HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_3"),
HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_4"),
HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_5"),
HAnimJoint(USE="hanim_l_carpometacarpal_1"),
HAnimJoint(USE="hanim_l_carpometacarpal_2"),
HAnimJoint(USE="hanim_l_carpometacarpal_3"),
HAnimJoint(USE="hanim_l_carpometacarpal_4"),
HAnimJoint(USE="hanim_l_carpometacarpal_5"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_1"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_2"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_3"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_4"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_5"),
HAnimJoint(USE="hanim_l_midcarpal_1"),
HAnimJoint(USE="hanim_l_midcarpal_2"),
HAnimJoint(USE="hanim_l_midcarpal_3"),
HAnimJoint(USE="hanim_l_midcarpal_4_5"),
HAnimJoint(USE="hanim_l_radiocarpal")), segments=[
HAnimSegment(USE="hanim_l_capitate"),
HAnimSegment(USE="hanim_l_carpal"),
HAnimSegment(USE="hanim_l_carpal_distal_phalanx_1"),
HAnimSegment(USE="hanim_l_carpal_distal_phalanx_2"),
HAnimSegment(USE="hanim_l_carpal_distal_phalanx_3"),
HAnimSegment(USE="hanim_l_carpal_distal_phalanx_4"),
HAnimSegment(USE="hanim_l_carpal_distal_phalanx_5"),
HAnimSegment(USE="hanim_l_carpal_middle_phalanx_2"),
HAnimSegment(USE="hanim_l_carpal_middle_phalanx_3"),
HAnimSegment(USE="hanim_l_carpal_middle_phalanx_4"),
HAnimSegment(USE="hanim_l_carpal_middle_phalanx_5"),
HAnimSegment(USE="hanim_l_carpal_proximal_phalanx_1"),
HAnimSegment(USE="hanim_l_carpal_proximal_phalanx_2"),
HAnimSegment(USE="hanim_l_carpal_proximal_phalanx_3"),
HAnimSegment(USE="hanim_l_carpal_proximal_phalanx_4"),
HAnimSegment(USE="hanim_l_carpal_proximal_phalanx_5"),
HAnimSegment(USE="hanim_l_hamate"),
HAnimSegment(USE="hanim_l_metacarpal_1"),
HAnimSegment(USE="hanim_l_metacarpal_2"),
HAnimSegment(USE="hanim_l_metacarpal_3"),
HAnimSegment(USE="hanim_l_metacarpal_4"),
HAnimSegment(USE="hanim_l_metacarpal_5"),
HAnimSegment(USE="hanim_l_trapezium"),
HAnimSegment(USE="hanim_l_trapezoid")])]))
.XML())
