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
        texture=ImageTexture(url=['../../images/5/singapore9-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2908486746019459,103.99200095561254,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[1,2,3,4,8,11,12,13,11,9,1,-7,-4,0,2,3,1,-2,2,12,13,10,6,3,2,4,7,9,9,4,0,0,0,1,3,5,-1,0,0,2,4,5,6,6,6,6,0,-8,-5,0,2,4,3,1,3,8,9,7,6,5,5,7,9,10,9,5,1,0,0,0,2,6,-7,-4,-1,0,0,1,2,2,4,5,3,0,0,1,5,9,10,10,7,3,2,3,4,6,8,10,10,8,6,4,2,0,0,0,1,6,-6,-3,-2,0,0,-1,0,0,2,5,7,8,6,3,6,11,15,18,17,12,8,3,3,6,9,12,11,6,3,3,3,0,0,0,1,7,0,1,0,0,-2,-4,-3,-1,0,2,7,13,11,6,6,10,17,26,31,35,26,9,3,5,9,12,12,5,1,4,6,3,1,0,0,7,4,1,0,-2,-4,-6,-4,-2,0,4,10,15,12,6,4,5,13,24,33,40,31,11,1,1,3,8,9,3,1,6,8,6,4,3,3,9,2,-3,-4,-5,-7,-7,-4,0,4,10,13,15,10,4,1,-1,4,14,21,27,21,7,0,-5,-5,0,3,3,5,8,10,7,6,8,10,13,-1,-10,-9,-8,-7,-5,-1,2,8,13,13,11,7,1,0,-2,0,6,12,17,15,7,-1,-11,-13,-8,-2,3,8,11,12,10,9,12,15,13,-7,-20,-15,-9,-4,1,3,5,8,13,9,5,2,1,0,0,2,3,9,18,17,10,0,-13,-19,-16,-8,2,10,13,14,14,14,15,13,6,-7,-21,-15,-8,0,6,7,6,8,10,5,0,0,2,5,8,7,4,8,17,17,12,1,-12,-19,-18,-11,1,10,13,16,18,20,19,15,4,0,-11,-7,-4,1,7,7,6,5,5,3,1,3,7,12,18,15,9,8,9,9,8,2,-5,-10,-10,-7,0,6,12,18,22,26,25,22,12,6,-2,-1,0,2,5,4,4,2,1,2,4,7,11,17,21,18,11,7,3,3,4,3,0,-1,-3,-3,0,3,11,17,24,29,29,26,17,5,2,2,3,3,2,1,1,1,2,5,7,10,13,13,11,9,7,4,3,2,3,3,2,1,0,0,-1,0,8,15,23,28,26,23,15,1,5,5,5,3,0,0,0,3,5,8,10,12,14,10,3,1,2,2,3,3,2,2,2,2,0,0,-1,0,6,13,19,23,20,16,9,0,8,7,5,3,0,2,4,8,13,11,9,12,15,12,6,3,0,0,2,1,0,0,0,1,0,0,0,1,6,11,13,13,10,6,0,0,12,8,4,3,0,5,8,13,18,13,8,11,15,14,11,6,0,0,0,0,-1,-1,0,0,1,1,2,3,7,9,8,5,3,0,-6,3,10,6,2,2,2,6,11,12,14,10,6,9,13,13,13,8,3,0,0,-1,-3,-2,1,4,5,5,4,4,8,10,8,6,7,5,0,5,8,4,1,2,4,8,12,10,7,6,4,6,9,11,12,9,6,2,-1,-3,-5,-1,4,9,9,9,6,5,8,10,9,10,13,13,8,6,7,6,3,5,7,10,12,9,5,3,1,3,6,8,11,10,7,3,-2,-4,-4,0,7,12,11,9,7,6,7,8,9,11,16,17,11,7,8,7,6,8,10,11,12,9,5,2,0,1,2,5,9,9,7,2,-3,-4,-2,1,10,13,11,9,8,7,6,6,9,12,17,18,12,7,8,6,3,6,8,9,10,9,9,4,0,0,0,3,7,6,2,0,-3,-2,0,5,12,13,11,9,7,6,6,7,8,11,14,16,12,6,8,3,0,2,7,6,5,9,13,8,2,0,0,2,6,3,-1,-3,-3,0,3,8,13,13,11,8,6,5,6,7,8,9,11,13,12],
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
