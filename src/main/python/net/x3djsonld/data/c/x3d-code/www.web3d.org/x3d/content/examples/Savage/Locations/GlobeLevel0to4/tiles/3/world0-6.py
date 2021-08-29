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
    GeoViewpoint(description='GeoViewpoint_3_06',geoSystem=['GDC'],position=(-78.79166633142387,112.4583420504793,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-78.79166633142387,112.4583420504793,0.0),range=4495500.0,child1Url=['../../tiles/4/world0-12.x3d'],child2Url=['../../tiles/4/world0-13.x3d'],child3Url=['../../tiles/4/world1-12.x3d'],child4Url=['../../tiles/4/world1-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world0-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-90.0416666667,89.95834137992705,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,3014,3011,3009,3007,3006,3006,3006,3006,3007,3009,3009,3010,3009,3009,3008,3006,3003,3001,2997,2992,2989,3092,3093,3093,3094,3094,3095,3096,3096,3095,3094,3093,3092,3091,3090,3089,3088,3087,3086,3085,3085,3084,3095,3094,3094,3096,3098,3098,3099,3099,3099,3097,3093,3086,3076,3064,3051,3036,3022,3010,3000,2990,2981,3251,3234,3218,3200,3181,3163,3142,3120,3103,3098,3093,3083,3067,3046,3027,3012,3002,2986,2956,2925,2899,3367,3345,3326,3308,3283,3251,3224,3203,3175,3140,3110,3079,3035,3000,2965,2924,2899,2872,2834,2796,2772,3550,3506,3458,3400,3370,3332,3299,3242,3192,3161,3122,3090,3052,3015,2961,2898,2867,2831,2795,2766,2724,3638,3600,3570,3516,3465,3398,3337,3289,3265,3220,3099,3003,2975,2957,2920,2878,2821,2783,2736,2671,2598,3754,3700,3668,3633,3581,3491,3423,3396,3308,3251,3202,3161,3109,3045,2975,2921,2802,2692,2646,2619,2579,3796,3764,3734,3699,3625,3539,3475,3417,3379,3312,3257,3201,3147,3080,2996,2924,2891,2875,2837,2699,2584,3778,3781,3766,3739,3703,3632,3536,3455,3400,3370,3321,3255,3178,3124,3016,2958,2922,2890,2816,2723,2600,3662,3703,3731,3728,3694,3630,3573,3520,3452,3389,3349,3299,3222,3167,3107,3043,3002,2944,2854,2767,2690,3631,3699,3721,3715,3665,3587,3545,3499,3439,3383,3308,3261,3213,3182,3143,3104,3073,3030,2941,2840,2758,3601,3692,3723,3702,3616,3549,3500,3397,3285,3238,3220,3217,3215,3205,3200,3200,3183,3117,3024,2938,2869,3536,3631,3622,3585,3527,3484,3402,3299,3184,3120,3088,3087,3146,3195,3202,3227,3243,3194,3070,2970,2900,3490,3550,3521,3480,3444,3405,3311,3167,3069,3001,2993,3021,3093,3131,3148,3190,3217,3207,3134,3037,2911,3301,3397,3382,3352,3317,3233,3102,2972,2885,2860,2871,2913,2946,2981,3012,3077,3127,3167,3099,3005,2901,3076,3131,3146,3115,3052,2976,2901,2808,2709,2720,2743,2749,2746,2754,2796,2879,2991,3020,2997,2914,2784,2710,2799,2877,2828,2756,2708,2682,2614,2554,2559,2600,2481,2472,2471,2551,2651,2700,2692,2683,2681,2593,2382,2480,2595,2599,2474,2440,2459,2422,2330,2305,2173,2042,2091,2087,2196,2362,2412,2415,2324,2465,2518,1704,1971,2057,2101,1978,1963,2111,2181,2081,1871,1619,1438,1399,1390,1622,1872,1968,1808,1803,1989,2233,1668,1912,2018,2053,1919,1917,2088,2151,2057,1826,1578,1385,1352,1312,1579,1826,1929,1765,1775,1962,2189],
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
