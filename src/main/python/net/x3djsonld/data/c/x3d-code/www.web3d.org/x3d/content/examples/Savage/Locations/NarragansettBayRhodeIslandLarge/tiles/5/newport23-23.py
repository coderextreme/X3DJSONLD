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
        texture=ImageTexture(url=['../../images/5/newport23-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.2855577038016,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,11,14,12,12,6,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,4,14,16,15,13,12,9,5,5,0,0,0,0,0,0,0,0,0,0,0,0,3,9,13,15,18,16,13,8,4,4,2,0,0,0,0,0,0,0,0,0,0,6,4,8,14,17,18,14,12,4,6,8,4,0,0,0,0,0,0,0,0,0,0,1,11,13,17,18,14,14,15,13,10,8,6,0,0,0,0,0,0,0,0,0,0,6,12,15,21,21,16,14,15,14,14,12,9,0,0,0,0,0,0,0,0,0,8,11,14,20,18,19,20,21,20,18,16,15,10,0,0,0,0,0,0,0,0,0,13,15,17,20,21,23,23,23,25,25,22,23,10,0,0,0,0,0,0,0,0,10,8,13,16,19,22,24,26,26,25,26,26,25,6,0,0,0,0,0,0,0,0,7,10,15,16,18,16,17,19,24,26,27,28,28,7,0,0,0,0,0,0,0,0,0,8,11,10,13,12,16,19,23,26,25,26,26,4,0,0,0,0,0,0,0,0,0,0,4,5,7,8,12,17,18,22,23,26,25,2,0,0,0,0,0,0,0,0,0,1,1,4,4,4,6,10,17,21,24,30,31,0,0,0,0,0,0,0,0,0,0,2,0,0,2,1,5,9,15,17,28,34,35,0,0,0,0,0,0,0,0,0,2,4,5,5,1,2,3,8,17,20,32,37,37,6,4,0,0,0,0,0,5,4,4,9,8,5,2,1,3,8,15,24,31,38,39,8,7,0,0,0,1,5,8,5,11,11,9,5,4,3,2,9,13,21,30,37,37,12,9,7,0,0,1,9,4,13,15,13,10,6,1,1,1,6,13,21,28,37,38,9,6,3,5,2,7,2,11,16,16,13,12,7,3,3,5,5,13,21,27,32,33,8,8,6,8,7,3,5,14,17,19,15,9,8,6,6,6,8,16,21,26,30,31,8,8,8,7,5,9,13,19,20,18,14,10,9,8,10,13,12,15,22,25,25,26,8,7,6,6,10,16,22,23,20,19,18,12,9,10,13,13,16,19,21,21,23,23,8,8,13,15,17,21,24,24,23,21,20,14,13,13,12,15,18,18,20,20,18,18,9,9,13,15,19,22,24,24,24,21,20,14,13,14,14,15,18,18,20,20,19,19],
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
