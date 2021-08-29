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
        texture=ImageTexture(url=['../../images/5/newport14-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,6,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,10,10,9,6,4,0,0,0,0,0,0,0,0,0,2,4,3,0,0,0,0,0,10,11,10,8,6,3,2,0,0,0,0,0,0,0,3,4,2,0,0,0,1,2,11,11,10,8,7,4,2,2,2,3,0,2,6,2,0,0,0,0,0,0,0,0,11,11,11,9,7,5,3,2,2,4,3,4,4,0,0,0,0,0,0,0,0,0,13,11,10,11,6,4,5,5,3,4,7,11,13,6,0,0,0,1,0,0,0,0,12,13,12,12,8,4,3,2,2,5,12,17,16,12,11,10,8,10,3,2,0,0,13,14,13,10,8,4,3,2,3,7,16,17,11,16,11,16,16,12,9,2,0,0,17,16,13,10,8,6,8,2,2,3,13,12,10,10,10,14,19,13,12,6,0,0,16,15,13,11,9,8,10,6,2,3,3,4,8,11,12,15,16,15,15,10,7,4,17,14,14,12,10,9,12,11,6,2,2,2,3,8,15,19,20,21,16,10,8,8,15,14,14,14,13,12,11,10,3,2,2,2,3,16,23,19,21,27,26,15,9,8,12,12,12,12,12,12,8,6,4,3,2,2,4,20,20,16,17,27,21,21,22,22,13,13,11,11,13,11,5,2,2,2,2,2,5,16,14,15,16,18,21,22,23,24,11,15,12,12,12,10,7,3,2,2,3,2,4,8,11,16,16,16,17,19,24,24,10,15,18,15,11,10,9,7,3,2,2,2,4,5,8,11,16,17,13,13,21,23,0,11,17,14,13,10,12,13,10,6,5,5,5,3,3,5,13,18,13,12,20,22,0,0,9,9,8,7,9,13,16,12,11,12,11,8,8,4,6,10,9,14,15,16,0,0,0,0,0,1,3,11,14,14,16,17,14,10,13,10,1,0,0,15,7,7,0,0,0,0,0,0,0,5,12,14,17,20,17,10,6,7,5,0,0,3,0,0,0,0,0,0,0,0,0,0,4,10,16,18,20,17,5,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,8,15,18,20,17,5,3,0,0,0,0,0,0],
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
