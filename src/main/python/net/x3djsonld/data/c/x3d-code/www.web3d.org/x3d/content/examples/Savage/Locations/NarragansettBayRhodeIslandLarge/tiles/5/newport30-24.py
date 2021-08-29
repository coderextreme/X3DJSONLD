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
        texture=ImageTexture(url=['../../images/5/newport30-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[12,14,14,10,20,21,14,11,12,17,14,14,16,17,14,14,16,16,15,15,17,17,12,9,9,11,10,8,11,15,16,21,16,14,13,13,13,13,14,15,16,16,17,17,8,6,7,11,6,7,13,18,22,15,16,19,23,16,14,14,14,15,16,17,17,18,8,8,8,8,7,10,14,19,23,19,16,21,28,16,16,17,16,16,17,18,19,18,8,10,9,13,7,7,8,11,12,13,14,17,16,15,14,17,20,18,18,18,19,19,12,11,10,9,13,10,7,12,16,18,16,18,10,13,12,17,18,18,17,15,16,17,11,9,10,12,11,12,11,10,11,10,11,16,10,11,11,11,12,13,14,17,19,19,9,9,11,13,12,11,11,12,11,13,11,10,11,10,11,12,14,14,16,14,16,16,7,9,12,12,12,15,17,16,14,12,14,10,10,14,14,13,13,13,13,13,13,13,8,9,13,14,13,15,19,19,16,10,14,15,16,14,12,13,11,14,15,12,13,13,7,7,10,12,14,15,16,12,12,11,11,12,13,13,11,10,11,12,11,14,16,16,7,7,9,14,13,15,18,19,19,18,18,18,16,17,11,10,10,9,10,12,14,14,7,8,11,11,14,17,18,17,18,19,18,17,18,15,11,10,11,10,10,10,12,12,8,8,8,8,8,8,8,8,8,7,7,10,12,12,11,12,13,12,13,14,14,14,10,8,9,11,10,8,8,9,9,8,11,11,10,11,13,14,13,13,14,14,15,15,10,9,8,11,10,10,10,10,10,10,11,13,13,13,14,14,14,14,15,16,16,15,11,10,11,10,15,14,15,13,12,10,10,11,15,12,15,16,14,16,17,17,16,16,15,11,12,11,11,14,14,16,13,10,10,10,11,10,13,14,14,16,18,17,17,17,20,13,11,13,13,15,16,16,12,10,10,11,13,12,12,14,19,18,16,16,16,16,22,21,17,11,17,17,18,19,16,12,10,11,13,16,13,16,20,21,19,18,16,16,24,24,22,14,15,22,22,18,21,17,11,11,11,13,15,17,17,17,17,17,17,17,26,23,22,17,14,20,22,20,21,18,13,11,15,18,17,17,18,19,18,21,21,21,29,25,22,19,17,17,20,21,20,19,17,12,13,19,19,19,18,18,19,20,22,22,30,26,23,20,18,17,19,22,20,19,18,13,14,18,20,20,19,18,19,20,22,22],
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
