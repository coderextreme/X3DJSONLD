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
        texture=ImageTexture(url=['../../images/5/newport31-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[21,21,21,21,21,21,19,13,15,18,20,22,14,14,14,15,15,14,14,14,15,15,20,20,21,21,21,16,16,20,19,21,21,20,14,14,14,14,14,17,18,18,16,15,20,20,21,20,20,18,18,20,16,21,21,20,14,14,14,14,14,17,20,20,19,19,21,21,21,21,21,21,21,20,16,21,21,20,14,14,14,14,14,17,21,21,20,20,21,21,21,21,22,22,22,21,21,22,21,19,17,14,14,14,14,14,19,22,22,22,22,22,22,22,23,23,23,23,22,22,20,21,18,18,18,14,14,14,14,16,19,19,22,22,22,23,23,24,24,23,23,21,20,21,21,20,13,15,14,14,14,14,21,21,23,23,22,23,23,23,23,23,23,22,21,21,21,20,16,14,14,14,14,15,21,22,23,23,23,23,22,22,23,23,22,21,19,18,20,16,13,15,14,15,16,16,19,19,23,23,23,23,23,22,22,22,22,21,18,16,15,14,13,13,14,15,16,16,17,17,23,23,24,24,23,22,22,22,22,21,19,16,14,15,14,16,18,16,16,17,17,17,23,23,23,23,22,21,21,22,22,21,18,15,14,18,19,16,16,17,17,18,20,20,24,24,23,23,23,21,21,22,23,20,16,14,15,18,19,18,17,19,21,21,21,20,24,24,24,24,24,23,20,21,22,20,16,14,15,20,21,20,17,18,21,24,23,23,23,23,23,23,23,23,21,18,18,17,17,15,15,22,23,23,20,16,21,24,24,24,22,21,21,22,23,21,18,18,19,20,20,18,17,20,23,24,23,18,17,23,24,24,21,21,21,23,21,21,21,21,21,22,23,21,18,16,23,23,23,21,22,24,23,23,23,22,23,21,21,22,23,22,22,23,23,23,20,17,21,17,19,23,24,26,24,24,24,24,23,23,23,24,24,23,23,23,22,22,18,16,16,18,23,25,25,24,24,23,25,24,23,23,25,24,24,24,24,23,21,21,18,16,16,21,24,26,25,25,23,23,25,25,24,25,24,23,23,23,24,23,22,21,18,16,17,24,25,27,27,27,24,23,26,25,25,25,24,24,24,24,24,24,23,22,19,16,23,26,27,28,28,26,24,24,25,25,25,25,25,25,24,24,24,24,24,22,18,16,26,31,32,31,28,25,23,23,25,25,25,25,25,25,24,24,24,24,24,22,18,16,26,31,32,32,29,25,23,23],
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
