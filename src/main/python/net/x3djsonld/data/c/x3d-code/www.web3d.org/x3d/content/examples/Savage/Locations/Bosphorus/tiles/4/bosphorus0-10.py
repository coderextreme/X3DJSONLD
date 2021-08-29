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
        texture=ImageTexture(url=['../../images/4/bosphorus0-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.17931591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[144,145,120,81,102,103,64,41,32,48,74,86,33,15,13,30,64,37,49,81,52,45,140,162,142,119,129,104,73,53,34,31,59,85,58,19,12,15,44,33,59,95,53,46,126,160,165,142,126,124,110,67,50,36,27,53,75,28,12,11,17,42,79,113,67,58,118,144,155,118,102,153,136,153,125,71,38,20,27,20,14,12,16,41,71,114,88,77,105,122,131,104,80,108,144,131,161,83,56,48,22,16,12,11,9,34,62,102,111,98,79,86,94,79,56,75,120,90,112,127,70,39,30,38,13,9,9,17,46,77,87,77,47,53,65,40,32,49,90,116,85,112,99,91,68,51,21,9,6,15,41,82,80,71,20,23,24,23,30,51,99,133,85,68,117,128,107,49,23,11,6,8,28,58,70,63,18,13,13,16,28,50,50,92,137,86,63,110,100,50,43,11,7,6,11,45,74,73,45,19,11,11,15,23,44,86,89,87,46,69,89,80,33,12,4,5,9,39,45,51,50,18,10,8,10,33,66,76,42,70,41,40,49,37,19,13,7,5,6,10,35,41,45,42,10,6,7,17,35,69,32,36,65,52,27,24,33,56,5,4,2,10,28,30,34,45,15,3,3,11,35,34,27,11,41,38,41,39,29,14,2,2,2,2,5,5,5,0,5,2,1,1,0,1,3,3,1,5,4,1,1,2,2,3,2,3,4,2,0,-2,-1,0,1,0,0,0,2,0,1,-9,0,6,-3,0,2,0,-3,1,3,2,0,0,5,0,1,0,0,3,0,0,0,0,-4,2,-1,0,-3,6,-2,0,4,4,1,0,0,0,2,0,7,-1,0,2,-2,3,1,-2,-3,3,-3,2,3,0,1,0,4,6,2,6,1,1,1,2,0,0,0,0,0,4,-1,-5,1,0,2,-6,-6,-2,2,0,0,0,-1,2,0,3,0,1,0,3,-2,-4,0,1,0,1,-6,-3,1,2,6,0,3,0,0,-3,0,0,3,0,0,0,0,-1,0,0,-2,0,1,7,1,1,4,1,0,2,4,1,1,3,2,4,1,2,0,0,0,0,0,1,1,0,0,0,0,2,0,-1,-2,0,0,0,1,0,2,0,0,1,0,3,0,0,4,-2,0,0,1,0,0,0,0,0,0,3,0,2,0,3,1,5,0,0,-3,0,0,0,0,0,0,0,0,0,0,0,0,2,0,2,0,2,1,5,0,0,-3,0,-1,1,0,0],
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
