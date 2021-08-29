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
        texture=ImageTexture(url=['../../images/5/newport25-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.41746982806205,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[10,7,9,12,12,11,11,11,13,13,13,14,14,14,13,13,13,13,13,13,12,12,9,10,7,10,9,10,10,8,8,8,10,10,12,11,12,13,12,12,12,11,12,11,14,13,9,7,8,6,7,8,11,11,12,14,13,12,12,10,11,13,12,8,8,8,14,10,8,8,7,8,10,14,12,15,13,14,14,14,13,13,13,12,13,12,11,11,12,9,8,9,9,9,8,11,17,18,16,15,16,15,16,16,16,15,15,15,15,15,11,9,7,8,8,8,11,17,16,17,17,18,17,17,17,17,18,18,17,16,16,16,10,11,10,9,8,10,14,15,14,15,15,15,16,17,17,17,18,19,18,17,15,15,13,12,9,9,8,4,8,9,10,16,15,13,13,14,15,15,15,16,15,15,15,15,13,11,10,10,8,3,3,3,3,6,14,14,15,15,14,12,14,13,12,13,13,13,11,11,12,12,8,6,3,3,3,3,10,14,16,15,14,14,15,13,14,10,10,10,14,14,14,9,10,8,3,3,3,3,11,15,16,16,14,16,17,15,14,15,11,11,16,18,14,12,10,3,3,3,3,3,12,17,19,18,17,17,17,18,17,17,14,13,17,18,17,14,7,3,3,3,3,3,12,17,19,19,18,16,17,17,17,13,14,14,18,18,15,13,7,3,3,3,3,3,14,18,18,19,17,19,17,14,15,15,14,14,18,17,17,14,10,4,3,3,8,15,14,16,17,16,15,16,16,16,16,17,16,15,17,16,15,11,10,6,7,9,12,12,14,15,17,16,16,17,15,18,16,17,16,16,15,16,13,14,12,8,7,12,12,13,15,17,19,18,18,17,18,18,17,18,18,18,21,17,15,13,10,12,12,14,14,15,18,19,19,18,18,18,18,18,18,18,18,18,18,17,15,13,14,16,15,15,15,15,19,19,19,18,17,17,18,20,19,19,18,18,16,17,13,12,17,17,18,16,17,17,19,19,16,17,17,16,19,19,19,18,18,18,18,18,14,12,14,15,16,17,16,17,15,15,14,15,15,15,18,18,16,13,14,14,17,17,16,14,13,16,13,14,15,14,8,7,15,10,11,15,15,11,11,7,5,5,17,18,18,14,15,12,12,13,12,13,14,11,13,15,15,13,12,11,9,10,11,11,17,18,18,13,14,12,13,14,14,14,14,11,12,15,16,14,13,12,10,10,11,11],
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
