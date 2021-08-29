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
    GeoViewpoint(description='GeoViewpoint_3_04',geoSystem=['GDC'],position=(-78.79166633142387,22.458339368270288,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-78.79166633142387,22.458339368270288,0.0),range=4495500.0,child1Url=['../../tiles/4/world0-8.x3d'],child2Url=['../../tiles/4/world0-9.x3d'],child3Url=['../../tiles/4/world1-8.x3d'],child4Url=['../../tiles/4/world1-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world0-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-90.0416666667,-0.04166130228196607,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,2694,2699,2703,2707,2712,2719,2726,2734,2744,2754,2766,2778,2790,2798,2805,2816,2829,2846,2864,2885,2903,2606,2625,2646,2669,2690,2703,2713,2719,2724,2728,2729,2731,2735,2744,2760,2787,2817,2873,2922,2961,2988,2599,2612,2632,2653,2673,2690,2700,2710,2727,2745,2767,2788,2804,2828,2862,2896,2931,2978,3010,3042,3075,2605,2620,2636,2653,2671,2689,2700,2706,2712,2721,2736,2762,2798,2852,2911,2971,3029,3100,3138,3172,3196,2536,2555,2573,2586,2595,2600,2610,2621,2633,2648,2665,2691,2753,2825,2901,2968,3045,3124,3199,3277,3320,2405,2449,2484,2506,2526,2545,2560,2578,2597,2623,2675,2713,2759,2842,2939,2984,3060,3168,3293,3350,3383,2195,2269,2357,2425,2464,2494,2514,2537,2558,2577,2612,2696,2768,2878,2960,3030,3141,3244,3337,3406,3449,2175,2249,2346,2446,2492,2521,2560,2606,2695,2779,2876,2975,3034,3098,3197,3277,3360,3441,3504,3553,3601,2321,2425,2509,2554,2632,2732,2824,2914,2955,2998,3068,3131,3234,3321,3370,3432,3503,3541,3564,3684,3731,2386,2468,2599,2711,2792,2862,2997,3062,3111,3200,3234,3300,3363,3400,3465,3542,3583,3603,3623,3646,3653,2508,2585,2724,2813,2889,3002,3102,3181,3243,3297,3334,3408,3499,3518,3564,3637,3688,3702,3699,3652,3600,2595,2766,2914,2974,3004,3117,3241,3292,3342,3386,3471,3560,3599,3651,3709,3729,3752,3792,3764,3677,3601,2787,2904,3007,3130,3205,3280,3348,3405,3450,3472,3556,3643,3655,3644,3641,3654,3652,3647,3636,3615,3588,2906,2909,2925,3116,3261,3377,3438,3454,3495,3516,3538,3547,3528,3517,3345,3376,3403,3429,3485,3492,3476,2466,2618,2856,3090,3223,3289,3319,3253,3250,3238,3287,3293,3212,3180,2990,2979,3101,3206,3267,3262,3262,1597,2426,2781,3015,2999,2929,2905,2762,2700,2514,2487,2941,2687,2278,2246,2484,2676,2812,2827,2871,2891,-20,812,1278,1345,1094,1706,1751,1529,1519,1015,938,919,813,1211,1347,1605,1924,2150,2244,2354,2488,371,27,-2,1,45,-136,222,328,-4,85,248,12,38,-44,701,977,1417,1310,1196,1874,2183,-1847,-2488,-2676,-1631,-1966,-983,-396,-345,-960,-1738,-2477,-3044,-2711,-479,177,497,-76,-181,715,1510,1989,-4353,-4361,-3504,-3695,-3559,-2433,-2704,-3553,-4041,-3994,-3932,-3489,-3572,-3114,-1349,-331,-680,-1537,-312,38,1277,-4359,-4409,-3599,-3843,-3598,-2470,-2790,-3632,-4027,-3988,-4161,-3613,-3601,-3231,-1874,-382,-1068,-2040,-411,16,1139],
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
