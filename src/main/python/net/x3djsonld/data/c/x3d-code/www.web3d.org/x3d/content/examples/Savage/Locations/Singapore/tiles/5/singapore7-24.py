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
        texture=ImageTexture(url=['../../images/5/singapore7-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.273385249845958,103.93454881909646,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[4,1,5,8,7,7,7,7,6,5,2,0,2,6,4,0,0,1,5,14,23,32,31,19,13,16,17,13,8,2,0,0,0,0,0,3,4,1,3,6,6,6,6,7,6,5,2,0,2,7,6,1,0,2,9,18,27,35,34,22,15,16,15,10,5,2,0,0,0,0,1,4,3,0,0,2,3,5,5,5,6,5,2,0,5,11,9,2,2,8,14,22,30,37,36,26,19,18,14,6,0,1,0,0,0,1,2,4,2,0,-1,-1,1,4,4,3,3,4,3,3,6,11,10,7,8,13,19,25,29,30,28,22,18,15,12,5,0,1,0,0,-1,0,3,4,1,-1,-5,-7,-2,2,1,0,1,4,4,5,7,10,12,14,15,17,22,27,27,19,14,13,12,12,10,5,1,1,1,-1,-3,0,3,3,3,0,-2,-5,-4,-1,0,0,1,5,6,6,7,10,11,12,15,20,25,28,25,13,7,8,9,9,7,3,0,0,0,-2,-3,0,3,4,5,4,2,0,-3,-6,-4,0,3,7,8,7,8,10,8,5,10,22,29,28,22,10,4,5,7,6,4,0,-1,-2,-3,-1,0,2,5,7,6,6,4,1,-2,-6,-4,0,4,9,10,9,11,13,10,6,12,25,29,26,19,8,3,6,7,4,2,0,-2,-4,-4,0,2,4,6,8,5,4,3,1,0,-2,-1,0,5,12,13,12,14,17,16,14,18,27,27,22,15,8,5,7,7,2,0,0,-1,-4,-4,1,6,6,6,6,4,3,2,1,0,0,0,2,8,14,15,14,15,17,19,20,23,27,26,20,15,10,8,10,9,3,0,0,0,-2,-3,3,9,8,7,4,4,3,3,2,2,1,2,5,11,18,19,16,14,14,18,24,27,26,24,22,18,16,14,13,11,7,3,2,1,-1,-2,4,9,9,8,5,3,3,3,3,3,3,5,7,13,18,17,14,13,12,16,22,24,24,23,21,19,16,14,13,11,8,5,4,2,0,0,6,11,10,9,6,1,2,3,4,4,5,7,9,11,13,12,10,11,13,14,15,17,21,22,20,17,12,9,9,8,5,3,3,2,0,1,8,13,11,8,7,1,2,3,4,5,7,9,11,11,10,9,7,10,13,12,10,12,17,20,17,14,9,5,5,5,3,2,3,4,3,4,11,16,12,10,8,2,3,4,5,7,9,11,13,13,11,9,7,9,12,12,8,9,13,15,14,12,9,5,3,2,3,4,6,7,7,8,14,18,15,13,11,4,4,5,7,8,10,12,14,14,14,11,7,8,12,12,9,8,9,10,10,9,8,5,0,0,2,5,7,9,10,12,15,16,13,12,12,7,9,9,10,9,10,11,14,17,18,14,9,9,12,12,11,9,8,7,5,5,6,3,-2,-4,0,3,6,9,14,16,12,8,7,7,11,11,13,13,13,10,7,9,13,16,18,15,10,10,12,12,12,9,6,4,3,3,4,2,-2,-5,-2,1,4,8,14,15,9,4,3,4,9,14,16,17,16,9,2,4,8,10,12,10,8,9,11,12,11,9,4,3,5,6,5,2,-1,-3,0,1,5,7,7,6,6,6,6,6,8,16,18,19,18,7,-1,0,2,4,6,6,6,8,11,12,11,7,3,3,6,7,5,2,0,-1,0,3,7,8,3,1,6,10,10,10,9,18,20,19,15,4,-3,-3,0,0,2,4,7,9,12,13,12,8,1,0,3,4,3,0,-1,-1,2,8,12,14,9,6,10,14,13,13,13,17,18,16,11,1,-6,-7,-5,-2,0,3,7,10,12,13,13,8,1,0,1,2,1,0,-1,0,5,11,16,18,12,10,13,15,14,14,15],
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
