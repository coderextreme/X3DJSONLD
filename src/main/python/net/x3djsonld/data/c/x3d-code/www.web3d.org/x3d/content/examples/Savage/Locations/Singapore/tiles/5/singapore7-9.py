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
        texture=ImageTexture(url=['../../images/5/singapore7-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.273385249845958,103.71910330716118,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[11,9,7,5,3,2,3,4,6,8,10,11,9,7,6,7,7,7,6,5,4,4,5,7,8,9,10,13,15,15,15,15,13,11,9,10,11,10,9,8,6,5,4,4,5,6,8,8,8,7,6,6,6,7,9,8,6,5,5,5,8,10,10,11,13,15,15,14,14,13,12,11,11,12,10,9,9,9,8,7,6,5,5,7,6,5,5,6,6,6,6,9,10,7,5,5,6,8,11,12,12,13,13,14,13,11,10,11,12,11,11,10,10,10,10,9,8,7,6,6,7,6,5,6,7,6,5,5,7,8,6,5,5,5,8,10,12,12,12,12,12,12,10,9,11,12,10,10,10,10,11,11,10,9,8,8,7,7,7,7,6,6,5,4,4,5,5,5,5,5,5,7,9,11,11,10,10,10,10,10,10,11,12,10,8,9,9,9,9,9,9,9,8,7,7,7,7,7,7,7,5,4,3,3,4,5,5,6,8,9,10,10,9,8,8,8,10,11,11,11,9,8,9,7,6,6,7,8,8,7,6,6,6,7,9,10,9,6,4,2,2,4,5,6,7,8,9,9,8,7,6,6,8,11,13,12,10,8,8,8,5,5,5,6,8,8,7,6,6,6,6,8,9,9,6,4,3,3,5,6,6,7,9,9,9,9,6,5,6,8,11,14,12,10,8,8,7,6,5,5,6,8,8,8,7,6,5,5,6,7,7,6,5,4,4,5,6,7,7,9,10,10,9,7,5,6,8,12,14,12,10,8,7,8,7,7,6,7,8,8,8,7,6,5,5,5,6,6,7,7,6,5,6,6,7,8,11,12,11,10,7,5,6,8,10,12,10,8,6,5,10,9,9,9,8,7,7,7,7,6,5,5,5,6,7,8,9,7,6,7,7,8,9,13,14,13,10,7,5,6,7,8,9,7,4,4,4,10,10,10,10,8,6,6,6,6,6,5,5,6,6,8,10,10,8,7,7,8,10,12,14,14,12,10,7,6,6,6,6,5,2,0,0,1,10,11,10,9,7,5,4,4,3,4,4,4,5,7,9,12,11,9,7,8,9,13,14,13,12,10,9,7,7,7,6,4,1,-2,-6,-3,0,9,11,10,8,6,5,4,3,3,4,4,4,6,8,10,12,12,10,9,9,11,13,14,12,11,9,8,8,8,6,4,2,0,-5,-9,-6,-2,8,10,9,7,6,5,5,4,5,6,6,6,8,9,10,11,11,11,11,13,12,10,9,9,10,9,8,8,7,3,0,-1,-3,-5,-7,-8,-6,7,9,8,7,6,6,6,6,7,8,9,9,9,10,10,10,10,12,13,14,12,7,5,7,8,7,6,6,4,0,-5,-6,-6,-6,-6,-8,-8,8,9,8,7,8,10,9,8,9,10,11,11,10,8,8,8,10,13,14,12,9,6,4,5,5,3,1,1,0,-6,-11,-11,-11,-8,-6,-6,-6,9,9,8,8,11,14,13,11,10,11,12,11,9,7,6,6,9,12,13,9,6,5,4,3,2,0,-2,-4,-8,-15,-20,-19,-18,-12,-8,-6,-4,11,10,10,10,16,21,19,13,10,9,8,7,7,5,5,5,7,8,8,5,3,5,5,4,2,-1,-6,-13,-21,-29,-34,-30,-26,-21,-15,-10,-4,13,11,11,13,19,24,21,14,9,6,4,4,4,3,3,4,5,4,4,2,2,4,5,4,2,-2,-8,-20,-31,-38,-43,-39,-34,-28,-21,-12,-4,11,10,10,11,15,17,14,9,5,3,2,2,2,1,2,4,5,2,1,3,3,3,3,3,2,-1,-8,-20,-31,-38,-42,-42,-39,-29,-19,-8,0,10,8,8,9,9,8,5,2,1,0,0,0,0,0,0,4,5,2,1,4,4,2,2,3,2,0,-6,-16,-25,-31,-35,-38,-37,-26,-13,-3,4],
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
