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
        texture=ImageTexture(url=['../../images/4/bosphorus14-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.390258852414604,28.511681591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[22,4,7,6,1,1,8,35,44,29,16,8,14,26,54,29,4,-1,0,2,1,0,3,2,0,3,3,2,18,52,59,40,29,18,24,44,34,1,4,-2,-1,0,-2,-1,4,3,0,2,0,5,45,67,67,45,46,31,28,14,1,8,-2,0,0,-1,0,0,1,0,-1,2,8,22,43,55,39,28,20,11,3,3,-1,2,-1,-2,-1,0,-2,-1,7,1,6,7,26,20,37,31,10,0,8,4,0,0,-6,-3,0,0,0,-2,0,-1,6,10,18,37,50,33,10,4,6,0,-1,0,1,-3,-2,1,0,0,-4,-1,-1,-1,21,24,23,44,34,4,-2,0,0,1,-2,1,0,-2,0,0,0,-2,1,-3,0,0,25,33,31,7,10,2,-7,0,0,0,0,0,-1,1,-1,0,-1,-2,-3,0,0,-2,25,11,-10,2,-2,0,-1,1,0,0,0,0,0,3,0,-2,0,0,1,-3,0,1,3,5,4,2,0,1,0,-1,0,1,0,-1,0,1,1,0,-1,0,0,0,-1,0,0,0,-3,0,2,0,1,0,0,-2,0,2,-1,0,0,0,0,0,0,0,0,0,-1,1,0,-1,0,0,0,0,0,0,-1,0,0,0,0,2,0,-1,0,0,0,0,0,0,0,0,-1,0,-1,4,-2,0,0,-1,1,1,-1,-2,-1,0,-2,0,0,0,1,0,0,-1,0,-1,0,-1,-4,0,0,-1,0,0,-2,0,0,-1,-1,0,0,0,0,0,-2,0,0,0,0,0,0,0,0,0,-2,0,0,0,0,0,0,0,0,-1,-1,0,1,0,0,0,0,0,1,0,-1,0,-1,0,0,1,-2,1,0,4,-2,-2,0,0,1,-2,0,0,0,0,0,0,-3,0,1,1,0,0,-1,-3,1,0,-1,0,1,-1,2,-1,0,0,0,2,0,0,0,0,-2,0,0,0,0,0,0,-2,1,2,0,0,0,1,0,1,0,0,-2,0,-1,-1,0,0,0,0,-2,0,0,2,-2,-1,-1,1,0,0,0,-2,0,0,1,1,0,1,1,0,-1,-1,0,2,-2,1,0,0,0,0,0,-2,0,-1,0,0,1,0,0,-1,0,0,0,0,0,0,0,0,0,0,-2,0,1,0,0,0,0,1,1,1,-2,0,0,0,0,0,-1,0,1,1,-1,-1,0,0,0,0,0,0,0,1,0,1,1,0,0,1,0,-1,0,0,0,0,-2,0,0,0,0,-1,0,-1,0,1,0,0,0,0,1,0,0,0,1,1,-1,-1,-1,-1],
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
