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
        texture=ImageTexture(url=['../../images/4/Malacca5-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-2.674956597161275,103.92975052808853,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[34,23,19,20,10,15,14,5,5,3,3,11,4,10,3,4,5,6,4,3,5,5,36,19,24,7,6,5,4,3,7,5,3,4,4,4,-2,3,4,3,3,4,3,4,25,26,6,6,5,5,3,7,7,4,5,3,5,3,5,9,12,4,4,5,5,5,39,9,9,18,12,9,6,7,9,6,3,5,5,2,4,9,5,4,2,4,4,4,30,28,18,18,13,6,5,10,5,6,5,4,2,1,4,6,4,4,4,7,4,3,32,41,17,9,13,11,18,10,7,5,8,4,2,4,5,6,2,8,8,3,3,3,24,12,12,9,15,29,20,10,5,7,4,5,6,4,5,6,10,10,4,9,16,11,19,28,35,21,36,18,8,7,5,5,5,4,3,7,10,5,0,1,1,12,10,2,39,36,36,43,31,22,29,4,4,5,2,4,3,3,6,3,4,14,0,14,11,19,20,14,24,31,16,13,7,4,5,5,4,3,4,4,5,6,3,4,8,9,5,8,25,20,18,4,5,4,5,6,5,5,4,4,5,5,4,5,5,6,19,20,5,6,15,7,8,5,5,5,9,6,7,12,6,3,13,13,10,5,5,6,5,5,3,6,7,6,9,6,8,7,8,9,26,17,8,4,4,5,22,23,17,7,10,6,3,3,5,22,8,10,27,28,22,21,24,18,6,12,5,11,21,22,24,7,5,11,2,3,6,25,8,21,33,27,25,36,22,22,16,16,11,14,4,19,5,5,0,2,2,4,27,28,28,24,27,32,30,34,28,14,14,13,19,22,24,2,2,1,2,2,2,1,27,28,26,25,22,25,25,28,11,10,21,17,1,24,4,1,2,2,1,1,2,1,26,30,30,28,31,46,32,28,26,22,19,24,1,-1,1,2,2,1,2,2,1,1,24,32,35,32,49,29,28,25,21,5,20,16,18,3,0,0,2,2,2,2,3,2,18,21,32,35,36,28,30,29,7,4,5,17,15,1,0,1,2,2,2,2,2,0,16,36,29,19,27,32,24,29,24,3,5,4,4,1,1,1,1,2,2,2,3,1,15,35,30,18,28,33,26,28,24,4,4,4,4,3,2,1,1,1,2,2,2,2],
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
