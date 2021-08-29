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
    GeoViewpoint(description='GeoViewpoint_3_03',geoSystem=['GDC'],position=(-78.79166633142387,-22.54166197283422,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-78.79166633142387,-22.54166197283422,0.0),range=4495500.0,child1Url=['../../tiles/4/world0-6.x3d'],child2Url=['../../tiles/4/world0-7.x3d'],child3Url=['../../tiles/4/world1-6.x3d'],child4Url=['../../tiles/4/world1-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world0-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-90.0416666667,-45.04166264338647,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,2652,2650,2648,2647,2645,2644,2644,2644,2645,2646,2648,2651,2654,2658,2662,2666,2672,2677,2683,2688,2694,2459,2446,2438,2436,2438,2444,2455,2471,2492,2504,2516,2528,2540,2550,2560,2568,2576,2583,2590,2598,2606,2161,2175,2182,2186,2193,2199,2210,2232,2261,2290,2310,2338,2369,2397,2432,2471,2501,2530,2560,2584,2599,1803,1834,1874,1925,1990,2056,2107,2137,2156,2191,2281,2353,2397,2434,2477,2509,2530,2553,2577,2595,2605,1496,1580,1712,1752,1785,1874,1946,1998,2047,2098,2155,2200,2251,2301,2340,2373,2397,2432,2482,2512,2536,1032,1112,1418,1497,1550,1621,1667,1693,1713,1746,1794,1853,1934,2028,2086,2130,2183,2252,2319,2369,2405,0,265,810,1247,1385,1406,1439,1486,1527,1603,1643,1687,1743,1848,1943,1989,2011,2034,2070,2123,2195,0,1,150,430,671,695,700,761,989,1091,1198,1366,1549,1664,1760,1863,1924,1974,2022,2081,2175,420,0,1,0,1,0,1,293,779,784,835,1007,1346,1510,1625,1774,1937,2099,2214,2276,2321,574,0,1,0,1,1,191,301,722,903,1007,1010,1194,1401,1521,1791,2007,2194,2264,2308,2386,56,-531,-1023,-1203,-240,499,1021,1059,944,896,1037,1457,1619,1716,1794,1919,2046,2131,2307,2413,2508,-305,-418,-625,-888,-1047,-481,3,703,1268,1514,1599,1668,1762,1830,1964,2163,2278,2325,2410,2497,2595,-328,-366,-391,-438,-624,-738,-688,-488,-348,199,523,578,986,1253,1831,2165,2321,2464,2542,2639,2787,-454,-349,-380,-403,-400,-565,-600,-399,-446,-39,1,0,0,621,1180,2033,2408,2551,2777,2848,2906,-514,-590,-1033,-1965,-2633,-2577,-2478,-2801,-2852,-2273,-525,0,0,56,440,920,1411,1811,2190,2612,2466,-1317,-1955,-2647,-3385,-3466,-3638,-3634,-3851,-3844,-3888,-3599,-3435,6,1,0,297,1090,1516,1729,1283,1597,-2850,-3308,-3622,-3902,-3807,-3931,-4197,-3982,-4083,-4150,-4227,-4311,-3863,-1762,-382,3,345,407,925,697,-20,-3567,-3671,-3970,-4103,-4186,-4201,-4311,-4462,-4483,-4315,-4438,-4467,-4505,-4622,-2644,-1851,-298,-566,2,-27,371,-3981,-3954,-4038,-4271,-4306,-4419,-4486,-4573,-4646,-4628,-4665,-4688,-4674,-4735,-4733,-4380,-3390,-2980,-2747,-3265,-1847,-3789,-4203,-4267,-4332,-4427,-4485,-4546,-4627,-4705,-4770,-4821,-4872,-4806,-4799,-4872,-4877,-3372,-3727,-4128,-4209,-4353,-3779,-4205,-4280,-4337,-4441,-4474,-4536,-4630,-4710,-4767,-4820,-4846,-4827,-4808,-4856,-4915,-4574,-4085,-4096,-4120,-4359],
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
