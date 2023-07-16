# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="4.0", 
head=head(children=[component(name="HAnim", level=1),
component(name="Text", level=1),
component(name="Core", level=1),
component(name="Grouping", level=1),
component(name="Shape", level=1),
component(name="Rendering", level=1),
meta(name="Joe", content="20090328 20130628 http://www.hypermultimedia.com/acontents.htm#X3DHANIM"),
meta(name="converter", content="x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"),
meta(name="converted", content="Wed, 12 Jul 2023 08:05:49 GMT"),
meta(name="translated", content="16 July 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
WorldInfo(DEF="JoeTest_WorldInfo", title="JoeLevel2LOA3SSPYRWRJKHud.x3dv 20130723 20230108"),
NavigationInfo(speed=0.75, headlight=False),
Group(DEF="IllustrationGeometry", children=[
Transform(translation=((0,2.1,0)), scale=((2,2,2)), children=[
Shape(DEF="jointbox", 
appearance=
Appearance(
material=
Material(ambientIntensity=0.5, diffuseColor=((1,1,0)), specularColor=((1,1,0)), shininess=0.7)), 
geometry=
IndexedFaceSet(creaseAngle=0.1, coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1], 
coord=
Coordinate(point=[(0,0.01,0),(-0.01,0,0),(0,0,0.01),(0.01,0,0),(0,0,-0.01),(0,-0.01,0)])))]),
Transform(translation=((0,2.2,0)), scale=((2,2,2)), children=[
Shape(DEF="sitebox", 
appearance=
Appearance(
material=
Material(ambientIntensity=0.5, diffuseColor=((1,0,0)), specularColor=((1,0,0)), shininess=0.7)), 
geometry=
IndexedFaceSet(creaseAngle=0.1, coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1], 
coord=
Coordinate(point=[(0,0.01,0),(-0.01,0,0),(0,0,0.01),(0.01,0,0),(0,0,-0.01),(0,-0.01,0)])))]),
Transform(translation=((0,2.3,0)), scale=((2,2,2)), children=[
Shape(
appearance=
Appearance(DEF="SegmentLine", 
material=
Material(diffuseColor=((0,1,0)), specularColor=((0,1,0)), emissiveColor=((0,1,0)))), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,0,0),(0.2,0,0)])))]),
Transform(translation=((0,2.4,0)), scale=((2,2,2)), children=[
Shape(
appearance=
Appearance(DEF="SiteParentLine", 
material=
Material(diffuseColor=((1,0,0)), specularColor=((1,0,0)), emissiveColor=((1,0,0)))), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,0,0),(0.2,0,0)])))])]),
Group(DEF="SpecHumanoid", children=[
HAnimHumanoid(DEF="humanoid", version="2.0", skeleton=[
HAnimJoint(name="HumanoidRoot", DEF="hanim_HumanoidRoot", center=((0,0.824,0.0277)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="sacrum", DEF="hanim_sacrum", children=[
Transform(translation=((0,0.824,0.0277)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1], 
coord=
Coordinate(point=[(0,0.824,0.0277),(0,0.9149,0.0016),(0.0028,1.0568,-0.0776)])))]),
HAnimJoint(name="sacroiliac", DEF="hanim_sacroiliac", center=((0,0.9149,0.0016)), skinCoordIndex=[17,19,20,21,22,23,26,27,73,82,89,91,93], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(0.35),float(0.35),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="pelvis", DEF="hanim_pelvis", children=[
Transform(translation=((0,0.9149,0.0016)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1], 
coord=
Coordinate(point=[(0,0.9149,0.0016),(0.0961,0.9124,-0.0001),(-0.095,0.9171,0.0029)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1,0,6,-1,0,7,-1,0,8,-1,0,9,-1], 
coord=
Coordinate(point=[(0,0.9149,0.0016),(-0.1525,1.0628,0.0035),(-0.1689,0.8419,0.0352),(0.1612,1.0537,0.0008),(0.1677,0.8336,0.0303),(-0.0887,1.0021,0.1112),(0.0925,0.9983,0.1052),(-0.0716,1.019,-0.1138),(0.0774,1.019,-0.1151),(0.0034,0.8266,0.0257)]))),
HAnimSite(name="r_iliocristale", DEF="hanim_r_iliocristale", translation=((-0.1525,1.0628,0.0035)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_trochanterion", DEF="hanim_r_trochanterion", translation=((-0.1689,0.8419,0.0352)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_iliocristale", DEF="hanim_l_iliocristale", translation=((0.1612,1.0537,0.0008)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_trochanterion", DEF="hanim_l_trochanterion", translation=((0.1677,0.8336,0.0303)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_asis", DEF="hanim_r_asis", translation=((-0.0887,1.0021,0.1112)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_asis", DEF="hanim_l_asis", translation=((0.0925,0.9983,0.1052)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_psis", DEF="hanim_r_psis", translation=((-0.0716,1.019,-0.1138)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_psis", DEF="hanim_l_psis", translation=((0.0774,1.019,-0.1151)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="crotch", DEF="hanim_crotch", translation=((0.0034,0.8266,0.0257)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="l_hip", DEF="hanim_l_hip", center=((0.0961,0.9124,-0.0001)), skinCoordIndex=[89,90,94,95,96,97], skinCoordWeight=[float(0.65),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_thigh", DEF="hanim_l_thigh", children=[
Transform(translation=((0.0961,0.9124,-0.0001)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0961,0.9124,-0.0001),(0.104,0.4867,0.0308)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1], 
coord=
Coordinate(point=[(0.0961,0.9124,-0.0001),(0.0993,0.4881,-0.0309),(0.1598,0.4967,0.0297),(0.0398,0.4946,0.0303)]))),
HAnimSite(name="l_knee_crease", DEF="hanim_l_knee_crease", translation=((0.0993,0.4881,-0.0309)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_femoral_lateral_epicn", DEF="hanim_l_femoral_lateral_epicn", translation=((0.1598,0.4967,0.0297)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_femoral_medial_epicn", DEF="hanim_l_femoral_medial_epicn", translation=((0.0398,0.4946,0.0303)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="l_knee", DEF="hanim_l_knee", center=((0.104,0.4867,0.0308)), skinCoordIndex=[334,335,336,337,338,339,340,341], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_calf", DEF="hanim_l_calf", children=[
Transform(translation=((0.104,0.4867,0.0308)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.104,0.4867,0.0308),(0.1101,0.0656,-0.0736)])))]),
HAnimJoint(name="l_ankle", DEF="hanim_l_ankle", center=((0.1101,0.0656,-0.0736)), skinCoordIndex=[342,343,344,345], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_hindfoot", DEF="hanim_l_hindfoot", children=[
Transform(translation=((0.1101,0.0656,-0.0736)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1101,0.0656,-0.0736),(0.1086,0.0001,-0.0368)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1,0,4,-1], 
coord=
Coordinate(point=[(0.1101,0.0656,-0.0736),(0.1308,0.0597,-0.1032),(0.089,0.0716,-0.0881),(0.089,0.0575,-0.0943),(0.0974,0.0259,-0.1171)]))),
HAnimSite(name="l_lateral_malleolus", DEF="hanim_l_lateral_malleolus", translation=((0.1308,0.0597,-0.1032)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_medial_malleolus", DEF="hanim_l_medial_malleolus", translation=((0.089,0.0716,-0.0881)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_sphyrion", DEF="hanim_l_sphyrion", translation=((0.089,0.0575,-0.0943)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_calcaneous_post", DEF="hanim_l_calcaneous_post", translation=((0.0974,0.0259,-0.1171)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="l_subtalar", DEF="hanim_l_subtalar", center=((0.1086,0.0001,-0.0368)), skinCoordIndex=[346,347,348,71], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_midproximal", DEF="hanim_l_l_midproximal", children=[
Transform(translation=((0.1086,0.0001,-0.0368)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1086,0.0001,-0.0368),(0.1086,0.0001,0.0368)])))]),
HAnimJoint(name="l_midtarsal", DEF="hanim_l_midtarsal", center=((0.1086,0.0001,0.0368)), skinCoordIndex=[349,350,351,352], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_middistal", DEF="hanim_l_middistal", children=[
Transform(translation=((0.1086,0.0001,0.0368)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1086,0.0001,0.0368),(0.1086,0,0.0762)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1086,0.0001,-0.0368),(0.0816,0.0232,0.0106)]))),
HAnimSite(name="l_metatarsal_pha1", DEF="hanim_l_metatarsal_pha1", translation=((0.0816,0.0232,0.0106)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="l_metatarsal", DEF="hanim_l_metatarsal", center=((0.1086,0,0.0762)), skinCoordIndex=[353,354,355,356,357,358,359,360,361], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_forefoot", DEF="hanim_l_forefoot", children=[
Transform(translation=((0.1086,0,0.0762)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1086,0,0.0762),(0.1354,0.0016,0.1476)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1], 
coord=
Coordinate(point=[(0.1086,0,0.0762),(0.1354,0.0016,0.1476),(0.1825,0.007,0.0928),(0.1195,0.0079,0.1433)]))),
HAnimSite(name="l_forefoot_tip", DEF="hanim_l_forefoot_tip", translation=((0.1354,0.0016,0.1476)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_metatarsal_pha5", DEF="hanim_l_metatarsal_pha5", translation=((0.1825,0.007,0.0928)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_digit2", DEF="hanim_l_digit2", translation=((0.1195,0.0079,0.1433)), children=[
Shape(USE="sitebox")])])])])])])])]),
HAnimJoint(name="r_hip", DEF="hanim_r_hip", center=((-0.095,0.9171,0.0029)), skinCoordIndex=[91,92,98,99,100,101,362,363], skinCoordWeight=[float(0.65),float(1),float(0.8),float(1),float(1),float(1),float(0.4),float(0.8)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_thigh", DEF="hanim_r_thigh", children=[
Transform(translation=((-0.095,0.9171,0.0029)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.095,0.9171,0.0029),(-0.0867,0.4913,0.0318)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1], 
coord=
Coordinate(point=[(-0.095,0.9171,0.0029),(-0.0825,0.4932,-0.0326),(-0.1421,0.4992,0.031),(-0.0221,0.5014,0.0289)]))),
HAnimSite(name="r_knee_crease", DEF="hanim_r_knee_crease", translation=((-0.0825,0.4932,-0.0326)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_femoral_lateral_epicn", DEF="hanim_r_femoral_lateral_epicn", translation=((-0.1421,0.4992,0.031)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_femoral_medial_epicn", DEF="hanim_r_femoral_medial_epicn", translation=((-0.0221,0.5014,0.0289)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="r_knee", DEF="hanim_r_knee", center=((-0.0867,0.4913,0.0318)), skinCoordIndex=[362,363,364,365,366,367,368,369,98], skinCoordWeight=[float(0.6),float(0.2),float(1),float(1),float(1),float(1),float(1),float(1),float(0.2)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_calf", DEF="hanim_r_calf", children=[
Transform(translation=((-0.0867,0.4913,0.0318)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.0867,0.4913,0.0318),(-0.0801,0.0712,-0.0766)])))]),
HAnimJoint(name="r_ankle", DEF="hanim_r_ankle", center=((-0.0801,0.0712,-0.0766)), skinCoordIndex=[370,371,372,373], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_hindfoot", DEF="hanim_r_hindfoot", children=[
Transform(translation=((-0.0801,0.0712,-0.0766)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.0801,0.0712,-0.0766),(-0.0801,0,-0.0368)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1,0,4,-1], 
coord=
Coordinate(point=[(-0.0801,0.0712,-0.0766),(-0.1006,0.0658,-0.1075),(-0.0591,0.076,-0.0928),(-0.0603,0.061,-0.1002),(-0.0692,0.0297,-0.1221)]))),
HAnimSite(name="r_lateral_malleolus", DEF="hanim_r_lateral_malleolus", translation=((-0.1006,0.0658,-0.1075)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_medial_malleolus", DEF="hanim_r_medial_malleolus", translation=((-0.0591,0.076,-0.0928)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_sphyrion", DEF="hanim_r_sphyrion", translation=((-0.0603,0.061,-0.1002)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_calcaneous_post", DEF="hanim_r_calcaneous_post", translation=((-0.0692,0.0297,-0.1221)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="r_subtalar", DEF="hanim_r_subtalar", center=((-0.0801,0,-0.0368)), skinCoordIndex=[374,375,376], skinCoordWeight=[float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_midproximal", DEF="hanim_r_midproximal", children=[
Transform(translation=((-0.0801,0,-0.0368)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.0801,0,-0.0368),(-0.0801,0,0.0368)])))]),
HAnimJoint(name="r_midtarsal", DEF="hanim_r_midtarsal", center=((-0.0801,0,0.0368)), skinCoordIndex=[377,378,379,380], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_middistal", DEF="hanim_r_middistal", children=[
Transform(translation=((-0.0801,0,0.0368)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.0801,0,-0.0368),(-0.0801,0.0039,0.0732)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.0801,0,0.0368),(-0.0521,0.026,0.0127)]))),
HAnimSite(name="r_metatarsal_pha1", DEF="hanim_r_metatarsal_pha1", translation=((-0.0521,0.026,0.0127)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="r_metatarsal", DEF="hanim_r_metatarsal", center=((-0.0801,0.0039,0.0732)), skinCoordIndex=[381,382,383,384,385,386,387,388,389], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_forefoot", DEF="hanim_r_forefoot", children=[
Transform(translation=((-0.0801,0.0039,0.0732)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.0801,0.0039,0.0732),(-0.1043,-0.0227,0.145)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1], 
coord=
Coordinate(point=[(-0.0801,0.0039,0.0732),(-0.1043,-0.0227,0.145),(-0.1523,0.0166,0.0895),(-0.0883,0.0134,0.1383)]))),
HAnimSite(name="r_forefoot_tip", DEF="hanim_r_forefoot_tip", translation=((-0.1043,-0.0227,0.145)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_metatarsal_pha5", DEF="hanim_r_metatarsal_pha5", translation=((-0.1523,0.0166,0.0895)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_digit2", DEF="hanim_r_digit2", translation=((-0.0883,0.0134,0.1383)), children=[
Shape(USE="sitebox")])])])])])])])])]),
HAnimJoint(name="vl5", DEF="hanim_vl5", center=((0.0028,1.0568,-0.0776)), skinCoordIndex=[28,76], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l5", DEF="hanim_l5", children=[
Transform(translation=((0.0028,1.0568,-0.0776)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0028,1.0568,-0.0776),(0.0035,1.0925,-0.0787)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1], 
coord=
Coordinate(point=[(0.0028,1.0568,-0.0776),(0.005,1.0915,-0.1091),(0.0069,1.0966,0.1017)]))),
HAnimSite(name="waist_preferred_post", DEF="hanim_waist_preferred_post", translation=((0.005,1.0915,-0.1091)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="navel", DEF="hanim_navel", translation=((0.0069,1.0966,0.1017)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="vl4", DEF="hanim_vl4", center=((0.0035,1.0925,-0.0787)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l4", DEF="hanim_l4", children=[
Transform(translation=((0.0035,1.0925,-0.0787)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0035,1.0925,-0.0787),(0.0041,1.1276,-0.0796)])))]),
HAnimJoint(name="vl3", DEF="hanim_vl3", center=((0.0041,1.1276,-0.0796)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l3", DEF="hanim_l3", children=[
Transform(translation=((0.0041,1.1276,-0.0796)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0041,1.1276,-0.0796),(0.0045,1.1546,-0.08)])))]),
HAnimJoint(name="vl2", DEF="hanim_vl2", center=((0.0045,1.1546,-0.08)), skinCoordIndex=[16,18,25,83,84,85,86,87,88], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(0.7),float(1),float(0.8)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l2", DEF="hanim_l2", children=[
Transform(translation=((0.0045,1.1546,-0.08)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0045,1.1546,-0.08),(0.0048,1.1912,-0.0805)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1], 
coord=
Coordinate(point=[(0.0045,1.1546,-0.08),(-0.0711,1.1941,0.1016),(0.0871,1.1925,0.0992),(0.0049,1.1908,-0.1113)]))),
HAnimSite(name="r_rib10", DEF="hanim_r_rib10", translation=((-0.0711,1.1941,0.1016)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_rib10", DEF="hanim_l_rib10", translation=((0.0871,1.1925,0.0992)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="rib10_midspine", DEF="hanim_rib10_midspine", translation=((0.0049,1.1908,-0.1113)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="vl1", DEF="hanim_vl1", center=((0.0048,1.1912,-0.0805)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l1", DEF="hanim_l1", children=[
Transform(translation=((0.0048,1.1912,-0.0805)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0048,1.1912,-0.0805),(0.0051,1.2278,-0.0808)])))]),
HAnimJoint(name="vt12", DEF="hanim_vt12", center=((0.0051,1.2278,-0.0808)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t12", DEF="hanim_t12", children=[
Transform(translation=((0.0051,1.2278,-0.0808)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0051,1.2278,-0.0808),(0.0053,1.2679,-0.081)])))]),
HAnimJoint(name="vt11", DEF="hanim_vt11", center=((0.0053,1.2679,-0.081)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t11", DEF="hanim_t11", children=[
Transform(translation=((0.0053,1.2679,-0.081)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0053,1.2679,-0.081),(0.0056,1.2848,-0.0822)])))]),
HAnimJoint(name="vt10", DEF="hanim_vt10", center=((0.0056,1.2848,-0.0822)), skinCoordIndex=[15], skinCoordWeight=[float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t10", DEF="hanim_t10", children=[
Transform(translation=((0.0056,1.2848,-0.0822)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0056,1.2848,-0.0822),(0.0057,1.3126,-0.0838)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0056,1.2848,-0.0822),(0.0085,1.2995,0.1147)]))),
HAnimSite(name="substernale", DEF="hanim_substernale", translation=((0.0085,1.2995,0.1147)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="vt9", DEF="hanim_vt9", center=((0.0057,1.3126,-0.0838)), skinCoordIndex=[13,14], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t9", DEF="hanim_t9", children=[
Transform(translation=((0.0057,1.3126,-0.0838)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0057,1.3126,-0.0838),(0.0057,1.3382,-0.0845)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1], 
coord=
Coordinate(point=[(0.0057,1.3126,-0.0838),(-0.0736,1.3385,0.1217),(0.0918,1.3382,0.1192),(0.0057,1.3382,-0.0845)]))),
HAnimSite(name="r_thelion", DEF="hanim_r_thelion", translation=((-0.0736,1.3385,0.1217)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_thelion", DEF="hanim_l_thelion", translation=((0.0918,1.3382,0.1192)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="vt8", DEF="hanim_vt8", center=((0.0057,1.3382,-0.0845)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t8", DEF="hanim_t8", children=[
Transform(translation=((0.0057,1.3382,-0.0845)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0057,1.3382,-0.0845),(0.0058,1.3625,-0.0833)])))]),
HAnimJoint(name="vt7", DEF="hanim_vt7", center=((0.0058,1.3625,-0.0833)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t7", DEF="hanim_t7", children=[
Transform(translation=((0.0058,1.3625,-0.0833)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0058,1.3625,-0.0833),(0.0059,1.3866,-0.08)])))]),
HAnimJoint(name="vt6", DEF="hanim_vt6", center=((0.0059,1.3866,-0.08)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t6", DEF="hanim_t6", children=[
Transform(translation=((0.0059,1.3866,-0.08)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0059,1.3866,-0.08),(0.006,1.4102,-0.0745)])))]),
HAnimJoint(name="vt5", DEF="hanim_vt5", center=((0.006,1.4102,-0.0745)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t5", DEF="hanim_t5", children=[
Transform(translation=((0.006,1.4102,-0.0745)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.006,1.4102,-0.0745),(0.0061,1.432,-0.0675)])))]),
HAnimJoint(name="vt4", DEF="hanim_vt4", center=((0.0061,1.432,-0.0675)), skinCoordIndex=[81], skinCoordWeight=[float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t4", DEF="hanim_t4", children=[
Transform(translation=((0.0061,1.432,-0.0675)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0061,1.432,-0.0675),(0.0062,1.4583,-0.057)])))]),
HAnimJoint(name="vt3", DEF="hanim_vt3", center=((0.0062,1.4583,-0.057)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t3", DEF="hanim_t3", children=[
Transform(translation=((0.0062,1.4583,-0.057)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0062,1.4583,-0.057),(0.0063,1.4761,-0.0484)])))]),
HAnimJoint(name="vt2", DEF="hanim_vt2", center=((0.0063,1.4761,-0.0484)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t2", DEF="hanim_t2", children=[
Transform(translation=((0.0063,1.4761,-0.0484)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0063,1.4761,-0.0484),(0.0065,1.4951,-0.0387)])))]),
HAnimJoint(name="vt1", DEF="hanim_vt1", center=((0.0065,1.4951,-0.0387)), skinCoordIndex=[11,24], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="t1", DEF="hanim_t1", children=[
Transform(translation=((0.0065,1.4951,-0.0387)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1], 
coord=
Coordinate(point=[(0.0065,1.4951,-0.0387),(0.0066,1.5132,-0.0301),(0.082,1.4488,-0.0353),(-0.0694,1.46,-0.033)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1], 
coord=
Coordinate(point=[(0.0065,1.4951,-0.0387),(0.0084,1.4714,0.0551),(0.0064,1.52,-0.0815)]))),
HAnimSite(name="suprasternale", DEF="hanim_suprasternale", translation=((0.0084,1.4714,0.0551)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="cervicale", DEF="hanim_cervicale", translation=((0.0064,1.52,-0.0815)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="vc7", DEF="hanim_vc7", center=((0.0066,1.5132,-0.0301)), skinCoordIndex=[74,75], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c7", DEF="hanim_c7", children=[
Transform(translation=((0.0066,1.5132,-0.0301)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0066,1.5132,-0.0301),(0.0066,1.5357,-0.0143)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1], 
coord=
Coordinate(point=[(0.0066,1.5132,-0.0301),(-0.0419,1.5149,-0.022),(0.0646,1.5141,-0.038)]))),
HAnimSite(name="r_neck_base", DEF="hanim_r_neck_base", translation=((-0.0419,1.5149,-0.022)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_neck_base", DEF="hanim_l_neck_base", translation=((0.0646,1.5141,-0.038)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="vc6", DEF="hanim_vc6", center=((0.0066,1.5357,-0.0143)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c6", DEF="hanim_c6", children=[
Transform(DEF="cordsysvc6", translation=((0.0066,1.5357,-0.0143)), scale=((0.175,0.175,0.175)), children=[
Inline(global_=True, url=["JointCoordinateAxes.x3dv"])]),
Transform(translation=((0.0066,1.5357,-0.0143)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0066,1.5357,-0.0143),(0.0066,1.552,-0.0082)])))]),
HAnimJoint(name="vc5", DEF="hanim_vc5", center=((0.0066,1.552,-0.0082)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c5", DEF="hanim_c5", children=[
Transform(translation=((0.0066,1.552,-0.0082)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0066,1.552,-0.0082),(0.0066,1.5662,-0.0084)])))]),
HAnimJoint(name="vc4", DEF="hanim_vc4", center=((0.0066,1.5662,-0.0084)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c4", DEF="hanim_c4", children=[
Transform(translation=((0.0066,1.5662,-0.0084)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0066,1.5662,-0.0084),(0.0066,1.58,-0.0103)])))]),
HAnimJoint(name="vc3", DEF="hanim_vc3", center=((0.0066,1.58,-0.0103)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c3", DEF="hanim_c3", children=[
Transform(translation=((0.0066,1.58,-0.0103)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0066,1.5662,-0.0084),(0.0066,1.5928,-0.0103)])))]),
HAnimJoint(name="vc2", DEF="hanim_vc2", center=((0.0066,1.5928,-0.0103)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c2", DEF="hanim_c2", children=[
Transform(translation=((0.0066,1.5928,-0.0103)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0066,1.5928,-0.0103),(0.0066,1.6144,-0.0034)])))]),
HAnimJoint(name="vc1", DEF="hanim_vc1", center=((0.0066,1.6144,-0.0034)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="c1", DEF="hanim_c1", children=[
Transform(translation=((0.0066,1.6144,-0.0034)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0066,1.6144,-0.0034),(0.0044,1.6209,0.0236)])))]),
HAnimJoint(name="skullbase", DEF="hanim_skullbase", center=((0.0044,1.6209,0.0236)), skinCoordIndex=[0,1,2,3,4,5,6,7,8,9], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="skull", DEF="hanim_skull", children=[
Transform(translation=((0.0044,1.6209,0.0236)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0.0336,1.6332,0.0502),(-0.0236,1.6331,0.051)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1,0,6,-1,0,7,-1,0,8,-1,0,9,-1,0,10,-1], 
coord=
Coordinate(point=[(0.0044,1.6209,0.0236),(0.005,1.7504,0.0055),(0.0058,1.6316,0.0852),(-0.0237,1.6171,0.0752),(0.0341,1.6171,0.0752),(0.0061,1.541,0.0805),(-0.0646,1.6347,0.0302),(-0.052,1.5529,0.0347),(0.0739,1.6348,0.0282),(0.0631,1.553,0.033),(0.0039,1.5972,-0.0796)]))),
HAnimSite(name="skull_tip", DEF="hanim_skull_tip", translation=((0.005,1.7504,0.0055)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="sellion", DEF="hanim_sellion", translation=((0.0058,1.6316,0.0852)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_infraorbitale", DEF="hanim_r_infraorbitale", translation=((-0.0237,1.6171,0.0752)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_infraorbitale", DEF="hanim_l_infraorbitale", translation=((0.0341,1.6171,0.0752)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="supramenton", DEF="hanim_supramenton", translation=((0.0061,1.541,0.0805)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_tragion", DEF="hanim_r_tragion", translation=((-0.0646,1.6347,0.0302)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_gonion", DEF="hanim_r_gonion", translation=((-0.052,1.5529,0.0347)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_tragion", DEF="hanim_l_tragion", translation=((0.0739,1.6348,0.0282)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_gonion", DEF="hanim_l_gonion", translation=((0.0631,1.553,0.033)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="nuchale", DEF="hanim_nuchale", translation=((0.0039,1.5972,-0.0796)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="l_eyeball_joint", DEF="hanim_l_eyeball_joint", center=((0.0336,1.6332,0.0502)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_eyeball", DEF="hanim_l_eyeball", children=[
Transform(translation=((0.0336,1.6332,0.0502)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0336,1.6332,0.0502),(0.0336,1.6332,0.0702)])))])]),
HAnimJoint(name="r_eyeball_joint", DEF="hanim_r_eyeball_joint", center=((-0.0236,1.6331,0.051)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_eyeball", DEF="hanim_r_eyeball", children=[
Transform(translation=((-0.0236,1.6331,0.051)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.0236,1.6331,0.051),(-0.0236,1.6331,0.071)])))])])])])])])])])])]),
HAnimJoint(name="l_sternoclavicular", DEF="hanim_l_sternoclavicular", center=((0.082,1.4488,-0.0353)), skinCoordIndex=[12], skinCoordWeight=[float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_clavicle", DEF="hanim_l_clavicle", children=[
Transform(translation=((0.082,1.4488,-0.0353)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.082,1.4488,-0.0353),(0.0962,1.4269,-0.0424)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1,0,4,-1], 
coord=
Coordinate(point=[(0.082,1.4488,-0.0353),(0.0271,1.4943,0.0394),(0.2032,1.476,-0.049),(0.1777,1.4065,-0.0075),(0.1706,1.4072,-0.0875)]))),
HAnimSite(name="l_clavicale", DEF="hanim_l_clavicale", translation=((0.0271,1.4943,0.0394)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_acromion", DEF="hanim_l_acromion", translation=((0.2032,1.476,-0.049)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_axilla_ant", DEF="hanim_l_axilla_ant", translation=((0.1777,1.4065,-0.0075)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_axilla_post", DEF="hanim_l_axilla_post", translation=((0.1706,1.4072,-0.0875)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="l_acromioclavicular", DEF="hanim_l_acromioclavicular", center=((0.0962,1.4269,-0.0424)), skinCoordIndex=[79], skinCoordWeight=[float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_scapula", DEF="hanim_l_scapula", children=[
Transform(translation=((0.0962,1.4269,-0.0424)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0962,1.4269,-0.0424),(0.2029,1.4376,-0.0387)])))]),
HAnimJoint(name="l_shoulder", DEF="hanim_l_shoulder", center=((0.2029,1.4376,-0.0387)), skinCoordIndex=[41,42,44,80,102,103,104,105], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_upperarm", DEF="hanim_l_upperarm", children=[
Transform(translation=((0.2029,1.4376,-0.0387)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.2029,1.4376,-0.0387),(0.2014,1.1357,-0.0682)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.2029,1.4376,-0.0387),(0.228,1.1482,-0.11)]))),
HAnimSite(name="l_humeral_lateral_epicn", DEF="hanim_l_humeral_lateral_epicn", translation=((0.228,1.1482,-0.11)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="l_elbow", DEF="hanim_l_elbow", center=((0.2014,1.1357,-0.0682)), skinCoordIndex=[45,46,47,109,110,111,112,113,115,116,117,118], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_forearm", DEF="hanim_l_forearm", children=[
Transform(translation=((0.2014,1.1357,-0.0682)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.2014,1.1357,-0.0682),(0.1984,0.8663,-0.0583)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1,0,4,-1], 
coord=
Coordinate(point=[(0.2014,1.1357,-0.0682),(0.1901,0.8645,-0.0415),(0.1962,1.1375,-0.1123),(0.1735,1.1272,-0.1113),(0.2182,1.1212,-0.1167)]))),
HAnimSite(name="l_radial_styloid", DEF="hanim_l_radial_styloid", translation=((0.1901,0.8645,-0.0415)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_olecranon", DEF="hanim_l_olecranon", translation=((0.1962,1.1375,-0.1123)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_humeral_medial_epicn", DEF="hanim_l_humeral_medial_epicn", translation=((0.1735,1.1272,-0.1113)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_radiale", DEF="hanim_l_radiale", translation=((0.2182,1.1212,-0.1167)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="l_wrist", DEF="hanim_l_wrist", center=((0.1984,0.8663,-0.0583)), skinCoordIndex=[119,120,121,122,123,124,125,126], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_hand", DEF="hanim_l_hand", children=[
Transform(translation=((0.1984,0.8663,-0.0583)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1], 
coord=
Coordinate(point=[(0.1984,0.8663,-0.0583),(0.1924,0.8472,-0.0534),(0.1983,0.8024,-0.028),(0.1987,0.8029,-0.053),(0.1956,0.8019,-0.0794),(0.1925,0.8066,-0.1036)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1], 
coord=
Coordinate(point=[(0.1984,0.8663,-0.0583),(0.2009,0.8139,-0.0237),(0.2142,0.8529,-0.0648),(0.1929,0.786,-0.1122)]))),
HAnimSite(name="l_metacarpal_pha2", DEF="hanim_l_metacarpal_pha2", translation=((0.2009,0.8139,-0.0237)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_ulnar_styloid", DEF="hanim_l_ulnar_styloid", translation=((0.2142,0.8529,-0.0648)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_metacarpal_pha5", DEF="hanim_l_metacarpal_pha5", translation=((0.1929,0.786,-0.1122)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="l_thumb1", DEF="hanim_l_thumb1", center=((0.1924,0.8472,-0.0534)), skinCoordIndex=[127,128], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_thumb_metacarpal", DEF="hanim_l_thumb_metacarpal", children=[
Transform(translation=((0.1924,0.8472,-0.0534)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1924,0.8472,-0.0534),(0.1951,0.8226,0.0246)])))]),
HAnimJoint(name="l_thumb2", DEF="hanim_l_thumb2", center=((0.1951,0.8226,0.0246)), skinCoordIndex=[138,139,140,141,142,143], skinCoordWeight=[float(0.5),float(0.5),float(0.5),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_thumb_proximal", DEF="hanim_l_thumb_proximal", children=[
Transform(translation=((0.1951,0.8226,0.0246)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1951,0.8226,0.0246),(0.1955,0.8159,0.0464)])))]),
HAnimJoint(name="l_thumb3", DEF="hanim_l_thumb3", center=((0.1955,0.8159,0.0464)), skinCoordIndex=[144,145,146,147,148,149,150,151,152], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_thumb_distal", DEF="hanim_l_thumb_distal", children=[
Transform(translation=((0.1955,0.8159,0.0464)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1955,0.8159,0.0464),(0.1982,0.8061,0.0759)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1955,0.8159,0.0464),(0.1982,0.8061,0.0759)]))),
HAnimSite(name="l_thumb_distal_tip", DEF="hanim_l_thumb_distal_tip", translation=((0.1982,0.8061,0.0759)), children=[
Shape(USE="sitebox")])])])])]),
HAnimJoint(name="l_index0", DEF="hanim_l_index0", center=((0.1983,0.8024,-0.028)), skinCoordIndex=[129,130], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_index_metacarpal", DEF="hanim_l_index_metacarpal", children=[
Transform(translation=((0.1983,0.8024,-0.028)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1983,0.8024,-0.028),(0.1983,0.7815,-0.028)])))]),
HAnimJoint(name="l_index1", DEF="hanim_l_index1", center=((0.1983,0.7815,-0.028)), skinCoordIndex=[138,139,140,153,154,155,163], skinCoordWeight=[float(0.5),float(0.5),float(0.5),float(1),float(1),float(1),float(0.5)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_index_proximal", DEF="hanim_l_index_proximal", children=[
Transform(translation=((0.1983,0.7815,-0.028)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1983,0.7815,-0.028),(0.2017,0.7363,-0.0248)])))]),
HAnimJoint(name="l_index2", DEF="hanim_l_index2", center=((0.2017,0.7363,-0.0248)), skinCoordIndex=[166,167,168,169], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_index_middle", DEF="hanim_l_index_middle", children=[
Transform(translation=((0.2017,0.7363,-0.0248)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.2017,0.7363,-0.0248),(0.2028,0.7139,-0.0236)])))]),
HAnimJoint(name="l_index3", DEF="hanim_l_index3", center=((0.2028,0.7139,-0.0236)), skinCoordIndex=[170,171,172,173,174,175,176,177,178], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_index_distal", DEF="hanim_l_index_distal", children=[
Transform(translation=((0.2028,0.7139,-0.0236)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.2028,0.7139,-0.0236),(0.2089,0.6858,-0.0245)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1], 
coord=
Coordinate(point=[(0.2028,0.7139,-0.0236),(0.2089,0.6858,-0.0245),(0.2056,0.6743,-0.0482)]))),
HAnimSite(name="l_index_distal_tip", DEF="hanim_l_index_distal_tip", translation=((0.2089,0.6858,-0.0245)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_dactylion", DEF="hanim_l_dactylion", translation=((0.2056,0.6743,-0.0482)), children=[
Shape(USE="sitebox")])])])])])]),
HAnimJoint(name="l_middle0", DEF="hanim_l_middle0", center=((0.1987,0.8029,-0.053)), skinCoordIndex=[131,132], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_middle_metacarpal", DEF="hanim_l_middle_metacarpal", children=[
Transform(translation=((0.1987,0.8029,-0.053)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1987,0.8029,-0.053),(0.1987,0.7818,-0.053)])))]),
HAnimJoint(name="l_middle1", DEF="hanim_l_middle1", center=((0.1987,0.7818,-0.053)), skinCoordIndex=[156,157,163,164], skinCoordWeight=[float(1),float(1),float(0.5),float(0.5)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_middle_proximal", DEF="hanim_l_middle_proximal", children=[
Transform(translation=((0.1987,0.7818,-0.053)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1987,0.7818,-0.053),(0.2013,0.7273,-0.0503)])))]),
HAnimJoint(name="l_middle2", DEF="hanim_l_middle2", center=((0.2013,0.7273,-0.0503)), skinCoordIndex=[179,180,181,182], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_middle_middle", DEF="hanim_l_middle_middle", children=[
Transform(translation=((0.2013,0.7273,-0.0503)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.2013,0.7273,-0.0503),(0.2026,0.7011,-0.0494)])))]),
HAnimJoint(name="l_middle3", DEF="hanim_l_middle3", center=((0.2026,0.7011,-0.0494)), skinCoordIndex=[183,184,185,186,187,188,189,190,191], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_middle_distal", DEF="hanim_l_middle_distal", children=[
Transform(translation=((0.2026,0.7011,-0.0494)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.2026,0.7011,-0.0494),(0.208,0.6731,-0.0491)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.2026,0.7011,-0.0494),(0.208,0.6731,-0.0491)]))),
HAnimSite(name="l_middle_distal_tip", DEF="hanim_l_middle_distal_tip", translation=((0.208,0.6731,-0.0491)), children=[
Shape(USE="sitebox")])])])])])]),
HAnimJoint(name="l_ring0", DEF="hanim_l_ring0", center=((0.1956,0.8019,-0.0794)), skinCoordIndex=[133,134], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_ring_metacarpal", DEF="hanim_l_ring_metacarpal", children=[
Transform(translation=((0.1956,0.8019,-0.0794)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1956,0.8019,-0.0794),(0.1956,0.7815,-0.0794)])))]),
HAnimJoint(name="l_ring1", DEF="hanim_l_ring1", center=((0.1956,0.7815,-0.0794)), skinCoordIndex=[158,159,164,165], skinCoordWeight=[float(1),float(1),float(0.5),float(0.5)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_ring_proximal", DEF="hanim_l_ring_proximal", children=[
Transform(translation=((0.1956,0.7815,-0.0794)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1956,0.7815,-0.0794),(0.1973,0.7287,-0.0777)])))]),
HAnimJoint(name="l_ring2", DEF="hanim_l_ring2", center=((0.1973,0.7287,-0.0777)), skinCoordIndex=[192,193,194,195], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_ring_middle", DEF="hanim_l_ring_middle", children=[
Transform(translation=((0.1973,0.7287,-0.0777)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1973,0.7287,-0.0777),(0.1983,0.7045,-0.0767)])))]),
HAnimJoint(name="l_ring3", DEF="hanim_l_ring3", center=((0.1983,0.7045,-0.0767)), skinCoordIndex=[196,197,198,199,200,201,202,203,204], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_ring_distal", DEF="hanim_l_ring_distal", children=[
Transform(translation=((0.1983,0.7045,-0.0767)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1983,0.7045,-0.0767),(0.2035,0.675,-0.0756)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1983,0.7045,-0.0767),(0.2035,0.675,-0.0756)]))),
HAnimSite(name="l_ring_distal_tip", DEF="hanim_l_ring_distal_tip", translation=((0.2035,0.675,-0.0756)), children=[
Shape(USE="sitebox")])])])])])]),
HAnimJoint(name="l_pinky0", DEF="hanim_l_pinky0", center=((0.1925,0.8066,-0.1036)), skinCoordIndex=[135,136,137,165], skinCoordWeight=[float(1),float(1),float(1),float(0.5)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_pinky_metacarpal", DEF="hanim_l_pinky_metacarpal", children=[
Transform(translation=((0.1925,0.8066,-0.1036)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1925,0.8066,-0.1036),(0.1925,0.7866,-0.1036)])))]),
HAnimJoint(name="l_pinky1", DEF="hanim_l_pinky1", center=((0.1925,0.7866,-0.1036)), skinCoordIndex=[160,161,162], skinCoordWeight=[float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_pinky_proximal", DEF="hanim_l_pinky_proximal", children=[
Transform(translation=((0.1925,0.7866,-0.1036)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1925,0.7866,-0.1036),(0.1938,0.7452,-0.1024)])))]),
HAnimJoint(name="l_pinky2", DEF="hanim_l_pinky2", center=((0.1938,0.7452,-0.1024)), skinCoordIndex=[205,206,207,208], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_pinky_middle", DEF="hanim_l_pinky_middle", children=[
Transform(translation=((0.1938,0.7452,-0.1024)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1938,0.7452,-0.1024),(0.1948,0.7277,-0.1017)])))]),
HAnimJoint(name="l_pinky3", DEF="hanim_l_pinky3", center=((0.1948,0.7277,-0.1017)), skinCoordIndex=[209,210,211,212,213,214,215,216,217], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_pinky_distal", DEF="hanim_l_pinky_distal", children=[
Transform(translation=((0.1948,0.7277,-0.1017)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1948,0.7277,-0.1017),(0.2014,0.7009,-0.1012)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1948,0.7277,-0.1017),(0.2014,0.7009,-0.1012)]))),
HAnimSite(name="l_pinky_distal_tip", DEF="hanim_l_pinky_distal_tip", translation=((0.2014,0.7009,-0.1012)), children=[
Shape(USE="sitebox")])])])])])])])])])])]),
HAnimJoint(name="r_sternoclavicular", DEF="hanim_r_sternoclavicular", center=((-0.0694,1.46,-0.033)), skinCoordIndex=[10], skinCoordWeight=[float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_clavicle", DEF="hanim_r_clavicle", children=[
Transform(translation=((-0.0694,1.46,-0.033)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.0694,1.46,-0.033),(-0.0836,1.4281,-0.0401)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1,0,4,-1], 
coord=
Coordinate(point=[(-0.0694,1.46,-0.033),(-0.0115,1.4943,0.04),(-0.1905,1.4791,-0.0431),(-0.1626,1.4072,-0.0031),(-0.1603,1.4098,-0.0826)]))),
HAnimSite(name="r_clavicale", DEF="hanim_r_clavicale", translation=((-0.0115,1.4943,0.04)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_acromion", DEF="hanim_r_acromion", translation=((-0.1905,1.4791,-0.0431)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_axilla_ant", DEF="hanim_r_axilla_ant", translation=((-0.1626,1.4072,-0.0031)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_axilla_post", DEF="hanim_r_axilla_post", translation=((-0.1603,1.4098,-0.0826)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="r_acromioclavicular", DEF="hanim_r_acromioclavicular", center=((-0.0836,1.4281,-0.0401)), skinCoordIndex=[77,29], skinCoordWeight=[float(1),float(0.9)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_scapula", DEF="hanim_r_scapula", children=[
Transform(translation=((-0.0836,1.4281,-0.0401)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.0836,1.4281,-0.0401),(-0.1907,1.4407,-0.0325)])))]),
HAnimJoint(name="r_shoulder", DEF="hanim_r_shoulder", center=((-0.1907,1.4407,-0.0325)), skinCoordIndex=[29,30,32,78,218,219,220,221,86,88], skinCoordWeight=[float(0.1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(0.3),float(0.2)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_upperarm", DEF="hanim_r_upperarm", children=[
Transform(translation=((-0.1907,1.4407,-0.0325)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1907,1.4407,-0.0325),(-0.1949,1.1388,-0.062)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1907,1.4407,-0.0325),(-0.2224,1.1517,-0.1033)]))),
HAnimSite(name="r_humeral_lateral_epicn", DEF="hanim_r_humeral_lateral_epicn", translation=((-0.2224,1.1517,-0.1033)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="r_elbow", DEF="hanim_r_elbow", center=((-0.1949,1.1388,-0.062)), skinCoordIndex=[33,34,35,225,226,227,228,229,231,232,233,234], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_forearm", DEF="hanim_r_forearm", children=[
Transform(translation=((-0.1949,1.1388,-0.062)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1949,1.1388,-0.062),(-0.1959,0.8694,-0.0521)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1,0,4,-1], 
coord=
Coordinate(point=[(-0.1949,1.1388,-0.062),(-0.1884,0.8676,-0.036),(-0.1907,1.1405,-0.1065),(-0.168,1.1298,-0.1062),(-0.213,1.1305,-0.1091)]))),
HAnimSite(name="r_radial_styloid", DEF="hanim_r_radial_styloid", translation=((-0.1884,0.8676,-0.036)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_olecranon", DEF="hanim_r_olecranon", translation=((-0.1907,1.1405,-0.1065)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_humeral_medial_epicn", DEF="hanim_r_humeral_medial_epicn", translation=((-0.168,1.1298,-0.1062)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_radiale", DEF="hanim_r_radiale", translation=((-0.213,1.1305,-0.1091)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="r_wrist", DEF="hanim_r_wrist", center=((-0.1959,0.8694,-0.0521)), skinCoordIndex=[235,236,237,238,239,240,241,242], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_hand", DEF="hanim_r_hand", children=[
Transform(translation=((-0.1959,0.8694,-0.0521)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1], 
coord=
Coordinate(point=[(-0.1959,0.8694,-0.0521),(-0.1899,0.8502,-0.0473),(-0.1961,0.8055,-0.0218),(-0.1972,0.806,-0.0468),(-0.1951,0.8049,-0.0732),(-0.1926,0.8096,-0.0975)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1], 
coord=
Coordinate(point=[(-0.1959,0.8694,-0.0521),(-0.1977,0.8169,-0.0177),(-0.2117,0.8562,-0.0584),(-0.1929,0.789,-0.1064)]))),
HAnimSite(name="r_metacarpal_pha2", DEF="hanim_r_metacarpal_pha2", translation=((-0.1977,0.8169,-0.0177)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_ulnar_styloid", DEF="hanim_r_ulnar_styloid", translation=((-0.2117,0.8562,-0.0584)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_metacarpal_pha5", DEF="hanim_r_metacarpal_pha5", translation=((-0.1929,0.789,-0.1064)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="r_thumb1", DEF="hanim_r_thumb1", center=((-0.1899,0.8502,-0.0473)), skinCoordIndex=[243,244], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_thumb_metacarpal", DEF="hanim_r_thumb_metacarpal", children=[
Transform(translation=((-0.1899,0.8502,-0.0473)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1899,0.8502,-0.0473),(-0.1874,0.8256,0.0306)])))]),
HAnimJoint(name="r_thumb2", DEF="hanim_r_thumb2", center=((-0.1874,0.8256,0.0306)), skinCoordIndex=[254,255,256,257,258,259], skinCoordWeight=[float(0.5),float(0.5),float(0.5),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_thumb_proximal", DEF="hanim_r_thumb_proximal", children=[
Transform(translation=((-0.1874,0.8256,0.0306)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1874,0.8256,0.0306),(-0.1864,0.819,0.0506)])))]),
HAnimJoint(name="r_thumb3", DEF="hanim_r_thumb3", center=((-0.1864,0.819,0.0506)), skinCoordIndex=[260,261,262,263,264,265,266,267,268], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_thumb_distal", DEF="hanim_r_thumb_distal", children=[
Transform(translation=((-0.1864,0.819,0.0506)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1864,0.819,0.0506),(-0.1869,0.809,0.082)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1864,0.819,0.0506),(-0.1869,0.809,0.082)]))),
HAnimSite(name="r_thumb_distal_tip", DEF="hanim_r_thumb_distal_tip", translation=((-0.1869,0.809,0.082)), children=[
Shape(USE="sitebox")])])])])]),
HAnimJoint(name="r_index0", DEF="hanim_r_index0", center=((-0.1961,0.8055,-0.0218)), skinCoordIndex=[245,246], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_index_metacarpal", DEF="hanim_r_index_metacarpal", children=[
Transform(translation=((-0.1961,0.8055,-0.0218)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1961,0.8055,-0.0218),(-0.1961,0.7846,-0.0218)])))]),
HAnimJoint(name="r_index1", DEF="hanim_r_index1", center=((-0.1961,0.7846,-0.0218)), skinCoordIndex=[254,255,256,269,270,271,279], skinCoordWeight=[float(0.5),float(0.5),float(0.5),float(1),float(1),float(1),float(0.5)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_index_proximal", DEF="hanim_r_index_proximal", children=[
Transform(translation=((-0.1961,0.7846,-0.0218)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1961,0.7846,-0.0218),(-0.1945,0.7169,-0.0173)])))]),
HAnimJoint(name="r_index2", DEF="hanim_r_index2", center=((-0.1954,0.7393,-0.0185)), skinCoordIndex=[282,283,284,285], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_index_middle", DEF="hanim_r_index_middle", children=[
Transform(translation=((-0.1954,0.7393,-0.0185)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1954,0.7393,-0.0185),(-0.1945,0.7169,-0.0173)])))]),
HAnimJoint(name="r_index3", DEF="hanim_r_index3", center=((-0.1945,0.7169,-0.0173)), skinCoordIndex=[286,287,288,289,290,291,292,293,294], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_index_distal", DEF="hanim_r_index_distal", children=[
Transform(translation=((-0.1945,0.7169,-0.0173)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1945,0.7169,-0.0173),(-0.198,0.6883,-0.018)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1], 
coord=
Coordinate(point=[(-0.1945,0.7169,-0.0173),(-0.198,0.6883,-0.018),(-0.1941,0.6772,-0.0423)]))),
HAnimSite(name="r_index_distal_tip", DEF="hanim_r_index_distal_tip", translation=((-0.198,0.6883,-0.018)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_dactylion", DEF="hanim_r_dactylion", translation=((-0.1941,0.6772,-0.0423)), children=[
Shape(USE="sitebox")])])])])])]),
HAnimJoint(name="r_middle0", DEF="hanim_r_middle0", center=((-0.1972,0.806,-0.0468)), skinCoordIndex=[247,248], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_middle_metacarpal", DEF="hanim_r_middle_metacarpal", children=[
Transform(translation=((-0.1972,0.806,-0.0468)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1972,0.806,-0.0468),(-0.1972,0.7849,-0.0468)])))]),
HAnimJoint(name="r_middle1", DEF="hanim_r_middle1", center=((-0.1972,0.7849,-0.0468)), skinCoordIndex=[272,273,279,280], skinCoordWeight=[float(1),float(1),float(0.5),float(0.5)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_middle_proximal", DEF="hanim_r_middle_proximal", children=[
Transform(translation=((-0.1972,0.7849,-0.0468)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1972,0.7849,-0.0468),(-0.195,0.7304,-0.0441)])))]),
HAnimJoint(name="r_middle2", DEF="hanim_r_middle2", center=((-0.195,0.7304,-0.0441)), skinCoordIndex=[295,296,297,298], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_middle_middle", DEF="hanim_r_middle_middle", children=[
Transform(translation=((-0.195,0.7304,-0.0441)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.195,0.7304,-0.0441),(-0.1939,0.7042,-0.0432)])))]),
HAnimJoint(name="r_middle3", DEF="hanim_r_middle3", center=((-0.1939,0.7042,-0.0432)), skinCoordIndex=[299,300,301,302,303,304,305,306,307], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_middle_distal", DEF="hanim_r_middle_distal", children=[
Transform(translation=((-0.1939,0.7042,-0.0432)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1939,0.7042,-0.0432),(-0.1969,0.6758,-0.0427)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1939,0.7042,-0.0432),(-0.1969,0.6758,-0.0427)]))),
HAnimSite(name="r_middle_distal_tip", DEF="hanim_r_middle_distal_tip", translation=((-0.1969,0.6758,-0.0427)), children=[
Shape(USE="sitebox")])])])])])]),
HAnimJoint(name="r_ring0", DEF="hanim_r_ring0", center=((-0.1951,0.8049,-0.0732)), skinCoordIndex=[249,250], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_ring_metacarpal", DEF="hanim_r_ring_metacarpal", children=[
Transform(translation=((-0.1951,0.8049,-0.0732)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1951,0.8049,-0.0732),(-0.1951,0.7845,-0.0732)])))]),
HAnimJoint(name="r_ring1", DEF="hanim_r_ring1", center=((-0.1951,0.7845,-0.0732)), skinCoordIndex=[274,275,280,281], skinCoordWeight=[float(1),float(1),float(0.5),float(0.5)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_ring_proximal", DEF="hanim_r_ring_proximal", children=[
Transform(translation=((-0.1951,0.7845,-0.0732)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1951,0.7845,-0.0732),(-0.192,0.7318,-0.0716)])))]),
HAnimJoint(name="r_ring2", DEF="hanim_r_ring2", center=((-0.192,0.7318,-0.0716)), skinCoordIndex=[308,309,310,311], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_ring_middle", DEF="hanim_r_ring_middle", children=[
Transform(translation=((-0.192,0.7318,-0.0716)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.192,0.7318,-0.0716),(-0.1908,0.7077,-0.07063)])))]),
HAnimJoint(name="r_ring3", DEF="hanim_r_ring3", center=((-0.1908,0.7077,-0.0706)), skinCoordIndex=[312,313,314,315,316,317,318,319,320], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_ring_distal", DEF="hanim_r_ring_distal", children=[
Transform(translation=((-0.1908,0.7077,-0.0706)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1908,0.7077,-0.0706),(-0.1934,0.6778,-0.0693)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1908,0.7077,-0.0706),(-0.1934,0.6778,-0.0693)]))),
HAnimSite(name="r_ring_distal_tip", DEF="hanim_r_ring_distal_tip", translation=((-0.1934,0.6778,-0.0693)), children=[
Shape(USE="sitebox")])])])])])]),
HAnimJoint(name="r_pinky0", DEF="hanim_r_pinky0", center=((-0.1926,0.8096,-0.0975)), skinCoordIndex=[251,252,253,281], skinCoordWeight=[float(1),float(1),float(1),float(0.5)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_pinky_metacarpal", DEF="hanim_r_pinky_metacarpal", children=[
Transform(translation=((-0.1926,0.8096,-0.0975)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1926,0.8096,-0.0975),(-0.1926,0.7896,-0.0975)])))]),
HAnimJoint(name="r_pinky1", DEF="hanim_r_pinky1", center=((-0.1926,0.7896,-0.0975)), skinCoordIndex=[276,277,278], skinCoordWeight=[float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_pinky_proximal", DEF="hanim_r_pinky_proximal", children=[
Transform(translation=((-0.1926,0.7896,-0.0975)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1926,0.7896,-0.0975),(-0.1902,0.7483,-0.0963)])))]),
HAnimJoint(name="r_pinky2", DEF="hanim_r_pinky2", center=((-0.1902,0.7483,-0.0963)), skinCoordIndex=[321,322,323,324], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_pinky_middle", DEF="hanim_r_pinky_middle", children=[
Transform(translation=((-0.1902,0.7483,-0.0963)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1902,0.7483,-0.0963),(-0.1908,0.754,-0.096)])))]),
HAnimJoint(name="r_pinky3", DEF="hanim_r_pinky3", center=((-0.1908,0.754,-0.096)), skinCoordIndex=[325,326,327,328,329,330,331,332,333], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="r_pinky_distal", DEF="hanim_r_pinky_distal", children=[
Transform(translation=((-0.1908,0.754,-0.096)), children=[
Shape(USE="jointbox")]),
Shape(
appearance=
Appearance(USE="SegmentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1908,0.754,-0.096),(-0.1938,0.7035,-0.0949)]))),
Shape(
appearance=
Appearance(USE="SiteParentLine"), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.1908,0.754,-0.096),(-0.1938,0.7035,-0.0949)]))),
HAnimSite(name="r_pinky_distal_tip", DEF="hanim_r_pinky_distal_tip", translation=((-0.1938,0.7035,-0.0949)), children=[
Shape(USE="sitebox")])])])])])])])])])])])])])])])])])])])])])])])])])])])])])], 
skinCoord=(
Coordinate(DEF="JoeSkinCoord", point=[(0,1.77,0),(0,1.665,0.09),(-0.033,1.62,0.087),(0.033,1.62,0.087),(0,1.55,0.097),(-0.077,1.64,-0.01),(-0.0527,1.58,0.015),(0.077,1.64,-0.01),(0.0527,1.58,0.015),(0,1.625,-0.0925),(-0.03,1.46,0.035),(0,1.44,0.03),(0.03,1.46,0.035),(-0.1135,1.318,0.095),(0.1135,1.318,0.095),(0,1.25,0.113),(-0.087,1.19,0.09),(-0.0935,1.03,0.075),(0.087,1.19,0.09),(0.0935,1.03,0.075),(-0.1425,1.065,0.0033),(-0.15,0.9,-0.01),(0.1425,1.065,0.0033),(0.15,0.9,-0.01),(0,1.53,-0.084),(0.0049,1.1908,-0.1113),(-0.0773,1.019,-0.12),(0.0773,1.019,-0.12),(0.005,1.0915,-0.1091),(-0.178,1.4825,-0.0625),(-0.17,1.38,0.007),(-0.1884,0.8676,-0.036),(-0.16,1.38,-0.127),(-0.2,1.1388,-0.08),(-0.244,1.1388,-0.04),(-0.165,1.1388,-0.04),(-0.23,1.133,-0.055),(-0.1977,0.8169,-0.0177),(-0.1941,0.6772,-0.0423),(-0.2117,0.8562,-0.0584),(-0.1929,0.789,-0.1064),(0.175,1.4825,-0.06),(0.17,1.38,0.007),(0.1901,0.8645,-0.0415),(0.16,1.38,-0.125),(0.2,1.1388,-0.08),(0.165,1.1388,-0.04),(0.244,1.1388,-0.04),(0.23,1.133,-0.055),(0.2009,0.8139,-0.0237),(0.2056,0.6743,-0.0482),(0.2142,0.8529,-0.0648),(0.1929,0.786,-0.1122),(-0.1,0.4913,-0.03),(-0.17,0.466,0),(-0.05,0.466,0),(-0.165,0.01,0.12),(-0.15,0.07,0),(-0.085,0.086,0.0125),(-0.09,0.056,0.0125),(-0.115,0.02,0.122),(-0.115,0.04,-0.055),(-0.11,0.011,0.19),(0.0993,0.4881,-0.0309),(0.17,0.466,0),(0.05,0.4867,0),(0.165,0.01,0.12),(0.15,0.07,0),(0.085,0.086,0.0125),(0.09,0.056,0.0125),(0.115,0.02,0.122),(0.115,0.04,-0.055),(0.11,0.011,0.19),(0.0034,0.8266,0.0257),(-0.0646,1.5149,-0.038),(0.0646,1.5149,-0.038),(0,1.07225,0.09),(-0.11,1.427,-0.1375),(-0.235,1.42,-0.0625),(0.11,1.427,-0.1375),(0.235,1.42,-0.0625),(0,1.41,-0.145),(0,0.925,0.08),(-0.087,1.19,-0.09),(0.087,1.19,-0.09),(0.172,1.32,-0.03),(-0.172,1.32,-0.03),(0.15,1.23,-0.015),(-0.15,1.23,-0.015),(0.079,0.92,-0.14),(0.1,0.9,0.077),(-0.079,0.92,-0.14),(-0.1,0.9,0.075),(0,0.78,0),(0.171,0.65,0),(0.02,0.65,0),(0.1,0.65,-0.08),(0.1,0.65,0.07),(-0.171,0.65,0),(-0.02,0.65,0),(-0.1,0.65,-0.08),(-0.1,0.65,0.07),(0.25,1.27,-0.04),(0.17,1.27,-0.04),(0.2,1.27,-0.09),(0.2,1.27,0.02),(0.244,1.1388,-0.04),(0.165,1.1388,-0.04),(0.2,1.1388,-0.08),(0.2,1.1388,-0.013),(0.225,1,-0.01),(0.225,1,-0.07),(0.185,1,-0.01),(0.185,1,-0.07),(0.2,1.1388,-0.04),(0.225,0.92,-0.04),(0.175,0.92,-0.04),(0.2,0.92,-0.065),(0.2,0.92,-0.015),(0.225,0.89,-0.04),(0.175,0.89,-0.04),(0.2,0.89,-0.065),(0.2,0.89,-0.015),(0.218,0.86,-0.04),(0.184,0.86,-0.04),(0.2,0.87,-0.07),(0.2,0.87,0),(0.21,0.85,0),(0.1854,0.85,0),(0.212,0.84,-0.015),(0.183,0.84,-0.015),(0.213,0.835,-0.04),(0.19,0.835,-0.04),(0.211,0.835,-0.065),(0.192,0.835,-0.065),(0.208,0.84,-0.085),(0.19,0.84,-0.085),(0.2,0.84,-0.095),(0.215,0.82,0),(0.193,0.815,0.005),(0.198,0.8,0.012),(0.21,0.82,0.03),(0.19,0.82,0.03),(0.2,0.835,0.039),(0.212,0.8,0.05),(0.188,0.8,0.05),(0.2,0.807,0.057),(0.2,0.793,0.035),(0.2,0.774,0.076),(0.212,0.78,0.07),(0.188,0.78,0.07),(0.2,0.785,0.075),(0.2,0.77,0.062),(0.215,0.793,-0.015),(0.187,0.793,-0.015),(0.2,0.793,-0.005),(0.215,0.788,-0.04),(0.187,0.788,-0.04),(0.215,0.793,-0.065),(0.187,0.793,-0.065),(0.21,0.79,-0.085),(0.19,0.79,-0.085),(0.2,0.79,-0.095),(0.19,0.77,-0.0275),(0.19,0.77,-0.0525),(0.19,0.78,-0.0775),(0.212,0.745,-0.015),(0.188,0.745,-0.02),(0.2,0.745,-0.0255),(0.2,0.745,-0.0045),(0.211,0.72,-0.015),(0.189,0.72,-0.015),(0.2,0.72,-0.0252),(0.2,0.72,-0.0048),(0.21,0.695,-0.015),(0.19,0.695,-0.015),(0.2,0.695,-0.025),(0.2,0.695,-0.005),(0.2,0.685,-0.015),(0.215,0.74,-0.04),(0.185,0.74,-0.04),(0.2,0.74,-0.055),(0.2,0.74,-0.025),(0.21,0.7142,-0.04),(0.19,0.7142,-0.04),(0.2,0.7142,-0.053),(0.2,0.7142,-0.027),(0.21,0.68,-0.04),(0.19,0.68,-0.04),(0.2,0.68,-0.05),(0.2,0.68,-0.03),(0.2,0.67,-0.04),(0.212,0.74,-0.065),(0.188,0.74,-0.065),(0.2,0.74,-0.0756),(0.2,0.74,-0.0542),(0.21,0.7177,-0.065),(0.19,0.7177,-0.065),(0.2,0.7177,-0.0751),(0.2,0.7177,-0.0549),(0.21,0.695,-0.065),(0.19,0.695,-0.065),(0.2,0.695,-0.075),(0.2,0.695,-0.055),(0.2,0.685,-0.065),(0.211,0.755,-0.085),(0.189,0.755,-0.085),(0.2,0.755,-0.0952),(0.2,0.755,-0.0748),(0.21,0.735,-0.085),(0.19,0.735,-0.085),(0.2,0.735,-0.0951),(0.2,0.735,-0.0749),(0.21,0.72,-0.085),(0.19,0.72,-0.085),(0.2,0.72,-0.095),(0.2,0.72,-0.075),(0.2,0.71,-0.085),(-0.23,1.23,-0.04),(-0.16,1.23,-0.04),(-0.2,1.235,-0.105),(-0.2,1.255,0.02),(-0.244,1.1388,-0.04),(-0.165,1.1388,-0.04),(-0.2,1.1388,-0.08),(-0.2,1.1388,0.013),(-0.225,1,-0.01),(-0.225,1,-0.07),(-0.185,1,-0.01),(-0.185,1,-0.07),(-0.2,1.1388,-0.04),(-0.225,0.92,-0.04),(-0.175,0.92,-0.04),(-0.2,0.92,-0.065),(-0.2,0.92,-0.015),(-0.225,0.89,-0.04),(-0.175,0.89,-0.04),(-0.2,0.89,-0.065),(-0.2,0.89,-0.015),(-0.218,0.86,-0.04),(-0.184,0.86,-0.04),(-0.2,0.87,-0.07),(-0.2,0.87,0),(-0.21,0.85,0),(-0.1854,0.85,0),(-0.212,0.84,-0.015),(-0.183,0.84,-0.015),(-0.213,0.835,-0.04),(-0.19,0.835,-0.04),(-0.211,0.835,-0.065),(-0.192,0.835,-0.065),(-0.208,0.84,-0.085),(-0.19,0.84,-0.085),(-0.2,0.84,-0.095),(-0.215,0.82,0),(-0.193,0.815,0.005),(-0.198,0.8,0.012),(-0.21,0.82,0.03),(-0.19,0.82,0.03),(-0.2,0.835,0.039),(-0.212,0.8,0.05),(-0.188,0.8,0.05),(-0.2,0.807,0.057),(-0.2,0.793,0.035),(-0.2,0.774,0.076),(-0.212,0.78,0.07),(-0.188,0.78,0.07),(-0.2,0.785,0.075),(-0.2,0.77,0.062),(-0.215,0.793,-0.015),(-0.187,0.793,-0.015),(-0.2,0.793,-0.005),(-0.215,0.788,-0.04),(-0.187,0.788,-0.04),(-0.215,0.793,-0.065),(-0.187,0.793,-0.065),(-0.21,0.79,-0.085),(-0.19,0.79,-0.085),(-0.2,0.79,-0.095),(-0.19,0.77,-0.0275),(-0.19,0.77,-0.0525),(-0.19,0.78,-0.0775),(-0.212,0.745,-0.015),(-0.188,0.745,-0.02),(-0.2,0.745,-0.0255),(-0.2,0.745,-0.0045),(-0.211,0.72,-0.015),(-0.189,0.72,-0.015),(-0.2,0.72,-0.0252),(-0.2,0.72,-0.0048),(-0.21,0.695,-0.015),(-0.19,0.695,-0.015),(-0.2,0.695,-0.025),(-0.2,0.695,-0.005),(-0.2,0.685,-0.015),(-0.215,0.74,-0.04),(-0.185,0.74,-0.04),(-0.2,0.74,-0.055),(-0.2,0.74,-0.025),(-0.21,0.7142,-0.04),(-0.19,0.7142,-0.04),(-0.2,0.7142,-0.053),(-0.2,0.7142,-0.027),(-0.21,0.68,-0.04),(-0.19,0.68,-0.04),(-0.2,0.68,-0.05),(-0.2,0.68,-0.03),(-0.2,0.67,-0.04),(-0.212,0.74,-0.065),(-0.188,0.74,-0.065),(-0.2,0.74,-0.0756),(-0.2,0.74,-0.0542),(-0.21,0.7177,-0.065),(-0.19,0.7177,-0.065),(-0.2,0.7177,-0.0751),(-0.2,0.7177,-0.0549),(-0.21,0.695,-0.065),(-0.19,0.695,-0.065),(-0.2,0.695,-0.075),(-0.2,0.695,-0.055),(-0.2,0.685,-0.065),(-0.211,0.755,-0.085),(-0.189,0.755,-0.085),(-0.2,0.755,-0.0952),(-0.2,0.755,-0.0748),(-0.21,0.735,-0.085),(-0.19,0.735,-0.085),(-0.2,0.735,-0.0951),(-0.2,0.735,-0.0749),(-0.21,0.72,-0.085),(-0.19,0.72,-0.085),(-0.2,0.72,-0.095),(-0.2,0.72,-0.075),(-0.2,0.71,-0.085),(0.115,0.466,0.06),(0.115,0.466,-0.055),(0.15,0.466,0),(0.05,0.466,0),(0.17,0.3,0),(0.06,0.3,0),(0.1,0.3,-0.05),(0.1,0.3,0.05),(0.15,0.07,0),(0.085,0.086,0.0125),(0.115,0.069,-0.045),(0.117,0.0975,0.0615),(0.1375,0.006,-0.03),(0.095,0.006,-0.03),(0.115,0.015,-0.045),(0.115,0.06,0.1),(0.115,0,0.07),(0.165,0,0.07),(0.095,0,0.07),(0.115,0.04,0.13),(0.125,0,0.12),(0.165,0,0.12),(0.087,0,0.122),(0.09,0.012,0.188),(0.11,0.011,0.19),(0.128,0.011,0.185),(0.142,0.011,0.178),(0.154,0.01,0.168),(-0.115,0.466,0.06),(-0.115,0.466,-0.055),(-0.17,0.466,0),(-0.05,0.466,0),(-0.17,0.3,0),(-0.06,0.3,0),(-0.1,0.3,-0.05),(-0.1,0.3,0.05),(-0.15,0.07,0),(-0.085,0.086,0.0125),(-0.115,0.069,-0.045),(-0.117,0.0975,0.0615),(-0.1375,0.006,-0.03),(-0.095,0.006,-0.03),(-0.095,0.006,-0.03),(-0.115,0.06,0.1),(-0.115,0,0.07),(-0.165,0,0.07),(-0.095,0,0.07),(-0.115,0.04,0.13),(-0.125,0,0.12),(-0.165,0,0.12),(-0.087,0,0.122),(-0.09,0.012,0.188),(-0.11,0.011,0.19),(-0.128,0.011,0.185),(-0.142,0.011,0.178),(-0.154,0.01,0.168)])), skin=[
Shape(
appearance=
Appearance(
material=
Material(ambientIntensity=0.9, diffuseColor=((0.5,0,0.5)), specularColor=((1,1,1)), emissiveColor=((0.13,0.55,0.13)), shininess=0.9, transparency=0.4), 
texture=
ImageTexture(url=["cbodytexture28.png"])), 
geometry=
IndexedFaceSet(creaseAngle=3.1, colorPerVertex=False, coordIndex=[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1], 
coord=
Coordinate(USE="JoeSkinCoord")))])]),
Group(DEF="SceneViewpoints", children=[
Viewpoint(DEF="hanim_InclinedView", description="hanim_Inclined View", position=((1.62,1.05,2.06)), orientation=((-0.113,0.993,0.0347,0.671)), centerOfRotation=((0,0.824,0.0277))),
Viewpoint(DEF="hanim_IFrontView_1", description="hanim_Front View", position=((0,0.854,2.57665)), centerOfRotation=((0,0.824,0.0277))),
Viewpoint(DEF="hanim_ISideView_1", description="hanim_Side View", position=((2.5929,0.854,0)), orientation=((0,1,0,1.5708)), centerOfRotation=((0,0.824,0.0277))),
Viewpoint(DEF="hanim_ITopView", description="hanim_Top View", position=((0,3.4495,0)), orientation=((1,0,0,-1.5708)), centerOfRotation=((0,0.824,0.0277))),
Viewpoint(DEF="hanim_IRightHandFront", description="hanim_RightHandFront View", position=((-0.3,0.75,0.45)), centerOfRotation=((-0.1959,0.8694,-0.0521))),
Viewpoint(DEF="hanim_ILeftHandFront", description="hanim_LeftHandFront View", position=((0.3,0.75,0.45)), centerOfRotation=((0.1959,0.8694,-0.0521))),
Viewpoint(DEF="hanim_InclinedView2", description="hanim_Inclined View2", position=((-1.62,1.05,2.06)), orientation=((-0.113,-0.993,0.0347,0.671)), centerOfRotation=((0,0.824,0.0277))),
Viewpoint(DEF="hanim_IFrontView", description="hanim_Front View2", position=((0,0.854,1.575)), centerOfRotation=((0,0.824,0.0277))),
Viewpoint(DEF="hanim_ISideView", description="hanim_Side View2", position=((1.5929,0.854,0)), orientation=((0,1,0,1.5708)), centerOfRotation=((0,0.824,0.0277))),
Viewpoint(DEF="hanim_IHeadFront", description="hanim_HeadFront View", position=((0,1.5,1)), centerOfRotation=((0.0066,1.5357,-0.0143))),
Viewpoint(DEF="hanim_IChestFront", description="hanim_ChestFront View", position=((0,1.2,1)), centerOfRotation=((0.0066,1.5357,-0.0143))),
Viewpoint(DEF="hanim_IPelvisFront", description="hanim_PelvisFront View", position=((0,0.8,1)), centerOfRotation=((0,0.824,0.0277))),
Viewpoint(DEF="hanim_IKneesFront", description="hanim_KneesFront View", position=((0,0.4,1)), centerOfRotation=((0,0.824,0.0277)))]),
Group(DEF="StandAnimation", children=[
TimeSensor(DEF="StandTimer", cycleInterval=5.73, loop=True),
OrientationInterpolator(DEF="Stand_r_metatarsalPitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(-1),float(0),float(0),float(0.015)),(float(1),float(0),float(0),float(0.17)),(float(-1),float(0),float(0),float(0.025)),(float(1),float(0),float(0),float(0.01)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Stand_r_ankleRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_kneeRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_hipRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_l_ankleRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_l_kneeRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_l_hipRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_wristRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(0.25)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_elbowRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_shoulderRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_l_wristRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_l_elbowRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_l_shoulderRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_headRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_neckRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_l_eyeballRotInterp", key=[float(0),float(0.4),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(0.45)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_eyeballRotInterp", key=[float(0),float(0.4),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(0.45)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_lower_bodyRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_upper_bodyRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_whole_bodyRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
PositionInterpolator(DEF="Stand_whole_bodyTransInterp", key=[float(0),float(0.5),float(1)], keyValue=[(0,0,0),(0,0,0),(0,0,0)]),
OrientationInterpolator(DEF="Stand_l_sternoclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_l_acromioclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_sternoclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_acromioclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_sacroiliacYaw", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_vl5Yaw", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_vc6Yaw", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0)),(float(-1),float(0),float(0),float(0)),(float(0),float(-1),float(0),float(0)),(float(0),float(1),float(0),float(0))]),
OrientationInterpolator(DEF="Stand_l_thumb1Pitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_thumb1Pitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(0.1)),(float(1),float(0),float(0),float(0.27)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Stand_r_index1Roll", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.1)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0.3)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_index2Roll", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.4)),(float(0),float(0),float(1),float(0.32)),(float(0),float(0),float(1),float(0.25)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stand_r_index3Roll", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0.3)),(float(0),float(0),float(1),float(0.35)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0))])]),
Group(DEF="PitchesAnimation", children=[
TimeSensor(DEF="PitchTimer", cycleInterval=5.73, loop=True),
OrientationInterpolator(DEF="Pitch_r_metatarsalPitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(-1),float(0),float(0),float(0.5)),(float(-1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.75)),(float(-1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Pitches_r_ankleRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_r_kneeRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_r_hipRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_l_ankleRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_l_kneeRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_l_hipRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_r_wristRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_r_elbowRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_r_shoulderRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_l_wristRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_l_elbowRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_l_shoulderRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_headRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_neckRotInterp", key=[float(0),float(0.25),float(0.55),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(0.55)),(float(-1),float(0),float(0),float(1.05)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_lower_bodyRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_upper_bodyRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitches_whole_bodyRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
PositionInterpolator(DEF="Pitches_whole_bodyTransInterp", key=[float(0),float(0.125),float(0.25),float(0.375),float(0.5),float(0.625),float(0.75),float(0.875),float(1)], keyValue=[(0,0,0),(0,-0.15,0),(0,-0.7,0),(0,-0.15,0),(0,0,0),(0,-0.15,0),(0,-0.7,0),(0,-0.15,0),(0,0,0)]),
OrientationInterpolator(DEF="Pitch_l_sternoclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitch_l_acromioclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitch_r_sternoclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitch_r_acromioclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitch_sacroiliacYaw", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitch_vl5Yaw", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitch_vc6Yaw", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Pitch_l_thumb1Pitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.25)),(float(1),float(0),float(0),float(0.3)),(float(1),float(0),float(0),float(0.27)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Pitch_r_thumb1Pitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.25)),(float(1),float(0),float(0),float(0.3)),(float(1),float(0),float(0),float(0.27)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))])]),
Group(DEF="YawsAnimation", children=[
TimeSensor(DEF="YawTimer", cycleInterval=5.73, loop=True),
OrientationInterpolator(DEF="Yaw_r_metatarsalPitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_r_ankleRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(-1),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_r_kneeRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(-1),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_r_hipRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_l_ankleRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(-1),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_l_kneeRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(-1),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_l_hipRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_r_wristRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_r_elbowRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_r_shoulderRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_l_wristRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_l_elbowRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_l_shoulderRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_headRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_neckRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(-1),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_upper_bodyRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(-1),float(0),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_lower_bodyRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaws_whole_bodyRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
PositionInterpolator(DEF="Yaws_whole_bodyTransInterp", key=[float(0),float(0.5),float(1)], keyValue=[(0,0,0),(0,0,0),(0,0,0)]),
OrientationInterpolator(DEF="Yaw_l_sternoclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaw_l_acromioclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaw_r_sternoclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaw_r_acromioclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaw_sacroiliacYaw", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(-1),float(0),float(0.1)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0.24)),(float(0),float(-1),float(0),float(0.4)),(float(0),float(1),float(0),float(0))]),
OrientationInterpolator(DEF="Yaw_vl5Yaw", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaw_vc6Yaw", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaw_l_thumb1Pitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Yaw_r_thumb1Pitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))])]),
Group(DEF="RollsAnimation", children=[
TimeSensor(DEF="RollTimer", cycleInterval=5.73, loop=True),
OrientationInterpolator(DEF="Roll_r_metatarsalPitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_r_ankleRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_r_kneeRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_r_hipRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(-1),float(0)),(float(0),float(0),float(-1),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_l_ankleRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_l_kneeRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_l_hipRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_r_wristRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_r_elbowRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_r_shoulderRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(1.5)),(float(0),float(0),float(-1),float(3)),(float(0),float(0),float(-1),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_l_wristRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.5)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_l_elbowRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_l_shoulderRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.5)),(float(0),float(0),float(1),float(3)),(float(0),float(0),float(1),float(1.5)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_headRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_neckRotInterp", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.25)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(1.25)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_lower_bodyRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_upper_bodyRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Rolls_whole_bodyRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
PositionInterpolator(DEF="Rolls_whole_bodyTransInterp", key=[float(0),float(0.125),float(0.25),float(0.375),float(0.5),float(0.625),float(0.75),float(0.875),float(1)], keyValue=[(0,0,0),(0,-0.25,0),(0,-0.8,0),(0,-0.25,0),(0,0,0),(0,-0.25,0),(0,-0.8,0),(0,-0.25,0),(0,0,0)]),
OrientationInterpolator(DEF="Roll_l_sternoclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0.22)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Roll_l_acromioclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.05)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Roll_r_sternoclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(-0.2)),(float(0),float(0),float(1),float(-0.22)),(float(0),float(0),float(1),float(-0.2)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Roll_r_acromioclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(-0.05)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Roll_sacroiliacYaw", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Roll_vl5Yaw", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Roll_vc6Yaw", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Roll_l_thumb1Pitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Roll_r_thumb1Pitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))])]),
Group(DEF="WalkAnimation", children=[
TimeSensor(DEF="WalkTimer", cycleInterval=1.73, loop=True),
OrientationInterpolator(DEF="Walk_r_metatarsalPitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_r_ankleRotInterp", key=[float(0),float(0.125),float(0.2083),float(0.375),float(0.4583),float(0.5),float(0.6667),float(0.75),float(0.7917),float(0.9167),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.3533)),(float(-1),float(0),float(0),float(0.1072)),(float(1),float(0),float(0),float(0.2612)),(float(1),float(0),float(0),float(0.1268)),(float(-1),float(0),float(0),float(0.01793)),(float(-1),float(0),float(0),float(0.05824)),(float(-1),float(0),float(0),float(0.2398)),(float(-1),float(0),float(0),float(0.35)),(float(-1),float(0),float(0),float(0.3322)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_r_kneeRotInterp", key=[float(0),float(0.125),float(0.2083),float(0.2917),float(0.375),float(0.5),float(0.6667),float(0.7917),float(0.9167),float(1)], keyValue=[(float(1),float(0),float(0),float(0.8573)),(float(1),float(0),float(0),float(0.8926)),(float(1),float(0),float(0),float(0.5351)),(float(1),float(0),float(0),float(0.1756)),(float(1),float(0),float(0),float(0.1194)),(float(1),float(0),float(0),float(0.3153)),(float(1),float(0),float(0),float(0.09354)),(float(1),float(0),float(0),float(0.08558)),(float(1),float(0),float(0),float(0.2475)),(float(1),float(0),float(0),float(0.8573))]),
OrientationInterpolator(DEF="Walk_r_hipRotInterp", key=[float(0),float(0.125),float(0.2083),float(0.2917),float(0.375),float(0.5),float(0.6667),float(0.7917),float(0.9167),float(1)], keyValue=[(float(-0.5831),float(0.03511),float(0.8116),float(0.1481)),(float(-0.995),float(0.02296),float(0.09674),float(0.4683)),(float(-1),float(0.00192),float(0.007964),float(0.4732)),(float(-0.998),float(-0.0158),float(-0.06102),float(0.5079)),(float(-0.9911),float(-0.03541),float(-0.1286),float(0.5419)),(float(-0.9131),float(-0.06243),float(-0.403),float(0.3361)),(float(-0.4306),float(-0.07962),float(-0.899),float(0.07038)),(float(1),float(0),float(0),float(0.2571)),(float(0.9891),float(-0.02805),float(0.1444),float(0.3879)),(float(-0.5831),float(0.03511),float(0.8116),float(0.1481))]),
OrientationInterpolator(DEF="Walk_l_ankleRotInterp", key=[float(0),float(0.125),float(0.2083),float(0.375),float(0.6667),float(0.9167),float(1)], keyValue=[(float(-1),float(0),float(0),float(0.06714)),(float(-1),float(0),float(0),float(0.2152)),(float(-1),float(0),float(0),float(0.3184)),(float(-1),float(0),float(0),float(0.4717)),(float(-1),float(0),float(0),float(0.2912)),(float(1),float(0),float(0),float(0.1222)),(float(-1),float(0),float(0),float(0.06714))]),
OrientationInterpolator(DEF="Walk_l_kneeRotInterp", key=[float(0),float(0.2083),float(0.375),float(0.5),float(0.6667),float(0.7917),float(0.9167),float(1)], keyValue=[(float(1),float(0),float(0),float(0.3226)),(float(1),float(0),float(0),float(0.1556)),(float(1),float(0),float(0),float(0.08678)),(float(1),float(0),float(0),float(0.8751)),(float(1),float(0),float(0),float(1.131)),(float(1),float(0),float(0),float(0.09961)),(float(1),float(0),float(0),float(0.3942)),(float(1),float(0),float(0),float(0.3226))]),
OrientationInterpolator(DEF="Walk_l_hipRotInterp", key=[float(0),float(0.25),float(0.375),float(0.5),float(0.6667),float(0.7917),float(0.9167),float(1)], keyValue=[(float(-0.873),float(0.06094),float(0.484),float(0.2865)),(float(0.9963),float(-0.01057),float(0.08481),float(0.2488)),(float(0.9965),float(0.01591),float(-0.08222),float(0.3836)),(float(-0.7018),float(-0.03223),float(-0.7117),float(0.1289)),(float(-1),float(0),float(0),float(0.5518)),(float(-0.9964),float(0.02231),float(0.0817),float(0.5351)),(float(-0.9809),float(0.04912),float(0.1881),float(0.5204)),(float(-0.873),float(0.06094),float(0.484),float(0.2865))]),
OrientationInterpolator(DEF="Walk_lower_bodyRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(-1),float(0.1056)),(float(0),float(0),float(1),float(0.09018)),(float(0),float(0),float(-1),float(0.1056))]),
OrientationInterpolator(DEF="Walk_r_wristRotInterp", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(-0.8129),float(0.4759),float(-0.3357),float(0.1346)),(float(0.1533),float(-0.9878),float(0.02582),float(0.3902)),(float(-0.5701),float(0.7604),float(-0.311),float(0.366)),(float(-0.8129),float(0.4759),float(-0.3357),float(0.1346))]),
OrientationInterpolator(DEF="Walk_r_elbowRotInterp", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(-1),float(0),float(0),float(0.411508)),(float(-1),float(0),float(0),float(0.0925011)),(float(-1),float(0),float(0),float(0.572568)),(float(-1),float(0),float(0),float(0.411508))]),
OrientationInterpolator(DEF="Walk_r_shoulderRotInterp", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(-1),float(0),float(0),float(0.09346)),(float(1),float(0),float(0),float(0.3197)),(float(-1),float(0),float(0),float(0.1564)),(float(-1),float(0),float(0),float(0.09346))]),
OrientationInterpolator(DEF="Walk_l_wristRotInterp", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(0),float(-1),float(0),float(0.461076)),(float(-0.330195),float(-0.927451),float(0.175516),float(0.538852)),(float(0.0327774),float(-0.999314),float(-0.0172185),float(0.492033)),(float(0),float(-1),float(0),float(0.461076))]),
OrientationInterpolator(DEF="Walk_l_elbowRotInterp", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(-1),float(0),float(0),float(0.0659878)),(float(-1),float(0),float(0),float(0.488383)),(float(-1),float(0),float(0),float(0.0177536)),(float(-1),float(0),float(0),float(0.0659878))]),
OrientationInterpolator(DEF="Walk_l_shoulderRotInterp", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(1),float(0),float(0),float(0.1189)),(float(-1),float(0),float(0),float(0.1861)),(float(1),float(0),float(0),float(0.3357)),(float(1),float(0),float(0),float(0.1189))]),
OrientationInterpolator(DEF="Walk_headRotInterp", key=[float(0),float(0.375),float(0.4167),float(0.5),float(0.5833),float(0.6667),float(0.75),float(0.8333),float(0.9167),float(1)], keyValue=[(float(0),float(-1),float(0),float(0.08642)),(float(0),float(1),float(0),float(0.1825)),(float(0),float(1),float(0),float(0.1505)),(float(0),float(1),float(0),float(0.1053)),(float(0),float(1),float(0),float(0.04391)),(float(0),float(-1),float(0),float(0.03119)),(float(0),float(-1),float(0),float(0.07936)),(float(0),float(-1),float(0),float(0.1616)),(float(0),float(-1),float(0),float(0.155)),(float(0),float(-1),float(0),float(0.08642))]),
OrientationInterpolator(DEF="Walk_neckRotInterp", key=[float(0),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_upper_bodyRotInterp", key=[float(0),float(0.2083),float(0.375),float(0.75),float(0.8333),float(1)], keyValue=[(float(0),float(1),float(0),float(0.0826)),(float(-0.01972),float(-0.5974),float(0.8017),float(0.08231)),(float(0.009296),float(-0.9648),float(0.2627),float(0.1734)),(float(-0.01238),float(0.9549),float(-0.2968),float(0.08732)),(float(-0.008125),float(0.9691),float(-0.2463),float(0.158)),(float(0),float(1),float(0),float(0.0826))]),
OrientationInterpolator(DEF="Walk_whole_bodyRotInterp", key=[float(0),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
PositionInterpolator(DEF="Walk_whole_bodyTranInterp", key=[float(0),float(0.04167),float(0.125),float(0.1667),float(0.2083),float(0.25),float(0.2917),float(0.375),float(0.4583),float(0.5),float(0.5417),float(0.5833),float(0.625),float(0.7083),float(0.75),float(0.7917),float(0.875),float(0.9167),float(1)], keyValue=[(0,-0.00928,0),(0,-0.003858,0),(0,-0.008847,0),(0,-0.01486,0),(0,-0.02641,0),(0,-0.03934,0),(0,-0.0502,0),(0,-0.07469,0),(0,-0.02732,0),(0,-0.01608,0),(0,-0.01129,0),(0,-0.005819,0),(0,-0.002004,0),(0,-0.002579,0),(0,-0.0143,0),(0,-0.03799,0),(0,-0.05648,0),(0,-0.045,0),(0,-0.00928,0)]),
OrientationInterpolator(DEF="Walk_l_sternoclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_l_acromioclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_r_sternoclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_r_acromioclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_sacroiliacYaw", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_vl5Yaw", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_vc6Yaw", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Walk_l_thumb1Pitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.25)),(float(1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Walk_r_thumb1Pitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.25)),(float(1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))])]),
Group(DEF="RunAnimation", children=[
TimeSensor(DEF="RunTimer", cycleInterval=0.9, loop=True),
OrientationInterpolator(DEF="Run_r_metatarsalPitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Run_l_hipRotInterp_Run", key=[float(0),float(0.2182),float(0.4909),float(0.7455),float(1)], keyValue=[(float(-0.99),float(0.033),float(0.04),float(1.42)),(float(-0.99),float(0.1328),float(0.067),float(0.42)),(float(0.99),float(0.014),float(0.009),float(0.9)),(float(-0.99),float(0.0703),float(0.05),float(0.7)),(float(-0.99),float(0.033),float(0.04),float(1.42))]),
OrientationInterpolator(DEF="Run_l_kneeRotInterp_Run", key=[float(0),float(0.2182),float(0.4909),float(0.7455),float(1)], keyValue=[(float(1),float(0),float(0),float(1.01)),(float(1),float(0),float(0),float(0.426)),(float(1),float(0),float(0),float(0.705)),(float(1),float(0),float(0),float(2.179)),(float(1),float(0),float(0),float(1.01))]),
OrientationInterpolator(DEF="Run_l_ankleRotInterp_Run", key=[float(0),float(0.22),float(0.3),float(0.4),float(1)], keyValue=[(float(1),float(0),float(0),float(0.0374)),(float(-1),float(0),float(0),float(0.1037)),(float(-1),float(0),float(0),float(0.4328)),(float(1),float(0),float(0),float(0.1929)),(float(1),float(0),float(0),float(0.03574))]),
OrientationInterpolator(DEF="Run_r_hipRotInterp_Run", key=[float(0),float(0.2545),float(0.4909),float(0.7091),float(1)], keyValue=[(float(0.99),float(-0.014),float(0.009),float(0.9)),(float(-0.99),float(-0.0703),float(-0.05),float(0.7)),(float(-0.99),float(-0.033),float(0.04),float(1.42)),(float(-0.99),float(-0.1328),float(-0.067),float(0.42)),(float(0.99),float(-0.014),float(0.009),float(0.9))]),
OrientationInterpolator(DEF="Run_r_kneeRotInterp_Run", key=[float(0),float(0.2545),float(0.4909),float(0.7091),float(1)], keyValue=[(float(1),float(0),float(0),float(0.705)),(float(1),float(0),float(0),float(2.179)),(float(1),float(0),float(0),float(1.01)),(float(1),float(0),float(0),float(0.426)),(float(1),float(0),float(0),float(0.705))]),
OrientationInterpolator(DEF="Run_r_ankleRotInterp_Run", key=[float(0),float(0.4),float(0.71),float(0.8),float(0.82),float(1)], keyValue=[(float(1),float(0),float(0),float(0.2323)),(float(-1),float(0),float(0),float(0.07843)),(float(-1),float(0),float(0),float(0.32)),(float(-1),float(0),float(0),float(0.374)),(float(-1),float(0),float(0),float(0.3478)),(float(1),float(0),float(0),float(0.2323))]),
OrientationInterpolator(DEF="Run_l_shoulderRotInterp_Run", key=[float(0),float(0.2182),float(0.4909),float(0.7455),float(1)], keyValue=[(float(0.99),float(-0.074),float(0.25),float(1.5)),(float(0.99),float(-0.092),float(0.44),float(0.3)),(float(-0.99),float(0.136),float(0.25),float(0.85)),(float(0.99),float(-0.081),float(0.38),float(0.4)),(float(0.99),float(-0.074),float(0.25),float(1.5))]),
OrientationInterpolator(DEF="Run_l_elbowRotInterp_Run", key=[float(0),float(0.2182),float(0.4909),float(0.7455),float(1)], keyValue=[(float(-1),float(0),float(0),float(1.85)),(float(-0.99),float(-0.19),float(0.18),float(1.35)),(float(-1),float(0),float(0),float(0.975)),(float(-0.99),float(-0.09),float(-0.02),float(1.55)),(float(-1),float(0),float(0),float(1.85))]),
OrientationInterpolator(DEF="Run_l_wristRotInterp_Run", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(-0.25),float(-1),float(0.08),float(0.14)),(float(0.25),float(1),float(0.08),float(0.14)),(float(0),float(0),float(1),float(0)),(float(-0.25),float(1),float(0.08),float(-0.14)),(float(-0.25),float(1),float(0.08),float(0.14))]),
OrientationInterpolator(DEF="Run_r_shoulderRotInterp_Run", key=[float(0),float(0.2545),float(0.4909),float(0.7091),float(1)], keyValue=[(float(-0.99),float(-0.136),float(-0.25),float(0.85)),(float(0.99),float(0.081),float(-0.38),float(0.4)),(float(0.99),float(0.074),float(-0.25),float(1.5)),(float(0.99),float(0.081),float(-0.38),float(0.4)),(float(-0.99),float(-0.136),float(-0.25),float(0.85))]),
OrientationInterpolator(DEF="Run_r_elbowRotInterp_Run", key=[float(0),float(0.2545),float(0.4909),float(0.7091),float(1)], keyValue=[(float(-1),float(0),float(0),float(0.975)),(float(-0.99),float(0.09),float(0.02),float(1.55)),(float(-1),float(0),float(0),float(1.85)),(float(-0.99),float(0.19),float(-0.18),float(1.35)),(float(-1),float(0),float(0),float(0.975))]),
OrientationInterpolator(DEF="Run_r_wristRotInterp_Run", key=[float(0),float(1)], keyValue=[(float(-0.917742),float(-0.237244),float(-0.318536),float(0.214273)),(float(-0.917742),float(-0.237244),float(-0.318536),float(0.214273))]),
OrientationInterpolator(DEF="Run_lower_bodyRotInterp_Run", key=[float(0),float(0.2182),float(0.4909),float(0.7455),float(1)], keyValue=[(float(0),float(-1),float(0),float(0.125)),(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(0.125)),(float(0),float(0),float(1),float(0)),(float(0),float(-1),float(0),float(0.125))]),
OrientationInterpolator(DEF="Run_headRotInterp_Run", key=[float(0),float(0.2545),float(0.4909),float(0.7091),float(1)], keyValue=[(float(1),float(0),float(0),float(0.08)),(float(1),float(0),float(0),float(0.12)),(float(1),float(0),float(0),float(0.3)),(float(1),float(0),float(0),float(0.3)),(float(1),float(0),float(0),float(0.08))]),
OrientationInterpolator(DEF="Run_neckRotInterp_Run", key=[float(0),float(0.2545),float(0.4909),float(0.7091),float(1)], keyValue=[(float(0.7),float(0),float(0),float(0.4)),(float(-0.7),float(-0.7),float(0),float(0.4)),(float(0),float(0),float(0),float(0.4)),(float(-0.7),float(0.7),float(0),float(0.4)),(float(0.7),float(0),float(0),float(0.4))]),
OrientationInterpolator(DEF="Run_upper_bodyRotInterp_Run", key=[float(0),float(0.2545),float(0.4909),float(0.7636),float(1)], keyValue=[(float(0.97),float(0.65),float(0.086),float(0.5)),(float(0.9),float(0.003),float(-0.02),float(0.38)),(float(0.95),float(-0.68),float(-0.086),float(0.5)),(float(0.9),float(0.004),float(-0.025),float(0.4)),(float(0.97),float(0.65),float(0.086),float(0.5))]),
OrientationInterpolator(DEF="Run_whole_bodyRotInterp_Run", key=[float(0),float(0.25),float(0.5),float(0.75),float(1)], keyValue=[(float(1),float(0),float(0),float(0.06)),(float(1),float(0),float(0),float(0.167)),(float(1),float(0),float(0),float(0.06)),(float(1),float(0),float(0),float(0.168)),(float(1),float(0),float(0),float(0.06))]),
PositionInterpolator(DEF="Run_whole_bodyTranInterp_Run", key=[float(0),float(0.22),float(0.3),float(0.31),float(0.5),float(0.69),float(0.7),float(0.78),float(1)], keyValue=[(0,-0.01,0),(0,-0.037,0),(0,-0.049,0),(0,-0.037,0),(0,-0.01,0),(0,-0.037,0),(0,-0.049,0),(0,-0.037,0),(0,-0.01,0)]),
OrientationInterpolator(DEF="Run_l_sternoclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Run_l_acromioclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Run_r_sternoclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Run_r_acromioclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Run_sacroiliacYaw", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Run_vl5Yaw", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Run_vc6Yaw", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Run_l_thumb1Pitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.25)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.27)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Run_r_thumb1Pitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.25)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.27)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))])]),
Group(DEF="JumpAnimation", children=[
TimeSensor(DEF="JumpTimer", cycleInterval=3.73, loop=True),
OrientationInterpolator(DEF="Jump_r_metatarsalPitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_r_ankleRotInterp", key=[float(0),float(0.1),float(0.15),float(0.25),float(0.28),float(0.32),float(0.35),float(0.64),float(0.76),float(0.84),float(0.88),float(0.92),float(0.96),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.6735)),(float(-1),float(0),float(0),float(0.6735)),(float(-1),float(0),float(0),float(0.3527)),(float(-1),float(0),float(0),float(0.3038)),(float(-1),float(0),float(0),float(0.07964)),(float(1),float(0),float(0),float(1.3)),(float(1),float(0),float(0),float(0.6509)),(float(1),float(0),float(0),float(0.3001)),(float(-1),float(0),float(0),float(0.2087)),(float(-1),float(0),float(0),float(0.3756)),(float(-1),float(0),float(0),float(0.3279)),(float(-1),float(0),float(0),float(0.1193)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_r_kneeRotInterp", key=[float(0),float(0.2),float(0.25),float(0.3),float(0.64),float(0.76),float(0.88),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(2.5)),(float(1),float(0),float(0),float(1.7)),(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(0.9507)),(float(1),float(0),float(0),float(0.5845)),(float(1),float(0),float(0),float(0.9054)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_r_hipRotInterp", key=[float(0),float(0.18),float(0.24),float(0.26),float(0.28),float(0.32),float(0.48),float(0.64),float(0.76),float(0.88),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(1.63)),(float(-1),float(0),float(0),float(1.7)),(float(-1),float(0),float(0),float(1.55)),(float(-1),float(0),float(0),float(0.8943)),(float(-1),float(0),float(0),float(0.3698)),(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.4963)),(float(-1),float(0),float(0),float(0.3829)),(float(-1),float(0),float(0),float(0.5169)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_l_ankleRotInterp", key=[float(0),float(0.28),float(0.32),float(0.36),float(0.4),float(0.44),float(0.48),float(0.64),float(0.76),float(0.84),float(0.88),float(0.92),float(0.96),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.625)),(float(-1),float(0),float(0),float(0.625)),(float(-1),float(0),float(0),float(0.3364)),(float(-1),float(0),float(0),float(0.2742)),(float(-1),float(0),float(0),float(0.05078)),(float(1),float(0),float(0),float(0.2833)),(float(1),float(0),float(0),float(0.6667)),(float(1),float(0),float(0),float(0.2833)),(float(-1),float(0),float(0),float(0.2108)),(float(-1),float(0),float(0),float(0.375)),(float(-1),float(0),float(0),float(0.3146)),(float(-1),float(0),float(0),float(0.1174)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_l_kneeRotInterp", key=[float(0),float(0.28),float(0.32),float(0.48),float(0.64),float(0.76),float(0.88),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(2.047)),(float(1),float(0),float(0),float(2.047)),(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.566)),(float(1),float(0),float(0),float(0.5913)),(float(1),float(0),float(0),float(0.9235)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_l_hipRotInterp", key=[float(0),float(0.28),float(0.32),float(0.36),float(0.4),float(0.44),float(0.48),float(0.64),float(0.76),float(0.88),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(4.349)),(float(1),float(0),float(0),float(4.349)),(float(1),float(0),float(0),float(4.615)),(float(-1),float(0),float(0),float(0.9136)),(float(-1),float(0),float(0),float(0.3614)),(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.7869)),(float(-1),float(0),float(0),float(0.3918)),(float(-1),float(0),float(0),float(0.5433)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_lower_bodyRotInterp", key=[float(0),float(0.28),float(0.32),float(0.48),float(0.76),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(0.1892)),(float(1),float(0),float(0),float(0.1892)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_r_wristRotInterp", key=[float(0),float(0.28),float(0.32),float(0.64),float(0.76),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-0.0585279),float(0.983903),float(-0.168849),float(1.85956)),(float(-0.0585279),float(0.983903),float(-0.168849),float(1.85956)),(float(-0.00222418),float(0.99801),float(-0.0630095),float(1.46072)),(float(0),float(1),float(0),float(0.497349)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_r_elbowRotInterp", key=[float(0),float(0.28),float(0.32),float(0.64),float(0.76),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.04151)),(float(-1),float(0),float(0),float(0.04151)),(float(-1),float(0),float(0),float(0.5855)),(float(-1),float(0),float(0),float(0.5852)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_r_shoulderRotInterp", key=[float(0),float(0.28),float(0.32),float(0.64),float(0.76),float(0.88),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0.9992),float(0.02042),float(0.03558),float(4.688)),(float(0.9992),float(0.02042),float(0.03558),float(4.688)),(float(0.9989),float(-0.04623),float(0.005159),float(4.079)),(float(-0.8687),float(-0.2525),float(-0.4261),float(1.501)),(float(-0.941),float(-0.2893),float(-0.1754),float(0.4788)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_l_wristRotInterp", key=[float(0),float(0.48),float(0.52),float(0.64),float(0.76),float(0.88),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0.0672928),float(0.989475),float(-0.128107),float(4.15574)),(float(0.0672928),float(0.989475),float(-0.128107),float(4.15574)),(float(0.00364942),float(0.999901),float(0.0135896),float(4.5822)),(float(0),float(-1),float(0),float(0.655922)),(float(-0.00050618),float(-0.999999),float(0.0012782),float(1.28397)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_l_elbowRotInterp", key=[float(0),float(0.28),float(0.32),float(0.58),float(0.72),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(1.13)),(float(-1),float(0),float(0),float(1.7)),(float(-1),float(0),float(0),float(1.7)),(float(-1),float(0),float(0),float(0.4)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_l_shoulderRotInterp", key=[float(0),float(0.28),float(0.32),float(0.64),float(0.76),float(0.88),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-0.9987),float(0.02554),float(0.04498),float(1.57)),(float(-0.9987),float(0.02554),float(0.04498),float(1.57)),(float(1),float(0.0004113),float(0.003055),float(4.114)),(float(-0.8413),float(0.3238),float(0.4329),float(1.453)),(float(-0.877),float(0.4198),float(0.2337),float(0.6009)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_headRotInterp", key=[float(0),float(0.28),float(0.32),float(0.48),float(0.76),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.5989)),(float(-1),float(0),float(0),float(0.5989)),(float(-1),float(0),float(0),float(0.3216)),(float(1),float(0),float(0),float(0.06503)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_neckRotInterp", key=[float(0),float(0.28),float(0.32),float(0.48),float(0.76),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.1942)),(float(-1),float(0),float(0),float(0.1942)),(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(0.2284)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_upper_bodyRotInterp", key=[float(0),float(0.22),float(0.28),float(0.34),float(0.71),float(0.88),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.05)),(float(1),float(0),float(0),float(1.051)),(float(-1),float(0),float(0),float(0.257)),(float(1),float(0),float(0),float(0.2171)),(float(1),float(0),float(0),float(0.3465)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_whole_bodyRotInterp", key=[float(0),float(0.28),float(0.32),float(0.48),float(0.64),float(0.76),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(0.3273)),(float(1),float(0),float(0),float(0.3273)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
PositionInterpolator(DEF="Jump_whole_bodyTranInterp", key=[float(0),float(0.04),float(0.07),float(0.11),float(0.15),float(0.19),float(0.22),float(0.25),float(0.27),float(0.31),float(0.33),float(0.35),float(0.38),float(0.53),float(0.544),float(0.76),float(0.8),float(0.84),float(0.88),float(0.92),float(0.96),float(1)], keyValue=[(0,0,0),(0,-0.01264,-0.01289),(0,-0.04712,-0.03738),(-0.0003345,-0.1049,-0.05353),(-0.0005712,-0.1892,-0.06561),(-0.0008233,-0.286,-0.06276),(-0.0009591,-0.3795,-0.05148),(-0.00106,-0.4484,-0.03656),(-0.00106,-0.4484,-0.03656),(-0.001122,-0.25,-0.1499),(-0.0008616,-0.05,-0.06358),(-0.0005128,0.15,-0.05488),(0.0004779,0.55,0.02732),(0.0001728,1.385,0.006873),(0.00017,1.395,0.0069),(0,0.35,0.02148),(0,-0.01299,-0.01057),(0,-0.06932,-0.01064),(0.0001365,-0.1037,-0.005059),(0.0001279,-0.07198,-0.007596),(0.000141,-0.01626,-0.004935),(0,0,0)]),
OrientationInterpolator(DEF="Jump_l_sternoclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0.22)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_l_acromioclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.05)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_r_sternoclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(-0.2)),(float(0),float(0),float(1),float(-0.22)),(float(0),float(0),float(1),float(-0.2)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_r_acromioclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(-0.05)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Jump_sacroiliacYaw", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(-1),float(0),float(0.1)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(-1),float(0.24)),(float(0),float(-1),float(0),float(0.4)),(float(0),float(1),float(0),float(0))]),
OrientationInterpolator(DEF="Jump_vl5Yaw", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(-0.1)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0)),(float(1),float(0),float(0),float(0.6)),(float(0),float(1),float(0),float(0.1)),(float(0),float(1),float(0),float(0))]),
OrientationInterpolator(DEF="Jump_vc6Yaw", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0.8)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0)),(float(-1),float(0),float(0),float(0.6)),(float(0),float(-1),float(0),float(0.8)),(float(0),float(1),float(0),float(0))]),
OrientationInterpolator(DEF="Jump_l_thumb1Pitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(1.1)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Jump_r_thumb1Pitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(1.1)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))])]),
Group(DEF="KickAnimation", children=[
TimeSensor(DEF="KickTimer", cycleInterval=3.73, loop=True),
OrientationInterpolator(DEF="Kick_l_sternoclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0.22)),(float(0),float(0),float(1),float(0.2)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_l_acromioclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0.05)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_l_shoulderRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.76)),(float(-0.25),float(0),float(1),float(1.76)),(float(0),float(0),float(1),float(1.256)),(float(0),float(0),float(1),float(0.05)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_l_ForeArmPitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(-0.55)),(float(-1),float(0.25),float(0),float(2.55)),(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_l_wristRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(0.55)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_l_thumb1Pitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(1.1)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_r_sternoclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(-0.2)),(float(0),float(0),float(1),float(-0.22)),(float(0),float(0),float(1),float(-0.2)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_r_acromioclavicularRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(-0.05)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_r_shoulderRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(-1.76)),(float(0.25),float(0),float(1),float(-1.76)),(float(0),float(0),float(1),float(-1.256)),(float(0),float(0),float(1),float(-0.05)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_r_ForeArmPitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(-0.55)),(float(1),float(0.25),float(0),float(-2.55)),(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_r_wristRoll", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(-0.55)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_r_thumb1Pitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.5)),(float(1),float(0),float(0),float(1.1)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_r_hipPitch", key=[float(0),float(0.2),float(0.3),float(0.5),float(0.6),float(0.9),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.9)),(float(-1),float(0),float(0),float(1.75)),(float(-1),float(0),float(0),float(2.25)),(float(-1),float(0),float(0),float(2)),(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_r_kneePitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(1.95)),(float(1),float(0),float(0),float(1.75)),(float(-1),float(0),float(0),float(0.28)),(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_l_hipPitch", key=[float(0),float(0.2),float(0.3),float(0.5),float(0.6),float(0.9),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_l_kneePitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_r_anklePitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.9)),(float(-1),float(0),float(0),float(0.95)),(float(1),float(0),float(0),float(0.75)),(float(-1),float(0),float(0),float(0.05)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_r_metatarsalPitch", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.7),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(-1),float(0),float(0),float(0.5)),(float(-1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.75)),(float(-1),float(0),float(0),float(0.2)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_sacroiliacYaw", key=[float(0),float(0.2),float(0.4),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(-1),float(0),float(0.1)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(-1),float(0.24)),(float(0),float(-1),float(0),float(0.4)),(float(0),float(1),float(0),float(0))]),
OrientationInterpolator(DEF="Kick_vl5Yaw", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_vc6Yaw", key=[float(0),float(0.2),float(0.4),float(0.5),float(0.6),float(0.8),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_lower_bodyRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_upper_bodyRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Kick_whole_bodyRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
PositionInterpolator(DEF="Kick_whole_bodyTransInterp", key=[float(0),float(0.5),float(1)], keyValue=[(0,0,0),(0,0,0),(0,0,0)]),
OrientationInterpolator(DEF="Kick_neckRotInterp", key=[float(0),float(0.25),float(0.55),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(0.7)),(float(1),float(0),float(0),float(0.5)),(float(0),float(0),float(1),float(0))])]),
Group(DEF="StopAnimation", children=[
TimeSensor(DEF="StopTimer", cycleInterval=5.73, loop=True),
PositionInterpolator(DEF="Stop_HumanoidRootTransInterp", key=[float(0),float(0.5),float(1)], keyValue=[(0,0,0),(0,0,0),(0,0,0)]),
OrientationInterpolator(DEF="Stop_HumanoidRootRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_sacroiliacRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_hipRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_kneeRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_ankleRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_subtalarRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_midtarsalRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_metatarsalRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_hipRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_kneeRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_ankleRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_subtalarRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_midtarsalRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_metatarsalRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vl5RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vl4RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vl3RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vl2RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vl1RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt12RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt11RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt10RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt9RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt8RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt7RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt6RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt5RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt4RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt3RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt2RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vt1RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vc7RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vc6RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vc5RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vc4RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vc3RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vc2RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_vc1RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_skullbaseRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_eyeball_jointRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_eyeball_jointRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_sternoclavicularRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_acromioclavicularRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_shoulderRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_elbowRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_wristRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_thumb1RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_thumb2RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_thumb3RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_index0RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_index1RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_index2RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_index3RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_middle0RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_middle1RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_middle2RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_middle3RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_ring0RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_ring1RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_ring2RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_ring3RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_pinky0RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_pinky1RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_pinky2RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_l_pinky3RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_sternoclavicularRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_acromioclavicularRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_shoulderRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_elbowRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_wristRotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_thumb1RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_thumb2RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_thumb3RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_index0RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_index1RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_index2RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_index3RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_middle0RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_middle1RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_middle2RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_middle3RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_ring0RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_ring1RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_ring2RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_ring3RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_pinky0RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_pinky1RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_pinky2RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="Stop_r_pinky3RotInterp", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))])]),
Group(DEF="Interface", children=[
Transform(DEF="cordsysfloor", scale=((0.175,0.175,0.175)), children=[
Inline(global_=True, url=["JointCoordinateAxes.x3dv"])]),
ProximitySensor(DEF="HudProx", size=((50,50,50))),
Transform(DEF="HudXform", children=[
Transform(translation=((-0.2,0.15,-0.7)), scale=((0.02,0.02,0.02)), children=[
Transform(DEF="Stand_Text", translation=((0,-0.9,0)), children=[
TouchSensor(DEF="Stand_Touch"),
Shape(DEF="StandText", 
appearance=
Appearance(
material=
Material(DEF="text_color", ambientIntensity=1, diffuseColor=((0.819,0.521,0.169)), specularColor=((0.819,0.521,0.169)), emissiveColor=((0.819,0.521,0.169)))), 
geometry=
Text(string=["Stand"], 
fontStyle=
FontStyle(family=["SANS"]))),
Shape(DEF="Stand_Back", 
appearance=
Appearance(
material=
Material(DEF="Clear", ambientIntensity=1, diffuseColor=((0,0.5,0)), emissiveColor=((0,0.5,0)), transparency=0.8)), 
geometry=
IndexedFaceSet(DEF="Backing", coordIndex=[0,1,2,3,-1], 
coord=
Coordinate(point=[(-0.2,-0.25,-0.01),(3,-0.25,-0.01),(3,1,-0.01),(-0.2,1,-0.01)])))]),
Transform(DEF="Pitch_Text", translation=((0,-2.4,0)), children=[
TouchSensor(DEF="Pitch_Touch"),
Shape(DEF="PitchText", 
appearance=
Appearance(
material=
Material(USE="text_color")), 
geometry=
Text(string=["Pitch"], 
fontStyle=
FontStyle(family=["SANS"]))),
Shape(DEF="Pitch_Back", 
appearance=
Appearance(
material=
Material(USE="Clear")), 
geometry=
IndexedFaceSet(USE="Backing"))]),
Transform(DEF="Yaw_Text", translation=((0,-3.8,0)), children=[
TouchSensor(DEF="Yaw_Touch"),
Shape(DEF="YawText", 
appearance=
Appearance(
material=
Material(USE="text_color")), 
geometry=
Text(string=["Yaw"], 
fontStyle=
FontStyle(family=["SANS"]))),
Shape(DEF="Yaw_Back", 
appearance=
Appearance(
material=
Material(USE="Clear")), 
geometry=
IndexedFaceSet(USE="Backing"))]),
Transform(DEF="Roll_Text", translation=((0,-5.2,0)), children=[
TouchSensor(DEF="Roll_Touch"),
Shape(DEF="RollText", 
appearance=
Appearance(
material=
Material(USE="text_color")), 
geometry=
Text(string=["Roll"], 
fontStyle=
FontStyle(family=["SANS"]))),
Shape(DEF="Roll_Back", 
appearance=
Appearance(
material=
Material(USE="Clear")), 
geometry=
IndexedFaceSet(USE="Backing"))]),
Transform(DEF="Walk_Text", translation=((0,-6.6,0)), children=[
TouchSensor(DEF="Walk_Touch"),
Shape(DEF="WalkText", 
appearance=
Appearance(
material=
Material(USE="text_color")), 
geometry=
Text(string=["Walk"], 
fontStyle=
FontStyle(family=["SANS"]))),
Shape(DEF="Walk_Back", 
appearance=
Appearance(
material=
Material(USE="Clear")), 
geometry=
IndexedFaceSet(USE="Backing"))]),
Transform(DEF="Run_Text", translation=((0,-8,0)), children=[
TouchSensor(DEF="Run_Touch"),
Shape(DEF="RunText", 
appearance=
Appearance(
material=
Material(USE="text_color")), 
geometry=
Text(string=["Run"], 
fontStyle=
FontStyle(family=["SANS"]))),
Shape(DEF="Run_Back", 
appearance=
Appearance(
material=
Material(USE="Clear")), 
geometry=
IndexedFaceSet(USE="Backing"))]),
Transform(DEF="Jump_Text", translation=((0,-9.4,0)), children=[
TouchSensor(DEF="Jump_Touch"),
Shape(DEF="JumpText", 
appearance=
Appearance(
material=
Material(USE="text_color")), 
geometry=
Text(string=["Jump"], 
fontStyle=
FontStyle(family=["SANS"]))),
Shape(DEF="Jump_Back", 
appearance=
Appearance(
material=
Material(USE="Clear")), 
geometry=
IndexedFaceSet(USE="Backing"))]),
Transform(DEF="Kick_Text", translation=((0,-10.8,0)), children=[
TouchSensor(DEF="Kick_Touch"),
Shape(DEF="KickText", 
appearance=
Appearance(
material=
Material(USE="text_color")), 
geometry=
Text(string=["Kick"], 
fontStyle=
FontStyle(family=["SANS"]))),
Shape(DEF="Kick_Back", 
appearance=
Appearance(
material=
Material(USE="Clear")), 
geometry=
IndexedFaceSet(USE="Backing"))]),
Transform(DEF="Stop_Text", translation=((0,0.4,0)), children=[
TouchSensor(DEF="Stop_Touch"),
Shape(DEF="StopText", 
appearance=
Appearance(
material=
Material(USE="text_color")), 
geometry=
Text(string=["Default"], 
fontStyle=
FontStyle(family=["SANS"]))),
Shape(DEF="Stop_Back", 
appearance=
Appearance(
material=
Material(USE="Clear")), 
geometry=
IndexedFaceSet(USE="Backing"))])])])]),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_r_ankleRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_r_kneeRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_r_hipRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_l_ankleRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_l_kneeRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_l_hipRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_lower_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_r_wristRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_r_elbowRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_r_shoulderRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_l_wristRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_l_elbowRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_l_shoulderRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_headRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_neckRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_l_eyeballRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_r_eyeballRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_upper_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_whole_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_whole_bodyTransInterp", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_l_sternoclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_l_acromioclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_r_sternoclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_r_acromioclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_r_metatarsalPitch", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_sacroiliacYaw", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_vl5Yaw", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_vc6Yaw", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_l_thumb1Pitch", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_r_thumb1Pitch", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_r_index1Roll", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_r_index2Roll", toField="set_fraction"),
ROUTE(fromNode="StandTimer", fromField="fraction_changed", toNode="Stand_r_index3Roll", toField="set_fraction"),
ROUTE(fromNode="Stand_r_ankleRotInterp", fromField="value_changed", toNode="hanim_r_ankle", toField="set_rotation"),
ROUTE(fromNode="Stand_r_kneeRotInterp", fromField="value_changed", toNode="hanim_r_knee", toField="set_rotation"),
ROUTE(fromNode="Stand_r_hipRotInterp", fromField="value_changed", toNode="hanim_r_hip", toField="set_rotation"),
ROUTE(fromNode="Stand_l_ankleRotInterp", fromField="value_changed", toNode="hanim_l_ankle", toField="set_rotation"),
ROUTE(fromNode="Stand_l_kneeRotInterp", fromField="value_changed", toNode="hanim_l_knee", toField="set_rotation"),
ROUTE(fromNode="Stand_l_hipRotInterp", fromField="value_changed", toNode="hanim_l_hip", toField="set_rotation"),
ROUTE(fromNode="Stand_r_wristRotInterp", fromField="value_changed", toNode="hanim_r_wrist", toField="set_rotation"),
ROUTE(fromNode="Stand_r_elbowRotInterp", fromField="value_changed", toNode="hanim_r_elbow", toField="set_rotation"),
ROUTE(fromNode="Stand_r_shoulderRotInterp", fromField="value_changed", toNode="hanim_r_shoulder", toField="set_rotation"),
ROUTE(fromNode="Stand_l_wristRotInterp", fromField="value_changed", toNode="hanim_l_wrist", toField="set_rotation"),
ROUTE(fromNode="Stand_l_elbowRotInterp", fromField="value_changed", toNode="hanim_l_elbow", toField="set_rotation"),
ROUTE(fromNode="Stand_l_shoulderRotInterp", fromField="value_changed", toNode="hanim_l_shoulder", toField="set_rotation"),
ROUTE(fromNode="Stand_headRotInterp", fromField="value_changed", toNode="hanim_skullbase", toField="set_rotation"),
ROUTE(fromNode="Stand_neckRotInterp", fromField="value_changed", toNode="hanim_vc7", toField="set_rotation"),
ROUTE(fromNode="Stand_l_eyeballRotInterp", fromField="value_changed", toNode="hanim_l_eyeball_joint", toField="set_rotation"),
ROUTE(fromNode="Stand_r_eyeballRotInterp", fromField="value_changed", toNode="hanim_r_eyeball_joint", toField="set_rotation"),
ROUTE(fromNode="Stand_upper_bodyRotInterp", fromField="value_changed", toNode="hanim_vl1", toField="set_rotation"),
ROUTE(fromNode="Stand_lower_bodyRotInterp", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Stand_whole_bodyRotInterp", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_rotation"),
ROUTE(fromNode="Stand_whole_bodyTransInterp", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_translation"),
ROUTE(fromNode="Stand_l_sternoclavicularRoll", fromField="value_changed", toNode="hanim_l_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Stand_l_acromioclavicularRoll", fromField="value_changed", toNode="hanim_l_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Stand_r_sternoclavicularRoll", fromField="value_changed", toNode="hanim_r_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Stand_r_acromioclavicularRoll", fromField="value_changed", toNode="hanim_r_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Stand_r_metatarsalPitch", fromField="value_changed", toNode="hanim_l_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Stand_r_metatarsalPitch", fromField="value_changed", toNode="hanim_r_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Stand_sacroiliacYaw", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Stand_vl5Yaw", fromField="value_changed", toNode="hanim_vl5", toField="set_rotation"),
ROUTE(fromNode="Stand_vc6Yaw", fromField="value_changed", toNode="hanim_vc6", toField="set_rotation"),
ROUTE(fromNode="Stand_l_thumb1Pitch", fromField="value_changed", toNode="hanim_l_thumb1", toField="set_rotation"),
ROUTE(fromNode="Stand_r_thumb1Pitch", fromField="value_changed", toNode="hanim_r_thumb1", toField="set_rotation"),
ROUTE(fromNode="Stand_r_index1Roll", fromField="value_changed", toNode="hanim_r_index1", toField="set_rotation"),
ROUTE(fromNode="Stand_r_index2Roll", fromField="value_changed", toNode="hanim_r_index2", toField="set_rotation"),
ROUTE(fromNode="Stand_r_index2Roll", fromField="value_changed", toNode="hanim_r_index3", toField="set_rotation"),
ROUTE(fromNode="Stand_r_index1Roll", fromField="value_changed", toNode="hanim_r_middle1", toField="set_rotation"),
ROUTE(fromNode="Stand_r_index2Roll", fromField="value_changed", toNode="hanim_r_middle2", toField="set_rotation"),
ROUTE(fromNode="Stand_r_index2Roll", fromField="value_changed", toNode="hanim_r_middle3", toField="set_rotation"),
ROUTE(fromNode="Stand_r_index1Roll", fromField="value_changed", toNode="hanim_r_ring1", toField="set_rotation"),
ROUTE(fromNode="Stand_r_index2Roll", fromField="value_changed", toNode="hanim_r_ring2", toField="set_rotation"),
ROUTE(fromNode="Stand_r_index2Roll", fromField="value_changed", toNode="hanim_r_ring3", toField="set_rotation"),
ROUTE(fromNode="Stand_r_index1Roll", fromField="value_changed", toNode="hanim_r_pinky1", toField="set_rotation"),
ROUTE(fromNode="Stand_r_index2Roll", fromField="value_changed", toNode="hanim_r_pinky2", toField="set_rotation"),
ROUTE(fromNode="Stand_r_index2Roll", fromField="value_changed", toNode="hanim_r_pinky3", toField="set_rotation"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_r_ankleRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_r_kneeRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_r_hipRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_l_ankleRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_l_kneeRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_l_hipRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_lower_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_r_wristRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_r_elbowRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_r_shoulderRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_l_wristRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_l_elbowRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_l_shoulderRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_headRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_neckRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_upper_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_whole_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitches_whole_bodyTransInterp", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitch_l_sternoclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitch_l_acromioclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitch_r_sternoclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitch_r_acromioclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitch_r_metatarsalPitch", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitch_sacroiliacYaw", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitch_vl5Yaw", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitch_vc6Yaw", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitch_l_thumb1Pitch", toField="set_fraction"),
ROUTE(fromNode="PitchTimer", fromField="fraction_changed", toNode="Pitch_r_thumb1Pitch", toField="set_fraction"),
ROUTE(fromNode="Pitches_r_ankleRotInterp", fromField="value_changed", toNode="hanim_r_ankle", toField="set_rotation"),
ROUTE(fromNode="Pitches_r_kneeRotInterp", fromField="value_changed", toNode="hanim_r_knee", toField="set_rotation"),
ROUTE(fromNode="Pitches_r_hipRotInterp", fromField="value_changed", toNode="hanim_r_hip", toField="set_rotation"),
ROUTE(fromNode="Pitches_l_ankleRotInterp", fromField="value_changed", toNode="hanim_l_ankle", toField="set_rotation"),
ROUTE(fromNode="Pitches_l_kneeRotInterp", fromField="value_changed", toNode="hanim_l_knee", toField="set_rotation"),
ROUTE(fromNode="Pitches_l_hipRotInterp", fromField="value_changed", toNode="hanim_l_hip", toField="set_rotation"),
ROUTE(fromNode="Pitches_lower_bodyRotInterp", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Pitches_r_wristRotInterp", fromField="value_changed", toNode="hanim_r_wrist", toField="set_rotation"),
ROUTE(fromNode="Pitches_r_elbowRotInterp", fromField="value_changed", toNode="hanim_r_elbow", toField="set_rotation"),
ROUTE(fromNode="Pitches_r_shoulderRotInterp", fromField="value_changed", toNode="hanim_r_shoulder", toField="set_rotation"),
ROUTE(fromNode="Pitches_l_wristRotInterp", fromField="value_changed", toNode="hanim_l_wrist", toField="set_rotation"),
ROUTE(fromNode="Pitches_l_elbowRotInterp", fromField="value_changed", toNode="hanim_l_elbow", toField="set_rotation"),
ROUTE(fromNode="Pitches_l_shoulderRotInterp", fromField="value_changed", toNode="hanim_l_shoulder", toField="set_rotation"),
ROUTE(fromNode="Pitches_headRotInterp", fromField="value_changed", toNode="hanim_skullbase", toField="set_rotation"),
ROUTE(fromNode="Pitches_neckRotInterp", fromField="value_changed", toNode="hanim_vc4", toField="set_rotation"),
ROUTE(fromNode="Pitches_upper_bodyRotInterp", fromField="value_changed", toNode="hanim_vl1", toField="set_rotation"),
ROUTE(fromNode="Pitches_whole_bodyRotInterp", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_rotation"),
ROUTE(fromNode="Pitches_whole_bodyTransInterp", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_translation"),
ROUTE(fromNode="Pitch_l_sternoclavicularRoll", fromField="value_changed", toNode="hanim_l_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Pitch_l_acromioclavicularRoll", fromField="value_changed", toNode="hanim_l_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Pitch_r_sternoclavicularRoll", fromField="value_changed", toNode="hanim_r_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Pitch_r_acromioclavicularRoll", fromField="value_changed", toNode="hanim_r_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Pitch_r_metatarsalPitch", fromField="value_changed", toNode="hanim_l_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Pitch_r_metatarsalPitch", fromField="value_changed", toNode="hanim_r_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Pitch_sacroiliacYaw", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Pitch_vl5Yaw", fromField="value_changed", toNode="hanim_vl5", toField="set_rotation"),
ROUTE(fromNode="Pitch_vc6Yaw", fromField="value_changed", toNode="hanim_vc6", toField="set_rotation"),
ROUTE(fromNode="Pitch_l_thumb1Pitch", fromField="value_changed", toNode="hanim_l_thumb1", toField="set_rotation"),
ROUTE(fromNode="Pitch_r_thumb1Pitch", fromField="value_changed", toNode="hanim_r_thumb1", toField="set_rotation"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_r_ankleRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_r_kneeRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_r_hipRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_l_ankleRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_l_kneeRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_l_hipRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_lower_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_r_wristRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_r_elbowRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_r_shoulderRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_l_wristRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_l_elbowRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_l_shoulderRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_headRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_neckRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_upper_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_whole_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaws_whole_bodyTransInterp", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaw_l_sternoclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaw_l_acromioclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaw_r_sternoclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaw_r_acromioclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaw_r_metatarsalPitch", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaw_sacroiliacYaw", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaw_vl5Yaw", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaw_vc6Yaw", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaw_l_thumb1Pitch", toField="set_fraction"),
ROUTE(fromNode="YawTimer", fromField="fraction_changed", toNode="Yaw_r_thumb1Pitch", toField="set_fraction"),
ROUTE(fromNode="Yaws_r_ankleRotInterp", fromField="value_changed", toNode="hanim_r_ankle", toField="set_rotation"),
ROUTE(fromNode="Yaws_r_kneeRotInterp", fromField="value_changed", toNode="hanim_r_knee", toField="set_rotation"),
ROUTE(fromNode="Yaws_r_hipRotInterp", fromField="value_changed", toNode="hanim_r_hip", toField="set_rotation"),
ROUTE(fromNode="Yaws_l_ankleRotInterp", fromField="value_changed", toNode="hanim_l_ankle", toField="set_rotation"),
ROUTE(fromNode="Yaws_l_kneeRotInterp", fromField="value_changed", toNode="hanim_l_knee", toField="set_rotation"),
ROUTE(fromNode="Yaws_l_hipRotInterp", fromField="value_changed", toNode="hanim_l_hip", toField="set_rotation"),
ROUTE(fromNode="Yaws_lower_bodyRotInterp", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Yaws_r_wristRotInterp", fromField="value_changed", toNode="hanim_r_wrist", toField="set_rotation"),
ROUTE(fromNode="Yaws_r_elbowRotInterp", fromField="value_changed", toNode="hanim_r_elbow", toField="set_rotation"),
ROUTE(fromNode="Yaws_r_shoulderRotInterp", fromField="value_changed", toNode="hanim_r_shoulder", toField="set_rotation"),
ROUTE(fromNode="Yaws_l_wristRotInterp", fromField="value_changed", toNode="hanim_l_wrist", toField="set_rotation"),
ROUTE(fromNode="Yaws_l_elbowRotInterp", fromField="value_changed", toNode="hanim_l_elbow", toField="set_rotation"),
ROUTE(fromNode="Yaws_l_shoulderRotInterp", fromField="value_changed", toNode="hanim_l_shoulder", toField="set_rotation"),
ROUTE(fromNode="Yaws_headRotInterp", fromField="value_changed", toNode="hanim_skullbase", toField="set_rotation"),
ROUTE(fromNode="Yaws_neckRotInterp", fromField="value_changed", toNode="hanim_vc4", toField="set_rotation"),
ROUTE(fromNode="Yaws_upper_bodyRotInterp", fromField="value_changed", toNode="hanim_vl1", toField="set_rotation"),
ROUTE(fromNode="Yaws_whole_bodyRotInterp", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_rotation"),
ROUTE(fromNode="Yaws_whole_bodyTransInterp", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_translation"),
ROUTE(fromNode="Yaw_l_sternoclavicularRoll", fromField="value_changed", toNode="hanim_l_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Yaw_l_acromioclavicularRoll", fromField="value_changed", toNode="hanim_l_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Yaw_r_sternoclavicularRoll", fromField="value_changed", toNode="hanim_r_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Yaw_r_acromioclavicularRoll", fromField="value_changed", toNode="hanim_r_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Yaw_r_metatarsalPitch", fromField="value_changed", toNode="hanim_l_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Yaw_r_metatarsalPitch", fromField="value_changed", toNode="hanim_r_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Yaw_sacroiliacYaw", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Yaw_vl5Yaw", fromField="value_changed", toNode="hanim_vl5", toField="set_rotation"),
ROUTE(fromNode="Yaw_vc6Yaw", fromField="value_changed", toNode="hanim_vc6", toField="set_rotation"),
ROUTE(fromNode="Yaw_l_thumb1Pitch", fromField="value_changed", toNode="hanim_l_thumb1", toField="set_rotation"),
ROUTE(fromNode="Yaw_r_thumb1Pitch", fromField="value_changed", toNode="hanim_r_thumb1", toField="set_rotation"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_r_ankleRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_r_kneeRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_r_hipRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_l_ankleRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_l_kneeRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_l_hipRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_lower_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_r_wristRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_r_elbowRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_r_shoulderRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_l_wristRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_l_elbowRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_l_shoulderRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_headRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_neckRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_upper_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_whole_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Rolls_whole_bodyTransInterp", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Roll_l_sternoclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Roll_l_acromioclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Roll_r_sternoclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Roll_r_acromioclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Roll_r_metatarsalPitch", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Roll_sacroiliacYaw", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Roll_vl5Yaw", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Roll_vc6Yaw", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Roll_l_thumb1Pitch", toField="set_fraction"),
ROUTE(fromNode="RollTimer", fromField="fraction_changed", toNode="Roll_r_thumb1Pitch", toField="set_fraction"),
ROUTE(fromNode="Rolls_r_ankleRotInterp", fromField="value_changed", toNode="hanim_r_ankle", toField="set_rotation"),
ROUTE(fromNode="Rolls_r_kneeRotInterp", fromField="value_changed", toNode="hanim_r_knee", toField="set_rotation"),
ROUTE(fromNode="Rolls_r_hipRotInterp", fromField="value_changed", toNode="hanim_r_hip", toField="set_rotation"),
ROUTE(fromNode="Rolls_l_ankleRotInterp", fromField="value_changed", toNode="hanim_l_ankle", toField="set_rotation"),
ROUTE(fromNode="Rolls_l_kneeRotInterp", fromField="value_changed", toNode="hanim_l_knee", toField="set_rotation"),
ROUTE(fromNode="Rolls_l_hipRotInterp", fromField="value_changed", toNode="hanim_l_hip", toField="set_rotation"),
ROUTE(fromNode="Rolls_lower_bodyRotInterp", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Rolls_r_wristRotInterp", fromField="value_changed", toNode="hanim_r_wrist", toField="set_rotation"),
ROUTE(fromNode="Rolls_r_elbowRotInterp", fromField="value_changed", toNode="hanim_r_elbow", toField="set_rotation"),
ROUTE(fromNode="Rolls_r_shoulderRotInterp", fromField="value_changed", toNode="hanim_r_shoulder", toField="set_rotation"),
ROUTE(fromNode="Rolls_l_wristRotInterp", fromField="value_changed", toNode="hanim_l_wrist", toField="set_rotation"),
ROUTE(fromNode="Rolls_l_elbowRotInterp", fromField="value_changed", toNode="hanim_l_elbow", toField="set_rotation"),
ROUTE(fromNode="Rolls_l_shoulderRotInterp", fromField="value_changed", toNode="hanim_l_shoulder", toField="set_rotation"),
ROUTE(fromNode="Rolls_headRotInterp", fromField="value_changed", toNode="hanim_skullbase", toField="set_rotation"),
ROUTE(fromNode="Rolls_neckRotInterp", fromField="value_changed", toNode="hanim_vc4", toField="set_rotation"),
ROUTE(fromNode="Rolls_upper_bodyRotInterp", fromField="value_changed", toNode="hanim_vl1", toField="set_rotation"),
ROUTE(fromNode="Rolls_whole_bodyRotInterp", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_rotation"),
ROUTE(fromNode="Rolls_whole_bodyTransInterp", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_translation"),
ROUTE(fromNode="Roll_l_sternoclavicularRoll", fromField="value_changed", toNode="hanim_l_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Roll_l_acromioclavicularRoll", fromField="value_changed", toNode="hanim_l_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Roll_r_sternoclavicularRoll", fromField="value_changed", toNode="hanim_r_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Roll_r_acromioclavicularRoll", fromField="value_changed", toNode="hanim_r_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Roll_r_metatarsalPitch", fromField="value_changed", toNode="hanim_l_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Roll_r_metatarsalPitch", fromField="value_changed", toNode="hanim_r_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Roll_sacroiliacYaw", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Roll_vl5Yaw", fromField="value_changed", toNode="hanim_vl5", toField="set_rotation"),
ROUTE(fromNode="Roll_vc6Yaw", fromField="value_changed", toNode="hanim_vc6", toField="set_rotation"),
ROUTE(fromNode="Roll_l_thumb1Pitch", fromField="value_changed", toNode="hanim_l_thumb1", toField="set_rotation"),
ROUTE(fromNode="Roll_r_thumb1Pitch", fromField="value_changed", toNode="hanim_r_thumb1", toField="set_rotation"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_r_ankleRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_r_kneeRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_r_hipRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_l_ankleRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_l_kneeRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_l_hipRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_lower_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_r_wristRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_r_elbowRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_r_shoulderRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_l_wristRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_l_elbowRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_l_shoulderRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_headRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_neckRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_upper_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_whole_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_whole_bodyTranInterp", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_l_sternoclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_l_acromioclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_r_sternoclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_r_acromioclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_r_metatarsalPitch", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_sacroiliacYaw", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_vl5Yaw", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_vc6Yaw", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_l_thumb1Pitch", toField="set_fraction"),
ROUTE(fromNode="WalkTimer", fromField="fraction_changed", toNode="Walk_r_thumb1Pitch", toField="set_fraction"),
ROUTE(fromNode="Walk_r_ankleRotInterp", fromField="value_changed", toNode="hanim_r_ankle", toField="set_rotation"),
ROUTE(fromNode="Walk_r_kneeRotInterp", fromField="value_changed", toNode="hanim_r_knee", toField="set_rotation"),
ROUTE(fromNode="Walk_r_hipRotInterp", fromField="value_changed", toNode="hanim_r_hip", toField="set_rotation"),
ROUTE(fromNode="Walk_l_ankleRotInterp", fromField="value_changed", toNode="hanim_l_ankle", toField="set_rotation"),
ROUTE(fromNode="Walk_l_kneeRotInterp", fromField="value_changed", toNode="hanim_l_knee", toField="set_rotation"),
ROUTE(fromNode="Walk_l_hipRotInterp", fromField="value_changed", toNode="hanim_l_hip", toField="set_rotation"),
ROUTE(fromNode="Walk_lower_bodyRotInterp", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Walk_r_wristRotInterp", fromField="value_changed", toNode="hanim_r_wrist", toField="set_rotation"),
ROUTE(fromNode="Walk_r_elbowRotInterp", fromField="value_changed", toNode="hanim_r_elbow", toField="set_rotation"),
ROUTE(fromNode="Walk_r_shoulderRotInterp", fromField="value_changed", toNode="hanim_r_shoulder", toField="set_rotation"),
ROUTE(fromNode="Walk_l_wristRotInterp", fromField="value_changed", toNode="hanim_l_wrist", toField="set_rotation"),
ROUTE(fromNode="Walk_l_elbowRotInterp", fromField="value_changed", toNode="hanim_l_elbow", toField="set_rotation"),
ROUTE(fromNode="Walk_l_shoulderRotInterp", fromField="value_changed", toNode="hanim_l_shoulder", toField="set_rotation"),
ROUTE(fromNode="Walk_headRotInterp", fromField="value_changed", toNode="hanim_skullbase", toField="set_rotation"),
ROUTE(fromNode="Walk_neckRotInterp", fromField="value_changed", toNode="hanim_vc4", toField="set_rotation"),
ROUTE(fromNode="Walk_upper_bodyRotInterp", fromField="value_changed", toNode="hanim_vl1", toField="set_rotation"),
ROUTE(fromNode="Walk_whole_bodyRotInterp", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_rotation"),
ROUTE(fromNode="Walk_whole_bodyTranInterp", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_translation"),
ROUTE(fromNode="Walk_l_sternoclavicularRoll", fromField="value_changed", toNode="hanim_l_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Walk_l_acromioclavicularRoll", fromField="value_changed", toNode="hanim_l_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Walk_r_sternoclavicularRoll", fromField="value_changed", toNode="hanim_r_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Walk_r_acromioclavicularRoll", fromField="value_changed", toNode="hanim_r_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Walk_r_metatarsalPitch", fromField="value_changed", toNode="hanim_l_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Walk_r_metatarsalPitch", fromField="value_changed", toNode="hanim_r_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Walk_sacroiliacYaw", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Walk_vl5Yaw", fromField="value_changed", toNode="hanim_vl5", toField="set_rotation"),
ROUTE(fromNode="Walk_vc6Yaw", fromField="value_changed", toNode="hanim_vc6", toField="set_rotation"),
ROUTE(fromNode="Walk_l_thumb1Pitch", fromField="value_changed", toNode="hanim_l_thumb1", toField="set_rotation"),
ROUTE(fromNode="Walk_r_thumb1Pitch", fromField="value_changed", toNode="hanim_r_thumb1", toField="set_rotation"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_r_ankleRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_r_kneeRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_r_hipRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_l_ankleRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_l_kneeRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_l_hipRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_lower_bodyRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_r_wristRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_r_elbowRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_r_shoulderRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_l_wristRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_l_elbowRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_l_shoulderRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_headRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_neckRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_upper_bodyRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_whole_bodyRotInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_whole_bodyTranInterp_Run", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_l_sternoclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_l_acromioclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_r_sternoclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_r_acromioclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_r_metatarsalPitch", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_sacroiliacYaw", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_vl5Yaw", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_vc6Yaw", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_l_thumb1Pitch", toField="set_fraction"),
ROUTE(fromNode="RunTimer", fromField="fraction_changed", toNode="Run_r_thumb1Pitch", toField="set_fraction"),
ROUTE(fromNode="Run_r_ankleRotInterp_Run", fromField="value_changed", toNode="hanim_r_ankle", toField="set_rotation"),
ROUTE(fromNode="Run_r_kneeRotInterp_Run", fromField="value_changed", toNode="hanim_r_knee", toField="set_rotation"),
ROUTE(fromNode="Run_r_hipRotInterp_Run", fromField="value_changed", toNode="hanim_r_hip", toField="set_rotation"),
ROUTE(fromNode="Run_l_ankleRotInterp_Run", fromField="value_changed", toNode="hanim_l_ankle", toField="set_rotation"),
ROUTE(fromNode="Run_l_kneeRotInterp_Run", fromField="value_changed", toNode="hanim_l_knee", toField="set_rotation"),
ROUTE(fromNode="Run_l_hipRotInterp_Run", fromField="value_changed", toNode="hanim_l_hip", toField="set_rotation"),
ROUTE(fromNode="Run_r_wristRotInterp_Run", fromField="value_changed", toNode="hanim_r_wrist", toField="set_rotation"),
ROUTE(fromNode="Run_r_elbowRotInterp_Run", fromField="value_changed", toNode="hanim_r_elbow", toField="set_rotation"),
ROUTE(fromNode="Run_r_shoulderRotInterp_Run", fromField="value_changed", toNode="hanim_r_shoulder", toField="set_rotation"),
ROUTE(fromNode="Run_l_wristRotInterp_Run", fromField="value_changed", toNode="hanim_l_wrist", toField="set_rotation"),
ROUTE(fromNode="Run_l_elbowRotInterp_Run", fromField="value_changed", toNode="hanim_l_elbow", toField="set_rotation"),
ROUTE(fromNode="Run_l_shoulderRotInterp_Run", fromField="value_changed", toNode="hanim_l_shoulder", toField="set_rotation"),
ROUTE(fromNode="Run_lower_bodyRotInterp_Run", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Run_headRotInterp_Run", fromField="value_changed", toNode="hanim_skullbase", toField="set_rotation"),
ROUTE(fromNode="Run_neckRotInterp_Run", fromField="value_changed", toNode="hanim_vc4", toField="set_rotation"),
ROUTE(fromNode="Run_upper_bodyRotInterp_Run", fromField="value_changed", toNode="hanim_vl1", toField="set_rotation"),
ROUTE(fromNode="Run_whole_bodyRotInterp_Run", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_rotation"),
ROUTE(fromNode="Run_whole_bodyTranInterp_Run", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_translation"),
ROUTE(fromNode="Run_l_sternoclavicularRoll", fromField="value_changed", toNode="hanim_l_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Run_l_acromioclavicularRoll", fromField="value_changed", toNode="hanim_l_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Run_r_sternoclavicularRoll", fromField="value_changed", toNode="hanim_r_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Run_r_acromioclavicularRoll", fromField="value_changed", toNode="hanim_r_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Run_r_metatarsalPitch", fromField="value_changed", toNode="hanim_l_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Run_r_metatarsalPitch", fromField="value_changed", toNode="hanim_r_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Run_sacroiliacYaw", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Run_vl5Yaw", fromField="value_changed", toNode="hanim_vl5", toField="set_rotation"),
ROUTE(fromNode="Run_vc6Yaw", fromField="value_changed", toNode="hanim_vc6", toField="set_rotation"),
ROUTE(fromNode="Run_l_thumb1Pitch", fromField="value_changed", toNode="hanim_l_thumb1", toField="set_rotation"),
ROUTE(fromNode="Run_r_thumb1Pitch", fromField="value_changed", toNode="hanim_r_thumb1", toField="set_rotation"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_r_ankleRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_r_kneeRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_r_hipRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_l_ankleRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_l_kneeRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_l_hipRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_lower_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_r_wristRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_r_elbowRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_r_shoulderRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_l_wristRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_l_elbowRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_l_shoulderRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_headRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_neckRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_upper_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_whole_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_whole_bodyTranInterp", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_l_sternoclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_l_acromioclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_r_sternoclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_r_acromioclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_r_metatarsalPitch", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_sacroiliacYaw", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_vl5Yaw", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_vc6Yaw", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_l_thumb1Pitch", toField="set_fraction"),
ROUTE(fromNode="JumpTimer", fromField="fraction_changed", toNode="Jump_r_thumb1Pitch", toField="set_fraction"),
ROUTE(fromNode="Jump_r_ankleRotInterp", fromField="value_changed", toNode="hanim_r_ankle", toField="set_rotation"),
ROUTE(fromNode="Jump_r_kneeRotInterp", fromField="value_changed", toNode="hanim_r_knee", toField="set_rotation"),
ROUTE(fromNode="Jump_r_hipRotInterp", fromField="value_changed", toNode="hanim_r_hip", toField="set_rotation"),
ROUTE(fromNode="Jump_l_ankleRotInterp", fromField="value_changed", toNode="hanim_l_ankle", toField="set_rotation"),
ROUTE(fromNode="Jump_l_kneeRotInterp", fromField="value_changed", toNode="hanim_l_knee", toField="set_rotation"),
ROUTE(fromNode="Jump_l_hipRotInterp", fromField="value_changed", toNode="hanim_l_hip", toField="set_rotation"),
ROUTE(fromNode="Jump_lower_bodyRotInterp", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Jump_r_wristRotInterp", fromField="value_changed", toNode="hanim_r_wrist", toField="set_rotation"),
ROUTE(fromNode="Jump_r_elbowRotInterp", fromField="value_changed", toNode="hanim_r_elbow", toField="set_rotation"),
ROUTE(fromNode="Jump_r_shoulderRotInterp", fromField="value_changed", toNode="hanim_r_shoulder", toField="set_rotation"),
ROUTE(fromNode="Jump_l_wristRotInterp", fromField="value_changed", toNode="hanim_l_wrist", toField="set_rotation"),
ROUTE(fromNode="Jump_l_elbowRotInterp", fromField="value_changed", toNode="hanim_l_elbow", toField="set_rotation"),
ROUTE(fromNode="Jump_l_shoulderRotInterp", fromField="value_changed", toNode="hanim_l_shoulder", toField="set_rotation"),
ROUTE(fromNode="Jump_headRotInterp", fromField="value_changed", toNode="hanim_skullbase", toField="set_rotation"),
ROUTE(fromNode="Jump_neckRotInterp", fromField="value_changed", toNode="hanim_vc4", toField="set_rotation"),
ROUTE(fromNode="Jump_upper_bodyRotInterp", fromField="value_changed", toNode="hanim_vl1", toField="set_rotation"),
ROUTE(fromNode="Jump_whole_bodyRotInterp", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_rotation"),
ROUTE(fromNode="Jump_whole_bodyTranInterp", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_translation"),
ROUTE(fromNode="Jump_l_sternoclavicularRoll", fromField="value_changed", toNode="hanim_l_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Jump_l_acromioclavicularRoll", fromField="value_changed", toNode="hanim_l_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Jump_r_sternoclavicularRoll", fromField="value_changed", toNode="hanim_r_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Jump_r_acromioclavicularRoll", fromField="value_changed", toNode="hanim_r_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Jump_r_metatarsalPitch", fromField="value_changed", toNode="hanim_l_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Jump_r_metatarsalPitch", fromField="value_changed", toNode="hanim_r_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Jump_sacroiliacYaw", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Jump_vl5Yaw", fromField="value_changed", toNode="hanim_vl5", toField="set_rotation"),
ROUTE(fromNode="Jump_vc6Yaw", fromField="value_changed", toNode="hanim_vc6", toField="set_rotation"),
ROUTE(fromNode="Jump_l_thumb1Pitch", fromField="value_changed", toNode="hanim_l_thumb1", toField="set_rotation"),
ROUTE(fromNode="Jump_r_thumb1Pitch", fromField="value_changed", toNode="hanim_r_thumb1", toField="set_rotation"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_l_sternoclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_l_acromioclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_l_shoulderRoll", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_l_ForeArmPitch", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_l_wristRoll", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_l_thumb1Pitch", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_r_sternoclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_r_acromioclavicularRoll", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_r_shoulderRoll", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_r_ForeArmPitch", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_r_wristRoll", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_r_thumb1Pitch", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_r_hipPitch", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_r_kneePitch", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_l_hipPitch", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_l_kneePitch", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_r_anklePitch", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_r_metatarsalPitch", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_sacroiliacYaw", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_vl5Yaw", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_vc6Yaw", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_lower_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_upper_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_whole_bodyRotInterp", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_whole_bodyTransInterp", toField="set_fraction"),
ROUTE(fromNode="KickTimer", fromField="fraction_changed", toNode="Kick_neckRotInterp", toField="set_fraction"),
ROUTE(fromNode="Kick_l_sternoclavicularRoll", fromField="value_changed", toNode="hanim_l_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Kick_l_acromioclavicularRoll", fromField="value_changed", toNode="hanim_l_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Kick_l_shoulderRoll", fromField="value_changed", toNode="hanim_l_shoulder", toField="set_rotation"),
ROUTE(fromNode="Kick_l_ForeArmPitch", fromField="value_changed", toNode="hanim_l_elbow", toField="set_rotation"),
ROUTE(fromNode="Kick_l_wristRoll", fromField="value_changed", toNode="hanim_l_wrist", toField="set_rotation"),
ROUTE(fromNode="Kick_l_thumb1Pitch", fromField="value_changed", toNode="hanim_l_thumb1", toField="set_rotation"),
ROUTE(fromNode="Kick_r_sternoclavicularRoll", fromField="value_changed", toNode="hanim_r_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Kick_r_acromioclavicularRoll", fromField="value_changed", toNode="hanim_r_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Kick_r_shoulderRoll", fromField="value_changed", toNode="hanim_r_shoulder", toField="set_rotation"),
ROUTE(fromNode="Kick_r_ForeArmPitch", fromField="value_changed", toNode="hanim_r_elbow", toField="set_rotation"),
ROUTE(fromNode="Kick_r_wristRoll", fromField="value_changed", toNode="hanim_r_wrist", toField="set_rotation"),
ROUTE(fromNode="Kick_r_thumb1Pitch", fromField="value_changed", toNode="hanim_r_thumb1", toField="set_rotation"),
ROUTE(fromNode="Kick_r_hipPitch", fromField="value_changed", toNode="hanim_r_hip", toField="set_rotation"),
ROUTE(fromNode="Kick_r_kneePitch", fromField="value_changed", toNode="hanim_r_knee", toField="set_rotation"),
ROUTE(fromNode="Kick_r_anklePitch", fromField="value_changed", toNode="hanim_r_ankle", toField="set_rotation"),
ROUTE(fromNode="Kick_r_metatarsalPitch", fromField="value_changed", toNode="hanim_r_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Kick_l_hipPitch", fromField="value_changed", toNode="hanim_l_hip", toField="set_rotation"),
ROUTE(fromNode="Kick_l_kneePitch", fromField="value_changed", toNode="hanim_l_knee", toField="set_rotation"),
ROUTE(fromNode="Kick_r_anklePitch", fromField="value_changed", toNode="hanim_l_ankle", toField="set_rotation"),
ROUTE(fromNode="Kick_r_metatarsalPitch", fromField="value_changed", toNode="hanim_l_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Kick_sacroiliacYaw", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Kick_vl5Yaw", fromField="value_changed", toNode="hanim_vl5", toField="set_rotation"),
ROUTE(fromNode="Kick_vc6Yaw", fromField="value_changed", toNode="hanim_vc6", toField="set_rotation"),
ROUTE(fromNode="Kick_upper_bodyRotInterp", fromField="value_changed", toNode="hanim_vl1", toField="set_rotation"),
ROUTE(fromNode="Kick_lower_bodyRotInterp", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Kick_whole_bodyRotInterp", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_rotation"),
ROUTE(fromNode="Kick_whole_bodyTransInterp", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_translation"),
ROUTE(fromNode="Kick_neckRotInterp", fromField="value_changed", toNode="hanim_vc4", toField="set_rotation"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_HumanoidRootTransInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_HumanoidRootRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_sacroiliacRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_hipRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_kneeRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_ankleRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_subtalarRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_midtarsalRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_metatarsalRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_hipRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_kneeRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_ankleRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_subtalarRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_midtarsalRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_metatarsalRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vl5RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vl4RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vl3RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vl2RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vl1RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vt12RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vt11RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vt10RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vt9RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vt8RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vt7RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vt6RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vt5RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vt4RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vt3RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vt2RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vt1RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vc7RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vc6RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vc5RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vc4RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vc3RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vc2RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_vc1RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_skullbaseRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_eyeball_jointRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_eyeball_jointRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_sternoclavicularRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_acromioclavicularRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_shoulderRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_elbowRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_wristRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_thumb1RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_thumb2RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_thumb3RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_index0RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_index1RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_index2RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_index3RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_middle0RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_middle1RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_middle2RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_middle3RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_ring0RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_ring1RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_ring2RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_ring3RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_pinky0RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_pinky1RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_pinky2RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_l_pinky3RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_sternoclavicularRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_acromioclavicularRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_shoulderRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_elbowRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_wristRotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_thumb1RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_thumb2RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_thumb3RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_index0RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_index1RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_index2RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_index3RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_middle0RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_middle1RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_middle2RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_middle3RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_ring0RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_ring1RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_ring2RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_ring3RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_pinky0RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_pinky1RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_pinky2RotInterp", toField="set_fraction"),
ROUTE(fromNode="StopTimer", fromField="fraction_changed", toNode="Stop_r_pinky3RotInterp", toField="set_fraction"),
ROUTE(fromNode="Stop_HumanoidRootTransInterp", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_translation"),
ROUTE(fromNode="Stop_HumanoidRootRotInterp", fromField="value_changed", toNode="hanim_HumanoidRoot", toField="set_rotation"),
ROUTE(fromNode="Stop_sacroiliacRotInterp", fromField="value_changed", toNode="hanim_sacroiliac", toField="set_rotation"),
ROUTE(fromNode="Stop_l_hipRotInterp", fromField="value_changed", toNode="hanim_l_hip", toField="set_rotation"),
ROUTE(fromNode="Stop_l_kneeRotInterp", fromField="value_changed", toNode="hanim_l_knee", toField="set_rotation"),
ROUTE(fromNode="Stop_l_ankleRotInterp", fromField="value_changed", toNode="hanim_l_ankle", toField="set_rotation"),
ROUTE(fromNode="Stop_l_subtalarRotInterp", fromField="value_changed", toNode="hanim_l_subtalar", toField="set_rotation"),
ROUTE(fromNode="Stop_l_midtarsalRotInterp", fromField="value_changed", toNode="hanim_l_midtarsal", toField="set_rotation"),
ROUTE(fromNode="Stop_l_metatarsalRotInterp", fromField="value_changed", toNode="hanim_l_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Stop_r_hipRotInterp", fromField="value_changed", toNode="hanim_r_hip", toField="set_rotation"),
ROUTE(fromNode="Stop_r_kneeRotInterp", fromField="value_changed", toNode="hanim_r_knee", toField="set_rotation"),
ROUTE(fromNode="Stop_r_ankleRotInterp", fromField="value_changed", toNode="hanim_r_ankle", toField="set_rotation"),
ROUTE(fromNode="Stop_r_subtalarRotInterp", fromField="value_changed", toNode="hanim_r_subtalar", toField="set_rotation"),
ROUTE(fromNode="Stop_r_midtarsalRotInterp", fromField="value_changed", toNode="hanim_r_midtarsal", toField="set_rotation"),
ROUTE(fromNode="Stop_r_metatarsalRotInterp", fromField="value_changed", toNode="hanim_r_metatarsal", toField="set_rotation"),
ROUTE(fromNode="Stop_vl5RotInterp", fromField="value_changed", toNode="hanim_vl5", toField="set_rotation"),
ROUTE(fromNode="Stop_vl4RotInterp", fromField="value_changed", toNode="hanim_vl4", toField="set_rotation"),
ROUTE(fromNode="Stop_vl3RotInterp", fromField="value_changed", toNode="hanim_vl3", toField="set_rotation"),
ROUTE(fromNode="Stop_vl2RotInterp", fromField="value_changed", toNode="hanim_vl2", toField="set_rotation"),
ROUTE(fromNode="Stop_vl1RotInterp", fromField="value_changed", toNode="hanim_vl1", toField="set_rotation"),
ROUTE(fromNode="Stop_vt12RotInterp", fromField="value_changed", toNode="hanim_vt12", toField="set_rotation"),
ROUTE(fromNode="Stop_vt11RotInterp", fromField="value_changed", toNode="hanim_vt11", toField="set_rotation"),
ROUTE(fromNode="Stop_vt10RotInterp", fromField="value_changed", toNode="hanim_vt10", toField="set_rotation"),
ROUTE(fromNode="Stop_vt9RotInterp", fromField="value_changed", toNode="hanim_vt9", toField="set_rotation"),
ROUTE(fromNode="Stop_vt8RotInterp", fromField="value_changed", toNode="hanim_vt8", toField="set_rotation"),
ROUTE(fromNode="Stop_vt7RotInterp", fromField="value_changed", toNode="hanim_vt7", toField="set_rotation"),
ROUTE(fromNode="Stop_vt6RotInterp", fromField="value_changed", toNode="hanim_vt6", toField="set_rotation"),
ROUTE(fromNode="Stop_vt5RotInterp", fromField="value_changed", toNode="hanim_vt5", toField="set_rotation"),
ROUTE(fromNode="Stop_vt4RotInterp", fromField="value_changed", toNode="hanim_vt4", toField="set_rotation"),
ROUTE(fromNode="Stop_vt3RotInterp", fromField="value_changed", toNode="hanim_vt3", toField="set_rotation"),
ROUTE(fromNode="Stop_vt2RotInterp", fromField="value_changed", toNode="hanim_vt2", toField="set_rotation"),
ROUTE(fromNode="Stop_vt1RotInterp", fromField="value_changed", toNode="hanim_vt1", toField="set_rotation"),
ROUTE(fromNode="Stop_vc7RotInterp", fromField="value_changed", toNode="hanim_vc7", toField="set_rotation"),
ROUTE(fromNode="Stop_vc6RotInterp", fromField="value_changed", toNode="hanim_vc6", toField="set_rotation"),
ROUTE(fromNode="Stop_vc5RotInterp", fromField="value_changed", toNode="hanim_vc5", toField="set_rotation"),
ROUTE(fromNode="Stop_vc4RotInterp", fromField="value_changed", toNode="hanim_vc4", toField="set_rotation"),
ROUTE(fromNode="Stop_vc3RotInterp", fromField="value_changed", toNode="hanim_vc3", toField="set_rotation"),
ROUTE(fromNode="Stop_vc2RotInterp", fromField="value_changed", toNode="hanim_vc2", toField="set_rotation"),
ROUTE(fromNode="Stop_vc1RotInterp", fromField="value_changed", toNode="hanim_vc1", toField="set_rotation"),
ROUTE(fromNode="Stop_skullbaseRotInterp", fromField="value_changed", toNode="hanim_skullbase", toField="set_rotation"),
ROUTE(fromNode="Stop_l_eyeball_jointRotInterp", fromField="value_changed", toNode="hanim_l_eyeball_joint", toField="set_rotation"),
ROUTE(fromNode="Stop_r_eyeball_jointRotInterp", fromField="value_changed", toNode="hanim_r_eyeball_joint", toField="set_rotation"),
ROUTE(fromNode="Stop_l_sternoclavicularRotInterp", fromField="value_changed", toNode="hanim_l_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Stop_l_acromioclavicularRotInterp", fromField="value_changed", toNode="hanim_l_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Stop_l_shoulderRotInterp", fromField="value_changed", toNode="hanim_l_shoulder", toField="set_rotation"),
ROUTE(fromNode="Stop_l_elbowRotInterp", fromField="value_changed", toNode="hanim_l_elbow", toField="set_rotation"),
ROUTE(fromNode="Stop_l_wristRotInterp", fromField="value_changed", toNode="hanim_l_wrist", toField="set_rotation"),
ROUTE(fromNode="Stop_l_thumb1RotInterp", fromField="value_changed", toNode="hanim_l_thumb1", toField="set_rotation"),
ROUTE(fromNode="Stop_l_thumb2RotInterp", fromField="value_changed", toNode="hanim_l_thumb2", toField="set_rotation"),
ROUTE(fromNode="Stop_l_thumb3RotInterp", fromField="value_changed", toNode="hanim_l_thumb3", toField="set_rotation"),
ROUTE(fromNode="Stop_l_index0RotInterp", fromField="value_changed", toNode="hanim_l_index0", toField="set_rotation"),
ROUTE(fromNode="Stop_l_index1RotInterp", fromField="value_changed", toNode="hanim_l_index1", toField="set_rotation"),
ROUTE(fromNode="Stop_l_index2RotInterp", fromField="value_changed", toNode="hanim_l_index2", toField="set_rotation"),
ROUTE(fromNode="Stop_l_index3RotInterp", fromField="value_changed", toNode="hanim_l_index3", toField="set_rotation"),
ROUTE(fromNode="Stop_l_middle0RotInterp", fromField="value_changed", toNode="hanim_l_middle0", toField="set_rotation"),
ROUTE(fromNode="Stop_l_middle1RotInterp", fromField="value_changed", toNode="hanim_l_middle1", toField="set_rotation"),
ROUTE(fromNode="Stop_l_middle2RotInterp", fromField="value_changed", toNode="hanim_l_middle2", toField="set_rotation"),
ROUTE(fromNode="Stop_l_middle3RotInterp", fromField="value_changed", toNode="hanim_l_middle3", toField="set_rotation"),
ROUTE(fromNode="Stop_l_ring0RotInterp", fromField="value_changed", toNode="hanim_l_ring0", toField="set_rotation"),
ROUTE(fromNode="Stop_l_ring1RotInterp", fromField="value_changed", toNode="hanim_l_ring1", toField="set_rotation"),
ROUTE(fromNode="Stop_l_ring2RotInterp", fromField="value_changed", toNode="hanim_l_ring2", toField="set_rotation"),
ROUTE(fromNode="Stop_l_ring3RotInterp", fromField="value_changed", toNode="hanim_l_ring3", toField="set_rotation"),
ROUTE(fromNode="Stop_l_pinky0RotInterp", fromField="value_changed", toNode="hanim_l_pinky0", toField="set_rotation"),
ROUTE(fromNode="Stop_l_pinky1RotInterp", fromField="value_changed", toNode="hanim_l_pinky1", toField="set_rotation"),
ROUTE(fromNode="Stop_l_pinky2RotInterp", fromField="value_changed", toNode="hanim_l_pinky2", toField="set_rotation"),
ROUTE(fromNode="Stop_l_pinky3RotInterp", fromField="value_changed", toNode="hanim_l_pinky3", toField="set_rotation"),
ROUTE(fromNode="Stop_r_sternoclavicularRotInterp", fromField="value_changed", toNode="hanim_r_sternoclavicular", toField="set_rotation"),
ROUTE(fromNode="Stop_r_acromioclavicularRotInterp", fromField="value_changed", toNode="hanim_r_acromioclavicular", toField="set_rotation"),
ROUTE(fromNode="Stop_r_shoulderRotInterp", fromField="value_changed", toNode="hanim_r_shoulder", toField="set_rotation"),
ROUTE(fromNode="Stop_r_elbowRotInterp", fromField="value_changed", toNode="hanim_r_elbow", toField="set_rotation"),
ROUTE(fromNode="Stop_r_wristRotInterp", fromField="value_changed", toNode="hanim_r_wrist", toField="set_rotation"),
ROUTE(fromNode="Stop_r_thumb1RotInterp", fromField="value_changed", toNode="hanim_r_thumb1", toField="set_rotation"),
ROUTE(fromNode="Stop_r_thumb2RotInterp", fromField="value_changed", toNode="hanim_r_thumb2", toField="set_rotation"),
ROUTE(fromNode="Stop_r_thumb3RotInterp", fromField="value_changed", toNode="hanim_r_thumb3", toField="set_rotation"),
ROUTE(fromNode="Stop_r_index0RotInterp", fromField="value_changed", toNode="hanim_r_index0", toField="set_rotation"),
ROUTE(fromNode="Stop_r_index1RotInterp", fromField="value_changed", toNode="hanim_r_index1", toField="set_rotation"),
ROUTE(fromNode="Stop_r_index2RotInterp", fromField="value_changed", toNode="hanim_r_index2", toField="set_rotation"),
ROUTE(fromNode="Stop_r_index3RotInterp", fromField="value_changed", toNode="hanim_r_index3", toField="set_rotation"),
ROUTE(fromNode="Stop_r_middle0RotInterp", fromField="value_changed", toNode="hanim_r_middle0", toField="set_rotation"),
ROUTE(fromNode="Stop_r_middle1RotInterp", fromField="value_changed", toNode="hanim_r_middle1", toField="set_rotation"),
ROUTE(fromNode="Stop_r_middle2RotInterp", fromField="value_changed", toNode="hanim_r_middle2", toField="set_rotation"),
ROUTE(fromNode="Stop_r_middle3RotInterp", fromField="value_changed", toNode="hanim_r_middle3", toField="set_rotation"),
ROUTE(fromNode="Stop_r_ring0RotInterp", fromField="value_changed", toNode="hanim_r_ring0", toField="set_rotation"),
ROUTE(fromNode="Stop_r_ring1RotInterp", fromField="value_changed", toNode="hanim_r_ring1", toField="set_rotation"),
ROUTE(fromNode="Stop_r_ring2RotInterp", fromField="value_changed", toNode="hanim_r_ring2", toField="set_rotation"),
ROUTE(fromNode="Stop_r_ring3RotInterp", fromField="value_changed", toNode="hanim_r_ring3", toField="set_rotation"),
ROUTE(fromNode="Stop_r_pinky0RotInterp", fromField="value_changed", toNode="hanim_r_pinky0", toField="set_rotation"),
ROUTE(fromNode="Stop_r_pinky1RotInterp", fromField="value_changed", toNode="hanim_r_pinky1", toField="set_rotation"),
ROUTE(fromNode="Stop_r_pinky2RotInterp", fromField="value_changed", toNode="hanim_r_pinky2", toField="set_rotation"),
ROUTE(fromNode="Stop_r_pinky3RotInterp", fromField="value_changed", toNode="hanim_r_pinky3", toField="set_rotation"),
ROUTE(fromNode="HudProx", fromField="position_changed", toNode="HudXform", toField="set_translation"),
ROUTE(fromNode="HudProx", fromField="orientation_changed", toNode="HudXform", toField="set_rotation"),
ROUTE(fromNode="Stand_Touch", fromField="touchTime", toNode="PitchTimer", toField="set_stopTime"),
ROUTE(fromNode="Stand_Touch", fromField="touchTime", toNode="YawTimer", toField="set_stopTime"),
ROUTE(fromNode="Stand_Touch", fromField="touchTime", toNode="RollTimer", toField="set_stopTime"),
ROUTE(fromNode="Stand_Touch", fromField="touchTime", toNode="WalkTimer", toField="set_stopTime"),
ROUTE(fromNode="Stand_Touch", fromField="touchTime", toNode="RunTimer", toField="set_stopTime"),
ROUTE(fromNode="Stand_Touch", fromField="touchTime", toNode="JumpTimer", toField="set_stopTime"),
ROUTE(fromNode="Stand_Touch", fromField="touchTime", toNode="KickTimer", toField="set_stopTime"),
ROUTE(fromNode="Stand_Touch", fromField="touchTime", toNode="StopTimer", toField="set_stopTime"),
ROUTE(fromNode="Stand_Touch", fromField="touchTime", toNode="StandTimer", toField="set_startTime"),
ROUTE(fromNode="Pitch_Touch", fromField="touchTime", toNode="StandTimer", toField="set_stopTime"),
ROUTE(fromNode="Pitch_Touch", fromField="touchTime", toNode="YawTimer", toField="set_stopTime"),
ROUTE(fromNode="Pitch_Touch", fromField="touchTime", toNode="RollTimer", toField="set_stopTime"),
ROUTE(fromNode="Pitch_Touch", fromField="touchTime", toNode="WalkTimer", toField="set_stopTime"),
ROUTE(fromNode="Pitch_Touch", fromField="touchTime", toNode="RunTimer", toField="set_stopTime"),
ROUTE(fromNode="Pitch_Touch", fromField="touchTime", toNode="JumpTimer", toField="set_stopTime"),
ROUTE(fromNode="Pitch_Touch", fromField="touchTime", toNode="KickTimer", toField="set_stopTime"),
ROUTE(fromNode="Pitch_Touch", fromField="touchTime", toNode="StopTimer", toField="set_stopTime"),
ROUTE(fromNode="Pitch_Touch", fromField="touchTime", toNode="PitchTimer", toField="set_startTime"),
ROUTE(fromNode="Yaw_Touch", fromField="touchTime", toNode="StandTimer", toField="set_stopTime"),
ROUTE(fromNode="Yaw_Touch", fromField="touchTime", toNode="PitchTimer", toField="set_stopTime"),
ROUTE(fromNode="Yaw_Touch", fromField="touchTime", toNode="RollTimer", toField="set_stopTime"),
ROUTE(fromNode="Yaw_Touch", fromField="touchTime", toNode="WalkTimer", toField="set_stopTime"),
ROUTE(fromNode="Yaw_Touch", fromField="touchTime", toNode="RunTimer", toField="set_stopTime"),
ROUTE(fromNode="Yaw_Touch", fromField="touchTime", toNode="JumpTimer", toField="set_stopTime"),
ROUTE(fromNode="Yaw_Touch", fromField="touchTime", toNode="KickTimer", toField="set_stopTime"),
ROUTE(fromNode="Yaw_Touch", fromField="touchTime", toNode="StopTimer", toField="set_stopTime"),
ROUTE(fromNode="Yaw_Touch", fromField="touchTime", toNode="YawTimer", toField="set_startTime"),
ROUTE(fromNode="Walk_Touch", fromField="touchTime", toNode="StandTimer", toField="set_stopTime"),
ROUTE(fromNode="Walk_Touch", fromField="touchTime", toNode="PitchTimer", toField="set_stopTime"),
ROUTE(fromNode="Walk_Touch", fromField="touchTime", toNode="YawTimer", toField="set_stopTime"),
ROUTE(fromNode="Walk_Touch", fromField="touchTime", toNode="RollTimer", toField="set_stopTime"),
ROUTE(fromNode="Walk_Touch", fromField="touchTime", toNode="RunTimer", toField="set_stopTime"),
ROUTE(fromNode="Walk_Touch", fromField="touchTime", toNode="JumpTimer", toField="set_stopTime"),
ROUTE(fromNode="Walk_Touch", fromField="touchTime", toNode="KickTimer", toField="set_stopTime"),
ROUTE(fromNode="Walk_Touch", fromField="touchTime", toNode="StopTimer", toField="set_stopTime"),
ROUTE(fromNode="Walk_Touch", fromField="touchTime", toNode="WalkTimer", toField="set_startTime"),
ROUTE(fromNode="Roll_Touch", fromField="touchTime", toNode="StandTimer", toField="set_stopTime"),
ROUTE(fromNode="Roll_Touch", fromField="touchTime", toNode="PitchTimer", toField="set_stopTime"),
ROUTE(fromNode="Roll_Touch", fromField="touchTime", toNode="YawTimer", toField="set_stopTime"),
ROUTE(fromNode="Roll_Touch", fromField="touchTime", toNode="WalkTimer", toField="set_stopTime"),
ROUTE(fromNode="Roll_Touch", fromField="touchTime", toNode="RunTimer", toField="set_stopTime"),
ROUTE(fromNode="Roll_Touch", fromField="touchTime", toNode="JumpTimer", toField="set_stopTime"),
ROUTE(fromNode="Roll_Touch", fromField="touchTime", toNode="KickTimer", toField="set_stopTime"),
ROUTE(fromNode="Roll_Touch", fromField="touchTime", toNode="StopTimer", toField="set_stopTime"),
ROUTE(fromNode="Roll_Touch", fromField="touchTime", toNode="RollTimer", toField="set_startTime"),
ROUTE(fromNode="Run_Touch", fromField="touchTime", toNode="StandTimer", toField="set_stopTime"),
ROUTE(fromNode="Run_Touch", fromField="touchTime", toNode="PitchTimer", toField="set_stopTime"),
ROUTE(fromNode="Run_Touch", fromField="touchTime", toNode="YawTimer", toField="set_stopTime"),
ROUTE(fromNode="Run_Touch", fromField="touchTime", toNode="RollTimer", toField="set_stopTime"),
ROUTE(fromNode="Run_Touch", fromField="touchTime", toNode="WalkTimer", toField="set_stopTime"),
ROUTE(fromNode="Run_Touch", fromField="touchTime", toNode="JumpTimer", toField="set_stopTime"),
ROUTE(fromNode="Run_Touch", fromField="touchTime", toNode="KickTimer", toField="set_stopTime"),
ROUTE(fromNode="Run_Touch", fromField="touchTime", toNode="StopTimer", toField="set_stopTime"),
ROUTE(fromNode="Run_Touch", fromField="touchTime", toNode="RunTimer", toField="set_startTime"),
ROUTE(fromNode="Jump_Touch", fromField="touchTime", toNode="StandTimer", toField="set_stopTime"),
ROUTE(fromNode="Jump_Touch", fromField="touchTime", toNode="PitchTimer", toField="set_stopTime"),
ROUTE(fromNode="Jump_Touch", fromField="touchTime", toNode="YawTimer", toField="set_stopTime"),
ROUTE(fromNode="Jump_Touch", fromField="touchTime", toNode="RollTimer", toField="set_stopTime"),
ROUTE(fromNode="Jump_Touch", fromField="touchTime", toNode="WalkTimer", toField="set_stopTime"),
ROUTE(fromNode="Jump_Touch", fromField="touchTime", toNode="RunTimer", toField="set_stopTime"),
ROUTE(fromNode="Jump_Touch", fromField="touchTime", toNode="KickTimer", toField="set_stopTime"),
ROUTE(fromNode="Jump_Touch", fromField="touchTime", toNode="StopTimer", toField="set_stopTime"),
ROUTE(fromNode="Jump_Touch", fromField="touchTime", toNode="JumpTimer", toField="set_startTime"),
ROUTE(fromNode="Kick_Touch", fromField="touchTime", toNode="StandTimer", toField="set_stopTime"),
ROUTE(fromNode="Kick_Touch", fromField="touchTime", toNode="PitchTimer", toField="set_stopTime"),
ROUTE(fromNode="Kick_Touch", fromField="touchTime", toNode="YawTimer", toField="set_stopTime"),
ROUTE(fromNode="Kick_Touch", fromField="touchTime", toNode="RollTimer", toField="set_stopTime"),
ROUTE(fromNode="Kick_Touch", fromField="touchTime", toNode="WalkTimer", toField="set_stopTime"),
ROUTE(fromNode="Kick_Touch", fromField="touchTime", toNode="RunTimer", toField="set_stopTime"),
ROUTE(fromNode="Kick_Touch", fromField="touchTime", toNode="JumpTimer", toField="set_stopTime"),
ROUTE(fromNode="Kick_Touch", fromField="touchTime", toNode="StopTimer", toField="set_stopTime"),
ROUTE(fromNode="Kick_Touch", fromField="touchTime", toNode="KickTimer", toField="set_startTime"),
ROUTE(fromNode="Stop_Touch", fromField="touchTime", toNode="StandTimer", toField="set_stopTime"),
ROUTE(fromNode="Stop_Touch", fromField="touchTime", toNode="PitchTimer", toField="set_stopTime"),
ROUTE(fromNode="Stop_Touch", fromField="touchTime", toNode="YawTimer", toField="set_stopTime"),
ROUTE(fromNode="Stop_Touch", fromField="touchTime", toNode="RollTimer", toField="set_stopTime"),
ROUTE(fromNode="Stop_Touch", fromField="touchTime", toNode="WalkTimer", toField="set_stopTime"),
ROUTE(fromNode="Stop_Touch", fromField="touchTime", toNode="RunTimer", toField="set_stopTime"),
ROUTE(fromNode="Stop_Touch", fromField="touchTime", toNode="JumpTimer", toField="set_stopTime"),
ROUTE(fromNode="Stop_Touch", fromField="touchTime", toNode="KickTimer", toField="set_stopTime"),
ROUTE(fromNode="Stop_Touch", fromField="touchTime", toNode="StopTimer", toField="set_startTime")]))
.XML())
