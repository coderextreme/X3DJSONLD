'''
x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
'''
from x3d import *
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
Group(DEF="JointCenters_WorldInfo", children=[
WorldInfo(info=["By Joe for Joe"], title="HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3")]),
Group(children=[
Transform(scale=((10,10,10)), translation=((0,3,0)), children=[
Shape(DEF="jointbox", 
geometry=
IndexedFaceSet(coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1], creaseAngle=0.10000000149011612, 
coord=
Coordinate(point=[(0,0.009999999776482582,0),(-0.009999999776482582,0,0),(0,0,0.015699999406933784),(0.009999999776482582,0,0),(0,0,-0.009999999776482582),(0,-0.009999999776482582,0)]), 
color=(
Color(color=[(1,0,0),(0,0,1),(0,1,0),(1,1,1),(0,1,1),(1,1,0)]))), 
appearance=
Appearance(
material=
Material(ambientIntensity=0.5, diffuseColor=((0,0,0)), shininess=1, transparency=1)))]),
Transform(scale=((0.10000000149011612,0.10000000149011612,0.10000000149011612)), translation=((0,0.10000000149011612,0)), children=[
Shape(DEF="sitebox", 
geometry=
IndexedFaceSet(coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1], creaseAngle=0.10000000149011612, 
coord=
Coordinate(point=[(0,0.009999999776482582,0),(-0.009999999776482582,0,0),(0,0,0.009999999776482582),(0.009999999776482582,0,0),(0,0,-0.009999999776482582),(0,-0.009999999776482582,0)])), 
appearance=
Appearance(
material=
Material(ambientIntensity=1, diffuseColor=((1,0,0)), emissiveColor=((1,0,0)), shininess=0.699999988079071, specularColor=((1,0,0)), transparency=0.6000000238418579)))]),
Transform(scale=((0.10000000149011612,0.10000000149011612,0.10000000149011612)), translation=((0,0.20000000298023224,0)), children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,0,0),(0,9.999999747378752e-05,0)])), 
appearance=
Appearance(DEF="SegmentLine", 
material=
Material(diffuseColor=((0,1,0)), emissiveColor=((0,1,0)), specularColor=((0,1,0)), transparency=0.800000011920929)))]),
Transform(scale=((0.10000000149011612,0.10000000149011612,0.10000000149011612)), translation=((0,0.30000001192092896,0)), children=[
Shape(DEF="skinsphere", 
geometry=
Sphere(radius=0.004999999888241291), 
appearance=
Appearance(
material=
Material(ambientIntensity=0.5, diffuseColor=((0,1,0)), emissiveColor=((0,1,0)), shininess=1, specularColor=((0,1,0)))))])]),
Group(DEF="SpecHumanoid", children=[
Group(DEF="JoeISOHumanoid", children=[
HAnimHumanoid(name="Joe", DEF="JoeHumanoid", version="1.0", joints=(
HAnimJoint(name="HumanoidRoot", DEF="Joe_HumanoidRoot", center=((0,0.875,0)), translation=((0,0.875,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="sacrum", DEF="Joe_sacrum", children=[
Shape(USE="jointbox"),
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,0.875,0),(0,0.9200000166893005,0)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="sacroiliac", DEF="Joe_sacroiliac", center=((0,0.9200000166893005,0)), skinCoordIndex=[17,19,20,21,22,23,26,27,73,82,89,91,93], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(0.3499999940395355),float(0.3499999940395355),float(1)], translation=((0,0.914900004863739,0.0015999999595806003)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="pelvis", DEF="Joe_pelvis", children=[
Shape(USE="jointbox"),
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1], 
coord=
Coordinate(point=[(0,0.9200000166893005,0),(0.09610000252723694,0.9124000072479248,0),(-0.0949999988079071,0.9171000123023987,0.002899999963119626),(0,1.0449999570846558,-0.0949999988079071)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="l_iliocristale", DEF="Joe_l_iliocristale", translation=((0.14249999821186066,1.065000057220459,0.0032999999821186066)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_trochanterion", DEF="Joe_l_trochanterion", translation=((0.15000000596046448,0.8999999761581421,-0.009999999776482582)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_iliocristale", DEF="Joe_r_iliocristale", translation=((-0.14249999821186066,1.065000057220459,0.0032999999821186066)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_trochanterion", DEF="Joe_r_trochanterion", translation=((-0.15000000596046448,0.8999999761581421,-0.009999999776482582)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_asis", DEF="Joe_l_asis", translation=((0.09350000321865082,1.0299999713897705,0.07500000298023224)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_asis", DEF="Joe_r_asis", translation=((-0.09350000321865082,1.0299999713897705,0.07500000298023224)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_psis", DEF="Joe_l_psis", translation=((0.07729999721050262,1.0190000534057617,-0.11999999731779099)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_psis", DEF="Joe_r_psis", translation=((-0.07729999721050262,1.0190000534057617,-0.11999999731779099)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="floormarker", DEF="Joe_floormarker", children=[
Transform(scale=((3,3,3)), children=[
Shape(USE="sitebox")])]),
HAnimSite(name="crotch", DEF="Joe_crotch", translation=((0,0.8700000047683716,-0.02199999988079071)), children=[
Shape(USE="sitebox")]),
Transform(translation=((0,0.9200000166893005,0.07999999821186066)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0,0.8700000047683716,-0.02199999988079071)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="l_hip", DEF="Joe_l_hip", center=((0.10000000149011612,0.9200000166893005,0)), skinCoordIndex=[89,90,94,95,96,97], skinCoordWeight=[float(0.6499999761581421),float(1),float(1),float(1),float(1),float(1)], translation=((0.10000000149011612,0.9200000166893005,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_thigh", DEF="Joe_l_thigh", children=[
Shape(USE="jointbox"),
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.10000000149011612,0.9200000166893005,0),(0.11500000208616257,0.4659999907016754,0)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="l_knee_crease", DEF="Joe_l_knee_crease", translation=((0.11500000208616257,0.4659999907016754,-0.054999999701976776)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_femoral_lateral_epicn", DEF="Joe_l_femoral_lateral_epicn", translation=((0.17000000178813934,0.4659999907016754,0)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_femoral_medial_epicn", DEF="Joe_l_femoral_medial_epicn", translation=((0.05000000074505806,0.4659999907016754,0)), children=[
Shape(USE="sitebox")]),
Transform(translation=((0.10000000149011612,0.8999999761581421,0.07750000059604645)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.07900000363588333,0.9200000166893005,-0.14000000059604645)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.17100000381469727,0.6499999761581421,0)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.019999999552965164,0.6499999761581421,0)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.10000000149011612,0.6499999761581421,-0.07999999821186066)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.10000000149011612,0.6499999761581421,0.07000000029802322)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="l_knee", DEF="Joe_l_knee", center=((0.11500000208616257,0.4659999907016754,0)), skinCoordIndex=[334,335,336,337,338,339,340,341], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], translation=((0.11500000208616257,0.4659999907016754,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_calf", DEF="Joe_l_calf", children=[
Shape(USE="jointbox"),
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.11500000208616257,0.4659999907016754,0),(0.10000000149011612,0.0689999982714653,0)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="l_lateral_malleolus", DEF="Joe_l_lateral_malleolus", translation=((0.15000000596046448,0.07000000029802322,0)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_medial_malleolus", DEF="Joe_l_medial_malleolus", translation=((0.08500000089406967,0.0860000029206276,0.012500000186264515)), children=[
Shape(USE="sitebox")]),
Transform(translation=((0.11500000208616257,0.4659999907016754,0.05999999865889549)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.11500000208616257,0.4659999907016754,-0.054999999701976776)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.17000000178813934,0.4659999907016754,0)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.05000000074505806,0.4659999907016754,0)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.17000000178813934,0.30000001192092896,0)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.05999999865889549,0.30000001192092896,0)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.10000000149011612,0.30000001192092896,-0.05000000074505806)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.10000000149011612,0.30000001192092896,0.05000000074505806)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="l_ankle", DEF="Joe_l_ankle", center=((0.11500000208616257,0.0689999982714653,0)), skinCoordIndex=[342,343,344,345], skinCoordWeight=[float(1),float(1),float(1),float(1)], translation=((0.11500000208616257,0.0689999982714653,0)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_hindfoot", DEF="Joe_l_hindfoot", children=[
Shape(USE="jointbox"),
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.10000000149011612,0.0689999982714653,0),(0.11500000208616257,0.03099999949336052,0.029999999329447746)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="l_sphyrion", DEF="Joe_l_sphyrion", translation=((0.09000000357627869,0.0560000017285347,0.012500000186264515)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_calcaneous_post", DEF="Joe_l_calcaneous_post", translation=((0.11500000208616257,0.03999999910593033,-0.054999999701976776)), children=[
Shape(USE="sitebox")]),
Transform(translation=((0.15000000596046448,0.07000000029802322,0)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.08500000089406967,0.0860000029206276,0.012500000186264515)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.11500000208616257,0.0689999982714653,-0.04500000178813934)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.11699999868869781,0.09749999642372131,0.061500001698732376)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="l_subtalar", DEF="Joe_l_subtalar", center=((0.11500000208616257,0.03099999949336052,0.029999999329447746)), skinCoordIndex=[346,347,348,71], skinCoordWeight=[float(1),float(1),float(1),float(1)], translation=((0.11500000208616257,0.03099999949336052,0.029999999329447746)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_midproximal", DEF="Joe_l_l_midproximal", children=[
Shape(USE="jointbox"),
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.11500000208616257,0.03099999949336052,0.029999999329447746),(0.11500000208616257,0.03700000047683716,0.09000000357627869)])), 
appearance=
Appearance(USE="SegmentLine")),
Transform(translation=((0.13750000298023224,0.006000000052154064,-0.029999999329447746)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.0949999988079071,0.006000000052154064,-0.029999999329447746)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.11500000208616257,0.014999999664723873,-0.04500000178813934)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="l_midtarsal", DEF="Joe_l_midtarsal", center=((0.11500000208616257,0.03700000047683716,0.09000000357627869)), skinCoordIndex=[349,350,351,352], skinCoordWeight=[float(1),float(1),float(1),float(1)], translation=((0.11500000208616257,0.03700000047683716,0.09000000357627869)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_middistal", DEF="Joe_l_middistal", children=[
Shape(USE="jointbox"),
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.11500000208616257,0.03700000047683716,0.09000000357627869),(0.11500000208616257,0.019999999552965164,0.12200000137090683)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="l_metatarsal_pha1", DEF="Joe_l_metatarsal_pha1", translation=((0.08699999749660492,0.009999999776482582,0.12200000137090683)), children=[
Shape(USE="sitebox")]),
Transform(translation=((0.11500000208616257,0.05999999865889549,0.10000000149011612)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.11500000208616257,0,0.07000000029802322)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.16500000655651093,0,0.07000000029802322)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.0949999988079071,0,0.07000000029802322)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="l_metatarsal", DEF="Joe_l_metatarsal", center=((0.11500000208616257,0.019999999552965164,0.12200000137090683)), skinCoordIndex=[353,354,355,356,357,358,359,360,361], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], translation=((0.11500000208616257,0.019999999552965164,0.12999999523162842)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="l_forefoot", DEF="Joe_l_forefoot", children=[
Shape(USE="jointbox"),
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.11500000208616257,0.019999999552965164,0.12200000137090683),(0.13199999928474426,0.013000000268220901,0.1899999976158142)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="l_metatarsal_pha5", DEF="Joe_l_metatarsal_pha5", translation=((0.16500000655651093,0.009999999776482582,0.11999999731779099)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_digit2", DEF="Joe_l_digit2", translation=((0.10999999940395355,0.010999999940395355,0.1899999976158142)), children=[
Shape(USE="sitebox")]),
Transform(translation=((0.11500000208616257,0.03999999910593033,0.12999999523162842)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.125,0,0.11999999731779099)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.16500000655651093,0,0.11999999731779099)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.08699999749660492,0,0.12200000137090683)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.09000000357627869,0.012000000104308128,0.18799999356269836)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.10999999940395355,0.010999999940395355,0.1899999976158142)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.12800000607967377,0.010999999940395355,0.1850000023841858)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.1420000046491623,0.010999999940395355,0.17800000309944153)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.15399999916553497,0.009999999776482582,0.1679999977350235)), children=[
Shape(USE="skinsphere")])])])])])])])]),
HAnimJoint(name="r_hip", DEF="Joe_r_hip", center=((-0.10000000149011612,0.9200000166893005,0)), skinCoordIndex=[91,92,98,99,100,101], skinCoordWeight=[float(0.6499999761581421),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.10000000149011612,0.9200000166893005,0)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_thigh", DEF="Joe_r_thigh", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.10000000149011612,0.9200000166893005,0),(-0.10000000149011612,0.49129998683929443,0)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_knee_crease", DEF="Joe_r_knee_crease", translation=((-0.11500000208616257,0.4659999907016754,-0.054999999701976776)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_femoral_lateral_epicn", DEF="Joe_r_femoral_lateral_epicn", translation=((-0.17000000178813934,0.4659999907016754,0)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_femoral_medial_epicn", DEF="Joe_r_femoral_medial_epicn", translation=((-0.05000000074505806,0.4659999907016754,0)), children=[
Shape(USE="sitebox")]),
Transform(translation=((-0.07900000363588333,0.9200000166893005,-0.14000000059604645)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.10000000149011612,0.8999999761581421,0.07500000298023224)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.17100000381469727,0.6499999761581421,0)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.019999999552965164,0.6499999761581421,0)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.10000000149011612,0.6499999761581421,-0.07999999821186066)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.10000000149011612,0.6499999761581421,0.07000000029802322)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="r_knee", DEF="Joe_r_knee", center=((-0.05000000074505806,0.4659999907016754,0)), skinCoordIndex=[362,363,364,365,366,367,368,369], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.10000000149011612,0.49129998683929443,0)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_calf", DEF="Joe_r_calf", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.10000000149011612,0.49129998683929443,0),(-0.10000000149011612,0.07119999825954437,0)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_lateral_malleolus", DEF="Joe_r_lateral_malleolus", translation=((-0.15000000596046448,0.07000000029802322,0)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_medial_malleolus", DEF="Joe_r_medial_malleolus", translation=((-0.08500000089406967,0.0860000029206276,0.012500000186264515)), children=[
Shape(USE="sitebox")]),
Transform(translation=((-0.11500000208616257,0.4659999907016754,0.05999999865889549)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.11500000208616257,0.4659999907016754,-0.054999999701976776)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.17000000178813934,0.4659999907016754,0)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.05000000074505806,0.4659999907016754,0)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.17000000178813934,0.30000001192092896,0)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.05999999865889549,0.30000001192092896,0)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.10000000149011612,0.30000001192092896,-0.05000000074505806)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.10000000149011612,0.30000001192092896,0.05000000074505806)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="r_ankle", DEF="Joe_r_ankle", center=((-0.11500000208616257,0.0689999982714653,0)), skinCoordIndex=[370,371,372,373], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.10000000149011612,0.07119999825954437,0)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_hindfoot", DEF="Joe_r_hindfoot", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.10000000149011612,0.07119999825954437,0),(-0.10000000149011612,0.014999999664723873,-0.009999999776482582)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_sphyrion", DEF="Joe_r_sphyrion", translation=((-0.09000000357627869,0.0560000017285347,0.012500000186264515)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_calcaneous_post", DEF="Joe_r_calcaneous_post", translation=((-0.11500000208616257,0.03999999910593033,-0.054999999701976776)), children=[
Shape(USE="sitebox")]),
Transform(translation=((-0.15000000596046448,0.07000000029802322,0)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.08500000089406967,0.0860000029206276,0.012500000186264515)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.11500000208616257,0.0689999982714653,-0.04500000178813934)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.11699999868869781,0.09749999642372131,0.061500001698732376)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="r_subtalar", DEF="Joe_r_subtalar", center=((-0.10000000149011612,0.014999999664723873,-0.009999999776482582)), skinCoordIndex=[374,375,376], skinCoordWeight=[float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.10000000149011612,0.014999999664723873,-0.009999999776482582)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_midproximal", DEF="Joe_r_midproximal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.10000000149011612,0.014999999664723873,-0.009999999776482582),(-0.10000000149011612,0.019999999552965164,0.07000000029802322)])), 
appearance=
Appearance(USE="SegmentLine")),
Transform(translation=((-0.13750000298023224,0.006000000052154064,-0.029999999329447746)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.0949999988079071,0.006000000052154064,-0.029999999329447746)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.0949999988079071,0.006000000052154064,-0.029999999329447746)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="r_midtarsal", DEF="Joe_r_midtarsal", center=((-0.11500000208616257,0.03700000047683716,0.09000000357627869)), skinCoordIndex=[377,378,379,380], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.10000000149011612,0.019999999552965164,0.07000000029802322)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_middistal", DEF="Joe_r_middistal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.10000000149011612,0.019999999552965164,0.07000000029802322),(-0.10000000149011612,0.009999999776482582,0.14000000059604645)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_metatarsal_pha1", DEF="Joe_r_metatarsal_pha1", translation=((-0.11500000208616257,0.019999999552965164,0.12200000137090683)), children=[
Shape(USE="sitebox")]),
Transform(translation=((-0.11500000208616257,0.05999999865889549,0.10000000149011612)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.11500000208616257,0,0.07000000029802322)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.16500000655651093,0,0.07000000029802322)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.16500000655651093,0,0.07000000029802322)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="r_metatarsal", DEF="Joe_r_metatarsal", center=((-0.10000000149011612,0.009999999776482582,0.14000000059604645)), skinCoordIndex=[381,382,383,384,385,386,387,388,389], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.10859999805688858,0.009999999776482582,0.14000000059604645)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_forefoot", DEF="Joe_r_forefoot", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.10000000149011612,0.009999999776482582,0.14000000059604645),(-0.10429999977350235,0.0015999999595806003,0.20000000298023224)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_metatarsal_pha5", DEF="Joe_r_metatarsal_pha5", translation=((-0.16500000655651093,0.009999999776482582,0.11999999731779099)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_digit2", DEF="Joe_r_digit2", translation=((-0.10999999940395355,0.010999999940395355,0.1899999976158142)), children=[
Shape(USE="sitebox")]),
Transform(translation=((-0.11500000208616257,0.03999999910593033,0.12999999523162842)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.125,0,0.11999999731779099)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.16500000655651093,0,0.11999999731779099)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.08699999749660492,0,0.12200000137090683)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.09000000357627869,0.012000000104308128,0.18799999356269836)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.10999999940395355,0.010999999940395355,0.1899999976158142)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.12800000607967377,0.010999999940395355,0.1850000023841858)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.1420000046491623,0.010999999940395355,0.17800000309944153)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.15399999916553497,0.009999999776482582,0.1679999977350235)), children=[
Shape(USE="skinsphere")])])])])])])])])]),
HAnimJoint(name="vl5", DEF="Joe_vl5", center=((0,1.0449999570846558,-0.0949999988079071)), skinCoordIndex=[28,76], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.0449999570846558,-0.0949999988079071)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="toPelvis", DEF="Joe_toPelvisMarker", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.0449999570846558,-0.0949999988079071),(0,0.914900004863739,0.0015999999595806003)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimSegment(name="l5", DEF="Joe_l5", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.0449999570846558,-0.0949999988079071),(0,1.0679999589920044,-0.08500000089406967)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="waist_preferred_post", DEF="Joe_waist_preferred_post", translation=((0,1.0915000438690186,-0.10909999907016754)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="navel", DEF="Joe_navel", translation=((0,1.0722500085830688,0.09000000357627869)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="vl4", DEF="Joe_vl4", center=((0,1.0679999589920044,-0.08500000089406967)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.0679999589920044,-0.08500000089406967)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l4", DEF="Joe_l4", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.0679999589920044,-0.08500000089406967),(0,1.0920000076293945,-0.07249999791383743)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vl3", DEF="Joe_vl3", center=((0,1.0920000076293945,-0.07249999791383743)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.0920000076293945,-0.07249999791383743)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l3", DEF="Joe_l3", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.0920000076293945,-0.07249999791383743),(0,1.1200000047683716,-0.06499999761581421)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vl2", DEF="Joe_vl2", center=((0,1.1200000047683716,-0.06499999761581421)), skinCoordIndex=[16,18,25,83,84,85,86,87,88], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(0.699999988079071),float(1),float(0.800000011920929)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.1200000047683716,-0.06499999761581421)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l2", DEF="Joe_l2", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.1200000047683716,-0.06499999761581421),(0,1.145900011062622,-0.0625)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_rib10", DEF="Joe_r_rib10", translation=((-0.08699999749660492,1.190000057220459,0.09000000357627869)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_rib10", DEF="Joe_l_rib10", translation=((0.08699999749660492,1.190000057220459,0.09000000357627869)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="rib10_midspine", DEF="Joe_rib10_midspine", translation=((0,1.1907999515533447,-0.11129999905824661)), children=[
Shape(USE="sitebox")]),
Transform(translation=((-0.08699999749660492,1.190000057220459,-0.09000000357627869)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.08699999749660492,1.190000057220459,-0.09000000357627869)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.1720000058412552,1.3200000524520874,-0.029999999329447746)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.1720000058412552,1.3200000524520874,-0.029999999329447746)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.15000000596046448,1.2300000190734863,-0.014999999664723873)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.15000000596046448,1.2300000190734863,-0.014999999664723873)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="vl1", DEF="Joe_vl1", center=((0,1.145900011062622,-0.0625)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.145900011062622,-0.0625)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l1", DEF="Joe_l1", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.145900011062622,-0.0625),(0,1.1790000200271606,-0.06800000369548798)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vt12", DEF="Joe_vt12", center=((0,1.1790000200271606,-0.06800000369548798)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.1790000200271606,-0.06800000369548798)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="t12", DEF="Joe_t12", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.1790000200271606,-0.06800000369548798),(0,1.2419999837875366,-0.09000000357627869)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vt11", DEF="Joe_vt11", center=((0,1.267899990081787,-0.08100000023841858)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.2144999504089355,-0.0754999965429306)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="t11", DEF="Joe_t11", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.2144999504089355,-0.0754999965429306),(0,1.2419999837875366,-0.09000000357627869)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vt10", DEF="Joe_vt10", center=((0,1.2419999837875366,-0.09000000357627869)), skinCoordIndex=[15], skinCoordWeight=[float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.2419999837875366,-0.09000000357627869)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="t10", DEF="Joe_t10", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.2419999837875366,-0.09000000357627869),(0,1.2680000066757202,-0.10000000149011612)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="substernale", DEF="Joe_substernale", translation=((0,1.25,0.11299999803304672)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="vt9", DEF="Joe_vt9", center=((0,1.2680000066757202,-0.10000000149011612)), skinCoordIndex=[13,14], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.2680000066757202,-0.10000000149011612)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="t9", DEF="Joe_t9", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.2680000066757202,-0.10000000149011612),(0,1.2940000295639038,-0.10999999940395355)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_thelion", DEF="Joe_r_thelion", translation=((-0.11349999904632568,1.3179999589920044,0.0949999988079071)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_thelion", DEF="Joe_l_thelion", translation=((0.11349999904632568,1.3179999589920044,0.0949999988079071)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="vt8", DEF="Joe_vt8", center=((0,1.2940000295639038,-0.10999999940395355)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.2940000295639038,-0.10999999940395355)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="t8", DEF="Joe_t8", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.2940000295639038,-0.10999999940395355),(0,1.3519999980926514,-0.11999999731779099)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vt7", DEF="Joe_vt7", center=((0,1.3229999542236328,-0.11550000309944153)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.3229999542236328,-0.11550000309944153)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="t7", DEF="Joe_t7", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.3519999980926514,-0.11999999731779099),(0,1.38100004196167,-0.12349999696016312)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vt6", DEF="Joe_vt6", center=((0,1.3519999980926514,-0.11999999731779099)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.3519999980926514,-0.11999999731779099)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="t6", DEF="Joe_t6", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.38100004196167,-0.12349999696016312),(0,1.409999966621399,-0.12349999696016312)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vt5", DEF="Joe_vt5", center=((0,1.38100004196167,-0.12349999696016312)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.38100004196167,-0.12349999696016312)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="t5", DEF="Joe_t5", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.409999966621399,-0.12349999696016312),(0,1.437999963760376,-0.11999999731779099)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vt4", DEF="Joe_vt4", center=((0,1.409999966621399,-0.12349999696016312)), skinCoordIndex=[81], skinCoordWeight=[float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.409999966621399,-0.12349999696016312)), children=[
Shape(USE="jointbox")]),
Transform(translation=((0,1.409999966621399,-0.14499999582767487)), children=[
Shape(USE="skinsphere")]),
HAnimSegment(name="t4", DEF="Joe_t4", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.409999966621399,-0.12349999696016312),(0,1.437999963760376,-0.11999999731779099)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vt3", DEF="Joe_vt3", center=((0,1.437999963760376,-0.11999999731779099)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.437999963760376,-0.11999999731779099)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="t3", DEF="Joe_t3", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.437999963760376,-0.11999999731779099),(0,1.468000054359436,-0.10499999672174454)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vt2", DEF="Joe_vt2", center=((0,1.468000054359436,-0.10499999672174454)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.468000054359436,-0.10499999672174454)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="t2", DEF="Joe_t2", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.468000054359436,-0.10499999672174454),(0,1.496999979019165,-0.09000000357627869)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vt1", DEF="Joe_vt1", center=((0,1.496999979019165,-0.09000000357627869)), skinCoordIndex=[11,24], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.496999979019165,-0.09000000357627869)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="t1", DEF="Joe_t1", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.496999979019165,-0.09000000357627869),(0,1.524999976158142,-0.07199999690055847)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="suprasternale", DEF="Joe_suprasternale", translation=((0,1.440000057220459,0.029999999329447746)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="cervicale", DEF="Joe_cervicale", translation=((0,1.5299999713897705,-0.08399999886751175)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="vc7", DEF="Joe_vc7", center=((0,1.524999976158142,-0.07199999690055847)), skinCoordIndex=[74,75], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.524999976158142,-0.07199999690055847)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="c7", DEF="Joe_c7", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1], 
coord=
Coordinate(point=[(0,1.524999976158142,-0.07199999690055847),(0.0820000022649765,1.448799967765808,-0.03530000150203705),(-0.029999999329447746,1.4600000381469727,0.019999999552965164),(0,1.5399999618530273,-0.05000000074505806)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_neck_base", DEF="Joe_r_neck_base", translation=((-0.06459999829530716,1.5148999691009521,-0.03849999979138374)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_neck_base", DEF="Joe_l_neck_base", translation=((0.06459999829530716,1.5148999691009521,-0.03849999979138374)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="vc6", DEF="Joe_vc6", center=((0,1.5399999618530273,-0.05000000074505806)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.5399999618530273,-0.05000000074505806)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="c6", DEF="Joe_c6", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.5399999618530273,-0.05000000074505806),(0,1.5674999952316284,-0.025599999353289604)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vc5", DEF="Joe_vc5", center=((0,1.5520000457763672,-0.03500000014901161)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.5520000457763672,-0.03500000014901161)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="c5", DEF="Joe_c5", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.5674999952316284,-0.025599999353289604),(0,1.5822499990463257,-0.01850000023841858)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vc4", DEF="Joe_vc4", center=((0,1.5674999952316284,-0.025599999353289604)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.5674999952316284,-0.025599999353289604)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="c4", DEF="Joe_c4", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.5822499990463257,-0.01850000023841858),(0,1.5950000286102295,-0.017500000074505806)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vc3", DEF="Joe_vc3", center=((0,1.5822499990463257,-0.01850000023841858)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.5822499990463257,-0.01850000023841858)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="c3", DEF="Joe_c3", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.5950000286102295,-0.017500000074505806),(0,1.6100000143051147,-0.014999999664723873)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vc2", DEF="Joe_vc2", center=((0,1.5950000286102295,-0.017500000074505806)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.5950000286102295,-0.017500000074505806)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="c2", DEF="Joe_c2", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.6100000143051147,-0.014999999664723873),(0,1.614400029182434,-0.0034000000450760126)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="vc1", DEF="Joe_vc1", center=((0,1.6100000143051147,-0.014999999664723873)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.6100000143051147,-0.014999999664723873)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="c1", DEF="Joe_c1", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0,1.614400029182434,-0.0034000000450760126),(0,1.6299999952316284,-0.009999999776482582)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="skullbase", DEF="Joe_skullbase", center=((0,1.6299999952316284,-0.009999999776482582)), skinCoordIndex=[0,1,2,3,4,5,6,7,8,9], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0,1.6299999952316284,-0.009999999776482582)), children=[
Transform(scale=((2,2,2)), children=[
Shape(USE="jointbox")])]),
HAnimSegment(name="skull", DEF="Joe_skull", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1], 
coord=
Coordinate(point=[(0,1.6299999952316284,-0.009999999776482582),(0.03400000184774399,1.659000039100647,0.05999999865889549),(-0.03400000184774399,1.6549999713897705,0.06499999761581421)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="skull_tip", DEF="Joe_skull_tip", translation=((0,1.7699999809265137,0)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="sellion", DEF="Joe_sellion", translation=((0,1.6649999618530273,0.09000000357627869)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_infraorbitale", DEF="Joe_r_infraorbitale", translation=((-0.032999999821186066,1.6200000047683716,0.08699999749660492)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_infraorbitale", DEF="Joe_l_infraorbitale", translation=((0.032999999821186066,1.6200000047683716,0.08699999749660492)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="supramenton", DEF="Joe_supramenton", translation=((0,1.5499999523162842,0.09700000286102295)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_tragion", DEF="Joe_r_tragion", translation=((-0.07699999958276749,1.6399999856948853,-0.009999999776482582)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_gonion", DEF="Joe_r_gonion", translation=((-0.052000001072883606,1.5800000429153442,0.014999999664723873)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_tragion", DEF="Joe_l_tragion", translation=((0.07699999958276749,1.6399999856948853,-0.009999999776482582)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_gonion", DEF="Joe_l_gonion", translation=((0.06310000270605087,1.5800000429153442,0.014999999664723873)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="nuchale", DEF="Joe_nuchale", translation=((0,1.625,-0.0925000011920929)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="l_eyeball_joint", DEF="Joe_l_eyeball_joint", center=((0.03400000184774399,1.659000039100647,0.05999999865889549)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(scale=((1,1,1.399999976158142)), translation=((0.03400000184774399,1.6549999713897705,0.06499999761581421)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_eyeball", DEF="Joe_l_eyeball", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.03400000184774399,1.6549999713897705,0.06499999761581421),(-0.03400000184774399,1.6549999713897705,0.06499999761581421)])), 
appearance=
Appearance(USE="SegmentLine"))])]),
HAnimJoint(name="r_eyeball_joint", DEF="Joe_r_eyeball_joint", center=((-0.03400000184774399,1.659000039100647,0.05999999865889549)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(scale=((1,1,1.399999976158142)), translation=((-0.03400000184774399,1.6549999713897705,0.06499999761581421)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_eyeball", DEF="Joe_r_eyeball", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.03400000184774399,1.6549999713897705,0.06499999761581421),(-0.03400000184774399,1.6549999713897705,0.06499999761581421)])), 
appearance=
Appearance(USE="SegmentLine"))])])])])])])])])])]),
HAnimJoint(name="l_sternoclavicular", DEF="Joe_l_sternoclavicular", center=((0.0820000022649765,1.448799967765808,-0.03530000150203705)), skinCoordIndex=[12], skinCoordWeight=[float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.0820000022649765,1.448799967765808,-0.03530000150203705)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_clavicle", DEF="Joe_l_clavicle", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.0820000022649765,1.448799967765808,-0.03530000150203705),(0.09619999676942825,1.426900029182434,-0.042399998754262924)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="l_clavicale", DEF="Joe_l_clavicale", translation=((0.029999999329447746,1.4600000381469727,0.03500000014901161)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="l_acromioclavicular", DEF="Joe_l_acromioclavicular", center=((0.09619999676942825,1.426900029182434,-0.042399998754262924)), skinCoordIndex=[79], skinCoordWeight=[float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.09619999676942825,1.426900029182434,-0.042399998754262924)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_scapula", DEF="Joe_l_scapula", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.09619999676942825,1.426900029182434,-0.042399998754262924),(0.20000000298023224,1.440000057220459,-0.03999999910593033)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="l_acromion", DEF="Joe_l_acromion", translation=((0.17499999701976776,1.4824999570846558,-0.05999999865889549)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_axilla_ant", DEF="Joe_l_axilla_ant", translation=((0.17000000178813934,1.3799999952316284,0.007000000216066837)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_axilla_post", DEF="Joe_l_axilla_post", translation=((0.1599999964237213,1.3799999952316284,-0.125)), children=[
Shape(USE="sitebox")]),
Transform(translation=((0.10999999940395355,1.4270000457763672,-0.13750000298023224)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="l_shoulder", DEF="Joe_l_shoulder", center=((0.20000000298023224,1.440000057220459,-0.03999999910593033)), skinCoordIndex=[41,42,44,80,102,103,104,105], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.20000000298023224,1.440000057220459,-0.03999999910593033)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_upperarm", DEF="Joe_l_upperarm", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.2029000073671341,1.440000057220459,-0.03869999945163727),(0.20000000298023224,1.138800024986267,-0.03999999910593033)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="l_humeral_medial_epicn", DEF="Joe_l_humeral_medial_epicn", translation=((0.16500000655651093,1.138800024986267,-0.03999999910593033)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_radiale", DEF="Joe_l_radiale", translation=((0.23000000417232513,1.1330000162124634,-0.054999999701976776)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_humeral_lateral_epicn", DEF="Joe_l_humeral_lateral_epicn", translation=((0.24400000274181366,1.138800024986267,-0.03999999910593033)), children=[
Shape(USE="sitebox")]),
Transform(translation=((0.23499999940395355,1.4199999570846558,-0.0625)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.25,1.2699999809265137,-0.03999999910593033)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.17000000178813934,1.2699999809265137,-0.03999999910593033)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.20000000298023224,1.2699999809265137,-0.09000000357627869)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.20000000298023224,1.2699999809265137,0.019999999552965164)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="l_elbow", DEF="Joe_l_elbow", center=((0.20000000298023224,1.138800024986267,-0.03999999910593033)), skinCoordIndex=[45,46,47,109,110,111,112,113,115,116,117,118], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.20000000298023224,1.138800024986267,-0.03999999910593033)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_forearm", DEF="Joe_l_forearm", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.20000000298023224,1.138800024986267,-0.03999999910593033),(0.20000000298023224,0.8700000047683716,-0.03999999910593033)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="l_radial_styloid", DEF="Joe_l_radial_styloid", translation=((0.19009999930858612,0.8644999861717224,-0.04149999842047691)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_olecranon", DEF="Joe_l_olecranon", translation=((0.20000000298023224,1.138800024986267,-0.07999999821186066)), children=[
Shape(USE="sitebox")]),
Transform(translation=((0.20000000298023224,1.138800024986267,-0.013000000268220901)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.22499999403953552,1,-0.009999999776482582)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.22499999403953552,1,-0.07000000029802322)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.1850000023841858,1,-0.009999999776482582)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((0.1850000023841858,1,-0.07000000029802322)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="l_wrist", DEF="Joe_l_wrist", center=((0.20000000298023224,0.8700000047683716,-0.03999999910593033)), skinCoordIndex=[119,120,121,122,123,124,125,126], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.20000000298023224,0.8700000047683716,-0.03999999910593033)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_hand", DEF="Joe_l_hand", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1], 
coord=
Coordinate(point=[(0.20000000298023224,0.8700000047683716,-0.03999999910593033),(0.1923999935388565,0.8471999764442444,-0.05339999869465828),(0.19830000400543213,0.8023999929428101,-0.02800000086426735),(0.19869999587535858,0.8029000163078308,-0.05299999937415123),(0.1956000030040741,0.8019000291824341,-0.07940000295639038),(0.19249999523162842,0.8065999746322632,-0.10360000282526016)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="l_metacarpal_pha2", DEF="Joe_l_metacarpal_pha2", translation=((0.20090000331401825,0.8138999938964844,-0.02370000071823597)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_ulnar_styloid", DEF="Joe_l_ulnar_styloid", translation=((0.2142000049352646,0.8529000282287598,-0.06480000168085098)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_metacarpal_pha5", DEF="Joe_l_metacarpal_pha5", translation=((0.19290000200271606,0.7860000133514404,-0.11219999939203262)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="l_thumb1", DEF="Joe_l_thumb1", center=((0.1923999935388565,0.8471999764442444,-0.05339999869465828)), skinCoordIndex=[127,128], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.1923999935388565,0.8471999764442444,-0.05339999869465828)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_thumb_metacarpal", DEF="Joe_l_thumb_metacarpal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1923999935388565,0.8471999764442444,-0.05339999869465828),(0.19509999454021454,0.8226000070571899,0.02459999918937683)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="l_thumb2", DEF="Joe_l_thumb2", center=((0.19509999454021454,0.8226000070571899,0.02459999918937683)), skinCoordIndex=[138,139,140,141,142,143], skinCoordWeight=[float(0.5),float(0.5),float(0.5),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.19509999454021454,0.8226000070571899,0.02459999918937683)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_thumb_distal", DEF="Joe_l_thumb_proximal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.19509999454021454,0.8226000070571899,0.02459999918937683),(0.19550000131130219,0.8159000277519226,0.04639999940991402)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="l_thumb3", DEF="Joe_l_thumb3", center=((0.19550000131130219,0.8159000277519226,0.04639999940991402)), skinCoordIndex=[144,145,146,147,148,149,150,151,152], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.19550000131130219,0.8159000277519226,0.04639999940991402)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_thumb_distal", DEF="Joe_l_thumb_distal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.19550000131130219,0.8159000277519226,0.04639999940991402),(0.19820000231266022,0.8061000108718872,0.07590000331401825)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="l_thumb_distal_tip", DEF="Joe_l_thumb_distal_tip", translation=((0.19820000231266022,0.8061000108718872,0.07590000331401825)), children=[
Shape(USE="sitebox")])])])])]),
HAnimJoint(name="l_index0", DEF="Joe_l_index0", center=((0.19830000400543213,0.8023999929428101,-0.02800000086426735)), skinCoordIndex=[129,130], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.19830000400543213,0.8023999929428101,-0.02800000086426735)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_index_metacarpal", DEF="Joe_l_index_metacarpal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.19830000400543213,0.8023999929428101,-0.02800000086426735),(0.19830000400543213,0.781499981880188,-0.02800000086426735)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="l_index1", DEF="Joe_l_index1", center=((0.19830000400543213,0.781499981880188,-0.02800000086426735)), skinCoordIndex=[138,139,140,153,154,155,163], skinCoordWeight=[float(0.5),float(0.5),float(0.5),float(1),float(1),float(1),float(0.5)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.19830000400543213,0.781499981880188,-0.02800000086426735)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_index_proximal", DEF="Joe_l_index_proximal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.19830000400543213,0.781499981880188,-0.02800000086426735),(0.20170000195503235,0.736299991607666,-0.024800000712275505)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="l_index2", DEF="Joe_l_index2", center=((0.20170000195503235,0.736299991607666,-0.024800000712275505)), skinCoordIndex=[166,167,168,169], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.20170000195503235,0.736299991607666,-0.024800000712275505)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_index_middle", DEF="Joe_l_index_middle", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.20170000195503235,0.736299991607666,-0.024800000712275505),(0.20280000567436218,0.7139000296592712,-0.023600000888109207)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="l_index3", DEF="Joe_l_index3", center=((0.20280000567436218,0.7139000296592712,-0.023600000888109207)), skinCoordIndex=[170,171,172,173,174,175,176,177,178], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.20280000567436218,0.7139000296592712,-0.023600000888109207)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_index_distal", DEF="Joe_l_index_distal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.20280000567436218,0.7139000296592712,-0.023600000888109207),(0.20890000462532043,0.6858000159263611,-0.02449999935925007)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="l_index_distal_tip", DEF="Joe_l_index_distal_tip", translation=((0.20890000462532043,0.6858000159263611,-0.02449999935925007)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="l_dactylion", DEF="Joe_l_dactylion", translation=((0.20559999346733093,0.6743000149726868,-0.04820000007748604)), children=[
Shape(USE="sitebox")])])])])])]),
HAnimJoint(name="l_middle0", DEF="Joe_l_middle0", center=((0.19869999587535858,0.8029000163078308,-0.05299999937415123)), skinCoordIndex=[131,132], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.19869999587535858,0.8029000163078308,-0.05299999937415123)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_middle_metacarpal", DEF="Joe_l_middle_metacarpal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.19869999587535858,0.8029000163078308,-0.05299999937415123),(0.19869999587535858,0.7817999720573425,-0.05299999937415123)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="l_middle1", DEF="Joe_l_middle1", center=((0.19869999587535858,0.7817999720573425,-0.05299999937415123)), skinCoordIndex=[156,157,163,164], skinCoordWeight=[float(1),float(1),float(0.5),float(0.5)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.19869999587535858,0.7817999720573425,-0.05299999937415123)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_middle_proximal", DEF="Joe_l_middle_proximal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.19869999587535858,0.7817999720573425,-0.05299999937415123),(0.2012999951839447,0.7272999882698059,-0.0502999983727932)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="l_middle2", DEF="Joe_l_middle2", center=((0.2012999951839447,0.7272999882698059,-0.0502999983727932)), skinCoordIndex=[179,180,181,182], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.2012999951839447,0.7272999882698059,-0.0502999983727932)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_middle_middle", DEF="Joe_l_middle_middle", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.2012999951839447,0.7272999882698059,-0.0502999983727932),(0.20260000228881836,0.7010999917984009,-0.049400001764297485)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="l_middle3", DEF="Joe_l_middle3", center=((0.20260000228881836,0.7010999917984009,-0.049400001764297485)), skinCoordIndex=[183,184,185,186,187,188,189,190,191], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.20260000228881836,0.7010999917984009,-0.049400001764297485)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_middle_distal", DEF="Joe_l_middle_distal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.20260000228881836,0.7010999917984009,-0.049400001764297485),(0.20800000429153442,0.6730999946594238,-0.04910000041127205)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="l_middle_distal_tip", DEF="Joe_l_middle_distal_tip", translation=((0.20800000429153442,0.6730999946594238,-0.04910000041127205)), children=[
Shape(USE="sitebox")])])])])])]),
HAnimJoint(name="l_ring0", DEF="Joe_l_ring0", center=((0.1956000030040741,0.8019000291824341,-0.07940000295639038)), skinCoordIndex=[133,134], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.1956000030040741,0.8019000291824341,-0.07940000295639038)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_ring_metacarpal", DEF="Joe_l_ring_metacarpal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1956000030040741,0.8019000291824341,-0.07940000295639038),(0.1956000030040741,0.781499981880188,-0.07940000295639038)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="l_ring1", DEF="Joe_l_ring1", center=((0.1956000030040741,0.781499981880188,-0.07940000295639038)), skinCoordIndex=[158,159,164,165], skinCoordWeight=[float(1),float(1),float(0.5),float(0.5)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.1956000030040741,0.781499981880188,-0.07940000295639038)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_ring_proximal", DEF="Joe_l_ring_proximal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1956000030040741,0.781499981880188,-0.07940000295639038),(0.1973000019788742,0.7286999821662903,-0.07769999653100967)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="l_ring2", DEF="Joe_l_ring2", center=((0.1973000019788742,0.7286999821662903,-0.07769999653100967)), skinCoordIndex=[192,193,194,195], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.1973000019788742,0.7286999821662903,-0.07769999653100967)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_ring_middle", DEF="Joe_l_ring_middle", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.1973000019788742,0.7286999821662903,-0.07769999653100967),(0.19830000400543213,0.7045000195503235,-0.07670000195503235)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="l_ring3", DEF="Joe_l_ring3", center=((0.19830000400543213,0.7045000195503235,-0.07670000195503235)), skinCoordIndex=[196,197,198,199,200,201,202,203,204], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.19830000400543213,0.7045000195503235,-0.07670000195503235)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_ring_distal", DEF="Joe_l_ring_distal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.19830000400543213,0.7045000195503235,-0.07670000195503235),(0.20350000262260437,0.675000011920929,-0.07559999823570251)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="l_ring_distal_tip", DEF="Joe_l_ring_distal_tip", translation=((0.20350000262260437,0.675000011920929,-0.07559999823570251)), children=[
Shape(USE="sitebox")])])])])])]),
HAnimJoint(name="l_pinky0", DEF="Joe_l_pinky0", center=((0.19249999523162842,0.8065999746322632,-0.10360000282526016)), skinCoordIndex=[135,136,137,165], skinCoordWeight=[float(1),float(1),float(1),float(0.5)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.19249999523162842,0.8065999746322632,-0.10360000282526016)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_pinky_metacarpal", DEF="Joe_l_pinky_metacarpal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.19249999523162842,0.8065999746322632,-0.10360000282526016),(0.19249999523162842,0.7865999937057495,-0.10360000282526016)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="l_pinky1", DEF="Joe_l_pinky1", center=((0.19249999523162842,0.7865999937057495,-0.10360000282526016)), skinCoordIndex=[160,161,162], skinCoordWeight=[float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.19249999523162842,0.7865999937057495,-0.10360000282526016)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_pinky_proximal", DEF="Joe_l_pinky_proximal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.19249999523162842,0.7865999937057495,-0.10360000282526016),(0.19380000233650208,0.745199978351593,-0.10239999741315842)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="l_pinky2", DEF="Joe_l_pinky2", center=((0.19380000233650208,0.745199978351593,-0.10239999741315842)), skinCoordIndex=[205,206,207,208], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.19380000233650208,0.745199978351593,-0.10239999741315842)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_pinky_middle", DEF="Joe_l_pinky_middle", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.19380000233650208,0.745199978351593,-0.10239999741315842),(0.19480000436306,0.7276999950408936,-0.10170000046491623)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="l_pinky3", DEF="Joe_l_pinky3", center=((0.19480000436306,0.7276999950408936,-0.10170000046491623)), skinCoordIndex=[209,210,211,212,213,214,215,216,217], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((0.19480000436306,0.7276999950408936,-0.10170000046491623)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="l_pinky_distal", DEF="Joe_l_pinky_distal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(0.19480000436306,0.7276999950408936,-0.10170000046491623),(0.2013999968767166,0.7009000182151794,-0.10119999945163727)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="l_pinky_distal_tip", DEF="Joe_l_pinky_distal_tip", translation=((0.2013999968767166,0.7009000182151794,-0.10119999945163727)), children=[
Shape(USE="sitebox")])])])])])])])])])])])]),
HAnimJoint(name="r_sternoclavicular", DEF="Joe_r_sternoclavicular", center=((-0.029999999329447746,1.4600000381469727,0)), skinCoordIndex=[10], skinCoordWeight=[float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.029999999329447746,1.4600000381469727,0.019999999552965164)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_clavicle", DEF="Joe_r_clavicle", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.029999999329447746,1.4600000381469727,0.019999999552965164),(-0.09000000357627869,1.409999966621399,-0.09000000357627869)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_clavicale", DEF="Joe_r_clavicale", translation=((-0.029999999329447746,1.4600000381469727,0.03500000014901161)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="r_acromioclavicular", DEF="Joe_r_acromioclavicular", center=((-0.09000000357627869,1.409999966621399,-0.10999999940395355)), skinCoordIndex=[77,29], skinCoordWeight=[float(1),float(0.8999999761581421)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.09000000357627869,1.409999966621399,-0.09000000357627869)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_scapula", DEF="Joe_r_scapula", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.09000000357627869,1.409999966621399,-0.09000000357627869),(-0.20000000298023224,1.440000057220459,-0.03999999910593033)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_acromion", DEF="Joe_r_acromion", translation=((-0.17800000309944153,1.4824999570846558,-0.0625)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_axilla_ant", DEF="Joe_r_axilla_ant", translation=((-0.17000000178813934,1.3799999952316284,0.007000000216066837)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_axilla_post", DEF="Joe_r_axilla_post", translation=((-0.1599999964237213,1.3799999952316284,-0.12700000405311584)), children=[
Shape(USE="sitebox")]),
Transform(translation=((-0.10999999940395355,1.4270000457763672,-0.13750000298023224)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="r_shoulder", DEF="Joe_r_shoulder", center=((-0.20000000298023224,1.440000057220459,-0.03999999910593033)), skinCoordIndex=[29,30,32,78,218,219,220,221,86,88], skinCoordWeight=[float(0.10000000149011612),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(0.30000001192092896),float(0.20000000298023224)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,1.440000057220459,-0.03999999910593033)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_upperarm", DEF="Joe_r_upperarm", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,1.440000057220459,-0.03999999910593033),(-0.20000000298023224,1.138800024986267,-0.03999999910593033)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_humeral_medial_epicn", DEF="Joe_r_humeral_medial_epicn", translation=((-0.16500000655651093,1.138800024986267,-0.03999999910593033)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_radiale", DEF="Joe_r_radiale", translation=((-0.23000000417232513,1.1330000162124634,-0.054999999701976776)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_humeral_lateral_epicn", DEF="Joe_r_humeral_lateral_epicn", translation=((-0.24400000274181366,1.138800024986267,-0.03999999910593033)), children=[
Shape(USE="sitebox")]),
Transform(translation=((-0.17800000309944153,1.4824999570846558,-0.0625)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.17000000178813934,1.3799999952316284,0.007000000216066837)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.1599999964237213,1.3799999952316284,-0.12700000405311584)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.23499999940395355,1.4199999570846558,-0.0625)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.23000000417232513,1.2350000143051147,-0.03999999910593033)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.1599999964237213,1.2300000190734863,-0.03999999910593033)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.20000000298023224,1.2300000190734863,-0.10499999672174454)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.20000000298023224,1.2350000143051147,0.019999999552965164)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="r_elbow", DEF="Joe_r_elbow", center=((-0.20000000298023224,1.138800024986267,-0.03999999910593033)), skinCoordIndex=[33,34,35,225,226,227,228,229,231,232,233,234], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,1.138800024986267,-0.03999999910593033)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_forearm", DEF="Joe_r_forearm", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,1.138800024986267,-0.03999999910593033),(-0.20000000298023224,0.8899999856948853,-0.03999999910593033)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_radial_styloid", DEF="Joe_r_radial_styloid", translation=((-0.20000000298023224,0.8999999761581421,-0.014999999664723873)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_olecranon", DEF="Joe_r_olecranon", translation=((-0.20000000298023224,1.138800024986267,-0.07999999821186066)), children=[
Shape(USE="sitebox")]),
Transform(translation=((-0.20000000298023224,1.138800024986267,0.013000000268220901)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.22499999403953552,1,-0.009999999776482582)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.22499999403953552,1,-0.07000000029802322)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.1850000023841858,1,-0.009999999776482582)), children=[
Shape(USE="skinsphere")]),
Transform(translation=((-0.1850000023841858,1,-0.07000000029802322)), children=[
Shape(USE="skinsphere")])]),
HAnimJoint(name="r_wrist", DEF="Joe_r_wrist", center=((-0.20000000298023224,0.8899999856948853,-0.03999999910593033)), skinCoordIndex=[235,236,237,238,239,240,241,242], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.8899999856948853,-0.03999999910593033)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_hand", DEF="Joe_r_hand", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.8899999856948853,-0.03999999910593033),(-0.20000000298023224,0.8500000238418579,0),(-0.20000000298023224,0.8399999737739563,-0.014999999664723873),(-0.20000000298023224,0.8349999785423279,-0.03999999910593033),(-0.20000000298023224,0.8349999785423279,-0.06499999761581421),(-0.20000000298023224,0.8399999737739563,-0.08500000089406967)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_ulnar_styloid", DEF="Joe_r_ulnar_styloid", translation=((-0.20000000298023224,0.8999999761581421,-0.08500000089406967)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="r_thumb1", DEF="Joe_r_thumb1", center=((-0.20000000298023224,0.8500000238418579,0)), skinCoordIndex=[243,244], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.8500000238418579,0)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_thumb_metacarpal", DEF="Joe_r_thumb_metacarpal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.8500000238418579,0),(-0.20000000298023224,0.8199999928474426,0.029999999329447746)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="r_thumb2", DEF="Joe_r_thumb2", center=((-0.20000000298023224,0.8199999928474426,0.029999999329447746)), skinCoordIndex=[254,255,256,257,258,259], skinCoordWeight=[float(0.5),float(0.5),float(0.5),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.8199999928474426,0.029999999329447746)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_thumb_proximal", DEF="Joe_r_thumb_proximal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.8199999928474426,0.029999999329447746),(-0.20000000298023224,0.800000011920929,0.05000000074505806)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="r_thumb3", DEF="Joe_r_thumb3", center=((-0.20000000298023224,0.800000011920929,0.05000000074505806)), skinCoordIndex=[260,261,262,263,264,265,266,267,268], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.800000011920929,0.05000000074505806)), children=[
Shape(USE="jointbox")]),
Transform(DEF="Thumbnail", translation=((-0.20000000298023224,0.7850000262260437,0.07500000298023224)), children=[
Shape(USE="sitebox")]),
HAnimSegment(name="r_thumb_distal", DEF="Joe_r_thumb_distal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.800000011920929,0.05000000074505806),(-0.20000000298023224,0.7799999713897705,0.07000000029802322)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_thumb_distal_tip", DEF="Joe_r_thumb_distal_tip", translation=((-0.20000000298023224,0.7799999713897705,0.07000000029802322)), children=[
Shape(USE="sitebox")])])])])]),
HAnimJoint(name="r_index0", DEF="Joe_r_index0", center=((-0.20000000298023224,0.8399999737739563,-0.014999999664723873)), skinCoordIndex=[245,246], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.8399999737739563,-0.014999999664723873)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_index_metacarpal", DEF="Joe_r_index_metacarpal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.8399999737739563,-0.014999999664723873),(-0.20000000298023224,0.7929999828338623,-0.014999999664723873)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_metacarpal_pha2", DEF="Joe_r_metacarpal_pha2", translation=((-0.20000000298023224,0.7929999828338623,-0.004999999888241291)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="r_index1", DEF="Joe_r_index1", center=((-0.20000000298023224,0.7929999828338623,-0.014999999664723873)), skinCoordIndex=[254,255,256,269,270,271,279], skinCoordWeight=[float(0.5),float(0.5),float(0.5),float(1),float(1),float(1),float(0.5)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.7929999828338623,-0.014999999664723873)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_index_proximal", DEF="Joe_r_index_proximal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.7929999828338623,-0.014999999664723873),(-0.20000000298023224,0.7450000047683716,-0.014999999664723873)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="r_index2", DEF="Joe_r_index2", center=((-0.20000000298023224,0.7450000047683716,-0.014999999664723873)), skinCoordIndex=[282,283,284,285], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.7450000047683716,-0.014999999664723873)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_index_middle", DEF="Joe_r_index_middle", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.7450000047683716,-0.014999999664723873),(-0.20000000298023224,0.7200000286102295,-0.014999999664723873)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="r_index3", DEF="Joe_r_index3", center=((-0.20000000298023224,0.7200000286102295,-0.014999999664723873)), skinCoordIndex=[286,287,288,289,290,291,292,293,294], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.7200000286102295,-0.014999999664723873)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_index_distal", DEF="Joe_r_index_distal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.7200000286102295,-0.014999999664723873),(-0.20000000298023224,0.6949999928474426,-0.014999999664723873)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_index_distal_tip", DEF="Joe_r_index_distal_tip", translation=((-0.20000000298023224,0.6949999928474426,-0.014999999664723873)), children=[
Shape(USE="sitebox")])])])])])]),
HAnimJoint(name="r_middle0", DEF="Joe_r_middle0", center=((-0.20000000298023224,0.8349999785423279,-0.03999999910593033)), skinCoordIndex=[247,248], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.8349999785423279,-0.03999999910593033)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_middle_metacarpal", DEF="Joe_r_middle_metacarpal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.8349999785423279,-0.03999999910593033),(-0.20000000298023224,0.7879999876022339,-0.03999999910593033)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="r_middle1", DEF="Joe_r_middle1", center=((-0.20000000298023224,0.7879999876022339,-0.03999999910593033)), skinCoordIndex=[272,273,279,280], skinCoordWeight=[float(1),float(1),float(0.5),float(0.5)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.7879999876022339,-0.03999999910593033)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_middle_proximal", DEF="Joe_r_middle_proximal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.7879999876022339,-0.03999999910593033),(-0.20000000298023224,0.7400000095367432,-0.03999999910593033)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="r_middle2", DEF="Joe_r_middle2", center=((-0.20000000298023224,0.7400000095367432,-0.03999999910593033)), skinCoordIndex=[295,296,297,298], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.7400000095367432,-0.03999999910593033)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_middle_middle", DEF="Joe_r_middle_middle", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.7400000095367432,-0.03999999910593033),(-0.20000000298023224,0.7142000198364258,-0.03999999910593033)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="r_middle3", DEF="Joe_r_middle3", center=((-0.20000000298023224,0.7142000198364258,-0.03999999910593033)), skinCoordIndex=[299,300,301,302,303,304,305,306,307], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.7142000198364258,-0.03999999910593033)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_middle_distal", DEF="Joe_r_middle_distal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.7142000198364258,-0.03999999910593033),(-0.20000000298023224,0.6758000254631042,-0.03999999910593033)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_dactylion", DEF="Joe_r_dactylion", translation=((-0.20000000298023224,0.6800000071525574,-0.03999999910593033)), children=[
Shape(USE="sitebox")]),
HAnimSite(name="r_middle_distal_tip", DEF="Joe_r_middle_distal_tip", translation=((-0.20000000298023224,0.6800000071525574,-0.03999999910593033)), children=[
Shape(USE="sitebox")])])])])])]),
HAnimJoint(name="r_ring0", DEF="Joe_r_ring0", center=((-0.20000000298023224,0.8349999785423279,-0.06499999761581421)), skinCoordIndex=[249,250], skinCoordWeight=[float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.8349999785423279,-0.06499999761581421)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_ring_metacarpal", DEF="Joe_r_ring_metacarpal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.8349999785423279,-0.06499999761581421),(-0.20000000298023224,0.7929999828338623,-0.06499999761581421)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="r_ring1", DEF="Joe_r_ring1", center=((-0.20000000298023224,0.7929999828338623,-0.06499999761581421)), skinCoordIndex=[274,275,280,281], skinCoordWeight=[float(1),float(1),float(0.5),float(0.5)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.7929999828338623,-0.06499999761581421)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_ring_proximal", DEF="Joe_r_ring_proximal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.7929999828338623,-0.06499999761581421),(-0.20000000298023224,0.7400000095367432,-0.06499999761581421)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="r_ring2", DEF="Joe_r_ring2", center=((-0.20000000298023224,0.7400000095367432,-0.06499999761581421)), skinCoordIndex=[308,309,310,311], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.7400000095367432,-0.06499999761581421)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_ring_middle", DEF="Joe_r_ring_middle", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.7400000095367432,-0.06499999761581421),(-0.20000000298023224,0.7177000045776367,-0.06499999761581421)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="r_ring3", DEF="Joe_r_ring3", center=((-0.20000000298023224,0.7177000045776367,-0.06499999761581421)), skinCoordIndex=[312,313,314,315,316,317,318,319,320], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.7177000045776367,-0.06499999761581421)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_ring_distal", DEF="Joe_r_ring_distal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.7177000045776367,-0.06499999761581421),(-0.20000000298023224,0.6949999928474426,-0.06499999761581421)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_ring_distal_tip", DEF="Joe_r_ring_distal_tip", translation=((-0.20000000298023224,0.6949999928474426,-0.06499999761581421)), children=[
Shape(USE="sitebox")])])])])])]),
HAnimJoint(name="r_pinky0", DEF="Joe_r_pinky0", center=((-0.20000000298023224,0.8399999737739563,-0.08500000089406967)), skinCoordIndex=[251,252,253,281], skinCoordWeight=[float(1),float(1),float(1),float(0.5)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.8399999737739563,-0.08500000089406967)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_pinky_metacarpal", DEF="Joe_r_pinky_metacarpal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.8399999737739563,-0.08500000089406967),(-0.20000000298023224,0.7900000214576721,-0.08500000089406967)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_metacarpal_pha5", DEF="Joe_r_metacarpal_pha5", translation=((-0.20000000298023224,0.7900000214576721,-0.0949999988079071)), children=[
Shape(USE="sitebox")])]),
HAnimJoint(name="r_pinky1", DEF="Joe_r_pinky1", center=((-0.20000000298023224,0.7900000214576721,-0.08500000089406967)), skinCoordIndex=[276,277,278], skinCoordWeight=[float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.7900000214576721,-0.08500000089406967)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_pinky_proximal", DEF="Joe_r_pinky_proximal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.7900000214576721,-0.08500000089406967),(-0.20000000298023224,0.7549999952316284,-0.08500000089406967)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="r_pinky2", DEF="Joe_r_pinky2", center=((-0.20000000298023224,0.7549999952316284,-0.08500000089406967)), skinCoordIndex=[321,322,323,324], skinCoordWeight=[float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.7549999952316284,-0.08500000089406967)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_pinky_middle", DEF="Joe_r_pinky_middle", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.7549999952316284,-0.08500000089406967),(-0.20000000298023224,0.7350000143051147,-0.08500000089406967)])), 
appearance=
Appearance(USE="SegmentLine"))]),
HAnimJoint(name="r_pinky3", DEF="Joe_r_pinky3", center=((-0.20000000298023224,0.7350000143051147,-0.09000000357627869)), skinCoordIndex=[325,326,327,328,329,330,331,332,333], skinCoordWeight=[float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1),float(1)], ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
Transform(translation=((-0.20000000298023224,0.7350000143051147,-0.08500000089406967)), children=[
Shape(USE="jointbox")]),
HAnimSegment(name="r_pinky_distal", DEF="Joe_r_pinky_distal", children=[
Shape(
geometry=
IndexedLineSet(coordIndex=[0,1,-1], 
coord=
Coordinate(point=[(-0.20000000298023224,0.7350000143051147,-0.08500000089406967),(-0.20000000298023224,0.7200000286102295,-0.08500000089406967)])), 
appearance=
Appearance(USE="SegmentLine")),
HAnimSite(name="r_pinky_distal_tip", DEF="Joe_r_pinky_distal_tip", translation=((-0.20000000298023224,0.7200000286102295,-0.08500000089406967)), children=[
Shape(USE="sitebox")])])])])])])])])])])])])])])])])])])])])])])])])])])])]),
HAnimJoint(USE="Joe_sacroiliac"),
HAnimJoint(USE="Joe_l_hip"),
HAnimJoint(USE="Joe_l_knee"),
HAnimJoint(USE="Joe_l_ankle"),
HAnimJoint(USE="Joe_l_subtalar"),
HAnimJoint(USE="Joe_l_midtarsal"),
HAnimJoint(USE="Joe_l_metatarsal"),
HAnimJoint(USE="Joe_r_hip"),
HAnimJoint(USE="Joe_r_knee"),
HAnimJoint(USE="Joe_r_ankle"),
HAnimJoint(USE="Joe_r_subtalar"),
HAnimJoint(USE="Joe_r_midtarsal"),
HAnimJoint(USE="Joe_r_metatarsal"),
HAnimJoint(USE="Joe_vl5"),
HAnimJoint(USE="Joe_vl4"),
HAnimJoint(USE="Joe_vl3"),
HAnimJoint(USE="Joe_vl2"),
HAnimJoint(USE="Joe_vl1"),
HAnimJoint(USE="Joe_vt12"),
HAnimJoint(USE="Joe_vt11"),
HAnimJoint(USE="Joe_vt10"),
HAnimJoint(USE="Joe_vt9"),
HAnimJoint(USE="Joe_vt8"),
HAnimJoint(USE="Joe_vt7"),
HAnimJoint(USE="Joe_vt6"),
HAnimJoint(USE="Joe_vt5"),
HAnimJoint(USE="Joe_vt4"),
HAnimJoint(USE="Joe_vt3"),
HAnimJoint(USE="Joe_vt2"),
HAnimJoint(USE="Joe_vt1"),
HAnimJoint(USE="Joe_vc7"),
HAnimJoint(USE="Joe_vc6"),
HAnimJoint(USE="Joe_vc5"),
HAnimJoint(USE="Joe_vc4"),
HAnimJoint(USE="Joe_vc3"),
HAnimJoint(USE="Joe_vc2"),
HAnimJoint(USE="Joe_vc1"),
HAnimJoint(USE="Joe_skullbase"),
HAnimJoint(USE="Joe_l_eyeball_joint"),
HAnimJoint(USE="Joe_r_eyeball_joint"),
HAnimJoint(USE="Joe_l_sternoclavicular"),
HAnimJoint(USE="Joe_l_acromioclavicular"),
HAnimJoint(USE="Joe_l_shoulder"),
HAnimJoint(USE="Joe_l_elbow"),
HAnimJoint(USE="Joe_l_wrist"),
HAnimJoint(USE="Joe_l_thumb1"),
HAnimJoint(USE="Joe_l_thumb2"),
HAnimJoint(USE="Joe_l_thumb3"),
HAnimJoint(USE="Joe_l_index0"),
HAnimJoint(USE="Joe_l_index1"),
HAnimJoint(USE="Joe_l_index2"),
HAnimJoint(USE="Joe_l_index3"),
HAnimJoint(USE="Joe_l_middle0"),
HAnimJoint(USE="Joe_l_middle1"),
HAnimJoint(USE="Joe_l_middle2"),
HAnimJoint(USE="Joe_l_middle3"),
HAnimJoint(USE="Joe_l_ring0"),
HAnimJoint(USE="Joe_l_ring1"),
HAnimJoint(USE="Joe_l_ring2"),
HAnimJoint(USE="Joe_l_ring3"),
HAnimJoint(USE="Joe_l_pinky0"),
HAnimJoint(USE="Joe_l_pinky1"),
HAnimJoint(USE="Joe_l_pinky2"),
HAnimJoint(USE="Joe_l_pinky3"),
HAnimJoint(USE="Joe_r_sternoclavicular"),
HAnimJoint(USE="Joe_r_acromioclavicular"),
HAnimJoint(USE="Joe_r_shoulder"),
HAnimJoint(USE="Joe_r_elbow"),
HAnimJoint(USE="Joe_r_wrist"),
HAnimJoint(USE="Joe_r_thumb1"),
HAnimJoint(USE="Joe_r_thumb2"),
HAnimJoint(USE="Joe_r_thumb3"),
HAnimJoint(USE="Joe_r_index0"),
HAnimJoint(USE="Joe_r_index1"),
HAnimJoint(USE="Joe_r_index2"),
HAnimJoint(USE="Joe_r_index3"),
HAnimJoint(USE="Joe_r_middle0"),
HAnimJoint(USE="Joe_r_middle1"),
HAnimJoint(USE="Joe_r_middle2"),
HAnimJoint(USE="Joe_r_middle3"),
HAnimJoint(USE="Joe_r_ring0"),
HAnimJoint(USE="Joe_r_ring1"),
HAnimJoint(USE="Joe_r_ring2"),
HAnimJoint(USE="Joe_r_ring3"),
HAnimJoint(USE="Joe_r_pinky0"),
HAnimJoint(USE="Joe_r_pinky1"),
HAnimJoint(USE="Joe_r_pinky2"),
HAnimJoint(USE="Joe_r_pinky3")), 
skinCoord=(
Coordinate(USE="JoeSkinCoord")), skeleton=[
HAnimJoint(USE="Joe_HumanoidRoot")])])]),
TimeSensor(DEF="Time1", cycleInterval=2.86, loop=True),
TimeSensor(DEF="Time2", cycleInterval=5.72, loop=True),
OrientationInterpolator(DEF="Pitch", key=[float(0),float(0.20000000298023224),float(0.4000000059604645),float(0.6000000238418579),float(0.800000011920929),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(1.25600004196167)),(float(1),float(0),float(0),float(2.51200008392334)),(float(1),float(0),float(0),float(3.7679998874664307)),(float(1),float(0),float(0),float(5.02400016784668)),(float(1),float(0),float(0),float(6.28000020980835))]),
OrientationInterpolator(DEF="Yaw", key=[float(0),float(0.20000000298023224),float(0.4000000059604645),float(0.6000000238418579),float(0.800000011920929),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(1.25600004196167)),(float(0),float(1),float(0),float(2.51200008392334)),(float(0),float(1),float(0),float(3.7679998874664307)),(float(0),float(1),float(0),float(5.02400016784668)),(float(0),float(1),float(0),float(6.28000020980835))]),
OrientationInterpolator(DEF="Roll", key=[float(0),float(0.20000000298023224),float(0.4000000059604645),float(0.6000000238418579),float(0.800000011920929),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(1.25600004196167)),(float(0),float(0),float(1),float(2.51200008392334)),(float(0),float(0),float(1),float(3.7679998874664307)),(float(0),float(0),float(1),float(5.02400016784668)),(float(0),float(0),float(1),float(6.28000020980835))]),
OrientationInterpolator(DEF="vc6Yaw", key=[float(0),float(0.20000000298023224),float(0.4000000059604645),float(0.5),float(0.6000000238418579),float(0.699999988079071),float(0.800000011920929),float(0.8999999761581421),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0.699999988079071)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0)),(float(-1),float(0),float(0),float(0.5)),(float(-0.4000000059604645),float(-1),float(0),float(0.699999988079071)),(float(-0.4000000059604645),float(-1),float(0),float(0.4000000059604645)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0))]),
ROUTE(fromField="fraction_changed", fromNode="Time2", toField="set_fraction", toNode="vc6Yaw"),
ROUTE(fromField="value_changed", fromNode="vc6Yaw", toField="set_rotation", toNode="Joe_vc6"),
OrientationInterpolator(DEF="r_sternoclavicularRoll", key=[float(0),float(0.20000000298023224),float(0.4000000059604645),float(0.5),float(0.699999988079071),float(0.800000011920929),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(-1),float(0.10000000149011612)),(float(0),float(0),float(-1),float(0.2199999988079071)),(float(0),float(0.5),float(-1),float(0.27000001072883606)),(float(0),float(0),float(-1),float(0.10000000149011612)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="r_acromioclavicularRoll", key=[float(0),float(0.20000000298023224),float(0.4000000059604645),float(0.6000000238418579),float(0.800000011920929),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(-0.05000000074505806)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="r_shoulderRoll", key=[float(0),float(0.20000000298023224),float(0.4000000059604645),float(0.5),float(0.8500000238418579),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(0),float(0),float(-1),float(1.659999966621399)),(float(-0.25),float(0),float(-1),float(1.7599999904632568)),(float(0),float(0),float(-1),float(1.25600004196167)),(float(0),float(0),float(-1),float(0.05000000074505806)),(float(1),float(0),float(0),float(0))]),
OrientationInterpolator(DEF="r_ForeArmPitch", key=[float(0),float(0.15000000596046448),float(0.30000001192092896),float(0.5),float(0.699999988079071),float(0.8999999761581421),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.550000011920929)),(float(-1),float(-0.25),float(0),float(2.549999952316284)),(float(-1),float(-0.25),float(0),float(2.549999952316284)),(float(-1),float(-0.25),float(0),float(2.549999952316284)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="r_wristRoll", key=[float(0),float(0.20000000298023224),float(0.4000000059604645),float(0.6000000238418579),float(0.6499999761581421),float(0.75),float(0.8500000238418579),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(-0.550000011920929)),(float(0),float(0),float(1),float(0)),(float(0),float(1),float(0),float(1.5499999523162842)),(float(0),float(0),float(-1),float(1.5499999523162842)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="r_handPitch", key=[float(0),float(0.20000000298023224),float(0.4000000059604645),float(0.6000000238418579),float(0.800000011920929),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(0.009999999776482582),float(0.25)),(float(0),float(0),float(-0.009999999776482582),float(0.029999999329447746)),(float(0),float(0),float(0.009999999776482582),float(0.05000000074505806)),(float(0),float(0),float(0.009999999776482582),float(0.009999999776482582)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="l_shoulderRoll", key=[float(0),float(0.20000000298023224),float(0.4000000059604645),float(0.5),float(0.8500000238418579),float(1)], keyValue=[(float(0.25),float(0),float(1),float(1.7599999904632568)),(float(0),float(0),float(1),float(1.659999966621399)),(float(0.25),float(0),float(1),float(1.7599999904632568)),(float(0),float(0),float(1),float(1.25600004196167)),(float(0),float(0),float(1),float(0.05000000074505806)),(float(0.25),float(0),float(1),float(1.7599999904632568))]),
ROUTE(fromField="fraction_changed", fromNode="Time2", toField="set_fraction", toNode="r_sternoclavicularRoll"),
ROUTE(fromField="fraction_changed", fromNode="Time2", toField="set_fraction", toNode="r_acromioclavicularRoll"),
ROUTE(fromField="fraction_changed", fromNode="Time2", toField="set_fraction", toNode="r_shoulderRoll"),
ROUTE(fromField="fraction_changed", fromNode="Time2", toField="set_fraction", toNode="r_ForeArmPitch"),
ROUTE(fromField="fraction_changed", fromNode="Time2", toField="set_fraction", toNode="r_wristRoll"),
ROUTE(fromField="fraction_changed", fromNode="Time2", toField="set_fraction", toNode="r_handPitch"),
ROUTE(fromField="value_changed", fromNode="r_sternoclavicularRoll", toField="set_rotation", toNode="Joe_r_sternoclavicular"),
ROUTE(fromField="value_changed", fromNode="r_acromioclavicularRoll", toField="set_rotation", toNode="Joe_r_acromioclavicular"),
ROUTE(fromField="value_changed", fromNode="r_shoulderRoll", toField="set_rotation", toNode="Joe_r_shoulder"),
ROUTE(fromField="value_changed", fromNode="r_ForeArmPitch", toField="set_rotation", toNode="Joe_r_elbow"),
ROUTE(fromField="value_changed", fromNode="r_wristRoll", toField="set_rotation", toNode="Joe_r_wrist"),
ROUTE(fromField="value_changed", fromNode="l_shoulderRoll", toField="set_rotation", toNode="Joe_l_shoulder"),
Group(children=[
PositionInterpolator(DEF="HUMANOIDROOT_POSITION_ANIMATOR", key=[float(0),float(0.041669998317956924),float(0.125),float(0.16670000553131104),float(0.20829999446868896),float(0.25),float(0.29170000553131104),float(0.375),float(0.45829999446868896),float(0.5),float(0.541700005531311),float(0.583299994468689),float(0.625),float(0.708299994468689),float(0.75),float(0.791700005531311),float(0.875),float(0.916700005531311),float(1)], keyValue=[(0,-0.009279999881982803,0),(0,-0.0038580000400543213,0),(0,-0.008847000077366829,0),(0,-0.01486000046133995,0),(0,-0.026410000398755074,0),(0,-0.039340000599622726,0),(0,-0.050200000405311584,0),(0,-0.07468999922275543,0),(0,-0.027319999411702156,0),(0,-0.01607999950647354,0),(0,-0.011289999820291996,0),(0,-0.0058189998380839825,0),(0,-0.0020039998926222324,0),(0,-0.0025790000800043344,0),(0,-0.014299999922513962,0),(0,-0.03799000009894371,0),(0,-0.05648000165820122,0),(0,-0.04500000178813934,0),(0,-0.009279999881982803,0)]),
OrientationInterpolator(DEF="HUMANOIDROOT_ANIMATOR", key=[float(0),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="L_HIP_ANIMATOR", key=[float(0),float(0.25),float(0.375),float(0.5),float(0.666700005531311),float(0.791700005531311),float(0.916700005531311),float(1)], keyValue=[(float(-0.8730000257492065),float(0.06094000115990639),float(0.48399999737739563),float(0.2865000069141388)),(float(0.9962999820709229),float(-0.010569999925792217),float(0.08481000363826752),float(0.24879999458789825)),(float(0.9965000152587891),float(0.01590999960899353),float(-0.08222000300884247),float(0.38359999656677246)),(float(-0.7017999887466431),float(-0.03223000094294548),float(-0.7117000222206116),float(0.12890000641345978)),(float(-1),float(0),float(0),float(0.551800012588501)),(float(-0.996399998664856),float(0.02230999991297722),float(0.08169999718666077),float(0.535099983215332)),(float(-0.98089998960495),float(0.04912000149488449),float(0.18809999525547028),float(0.5203999876976013)),(float(-0.8730000257492065),float(0.06094000115990639),float(0.48399999737739563),float(0.2865000069141388))]),
OrientationInterpolator(DEF="L_KNEE_ANIMATOR", key=[float(0),float(0.20829999446868896),float(0.375),float(0.5),float(0.666700005531311),float(0.791700005531311),float(0.916700005531311),float(1)], keyValue=[(float(1),float(0),float(0),float(0.32260000705718994)),(float(1),float(0),float(0),float(0.15559999644756317)),(float(1),float(0),float(0),float(0.08677999675273895)),(float(1),float(0),float(0),float(0.8751000165939331)),(float(1),float(0),float(0),float(1.13100004196167)),(float(1),float(0),float(0),float(0.09961000084877014)),(float(1),float(0),float(0),float(0.39419999718666077)),(float(1),float(0),float(0),float(0.32260000705718994))]),
OrientationInterpolator(DEF="L_ANKLE_ANIMATOR", key=[float(0),float(0.125),float(0.20829999446868896),float(0.375),float(0.666700005531311),float(0.916700005531311),float(1)], keyValue=[(float(-1),float(0),float(0),float(0.06710000336170197)),(float(-1),float(0),float(0),float(0.2152000069618225)),(float(-1),float(0),float(0),float(0.31839999556541443)),(float(-1),float(0),float(0),float(0.4717000126838684)),(float(-1),float(0),float(0),float(0.29120001196861267)),(float(1),float(0),float(0),float(0.22220000624656677)),(float(-1),float(0),float(0),float(0.06710000336170197))]),
OrientationInterpolator(DEF="R_ANKLE_ANIMATOR", key=[float(0),float(0.125),float(0.20829999446868896),float(0.375),float(0.45829999446868896),float(0.5),float(0.666700005531311),float(0.75),float(0.7799999713897705),float(0.916700005531311),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.353300005197525)),(float(-1),float(0),float(0),float(0.10719999670982361)),(float(1),float(0),float(0),float(0.4000000059604645)),(float(1),float(0),float(0),float(0.12700000405311584)),(float(-1),float(0),float(0),float(0.017999999225139618)),(float(-1),float(0),float(0),float(0.057999998331069946)),(float(-1),float(0),float(0),float(0.23999999463558197)),(float(-1),float(0),float(0),float(0.3499999940395355)),(float(-1),float(0),float(0),float(0.33000001311302185)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="L_subtalar_ANIMATOR", key=[float(0),float(0.30000001192092896),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="L_MIDTARSAL_ANIMATOR", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(-0.20000000298023224)),(float(0),float(0),float(1),float(0))]),
OrientationInterpolator(DEF="L_metatarsal_ANIMATOR", key=[float(0),float(0.20000000298023224),float(0.4000000059604645),float(0.800000011920929),float(1)], keyValue=[(float(-1),float(0),float(0),float(0.30000001192092896)),(float(-1),float(0),float(0),float(0.15000000596046448)),(float(1),float(0),float(0),float(0.30000001192092896)),(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.30000001192092896))]),
OrientationInterpolator(DEF="R_HIP_ANIMATOR", key=[float(0),float(0.125),float(0.20829999446868896),float(0.29170000553131104),float(0.375),float(0.5),float(0.666700005531311),float(0.791700005531311),float(0.916700005531311),float(1)], keyValue=[(float(-0.5831000208854675),float(0.035110000520944595),float(0.8116000294685364),float(0.14810000360012054)),(float(-0.9950000047683716),float(0.02295999974012375),float(0.0967399999499321),float(0.4683000147342682)),(float(-1),float(0.0019000000320374966),float(0.007960000075399876),float(0.4731999933719635)),(float(-0.9980000257492065),float(-0.015799999237060547),float(-0.06102000176906586),float(0.5078999996185303)),(float(-0.991100013256073),float(-0.03540999814867973),float(-0.12860000133514404),float(0.5418999791145325)),(float(-0.913100004196167),float(-0.0624300017952919),float(-0.40299999713897705),float(0.3361000120639801)),(float(-0.43059998750686646),float(-0.07962000370025635),float(-0.8989999890327454),float(0.07038000226020813)),(float(1),float(0),float(0),float(0.257099986076355)),(float(0.9890999794006348),float(-0.028049999848008156),float(0.1444000005722046),float(0.3878999948501587)),(float(-0.5831000208854675),float(0.035110000520944595),float(0.8116000294685364),float(0.14810000360012054))]),
OrientationInterpolator(DEF="R_KNEE_ANIMATOR", key=[float(0),float(0.125),float(0.20829999446868896),float(0.29170000553131104),float(0.375),float(0.5),float(0.666700005531311),float(0.791700005531311),float(0.916700005531311),float(1)], keyValue=[(float(1),float(0),float(0),float(0.8572999835014343)),(float(1),float(0),float(0),float(0.8925999999046326)),(float(1),float(0),float(0),float(0.535099983215332)),(float(1),float(0),float(0),float(0.17560000717639923)),(float(1),float(0),float(0),float(0.11940000206232071)),(float(1),float(0),float(0),float(0.31529998779296875)),(float(1),float(0),float(0),float(0.0935399979352951)),(float(1),float(0),float(0),float(0.0855799987912178)),(float(1),float(0),float(0),float(0.2475000023841858)),(float(1),float(0),float(0),float(0.8572999835014343))]),
OrientationInterpolator(DEF="R_subtalar_ANIMATOR", key=[float(0),float(0.22499999403953552),float(0.25),float(0.3499999940395355),float(0.44999998807907104),float(0.8500000238418579),float(0.9100000262260437)], keyValue=[(float(-1),float(0),float(0),float(0.10000000149011612)),(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(0.10000000149011612)),(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(0.10000000149011612)),(float(1),float(0),float(0),float(0.25)),(float(-1),float(0),float(0),float(0.10000000149011612))]),
OrientationInterpolator(DEF="R_MIDTARSAL_ANIMATOR", key=[float(0),float(0.2199999988079071),float(1)], keyValue=[(float(1),float(0),float(0),float(-0.20000000298023224)),(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(-0.20000000298023224))]),
OrientationInterpolator(DEF="R_metatarsal_ANIMATOR", key=[float(0),float(0.20000000298023224),float(0.4000000059604645),float(0.800000011920929),float(1)], keyValue=[(float(-1),float(0),float(0),float(0.15000000596046448)),(float(0),float(0),float(1),float(0)),(float(1),float(0),float(0),float(0.30000001192092896)),(float(-1),float(0),float(0),float(0.30000001192092896)),(float(-1),float(0),float(0),float(0.15000000596046448))]),
OrientationInterpolator(DEF="VL5_ANIMATOR", key=[float(0),float(0.20829999446868896),float(0.375),float(0.75),float(0.833299994468689),float(1)], keyValue=[(float(0),float(1),float(0),float(0.08259999752044678)),(float(-0.01971999928355217),float(-0.5974000096321106),float(0.8016999959945679),float(0.08230999857187271)),(float(0.009296000003814697),float(-0.9648000001907349),float(0.26269999146461487),float(0.17339999973773956)),(float(-0.012380000203847885),float(0.9549000263214111),float(-0.29679998755455017),float(0.0873199999332428)),(float(-0.008124999701976776),float(0.9690999984741211),float(-0.24629999697208405),float(0.15800000727176666)),(float(0),float(1),float(0),float(0.08259999752044678))]),
OrientationInterpolator(DEF="SKULLBASE_ANIMATOR", key=[float(0),float(0.375),float(0.41670000553131104),float(0.5),float(0.583299994468689),float(0.666700005531311),float(0.75),float(0.833299994468689),float(0.916700005531311),float(1)], keyValue=[(float(0),float(-1),float(0),float(0.08640000224113464)),(float(0),float(1),float(0),float(0.18250000476837158)),(float(0),float(1),float(0),float(0.15049999952316284)),(float(0),float(1),float(0),float(0.10530000180006027)),(float(0),float(1),float(0),float(0.04391000047326088)),(float(0),float(-1),float(0),float(0.031190000474452972)),(float(0),float(-1),float(0),float(0.0793600007891655)),(float(0),float(-1),float(0),float(0.1615999937057495)),(float(0),float(-1),float(0),float(0.1550000011920929)),(float(0),float(-1),float(0),float(0.08641999959945679))]),
OrientationInterpolator(DEF="L_SHOULDER_ANIMATOR", key=[float(0),float(0.375),float(0.916700005531311),float(1)], keyValue=[(float(1),float(0),float(0.4000000059604645),float(0.11999999731779099)),(float(-1),float(0),float(0.4000000059604645),float(0.1860000044107437)),(float(1),float(0),float(0.10000000149011612),float(0.335999995470047)),(float(1),float(0),float(0.4000000059604645),float(0.11999999731779099))]),
OrientationInterpolator(DEF="L_ELBOW_ANIMATOR", key=[float(0),float(0.375),float(0.916700005531311),float(1)], keyValue=[(float(-1),float(0),float(0),float(0.06599999964237213)),(float(-1),float(0),float(0),float(0.4880000054836273)),(float(-1),float(0),float(0),float(0.01769999973475933)),(float(-1),float(0),float(0),float(0.06598780304193497))]),
OrientationInterpolator(DEF="L_WRIST_ANIMATOR", key=[float(0),float(0.375),float(0.916700005531311),float(1)], keyValue=[(float(0),float(-1),float(0),float(0.460999995470047)),(float(-0.3301999866962433),float(-0.9275000095367432),float(0.17550000548362732),float(0.5388000011444092)),(float(0.03277739882469177),float(-0.99931401014328),float(-0.01721850037574768),float(0.4920330047607422)),(float(0),float(-1),float(0),float(0.4611000120639801))]),
OrientationInterpolator(DEF="R_SHOULDER_ANIMATOR", key=[float(0),float(0.375),float(0.916700005531311),float(1)], keyValue=[(float(-1),float(0),float(-1),float(0.09200000017881393)),(float(1),float(0),float(-0.20000000298023224),float(0.3197000026702881)),(float(-1),float(0),float(-0.5),float(0.15639999508857727)),(float(-1),float(0),float(-1),float(0.09200000017881393))]),
OrientationInterpolator(DEF="R_ELBOW_ANIMATOR", key=[float(0),float(0.375),float(0.916700005531311),float(1)], keyValue=[(float(-1),float(0),float(0),float(0.4115000069141388)),(float(-1),float(0),float(0),float(0.0925000011920929)),(float(-1),float(0),float(0),float(0.5725679993629456)),(float(-1),float(0),float(0),float(0.4115079939365387))]),
OrientationInterpolator(DEF="R_WRIST_ANIMATOR", key=[float(0),float(0.375),float(0.916700005531311),float(1)], keyValue=[(float(-0.8129000067710876),float(0.47589999437332153),float(-0.33570000529289246),float(0.13459999859333038)),(float(0.15330000221729279),float(-0.9878000020980835),float(0.02582000009715557),float(0.3901999890804291)),(float(-0.5701000094413757),float(0.7603999972343445),float(-0.3109999895095825),float(0.3659999966621399)),(float(-0.8129000067710876),float(0.47589999437332153),float(-0.33570000529289246),float(0.13459999859333038))])]),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="HUMANOIDROOT_POSITION_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="HUMANOIDROOT_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="L_HIP_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="L_KNEE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="L_ANKLE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="L_subtalar_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="L_MIDTARSAL_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="L_metatarsal_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="R_HIP_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="R_KNEE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="R_ANKLE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="R_subtalar_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="R_MIDTARSAL_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="R_metatarsal_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="VL5_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="SKULLBASE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="L_SHOULDER_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="L_ELBOW_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="Time1", toField="set_fraction", toNode="L_WRIST_ANIMATOR"),
ROUTE(fromField="value_changed", fromNode="HUMANOIDROOT_POSITION_ANIMATOR", toField="set_translation", toNode="Joe_HumanoidRoot"),
ROUTE(fromField="value_changed", fromNode="HUMANOIDROOT_ANIMATOR", toField="set_rotation", toNode="Joe_HumanoidRoot"),
ROUTE(fromField="value_changed", fromNode="L_HIP_ANIMATOR", toField="set_rotation", toNode="Joe_l_hip"),
ROUTE(fromField="value_changed", fromNode="L_KNEE_ANIMATOR", toField="set_rotation", toNode="Joe_l_knee"),
ROUTE(fromField="value_changed", fromNode="L_ANKLE_ANIMATOR", toField="set_rotation", toNode="Joe_l_ankle"),
ROUTE(fromField="value_changed", fromNode="L_MIDTARSAL_ANIMATOR", toField="set_rotation", toNode="Joe_l_midtarsal"),
ROUTE(fromField="value_changed", fromNode="L_subtalar_ANIMATOR", toField="set_rotation", toNode="Joe_l_subtalar"),
ROUTE(fromField="value_changed", fromNode="L_metatarsal_ANIMATOR", toField="set_rotation", toNode="Joe_l_metatarsal"),
ROUTE(fromField="value_changed", fromNode="R_HIP_ANIMATOR", toField="set_rotation", toNode="Joe_r_hip"),
ROUTE(fromField="value_changed", fromNode="R_KNEE_ANIMATOR", toField="set_rotation", toNode="Joe_r_knee"),
ROUTE(fromField="value_changed", fromNode="R_ANKLE_ANIMATOR", toField="set_rotation", toNode="Joe_r_ankle"),
ROUTE(fromField="value_changed", fromNode="R_subtalar_ANIMATOR", toField="set_rotation", toNode="Joe_r_subtalar"),
ROUTE(fromField="value_changed", fromNode="R_MIDTARSAL_ANIMATOR", toField="set_rotation", toNode="Joe_r_midtarsal"),
ROUTE(fromField="value_changed", fromNode="R_metatarsal_ANIMATOR", toField="set_rotation", toNode="Joe_r_metatarsal"),
ROUTE(fromField="value_changed", fromNode="VL5_ANIMATOR", toField="set_rotation", toNode="Joe_vl5"),
ROUTE(fromField="value_changed", fromNode="SKULLBASE_ANIMATOR", toField="set_rotation", toNode="Joe_skullbase"),
ROUTE(fromField="value_changed", fromNode="L_SHOULDER_ANIMATOR", toField="set_rotation", toNode="Joe_l_shoulder"),
ROUTE(fromField="value_changed", fromNode="L_ELBOW_ANIMATOR", toField="set_rotation", toNode="Joe_l_elbow"),
ROUTE(fromField="value_changed", fromNode="L_WRIST_ANIMATOR", toField="set_rotation", toNode="Joe_l_wrist"),
ROUTE(fromField="value_changed", fromNode="R_SHOULDER_ANIMATOR", toField="set_rotation", toNode="Joe_r_shoulder"),
ROUTE(fromField="value_changed", fromNode="R_ELBOW_ANIMATOR", toField="set_rotation", toNode="Joe_r_elbow"),
ROUTE(fromField="value_changed", fromNode="R_WRIST_ANIMATOR", toField="set_rotation", toNode="Joe_r_wrist"),
NavigationInfo(avatarSize=[float(0.25),float(1.600000023841858),float(0.75)], headlight=False),
Viewpoint(description="Front Up View", orientation=((-1,-1,0,0.550000011920929)), position=((-1,2,2.5))),
Viewpoint(description="From Left View", orientation=((0.30000001192092896,1,0,-1.5700000524520874)), position=((-2.5,1.5,0))),
Viewpoint(description="Front Mid View", position=((0,0.5,1.25))),
Viewpoint(description="Front Feet View", position=((0,0,0.75))),
Viewpoint(description="From Right View", orientation=((0,1,0,1.5700000524520874)), position=((1,1,0))),
Viewpoint(description="Front Head View", position=((0,1.649999976158142,0.75))),
Viewpoint(description="Front Mid View", position=((0,1,1.75))),
Viewpoint(description="Rear View", orientation=((0,1,0,3.140000104904175)), position=((0,1.5,-4))),
Viewpoint(description="Top View", orientation=((1,0,0,-1.5700000524520874)), position=((0,4,0))),
Viewpoint(description="Bottom View", orientation=((1,0,0,1.5700000524520874)), position=((0,-4,0))),
Background(groundAngle=[float(1.5700000524520874)], groundColor=[(0,0.10000000149011612,0),(0,0.10000000149011612,0)], skyColor=[(0,0,0.10000000149011612)]),
Transform(DEF="cordsysfloor", scale=((0.17499999701976776,0.17499999701976776,0.17499999701976776)), children=[
Inline(url=["JointCoordinateAxes.x3dv"])])]))
.XML())
