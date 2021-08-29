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
        texture=ImageTexture(url=['../../images/4/Malacca6-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-1.6675815493135302,103.92975052808853,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[15,35,30,18,28,33,26,28,24,4,4,4,4,3,2,1,1,1,2,2,2,2,35,35,28,30,33,32,30,26,15,6,4,3,1,2,1,1,1,2,1,1,1,2,26,30,32,27,32,33,30,28,26,25,13,8,0,2,2,1,1,1,1,2,2,2,11,32,11,26,22,32,30,26,29,29,9,3,1,0,1,2,2,1,2,2,2,2,5,6,11,29,19,32,30,29,28,32,30,4,3,2,2,1,1,1,1,2,1,2,6,6,20,21,30,30,28,6,4,22,33,2,2,3,3,3,1,2,1,1,1,1,5,3,15,24,29,29,4,5,26,20,7,2,2,1,3,2,2,1,0,1,1,1,2,5,4,20,16,27,26,28,28,9,7,0,2,2,2,3,2,1,1,1,1,1,8,9,8,10,10,24,27,26,26,27,6,2,2,2,3,2,2,1,2,1,1,2,5,10,10,7,2,4,28,28,31,27,2,2,2,3,3,3,3,2,2,2,2,2,3,4,4,5,6,2,5,29,28,9,1,2,2,3,3,3,3,2,1,1,1,3,3,2,4,4,5,3,3,4,5,3,2,1,3,3,2,5,3,2,3,1,3,1,3,2,3,3,5,7,5,3,4,3,0,1,2,3,3,3,3,3,1,3,2,2,4,2,3,6,6,5,1,9,5,4,1,3,2,1,3,4,3,4,4,4,3,3,5,4,4,0,3,1,2,2,2,3,1,1,0,1,2,1,2,4,5,3,5,6,2,2,1,2,3,6,4,2,2,3,1,1,1,0,2,3,1,3,5,5,3,3,1,2,3,3,0,2,2,2,1,1,2,3,2,1,3,1,2,4,3,2,5,3,1,1,3,0,2,3,2,3,1,2,1,2,1,1,2,0,3,0,3,2,1,2,1,3,3,1,2,3,1,3,2,2,2,2,1,3,1,3,2,3,2,3,3,2,4,1,1,2,3,2,2,2,1,3,3,4,3,2,1,3,3,1,3,3,3,0,2,1,1,1,1,3,1,2,1,3,4,3,4,6,1,5,3,3,3,1,3,3,2,3,2,2,1,2,1,1,1,3,3,2,3,5,2,4,2,3,3,4,2,3],
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
