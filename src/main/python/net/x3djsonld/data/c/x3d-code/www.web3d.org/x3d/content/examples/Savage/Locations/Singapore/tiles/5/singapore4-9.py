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
        texture=ImageTexture(url=['../../images/5/singapore4-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.247190112711976,103.71910330716118,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[42,30,17,7,3,2,2,2,3,3,2,0,2,5,7,6,6,6,6,6,9,15,19,19,19,19,15,5,0,1,4,7,9,11,12,10,8,50,42,28,13,6,3,2,3,3,3,3,2,5,9,9,6,5,5,4,4,5,11,16,18,20,22,19,9,2,4,5,7,9,10,10,9,8,53,48,34,18,10,5,3,3,4,4,3,4,6,10,10,7,4,4,3,3,4,9,13,16,19,22,21,11,4,6,7,8,9,9,9,9,9,53,49,36,22,13,6,3,4,4,4,4,4,5,8,7,6,5,3,3,4,5,8,12,16,19,20,18,10,4,7,8,8,7,6,6,7,8,53,49,38,25,14,6,4,4,4,4,4,4,5,6,7,6,5,3,3,4,5,7,11,16,18,18,16,10,7,10,12,9,6,4,4,5,7,53,50,39,27,16,6,4,4,4,4,4,4,5,5,6,5,4,3,4,5,6,9,12,16,18,16,14,13,13,16,15,8,3,3,4,5,6,53,50,41,29,17,7,4,4,4,4,4,4,4,5,5,5,4,4,4,5,7,10,14,16,17,15,14,15,16,18,16,7,1,2,5,6,7,53,50,41,30,18,7,4,4,4,4,4,4,4,4,4,5,4,4,5,7,9,13,16,16,16,15,15,13,13,14,13,6,2,3,6,8,10,53,50,43,32,19,8,4,4,4,4,4,4,4,4,4,5,4,4,6,9,12,16,17,16,16,15,14,11,9,9,8,5,4,7,11,13,14,53,51,45,35,21,8,4,4,4,4,4,4,4,4,4,4,4,5,7,12,16,17,17,16,15,12,9,6,4,1,1,4,8,16,23,20,17,53,51,47,40,26,11,5,4,4,4,4,4,4,4,4,4,4,5,8,14,17,17,16,15,13,8,4,1,0,-1,-2,3,11,22,30,25,18,52,52,50,45,35,22,13,6,4,4,4,4,4,4,4,4,4,6,9,14,17,16,15,11,7,3,0,-1,-1,0,1,6,12,18,23,20,15,51,52,52,50,43,32,20,9,5,4,4,4,4,4,4,4,5,7,10,13,15,14,12,7,2,0,-2,-3,-2,1,5,8,11,14,16,14,11,48,50,51,52,48,41,32,20,11,6,4,4,4,4,4,4,5,8,11,14,14,11,7,2,0,-2,-3,-1,0,4,8,10,11,11,10,10,9,46,48,50,52,52,50,42,30,19,10,5,4,4,4,4,5,6,9,12,14,12,6,1,0,-3,-3,-3,0,4,8,10,10,9,7,5,7,8,46,47,48,50,51,52,48,41,30,20,11,6,4,4,5,6,8,12,13,10,6,2,-1,-3,-3,-1,0,4,8,8,8,7,7,6,6,7,7,45,45,46,48,50,52,52,50,41,30,20,10,5,6,7,9,12,14,12,5,0,-1,-3,-3,-2,0,4,8,11,8,6,5,5,6,6,7,6,45,45,46,47,48,50,51,51,46,40,34,28,26,26,26,25,22,18,12,3,-1,-3,-3,-1,0,4,7,8,8,6,5,5,5,5,4,4,2,45,45,45,45,46,48,50,51,51,49,47,47,46,46,44,40,33,22,11,1,-3,-3,-2,0,4,8,10,8,5,4,4,4,4,3,2,0,0,42,45,45,45,46,48,49,50,49,49,48,48,48,47,46,43,40,33,21,5,-3,-1,0,4,7,8,8,6,4,4,3,3,3,2,1,0,0,39,44,46,46,46,47,47,48,48,48,48,48,48,47,47,47,47,45,32,8,-2,0,4,8,10,8,5,3,3,3,3,3,2,1,1,0,0,43,46,46,46,46,47,47,48,48,48,48,48,48,48,48,47,44,37,25,8,0,3,6,7,8,6,4,3,3,3,3,3,2,1,1,0,0],
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
