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
        texture=ImageTexture(url=['../../images/4/bosphorus11-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.22625451557576,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[79,49,37,75,76,132,115,75,106,93,94,134,110,113,126,87,109,107,102,66,53,52,47,44,32,60,64,105,129,82,64,82,109,132,102,95,101,112,76,105,99,97,78,76,54,51,31,36,65,87,119,98,48,81,74,112,114,76,102,90,84,84,90,73,84,82,85,70,33,39,83,100,131,91,87,47,53,96,109,92,75,74,93,56,85,79,66,67,89,55,48,26,60,57,109,103,104,75,49,109,104,98,67,75,83,66,70,72,57,47,97,95,70,32,35,74,90,98,82,51,30,72,80,91,79,77,51,47,45,76,68,69,89,77,49,28,27,52,76,104,86,58,37,75,60,87,64,70,79,48,24,53,52,50,85,90,54,40,19,52,77,83,95,94,69,49,38,81,59,60,79,71,51,18,48,45,70,77,59,46,15,32,54,71,97,86,57,17,50,72,58,30,64,57,54,11,50,51,73,41,66,39,13,45,67,92,81,78,52,16,41,53,66,34,27,40,40,7,31,33,63,32,35,40,11,58,80,84,62,63,72,34,32,63,60,48,41,12,31,16,0,0,13,20,18,13,11,30,57,84,58,40,61,54,14,49,57,44,38,37,11,6,4,2,8,8,15,8,12,54,59,71,69,52,39,42,6,35,53,42,1,16,2,0,2,3,2,4,24,24,5,31,43,67,51,39,12,44,4,11,20,4,-5,2,1,3,1,2,0,-1,-7,16,32,6,42,55,39,32,1,15,8,3,11,1,0,0,2,1,1,0,-2,1,2,6,9,11,29,27,14,9,1,1,2,0,2,0,1,2,0,2,0,2,1,0,3,1,3,0,7,4,4,2,2,3,0,3,2,4,0,-2,0,0,0,0,1,4,0,3,3,1,0,7,2,-2,2,3,0,1,0,2,1,0,4,0,1,0,0,0,0,3,3,0,0,0,2,2,1,1,0,1,2,0,0,0,0,1,0,0,0,0,1,0,2,4,1,0,-1,0,1,0,1,3,0,3,-1,0,0,0,1,0,0,1,0,1,1,2,0,0,1,4,0,0,0,2,0,-1,0,0,2,0,2,1,0,0,1,1,1,3,0,0,3,2,3,0,1,1,0,2,3,0,2,0,0,0,0,1,0,2,2,1,2,0,2,0,1,1,0,0,1,3,0,0,0,0,2,1,0,1,0,2,3,2,2,0,1,0,2,1,0,0,1,3,0,1,1,0,1,1],
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
