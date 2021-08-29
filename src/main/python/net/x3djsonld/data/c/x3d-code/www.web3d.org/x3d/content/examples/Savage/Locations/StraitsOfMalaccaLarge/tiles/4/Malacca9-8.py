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
        texture=ImageTexture(url=['../../images/4/Malacca9-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3545435942297044,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[32,26,19,29,21,27,44,14,26,36,18,34,35,5,35,36,38,39,32,34,35,34,10,25,16,11,9,35,17,12,17,19,15,35,15,26,40,39,40,33,32,16,35,34,11,14,10,10,10,13,10,14,27,18,25,26,20,38,43,42,42,32,35,30,28,25,16,19,6,13,13,9,9,25,20,16,20,20,13,13,42,39,36,42,36,26,33,34,23,17,9,21,22,8,21,29,19,18,12,20,16,23,34,42,42,36,36,37,34,36,13,16,29,12,9,10,9,25,12,17,30,17,12,29,31,4,27,38,33,36,2,2,17,10,32,6,22,23,25,31,16,6,12,11,14,3,12,13,25,36,34,3,1,1,19,24,8,9,11,24,33,30,30,10,4,2,4,-3,0,-7,13,15,0,-9,0,3,5,7,10,6,24,10,29,33,25,12,5,-7,6,2,5,0,3,-4,-2,3,4,2,31,5,5,2,24,31,30,16,10,4,0,3,6,33,24,30,4,-2,5,0,3,2,23,4,7,15,18,28,32,10,9,1,0,5,28,30,30,28,26,24,3,3,2,1,5,3,7,16,30,31,33,28,6,6,9,6,31,28,26,29,28,11,6,3,0,3,3,8,23,23,31,30,29,23,9,3,4,32,32,29,24,29,4,8,4,4,2,4,5,6,23,24,28,30,29,28,21,0,0,27,31,29,5,7,6,11,8,4,2,5,8,21,30,23,31,26,24,29,31,-11,0,23,3,5,7,7,5,6,3,4,2,4,9,29,22,32,30,30,22,27,7,-2,-6,0,20,-1,9,6,5,2,3,3,3,3,32,23,28,28,31,27,21,9,5,-11,0,-5,-5,-10,-23,2,3,3,3,5,4,2,26,26,26,27,26,8,-1,3,1,9,8,-5,3,6,4,4,2,3,3,3,3,4,20,21,28,23,12,0,4,2,4,-1,9,3,4,3,6,3,2,2,3,3,3,5,3,18,14,16,6,2,0,4,0,4,0,5,3,4,2,2,2,3,3,3,4,2,0,0,-1,2,0,0,2,4,0,0,2,1,5,3,2,3,2,1,3,4,4,5,0,0,0,0,0,0,2,14,-5,0,4,2,1,1,3,3,1,0,3,4,4,3],
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
