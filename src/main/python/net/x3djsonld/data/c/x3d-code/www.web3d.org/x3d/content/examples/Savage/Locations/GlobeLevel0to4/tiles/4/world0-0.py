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
        texture=ImageTexture(url=['../../images/4/world0-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-90.0416666667,-180.0416666667,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,2898,2898,2896,2894,2891,2888,2886,2884,2881,2879,2876,2874,2872,2869,2867,2865,2862,2859,2858,2855,2853,2852,3011,3006,3002,2998,2993,2986,2979,2971,2964,2957,2952,2947,2942,2936,2931,2926,2922,2918,2915,2912,2909,2907,3107,3108,3107,3106,3104,3104,3103,3101,3101,3099,3098,3097,3096,3094,3093,3092,3089,3088,3084,3079,3073,3068,3108,3111,3113,3115,3117,3119,3120,3121,3122,3123,3125,3125,3124,3120,3113,3106,3094,3079,3064,3050,3038,3031,3035,3027,3016,3004,2996,2984,2970,2955,2941,2930,2922,2915,2907,2901,2895,2884,2878,2876,2879,2884,2889,2889,3011,3009,3003,2989,2951,2914,2887,2853,2763,2666,2620,2586,2520,2443,2418,2513,2595,2635,2626,2601,2580,2564,2891,2889,2877,2854,2820,2769,2694,2643,2607,2547,2458,2371,2266,2235,2186,1997,1992,2005,2001,2064,3133,3085,2672,2660,2668,2705,2754,2788,2805,2817,2777,2633,2459,2413,2459,2606,2526,2191,2230,2761,2540,1128,1378,1844,2557,2321,2282,1990,2224,2470,2795,2752,2642,2602,2747,2928,2287,2704,1030,944,881,464,431,309,314,493,2417,1968,1829,1108,1187,2021,2391,3580,3266,1629,852,550,640,533,10,-1,0,0,1,0,1,1,641,1113,740,1031,134,401,158,21,-9,-3,1,0,0,0,0,0,0,0,0,1,6,10,1,0,0,1,1,0,0,1,0,0,0,0,1,0,1,0,0,1,6,17,32,46,1,0,1,0,0,1,0,0,0,0,0,1,0,0,1,1,0,0,1,1,15,27,1,1,1,0,1,1,0,0,1,0,1,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,0,0,1,0,1,1,1,1,0,1,1,0,1,0,1,1,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,1,0,0,1,0,1,0,0,1,0,1,0,0,0,0,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,0,0,0,1,1,0,1,0,1,0,0,0,0,1,1,0,1,0,0,0,0,1,1,0,0,0,0,1,0,0,1,1,0,0,1,1,1,0,0,0,0,0,1,0,1,1,1,1,0,0,0,1,0,1,0,0,0,1,1,0,1,0,1,1,0,0,1,0,1,0,1,115,391,387,121,1,0,1,1,1,1,0,1,0,1,1,1,1,1,1,0,0,1,214,138,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,0,1,72,4,1,1,0,1],
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
