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
        texture=ImageTexture(url=['../../images/5/singapore27-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4480194974058374,103.76219240954823,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[11,11,10,9,9,9,10,9,9,8,7,6,6,6,6,6,6,7,7,7,6,6,9,18,25,25,26,27,28,31,32,28,24,21,18,16,12,12,11,11,10,10,10,9,8,7,6,6,6,6,6,6,6,7,7,7,6,5,7,14,20,22,24,26,28,31,31,27,24,23,21,20,12,13,12,12,11,9,9,8,7,6,6,6,6,6,6,6,7,8,9,9,8,6,7,10,13,17,20,24,27,28,28,26,25,25,25,25,12,13,13,12,11,9,8,7,6,6,6,6,6,6,7,8,9,10,11,12,11,8,7,8,9,14,18,22,25,25,25,24,23,24,25,27,13,13,12,10,9,7,7,6,6,6,6,6,6,7,8,9,11,12,13,14,13,10,8,9,10,14,17,20,22,20,19,19,19,19,20,23,13,12,11,9,7,7,6,6,7,7,6,6,7,8,9,11,13,14,15,15,15,12,10,10,11,14,16,19,18,17,16,16,16,16,16,20,11,10,9,8,7,7,7,7,9,11,10,7,8,10,11,13,14,15,16,16,16,14,13,12,12,14,16,17,17,16,15,15,15,16,16,17,10,9,7,7,7,7,8,9,13,17,17,14,13,13,14,15,16,16,16,17,17,16,15,14,14,14,15,16,16,15,14,13,13,14,14,15,8,8,7,7,7,8,10,13,20,27,30,31,28,23,19,17,16,17,17,17,17,17,16,15,15,15,15,16,15,14,13,11,10,10,9,12,7,7,7,7,7,8,11,15,25,36,40,43,39,31,25,19,17,17,17,16,16,16,17,16,16,16,16,15,14,12,11,9,8,7,6,11,6,6,7,7,7,8,9,12,26,42,45,44,41,35,30,24,20,18,16,15,14,15,15,16,16,16,15,13,12,10,8,7,7,7,8,10,6,6,7,8,8,8,8,9,25,44,48,46,42,38,33,27,22,18,15,13,12,13,14,14,15,15,14,11,9,7,6,5,5,7,8,9,6,7,7,8,8,8,9,10,22,35,43,47,45,38,33,28,23,16,14,12,11,11,11,11,11,13,12,9,7,6,5,5,6,7,8,7,6,7,8,8,8,8,9,11,18,27,38,47,46,39,33,28,22,15,12,11,10,10,9,8,9,11,11,7,5,5,5,6,6,7,7,6,7,8,8,8,8,9,10,11,16,23,31,38,43,44,36,24,17,13,11,10,9,9,9,10,12,15,15,8,5,5,5,6,6,6,6,4,7,8,8,8,9,10,10,11,15,19,25,32,39,46,37,19,12,12,10,9,8,8,9,12,16,19,18,11,5,5,5,6,6,5,4,3,10,9,9,8,9,10,11,12,13,14,24,36,38,32,24,15,10,10,9,8,9,9,13,16,18,20,19,16,13,9,7,6,5,4,3,1,13,11,10,9,9,10,12,14,11,9,22,40,35,19,12,12,10,8,7,7,9,11,16,19,21,21,21,21,19,14,9,7,4,2,1,0,18,15,14,12,11,11,12,13,10,8,16,25,23,13,9,8,7,7,8,9,12,15,18,20,21,21,21,20,19,14,9,6,3,1,0,0,22,19,17,14,13,11,12,11,9,8,9,11,11,10,7,5,4,6,8,11,15,18,21,20,21,22,21,20,19,14,10,6,2,0,-1,-1,24,22,19,16,13,12,12,11,11,10,10,11,11,10,9,7,7,8,11,15,17,19,21,21,21,21,20,19,16,12,9,6,3,2,0,0,27,24,21,17,14,12,12,13,13,14,13,11,11,11,10,10,10,11,14,18,21,20,20,21,21,21,19,16,13,10,7,6,5,4,4,4],
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
