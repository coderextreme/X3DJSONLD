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
    GeoViewpoint(description='GeoViewpoint_2_03',geoSystem=['GDC'],position=(-67.54166599614774,134.95834272103156,7492500.2232939005),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-67.54166599614774,134.95834272103156,0.0),range=8991000.0,child1Url=['../../tiles/3/world0-6.x3d'],child2Url=['../../tiles/3/world0-7.x3d'],child3Url=['../../tiles/3/world1-6.x3d'],child4Url=['../../tiles/3/world1-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/world0-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-90.0416666667,89.95834137992705,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=4.5,zDimension=21,zSpacing=2.25,height=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,3094,3095,3097,3099,3099,3095,3091,3088,3084,3079,3076,3071,3065,3062,3064,3068,3074,3080,3083,3082,3075,3272,3233,3193,3149,3102,3089,3056,3011,2987,2930,2881,2838,2797,2781,2714,2614,2426,2618,2191,2568,2627,3567,3480,3374,3298,3205,3113,3034,2948,2864,2798,2699,2555,2454,2412,2301,2420,2292,2526,1,1,0,3774,3692,3602,3443,3347,3231,3150,2979,2853,2678,2556,2404,2239,2023,1372,2132,1,0,0,0,0,3737,3756,3700,3548,3415,3348,3174,3010,2933,2821,2618,2500,2405,2374,2181,1551,63,1,1,0,1,3632,3728,3655,3522,3375,3275,3213,3164,3107,2961,2799,2681,2576,2509,2358,2103,1451,-685,-733,-405,-399,3519,3562,3487,3365,3099,3019,3111,3193,3230,3102,2923,2719,2566,2504,2204,2048,1937,-403,-558,-597,-399,3182,3230,3152,2964,2775,2793,2799,2891,3061,3030,2804,2477,2293,2095,2189,2208,1335,1945,-104,-2003,-1594,2505,2705,2544,2504,2400,2332,2183,2328,2526,2470,2507,2385,1858,1433,1170,1186,-606,-1532,-2566,-3630,-3687,1215,1500,1715,1775,1455,814,711,904,1392,1243,1748,1609,591,-434,-559,-918,-2634,-2047,-3060,-3469,-3446,-2271,-720,-170,-24,-676,-1469,-603,-2873,-424,-823,-479,-2188,-2682,-2949,-2990,-3121,-2825,-3058,-3091,-3380,-3480,-3855,-3466,-2765,-3590,-3630,-3733,-3521,-3838,-4112,-4375,-4162,-3772,-3916,-3885,-3462,-2338,-2765,-2791,-1922,-4045,-3343,-4257,-4399,-4446,-4424,-4144,-4276,-4404,-4364,-4479,-4592,-4646,-4285,-3960,-3537,-2827,-2779,-3304,-4179,-4708,-4227,-3870,-4708,-4379,-4367,-4577,-4416,-4589,-4672,-4612,-4650,-4716,-4620,-4002,-3688,-3233,-3904,-3563,-4013,-4721,-5247,-5083,-5122,-4074,-4169,-4068,-4380,-4140,-4509,-4397,-4651,-4724,-4428,-3954,-3730,-3281,-3483,-3631,-3663,-4207,-4720,-5294,-5165,-5183,-4538,-4152,-3842,-4024,-3847,-3885,-3963,-4345,-4635,-4214,-3951,-3585,-2722,-4054,-4072,-4303,-4637,-1388,-1186,-5046,-5274,-3949,-4002,-3835,-3437,-3702,-3657,-3713,-4212,-4374,-3714,-3401,-3109,-3615,-4169,-4330,-4316,-4263,-828,-478,-3180,-4933,-4045,-3608,-3283,-3292,-3046,-3280,-2988,-3260,-3528,-3603,-3422,-3087,-3998,-4137,-4281,-4612,-4816,-551,-533,-720,-2048,-3609,-3492,-2917,-2773,-3548,-3909,-3788,-4110,-4368,-4076,-4039,-3581,-4699,-865,-4868,-4553,-4524,-2226,-1215,-1285,-774,-3534,-3273,-2880,-2714,-3457,-3948,-3787,-3971,-4159,-4117,-4049,-3607,-4824,-908,-4887,-4553,-4510,-2089,-1193,-1327,-1357],
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
