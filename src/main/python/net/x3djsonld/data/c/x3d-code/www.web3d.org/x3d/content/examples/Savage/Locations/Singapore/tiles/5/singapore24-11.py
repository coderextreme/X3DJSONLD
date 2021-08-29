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
        texture=ImageTexture(url=['../../images/5/singapore24-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4218243602718554,103.74782937541922,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[7,7,8,8,8,8,9,9,9,9,9,8,8,8,9,11,11,12,13,15,17,17,16,15,15,15,18,21,23,24,20,17,17,17,17,18,22,6,7,8,8,9,9,9,9,9,9,9,8,8,9,10,11,11,12,13,15,16,17,16,15,15,15,17,19,20,20,18,15,15,15,14,14,19,6,7,8,8,9,9,9,9,8,8,8,8,9,9,10,11,12,13,14,15,16,17,17,16,15,14,15,16,17,17,15,13,13,13,11,11,16,6,7,8,9,9,9,9,9,8,7,7,8,10,10,11,12,13,14,15,17,18,18,17,16,14,13,13,14,14,15,14,13,12,11,12,12,15,6,7,8,9,9,9,9,9,8,7,7,7,9,10,12,13,13,15,17,19,20,19,17,15,13,11,11,12,12,13,13,13,11,11,12,12,13,7,7,8,8,9,9,10,10,9,8,7,7,7,9,11,12,13,15,18,19,19,19,16,14,10,8,9,9,11,11,11,10,10,10,11,12,13,7,7,7,8,9,10,11,10,9,8,7,6,6,8,10,12,13,15,18,19,19,18,15,12,8,6,7,8,10,10,9,9,9,9,11,12,12,8,7,7,8,9,10,11,11,10,9,8,6,6,7,9,11,13,15,17,17,17,16,14,12,9,7,8,9,10,10,9,9,8,8,9,10,10,8,7,7,8,9,10,11,11,11,10,9,7,7,7,8,10,12,14,16,16,16,15,14,12,9,8,9,9,10,10,10,9,8,7,8,9,9,9,9,9,9,9,9,10,11,11,10,8,8,8,9,10,11,12,13,15,15,16,15,14,13,11,10,10,10,9,9,10,9,9,9,8,8,9,10,10,10,9,9,9,9,10,11,10,9,9,10,10,11,11,12,12,13,14,15,15,14,14,12,12,11,11,9,9,9,9,9,9,8,8,9,9,9,9,8,9,9,10,11,11,10,9,9,9,10,10,10,10,11,12,13,14,14,13,12,11,11,11,10,9,8,8,8,8,8,8,8,10,9,8,8,8,9,10,11,12,12,11,9,8,8,9,10,9,9,10,11,12,13,13,11,10,11,11,11,10,8,7,8,8,8,8,8,8,11,9,8,8,8,9,10,10,10,10,9,8,7,8,9,10,11,11,11,10,11,12,12,10,10,10,11,11,10,10,9,10,10,9,8,10,12,15,9,8,8,8,9,10,10,9,9,8,7,7,8,9,10,11,11,11,10,10,11,11,9,9,10,11,11,11,11,12,12,12,10,9,13,16,20,8,8,8,8,9,9,9,9,8,7,6,7,8,9,10,10,10,10,11,10,10,10,10,10,10,11,10,10,10,10,10,10,11,11,14,17,21,8,8,8,8,8,9,9,8,7,6,6,6,7,8,9,9,10,10,11,10,10,10,10,10,10,10,10,9,9,9,8,9,11,14,16,18,22,8,7,7,8,8,8,8,9,8,7,6,6,7,9,9,10,10,10,11,11,10,10,10,9,9,8,8,8,8,8,7,8,11,14,16,17,21,7,7,7,7,8,8,8,9,9,7,6,6,7,9,10,10,10,11,12,11,11,11,10,9,8,8,8,8,7,7,7,7,11,14,16,17,20,7,6,6,7,8,8,8,8,8,7,6,6,8,8,9,9,9,10,11,11,11,11,11,10,8,8,8,8,7,7,6,7,11,14,16,17,19,7,6,6,7,8,8,8,8,8,7,7,7,7,7,7,8,9,10,10,11,11,12,12,11,10,10,9,8,7,7,6,6,11,14,16,17,19,7,7,7,7,8,8,8,8,8,8,7,7,7,7,7,8,8,9,10,10,11,12,12,11,11,10,9,8,7,7,7,7,10,12,15,17,19],
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
