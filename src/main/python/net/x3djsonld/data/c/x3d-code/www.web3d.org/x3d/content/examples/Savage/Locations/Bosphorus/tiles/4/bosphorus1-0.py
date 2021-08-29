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
        texture=ImageTexture(url=['../../images/4/bosphorus1-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.84357772961846,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.010933623,height=[0,0,0,0,0,0,0,0,0,-2,-2,-2,-2,0,0,-1,0,-1,-2,0,-1,0,-1,0,-1,-1,0,0,0,0,1,0,-1,0,-1,0,0,-1,0,-2,0,0,-1,-1,0,0,-2,-1,-1,-1,0,0,0,0,0,0,-1,0,-1,0,-1,-2,-1,0,-1,0,1,0,0,0,0,0,0,-2,0,0,-2,-1,0,0,-1,-1,-1,0,-1,0,0,-1,0,0,0,0,0,-1,-1,0,0,-2,0,0,0,-1,-2,0,0,-2,-1,0,-1,0,0,-1,-1,0,-1,-1,-2,-1,0,0,0,0,1,0,0,0,0,0,0,-1,0,0,0,1,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,-2,0,0,-2,0,0,-2,-2,0,0,0,0,0,0,0,0,-2,0,0,-2,0,0,-2,0,0,-1,0,0,-1,0,0,0,0,0,0,-1,-1,-1,0,1,0,-1,0,0,0,0,-1,0,0,0,-1,-1,0,0,0,-1,0,0,0,1,-1,0,0,0,-2,0,0,-3,0,0,-2,-2,-1,-2,0,0,0,-3,0,-1,0,0,2,0,0,-1,0,0,0,-1,-2,-1,-1,0,-1,0,0,0,0,-2,0,-1,0,0,-1,1,-1,4,0,0,-1,-5,0,0,0,0,-2,0,-1,-1,-1,-1,0,1,0,0,27,46,33,20,6,11,7,-2,-4,0,0,2,0,0,-2,0,0,0,-1,-3,0,15,73,114,62,124,109,59,8,29,54,46,0,0,0,0,-4,0,0,12,0,-1,0,13,78,145,106,128,119,19,49,97,77,44,-1,0,0,0,0,0,16,47,2,5,-2,5,130,165,114,127,99,24,83,112,49,4,0,-2,-1,0,9,46,68,67,5,-1,-3,-2,80,196,174,146,62,60,127,76,2,6,2,0,0,40,123,127,127,83,13,0,2,22,79,199,186,134,35,123,92,24,5,22,1,5,15,111,140,116,100,87,14,12,5,48,114,171,103,76,77,129,49,2,40,27,18,49,84,126,114,73,114,25,48,2,1,25,106,194,170,75,115,88,29,4,25,1,20,52,88,126,113,71,110,27,54,2,1,25,101,194,169,74,118,89,27,4,21,3],
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
