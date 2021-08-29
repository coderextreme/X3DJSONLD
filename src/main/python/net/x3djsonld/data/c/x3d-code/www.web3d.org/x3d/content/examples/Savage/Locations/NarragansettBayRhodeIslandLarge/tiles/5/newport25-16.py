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
        texture=ImageTexture(url=['../../images/5/newport25-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[21,19,19,18,19,17,17,16,15,18,18,18,18,18,20,18,18,17,15,12,11,10,22,21,19,18,20,18,18,16,14,17,19,19,19,18,18,19,17,16,14,12,9,9,23,22,21,21,17,18,18,17,20,17,18,19,19,22,22,20,17,14,14,13,14,14,23,22,23,23,22,21,16,16,15,18,21,22,23,22,19,17,19,20,16,18,14,14,24,23,24,24,21,20,21,24,18,16,20,23,24,22,24,22,20,19,17,16,13,12,24,23,23,23,20,21,22,20,17,16,24,24,24,24,21,18,16,19,16,15,12,11,24,23,20,21,26,20,20,18,19,18,24,22,24,23,21,20,17,16,17,14,10,10,22,22,20,19,21,20,19,19,19,21,17,20,20,17,19,20,17,13,10,9,13,13,23,21,20,21,19,18,17,17,18,19,17,19,19,18,17,16,12,10,12,16,13,13,22,23,22,20,21,18,18,17,17,18,17,18,19,20,17,16,13,13,15,14,12,11,24,23,21,20,23,17,17,18,18,16,20,16,16,20,19,16,15,16,16,14,14,14,23,22,21,21,20,18,18,17,17,18,18,18,18,16,17,17,20,21,17,15,16,16,22,21,22,23,19,23,19,18,18,18,18,21,22,18,18,17,20,19,17,16,18,17,24,22,21,22,17,23,20,19,19,18,19,22,21,21,21,20,17,16,17,18,18,18,26,24,26,22,19,22,21,20,19,18,19,20,19,19,21,19,16,15,18,19,17,18,25,27,26,26,23,20,19,19,19,21,17,17,19,18,18,17,16,16,14,16,17,17,24,27,27,27,26,20,19,19,19,20,18,19,18,18,17,17,15,15,16,15,15,15,27,29,27,27,26,25,20,18,18,17,19,21,18,19,18,17,16,15,15,15,20,21,26,28,27,27,26,25,23,19,18,19,19,20,20,19,18,18,17,17,17,17,19,18,26,28,26,28,25,22,21,21,19,19,21,21,21,20,21,18,18,18,20,20,16,16,25,24,27,24,24,24,21,21,19,20,21,18,21,22,22,20,20,21,19,17,18,18,22,25,27,27,23,20,20,22,21,21,22,22,21,21,21,20,19,16,18,16,16,17,24,25,24,25,29,21,21,21,21,21,23,23,24,23,20,19,20,17,18,18,17,17,23,24,24,24,28,22,21,22,21,21,23,23,23,23,20,18,20,17,18,19,17,17],
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
