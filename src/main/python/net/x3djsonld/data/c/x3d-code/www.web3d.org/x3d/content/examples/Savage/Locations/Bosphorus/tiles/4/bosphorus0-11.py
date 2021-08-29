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
        texture=ImageTexture(url=['../../images/4/bosphorus0-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.253497503706967,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[45,20,20,26,44,79,44,39,68,77,81,64,93,103,109,110,90,52,64,94,108,91,46,21,18,23,48,72,46,35,48,51,84,56,82,71,100,75,56,48,56,96,108,90,58,29,16,19,61,87,48,32,33,54,79,52,61,57,105,84,48,42,64,113,85,72,77,47,14,16,49,82,67,38,29,44,63,59,44,59,78,75,41,40,68,94,63,51,98,37,13,14,48,71,75,34,28,34,47,67,43,39,48,61,35,38,59,74,50,44,77,26,12,13,30,55,74,46,26,23,34,55,56,37,33,38,31,55,84,77,46,39,71,30,10,12,24,31,70,68,34,21,20,41,63,57,35,27,29,50,59,77,65,51,63,29,11,10,13,26,49,78,57,22,16,21,53,82,44,26,25,30,46,81,53,41,73,45,17,10,10,20,50,78,66,34,16,18,49,70,40,24,23,41,56,69,73,62,51,64,28,6,10,11,32,68,86,49,16,14,25,55,43,21,18,21,32,58,64,49,41,62,25,7,7,8,26,45,77,55,17,14,23,48,48,19,18,37,54,72,47,40,30,30,15,5,6,8,10,26,38,37,16,13,14,38,43,14,15,19,35,66,46,33,5,10,6,6,8,7,9,9,11,11,10,12,11,24,34,13,12,26,44,65,36,25,2,5,5,5,6,5,7,9,9,8,7,9,7,10,13,11,9,11,21,42,49,34,2,0,7,6,-24,-2,0,0,2,4,4,4,4,5,8,10,6,6,10,26,39,31,4,0,7,5,0,5,-1,9,2,-3,1,3,1,2,4,3,5,9,8,5,8,10,0,-3,0,-7,2,-8,-1,-11,6,0,6,2,0,2,2,6,3,9,7,6,5,6,-2,1,3,0,0,3,4,0,0,0,2,0,-3,0,2,-1,1,5,3,4,6,4,2,1,-6,-8,0,7,0,-11,0,1,-1,0,-1,-2,-4,-1,8,0,1,2,2,3,1,-1,-2,0,0,0,-1,-3,1,0,-3,-6,1,-3,0,-4,3,0,9,-1,2,1,0,0,-5,-4,-2,-3,1,2,0,3,1,0,-3,-1,0,-2,2,2,0,0,-4,-3,0,-1,-3,-2,0,-1,-2,-1,0,4,0,-1,-6,0,-4,-4,1,4,0,2,-1,1,0,-2,0,-3,1,1,0,0,1,-1,0,0,-1,0,-3,0,1,2,4,-2,1,0,0,-2,0,-3,2,0,0,0,0,0,-1,-1,-2,0,-4,0,0,1,2,-2,1,-1],
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
