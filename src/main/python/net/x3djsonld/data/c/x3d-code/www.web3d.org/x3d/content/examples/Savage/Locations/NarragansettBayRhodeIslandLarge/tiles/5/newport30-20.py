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
        texture=ImageTexture(url=['../../images/5/newport30-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[5,5,5,4,7,13,15,15,16,16,15,9,9,11,16,20,19,20,14,16,17,16,5,5,5,5,11,13,15,15,16,16,16,13,11,14,14,14,15,16,16,17,17,16,5,5,4,7,14,15,16,17,17,17,18,16,14,14,14,14,14,15,17,17,16,16,3,7,11,10,13,16,18,18,17,17,17,17,14,14,14,14,14,15,17,17,16,16,10,15,15,15,14,14,17,21,19,18,17,18,14,14,14,14,14,14,16,16,17,17,9,15,15,16,15,15,17,18,20,19,17,18,16,14,14,14,14,14,16,18,18,17,15,15,14,15,16,17,17,18,18,19,18,17,15,14,14,14,14,14,15,16,17,17,17,17,16,16,17,18,18,18,19,19,18,16,14,14,14,14,14,14,14,16,17,17,15,18,18,18,18,18,18,18,19,18,17,14,14,14,14,14,14,14,14,17,18,18,16,18,18,18,18,18,18,17,18,18,16,14,14,14,14,14,14,17,18,18,18,18,18,15,18,18,18,18,18,17,17,17,14,14,14,15,14,14,17,18,18,19,19,19,18,18,18,18,18,18,18,18,16,15,14,14,14,15,17,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,15,14,14,16,17,18,18,18,18,19,18,18,18,19,18,18,18,18,18,19,18,18,15,14,14,16,18,18,18,19,19,19,18,18,18,20,19,19,18,18,18,19,18,17,14,14,14,14,17,18,19,19,20,18,18,19,19,20,20,20,20,18,19,19,18,18,17,14,14,14,18,18,19,20,20,20,20,20,20,20,21,21,20,20,19,19,18,18,17,16,14,14,15,20,20,21,21,21,20,20,21,20,21,21,21,20,19,18,18,18,18,18,16,14,14,20,22,22,22,22,22,22,22,21,21,21,21,20,20,19,19,19,19,19,20,14,14,20,23,23,23,23,24,23,21,21,19,18,20,20,20,21,19,21,21,20,21,18,14,16,23,24,24,24,25,23,20,20,19,19,20,20,20,21,21,17,20,19,15,14,14,14,20,25,26,15,20,20,18,20,20,20,20,20,21,21,21,20,15,14,16,16,14,14,14,20,26,13,13,14,14,21,21,20,20,21,21,20,13,13,17,20,22,14,14,14,15,14,14,15,15,15,15,21,21,21,21,21,21,19,13,15,18,20,22,14,14,14,15,15,14,14,14,15,15],
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
