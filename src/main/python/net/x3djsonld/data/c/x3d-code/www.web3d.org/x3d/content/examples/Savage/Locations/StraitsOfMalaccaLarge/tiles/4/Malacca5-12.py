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
        texture=ImageTexture(url=['../../images/4/Malacca5-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-2.674956597161275,104.94050057609658,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[5,7,5,7,5,5,5,5,9,10,11,7,7,5,7,6,6,17,5,4,21,18,4,4,5,6,5,5,5,6,7,9,10,10,7,7,22,8,5,4,6,5,29,30,5,5,6,5,5,6,5,6,5,7,6,8,8,7,3,5,6,4,5,5,41,81,4,4,4,6,7,5,7,6,5,4,4,7,5,7,-6,5,2,4,4,5,15,12,3,5,3,4,5,5,4,4,6,4,4,4,6,7,1,4,5,2,3,4,5,-3,3,6,3,9,5,4,5,5,4,7,7,8,12,10,6,3,4,4,4,4,10,22,11,5,2,5,2,8,3,5,5,20,21,20,11,7,14,1,2,1,5,10,11,20,2,11,13,0,0,11,18,0,3,3,3,5,6,1,1,2,1,1,13,18,25,25,19,6,2,0,0,0,0,0,2,1,4,6,3,3,4,4,3,1,11,34,18,24,8,4,5,3,0,0,0,0,2,3,2,5,4,5,2,4,3,3,45,20,27,32,6,3,4,2,1,0,1,1,1,2,4,3,2,5,2,1,2,3,10,21,9,13,6,2,3,3,1,1,1,0,3,1,4,3,2,0,0,0,0,22,18,13,9,12,3,3,3,3,3,5,2,23,3,19,16,13,0,0,20,27,6,6,3,23,23,24,3,4,3,3,0,35,17,21,26,17,27,9,9,17,22,19,1,17,33,19,19,12,4,3,3,4,2,91,52,50,36,46,28,6,4,15,21,21,27,39,38,28,29,32,1,2,2,2,5,21,28,41,28,37,26,29,5,12,8,15,25,33,45,34,18,18,1,1,2,2,0,1,2,9,27,21,31,26,42,20,13,30,34,13,34,48,32,30,1,1,1,1,1,1,0,0,2,7,12,17,10,42,29,35,12,18,55,57,9,6,2,1,0,1,0,1,0,0,3,0,7,17,7,16,25,27,11,9,10,9,11,11,0,2,2,1,0,0,0,1,0,4,14,12,23,26,11,7,1,0,22,33,26,26,1,1,0,3,0,1,1,2,1,14,19,27,29,17,13,8,3,15,17,134,41,44,2,1,1,2,1,1,1,0,1,20,22,27,27,8,10,12,0,13,16,159,31,38],
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
