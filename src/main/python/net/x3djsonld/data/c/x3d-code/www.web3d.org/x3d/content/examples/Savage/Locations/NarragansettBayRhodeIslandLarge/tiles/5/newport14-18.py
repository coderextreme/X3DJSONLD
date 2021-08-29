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
        texture=ImageTexture(url=['../../images/5/newport14-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,13,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,17,16,13,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,21,18,16,12,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,20,20,18,15,13,10,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,22,22,21,19,16,12,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,21,20,21,21,17,14,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,20,19,19,18,21,17,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,22,21,20,20,21,19,15,1,0,0,0,0,0,0,0,0,0,0,0,0,0,20,24,22,22,23,21,19,14,2,0,0,0,0,0,0,0,0,0,0,0,0,0,17,21,22,24,21,20,17,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,14,17,19,19,16,12,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,13,12,11,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,8,7,6,3,0,0,0,3,7,7,0,0,0,0,0,0,0,0,0,0,0,0,4,2,3,4,4,1,2,9,11,14,11,0,0,0,0,0,0,0,0,0,0,0,2,4,5,5,7,6,8,11,16,18,16,0,0,0,0,0,0,0,0,0,0,0,4,8,9,9,11,11,12,14,17,18,16,10,0,0,0,0,0,0,0,0,0,2,7,10,12,13,14,14,15,17,18,18,17,14,0,0,0,0,0,0,0,0,0,3,9,12,15,17,16,14,15,17,19,19,18,10,0,0,0,0,0,0,0,0,0,7,11,16,19,19,18,18,15,15,17,17,15,6,0,0,0,0,0,0,0,0,3,7,12,17,22,21,21,21,18,17,17,16,10,0,0,0,0,0,0,0,0,0,3,7,12,17,22,21,22,22,18,17,17,15,10,0,0,0,0,0,0,0],
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
