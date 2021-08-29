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
    GeoViewpoint(description='GeoViewpoint_3_51',geoSystem=['GDC'],position=(33.7083370213374,-112.54166465504323,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(33.7083370213374,-112.54166465504323,0.0),range=4495500.0,child1Url=['../../tiles/4/world10-2.x3d'],child2Url=['../../tiles/4/world10-3.x3d'],child3Url=['../../tiles/4/world11-2.x3d'],child4Url=['../../tiles/4/world11-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world5-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(22.458336686061273,-135.0416653255955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-5163,-5352,-5208,-4775,-4447,-4484,-4034,-4041,-4003,-3393,-3390,-3287,-3214,-3710,190,1036,1141,788,-309,-26,61,-5160,-5097,-4954,-4797,-4483,-4374,-4341,-4042,-3715,-3870,-3303,-3182,-2918,-1846,1600,2300,2281,1246,-1663,-241,42,-5270,-5188,-3772,-4661,-4547,-3837,-4156,-3458,-3959,-3343,-2940,-3204,-3184,-342,1281,1869,1085,-425,-3235,-90,7,-5240,-4899,-4853,-4491,-4575,-4270,-4087,-4087,-4019,-3793,-3431,-3170,-2946,-39,1785,2112,89,-1696,-3611,-275,-44,-4986,-4783,-4806,-4449,-4352,-3938,-4100,-4042,-3913,-3766,-3326,-1036,-2689,51,2713,2171,134,-1766,-3759,-3750,-1121,-4749,-4665,-4606,-4600,-4263,-4277,-4165,-4148,-3879,-3670,-1621,-4,-94,1114,2136,1936,182,-905,-3707,-3748,-3672,-4727,-4482,-4805,-4481,-4443,-4284,-4207,-3996,-3902,-3527,-166,-1786,27,2155,1307,1988,159,-70,-3559,-3428,-3505,-4700,-4606,-4782,-4536,-4413,-3627,-4011,-3984,-3527,-3382,59,-1275,808,2457,1267,1435,97,-40,-2635,-2433,-3120,-4525,-4553,-4526,-4475,-4543,-4448,-4108,-4081,-3610,-205,454,4,1639,1380,1397,422,185,-45,-925,-903,-1289,-3601,-3663,-4643,-4620,-3838,-4311,-4198,-3899,-3620,-182,-484,281,2421,1581,1589,691,144,5,-37,-50,-57,-4434,-4271,-4651,-4468,-4195,-4245,-3973,-3319,-2643,486,-81,759,2618,1356,994,364,396,76,2,1,0,-4814,-4718,-4660,-4433,-4567,-4138,-4102,-3786,-1404,279,566,1246,1497,1377,1472,747,387,156,68,22,57,-4728,-4643,-4611,-3660,-3946,-3349,-3823,-1550,-1221,1,490,1307,1346,1525,851,818,486,174,123,29,76,-5125,-4330,-4116,-4348,-4452,-4402,-4003,-346,189,124,379,1059,1997,2339,1243,789,392,152,112,48,88,-5025,-5082,-4849,-4635,-4626,-4439,-3496,-809,513,275,731,1600,2093,1766,1383,959,339,229,119,76,39,-5109,-5069,-4908,-4791,-4673,-4162,-1161,510,770,548,1402,1582,2416,1979,1255,1024,473,328,147,194,62,-5154,-4947,-4884,-4728,-4663,-3837,410,79,2197,451,1298,2084,1826,2380,1553,983,591,278,325,323,72,-4985,-5049,-5030,-4751,-4441,-3678,545,1374,1286,1545,1779,1450,2181,2440,1957,951,555,393,262,416,128,-5296,-5069,-4921,-4509,-4335,-2947,-4,2332,1789,1713,1960,1706,2778,3028,1310,1001,612,404,259,183,206,-4841,-4675,-4368,-4239,-3974,-34,25,1606,2677,1885,1410,1548,1912,2902,1721,1029,622,409,297,262,173,-4304,-4139,-3342,-2891,-2783,543,2161,1424,1431,1935,2287,2067,1936,3307,1329,896,675,426,314,239,177,-4326,-4072,-3573,-3267,-3124,808,2085,1416,1408,2238,2073,2406,1862,3328,1383,907,676,442,343,227,196],
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
