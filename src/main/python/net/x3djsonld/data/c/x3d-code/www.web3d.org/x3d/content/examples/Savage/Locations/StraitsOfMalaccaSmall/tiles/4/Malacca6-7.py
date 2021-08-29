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
        texture=ImageTexture(url=['../../images/4/Malacca6-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.434860909842949,101.7110626388113,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[0,1,1,3,2,0,2,3,21,17,3,4,33,6,14,24,8,15,24,45,21,32,3,0,0,4,2,2,1,-3,11,8,19,41,14,30,18,23,14,28,10,43,26,15,0,3,2,1,2,6,0,2,27,27,52,47,19,19,30,37,18,17,12,12,68,32,3,4,3,0,1,0,4,6,25,33,55,21,6,33,42,26,10,37,27,38,17,52,2,2,4,6,1,3,-7,9,15,56,35,34,26,29,15,11,14,29,45,29,18,30,0,2,3,0,2,5,8,9,16,46,27,20,32,33,12,29,32,80,16,78,45,46,0,5,1,3,4,0,9,23,30,49,35,29,34,10,21,23,42,29,39,78,41,49,1,2,1,0,1,10,9,41,41,46,37,23,12,29,33,58,42,31,31,60,72,23,2,3,2,3,4,15,11,52,58,33,35,40,16,45,30,62,64,64,44,62,42,41,1,2,3,0,0,7,14,76,39,50,47,30,26,51,56,101,88,53,44,95,49,47,3,1,2,2,0,5,6,30,29,58,47,25,32,53,38,81,62,51,42,49,37,58,3,0,7,6,14,11,7,48,22,79,44,52,43,25,43,83,73,39,59,40,45,47,9,8,7,8,24,24,28,21,21,45,53,44,21,31,44,100,76,52,72,46,63,80,7,9,6,9,19,31,37,34,53,42,149,60,26,52,40,68,83,57,59,59,419,492,10,5,7,23,10,52,32,32,65,51,90,85,59,52,41,60,82,118,70,60,293,717,13,7,9,30,29,56,139,32,59,94,58,45,36,50,64,66,87,90,89,231,221,564,12,10,7,17,33,25,43,47,43,93,59,54,58,91,68,58,112,371,351,266,388,404,11,14,8,12,44,35,80,59,60,73,58,39,62,75,58,61,114,602,672,552,428,704,13,37,26,29,34,78,78,61,81,97,64,67,67,74,90,83,259,607,549,626,695,633,24,18,31,25,48,68,53,62,95,91,106,53,75,83,106,101,87,512,303,644,813,824,11,25,69,48,42,87,46,63,105,122,70,80,72,54,65,86,110,191,349,348,494,448,18,25,59,59,52,46,57,61,61,76,95,97,76,69,62,151,126,398,552,221,127,125,17,20,53,59,53,46,63,57,59,79,88,87,77,73,63,153,128,412,552,242,133,116],
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
