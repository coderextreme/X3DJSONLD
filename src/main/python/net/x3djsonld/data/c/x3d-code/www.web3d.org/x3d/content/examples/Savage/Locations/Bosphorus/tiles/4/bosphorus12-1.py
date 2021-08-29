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
        texture=ImageTexture(url=['../../images/4/bosphorus12-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.280922627855375,28.511681591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[132,117,134,138,116,142,101,105,144,147,109,75,51,39,36,72,34,65,105,79,66,78,137,131,112,146,141,149,121,108,127,149,101,102,65,61,31,25,37,59,105,64,30,31,116,105,82,141,134,111,100,135,145,158,144,117,106,94,48,20,52,97,98,49,26,32,97,72,82,116,106,88,78,104,140,126,134,141,103,49,36,19,66,106,58,26,34,42,82,63,75,103,60,80,58,90,124,82,121,87,113,68,39,16,69,106,77,19,38,50,57,52,83,55,41,49,63,94,121,63,99,59,96,89,47,12,50,66,67,16,41,51,36,73,52,35,57,74,96,103,116,65,54,44,96,65,28,11,44,40,30,13,30,33,51,70,28,59,91,107,97,80,98,98,55,35,87,79,36,10,36,42,10,26,40,46,47,38,37,54,87,105,58,53,64,109,83,39,54,54,59,12,6,19,10,52,66,72,19,22,33,59,94,82,48,65,95,103,79,44,21,45,64,21,6,3,20,40,48,61,14,51,60,79,77,68,28,60,79,65,83,66,27,33,65,32,11,7,16,36,72,73,12,52,81,62,39,65,22,41,63,69,38,36,17,30,67,48,9,2,47,35,54,49,12,12,66,56,20,21,23,57,95,80,34,21,10,45,67,54,13,8,27,12,14,10,17,10,9,54,19,17,40,45,86,57,49,49,12,30,45,46,19,0,-1,9,4,6,31,13,9,8,7,15,41,58,80,92,63,25,16,18,61,40,23,6,6,4,7,8,25,12,11,10,11,13,50,57,86,86,60,57,26,9,45,40,16,0,5,11,21,24,15,28,27,13,8,6,25,45,67,68,75,38,13,2,48,28,9,3,2,24,35,41,43,44,44,15,5,3,9,43,65,33,58,53,26,9,13,13,2,2,4,8,8,8,64,48,23,14,9,3,11,49,70,35,26,47,8,4,0,0,8,2,19,18,14,12,68,36,51,32,23,6,5,33,75,62,22,12,12,0,2,10,2,23,14,42,36,26,74,54,72,41,16,8,5,25,46,69,50,28,1,6,4,13,33,15,45,38,57,53,89,96,84,55,34,8,-3,8,34,32,46,26,1,1,0,5,38,37,39,56,70,66,89,80,72,69,32,23,9,7,2,13,13,5,1,4,0,2,5,67,55,60,35,38,82,74,68,68,37,26,10,1,0,11,13,0,2,4,0,0,2,70,62,59,31,40],
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
