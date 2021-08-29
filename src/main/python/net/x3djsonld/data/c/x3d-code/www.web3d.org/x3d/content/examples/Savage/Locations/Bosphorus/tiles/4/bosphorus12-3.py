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
        texture=ImageTexture(url=['../../images/4/bosphorus12-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.280922627855375,28.660044773738264,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[108,91,108,117,93,55,79,63,85,130,156,145,110,111,141,115,105,126,143,134,101,94,112,90,87,83,82,43,65,49,76,99,112,123,110,121,148,136,114,139,106,95,90,86,86,68,61,59,64,39,39,48,61,82,84,128,131,116,133,146,121,126,75,59,77,63,59,67,40,64,51,36,27,45,47,49,64,95,129,127,118,141,128,109,79,53,48,39,56,41,32,67,55,27,19,31,41,51,69,97,124,109,84,112,122,88,61,45,22,23,41,34,28,67,53,21,23,29,39,59,84,81,97,96,75,86,105,91,71,53,23,16,66,40,25,56,55,21,17,41,54,70,78,63,86,92,67,59,92,89,66,85,32,23,86,49,20,40,57,19,17,56,50,65,53,57,89,96,67,55,68,95,56,66,44,38,61,42,15,32,41,13,20,51,31,46,39,62,89,85,54,44,61,96,81,36,40,30,42,59,27,14,20,7,20,23,23,26,49,75,73,77,68,40,48,76,78,31,16,17,20,52,24,10,8,6,9,12,24,41,67,77,65,61,55,41,61,72,62,43,33,33,17,63,53,23,6,12,21,17,28,36,61,64,50,40,61,43,54,67,76,56,35,42,11,56,35,15,7,28,49,40,27,43,54,48,40,25,35,34,40,59,71,52,42,41,2,51,32,5,6,11,29,58,42,45,49,46,40,20,34,52,37,40,43,37,50,53,2,24,4,5,11,25,30,40,64,60,36,25,22,17,43,58,49,39,83,34,26,31,0,3,5,7,12,43,64,58,66,49,34,35,14,22,45,60,58,67,101,63,7,10,1,2,6,31,36,47,55,47,34,51,23,17,22,41,57,70,93,86,79,81,34,26,8,19,12,14,23,36,34,11,11,19,20,12,21,50,62,54,57,61,63,85,42,24,17,4,6,-5,0,5,5,6,11,14,18,23,23,24,36,42,39,58,70,80,34,19,7,6,8,3,8,6,8,22,17,35,28,36,45,33,38,39,54,78,87,74,30,15,6,12,17,8,16,19,18,31,29,38,46,52,57,39,56,56,66,67,59,39,25,19,4,10,23,10,26,28,27,45,54,32,69,75,68,51,76,60,43,37,26,20,12,9,13,19,31,21,35,46,46,57,73,44,64,75,67,54,48,35,24,19,10,5,2,4,13,22,33,24,33,48,51,57,76,45,64,73,58,48,41,33,22,16,9,2,2,4],
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
