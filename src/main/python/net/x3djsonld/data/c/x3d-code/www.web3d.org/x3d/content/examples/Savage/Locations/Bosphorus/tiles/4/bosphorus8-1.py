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
        texture=ImageTexture(url=['../../images/4/bosphorus8-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.511681591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[78,104,99,53,26,9,7,10,10,7,4,3,2,0,1,3,1,-5,1,3,6,6,82,130,86,46,14,8,10,17,11,2,0,4,2,0,0,1,4,0,6,6,6,7,83,128,64,30,10,9,16,23,1,2,5,4,-2,0,0,3,2,1,18,12,9,9,91,93,43,13,9,16,24,29,9,7,0,0,6,4,2,0,-2,8,23,21,16,14,53,30,18,11,12,21,35,39,33,3,0,0,6,0,3,2,0,10,24,31,22,22,40,19,15,13,17,30,39,33,24,5,1,5,3,1,4,2,5,8,20,36,30,28,36,15,15,17,24,28,24,5,5,2,3,-1,0,0,0,5,20,22,26,40,43,42,32,14,18,26,29,20,2,-1,1,3,-2,0,4,0,0,8,22,23,28,44,59,59,26,15,26,35,19,3,1,1,2,2,-1,0,4,0,2,4,15,15,28,50,73,74,20,17,33,33,2,-2,5,2,0,-3,5,2,1,5,8,4,7,18,26,50,77,81,17,26,42,15,1,-2,0,0,0,0,0,0,2,14,20,8,6,21,33,45,71,76,19,43,43,3,5,1,0,-2,4,1,5,0,14,32,38,21,8,19,46,50,67,71,21,42,33,0,2,-15,0,0,4,2,8,4,15,47,48,30,14,16,43,47,59,65,28,44,24,5,1,0,0,2,5,4,2,3,7,35,40,37,24,14,27,33,59,62,35,41,18,5,-4,3,2,0,6,0,0,3,6,17,27,36,30,19,19,36,47,46,43,36,15,4,0,5,-5,2,5,4,4,1,2,3,12,31,34,25,30,27,37,39,48,34,12,8,2,0,1,8,2,7,2,4,1,2,7,33,43,33,41,39,33,34,53,39,17,3,0,0,1,0,3,5,2,6,2,0,10,31,50,41,50,56,41,41,55,46,21,3,3,9,-3,3,0,0,9,12,6,5,11,27,43,53,58,68,59,61,54,29,13,4,7,4,5,4,2,7,12,14,9,4,7,17,34,49,60,71,73,76,38,25,6,4,3,2,7,3,4,8,15,18,12,8,6,11,27,39,52,65,76,78,22,19,4,4,3,3,2,9,7,9,17,23,17,-1,6,15,27,38,50,63,81,86,17,7,4,2,3,3,2,5,13,12,13,25,24,6,4,16,28,44,55,68,88,92,18,6,4,3,3,3,2,6,14,14,14,25,25,8,4,14,29,46,57,68,89,94],
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
