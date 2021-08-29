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
        texture=ImageTexture(url=['../../images/5/newport23-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,5,14,18,18,16,15,14,11,16,11,8,12,13,5,0,0,0,0,0,0,0,0,11,17,18,19,14,10,11,10,13,15,12,12,15,9,0,0,0,0,0,0,0,1,8,15,18,17,10,14,11,12,13,11,17,12,13,10,2,0,0,0,0,0,0,0,9,16,14,15,14,16,11,10,7,10,13,15,15,11,4,2,0,0,0,0,0,5,10,17,15,18,12,11,7,8,12,11,18,17,15,12,6,4,0,0,0,0,0,1,11,16,17,18,17,9,8,7,13,18,17,26,18,12,6,6,0,0,0,0,0,3,10,14,19,22,17,12,8,14,14,18,19,19,20,14,10,9,0,0,0,0,0,11,14,18,17,16,17,14,14,12,15,17,16,19,18,15,11,10,0,0,0,0,0,11,14,12,17,13,14,17,13,10,13,14,16,13,9,13,10,10,0,0,0,0,0,3,9,13,15,15,15,16,10,1,2,9,10,14,11,12,7,6,0,0,0,0,0,0,7,13,14,15,11,7,3,1,1,2,6,8,9,9,8,7,0,0,0,0,0,0,3,8,7,8,7,3,4,1,1,1,2,3,6,5,5,4,0,0,0,0,0,0,0,5,4,3,8,1,1,1,1,1,0,3,3,4,3,2,0,0,0,0,0,0,0,3,6,8,7,1,1,1,1,1,1,2,4,1,0,0,0,0,0,0,0,0,0,6,10,7,2,1,1,1,1,1,1,7,8,4,2,0,0,0,0,0,0,0,0,3,12,8,8,1,1,1,1,2,9,11,9,8,7,6,0,0,0,0,0,0,0,0,8,6,2,2,4,4,6,9,10,11,11,8,7,8,0,0,0,0,0,0,0,0,0,0,0,0,3,8,5,8,7,9,11,10,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,2,4,4,5,9,9,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,4,5,8,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,6,6,5,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,7,9,9,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,5,7,9,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,6,7,9,9],
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
