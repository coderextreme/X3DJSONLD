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
        texture=ImageTexture(url=['../../images/5/singapore4-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.247190112711976,103.84837061432235,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[3,4,4,4,4,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,2,5,8,10,13,15,17,15,9,3,-1,-4,-4,-4,4,4,4,4,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,2,2,4,7,10,12,11,8,2,-1,-3,-4,-5,-5,4,4,4,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,2,5,9,10,9,5,0,-3,-4,-4,-5,-5,4,4,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,2,5,10,11,10,6,0,-3,-5,-5,-5,-3,4,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,7,12,15,15,10,4,0,-2,-3,-3,0,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,8,13,19,22,22,19,14,8,3,1,1,4,3,3,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,8,13,18,24,27,27,25,22,16,11,8,8,11,3,3,4,4,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,5,8,13,20,23,26,27,28,27,25,23,20,18,16,16,3,4,5,5,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,9,13,19,24,27,27,27,28,27,27,27,26,24,22,20,7,7,6,6,6,6,6,5,5,5,5,5,4,4,4,4,4,4,4,6,9,14,19,23,26,27,28,28,28,28,27,26,26,25,23,21,10,9,8,7,7,7,7,6,6,6,6,5,5,5,5,5,5,5,6,10,14,19,24,27,27,28,28,28,28,27,26,26,26,26,26,24,9,9,9,9,8,8,7,7,7,7,6,6,6,6,5,5,5,7,10,15,20,24,26,27,28,28,28,28,27,26,26,26,28,30,32,30,8,9,10,10,9,8,8,8,8,7,7,7,7,6,6,6,6,10,15,20,25,27,27,28,28,28,28,27,26,26,26,28,30,34,37,35,7,8,9,10,10,10,9,9,8,8,8,8,7,7,7,9,11,15,20,24,27,27,28,28,28,28,27,27,26,26,28,31,34,37,39,35,6,7,8,10,11,10,10,9,9,9,9,8,8,8,8,12,16,21,25,27,27,28,28,28,28,27,26,26,26,28,30,34,37,40,40,35,6,7,7,8,9,10,10,10,10,10,9,9,9,11,13,17,21,25,27,28,28,28,28,28,27,27,26,26,28,31,34,37,39,40,41,35,6,6,7,7,8,10,11,11,11,10,10,10,10,13,17,22,26,27,27,28,28,28,28,27,26,26,26,27,30,34,38,40,40,40,41,35,6,6,6,7,7,9,10,11,11,11,11,12,15,18,22,25,27,28,28,28,28,28,27,27,26,26,28,30,34,37,39,40,41,41,41,35,6,6,6,6,7,7,8,10,11,11,11,14,19,22,26,27,27,28,28,28,28,27,26,26,26,27,30,34,38,40,40,40,41,41,41,35,5,6,6,6,6,7,8,10,13,15,17,19,22,25,27,28,28,28,28,28,27,27,26,26,28,30,34,37,39,40,41,41,41,41,41,35,5,5,6,6,6,6,8,12,17,20,22,24,26,27,27,28,28,28,28,27,26,26,26,27,30,34,38,40,40,40,41,41,41,41,41,35,17,17,17,17,17,17,18,20,22,24,25,26,27,28,28,28,28,28,27,27,26,27,28,30,34,37,39,40,41,41,41,41,41,41,41,35],
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
