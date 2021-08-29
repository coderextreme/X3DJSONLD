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
        texture=ImageTexture(url=['../../images/4/bosphorus2-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.73424150505923,29.55022386869132,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[1,2,0,2,1,0,4,2,1,0,0,2,2,3,1,1,4,0,5,1,2,3,0,1,0,0,2,2,3,2,1,3,1,1,0,1,1,1,4,3,5,0,5,3,0,1,0,1,0,3,1,3,2,2,3,2,0,0,1,2,3,3,3,-1,2,6,2,-1,-1,0,1,1,1,1,1,0,2,4,0,2,1,2,4,6,1,6,0,1,3,0,0,4,3,0,0,2,0,1,5,3,2,2,4,3,0,6,4,1,1,1,1,0,0,0,0,2,3,3,0,1,0,1,3,3,1,0,1,5,7,4,1,1,1,2,1,2,3,5,0,6,2,2,1,1,2,1,0,0,1,2,5,-2,1,1,3,1,0,4,3,2,3,0,4,2,5,3,1,1,1,1,-1,0,-2,-3,-2,-8,6,3,3,0,0,0,3,0,4,1,6,1,4,0,3,0,2,0,-4,-2,-2,-8,0,0,0,0,0,0,0,0,-1,0,3,3,4,0,-1,1,9,4,-1,-1,-1,-1,3,4,0,0,0,18,4,2,6,-2,1,1,1,5,0,-1,-2,0,-1,-1,-3,-3,6,0,1,4,1,0,3,-3,1,0,1,2,5,0,1,4,-4,0,0,-1,0,-1,7,6,1,9,5,-1,1,-4,0,2,0,0,4,0,2,0,3,0,0,0,0,0,10,47,42,8,11,-2,0,-1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,19,27,96,-4,3,6,-1,4,3,-2,0,-1,1,-3,5,0,0,0,0,0,0,-2,3,12,83,0,9,4,19,34,52,44,12,3,4,0,0,0,0,0,0,0,4,5,18,53,14,9,28,49,36,68,81,73,42,19,0,-6,-1,-2,2,0,1,0,1,2,17,54,65,64,72,80,57,98,99,94,87,60,40,12,-2,-6,0,9,0,1,3,1,31,48,110,121,112,126,70,111,125,124,122,108,75,52,22,2,4,4,2,3,1,1,34,69,130,146,154,146,73,91,138,150,158,156,103,112,76,55,32,14,-7,-4,-3,0,40,116,137,150,153,155,121,138,164,168,177,174,145,155,141,95,57,32,8,0,5,4,50,79,128,144,147,125,174,172,169,169,190,184,131,184,180,161,119,59,62,25,7,8,74,71,91,126,157,122,138,164,143,149,175,186,155,210,220,239,196,136,79,18,26,37,83,85,81,135,161,124,128,154,139,153,176,188,162,213,230,249,209,145,83,20,30,41],
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
