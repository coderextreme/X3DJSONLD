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
        texture=ImageTexture(url=['../../images/4/world0-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-90.0416666667,-157.54166599614774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,2852,2849,2847,2845,2843,2840,2839,2836,2834,2832,2829,2827,2825,2823,2821,2819,2817,2816,2814,2812,2810,2810,2907,2905,2902,2901,2900,2899,2899,2899,2899,2899,2899,2899,2899,2898,2897,2895,2894,2890,2887,2883,2880,2877,3068,3060,3051,3042,3033,3024,3016,3008,3002,2996,2991,2983,2974,2965,2957,2949,2942,2936,2930,2925,2921,2918,3031,3021,3012,3004,2996,2983,2960,2934,2913,2900,2889,2879,2872,2868,2865,2862,2860,2859,2860,2861,2864,2867,2889,2885,2872,2839,2717,2651,2629,2631,2626,2627,2623,2619,2631,2653,2671,2683,2690,2694,2696,2698,2700,2703,2564,2525,2462,2399,2343,2220,2214,2227,2254,2292,2343,2386,2421,2493,2559,2593,2608,2613,2603,2582,2543,2519,3085,2581,2427,1911,1974,1952,1633,1601,1603,1753,1779,1952,2121,2387,2332,2343,2392,2410,2421,2418,2345,2238,1844,1925,3227,1701,1053,889,1133,1386,1737,1698,2398,2520,2751,2391,2215,2311,2694,2634,2370,2686,2821,3056,493,561,385,327,198,269,373,259,381,595,681,748,690,724,753,782,800,801,857,924,954,964,1,0,0,0,0,0,0,1,37,97,148,187,200,204,219,251,294,357,396,488,577,596,10,19,28,38,51,69,93,124,156,184,199,202,218,258,319,382,404,452,510,580,618,650,46,67,91,115,139,159,173,186,198,199,200,199,257,319,355,399,396,399,399,402,432,454,27,49,78,111,147,182,206,263,396,377,359,325,295,299,320,331,344,371,396,399,402,406,0,1,8,30,62,104,149,187,208,230,244,268,399,442,484,591,600,608,580,538,516,508,1,1,1,0,1,23,87,144,188,200,199,199,201,230,284,348,370,400,478,531,567,580,0,1,1,1,2,201,270,360,376,410,427,372,327,308,332,387,425,481,518,553,586,597,1,0,0,9,297,445,543,575,584,578,533,464,366,344,353,369,387,412,469,512,570,603,0,0,5,3,-1,0,0,1,82,150,194,224,268,291,300,316,339,366,399,455,534,603,0,0,1,0,0,1,0,1,20,73,148,210,271,306,338,460,539,533,531,587,631,668,0,0,1,0,0,0,1,0,3,40,101,157,212,279,308,357,398,456,503,581,630,672,0,1,1,1,0,1,0,254,401,543,581,567,486,428,411,430,449,474,499,551,667,731,1,0,1,0,141,230,317,473,563,581,651,721,734,715,682,642,608,592,608,700,823,935,1,1,1,29,260,317,374,493,581,595,668,724,737,722,698,672,646,636,669,745,866,1000],
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
