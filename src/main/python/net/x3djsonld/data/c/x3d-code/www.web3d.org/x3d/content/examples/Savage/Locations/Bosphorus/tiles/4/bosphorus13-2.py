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
        texture=ImageTexture(url=['../../images/4/bosphorus13-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.33559074013499,28.585863182492176,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[40,36,15,51,54,11,46,77,41,33,3,3,8,14,18,21,22,17,21,19,11,13,38,27,6,24,35,2,27,27,32,10,1,4,9,13,20,33,31,23,23,21,17,20,1,8,0,5,-1,1,5,-2,7,9,2,5,13,15,20,43,44,37,30,34,23,23,1,0,4,0,6,3,2,2,9,-1,8,7,9,12,18,38,55,50,35,42,27,27,2,3,3,-1,2,3,3,4,3,6,4,9,8,11,17,27,59,56,52,45,37,31,5,4,6,1,2,5,9,7,5,6,5,5,12,10,9,15,44,66,67,52,46,42,4,-2,2,3,11,4,4,3,6,5,5,7,10,10,9,10,26,49,69,69,54,50,3,4,3,0,4,7,5,7,5,6,4,6,8,6,7,7,18,33,58,73,66,63,1,0,8,8,4,5,6,7,3,4,3,8,4,5,9,8,11,26,43,61,70,67,2,5,5,14,7,6,7,5,7,4,3,8,4,6,4,5,8,35,60,57,28,14,2,4,1,11,11,7,7,5,3,3,2,8,5,5,4,3,1,8,13,4,10,16,2,1,5,16,15,7,10,7,5,4,3,2,4,7,0,1,4,4,6,0,-1,-2,5,13,9,14,19,8,7,5,5,4,1,2,0,0,0,-1,0,1,0,1,0,-2,7,16,21,21,23,15,8,4,3,3,1,0,0,0,0,-2,0,0,0,0,0,-2,10,21,30,27,30,25,10,1,0,-3,-1,0,0,0,2,1,-1,0,0,0,-1,0,10,23,38,39,38,26,3,0,-1,0,0,0,0,0,0,0,0,0,0,-1,0,-2,14,18,37,40,18,0,0,0,0,0,0,0,-1,0,1,0,1,0,0,0,0,0,10,15,26,11,0,0,0,0,-1,1,0,0,-1,0,0,0,-2,0,1,2,-1,0,9,6,0,0,-3,-1,0,-3,0,-1,0,-1,3,-1,0,0,2,1,0,0,1,0,0,-3,-1,-1,0,0,0,-1,0,0,-1,0,0,0,-1,-2,-1,-2,1,0,0,0,0,-1,0,0,2,0,0,-1,0,0,-1,-1,1,0,0,-2,0,0,1,0,-1,0,0,0,0,1,1,0,0,-1,0,-3,0,-1,0,0,0,0,0,-1,0,0,0,1,0,-1,0,-1,-1,0,0,0,0,0,-1,0,0,0,0,-1,0,-2,-2,0,-3,-2,0,-1,0,-1,-1,0,-1,0,0,-1,-2,0,0,0,0,0,0,-3,-2,0,-3,-2],
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
