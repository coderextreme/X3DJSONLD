'''
x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
'''
from x3d import *
print(
X3D(profile="Immersive", version="4.0", 
head=head(), 
Scene=Scene(children=[
Transform(children=[
#DEF for markerfor XYZ axes

Shape(DEF="AxisLinesShape", 
geometry=
IndexedLineSet(colorIndex=[0,1,2], colorPerVertex=False, coordIndex=[0,1,-1,0,2,-1,0,3,-1], 
coord=
Coordinate(point=[(0,0,0),(0.1,0,0),(0,0.1,0),(0,0,0.1)]), 
color=(
Color(color=[(1,0,0),(0,0.6,0),(0,0,1)])))),]),
Group(children=[
#DEFS for markers of skeleton joints, segments, and sites

Transform(children=[
#<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>

Transform(translation=((0,2.1,0)), children=[
Shape(DEF="HAnimJointShape", 
geometry=
Sphere(radius=0.02), 
appearance=
Appearance(
material=
Material(DEF="HAnimJointMaterial", diffuseColor=((0,0,0.8)), transparency=0.3)))]),
Transform(translation=((0,2.05,0)), children=[
Shape(DEF="HAnimSegmentLine", 
geometry=
LineSet(vertexCount=[2], 
color=(
ColorRGBA(DEF="HAnimSegmentLineColorRGBA", color=[(1,1,0,1),(1,1,0,0.1)])), 
coord=
Coordinate(point=[(-0.05,0,0),(0.05,0,0)])))]),
#<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
]),]),
NavigationInfo(speed=1.5),
Viewpoint(description="default"),
HAnimHumanoid(name="HAnim", DEF="hanim_HAnim", info=["humanoidVersion=2.0"], version="2.0", skeleton=[
HAnimJoint(name="humanoid_root", DEF="hanim_humanoid_root", center=((0.0,0.824,0.0277)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0,0.824,0.0277),(0.0,0.9149,0.0016)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="buttocks_standing_wall_contact_point_pt", DEF="hanim_buttocks_standing_wall_contact_point_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite buttocks_standing_wall_contact_point_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="crotch_pt", DEF="hanim_crotch_pt", translation=((0.0034,0.8266,0.0257)), children=[
TouchSensor(description="HAnimSite crotch_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_asis_pt", DEF="hanim_l_asis_pt", translation=((0.0925,0.9983,0.1052)), children=[
TouchSensor(description="HAnimSite l_asis_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_iliocristale_pt", DEF="hanim_l_iliocristale_pt", translation=((0.1612,1.0537,0.0008)), children=[
TouchSensor(description="HAnimSite l_iliocristale_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_psis_pt", DEF="hanim_l_psis_pt", translation=((0.0774,1.019,-0.1151)), children=[
TouchSensor(description="HAnimSite l_psis_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_trochanterion_pt", DEF="hanim_l_trochanterion_pt", translation=((0.1677,0.8336,0.0303)), children=[
TouchSensor(description="HAnimSite l_trochanterion_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_asis_pt", DEF="hanim_r_asis_pt", translation=((-0.0887,1.0021,0.1112)), children=[
TouchSensor(description="HAnimSite r_asis_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_iliocristale_pt", DEF="hanim_r_iliocristale_pt", translation=((-0.1525,1.0628,0.0035)), children=[
TouchSensor(description="HAnimSite r_iliocristale_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_psis_pt", DEF="hanim_r_psis_pt", translation=((-0.0716,1.019,-0.1138)), children=[
TouchSensor(description="HAnimSite r_psis_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_trochanterion_pt", DEF="hanim_r_trochanterion_pt", translation=((-0.1689,0.8419,0.0352)), children=[
TouchSensor(description="HAnimSite r_trochanterion_pt"),
Shape(USE="HAnimSiteShape")]),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0,0.824,0.0277),(0.0028,1.0568,-0.0776)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="navel_pt", DEF="hanim_navel_pt", translation=((0.0069,1.0966,0.1017)), children=[
TouchSensor(description="HAnimSite navel_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="waist_preferred_anterior_pt", DEF="hanim_waist_preferred_anterior_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite waist_preferred_anterior_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="waist_preferred_posterior_pt", DEF="hanim_waist_preferred_posterior_pt", translation=((0.29,1.0915,-0.1091)), children=[
TouchSensor(description="HAnimSite waist_preferred_posterior_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="sacroiliac", DEF="hanim_sacroiliac", center=((0.0,0.9149,0.0016)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0,0.9149,0.0016),(0.0961,0.9124,-0.0001)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_femoral_lateral_epicondyles_pt", DEF="hanim_l_femoral_lateral_epicondyles_pt", translation=((0.1598,0.4967,0.0297)), children=[
TouchSensor(description="HAnimSite l_femoral_lateral_epicondyles_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_femoral_medial_epicondyles_pt", DEF="hanim_l_femoral_medial_epicondyles_pt", translation=((0.0398,0.4946,0.0303)), children=[
TouchSensor(description="HAnimSite l_femoral_medial_epicondyles_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_knee_crease_pt", DEF="hanim_l_knee_crease_pt", translation=((0.0993,0.4881,-0.0309)), children=[
TouchSensor(description="HAnimSite l_knee_crease_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_suprapatella_pt", DEF="hanim_l_suprapatella_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_suprapatella_pt"),
Shape(USE="HAnimSiteShape")]),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0,0.9149,0.0016),(-0.095,0.9171,0.0029)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_femoral_lateral_epicondyles_pt", DEF="hanim_r_femoral_lateral_epicondyles_pt", translation=((-0.1421,0.4992,0.031)), children=[
TouchSensor(description="HAnimSite r_femoral_lateral_epicondyles_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_femoral_medial_epicondyles_pt", DEF="hanim_r_femoral_medial_epicondyles_pt", translation=((-0.0221,0.5014,0.0289)), children=[
TouchSensor(description="HAnimSite r_femoral_medial_epicondyles_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_knee_crease_pt", DEF="hanim_r_knee_crease_pt", translation=((-0.0825,0.4932,-0.0326)), children=[
TouchSensor(description="HAnimSite r_knee_crease_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_suprapatella_pt", DEF="hanim_r_suprapatella_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_suprapatella_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_hip", DEF="hanim_l_hip", center=((0.0961,0.9124,-0.0001)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0961,0.9124,-0.0001),(0.104,0.4867,0.0308)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_lateral_malleolus_pt", DEF="hanim_l_lateral_malleolus_pt", translation=((0.1308,0.0597,-0.1032)), children=[
TouchSensor(description="HAnimSite l_lateral_malleolus_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_medial_malleolus_pt", DEF="hanim_l_medial_malleolus_pt", translation=((0.089,0.0716,-0.0881)), children=[
TouchSensor(description="HAnimSite l_medial_malleolus_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_tibiale_pt", DEF="hanim_l_tibiale_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_tibiale_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_knee", DEF="hanim_l_knee", center=((0.104,0.4867,0.0308)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.104,0.4867,0.0308),(0.1101,0.0656,-0.0736)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_calcaneus_posterior_pt", DEF="hanim_l_calcaneus_posterior_pt", translation=((0.0974,0.0259,-0.1171)), children=[
TouchSensor(description="HAnimSite l_calcaneus_posterior_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_sphyrion_pt", DEF="hanim_l_sphyrion_pt", translation=((0.089,0.0575,-0.0943)), children=[
TouchSensor(description="HAnimSite l_sphyrion_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_talocrural", DEF="hanim_l_talocrural", center=((0.1101,0.0656,-0.0736)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1101,0.0656,-0.0736),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1101,0.0656,-0.0736),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_talocalcaneonavicular", DEF="hanim_l_talocalcaneonavicular", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_cuneonavicular_1", DEF="hanim_l_cuneonavicular_1", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_tarsometatarsal_1", DEF="hanim_l_tarsometatarsal_1", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_metatarsal_phalanx_1_pt", DEF="hanim_l_metatarsal_phalanx_1_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_metatarsal_phalanx_1_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_metatarsophalangeal_1", DEF="hanim_l_metatarsophalangeal_1", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_tarsal_distal_phalanx_1_tip", DEF="hanim_l_tarsal_distal_phalanx_1_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_tarsal_distal_phalanx_1_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_tarsal_interphalangeal_1", DEF="hanim_l_tarsal_interphalangeal_1", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])]),
HAnimJoint(name="l_cuneonavicular_2", DEF="hanim_l_cuneonavicular_2", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_tarsometatarsal_2", DEF="hanim_l_tarsometatarsal_2", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_metatarsophalangeal_2", DEF="hanim_l_metatarsophalangeal_2", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_tarsal_proximal_interphalangeal_2", DEF="hanim_l_tarsal_proximal_interphalangeal_2", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_tarsal_distal_phalanx_2_tip", DEF="hanim_l_tarsal_distal_phalanx_2_tip", translation=((0.1195,0.0079,0.1433)), children=[
TouchSensor(description="HAnimSite l_tarsal_distal_phalanx_2_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_tarsal_distal_interphalangeal_2", DEF="hanim_l_tarsal_distal_interphalangeal_2", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])])]),
HAnimJoint(name="l_cuneonavicular_3", DEF="hanim_l_cuneonavicular_3", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_tarsometatarsal_3", DEF="hanim_l_tarsometatarsal_3", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_metatarsophalangeal_3", DEF="hanim_l_metatarsophalangeal_3", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_tarsal_proximal_interphalangeal_3", DEF="hanim_l_tarsal_proximal_interphalangeal_3", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_tarsal_distal_phalanx_3_tip", DEF="hanim_l_tarsal_distal_phalanx_3_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_tarsal_distal_phalanx_3_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_tarsal_distal_interphalangeal_3", DEF="hanim_l_tarsal_distal_interphalangeal_3", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])])])]),
HAnimJoint(name="l_calcaneocuboid", DEF="hanim_l_calcaneocuboid", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_transversetarsal", DEF="hanim_l_transversetarsal", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_tarsometatarsal_4", DEF="hanim_l_tarsometatarsal_4", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_metatarsophalangeal_4", DEF="hanim_l_metatarsophalangeal_4", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_tarsal_proximal_interphalangeal_4", DEF="hanim_l_tarsal_proximal_interphalangeal_4", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_tarsal_distal_phalanx_4_tip", DEF="hanim_l_tarsal_distal_phalanx_4_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_tarsal_distal_phalanx_4_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_tarsal_distal_interphalangeal_4", DEF="hanim_l_tarsal_distal_interphalangeal_4", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])]),
HAnimJoint(name="l_tarsometatarsal_5", DEF="hanim_l_tarsometatarsal_5", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_metatarsal_phalanx_5_pt", DEF="hanim_l_metatarsal_phalanx_5_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_metatarsal_phalanx_5_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_metatarsophalangeal_5", DEF="hanim_l_metatarsophalangeal_5", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_tarsal_proximal_interphalangeal_5", DEF="hanim_l_tarsal_proximal_interphalangeal_5", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_tarsal_distal_phalanx_5_tip", DEF="hanim_l_tarsal_distal_phalanx_5_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_tarsal_distal_phalanx_5_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_tarsal_distal_interphalangeal_5", DEF="hanim_l_tarsal_distal_interphalangeal_5", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])])])])])])]),
HAnimJoint(name="r_hip", DEF="hanim_r_hip", center=((-0.095,0.9171,0.0029)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.095,0.9171,0.0029),(-0.0867,0.4913,0.0318)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_lateral_malleolus_pt", DEF="hanim_r_lateral_malleolus_pt", translation=((-0.1006,0.0658,-0.1075)), children=[
TouchSensor(description="HAnimSite r_lateral_malleolus_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_medial_malleolus_pt", DEF="hanim_r_medial_malleolus_pt", translation=((-0.0591,0.076,-0.0928)), children=[
TouchSensor(description="HAnimSite r_medial_malleolus_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_tibiale_pt", DEF="hanim_r_tibiale_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_tibiale_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_knee", DEF="hanim_r_knee", center=((-0.0867,0.4913,0.0318)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.0867,0.4913,0.0318),(-0.0801,0.0712,-0.0766)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_calcaneus_posterior_pt", DEF="hanim_r_calcaneus_posterior_pt", translation=((-0.0692,0.0297,-0.1221)), children=[
TouchSensor(description="HAnimSite r_calcaneus_posterior_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_sphyrion_pt", DEF="hanim_r_sphyrion_pt", translation=((-0.0603,0.061,-0.1002)), children=[
TouchSensor(description="HAnimSite r_sphyrion_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_talocrural", DEF="hanim_r_talocrural", center=((-0.0801,0.0712,-0.0766)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.0801,0.0712,-0.0766),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.0801,0.0712,-0.0766),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_talocalcaneonavicular", DEF="hanim_r_talocalcaneonavicular", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_cuneonavicular_1", DEF="hanim_r_cuneonavicular_1", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_tarsometatarsal_1", DEF="hanim_r_tarsometatarsal_1", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_metatarsal_phalanx_1_pt", DEF="hanim_r_metatarsal_phalanx_1_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_metatarsal_phalanx_1_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_metatarsophalangeal_1", DEF="hanim_r_metatarsophalangeal_1", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_tarsal_distal_phalanx_1_tip", DEF="hanim_r_tarsal_distal_phalanx_1_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_tarsal_distal_phalanx_1_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_tarsal_interphalangeal_1", DEF="hanim_r_tarsal_interphalangeal_1", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])]),
HAnimJoint(name="r_cuneonavicular_2", DEF="hanim_r_cuneonavicular_2", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_tarsometatarsal_2", DEF="hanim_r_tarsometatarsal_2", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_metatarsophalangeal_2", DEF="hanim_r_metatarsophalangeal_2", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_tarsal_proximal_interphalangeal_2", DEF="hanim_r_tarsal_proximal_interphalangeal_2", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_tarsal_distal_phalanx_2_tip", DEF="hanim_r_tarsal_distal_phalanx_2_tip", translation=((-0.0883,0.0134,0.1383)), children=[
TouchSensor(description="HAnimSite r_tarsal_distal_phalanx_2_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_tarsal_distal_interphalangeal_2", DEF="hanim_r_tarsal_distal_interphalangeal_2", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])])]),
HAnimJoint(name="r_cuneonavicular_3", DEF="hanim_r_cuneonavicular_3", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_tarsometatarsal_3", DEF="hanim_r_tarsometatarsal_3", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_metatarsophalangeal_3", DEF="hanim_r_metatarsophalangeal_3", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_tarsal_proximal_interphalangeal_3", DEF="hanim_r_tarsal_proximal_interphalangeal_3", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_tarsal_distal_phalanx_3_tip", DEF="hanim_r_tarsal_distal_phalanx_3_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_tarsal_distal_phalanx_3_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_tarsal_distal_interphalangeal_3", DEF="hanim_r_tarsal_distal_interphalangeal_3", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])])])]),
HAnimJoint(name="r_calcaneocuboid", DEF="hanim_r_calcaneocuboid", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_transversetarsal", DEF="hanim_r_transversetarsal", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_tarsometatarsal_4", DEF="hanim_r_tarsometatarsal_4", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_metatarsophalangeal_4", DEF="hanim_r_metatarsophalangeal_4", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_tarsal_proximal_interphalangeal_4", DEF="hanim_r_tarsal_proximal_interphalangeal_4", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_tarsal_distal_phalanx_4_tip", DEF="hanim_r_tarsal_distal_phalanx_4_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_tarsal_distal_phalanx_4_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_tarsal_distal_interphalangeal_4", DEF="hanim_r_tarsal_distal_interphalangeal_4", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])]),
HAnimJoint(name="r_tarsometatarsal_5", DEF="hanim_r_tarsometatarsal_5", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_metatarsal_phalanx_5_pt", DEF="hanim_r_metatarsal_phalanx_5_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_metatarsal_phalanx_5_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_metatarsophalangeal_5", DEF="hanim_r_metatarsophalangeal_5", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_tarsal_proximal_interphalangeal_5", DEF="hanim_r_tarsal_proximal_interphalangeal_5", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_tarsal_distal_phalanx_5_tip", DEF="hanim_r_tarsal_distal_phalanx_5_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_tarsal_distal_phalanx_5_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_tarsal_distal_interphalangeal_5", DEF="hanim_r_tarsal_distal_interphalangeal_5", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])])])])])])])]),
HAnimJoint(name="vl5", DEF="hanim_vl5", center=((0.0028,1.0568,-0.0776)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0028,1.0568,-0.0776),(0.0035,1.0925,-0.0787)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="vl4", DEF="hanim_vl4", center=((0.0035,1.0925,-0.0787)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0035,1.0925,-0.0787),(0.0041,1.1276,-0.0796)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="vl3", DEF="hanim_vl3", center=((0.0041,1.1276,-0.0796)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0041,1.1276,-0.0796),(0.0045,1.1546,-0.08)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_rib10_pt", DEF="hanim_l_rib10_pt", translation=((0.0871,1.1925,0.0992)), children=[
TouchSensor(description="HAnimSite l_rib10_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_rib10_pt", DEF="hanim_r_rib10_pt", translation=((-0.0711,1.1941,0.1016)), children=[
TouchSensor(description="HAnimSite r_rib10_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="spine_2_middle_back_pt", DEF="hanim_spine_2_middle_back_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite spine_2_middle_back_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="vl2", DEF="hanim_vl2", center=((0.0045,1.1546,-0.08)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0045,1.1546,-0.08),(0.0048,1.1912,-0.0805)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="vl1", DEF="hanim_vl1", center=((0.0048,1.1912,-0.0805)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0048,1.1912,-0.0805),(0.0051,1.2278,-0.0808)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="vt12", DEF="hanim_vt12", center=((0.0051,1.2278,-0.0808)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0051,1.2278,-0.0808),(0.0053,1.2679,-0.081)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="vt11", DEF="hanim_vt11", center=((0.0053,1.2679,-0.081)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0053,1.2679,-0.081),(0.0056,1.2848,-0.0822)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="substernale_pt", DEF="hanim_substernale_pt", translation=((0.0085,1.2995,0.1147)), children=[
TouchSensor(description="HAnimSite substernale_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="vt10", DEF="hanim_vt10", center=((0.0056,1.2848,-0.0822)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0056,1.2848,-0.0822),(0.0057,1.3126,-0.0838)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_thelion_pt", DEF="hanim_l_thelion_pt", translation=((0.0918,1.3382,0.1192)), children=[
TouchSensor(description="HAnimSite l_thelion_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_thelion_pt", DEF="hanim_r_thelion_pt", translation=((-0.0736,1.3385,0.1217)), children=[
TouchSensor(description="HAnimSite r_thelion_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="vt9", DEF="hanim_vt9", center=((0.0057,1.3126,-0.0838)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0057,1.3126,-0.0838),(0.0057,1.3382,-0.0845)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="vt8", DEF="hanim_vt8", center=((0.0057,1.3382,-0.0845)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0057,1.3382,-0.0845),(0.0058,1.3625,-0.0833)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="vt7", DEF="hanim_vt7", center=((0.0058,1.3625,-0.0833)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0058,1.3625,-0.0833),(0.0059,1.3866,-0.08)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_chest_midsagittal_plane_pt", DEF="hanim_l_chest_midsagittal_plane_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_chest_midsagittal_plane_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="mesosternale_pt", DEF="hanim_mesosternale_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite mesosternale_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_chest_midsagittal_plane_pt", DEF="hanim_r_chest_midsagittal_plane_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_chest_midsagittal_plane_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="rear_center_midsagittal_plane_pt", DEF="hanim_rear_center_midsagittal_plane_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite rear_center_midsagittal_plane_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="vt6", DEF="hanim_vt6", center=((0.0059,1.3866,-0.08)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0059,1.3866,-0.08),(0.006,1.4102,-0.0745)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="spine_1_middle_back_pt", DEF="hanim_spine_1_middle_back_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite spine_1_middle_back_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="vt5", DEF="hanim_vt5", center=((0.006,1.4102,-0.0745)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.006,1.4102,-0.0745),(0.0061,1.432,-0.0675)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="vt4", DEF="hanim_vt4", center=((0.0061,1.432,-0.0675)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0061,1.432,-0.0675),(0.0062,1.4583,-0.057)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="vt3", DEF="hanim_vt3", center=((0.0062,1.4583,-0.057)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0062,1.4583,-0.057),(0.0063,1.4761,-0.0484)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="vt2", DEF="hanim_vt2", center=((0.0063,1.4761,-0.0484)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0063,1.4761,-0.0484),(0.0065,1.4951,-0.0387)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="cervicale_pt", DEF="hanim_cervicale_pt", translation=((0.0064,1.52,-0.0815)), children=[
TouchSensor(description="HAnimSite cervicale_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="suprasternale_pt", DEF="hanim_suprasternale_pt", translation=((0.0084,1.4714,0.0551)), children=[
TouchSensor(description="HAnimSite suprasternale_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="vt1", DEF="hanim_vt1", center=((0.0065,1.4951,-0.0387)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0065,1.4951,-0.0387),(0.0066,1.5132,-0.0301)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_neck_base_pt", DEF="hanim_l_neck_base_pt", translation=((0.0646,1.5141,-0.038)), children=[
TouchSensor(description="HAnimSite l_neck_base_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_neck_base_pt", DEF="hanim_r_neck_base_pt", translation=((-0.0419,1.5149,-0.022)), children=[
TouchSensor(description="HAnimSite r_neck_base_pt"),
Shape(USE="HAnimSiteShape")]),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0065,1.4951,-0.0387),(0.082,1.4488,-0.0353)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_acromion_pt", DEF="hanim_l_acromion_pt", translation=((0.2032,1.476,-0.049)), children=[
TouchSensor(description="HAnimSite l_acromion_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_axilla_distal_pt", DEF="hanim_l_axilla_distal_pt", translation=((0.1706,1.4072,-0.0875)), children=[
TouchSensor(description="HAnimSite l_axilla_distal_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_axilla_posterior_folds_pt", DEF="hanim_l_axilla_posterior_folds_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_axilla_posterior_folds_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_axilla_proximal_pt", DEF="hanim_l_axilla_proximal_pt", translation=((0.1777,1.4065,-0.0075)), children=[
TouchSensor(description="HAnimSite l_axilla_proximal_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_clavicale_pt", DEF="hanim_l_clavicale_pt", translation=((0.0271,1.4943,0.0394)), children=[
TouchSensor(description="HAnimSite l_clavicale_pt"),
Shape(USE="HAnimSiteShape")]),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0065,1.4951,-0.0387),(-0.0694,1.46,-0.033)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_acromion_pt", DEF="hanim_r_acromion_pt", translation=((-0.1905,1.4791,-0.0431)), children=[
TouchSensor(description="HAnimSite r_acromion_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_axilla_distal_pt", DEF="hanim_r_axilla_distal_pt", translation=((-0.1603,1.4098,-0.0826)), children=[
TouchSensor(description="HAnimSite r_axilla_distal_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_axilla_posterior_folds_pt", DEF="hanim_r_axilla_posterior_folds_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_axilla_posterior_folds_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_axilla_proximal_pt", DEF="hanim_r_axilla_proximal_pt", translation=((-0.1626,1.4072,-0.0031)), children=[
TouchSensor(description="HAnimSite r_axilla_proximal_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_clavicale_pt", DEF="hanim_r_clavicale_pt", translation=((-0.0115,1.4943,0.04)), children=[
TouchSensor(description="HAnimSite r_clavicale_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="vc7", DEF="hanim_vc7", center=((0.0066,1.5132,-0.0301)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0066,1.5132,-0.0301),(0.0066,1.5357,-0.0143)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="vc6", DEF="hanim_vc6", center=((0.0066,1.5357,-0.0143)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0066,1.5357,-0.0143),(0.0066,1.552,-0.0082)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="vc5", DEF="hanim_vc5", center=((0.0066,1.552,-0.0082)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0066,1.552,-0.0082),(0.0066,1.5662,-0.0084)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="vc4", DEF="hanim_vc4", center=((0.0066,1.5662,-0.0084)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0066,1.5662,-0.0084),(0.0066,1.58,-0.0103)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="vc3", DEF="hanim_vc3", center=((0.0066,1.58,-0.0103)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0066,1.58,-0.0103),(0.0066,1.5928,-0.0103)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="adams_apple_pt", DEF="hanim_adams_apple_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite adams_apple_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="vc2", DEF="hanim_vc2", center=((0.0066,1.5928,-0.0103)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0066,1.5928,-0.0103),(0.0066,1.6144,-0.0034)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="vc1", DEF="hanim_vc1", center=((0.0066,1.6144,-0.0034)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0066,1.6144,-0.0034),(0.0044,1.6209,0.0236)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="glabella_pt", DEF="hanim_glabella_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite glabella_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_ectocanthus_pt", DEF="hanim_l_ectocanthus_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_ectocanthus_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_infraorbitale_pt", DEF="hanim_l_infraorbitale_pt", translation=((0.0341,1.6171,0.0752)), children=[
TouchSensor(description="HAnimSite l_infraorbitale_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_tragion_pt", DEF="hanim_l_tragion_pt", translation=((0.0739,1.6348,0.0282)), children=[
TouchSensor(description="HAnimSite l_tragion_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="nuchale_pt", DEF="hanim_nuchale_pt", translation=((0.0039,1.5972,-0.0796)), children=[
TouchSensor(description="HAnimSite nuchale_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="opisthocranion_pt", DEF="hanim_opisthocranion_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite opisthocranion_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_ectocanthus_pt", DEF="hanim_r_ectocanthus_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_ectocanthus_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_infraorbitale_pt", DEF="hanim_r_infraorbitale_pt", translation=((-0.0237,1.6171,0.0752)), children=[
TouchSensor(description="HAnimSite r_infraorbitale_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_tragion_pt", DEF="hanim_r_tragion_pt", translation=((-0.0646,1.6347,0.0302)), children=[
TouchSensor(description="HAnimSite r_tragion_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="sellion_pt", DEF="hanim_sellion_pt", translation=((0.0058,1.6316,0.0852)), children=[
TouchSensor(description="HAnimSite sellion_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="skull_vertex_pt", DEF="hanim_skull_vertex_pt", translation=((0.005,1.7504,0.0055)), children=[
TouchSensor(description="HAnimSite skull_vertex_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="skullbase", DEF="hanim_skullbase", center=((0.0044,1.6209,0.0236)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_gonion_pt", DEF="hanim_l_gonion_pt", translation=((0.0631,1.553,0.033)), children=[
TouchSensor(description="HAnimSite l_gonion_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="menton_pt", DEF="hanim_menton_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite menton_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_gonion_pt", DEF="hanim_r_gonion_pt", translation=((-0.052,1.5529,0.0347)), children=[
TouchSensor(description="HAnimSite r_gonion_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="supramenton_pt", DEF="hanim_supramenton_pt", translation=((0.0061,1.541,0.0805)), children=[
TouchSensor(description="HAnimSite supramenton_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_eyelid_joint", DEF="hanim_l_eyelid_joint", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)]),
HAnimJoint(name="r_eyelid_joint", DEF="hanim_r_eyelid_joint", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)]),
HAnimJoint(name="l_eyeball_joint", DEF="hanim_l_eyeball_joint", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)]),
HAnimJoint(name="r_eyeball_joint", DEF="hanim_r_eyeball_joint", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)]),
HAnimJoint(name="l_eyebrow_joint", DEF="hanim_l_eyebrow_joint", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)]),
HAnimJoint(name="r_eyebrow_joint", DEF="hanim_r_eyebrow_joint", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)]),
HAnimJoint(name="temporomandibular", DEF="hanim_temporomandibular", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])])])])])])]),
HAnimJoint(name="l_sternoclavicular", DEF="hanim_l_sternoclavicular", center=((0.082,1.4488,-0.0353)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.082,1.4488,-0.0353),(0.0962,1.4269,-0.0424)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_acromioclavicular", DEF="hanim_l_acromioclavicular", center=((0.0962,1.4269,-0.0424)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.0962,1.4269,-0.0424),(0.2029,1.4376,-0.0387)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_bideltoid_pt", DEF="hanim_l_bideltoid_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_bideltoid_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_humeral_lateral_epicondyles_pt", DEF="hanim_l_humeral_lateral_epicondyles_pt", translation=((0.228,1.1482,-0.11)), children=[
TouchSensor(description="HAnimSite l_humeral_lateral_epicondyles_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_shoulder", DEF="hanim_l_shoulder", center=((0.2029,1.4376,-0.0387)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.2029,1.4376,-0.0387),(0.2014,1.1357,-0.0682)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_humeral_medial_epicondyles_pt", DEF="hanim_l_humeral_medial_epicondyles_pt", translation=((0.1735,1.1272,-0.1113)), children=[
TouchSensor(description="HAnimSite l_humeral_medial_epicondyles_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_olecranon_pt", DEF="hanim_l_olecranon_pt", translation=((-0.1962,1.1375,-0.1123)), children=[
TouchSensor(description="HAnimSite l_olecranon_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_radial_styloid_pt", DEF="hanim_l_radial_styloid_pt", translation=((0.1901,0.8645,-0.0415)), children=[
TouchSensor(description="HAnimSite l_radial_styloid_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_radiale_pt", DEF="hanim_l_radiale_pt", translation=((0.2182,1.1212,-0.1167)), children=[
TouchSensor(description="HAnimSite l_radiale_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_elbow", DEF="hanim_l_elbow", center=((0.2014,1.1357,-0.0682)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.2014,1.1357,-0.0682),(0.1984,0.8663,-0.0583)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_ulnar_styloid_pt", DEF="hanim_l_ulnar_styloid_pt", translation=((-0.2142,0.8529,-0.0648)), children=[
TouchSensor(description="HAnimSite l_ulnar_styloid_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_radiocarpal", DEF="hanim_l_radiocarpal", center=((0.1984,0.8663,-0.0583)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1984,0.8663,-0.0583),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1984,0.8663,-0.0583),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1984,0.8663,-0.0583),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1984,0.8663,-0.0583),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_midcarpal_1", DEF="hanim_l_midcarpal_1", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0.1924,0.8472,-0.0534)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_carpometacarpal_1", DEF="hanim_l_carpometacarpal_1", center=((0.1924,0.8472,-0.0534)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1924,0.8472,-0.0534),(0.1951,0.8226,0.0246)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_metacarpophalangeal_1", DEF="hanim_l_metacarpophalangeal_1", center=((0.1951,0.8226,0.0246)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1951,0.8226,0.0246),(0.1955,0.8159,0.0464)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_carpal_distal_phalanx_1_tip", DEF="hanim_l_carpal_distal_phalanx_1_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_carpal_distal_phalanx_1_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_carpal_interphalangeal_1", DEF="hanim_l_carpal_interphalangeal_1", center=((0.1955,0.8159,0.0464)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])]),
HAnimJoint(name="l_midcarpal_2", DEF="hanim_l_midcarpal_2", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0.1983,0.8024,-0.028)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_metacarpal_phalanx_2_pt", DEF="hanim_l_metacarpal_phalanx_2_pt", translation=((0.2009,0.8139,-0.0237)), children=[
TouchSensor(description="HAnimSite l_metacarpal_phalanx_2_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_carpometacarpal_2", DEF="hanim_l_carpometacarpal_2", center=((0.1983,0.8024,-0.028)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1983,0.8024,-0.028),(0.1983,0.7815,-0.028)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_metacarpophalangeal_2", DEF="hanim_l_metacarpophalangeal_2", center=((0.1983,0.7815,-0.028)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1983,0.7815,-0.028),(0.2017,0.7363,-0.0248)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_carpal_proximal_interphalangeal_2", DEF="hanim_l_carpal_proximal_interphalangeal_2", center=((0.2017,0.7363,-0.0248)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.2017,0.7363,-0.0248),(0.2028,0.7139,-0.0236)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_carpal_distal_phalanx_2_tip", DEF="hanim_l_carpal_distal_phalanx_2_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_carpal_distal_phalanx_2_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="l_dactylion_pt", DEF="hanim_l_dactylion_pt", translation=((0.2056,0.6743,-0.0482)), children=[
TouchSensor(description="HAnimSite l_dactylion_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_carpal_distal_interphalangeal_2", DEF="hanim_l_carpal_distal_interphalangeal_2", center=((0.2028,0.7139,-0.0236)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])])]),
HAnimJoint(name="l_midcarpal_3", DEF="hanim_l_midcarpal_3", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0.1987,0.8029,-0.053)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_metacarpal_phalanx_3_pt", DEF="hanim_l_metacarpal_phalanx_3_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_metacarpal_phalanx_3_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_carpometacarpal_3", DEF="hanim_l_carpometacarpal_3", center=((0.1987,0.8029,-0.053)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1987,0.8029,-0.053),(0.1987,0.7818,-0.053)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_metacarpophalangeal_3", DEF="hanim_l_metacarpophalangeal_3", center=((0.1987,0.7818,-0.053)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1987,0.7818,-0.053),(0.2013,0.7273,-0.0503)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_carpal_proximal_interphalangeal_3", DEF="hanim_l_carpal_proximal_interphalangeal_3", center=((0.2013,0.7273,-0.0503)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.2013,0.7273,-0.0503),(0.2026,0.7011,-0.0494)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_carpal_distal_phalanx_3_tip", DEF="hanim_l_carpal_distal_phalanx_3_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_carpal_distal_phalanx_3_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_carpal_distal_interphalangeal_3", DEF="hanim_l_carpal_distal_interphalangeal_3", center=((0.2026,0.7011,-0.0494)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])])]),
HAnimJoint(name="l_midcarpal_4_5", DEF="hanim_l_midcarpal_4_5", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0.1956,0.8019,-0.0794)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(0.1925,0.8066,-0.1036)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_metacarpal_phalanx_5_pt", DEF="hanim_l_metacarpal_phalanx_5_pt", translation=((0.1929,0.786,-0.1122)), children=[
TouchSensor(description="HAnimSite l_metacarpal_phalanx_5_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_carpometacarpal_4", DEF="hanim_l_carpometacarpal_4", center=((0.1956,0.8019,-0.0794)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1956,0.8019,-0.0794),(0.1956,0.7815,-0.0794)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_metacarpophalangeal_4", DEF="hanim_l_metacarpophalangeal_4", center=((0.1956,0.7815,-0.0794)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1956,0.7815,-0.0794),(0.1973,0.7287,-0.0777)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_carpal_proximal_interphalangeal_4", DEF="hanim_l_carpal_proximal_interphalangeal_4", center=((0.1973,0.7287,-0.0777)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1973,0.7287,-0.0777),(0.1983,0.7045,-0.0767)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_carpal_distal_phalanx_4_tip", DEF="hanim_l_carpal_distal_phalanx_4_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_carpal_distal_phalanx_4_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_carpal_distal_interphalangeal_4", DEF="hanim_l_carpal_distal_interphalangeal_4", center=((0.1983,0.7045,-0.0767)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])]),
HAnimJoint(name="l_carpometacarpal_5", DEF="hanim_l_carpometacarpal_5", center=((0.1925,0.8066,-0.1036)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1925,0.8066,-0.1036),(0.1925,0.7866,-0.1036)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_metacarpophalangeal_5", DEF="hanim_l_metacarpophalangeal_5", center=((0.1925,0.7866,-0.1036)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1925,0.7866,-0.1036),(0.1938,0.7452,-0.1024)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="l_carpal_proximal_interphalangeal_5", DEF="hanim_l_carpal_proximal_interphalangeal_5", center=((0.1938,0.7452,-0.1024)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(0.1938,0.7452,-0.1024),(0.1948,0.7277,-0.1017)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="l_carpal_distal_phalanx_5_tip", DEF="hanim_l_carpal_distal_phalanx_5_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite l_carpal_distal_phalanx_5_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="l_carpal_distal_interphalangeal_5", DEF="hanim_l_carpal_distal_interphalangeal_5", center=((0.1948,0.7277,-0.1017)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])])])])])])])]),
HAnimJoint(name="r_sternoclavicular", DEF="hanim_r_sternoclavicular", center=((-0.0694,1.46,-0.033)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.0694,1.46,-0.033),(-0.0836,1.4281,-0.0401)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_acromioclavicular", DEF="hanim_r_acromioclavicular", center=((-0.0836,1.4281,-0.0401)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.0836,1.4281,-0.0401),(-0.1907,1.4407,-0.0325)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_bideltoid_pt", DEF="hanim_r_bideltoid_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_bideltoid_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_humeral_lateral_epicondyles_pt", DEF="hanim_r_humeral_lateral_epicondyles_pt", translation=((-0.2224,1.1517,-0.1033)), children=[
TouchSensor(description="HAnimSite r_humeral_lateral_epicondyles_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_shoulder", DEF="hanim_r_shoulder", center=((-0.1907,1.4407,-0.0325)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1907,1.4407,-0.0325),(-0.1949,1.1388,-0.062)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_humeral_medial_epicondyles_pt", DEF="hanim_r_humeral_medial_epicondyles_pt", translation=((-0.168,1.1298,-0.1062)), children=[
TouchSensor(description="HAnimSite r_humeral_medial_epicondyles_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_olecranon_pt", DEF="hanim_r_olecranon_pt", translation=((-0.1907,1.1405,-0.1065)), children=[
TouchSensor(description="HAnimSite r_olecranon_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_radial_styloid_pt", DEF="hanim_r_radial_styloid_pt", translation=((-0.1884,0.8676,-0.036)), children=[
TouchSensor(description="HAnimSite r_radial_styloid_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_radiale_pt", DEF="hanim_r_radiale_pt", translation=((-0.213,1.1305,-0.1091)), children=[
TouchSensor(description="HAnimSite r_radiale_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_elbow", DEF="hanim_r_elbow", center=((-0.1949,1.1388,-0.062)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1949,1.1388,-0.062),(-0.1959,0.8694,-0.0521)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_ulnar_styloid_pt", DEF="hanim_r_ulnar_styloid_pt", translation=((-0.2117,0.8562,-0.0584)), children=[
TouchSensor(description="HAnimSite r_ulnar_styloid_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_radiocarpal", DEF="hanim_r_radiocarpal", center=((-0.1959,0.8694,-0.0521)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1959,0.8694,-0.0521),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1959,0.8694,-0.0521),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1959,0.8694,-0.0521),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1959,0.8694,-0.0521),(0,1,0)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_midcarpal_1", DEF="hanim_r_midcarpal_1", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(-0.1899,0.8502,-0.0473)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_carpometacarpal_1", DEF="hanim_r_carpometacarpal_1", center=((-0.1899,0.8502,-0.0473)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1899,0.8502,-0.0473),(-0.1874,0.8256,0.0306)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_metacarpophalangeal_1", DEF="hanim_r_metacarpophalangeal_1", center=((-0.1874,0.8256,0.0306)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1874,0.8256,0.0306),(-0.1864,0.819,0.0506)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_carpal_distal_phalanx_1_tip", DEF="hanim_r_carpal_distal_phalanx_1_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_carpal_distal_phalanx_1_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_carpal_interphalangeal_1", DEF="hanim_r_carpal_interphalangeal_1", center=((-0.1864,0.819,0.0506)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])]),
HAnimJoint(name="r_midcarpal_2", DEF="hanim_r_midcarpal_2", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(-0.1961,0.8055,-0.0218)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_metacarpal_phalanx_2_pt", DEF="hanim_r_metacarpal_phalanx_2_pt", translation=((-0.1977,0.8169,-0.0177)), children=[
TouchSensor(description="HAnimSite r_metacarpal_phalanx_2_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_carpometacarpal_2", DEF="hanim_r_carpometacarpal_2", center=((-0.1961,0.8055,-0.0218)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1961,0.8055,-0.0218),(-0.1961,0.7846,-0.0218)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_metacarpophalangeal_2", DEF="hanim_r_metacarpophalangeal_2", center=((-0.1961,0.7846,-0.0218)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1961,0.7846,-0.0218),(-0.1954,0.7393,-0.0185)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_carpal_proximal_interphalangeal_2", DEF="hanim_r_carpal_proximal_interphalangeal_2", center=((-0.1954,0.7393,-0.0185)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1954,0.7393,-0.0185),(-0.1945,0.7169,-0.0173)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_carpal_distal_phalanx_2_tip", DEF="hanim_r_carpal_distal_phalanx_2_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_carpal_distal_phalanx_2_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimSite(name="r_dactylion_pt", DEF="hanim_r_dactylion_pt", translation=((-0.1941,0.6772,-0.0423)), children=[
TouchSensor(description="HAnimSite r_dactylion_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_carpal_distal_interphalangeal_2", DEF="hanim_r_carpal_distal_interphalangeal_2", center=((-0.1945,0.7169,-0.0173)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])])]),
HAnimJoint(name="r_midcarpal_3", DEF="hanim_r_midcarpal_3", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(-0.1972,0.806,-0.0468)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_metacarpal_phalanx_3_pt", DEF="hanim_r_metacarpal_phalanx_3_pt", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_metacarpal_phalanx_3_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_carpometacarpal_3", DEF="hanim_r_carpometacarpal_3", center=((-0.1972,0.806,-0.0468)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1972,0.806,-0.0468),(-0.1972,0.7849,-0.0468)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_metacarpophalangeal_3", DEF="hanim_r_metacarpophalangeal_3", center=((-0.1972,0.7849,-0.0468)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1972,0.7849,-0.0468),(-0.195,0.7304,-0.0441)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_carpal_proximal_interphalangeal_3", DEF="hanim_r_carpal_proximal_interphalangeal_3", center=((-0.195,0.7304,-0.0441)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.195,0.7304,-0.0441),(-0.1939,0.7042,-0.0432)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_carpal_distal_phalanx_3_tip", DEF="hanim_r_carpal_distal_phalanx_3_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_carpal_distal_phalanx_3_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_carpal_distal_interphalangeal_3", DEF="hanim_r_carpal_distal_interphalangeal_3", center=((-0.1939,0.7042,-0.0432)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])])]),
HAnimJoint(name="r_midcarpal_4_5", DEF="hanim_r_midcarpal_4_5", center=((0,1,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(-0.1951,0.8049,-0.0732)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
Shape(
geometry=
LineSet(vertexCount=[1], 
coord=
Coordinate(point=[(-0.1926,0.8096,-0.0975)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_metacarpal_phalanx_5_pt", DEF="hanim_r_metacarpal_phalanx_5_pt", translation=((-0.1929,0.789,-0.1064)), children=[
TouchSensor(description="HAnimSite r_metacarpal_phalanx_5_pt"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_carpometacarpal_4", DEF="hanim_r_carpometacarpal_4", center=((-0.1951,0.8049,-0.0732)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1951,0.8049,-0.0732),(-0.1951,0.7845,-0.0732)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_metacarpophalangeal_4", DEF="hanim_r_metacarpophalangeal_4", center=((-0.1951,0.7845,-0.0732)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1951,0.7845,-0.0732),(-0.192,0.7318,-0.0716)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_carpal_proximal_interphalangeal_4", DEF="hanim_r_carpal_proximal_interphalangeal_4", center=((-0.192,0.7318,-0.0716)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.192,0.7318,-0.0716),(-0.1908,0.7077,-0.0706)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_carpal_distal_phalanx_4_tip", DEF="hanim_r_carpal_distal_phalanx_4_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_carpal_distal_phalanx_4_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_carpal_distal_interphalangeal_4", DEF="hanim_r_carpal_distal_interphalangeal_4", center=((-0.1908,0.7077,-0.0706)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])]),
HAnimJoint(name="r_carpometacarpal_5", DEF="hanim_r_carpometacarpal_5", center=((-0.1926,0.8096,-0.0975)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1926,0.8096,-0.0975),(-0.1926,0.7896,-0.0975)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_metacarpophalangeal_5", DEF="hanim_r_metacarpophalangeal_5", center=((-0.1926,0.7896,-0.0975)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1926,0.7896,-0.0975),(-0.1902,0.7483,-0.0963)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimJoint(name="r_carpal_proximal_interphalangeal_5", DEF="hanim_r_carpal_proximal_interphalangeal_5", center=((-0.1902,0.7483,-0.0963)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Shape(
geometry=
LineSet(vertexCount=[2], 
coord=
Coordinate(point=[(-0.1902,0.7483,-0.0963),(-0.1908,0.754,-0.096)]), 
color=(
ColorRGBA(USE="HAnimSegmentLineColorRGBA")))),
HAnimSite(name="r_carpal_distal_phalanx_5_tip", DEF="hanim_r_carpal_distal_phalanx_5_tip", translation=((0,1,0)), children=[
TouchSensor(description="HAnimSite r_carpal_distal_phalanx_5_tip"),
Shape(USE="HAnimSiteShape")]),
HAnimJoint(name="r_carpal_distal_interphalangeal_5", DEF="hanim_r_carpal_distal_interphalangeal_5", center=((-0.1908,0.754,-0.096)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)])])])])])])])])])])])])])])])])])])])])])])])])])])])])], joints=(
HAnimJoint(USE="hanim_humanoid_root"),
HAnimJoint(USE="hanim_sacroiliac"),
HAnimJoint(USE="hanim_l_hip"),
HAnimJoint(USE="hanim_l_knee"),
HAnimJoint(USE="hanim_l_talocrural"),
HAnimJoint(USE="hanim_l_talocalcaneonavicular"),
HAnimJoint(USE="hanim_l_cuneonavicular_1"),
HAnimJoint(USE="hanim_l_tarsometatarsal_1"),
HAnimJoint(USE="hanim_l_metatarsophalangeal_1"),
HAnimJoint(USE="hanim_l_tarsal_interphalangeal_1"),
HAnimJoint(USE="hanim_l_cuneonavicular_2"),
HAnimJoint(USE="hanim_l_tarsometatarsal_2"),
HAnimJoint(USE="hanim_l_metatarsophalangeal_2"),
HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_2"),
HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_2"),
HAnimJoint(USE="hanim_l_cuneonavicular_3"),
HAnimJoint(USE="hanim_l_tarsometatarsal_3"),
HAnimJoint(USE="hanim_l_metatarsophalangeal_3"),
HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_3"),
HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_3"),
HAnimJoint(USE="hanim_l_calcaneocuboid"),
HAnimJoint(USE="hanim_l_transversetarsal"),
HAnimJoint(USE="hanim_l_tarsometatarsal_4"),
HAnimJoint(USE="hanim_l_metatarsophalangeal_4"),
HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_4"),
HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_4"),
HAnimJoint(USE="hanim_l_tarsometatarsal_5"),
HAnimJoint(USE="hanim_l_metatarsophalangeal_5"),
HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_5"),
HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_5"),
HAnimJoint(USE="hanim_r_hip"),
HAnimJoint(USE="hanim_r_knee"),
HAnimJoint(USE="hanim_r_talocrural"),
HAnimJoint(USE="hanim_r_talocalcaneonavicular"),
HAnimJoint(USE="hanim_r_cuneonavicular_1"),
HAnimJoint(USE="hanim_r_tarsometatarsal_1"),
HAnimJoint(USE="hanim_r_metatarsophalangeal_1"),
HAnimJoint(USE="hanim_r_tarsal_interphalangeal_1"),
HAnimJoint(USE="hanim_r_cuneonavicular_2"),
HAnimJoint(USE="hanim_r_tarsometatarsal_2"),
HAnimJoint(USE="hanim_r_metatarsophalangeal_2"),
HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_2"),
HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_2"),
HAnimJoint(USE="hanim_r_cuneonavicular_3"),
HAnimJoint(USE="hanim_r_tarsometatarsal_3"),
HAnimJoint(USE="hanim_r_metatarsophalangeal_3"),
HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_3"),
HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_3"),
HAnimJoint(USE="hanim_r_calcaneocuboid"),
HAnimJoint(USE="hanim_r_transversetarsal"),
HAnimJoint(USE="hanim_r_tarsometatarsal_4"),
HAnimJoint(USE="hanim_r_metatarsophalangeal_4"),
HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_4"),
HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_4"),
HAnimJoint(USE="hanim_r_tarsometatarsal_5"),
HAnimJoint(USE="hanim_r_metatarsophalangeal_5"),
HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_5"),
HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_5"),
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
HAnimJoint(USE="hanim_l_eyelid_joint"),
HAnimJoint(USE="hanim_r_eyelid_joint"),
HAnimJoint(USE="hanim_l_eyeball_joint"),
HAnimJoint(USE="hanim_r_eyeball_joint"),
HAnimJoint(USE="hanim_l_eyebrow_joint"),
HAnimJoint(USE="hanim_r_eyebrow_joint"),
HAnimJoint(USE="hanim_temporomandibular"),
HAnimJoint(USE="hanim_l_sternoclavicular"),
HAnimJoint(USE="hanim_l_acromioclavicular"),
HAnimJoint(USE="hanim_l_shoulder"),
HAnimJoint(USE="hanim_l_elbow"),
HAnimJoint(USE="hanim_l_radiocarpal"),
HAnimJoint(USE="hanim_l_midcarpal_1"),
HAnimJoint(USE="hanim_l_carpometacarpal_1"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_1"),
HAnimJoint(USE="hanim_l_carpal_interphalangeal_1"),
HAnimJoint(USE="hanim_l_midcarpal_2"),
HAnimJoint(USE="hanim_l_carpometacarpal_2"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_2"),
HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_2"),
HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_2"),
HAnimJoint(USE="hanim_l_midcarpal_3"),
HAnimJoint(USE="hanim_l_carpometacarpal_3"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_3"),
HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_3"),
HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_3"),
HAnimJoint(USE="hanim_l_midcarpal_4_5"),
HAnimJoint(USE="hanim_l_carpometacarpal_4"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_4"),
HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_4"),
HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_4"),
HAnimJoint(USE="hanim_l_carpometacarpal_5"),
HAnimJoint(USE="hanim_l_metacarpophalangeal_5"),
HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_5"),
HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_5"),
HAnimJoint(USE="hanim_r_sternoclavicular"),
HAnimJoint(USE="hanim_r_acromioclavicular"),
HAnimJoint(USE="hanim_r_shoulder"),
HAnimJoint(USE="hanim_r_elbow"),
HAnimJoint(USE="hanim_r_radiocarpal"),
HAnimJoint(USE="hanim_r_midcarpal_1"),
HAnimJoint(USE="hanim_r_carpometacarpal_1"),
HAnimJoint(USE="hanim_r_metacarpophalangeal_1"),
HAnimJoint(USE="hanim_r_carpal_interphalangeal_1"),
HAnimJoint(USE="hanim_r_midcarpal_2"),
HAnimJoint(USE="hanim_r_carpometacarpal_2"),
HAnimJoint(USE="hanim_r_metacarpophalangeal_2"),
HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_2"),
HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_2"),
HAnimJoint(USE="hanim_r_midcarpal_3"),
HAnimJoint(USE="hanim_r_carpometacarpal_3"),
HAnimJoint(USE="hanim_r_metacarpophalangeal_3"),
HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_3"),
HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_3"),
HAnimJoint(USE="hanim_r_midcarpal_4_5"),
HAnimJoint(USE="hanim_r_carpometacarpal_4"),
HAnimJoint(USE="hanim_r_metacarpophalangeal_4"),
HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_4"),
HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_4"),
HAnimJoint(USE="hanim_r_carpometacarpal_5"),
HAnimJoint(USE="hanim_r_metacarpophalangeal_5"),
HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_5"),
HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_5")), sites=[
HAnimSite(USE="hanim_buttocks_standing_wall_contact_point_pt"),
HAnimSite(USE="hanim_crotch_pt"),
HAnimSite(USE="hanim_l_asis_pt"),
HAnimSite(USE="hanim_l_iliocristale_pt"),
HAnimSite(USE="hanim_l_psis_pt"),
HAnimSite(USE="hanim_l_trochanterion_pt"),
HAnimSite(USE="hanim_r_asis_pt"),
HAnimSite(USE="hanim_r_iliocristale_pt"),
HAnimSite(USE="hanim_r_psis_pt"),
HAnimSite(USE="hanim_r_trochanterion_pt"),
HAnimSite(USE="hanim_navel_pt"),
HAnimSite(USE="hanim_waist_preferred_anterior_pt"),
HAnimSite(USE="hanim_waist_preferred_posterior_pt"),
HAnimSite(USE="hanim_l_femoral_lateral_epicondyles_pt"),
HAnimSite(USE="hanim_l_femoral_medial_epicondyles_pt"),
HAnimSite(USE="hanim_l_knee_crease_pt"),
HAnimSite(USE="hanim_l_suprapatella_pt"),
HAnimSite(USE="hanim_r_femoral_lateral_epicondyles_pt"),
HAnimSite(USE="hanim_r_femoral_medial_epicondyles_pt"),
HAnimSite(USE="hanim_r_knee_crease_pt"),
HAnimSite(USE="hanim_r_suprapatella_pt"),
HAnimSite(USE="hanim_l_lateral_malleolus_pt"),
HAnimSite(USE="hanim_l_medial_malleolus_pt"),
HAnimSite(USE="hanim_l_tibiale_pt"),
HAnimSite(USE="hanim_l_calcaneus_posterior_pt"),
HAnimSite(USE="hanim_l_sphyrion_pt"),
HAnimSite(USE="hanim_l_metatarsal_phalanx_1_pt"),
HAnimSite(USE="hanim_l_tarsal_distal_phalanx_1_tip"),
HAnimSite(USE="hanim_l_tarsal_distal_phalanx_2_tip"),
HAnimSite(USE="hanim_l_tarsal_distal_phalanx_3_tip"),
HAnimSite(USE="hanim_l_tarsal_distal_phalanx_4_tip"),
HAnimSite(USE="hanim_l_metatarsal_phalanx_5_pt"),
HAnimSite(USE="hanim_l_tarsal_distal_phalanx_5_tip"),
HAnimSite(USE="hanim_r_lateral_malleolus_pt"),
HAnimSite(USE="hanim_r_medial_malleolus_pt"),
HAnimSite(USE="hanim_r_tibiale_pt"),
HAnimSite(USE="hanim_r_calcaneus_posterior_pt"),
HAnimSite(USE="hanim_r_sphyrion_pt"),
HAnimSite(USE="hanim_r_metatarsal_phalanx_1_pt"),
HAnimSite(USE="hanim_r_tarsal_distal_phalanx_1_tip"),
HAnimSite(USE="hanim_r_tarsal_distal_phalanx_2_tip"),
HAnimSite(USE="hanim_r_tarsal_distal_phalanx_3_tip"),
HAnimSite(USE="hanim_r_tarsal_distal_phalanx_4_tip"),
HAnimSite(USE="hanim_r_metatarsal_phalanx_5_pt"),
HAnimSite(USE="hanim_r_tarsal_distal_phalanx_5_tip"),
HAnimSite(USE="hanim_l_rib10_pt"),
HAnimSite(USE="hanim_r_rib10_pt"),
HAnimSite(USE="hanim_spine_2_middle_back_pt"),
HAnimSite(USE="hanim_substernale_pt"),
HAnimSite(USE="hanim_l_thelion_pt"),
HAnimSite(USE="hanim_r_thelion_pt"),
HAnimSite(USE="hanim_l_chest_midsagittal_plane_pt"),
HAnimSite(USE="hanim_mesosternale_pt"),
HAnimSite(USE="hanim_r_chest_midsagittal_plane_pt"),
HAnimSite(USE="hanim_rear_center_midsagittal_plane_pt"),
HAnimSite(USE="hanim_spine_1_middle_back_pt"),
HAnimSite(USE="hanim_cervicale_pt"),
HAnimSite(USE="hanim_suprasternale_pt"),
HAnimSite(USE="hanim_l_neck_base_pt"),
HAnimSite(USE="hanim_r_neck_base_pt"),
HAnimSite(USE="hanim_l_acromion_pt"),
HAnimSite(USE="hanim_l_axilla_distal_pt"),
HAnimSite(USE="hanim_l_axilla_posterior_folds_pt"),
HAnimSite(USE="hanim_l_axilla_proximal_pt"),
HAnimSite(USE="hanim_l_clavicale_pt"),
HAnimSite(USE="hanim_r_acromion_pt"),
HAnimSite(USE="hanim_r_axilla_distal_pt"),
HAnimSite(USE="hanim_r_axilla_posterior_folds_pt"),
HAnimSite(USE="hanim_r_axilla_proximal_pt"),
HAnimSite(USE="hanim_r_clavicale_pt"),
HAnimSite(USE="hanim_adams_apple_pt"),
HAnimSite(USE="hanim_glabella_pt"),
HAnimSite(USE="hanim_l_ectocanthus_pt"),
HAnimSite(USE="hanim_l_infraorbitale_pt"),
HAnimSite(USE="hanim_l_tragion_pt"),
HAnimSite(USE="hanim_nuchale_pt"),
HAnimSite(USE="hanim_opisthocranion_pt"),
HAnimSite(USE="hanim_r_ectocanthus_pt"),
HAnimSite(USE="hanim_r_infraorbitale_pt"),
HAnimSite(USE="hanim_r_tragion_pt"),
HAnimSite(USE="hanim_sellion_pt"),
HAnimSite(USE="hanim_skull_vertex_pt"),
HAnimSite(USE="hanim_l_gonion_pt"),
HAnimSite(USE="hanim_menton_pt"),
HAnimSite(USE="hanim_r_gonion_pt"),
HAnimSite(USE="hanim_supramenton_pt"),
HAnimSite(USE="hanim_l_bideltoid_pt"),
HAnimSite(USE="hanim_l_humeral_lateral_epicondyles_pt"),
HAnimSite(USE="hanim_l_humeral_medial_epicondyles_pt"),
HAnimSite(USE="hanim_l_olecranon_pt"),
HAnimSite(USE="hanim_l_radial_styloid_pt"),
HAnimSite(USE="hanim_l_radiale_pt"),
HAnimSite(USE="hanim_l_ulnar_styloid_pt"),
HAnimSite(USE="hanim_l_carpal_distal_phalanx_1_tip"),
HAnimSite(USE="hanim_l_metacarpal_phalanx_2_pt"),
HAnimSite(USE="hanim_l_carpal_distal_phalanx_2_tip"),
HAnimSite(USE="hanim_l_dactylion_pt"),
HAnimSite(USE="hanim_l_metacarpal_phalanx_3_pt"),
HAnimSite(USE="hanim_l_carpal_distal_phalanx_3_tip"),
HAnimSite(USE="hanim_l_metacarpal_phalanx_5_pt"),
HAnimSite(USE="hanim_l_carpal_distal_phalanx_4_tip"),
HAnimSite(USE="hanim_l_carpal_distal_phalanx_5_tip"),
HAnimSite(USE="hanim_r_bideltoid_pt"),
HAnimSite(USE="hanim_r_humeral_lateral_epicondyles_pt"),
HAnimSite(USE="hanim_r_humeral_medial_epicondyles_pt"),
HAnimSite(USE="hanim_r_olecranon_pt"),
HAnimSite(USE="hanim_r_radial_styloid_pt"),
HAnimSite(USE="hanim_r_radiale_pt"),
HAnimSite(USE="hanim_r_ulnar_styloid_pt"),
HAnimSite(USE="hanim_r_carpal_distal_phalanx_1_tip"),
HAnimSite(USE="hanim_r_metacarpal_phalanx_2_pt"),
HAnimSite(USE="hanim_r_carpal_distal_phalanx_2_tip"),
HAnimSite(USE="hanim_r_dactylion_pt"),
HAnimSite(USE="hanim_r_metacarpal_phalanx_3_pt"),
HAnimSite(USE="hanim_r_carpal_distal_phalanx_3_tip"),
HAnimSite(USE="hanim_r_metacarpal_phalanx_5_pt"),
HAnimSite(USE="hanim_r_carpal_distal_phalanx_4_tip"),
HAnimSite(USE="hanim_r_carpal_distal_phalanx_5_tip")])]))
.XML())