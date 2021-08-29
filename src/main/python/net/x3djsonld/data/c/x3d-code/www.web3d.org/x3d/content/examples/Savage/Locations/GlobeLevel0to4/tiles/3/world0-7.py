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
    GeoViewpoint(description='GeoViewpoint_3_07',geoSystem=['GDC'],position=(-78.79166633142387,157.4583433915838,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-78.79166633142387,157.4583433915838,0.0),range=4495500.0,child1Url=['../../tiles/4/world0-14.x3d'],child2Url=['../../tiles/4/world0-15.x3d'],child3Url=['../../tiles/4/world1-14.x3d'],child4Url=['../../tiles/4/world1-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world0-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-90.0416666667,134.95834272103156,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,2989,2986,2984,2985,2988,2993,2999,3004,3015,3027,3037,3045,3052,3058,3061,3062,3060,3056,3049,3041,3032,3084,3083,3081,3080,3077,3075,3073,3072,3072,3073,3075,3077,3080,3082,3085,3087,3089,3090,3091,3091,3090,2981,2970,2958,2947,2937,2929,2921,2916,2914,2914,2916,2920,2927,2939,2953,2964,2966,2962,2962,2957,2948,2899,2881,2859,2836,2815,2805,2802,2794,2759,2708,2668,2601,2503,2479,2500,2368,2363,2399,2584,2615,2578,2772,2744,2714,2689,2668,2649,2630,2598,2504,2482,2463,2464,2393,2612,1581,1435,680,2597,2574,1279,1065,2724,2660,2598,2552,2498,2491,2471,2413,2372,2212,2199,1978,2543,1942,1713,527,240,1,0,1,0,2598,2527,2477,2425,2394,2352,2294,2238,2216,2216,1601,1107,219,507,0,0,1,0,0,0,0,2579,2485,2404,2341,2262,2175,2101,1879,1603,1393,1801,1003,0,1,1,0,0,0,0,1,0,2584,2496,2383,2273,2264,2228,2028,1904,1687,1574,2191,61,0,0,0,1,0,1,0,1,0,2600,2542,2467,2374,2354,2336,2310,2282,2088,2141,1738,1746,1,0,1,0,0,0,0,1,0,2690,2627,2585,2531,2487,2461,2427,2386,2298,2185,2114,2284,1806,635,0,0,1,0,1,0,0,2758,2702,2649,2603,2561,2526,2517,2522,2426,2396,2288,1984,821,-166,-800,-824,-806,-333,-499,-372,-618,2869,2793,2706,2652,2609,2557,2499,2446,2294,2159,2030,1691,930,-851,-588,-400,-607,-576,-501,-407,-502,2900,2807,2736,2672,2600,2537,2512,2482,2292,2030,1847,1489,1214,73,-762,-398,-383,-550,-393,-386,-431,2911,2795,2708,2631,2534,2467,2441,2398,2310,2229,2134,2027,1633,2459,1001,-469,-597,-382,-593,-577,-382,2901,2653,2610,2544,2358,2289,2267,2329,2288,2274,2293,2334,1660,2119,1363,1891,-435,-551,-402,-1293,-1651,2784,2645,2487,2321,2243,2101,2033,2028,2030,2009,2141,2223,850,1761,1308,1936,1497,-1765,-2185,-959,-2371,2593,2600,2538,2310,2093,1940,1797,1643,1568,1664,1684,1901,-20,-76,-230,-416,-2540,-2474,-2729,-2861,-3524,2518,2391,2384,2122,1735,1492,1238,1108,981,878,1089,-1,-492,-1915,-2124,-2330,-2708,-2152,-3666,-3548,-3564,2233,2235,2005,1613,898,657,-2,-65,-422,-102,-355,-1614,-2177,-2608,-2705,-3055,-3064,-3352,-3391,-3388,-2806,2189,2186,1968,1588,831,698,-1,-104,-488,-266,-472,-1805,-2195,-2560,-2688,-2741,-3082,-3263,-3425,-3388,-3031],
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
