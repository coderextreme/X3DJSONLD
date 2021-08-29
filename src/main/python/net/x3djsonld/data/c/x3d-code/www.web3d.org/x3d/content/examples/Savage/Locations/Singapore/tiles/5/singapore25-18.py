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
        texture=ImageTexture(url=['../../images/5/singapore25-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4305560726498494,103.84837061432235,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[10,11,12,13,13,13,12,11,9,9,9,11,14,16,18,20,23,25,27,28,29,28,26,22,18,14,9,7,7,8,8,9,11,11,11,11,10,10,10,11,11,11,11,11,10,9,9,11,15,17,20,22,24,28,31,32,32,31,30,26,21,15,10,8,8,8,7,7,7,8,9,10,11,10,10,11,10,10,10,10,9,8,9,12,16,19,20,23,25,28,32,33,34,33,32,28,22,16,11,8,8,9,7,7,7,8,9,10,11,11,11,11,10,9,8,8,8,8,9,12,17,19,21,23,24,28,32,34,35,34,33,29,23,17,11,9,9,9,8,8,8,9,10,11,12,11,11,11,10,9,8,8,8,8,9,13,17,20,22,23,25,28,32,34,34,34,32,28,23,17,12,10,10,9,8,8,8,9,10,10,12,11,11,10,10,9,8,7,7,8,10,13,17,20,22,25,26,29,33,34,33,32,30,26,21,16,12,10,10,9,8,7,7,7,9,9,12,11,10,9,9,8,7,7,7,8,10,12,15,18,21,24,25,27,31,32,32,31,29,25,20,15,12,10,9,9,8,7,7,7,8,8,11,10,9,8,8,7,7,6,6,8,10,12,14,16,19,20,20,23,27,29,30,29,28,24,17,13,10,9,9,8,7,7,7,7,7,8,11,10,9,8,7,7,7,6,6,7,9,11,13,15,17,18,19,21,25,27,29,28,26,22,15,11,9,9,9,8,7,7,7,7,7,8,10,10,10,9,8,8,9,7,6,6,7,9,12,14,16,17,19,21,25,27,28,27,25,21,14,10,9,9,9,8,8,8,8,8,8,7,10,9,9,9,8,8,9,7,5,4,5,7,10,12,14,16,18,21,24,26,27,25,22,18,13,11,10,10,10,9,8,8,8,8,7,7,9,8,8,7,7,8,9,7,5,4,3,4,6,8,11,14,16,19,21,23,24,22,18,14,12,11,11,11,11,10,9,8,8,7,7,6,9,8,7,7,7,8,8,7,6,4,2,2,3,5,8,11,14,17,19,20,21,19,15,13,12,12,11,11,12,10,8,7,7,7,6,6,11,8,7,7,7,7,8,8,8,6,4,4,4,5,6,8,11,14,16,18,19,17,15,13,13,12,11,11,11,10,8,7,6,6,6,6,12,9,7,7,7,7,7,8,8,7,5,4,4,4,5,6,9,12,14,16,16,16,14,14,13,12,11,10,10,9,7,6,5,5,5,6,13,10,8,8,8,7,6,6,7,6,4,3,4,5,5,6,9,11,14,15,15,15,14,14,13,12,10,9,8,7,5,4,4,4,5,5,13,11,9,9,9,7,5,5,6,5,3,3,4,5,5,7,9,11,13,13,13,13,13,13,13,12,10,8,6,5,3,3,3,3,4,5,14,12,11,11,10,9,8,7,7,5,4,4,4,5,6,7,9,10,11,11,11,11,12,12,11,11,10,8,7,5,3,2,2,3,3,4,14,13,12,11,11,10,10,9,7,6,5,5,5,6,7,8,9,9,9,9,8,8,10,10,10,9,9,8,6,4,2,1,1,2,3,3,13,12,11,10,10,10,11,11,11,9,7,7,8,8,7,7,9,9,8,7,6,7,8,8,8,8,6,4,1,0,0,0,0,1,2,3,11,11,10,10,10,10,11,12,12,11,9,10,11,10,6,7,9,8,6,6,6,6,6,6,7,6,4,1,-1,-2,-1,0,0,0,1,2,9,9,9,9,10,10,9,9,9,9,8,10,13,10,3,3,7,8,6,6,6,6,5,3,2,2,3,2,0,-1,-2,-2,-1,0,0,0,8,8,8,9,10,10,9,9,8,8,8,10,13,9,2,2,7,7,6,5,6,5,3,1,-1,0,2,3,1,0,-2,-3,-3,-2,-1,0],
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
