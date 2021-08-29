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
        texture=ImageTexture(url=['../../images/4/Malacca12-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.343236000485898,100.87606259915093,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[12,20,21,33,17,11,17,14,32,43,16,15,25,26,27,456,886,669,169,249,537,834,14,22,15,43,24,28,22,16,38,42,14,16,18,22,19,416,1077,963,288,360,802,1185,25,19,21,57,18,20,21,34,31,24,13,17,24,31,28,615,966,985,177,572,932,962,17,22,31,56,35,26,30,24,88,35,11,18,34,30,29,347,852,703,74,267,520,871,15,18,41,62,44,56,23,43,54,28,15,16,40,29,31,32,264,94,102,282,556,678,21,32,23,77,95,34,35,28,56,24,17,22,30,38,40,43,44,73,379,625,1012,756,17,29,21,48,62,38,25,49,52,22,23,22,28,32,34,37,191,272,647,696,952,1030,18,33,52,179,66,34,33,48,73,22,20,31,28,34,42,40,347,551,307,608,720,1064,29,18,39,70,89,35,49,36,60,23,23,40,34,70,42,48,55,403,218,279,560,855,31,37,19,58,58,42,44,36,50,23,26,46,37,43,56,53,72,175,193,399,707,825,26,70,22,35,53,50,51,45,47,26,37,36,38,47,59,61,121,432,253,337,389,434,32,35,22,35,58,109,57,49,40,29,33,29,39,50,65,76,155,423,347,646,656,863,92,28,25,49,50,247,77,49,43,30,28,47,34,47,61,149,283,602,655,435,726,1153,41,40,48,33,113,223,162,42,41,27,43,51,42,44,52,98,349,529,723,796,653,808,47,124,47,27,99,85,343,53,54,32,30,54,48,48,116,177,364,373,712,992,1050,1101,53,66,39,50,35,89,530,74,89,38,35,40,53,110,64,101,160,467,502,887,1359,1054,51,33,37,36,30,58,244,165,105,38,39,44,59,108,99,143,112,386,886,937,737,724,49,48,69,32,50,90,196,305,74,42,35,41,44,56,64,289,412,282,380,399,563,633,109,35,35,57,55,39,158,699,195,44,39,46,51,48,57,150,297,404,637,862,910,739,43,36,32,80,108,67,61,361,295,53,40,44,57,151,62,288,419,526,876,873,954,1010,43,40,48,90,125,86,97,406,323,71,47,49,55,60,60,230,224,699,870,827,771,664,53,31,39,82,282,368,188,415,242,91,50,54,50,62,76,173,217,502,717,661,503,771,50,33,37,81,260,430,225,437,214,124,52,55,52,64,76,175,203,503,682,611,480,701],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
