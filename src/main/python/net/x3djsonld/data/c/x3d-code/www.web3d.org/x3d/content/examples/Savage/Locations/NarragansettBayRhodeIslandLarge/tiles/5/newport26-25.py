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
        texture=ImageTexture(url=['../../images/5/newport26-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.24158699571478,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[14,11,10,10,11,12,12,12,11,10,9,8,7,7,8,12,16,16,14,17,17,17,13,10,10,11,12,12,12,11,11,11,10,8,9,8,8,11,15,16,15,18,19,19,10,9,9,11,12,13,12,11,12,13,11,12,12,9,8,11,13,14,16,18,19,20,10,8,9,11,12,13,12,13,15,15,14,15,14,10,10,10,12,13,15,18,20,20,10,8,8,11,13,14,14,14,16,17,16,17,16,11,11,11,11,12,14,19,20,21,10,8,8,10,12,13,13,14,16,19,19,20,16,11,11,12,12,13,14,19,20,20,9,8,8,10,11,13,13,14,18,22,20,20,17,13,11,12,12,14,14,18,20,21,8,7,8,10,12,12,13,14,19,24,22,22,18,14,12,11,13,13,15,18,21,21,6,6,8,9,11,12,13,15,20,25,24,22,19,15,12,12,13,13,15,19,22,23,7,9,8,10,11,11,13,16,21,26,27,24,20,14,12,12,13,14,17,20,24,24,8,8,8,10,11,11,13,15,21,27,29,26,20,13,13,13,13,14,19,22,24,25,9,8,8,9,11,12,13,14,21,29,31,27,19,13,13,13,13,16,20,23,25,25,8,8,8,10,11,13,13,16,21,29,31,25,18,13,13,14,14,18,22,25,25,25,8,8,9,10,11,11,13,17,22,29,29,21,15,14,13,15,18,20,24,25,24,24,9,10,11,10,11,12,13,14,22,29,27,18,13,13,15,17,19,21,24,25,25,25,10,12,12,10,10,11,12,13,20,26,23,15,13,16,17,18,19,21,23,26,27,26,11,10,10,11,11,11,11,11,16,22,19,15,15,17,18,19,19,20,22,27,27,27,12,10,10,11,11,11,11,12,14,17,16,13,14,17,18,19,19,20,22,26,27,27,12,13,12,11,11,12,12,13,12,13,13,13,14,16,20,19,19,20,22,26,26,26,11,12,12,12,12,12,12,12,13,13,13,13,13,15,21,19,19,20,22,25,32,33,12,11,12,12,12,12,12,13,13,14,13,14,14,16,19,19,20,20,23,27,31,31,13,11,11,12,13,13,13,13,14,14,14,14,14,15,19,20,20,21,23,27,32,33,14,13,12,12,13,13,13,13,14,14,15,13,13,16,19,21,21,20,23,28,31,31,14,14,13,12,13,14,13,13,14,14,15,13,13,16,19,21,20,20,23,28,31,31],
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
