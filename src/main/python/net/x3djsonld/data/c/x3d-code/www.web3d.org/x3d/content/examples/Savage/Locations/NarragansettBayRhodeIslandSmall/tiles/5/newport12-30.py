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
        texture=ImageTexture(url=['../../images/5/newport12-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[20,20,21,22,22,23,23,23,23,24,23,23,23,23,23,23,23,23,23,23,24,25,26,20,20,21,22,22,22,22,22,22,22,22,22,22,22,22,22,22,21,21,22,23,24,25,20,21,22,22,22,21,21,21,21,21,21,21,21,20,20,20,20,20,20,21,23,24,25,20,21,21,22,22,21,21,21,21,20,20,20,20,19,19,19,19,19,19,20,22,23,24,21,21,22,21,21,21,21,20,20,20,20,20,19,19,19,19,19,19,19,19,21,22,23,22,22,22,21,21,21,21,20,20,20,20,20,19,19,19,19,19,19,19,19,20,21,22,22,22,22,21,21,21,21,20,20,20,20,20,19,19,19,19,19,19,19,19,19,20,21,22,22,22,22,21,21,21,21,21,20,20,20,19,19,19,19,19,19,19,18,19,19,20,22,22,22,22,22,21,21,21,21,21,20,20,19,19,19,18,18,18,18,18,18,19,20,23,23,22,22,22,22,22,22,22,21,21,21,20,19,19,18,18,18,18,18,18,19,20,23,23,23,23,23,23,23,22,22,22,21,21,21,20,20,19,18,18,17,17,18,19,20,23,23,23,23,23,23,23,23,22,22,22,21,21,21,20,19,18,18,17,17,17,18,19,23,23,24,24,24,24,23,23,23,23,22,22,21,20,20,19,18,18,18,17,17,18,18,24,24,24,24,24,24,24,24,23,23,23,22,21,21,20,20,19,18,18,17,17,17,17,25,24,24,24,25,24,24,24,24,24,23,23,23,22,21,20,19,19,18,17,17,17,17,26,25,25,25,25,24,24,24,24,24,24,24,23,23,22,21,20,19,18,17,17,16,16,27,26,25,25,25,25,25,25,24,24,24,24,24,23,23,22,21,20,19,18,17,16,15,27,26,26,25,25,25,25,25,25,25,25,24,24,24,23,22,21,21,20,18,17,16,15,27,26,26,26,26,26,26,26,26,26,25,25,25,24,24,23,22,21,20,18,17,16,14,28,26,26,26,26,26,26,27,26,26,26,26,25,25,24,23,22,21,20,18,17,15,14,27,27,26,26,27,27,27,27,28,27,27,26,26,25,25,23,22,21,20,18,16,15,14,28,27,28,28,28,28,28,29,29,28,28,27,27,26,25,24,22,21,19,18,16,14,14,29,28,28,28,28,29,29,29,29,29,28,28,27,26,25,24,22,21,19,17,16,14,14],
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
