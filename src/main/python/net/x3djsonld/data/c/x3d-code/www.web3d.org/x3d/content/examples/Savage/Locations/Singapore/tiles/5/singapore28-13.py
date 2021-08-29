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
        texture=ImageTexture(url=['../../images/5/singapore28-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4567512097838313,103.77655544367725,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[4,4,4,4,2,1,0,0,2,4,8,14,14,14,14,14,14,14,14,15,15,12,11,12,12,11,10,10,10,11,11,12,14,17,20,25,29,5,5,5,4,3,2,2,1,5,9,11,15,14,14,14,14,14,14,15,16,14,12,10,10,10,9,9,9,10,10,12,14,16,19,21,24,27,5,5,5,5,4,4,4,4,9,14,14,14,14,14,14,14,15,16,15,15,13,12,10,8,7,7,8,9,10,11,13,16,18,21,23,24,23,5,5,5,5,5,5,5,6,10,15,14,14,14,14,14,15,16,16,15,13,12,10,8,7,6,6,7,8,10,11,13,16,20,22,23,23,22,5,5,5,5,5,5,5,7,10,14,14,14,14,14,15,16,16,15,14,12,10,8,7,6,5,4,5,8,10,11,13,17,21,22,23,22,20,5,5,5,5,5,5,6,6,10,14,14,14,14,15,16,16,16,14,12,10,8,7,6,5,5,4,5,8,10,10,11,15,20,21,23,22,20,5,5,5,5,5,5,5,5,9,13,14,14,15,16,16,16,15,13,11,8,7,6,5,4,4,4,5,7,8,8,9,13,16,19,22,21,20,5,5,5,5,5,5,5,5,8,12,14,15,16,16,16,15,13,11,9,7,6,5,4,4,4,4,5,6,7,7,6,7,9,14,18,18,17,5,5,5,5,5,5,5,5,7,10,13,15,16,16,15,13,11,9,7,6,5,4,4,4,4,4,5,6,7,6,4,1,1,8,14,13,13,5,5,5,5,5,5,5,5,7,10,12,14,15,15,13,11,9,7,6,5,4,4,4,4,4,5,6,6,5,3,2,0,0,5,11,11,11,5,5,5,5,5,6,6,7,8,10,11,12,12,12,11,10,8,6,5,4,4,4,4,4,5,5,6,4,2,0,0,0,2,5,9,9,9,6,7,7,6,6,7,7,8,9,10,11,11,12,11,10,9,7,6,4,4,4,4,4,5,5,5,4,2,0,0,0,0,3,5,8,8,9,9,9,10,10,8,7,8,8,9,10,11,11,12,12,11,10,7,5,4,4,4,4,5,5,6,4,2,0,0,0,0,1,3,6,8,8,8,10,10,11,10,8,8,8,9,10,11,11,12,12,11,11,10,8,5,4,4,4,5,5,5,4,2,0,0,0,0,0,3,5,6,8,8,7,11,11,10,9,8,7,8,9,10,11,12,12,11,11,11,11,9,7,6,5,5,5,6,4,2,0,0,0,0,0,2,5,7,7,7,7,6,11,11,9,7,7,7,8,10,11,12,11,11,11,11,11,11,10,8,8,7,6,6,5,2,0,0,-1,0,0,2,4,6,7,7,7,6,6,10,9,7,6,6,7,9,10,11,11,11,10,10,10,10,10,10,9,9,10,8,7,4,0,0,-1,-1,0,1,4,6,7,7,7,6,6,6,9,8,6,4,6,7,9,11,11,11,10,10,10,10,10,10,10,11,11,12,11,7,4,0,0,0,0,2,4,6,7,7,7,6,6,6,5,9,8,6,3,5,6,9,11,11,10,10,9,9,9,10,10,11,12,13,15,13,9,6,3,1,1,2,5,6,7,7,7,6,6,6,5,5,10,10,7,4,5,6,8,10,10,9,9,9,9,9,10,11,12,13,15,16,14,10,8,5,4,4,4,6,7,7,7,6,6,6,6,5,5,11,11,9,7,6,5,6,7,7,8,8,8,9,9,10,12,13,15,16,15,13,11,9,7,6,6,5,6,7,7,6,6,6,6,5,5,5,13,12,11,9,7,5,6,6,6,7,8,8,9,10,12,13,15,16,16,14,12,11,9,8,8,7,6,7,7,6,6,6,6,5,5,5,6,14,12,11,9,9,8,7,6,6,7,8,9,10,12,13,15,16,15,14,12,11,11,10,9,9,8,7,7,7,6,6,6,5,5,5,7,8],
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
