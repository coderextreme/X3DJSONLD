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
        texture=ImageTexture(url=['../../images/4/Malacca4-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-3.68233164500902,103.92975052808853,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[94,71,87,62,76,66,69,41,39,55,39,26,19,22,20,27,26,39,23,15,18,17,59,70,81,73,78,51,55,43,58,33,44,36,27,21,18,33,29,27,27,22,14,15,62,74,49,64,47,52,50,42,43,35,28,41,41,24,19,21,23,20,23,27,16,12,69,57,41,43,37,30,33,36,29,26,19,25,11,17,17,15,19,18,19,24,14,12,38,62,34,29,47,44,43,44,51,37,39,30,19,21,16,11,23,14,15,11,12,18,27,35,39,21,38,59,60,49,46,43,36,37,36,18,31,22,11,16,16,12,15,16,48,31,18,19,19,40,41,44,45,34,28,24,30,18,24,22,19,11,11,14,15,14,57,52,31,29,18,15,26,27,31,24,17,23,24,22,17,3,11,15,8,15,10,11,72,59,56,44,28,15,14,16,20,25,27,8,17,8,17,6,12,10,12,7,7,10,39,57,45,25,24,14,8,18,17,29,24,27,7,21,5,5,6,6,5,11,6,5,25,43,29,23,22,14,10,17,15,9,26,19,11,14,18,13,5,6,7,8,5,6,31,18,17,19,19,19,11,9,17,18,5,6,6,5,7,6,5,5,4,5,16,12,35,23,18,13,17,4,10,7,11,12,9,7,2,5,5,6,4,4,12,7,14,9,28,18,13,8,16,5,8,6,9,8,6,5,4,2,4,4,5,6,5,5,13,17,18,21,15,11,6,4,4,5,3,4,4,20,11,5,14,10,5,7,8,7,6,6,14,16,16,7,12,8,32,18,22,24,20,28,35,22,14,10,10,8,4,5,7,10,12,13,12,11,31,28,25,25,31,28,22,11,7,11,18,10,12,9,6,4,4,7,10,9,14,22,38,45,44,14,23,16,5,10,8,12,8,6,7,7,10,5,4,4,11,18,27,27,25,29,17,14,16,6,20,5,5,4,6,6,6,7,8,9,7,2,29,25,26,17,23,17,20,6,16,10,10,5,4,8,4,5,7,7,5,9,3,4,32,24,19,18,9,11,14,3,5,3,3,9,4,11,3,4,4,6,4,3,5,4,34,23,19,20,10,15,14,5,5,3,3,11,4,10,3,4,5,6,4,3,5,5],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
