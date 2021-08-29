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
        texture=ImageTexture(url=['../../images/4/Malacca8-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.3471685463819594,101.90825043207244,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[5,34,43,45,35,14,23,19,21,26,22,27,29,25,30,24,25,24,6,1,0,7,7,6,9,41,27,24,20,29,26,8,28,26,27,25,23,29,26,27,24,18,23,18,13,8,26,7,22,17,21,36,38,26,20,19,23,25,29,20,26,28,29,28,28,21,20,11,22,23,25,18,39,35,28,24,18,20,21,27,31,8,24,24,27,22,23,21,24,24,27,28,22,30,27,37,36,27,20,19,19,25,20,29,26,27,26,27,29,30,26,24,30,31,30,37,38,37,39,27,20,19,21,21,26,26,25,27,28,24,23,25,9,20,19,29,31,34,36,28,33,33,23,21,21,21,30,28,24,27,27,25,24,23,14,22,27,16,20,15,25,17,34,27,23,25,27,30,26,23,32,29,25,28,26,27,27,14,11,14,32,33,33,14,28,29,27,32,26,27,27,26,26,28,29,24,4,5,4,30,8,7,24,33,32,29,23,27,30,26,6,4,4,2,9,6,4,4,6,6,29,12,10,11,9,20,21,26,26,28,28,4,15,21,27,12,17,11,8,13,25,11,23,32,30,6,12,10,25,26,7,4,2,20,25,26,17,14,31,25,26,34,38,25,34,32,31,4,9,19,34,29,8,4,4,13,30,26,29,8,9,7,7,35,14,13,37,29,24,4,12,16,28,1,5,8,20,7,10,8,12,6,4,8,10,8,9,5,31,32,35,29,7,23,25,7,15,29,23,18,9,10,5,3,6,6,5,7,26,22,27,28,33,27,4,16,14,3,24,17,8,7,15,4,12,5,11,13,6,4,7,9,31,26,3,29,13,10,9,16,35,12,12,8,15,6,2,4,4,6,27,11,11,10,40,27,31,3,6,9,23,4,23,26,32,8,5,4,3,5,3,1,3,4,4,2,37,40,36,20,5,3,27,9,26,30,21,14,2,3,3,3,4,2,2,2,1,1,36,37,35,30,5,6,2,26,34,28,16,7,9,3,2,3,4,3,1,1,1,1,34,27,35,34,26,6,2,25,29,19,12,9,10,3,4,2,3,2,1,1,1,1,34,26,34,34,28,10,2,24,28,23,9,9,10,3,2,3,2,4,2,2,1,2],
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
