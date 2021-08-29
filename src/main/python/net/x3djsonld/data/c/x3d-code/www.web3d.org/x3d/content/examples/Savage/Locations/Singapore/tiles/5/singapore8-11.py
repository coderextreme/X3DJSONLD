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
        texture=ImageTexture(url=['../../images/5/singapore8-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2821169622239519,103.74782937541922,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[4,4,4,4,5,5,5,5,6,5,5,4,4,5,6,7,8,7,3,2,4,6,10,14,16,15,8,3,2,2,7,11,13,15,18,20,21,4,4,4,4,5,5,5,5,5,5,5,4,4,5,5,6,7,6,4,3,3,6,12,16,15,13,7,3,2,3,5,8,10,12,15,17,19,4,4,5,5,5,5,6,5,5,5,5,5,5,5,5,6,6,6,4,4,3,6,13,17,12,9,6,4,4,3,5,6,8,10,12,14,17,4,5,5,5,5,5,6,5,5,5,5,5,6,6,6,6,6,5,5,4,4,7,11,13,9,7,6,5,4,4,5,6,7,9,10,12,15,5,5,5,5,6,6,6,6,6,6,6,6,7,7,7,7,6,5,5,5,6,7,8,8,6,5,5,5,5,5,5,6,7,8,9,10,12,5,5,5,5,6,6,6,6,6,6,6,7,8,8,8,7,6,6,5,6,7,7,7,6,5,5,5,5,5,5,5,5,6,7,8,8,9,5,5,6,6,6,6,7,7,7,7,7,7,8,8,8,7,7,7,6,6,6,6,5,5,5,5,5,5,5,5,5,5,6,7,7,7,6,5,5,6,6,6,6,7,7,7,7,8,8,8,8,8,8,8,7,7,6,6,5,5,5,5,5,5,5,5,5,5,5,6,7,6,6,5,6,6,6,6,6,7,7,7,7,8,8,8,8,8,8,8,8,8,7,7,6,5,5,5,5,5,5,5,5,5,5,6,6,7,6,6,5,6,6,6,6,7,7,7,7,8,8,8,8,8,8,8,8,8,8,8,7,6,6,5,5,5,5,5,6,9,12,10,9,8,7,7,6,5,6,6,6,7,7,7,7,8,8,8,8,8,8,8,8,8,8,8,8,7,7,7,6,5,4,4,6,9,15,19,16,13,11,8,8,7,6,6,6,7,7,7,7,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,7,6,5,4,3,4,7,12,17,17,16,13,11,9,8,7,6,7,7,7,7,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,7,7,6,3,1,1,3,8,13,17,20,16,14,11,8,7,7,7,7,7,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,7,7,6,6,5,2,1,1,1,5,8,13,18,17,16,13,11,9,7,7,7,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,7,7,6,5,3,2,1,1,1,1,1,3,8,13,17,20,17,14,11,7,7,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,7,7,6,4,3,2,1,1,1,1,1,1,1,5,8,13,18,18,17,14,7,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,7,7,5,4,2,1,1,1,1,1,1,1,1,1,1,3,9,14,17,20,18,7,7,7,7,7,7,7,7,7,7,8,8,8,8,8,8,8,7,5,3,1,1,1,1,1,1,1,1,1,1,1,1,5,9,14,19,18,6,6,6,6,6,6,6,6,6,7,8,8,8,9,9,10,10,9,6,4,2,1,1,1,1,1,1,1,1,1,1,1,2,3,10,15,15,6,6,6,6,6,6,6,6,6,7,8,8,9,9,10,11,10,10,8,6,4,2,1,1,1,1,1,1,1,1,1,1,1,1,7,11,11,6,6,6,6,6,6,6,6,6,7,8,8,9,10,11,11,11,11,10,8,6,4,2,1,1,1,1,1,1,1,1,1,1,2,4,7,7,6,6,6,6,6,6,6,6,6,7,8,9,9,10,11,11,12,11,11,10,8,6,3,1,1,1,1,1,1,1,1,1,1,2,3,4,4,6,6,6,6,6,6,6,6,6,7,8,9,10,10,11,12,12,12,11,11,10,8,5,3,1,1,1,1,1,1,1,1,2,2,2,2,4],
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
