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
        texture=ImageTexture(url=['../../images/5/newport14-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.32952841188842,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,6,2,5,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,5,7,0,4,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,2,5,0,5,1,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,3,0,9,5,5,0,0,0,0,0,0,0,0,0,1,5,3,0,0,0,0,2,3,0,4,6,8,2,0,0,0,0,0,0,0,0,3,7,8,3,1,0,0,0,0,0,1,3,1,0,0,0,0,0,0,0,0,0,2,5,8,9,3,0,0,0,0,0,3,8,0,0,0,0,0,0,0,0,0,0,2,2,8,14,0,0,0,0,0,4,0,0,0,0,0,0,2,4,1,0,0,0,4,7,9,13,4,0,0,0,0,8,5,0,0,0,0,0,4,10,1,0,0,0,5,10,10,8,8,0,0,0,0,8,10,7,0,0,0,1,4,15,11,0,0,0,2,11,10,7,0,0,0,0,0,22,17,10,7,5,4,5,2,10,15,9,0,0,2,12,10,11,0,0,0,0,2,24,29,19,13,15,5,2,2,6,14,14,1,0,0,9,11,11,9,2,0,0,2,24,28,28,14,17,2,2,7,8,12,16,7,0,2,10,11,13,13,5,3,0,1,23,27,31,21,16,3,9,15,16,12,16,15,8,7,14,12,14,14,8,6,2,2,22,27,27,22,13,9,18,20,18,16,16,17,13,11,13,11,11,14,11,6,2,2,16,19,17,16,10,11,16,18,18,19,18,14,10,9,10,7,7,8,14,10,4,2,7,14,11,10,10,13,13,14,17,18,18,14,8,6,6,5,6,7,11,14,6,3,0,4,9,10,14,15,16,13,15,17,16,16,12,8,4,3,3,4,7,12,7,5,0,0,2,6,13,14,14,10,13,19,21,22,16,6,2,1,1,2,4,5,6,7,0,0,1,6,13,13,13,10,13,19,22,23,17,6,2,0,0,2,3,4,6,7],
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
