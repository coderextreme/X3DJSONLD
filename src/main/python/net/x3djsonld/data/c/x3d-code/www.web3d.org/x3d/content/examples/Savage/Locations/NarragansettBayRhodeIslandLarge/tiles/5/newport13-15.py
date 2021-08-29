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
        texture=ImageTexture(url=['../../images/5/newport13-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.42796973708396,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[22,22,22,18,14,11,9,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,20,18,16,13,11,8,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,17,15,13,11,10,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,19,14,13,12,10,10,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,17,15,14,13,11,9,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,19,16,12,11,11,9,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,13,12,11,10,10,8,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,15,13,11,9,11,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,13,12,10,10,4,4,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,16,16,15,10,1,0,5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,16,17,17,16,14,11,3,0,6,6,0,0,0,0,0,0,0,0,0,0,0,0,13,15,16,18,17,15,11,3,1,7,7,3,0,0,0,0,0,0,0,0,0,0,11,13,17,19,19,17,12,0,0,0,3,7,5,0,0,0,0,0,0,0,0,0,7,10,14,17,17,13,10,6,6,6,0,6,6,6,4,0,0,0,0,0,0,0,5,8,9,9,9,8,7,8,8,7,7,8,8,7,8,8,3,0,0,0,0,0,2,4,5,4,3,3,5,5,8,9,11,11,12,10,6,5,5,3,5,0,0,0,0,0,0,1,2,2,2,3,6,10,14,14,14,12,9,5,1,0,0,0,0,0,0,0,0,0,0,1,0,0,2,6,13,16,15,13,9,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,14,15,12,8,1,0,0,0,4,4,4,3,0,0,0,0,0,0,0,0,5,8,9,10,8,4,0,0,2,7,11,11,11,7,3,0,0,0,0,0,0,0,0,7,8,5,2,0,0,6,9,11,13,17,17,15,5,1,0,0,0,0,0,0,0,0,2,4,3,0,4,6,8,11,16,19,20,20,13,5,0,0,0,0,0,0,0,0,0,0,0,2,8,12,14,16,19,21,22,21,14,6,1,0,0,0,0,0,0,0,0,0,0,4,9,12,15,17,19,21,23],
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
