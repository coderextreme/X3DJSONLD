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
        texture=ImageTexture(url=['../../images/5/singapore27-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4480194974058374,103.83400758019333,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[7,7,10,13,13,13,12,11,10,10,8,6,7,10,9,7,7,8,8,7,7,8,7,5,5,5,5,6,8,10,10,8,7,6,6,6,6,7,7,10,14,15,15,13,12,11,11,9,7,7,9,8,6,6,7,6,5,5,7,7,7,6,5,6,8,10,13,13,10,9,9,9,7,6,6,7,11,15,17,17,14,12,12,13,11,9,8,9,8,7,6,6,4,3,3,6,7,8,8,8,8,10,11,12,12,9,9,12,13,12,11,5,7,11,16,17,17,15,12,12,14,12,11,10,9,8,7,6,6,4,3,4,6,7,8,8,9,10,10,11,12,12,10,10,13,14,14,13,5,6,10,14,16,18,16,12,12,13,13,12,10,8,7,6,6,6,6,6,6,7,7,6,6,8,9,10,11,14,14,12,11,12,11,10,10,5,6,9,12,16,18,16,12,12,14,14,13,11,8,7,6,6,7,8,8,8,8,7,5,5,8,9,9,10,13,15,13,12,11,11,10,10,6,6,8,10,14,17,15,12,13,15,16,16,14,10,7,5,6,8,8,9,9,8,7,6,6,7,8,8,8,11,12,12,12,13,14,15,15,6,7,7,10,14,17,15,13,14,16,16,17,15,11,7,5,6,8,9,9,9,8,7,6,6,7,7,7,7,9,10,11,12,14,16,18,19,8,7,8,10,13,16,16,15,15,16,16,15,13,11,9,6,7,9,9,10,10,9,8,7,7,7,6,6,6,7,8,9,9,12,15,18,21,8,7,8,10,12,14,15,15,15,16,14,13,13,12,10,8,8,10,10,10,10,9,8,8,7,7,6,6,6,6,7,7,8,10,13,18,21,8,8,8,9,10,11,12,14,15,17,15,12,13,15,13,10,9,10,9,7,7,8,9,8,7,7,7,7,7,6,6,6,7,10,13,16,17,9,8,8,9,9,10,11,14,16,18,16,12,13,17,15,11,10,9,7,5,6,9,9,8,8,8,9,9,8,6,5,5,6,9,12,13,14,9,7,8,10,11,12,15,18,19,20,17,13,13,14,12,9,8,7,5,4,5,8,9,8,8,9,9,10,10,8,7,7,8,9,10,11,11,9,7,8,10,13,15,18,20,21,21,18,13,12,11,10,8,7,5,4,4,5,8,9,9,9,9,10,10,10,10,9,9,9,9,8,8,8,12,9,8,9,13,15,17,18,17,16,13,9,9,8,7,6,6,5,5,5,7,10,10,10,10,9,9,9,10,9,9,8,8,7,7,7,8,15,12,10,9,13,16,17,16,13,11,9,7,6,5,5,5,5,6,7,7,9,11,11,11,10,8,8,8,9,8,8,7,7,6,6,7,9,19,17,14,13,15,18,18,15,12,9,7,6,6,6,7,8,9,9,9,9,10,11,11,11,9,8,7,7,8,8,8,7,7,8,9,9,10,23,21,18,16,18,20,18,15,12,8,7,6,6,7,9,11,12,12,12,12,11,11,11,9,8,7,7,7,8,8,8,8,9,11,12,12,11,25,23,22,21,20,20,19,16,13,10,8,7,7,8,10,12,14,15,15,14,13,12,10,8,7,7,7,8,8,8,9,10,11,11,12,11,11,26,25,25,25,23,21,19,17,15,12,10,9,8,8,11,14,16,18,17,15,13,11,9,7,6,6,7,8,9,10,11,12,12,12,11,10,10,28,27,27,27,25,21,18,15,14,13,12,11,10,9,10,11,13,15,16,16,16,14,12,10,8,7,7,8,10,11,11,12,11,9,8,8,9,30,29,30,30,27,22,18,14,13,14,14,13,11,10,10,9,10,13,15,18,18,17,15,13,10,8,7,8,10,11,12,10,8,6,5,7,9],
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
