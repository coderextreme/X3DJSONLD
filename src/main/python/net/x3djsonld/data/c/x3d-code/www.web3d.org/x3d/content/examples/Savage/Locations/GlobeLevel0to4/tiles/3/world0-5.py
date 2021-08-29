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
    GeoViewpoint(description='GeoViewpoint_3_05',geoSystem=['GDC'],position=(-78.79166633142387,67.4583407093748,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-78.79166633142387,67.4583407093748,0.0),range=4495500.0,child1Url=['../../tiles/4/world0-10.x3d'],child2Url=['../../tiles/4/world0-11.x3d'],child3Url=['../../tiles/4/world1-10.x3d'],child4Url=['../../tiles/4/world1-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world0-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-90.0416666667,44.95834003882254,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,2903,2933,2970,2998,3014,3029,3039,3046,3052,3054,3054,3053,3050,3046,3040,3036,3031,3026,3021,3017,3014,2988,3002,3014,3025,3037,3047,3056,3063,3069,3075,3080,3083,3086,3088,3089,3090,3091,3091,3092,3092,3092,3075,3095,3101,3106,3110,3115,3119,3123,3125,3125,3124,3124,3122,3119,3115,3110,3105,3100,3098,3097,3095,3196,3214,3237,3261,3280,3293,3300,3305,3312,3319,3323,3324,3321,3315,3307,3300,3296,3289,3279,3266,3251,3320,3351,3371,3385,3396,3407,3425,3444,3462,3478,3491,3497,3499,3499,3498,3495,3483,3458,3419,3387,3367,3383,3402,3440,3486,3517,3558,3594,3625,3669,3709,3749,3767,3761,3746,3732,3708,3671,3638,3606,3585,3550,3449,3504,3578,3633,3689,3719,3765,3806,3839,3875,3898,3911,3922,3916,3897,3853,3805,3767,3712,3676,3638,3601,3655,3693,3713,3737,3762,3790,3828,3886,3922,3957,3979,3999,4020,4034,4023,3996,3935,3882,3811,3754,3731,3737,3735,3737,3755,3780,3800,3796,3798,3819,3850,3863,3884,3932,3993,4024,4034,3998,3928,3877,3796,3653,3639,3637,3626,3577,3498,3448,3465,3508,3582,3621,3645,3662,3685,3713,3725,3723,3708,3711,3741,3778,3600,3568,3558,3533,3439,3341,3280,3238,3237,3232,3248,3251,3256,3262,3282,3315,3382,3468,3544,3607,3662,3601,3545,3489,3397,3290,3111,3000,2915,2851,2790,2710,2696,2711,2785,2894,3014,3121,3273,3446,3546,3631,3588,3524,3450,3299,3133,2959,2844,2581,2369,2275,2232,2252,2345,2483,2622,2789,3037,3229,3375,3452,3601,3476,3430,3322,3213,3058,2765,2535,2276,2078,1713,1603,1736,1999,2247,2533,2738,3018,3233,3365,3406,3536,3262,3256,3232,3160,3007,2750,2530,2171,1762,1129,998,1487,2074,2131,2410,2664,2870,3127,3301,3368,3490,2891,2948,3068,3101,3061,2854,2624,2296,1815,1112,146,781,1209,1645,2122,2551,2762,2998,3141,3222,3301,2488,2591,2866,2933,3045,2992,2755,2433,1945,1452,590,-124,473,1549,2074,2339,2601,2753,2854,2989,3076,2183,2426,2429,2608,2728,2862,2746,2585,2205,1724,865,-16,-53,1083,1610,1940,2300,2505,2618,2697,2710,1989,2094,1902,2347,2493,2592,2554,2349,1980,1775,1092,-28,-8,-94,1,1083,1706,2022,2187,2296,2382,1277,1233,1152,1821,2167,1560,1899,1503,1568,1134,973,601,-635,-716,-532,-35,1302,1317,1583,1584,1704,1139,1172,1059,1796,2129,1495,1855,1442,1474,1081,845,578,-652,-644,-496,-136,1079,1273,1530,1524,1668],
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
