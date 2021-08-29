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
        texture=ImageTexture(url=['../../images/5/newport13-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.42796973708396,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[51,47,38,30,26,22,19,19,19,17,16,14,15,14,13,16,16,16,16,15,15,15,47,42,34,29,26,20,17,16,16,15,14,14,12,13,14,15,17,16,16,15,15,15,43,35,28,24,20,16,14,13,14,14,15,15,14,13,13,15,16,17,15,15,16,16,38,31,25,20,16,14,13,13,13,14,15,16,16,14,12,14,15,16,15,14,14,14,29,25,21,17,17,16,14,13,13,14,16,18,17,16,14,15,16,17,18,17,16,16,24,19,15,14,17,17,15,14,15,15,16,16,16,17,17,17,17,17,19,20,19,19,20,15,15,17,17,15,17,15,15,15,16,17,16,16,18,16,16,16,18,20,21,20,18,17,18,18,17,16,16,16,16,16,17,16,16,17,16,17,18,19,20,21,21,21,19,20,21,21,20,18,18,19,18,17,15,15,15,16,15,15,18,19,19,20,20,20,21,21,21,21,21,22,22,20,17,16,15,18,15,14,14,14,15,16,19,22,20,20,22,21,20,22,21,21,21,20,17,17,17,18,16,16,15,17,17,16,19,21,21,21,21,21,20,21,20,20,20,20,20,19,19,18,16,16,15,15,14,12,15,16,19,20,19,20,21,23,23,22,21,21,22,22,21,18,16,17,18,17,18,15,17,19,20,21,19,19,19,21,23,25,21,21,21,21,20,19,16,17,19,19,18,15,17,20,22,23,20,21,23,25,24,23,21,21,22,22,23,19,16,16,18,19,19,17,16,19,24,24,22,22,23,23,25,23,22,22,24,25,25,22,16,16,17,20,20,19,16,17,18,19,25,26,26,23,23,25,25,24,23,23,25,21,16,18,19,21,21,21,18,18,21,22,22,23,23,22,23,26,25,24,22,21,23,23,16,18,19,20,20,20,20,17,17,18,25,25,25,25,25,25,25,26,24,25,24,22,16,18,19,20,22,23,24,19,18,17,24,24,23,23,23,22,21,22,23,24,22,21,21,19,18,20,21,22,21,18,16,16,23,25,26,24,24,23,23,22,22,25,25,23,21,20,21,24,24,24,24,24,23,23,19,20,26,26,26,24,23,23,23,23,22,22,21,16,21,22,23,24,25,25,24,24,25,26,27,26,26,24,23,23,24,22,18,21,23,17,20,23,25,27,27,25,24,24,26,26,27,26,26,24,22,23,24,22,18,21,23,18,20,23,26,27,27,25,24,24],
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
