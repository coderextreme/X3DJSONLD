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
        texture=ImageTexture(url=['../../images/4/bosphorus1-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.679573392779616,29.401860686199143,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[32,28,33,61,62,102,108,106,93,112,103,92,137,130,59,94,97,99,62,49,76,81,14,9,14,26,26,39,35,40,36,51,61,45,100,93,30,62,82,69,44,66,60,64,10,7,10,15,11,13,10,12,12,10,14,18,29,37,28,54,64,49,27,52,46,45,11,9,12,6,6,5,3,3,4,5,6,5,13,17,12,17,20,22,16,31,26,23,5,6,7,4,3,7,3,1,0,0,3,1,3,5,8,6,5,7,10,12,14,16,4,0,4,2,1,-1,0,0,0,-1,0,2,-1,2,5,2,4,5,7,8,10,10,2,1,2,1,0,-3,1,2,0,0,-2,4,0,0,1,0,2,2,2,5,6,6,1,0,0,0,3,0,2,1,3,-1,-2,1,1,-1,0,2,-1,-3,0,3,2,3,0,0,0,5,2,1,1,-2,0,0,2,-1,1,0,0,0,0,2,2,0,1,3,0,4,0,2,0,0,0,0,1,1,1,0,3,0,0,0,0,1,-4,0,0,2,4,0,0,1,1,0,0,1,0,0,0,0,0,2,2,1,-2,0,0,2,-3,-1,0,2,0,-2,2,0,-3,0,3,1,0,2,1,-1,2,1,0,-1,-2,0,-2,-2,-1,0,2,0,0,2,0,0,0,2,2,1,1,4,-3,0,0,1,3,2,-1,-1,0,1,0,3,0,3,2,3,3,0,0,2,2,0,0,0,3,0,1,0,0,0,2,0,1,1,0,0,0,0,0,1,0,0,2,0,1,0,0,0,0,0,0,0,2,0,1,0,0,1,0,2,0,0,0,-4,0,2,0,0,1,0,0,-2,-2,0,0,1,0,4,3,2,0,3,0,0,0,0,0,0,0,0,-2,0,0,0,1,1,0,0,3,0,0,0,1,-1,0,1,0,0,1,-1,0,-1,0,0,1,0,0,1,0,0,0,1,3,-2,0,0,1,0,0,0,1,0,0,1,0,0,-3,0,0,-1,1,0,0,2,0,1,1,-1,0,1,-1,1,1,3,-2,0,0,2,0,2,0,0,1,1,0,2,0,-1,0,2,3,-1,2,1,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,1,0,0,0,0,7,0,0,0,1,0,0,0,0,-2,2,2,1,3,0,1,3,0,0,0,0,0,1,0,0,2,1,0,0,0,1,2,0,0,2,3,0,1,2,-1,2,0,0,0,2,0,0,2,0,0,0,0,1,1,1,0],
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
