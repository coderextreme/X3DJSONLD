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
        texture=ImageTexture(url=['../../images/5/newport30-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[5,4,4,4,5,4,4,3,2,4,6,8,9,9,10,11,12,11,8,7,8,8,5,5,5,6,5,4,3,3,4,5,7,10,11,12,12,13,14,13,12,10,6,6,6,5,4,6,5,4,4,3,6,7,8,9,11,13,14,16,16,15,15,12,10,8,5,4,4,5,5,4,5,4,7,11,13,13,13,14,16,17,18,17,17,14,10,10,4,4,4,4,4,4,5,5,5,8,11,12,14,15,17,18,19,19,17,16,13,12,6,6,5,4,4,4,6,8,9,11,11,13,14,14,17,18,19,19,17,13,14,14,7,7,6,5,4,4,8,9,10,12,13,14,16,17,17,18,18,16,15,14,12,12,8,7,5,5,5,5,5,6,9,11,14,15,16,18,18,19,18,16,13,11,8,8,9,7,5,6,7,4,5,6,8,11,13,14,15,17,18,18,17,16,16,14,9,8,9,8,7,7,8,4,4,7,9,11,13,15,15,16,17,16,17,19,18,11,7,6,8,7,7,6,6,5,6,9,10,13,14,15,15,16,16,16,17,18,19,12,5,5,7,7,6,5,5,5,6,9,11,13,15,16,16,16,16,16,16,15,15,11,6,5,6,6,5,5,5,6,8,9,11,13,15,16,16,17,18,17,17,17,16,15,12,10,5,5,4,4,5,5,6,9,11,11,15,16,17,18,21,21,21,22,20,18,13,12,4,4,4,5,6,7,8,10,11,13,15,17,20,21,23,23,21,19,18,15,11,10,4,4,4,4,7,7,8,9,12,14,13,19,21,23,22,20,19,17,16,13,9,8,4,4,4,5,6,7,7,8,10,13,16,19,22,22,20,19,16,15,14,15,10,10,5,4,5,6,7,7,7,8,8,11,14,16,17,18,17,16,14,14,14,17,18,17,6,6,5,6,9,7,7,9,10,11,14,15,16,14,13,13,12,12,14,16,15,14,8,6,5,6,7,7,8,9,11,13,14,15,15,14,14,13,12,11,13,11,7,6,9,8,7,7,6,7,8,9,11,13,14,15,15,16,17,18,15,13,8,8,5,5,8,9,8,7,7,7,8,9,12,14,14,14,15,16,18,18,15,13,10,6,4,3,9,10,8,8,7,7,8,8,11,12,13,13,13,13,14,12,10,7,6,2,1,1,9,10,9,8,7,7,8,8,11,12,13,13,13,12,12,11,10,6,5,1,1,1],
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
