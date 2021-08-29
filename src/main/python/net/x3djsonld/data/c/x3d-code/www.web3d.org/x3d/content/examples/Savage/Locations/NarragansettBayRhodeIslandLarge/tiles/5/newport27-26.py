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
        texture=ImageTexture(url=['../../images/5/newport27-26.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[31,29,27,24,20,13,11,11,10,9,10,12,25,7,7,10,12,13,14,19,26,28,30,30,28,26,21,19,18,13,11,10,8,7,7,6,8,10,11,13,15,20,27,29,29,30,29,27,23,21,18,14,12,11,9,7,6,7,10,11,12,13,16,21,27,30,28,29,30,29,23,20,17,15,13,10,8,7,6,8,11,13,17,15,16,21,29,31,28,29,30,30,25,20,14,13,13,10,9,8,9,9,10,11,13,14,16,20,28,31,29,30,31,30,24,19,14,13,13,9,8,7,8,9,10,11,13,15,17,20,27,30,30,30,32,30,25,22,18,13,10,8,8,8,8,9,10,11,12,15,17,20,27,30,30,31,32,30,26,24,20,15,9,9,9,8,9,10,11,11,14,16,17,19,24,27,29,32,33,31,26,24,21,16,9,10,11,10,10,11,13,15,16,17,18,20,24,26,29,32,34,33,30,26,23,18,14,10,9,10,12,14,16,16,17,20,23,25,25,25,29,33,35,36,31,27,24,20,15,13,11,11,13,15,15,15,17,18,20,21,23,23,31,34,36,35,31,26,22,18,17,14,11,12,14,14,13,14,15,16,16,18,23,24,33,36,37,36,32,25,22,18,16,13,12,14,13,13,14,14,14,15,16,17,19,20,35,37,36,35,29,25,21,19,17,14,13,15,13,13,16,16,14,14,15,16,16,16,35,36,35,31,28,24,21,19,18,15,15,14,14,14,15,15,16,16,17,18,19,19,36,35,33,30,26,22,19,17,16,16,14,14,15,15,15,16,18,19,20,21,23,23,32,34,32,28,25,21,19,18,18,16,15,15,15,15,16,16,17,21,21,22,23,23,29,32,30,28,25,21,19,17,17,16,15,16,16,16,16,17,17,19,21,21,22,22,27,29,28,26,23,20,18,17,17,16,16,16,16,15,17,17,21,19,20,21,21,22,25,26,26,23,20,19,18,17,17,16,16,16,16,16,16,21,24,22,20,21,22,22,23,25,24,23,21,19,18,17,16,16,16,17,17,16,16,21,24,23,22,22,22,22,22,25,23,21,21,20,17,16,16,16,16,17,17,16,17,19,21,23,22,23,23,23,22,24,21,20,19,18,18,16,16,16,16,17,17,16,18,22,23,23,22,23,23,24,23,24,20,20,19,18,18,16,16,16,16,17,17,16,19,23,23,23,22,24,24,24],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
