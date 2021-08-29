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
        texture=ImageTexture(url=['../../images/5/newport26-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.41746982806205,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[17,18,18,13,14,12,13,14,14,14,14,11,12,15,16,14,13,12,10,10,11,11,18,16,16,18,16,16,19,19,17,17,15,17,17,17,17,16,14,14,16,14,14,14,20,16,17,17,17,19,20,21,20,19,20,18,17,18,19,18,17,16,17,19,18,17,18,18,18,18,17,18,19,22,20,21,21,20,19,18,17,18,18,18,18,18,18,17,20,20,17,16,15,15,18,19,19,20,20,20,18,18,19,19,16,17,19,19,18,18,19,19,19,16,15,17,18,18,17,18,17,19,21,21,19,18,16,17,17,17,16,16,19,20,20,16,14,17,18,18,17,18,19,21,20,16,18,18,17,18,17,16,15,15,20,19,18,12,16,17,19,19,18,18,19,19,18,17,16,17,17,17,18,17,16,16,20,21,16,15,18,19,20,19,22,19,18,16,16,17,17,16,16,14,15,15,16,16,17,15,14,18,19,20,22,19,22,22,16,16,17,16,16,16,15,15,15,15,14,14,13,12,14,17,19,22,21,21,19,18,16,17,17,17,17,14,15,16,16,16,14,14,14,12,14,18,18,19,19,17,18,19,20,19,18,17,16,13,13,15,15,13,14,14,16,13,12,14,16,17,17,19,17,19,21,18,13,12,12,13,13,14,15,15,13,12,16,11,12,14,16,16,17,17,18,17,16,12,13,12,12,14,15,15,14,14,13,12,11,11,13,14,14,13,14,16,18,17,15,14,16,14,11,14,15,15,14,13,13,13,10,9,10,13,13,13,13,16,19,18,15,10,14,15,15,15,15,14,13,13,13,13,9,9,13,14,14,13,13,13,14,15,13,10,11,15,14,14,13,13,13,14,14,14,11,13,15,12,13,12,12,13,12,12,12,12,11,11,12,13,13,13,14,14,15,15,9,13,13,12,12,13,13,13,13,13,13,12,11,11,12,12,12,13,13,12,13,13,3,10,13,13,13,11,15,15,15,15,14,13,12,11,11,11,12,13,12,12,10,10,3,11,15,15,13,14,16,17,18,18,17,15,15,12,11,8,11,12,13,12,10,10,3,14,18,17,17,19,19,19,19,20,19,16,14,13,12,9,7,7,13,13,11,11,6,18,18,16,16,19,21,21,20,20,19,13,12,11,12,11,10,7,5,11,11,11,7,17,18,15,15,18,21,21,20,19,18,13,11,11,12,12,10,8,5,9,11,11],
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
