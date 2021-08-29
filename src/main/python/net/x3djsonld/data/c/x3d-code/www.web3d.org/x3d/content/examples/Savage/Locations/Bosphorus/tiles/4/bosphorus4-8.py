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
        texture=ImageTexture(url=['../../images/4/bosphorus4-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.84357772961846,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[0,0,-1,-1,0,0,-2,0,-1,-1,-2,-1,-1,-2,-1,-1,0,-2,-1,-1,-1,-1,-1,-1,-2,0,0,0,-1,0,-1,0,-2,-1,0,0,0,0,0,-1,-2,0,-3,-2,0,0,-1,-1,-2,-1,0,0,0,-1,0,0,-1,-2,0,0,0,0,0,-2,0,-1,0,0,0,0,0,-1,-2,0,0,0,-1,-1,-1,-1,-1,0,-1,-4,-2,0,0,0,0,-1,0,0,0,-1,-2,0,0,0,-1,0,0,-2,-1,-1,-1,0,-1,0,0,0,0,-1,0,0,0,1,0,0,-1,-2,-2,-2,0,0,0,-1,0,-1,0,0,-2,-2,0,-1,0,0,0,0,-1,0,-3,0,-1,0,-2,-1,0,-1,-1,0,0,-1,0,-1,0,0,0,0,0,0,0,-1,-1,0,-1,0,-1,0,-1,0,0,-2,-2,-2,0,0,-2,0,0,-1,-1,0,0,0,-1,0,-2,0,-1,0,0,0,-1,0,0,-1,0,0,0,-1,0,-1,-1,0,0,-2,-1,-1,0,-1,-1,-1,0,0,1,0,0,-1,-1,-1,0,0,0,-1,-1,-1,0,-1,-1,-2,-1,0,-4,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,0,0,-2,-1,0,0,3,9,0,3,1,0,0,0,0,0,0,0,0,0,-1,0,-1,0,0,-1,0,3,45,10,3,13,46,19,1,0,0,0,0,-1,-1,0,0,0,0,0,0,0,-1,4,83,45,13,36,85,94,3,2,-1,-2,0,-2,-2,-1,0,0,17,22,59,6,0,0,33,71,55,95,114,66,14,6,-1,-1,-1,0,-2,0,0,3,93,150,72,38,0,2,6,2,18,60,57,25,3,0,0,0,0,0,-1,-1,0,2,73,144,66,11,0,0,-2,0,0,5,28,30,0,1,-1,0,-1,0,-1,0,0,0,17,90,81,25,0,0,0,0,0,3,60,54,0,0,0,-2,-1,0,0,0,0,0,7,29,20,15,0,0,2,0,-3,-1,10,7,-1,0,0,0,0,0,-1,-1,0,-1,1,8,0,0,-1,-1,0,-1,0,-3,0,0,-1,-1,0,-2,0,0,0,0,0,0,0,-2,0,0,1,0,0,1,-1,-1,-1,0,-1,0,0,0,0,0,0,0,-2,0,-1,0,0,-1,0,0,0,-1,0,0,0,-1,-1,-2,-1,-2,0,0,0,0,-1,0,-2,0,-1,-1,-1,1,0,0,-1,0,0,0,0,0,-2,-1,0,0,0,-1,0,0,-2,-1,-2,0,-1,0,0,0,0,0,0,0,0,0],
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
