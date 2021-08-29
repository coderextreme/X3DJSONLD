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
        texture=ImageTexture(url=['../../images/5/singapore5-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.25592182508997,103.71910330716118,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[43,46,46,46,46,47,47,48,48,48,48,48,48,48,48,47,44,37,25,8,0,3,6,7,8,6,4,3,3,3,3,3,2,1,1,0,0,47,47,47,47,47,47,48,48,48,48,48,48,48,48,48,46,40,27,17,8,4,6,7,6,5,4,3,3,3,3,3,2,2,1,1,0,0,43,47,48,48,48,48,48,48,48,48,48,48,48,47,44,37,28,18,10,6,4,6,6,5,4,3,3,3,3,3,2,2,2,1,1,0,0,37,46,48,48,48,48,48,48,48,48,48,48,48,46,39,27,17,9,5,4,4,5,6,5,4,3,3,3,3,2,2,2,2,1,1,0,0,29,37,43,46,48,48,48,48,48,48,48,47,43,38,28,18,11,6,4,4,5,6,6,6,5,4,3,3,2,2,2,2,1,1,1,0,0,20,28,37,45,48,48,48,48,48,48,48,46,39,27,17,10,5,4,4,5,6,7,7,7,7,6,5,3,2,2,2,1,1,1,1,0,0,15,21,29,38,43,46,48,48,48,47,43,38,29,19,11,6,4,4,5,6,7,7,8,8,7,7,6,4,2,2,1,1,1,1,0,0,0,12,15,21,28,37,45,48,48,48,46,39,28,18,11,6,4,4,6,6,7,7,8,8,8,8,8,8,6,4,2,1,1,1,0,0,0,0,12,13,16,22,30,38,43,45,44,39,30,20,12,7,5,5,6,7,7,7,8,8,8,9,9,9,8,7,6,4,2,1,1,0,0,0,0,11,11,13,16,21,29,37,43,39,29,20,13,7,5,5,7,8,8,8,8,8,8,8,9,9,9,8,8,8,6,4,2,1,0,0,0,0,11,11,11,14,17,23,29,34,30,22,15,9,7,7,8,9,9,9,8,8,8,9,9,9,9,9,9,9,8,6,4,3,2,1,1,2,3,11,10,10,12,15,19,21,22,20,17,12,7,6,9,10,11,11,9,8,8,8,9,9,9,9,9,9,8,7,6,5,4,3,2,2,4,8,11,8,8,9,12,14,15,14,14,12,10,7,9,13,14,12,10,8,8,9,9,9,9,9,9,9,8,7,6,6,5,4,4,3,3,8,13,11,6,5,5,7,9,10,11,10,9,8,8,12,18,18,12,9,8,8,9,9,10,10,10,10,9,8,7,6,5,5,5,4,3,5,12,20,11,6,6,6,6,7,8,9,8,7,7,8,12,17,17,12,9,10,11,11,11,12,12,11,10,9,7,6,5,5,5,5,4,4,5,12,18,8,8,9,10,10,8,8,8,7,7,7,8,9,11,11,12,12,12,14,15,16,15,14,12,10,8,6,5,5,5,5,4,4,4,5,7,10,8,9,10,11,10,7,7,8,7,7,7,8,7,7,9,11,14,17,19,19,18,16,14,11,8,7,5,5,5,5,5,4,4,5,5,6,6,8,9,10,10,8,6,6,7,7,7,8,8,7,7,7,10,15,22,24,21,18,15,12,9,6,5,5,5,5,4,4,5,5,5,6,6,6,10,10,10,10,8,6,6,7,7,8,8,7,6,5,5,8,12,20,22,19,15,13,10,7,5,5,5,5,5,4,4,5,6,6,6,7,6,11,12,12,11,9,7,7,8,8,8,8,6,4,3,2,4,6,11,13,12,11,9,7,5,5,5,5,4,4,4,5,6,7,7,7,7,7,12,13,12,11,9,8,8,8,9,8,7,5,3,2,1,1,2,4,5,7,8,6,5,5,5,5,4,4,4,5,5,7,7,8,7,7,7,12,12,11,10,9,8,8,9,8,7,6,4,3,3,2,1,0,0,1,5,6,5,4,4,4,4,4,4,4,5,5,7,8,8,8,7,7,11,11,10,10,9,8,8,9,8,7,6,4,5,5,4,3,1,0,0,3,4,4,4,4,4,4,4,4,4,5,5,7,8,8,8,8,7],
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
