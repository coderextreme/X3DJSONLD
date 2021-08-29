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
        texture=ImageTexture(url=['../../images/4/bosphorus9-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.11691829101653,29.55022386869132,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[138,139,127,148,109,58,77,83,53,56,138,98,88,88,84,81,90,131,186,123,77,92,90,120,111,138,118,95,54,55,57,101,152,103,74,64,51,101,132,155,147,149,75,64,70,59,38,100,92,106,62,49,57,144,145,134,136,60,96,130,81,157,152,91,79,67,60,19,24,37,19,19,15,16,26,70,145,107,97,63,104,79,82,155,151,100,47,46,20,71,94,41,43,37,13,27,44,110,158,156,105,100,40,74,88,154,131,67,42,43,78,134,116,77,50,19,13,23,105,147,150,108,119,63,59,110,137,100,129,66,41,47,142,119,94,92,69,31,13,18,64,74,130,112,41,47,94,120,92,42,74,49,82,84,128,124,71,51,39,17,14,12,42,121,97,119,31,88,117,103,38,48,53,99,78,84,78,115,76,43,20,16,47,15,23,108,94,75,31,74,121,89,34,109,119,155,130,124,63,109,86,57,21,22,77,40,12,68,107,48,23,59,94,41,66,137,162,161,170,167,47,75,53,33,22,60,58,19,11,18,45,113,62,29,100,27,80,151,157,134,148,144,51,39,41,32,45,107,43,68,41,8,14,101,65,28,99,31,90,127,135,114,145,137,60,88,93,68,93,130,129,119,101,28,12,88,81,11,95,17,78,104,128,106,123,127,85,104,128,103,105,95,117,104,40,9,26,50,61,11,73,12,28,85,88,112,93,106,115,113,110,88,82,56,88,104,41,7,5,7,7,8,75,27,36,86,67,112,67,81,80,85,88,74,51,46,59,57,29,12,9,8,5,6,28,10,26,91,52,112,84,68,57,59,73,64,52,34,64,71,70,34,39,24,8,4,4,25,41,89,40,54,99,100,52,52,66,49,43,26,60,72,68,53,61,39,31,2,6,28,63,39,38,22,60,58,38,58,70,58,66,21,46,85,73,40,36,29,4,3,3,7,18,41,30,8,8,8,37,68,68,39,63,23,32,51,56,39,14,3,1,3,4,3,4,5,11,5,7,7,45,31,38,26,33,24,14,39,23,9,2,1,1,0,3,3,1,3,5,5,11,14,62,37,25,20,15,25,10,23,10,6,1,0,0,2,3,2,3,3,8,18,43,36,101,67,44,49,22,17,12,21,8,3,4,1,2,1,1,2,4,25,32,48,69,59,103,75,49,55,28,15,11,20,7,3,4,2,2,1,1,2,5,35,38,56,76,67],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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
