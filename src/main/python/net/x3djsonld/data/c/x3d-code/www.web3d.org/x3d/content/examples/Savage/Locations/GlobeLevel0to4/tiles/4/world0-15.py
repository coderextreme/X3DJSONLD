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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/world0-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-90.0416666667,157.4583433915838,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,2941,2940,2939,2938,2937,2935,2934,2932,2930,2928,2926,2924,2921,2918,2917,2914,2912,2909,2907,2905,2903,2902,3013,3016,3019,3023,3026,3029,3032,3035,3037,3039,3039,3040,3040,3039,3038,3036,3033,3031,3028,3024,3020,3017,3121,3121,3121,3120,3120,3119,3118,3117,3116,3116,3115,3114,3114,3114,3113,3112,3112,3112,3111,3111,3110,3110,3087,3088,3088,3089,3089,3090,3091,3091,3092,3093,3094,3095,3096,3097,3098,3099,3100,3100,3101,3103,3105,3106,3040,3042,3045,3047,3049,3051,3053,3055,3056,3058,3058,3059,3060,3060,3060,3060,3058,3057,3054,3051,3047,3044,2962,2966,2970,2976,2982,2988,2994,2998,3000,3000,2999,2999,3000,3000,3001,3002,3002,3004,3006,3009,3010,3011,2892,2892,2892,2892,2892,2892,2893,2894,2896,2898,2899,2900,2899,2893,2880,2867,2865,2872,2883,2888,2890,2890,2796,2782,2766,2744,2718,2696,2670,2652,2646,2636,2623,2613,2601,2597,2594,2595,2598,2603,2637,2676,2697,2698,2645,2612,2590,2559,2506,2430,2400,2394,2443,2595,2625,2241,2142,2181,2245,2687,2558,2557,2572,2594,2622,2644,2561,2504,2465,2433,2400,2341,2242,2196,1800,1684,1594,1406,1974,1831,1809,2688,3205,2846,3213,3457,2476,2183,2431,2433,2434,2449,2431,2192,2146,2509,2332,2178,1603,1329,1196,819,808,1993,2944,2771,2833,1808,803,524,2297,2287,2247,2225,2060,1904,1800,1724,1740,2255,2623,2335,1552,766,707,970,1147,539,482,39,0,0,2198,2201,1944,1996,2187,2641,2398,1876,1591,1752,1723,527,819,228,163,1,0,0,0,0,0,0,2016,1737,1542,1590,1918,1847,1822,797,879,2626,1424,228,0,0,0,0,0,1,0,0,0,0,1574,1475,1221,908,428,484,375,506,1094,1,1,0,1,0,0,0,0,0,1,0,1,0,2036,2031,2130,1300,1242,447,1177,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1819,2013,2199,347,557,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1061,2275,1458,839,222,0,0,0,1,0,1,1,1,0,0,1,1,1,0,0,0,1,626,217,383,553,408,0,0,0,0,0,0,0,1,0,0,0,1,1,0,0,1,0,1201,927,1426,1117,74,1,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,1847,1996,1171,553,2,0,0,0,0,0,0,1,0,0,0,0,0,1,1,0,0,1,1558,1365,1014,672,808,67,0,1,0,1,0,1,1,0,0,0,0,1,1,0,0,0,1568,1405,1095,704,1504,631,204,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])))])
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
