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
        texture=ImageTexture(url=['../../images/4/bosphorus9-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.11691829101653,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[139,121,123,132,121,92,68,70,41,4,2,10,3,1,1,3,45,60,58,45,96,93,118,118,99,107,109,85,56,8,21,0,6,2,4,0,-3,1,20,67,64,59,85,99,92,97,74,103,88,67,19,12,9,29,-5,-5,5,23,0,-1,0,12,21,26,52,63,102,63,63,87,97,40,8,54,58,33,6,4,1,14,-1,0,2,9,0,6,36,34,120,77,46,50,51,21,12,49,40,31,44,25,9,3,0,0,7,0,-3,0,14,15,97,98,79,39,23,25,32,56,68,87,62,19,11,0,0,3,0,0,-6,0,15,22,90,67,82,39,59,69,90,73,89,101,66,45,4,0,2,0,-4,-6,0,-5,9,11,94,64,62,46,102,91,99,97,76,65,55,27,17,0,0,1,-3,-3,0,9,17,25,94,83,72,53,94,100,106,87,84,58,10,6,6,3,0,-4,0,-1,1,58,42,42,109,78,67,83,79,82,73,75,58,55,9,-4,3,2,-5,0,-1,-1,19,47,94,97,124,76,98,86,84,47,37,57,45,37,2,-1,0,2,-9,-4,4,6,20,34,59,68,110,100,109,107,87,61,45,22,10,14,0,-1,-2,0,0,10,9,51,82,54,80,76,114,120,118,112,65,33,21,27,9,11,5,-6,-7,0,2,8,8,65,87,65,62,52,116,121,82,65,47,72,53,42,11,0,-1,-3,0,10,12,14,10,72,95,73,40,35,93,122,100,86,96,87,66,49,2,1,0,0,0,29,64,35,10,57,113,100,27,33,65,124,120,122,80,39,43,4,3,3,3,-4,-3,46,76,43,9,55,97,72,28,41,41,66,103,109,68,7,2,-6,-1,0,8,-3,0,4,82,33,15,20,27,21,27,37,62,23,39,52,14,-2,2,-16,-5,-2,1,1,4,0,49,55,59,26,16,38,78,76,5,6,2,4,2,4,0,4,-3,-3,0,-1,0,-6,27,117,64,62,35,60,111,126,16,12,7,0,7,7,-1,4,-2,0,1,0,-5,0,28,103,120,97,49,54,115,125,27,28,14,6,4,0,-1,1,2,-2,-2,3,0,4,32,73,119,95,47,33,93,110,46,61,78,27,16,6,4,0,0,-2,-4,1,3,38,73,127,174,125,115,73,43,53,91,111,85,87,65,35,12,-1,0,-2,1,-1,0,40,75,141,158,152,161,130,62,53,99,118,98,86,74,42,19,-1,0,-2,4,0,4,37,61,129,142,143,166,132,60,57],
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
