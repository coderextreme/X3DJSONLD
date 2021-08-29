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
        texture=ImageTexture(url=['../../images/5/singapore2-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.229726687955988,103.84837061432235,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[3,3,2,1,1,5,8,9,9,12,15,17,17,15,10,8,7,8,11,14,15,15,15,9,0,-8,-15,-13,-2,4,3,1,-1,-2,0,7,4,4,3,1,0,2,4,5,6,8,11,12,12,10,8,6,5,6,8,11,13,14,16,13,5,0,-5,-5,0,4,4,2,0,1,7,18,5,7,8,4,0,1,3,3,3,5,6,8,9,8,7,6,6,7,9,10,11,12,14,12,7,2,0,0,3,5,6,4,2,4,11,23,5,11,14,8,1,0,2,2,2,2,1,4,8,8,8,8,9,10,11,11,10,9,10,9,7,4,1,1,5,8,8,6,4,6,13,24,6,11,15,9,2,1,1,1,1,0,0,3,8,9,9,8,8,9,10,10,9,9,9,8,6,4,2,3,5,8,8,7,5,5,8,16,7,10,10,8,4,2,1,1,0,0,0,4,10,11,9,7,5,5,8,8,9,9,9,8,6,5,4,3,3,5,7,8,6,3,0,2,7,8,8,7,5,3,1,0,0,0,0,3,9,11,9,7,4,4,6,7,9,10,11,10,8,5,2,1,0,2,5,6,5,2,-1,-1,7,8,8,7,5,3,1,0,0,0,0,2,5,7,7,6,4,4,5,7,9,13,17,16,11,5,-1,-4,-2,0,1,4,5,4,1,-1,7,7,8,8,7,5,2,0,0,0,0,1,3,4,6,6,5,5,6,8,10,13,17,16,11,4,-2,-5,-4,-1,0,2,4,4,3,0,5,7,8,9,9,7,5,3,0,0,-1,0,0,1,3,4,5,7,9,10,11,11,11,10,9,5,0,-2,-2,-2,0,1,2,3,4,3,4,6,8,9,10,9,7,4,1,-1,-3,-2,0,0,0,2,6,9,11,12,12,10,8,6,5,3,1,0,-2,-2,0,0,1,2,4,3,3,6,7,8,8,9,9,6,2,-1,-4,-3,0,0,0,2,7,10,12,13,13,11,9,5,0,-2,0,0,0,0,0,0,0,0,0,0,2,5,6,7,7,9,9,6,2,-1,-4,-3,0,0,0,4,10,13,15,15,14,12,10,4,-3,-5,-3,-1,-1,0,0,0,0,0,0,0,2,3,5,6,6,6,6,3,0,-1,-3,-3,-3,-1,2,7,14,18,20,19,16,13,9,4,0,-3,-5,-5,-3,-1,0,0,0,0,0,0,1,2,3,5,5,5,3,1,0,0,-1,-3,-4,-1,3,10,17,21,22,20,16,12,9,5,2,-1,-5,-6,-5,-3,0,0,0,0,0,0,2,2,2,3,4,4,2,1,0,0,-1,-1,-1,0,5,10,15,17,18,16,12,11,11,9,5,1,-3,-6,-7,-5,-2,0,0,0,0,0,2,2,2,3,4,3,2,1,0,0,-1,-1,0,2,7,10,13,14,14,12,10,11,13,13,8,3,0,-3,-6,-6,-4,-1,0,0,0,0,2,2,4,6,7,5,3,1,0,0,0,0,1,5,10,12,13,13,12,13,16,18,17,15,14,10,5,0,-3,-4,-3,-1,0,0,0,0,2,4,6,8,9,7,5,3,0,0,0,2,5,8,13,14,13,12,11,14,21,22,20,19,19,16,11,5,0,-2,-2,-1,0,0,0,0,3,6,8,9,10,9,8,5,3,2,2,5,9,11,12,12,11,11,12,15,19,21,22,22,21,19,17,12,6,1,0,-1,0,0,0,0,4,7,10,11,11,11,10,8,5,5,5,8,13,13,12,11,10,11,14,16,18,20,23,24,23,22,22,19,13,7,1,0,0,0,0,0,3,5,7,9,10,11,11,9,8,8,9,11,12,12,11,11,11,12,14,16,18,20,23,24,24,24,23,21,19,14,9,4,1,0,0,0],
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
