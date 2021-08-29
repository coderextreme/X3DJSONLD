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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
        texture=ImageTexture(url=['../../images/5/singapore20-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3868975107598795,103.92018578496744,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[43,40,35,27,18,11,7,5,5,6,6,6,6,6,6,6,7,7,7,7,6,6,6,6,5,6,7,7,7,6,6,6,6,6,6,6,6,44,40,34,25,17,11,8,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,5,5,7,7,6,6,5,5,6,6,6,6,6,45,39,32,24,17,12,9,8,7,7,7,6,6,6,6,7,7,7,7,6,6,6,7,6,6,6,7,6,6,6,5,5,6,6,6,6,5,44,38,30,23,16,12,10,9,9,8,7,6,6,6,7,7,7,7,7,7,6,6,7,7,6,6,7,6,5,5,5,5,6,6,6,6,5,43,36,28,21,15,12,12,12,12,10,7,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,5,5,5,6,6,7,7,6,6,42,34,26,19,14,13,13,15,16,13,10,8,7,8,8,7,7,7,8,7,7,7,7,7,7,7,7,7,5,5,5,5,6,7,6,6,6,41,32,23,17,13,13,15,18,20,18,14,11,9,8,8,7,7,7,8,8,7,7,7,8,8,7,7,6,5,5,5,5,6,7,6,6,7,37,28,20,14,11,12,16,20,23,21,18,14,10,8,8,7,7,8,8,8,7,7,8,7,7,7,7,7,6,5,5,5,6,7,7,7,7,31,23,15,11,9,12,17,21,25,24,21,16,12,9,8,8,8,8,9,9,8,8,8,7,6,7,8,8,7,7,7,7,7,8,8,8,8,24,17,11,9,9,13,17,22,24,24,21,17,12,9,8,8,8,9,9,9,9,8,7,7,6,6,8,8,8,8,8,8,9,10,10,10,9,17,14,10,10,11,14,18,21,23,22,18,14,11,9,8,8,8,9,9,9,9,8,7,7,7,7,7,7,7,8,9,9,11,13,12,12,10,12,10,9,10,12,14,17,19,20,18,15,12,9,8,7,7,7,8,8,8,8,8,7,7,7,7,7,7,7,8,9,10,12,13,14,13,11,9,9,9,10,12,14,15,16,16,15,12,10,8,7,7,7,6,6,6,7,8,8,8,8,8,7,7,7,7,7,8,9,11,13,13,13,11,7,8,9,10,11,12,12,13,12,11,10,9,7,7,7,7,7,6,6,6,7,8,8,8,8,8,7,7,7,7,8,9,10,11,12,12,10,8,7,8,9,9,9,9,9,10,10,9,8,7,7,8,8,8,8,6,6,7,8,9,9,9,9,8,8,7,7,8,8,8,9,10,11,9,8,7,7,8,8,7,7,7,8,9,9,9,8,8,10,10,10,9,8,7,7,8,9,10,9,9,9,8,7,7,8,8,8,8,9,9,8,9,8,6,7,7,7,7,7,8,9,9,10,10,11,12,13,13,12,10,9,9,9,9,9,9,9,9,9,8,8,8,9,9,9,9,9,9,10,8,6,6,6,6,6,7,8,9,9,10,11,13,14,15,16,14,13,11,10,9,10,9,9,9,8,8,8,8,9,9,9,9,9,9,9,9,8,6,5,5,5,6,7,8,8,8,9,10,12,13,15,17,17,15,14,13,11,10,10,10,9,8,7,8,8,9,9,9,9,8,8,8,9,7,6,4,4,5,6,7,8,7,7,8,9,11,13,15,17,18,18,17,15,13,11,10,10,9,8,7,8,8,9,9,9,9,8,8,8,7,6,4,3,3,5,7,8,7,7,6,7,8,9,11,14,17,19,20,19,17,15,12,10,9,8,8,8,8,9,9,9,9,9,8,8,7,6,5,3,2,2,5,7,8,7,6,6,6,7,8,11,14,18,20,21,21,19,16,13,10,8,8,8,8,8,9,9,9,9,9,8,7,7,6,5,5,4,4,6,8,8,7,7,7,7,7,9,12,15,19,21,22,22,19,16,13,10,9,8,8,8,8,8,8,8,8,8,7,6,6],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])))])
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
