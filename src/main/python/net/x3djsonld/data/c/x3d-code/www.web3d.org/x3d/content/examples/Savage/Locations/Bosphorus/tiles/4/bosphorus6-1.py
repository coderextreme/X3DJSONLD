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
        texture=ImageTexture(url=['../../images/4/bosphorus6-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,28.511681591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[0,0,0,0,-1,-1,0,-1,-1,-1,0,0,-1,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,-1,0,-2,-1,0,0,0,-1,0,0,0,-2,0,0,0,0,0,0,-2,-1,0,-1,-2,0,0,-2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,-1,0,0,0,0,0,0,0,-1,0,0,0,-1,0,-2,0,0,-1,-1,-2,-1,-1,0,-1,0,-1,0,-1,0,0,0,0,-1,-1,0,0,-1,1,0,-2,-2,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,1,0,1,-1,0,0,0,-1,0,-4,-1,0,0,1,0,0,0,0,0,-1,-2,0,0,0,0,0,0,0,-1,0,0,-2,0,0,-2,-1,0,0,0,0,0,0,1,0,0,0,0,-2,0,-1,0,0,0,0,0,0,-1,-3,0,1,-1,-2,0,1,0,0,0,1,0,1,3,0,0,-2,0,0,-1,0,-1,0,0,0,0,0,0,0,0,0,-1,-1,1,0,0,-1,-2,0,-1,-1,0,0,-1,0,0,0,-2,0,0,0,2,-1,0,0,0,0,-1,0,2,-1,0,0,-1,-1,0,1,0,-1,0,0,-1,-2,-1,-2,-2,0,0,0,-1,-2,0,0,-1,-1,0,0,0,0,-1,-1,-1,-1,0,0,0,0,1,0,0,0,0,-1,-2,-2,1,0,3,0,-1,0,0,0,0,0,0,0,0,0,0,-1,0,0,-1,-1,0,0,2,0,0,-1,0,0,3,-1,0,1,-4,1,0,-2,0,0,2,0,1,-1,-1,0,1,1,0,-1,-1,1,0,0,-3,0,1,0,-1,0,0,0,-3,2,0,-1,-1,-5,0,1,-1,0,2,41,5,-4,0,2,0,-2,-1,0,0,-8,0,0,0,0,0,-5,1,-1,3,10,32,48,9,0,-1,-3,0,-1,0,-1,0,0,1,0,-1,0,0,-3,-4,2,15,29,42,44,13,0,0,0,1,0,0,-2,0,0,0,3,5,-1,-2,0,3,14,23,35,46,46,21,0,-2,-1,0,-2,0,0,0,-1,0,-1,-1,-1,3,12,14,18,29,44,55,44,27,3,2,0,0,0,0,2,-2,0,0,-1,-1,9,18,24,23,24,39,55,62,45,33,3,-3,-1,4,0,-4,-2,0,0,0,-2,-2,19,24,33,36,43,55,62,67,57,38,19,2,-9,-2,0,0,-1,0,0,0,1,1,21,25,34,38,47,59,63,68,60,39,22,2,-10,-2,-1,-1,0,0,1,0,4,2],
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
