###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_02',geoSystem=['GDC'],position=(-78.79166633142387,-67.54166331393873,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-78.79166633142387,-67.54166331393873,0.0),range=4495500.0,child1Url=['../../tiles/4/world0-4.x3d'],child2Url=['../../tiles/4/world0-5.x3d'],child3Url=['../../tiles/4/world1-4.x3d'],child4Url=['../../tiles/4/world1-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world0-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-90.0416666667,-90.04166398449098,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,2721,2711,2703,2700,2696,2691,2686,2683,2680,2677,2675,2672,2670,2668,2666,2663,2661,2658,2657,2654,2652,2576,2573,2567,2560,2553,2550,2549,2549,2552,2554,2556,2557,2558,2557,2553,2544,2529,2510,2496,2476,2459,1978,1966,1992,2053,2137,2164,2159,2145,2142,2151,2163,2176,2185,2192,2176,2129,2100,2095,2106,2137,2161,1948,1786,1509,1572,1598,1431,1345,1328,1351,1399,1460,1519,1604,1703,1726,1737,1761,1776,1782,1793,1803,2065,1931,1517,1382,1309,1174,1107,1028,964,888,843,790,808,938,1071,1203,1327,1409,1449,1463,1496,1727,1623,1473,1323,1251,1147,1030,901,892,811,707,498,314,37,461,796,1410,1419,1107,1022,1032,1704,1590,1398,1250,1045,886,657,498,443,396,283,101,1,1,1,0,236,528,845,299,0,1793,1650,1321,1077,878,597,310,246,250,313,110,0,1,1,0,0,1,1,0,0,0,1977,1696,1374,1380,947,606,144,1,0,1,0,1,1,1,1,1,0,134,390,458,420,2020,1873,1423,386,0,0,1,1,1,381,1,1,1,1,1,1,1,0,403,648,574,1676,2032,2212,252,491,0,1,208,1,1,0,1,1,0,0,0,1,1,0,148,56,1418,1216,894,804,812,1076,0,1,1,1,1,1,1,0,0,1,1,0,-35,-275,-305,1113,1232,1178,990,707,418,230,503,1102,1290,994,0,1,1,0,7,-499,-489,-438,-299,-328,1099,1293,1320,1170,958,806,832,1061,1479,1692,1882,1424,6,-316,-569,-488,-449,-429,-483,-528,-454,1064,848,743,320,-9,571,-3,20,916,1024,1499,1716,1169,1,-583,-534,-440,-381,-397,-417,-514,0,-36,-85,-107,-68,1,0,-19,11,0,2,1448,1985,37,-424,-516,-545,-501,-353,-349,-1317,-507,-435,-510,-566,-315,-521,-259,22,230,797,-30,1312,1535,-17,-392,-661,-1144,-1867,-2117,-2451,-2850,-1847,-675,-550,-616,-639,-340,-289,-15,-7,745,573,1675,683,-8,-457,-786,-2254,-2925,-3146,-3443,-3567,-3631,-3058,-2556,-2810,-968,-705,-254,-328,-209,1275,183,1537,462,-49,-410,-653,-2393,-3138,-3486,-3808,-3981,-4151,-3901,-3662,-3584,-3820,-3777,-3377,-441,-349,-707,-272,-10,-27,-58,-491,-454,-2390,-3075,-3395,-3521,-3789,-4243,-3932,-3798,-3773,-3751,-3934,-3319,-550,-288,-532,-212,832,-58,-62,-493,-461,-2388,-3103,-3397,-3521,-3779],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
