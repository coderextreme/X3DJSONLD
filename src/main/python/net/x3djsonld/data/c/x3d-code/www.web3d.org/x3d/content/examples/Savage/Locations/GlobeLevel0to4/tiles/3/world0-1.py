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
    GeoViewpoint(description='GeoViewpoint_3_01',geoSystem=['GDC'],position=(-78.79166633142387,-112.54166465504323,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-78.79166633142387,-112.54166465504323,0.0),range=4495500.0,child1Url=['../../tiles/4/world0-2.x3d'],child2Url=['../../tiles/4/world0-3.x3d'],child3Url=['../../tiles/4/world1-2.x3d'],child4Url=['../../tiles/4/world1-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-90.0416666667,-135.0416653255955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,2895,2887,2879,2869,2858,2849,2840,2831,2824,2818,2811,2806,2802,2799,2794,2786,2775,2762,2749,2734,2721,2817,2832,2847,2858,2860,2851,2833,2813,2799,2789,2777,2766,2753,2734,2699,2632,2596,2583,2579,2578,2576,2469,2454,2388,2329,2254,2248,2422,2488,2515,2539,2566,2588,2590,2555,2491,2427,2339,2199,2096,2007,1978,1202,1143,2046,3284,3063,2675,2559,2469,2409,2393,2394,2398,2466,2522,2532,2430,2057,1951,2088,2229,1948,654,793,844,939,999,1039,1203,1234,1354,1571,1741,2009,2159,2203,2281,2400,2279,2241,2159,2179,2065,407,458,553,648,709,860,977,1102,1283,1382,1501,1605,1797,1905,1986,2011,1996,1950,1898,1841,1727,592,597,750,803,809,878,912,955,1187,1311,1436,1625,1752,2011,2212,2168,2073,1986,1931,1786,1704,602,689,792,888,978,1093,1188,1274,1388,1506,1654,1808,1927,2005,2071,2166,2289,2143,2087,1942,1793,663,869,1039,1174,1269,1339,1432,1496,1545,1614,1725,1811,1908,2007,2090,2122,2147,2201,2231,2128,1977,873,1090,1236,1399,1487,1520,1542,1597,1686,1745,1795,1823,1867,1893,1921,1990,1991,1936,1922,1977,2020,1428,1524,1671,1699,1677,1695,1681,1700,1699,1611,1518,1475,1477,1508,1544,1556,1629,1653,1629,1633,1676,2008,2104,2199,2183,3083,2335,2142,1774,1758,1416,1274,1226,1193,1197,1243,1277,1300,1328,1371,1393,1418,1180,1732,1685,2173,2153,1971,1791,1673,1619,1288,1167,921,750,854,913,810,698,754,883,996,1113,342,352,107,280,447,490,603,681,807,455,37,-22,-1,0,-5,0,404,879,847,884,1099,-1429,-1142,-816,-328,407,-89,-8,-29,-140,-127,-264,-347,-337,-65,-4,21,338,576,1195,1022,1064,-3274,-2736,-2194,-1326,-956,-1314,-1155,-980,-954,-1000,-1127,-1157,-877,-317,-6,0,113,1,0,0,0,-4116,-3832,-3479,-3182,-3610,-2663,-2715,-2227,-1150,-563,-526,-906,-1025,-553,-658,-392,-259,-516,-419,-218,-507,-4388,-4191,-3763,-3148,-3395,-3309,-3348,-2775,-3124,-3418,-3194,-2741,-3133,-2992,-3288,-3322,-3374,-2210,-848,-2052,-1847,-4390,-4242,-2594,-3705,-3751,-3852,-3356,-3158,-3351,-3914,-3501,-3601,-3957,-3935,-3977,-4148,-4310,-4409,-3940,-4086,-3631,-4355,-4232,-4245,-4003,-4017,-4183,-4296,-4147,-4112,-4318,-4173,-4014,-4255,-4406,-4396,-4468,-4546,-4358,-4373,-4261,-4151,-4407,-4289,-4105,-4003,-4111,-4157,-4316,-4156,-4145,-4414,-4176,-4050,-4232,-4443,-4398,-4515,-4562,-4432,-4354,-4298,-4243],
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
