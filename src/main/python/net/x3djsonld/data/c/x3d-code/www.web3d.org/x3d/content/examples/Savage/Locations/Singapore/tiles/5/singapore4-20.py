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
        texture=ImageTexture(url=['../../images/5/singapore4-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.247190112711976,103.87709668258039,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[-7,-10,-6,1,11,18,18,14,12,10,9,10,15,21,18,9,5,4,6,9,9,6,5,4,8,15,17,15,14,16,19,22,23,21,19,17,-17,-18,-10,-1,6,10,11,9,8,7,5,4,8,13,14,10,7,6,6,6,5,2,2,5,8,15,17,13,12,16,19,18,17,16,16,17,-21,-20,-12,-3,1,4,5,6,8,8,7,6,8,12,13,11,9,6,5,4,3,1,1,4,9,15,16,12,10,13,14,13,12,12,14,16,-17,-19,-13,-6,-2,0,2,5,10,14,16,16,16,15,14,11,9,7,5,5,3,0,2,5,9,14,15,10,7,7,7,7,7,9,11,15,-12,-16,-13,-8,-5,-3,0,3,10,16,20,22,21,18,15,12,9,6,6,6,6,5,5,8,11,14,15,10,7,3,2,3,4,6,9,16,-6,-13,-13,-11,-8,-5,-3,0,6,15,21,24,23,20,17,12,9,6,6,8,11,14,15,15,15,16,15,12,8,3,1,2,3,4,9,19,-4,-11,-12,-10,-7,-4,-3,0,6,16,21,23,22,20,16,12,8,6,6,8,12,18,20,18,17,16,15,12,8,3,1,1,2,4,9,19,-5,-11,-9,-5,-2,0,0,4,13,21,23,20,18,16,13,11,8,5,5,6,9,15,17,17,16,15,12,7,4,2,1,1,2,5,9,17,-3,-6,-3,0,2,4,5,8,16,23,21,15,12,11,10,9,7,6,5,5,7,12,14,15,15,14,11,4,1,2,2,2,2,5,9,14,4,4,6,8,10,11,11,11,13,15,12,7,5,7,7,6,6,6,7,7,8,11,12,12,12,12,10,5,2,2,2,2,2,5,8,12,11,14,14,15,16,16,13,10,7,5,1,-1,0,2,4,4,5,7,8,9,9,10,10,10,10,10,9,6,4,3,2,2,2,3,6,13,12,14,15,15,15,13,9,3,-4,-11,-12,-10,-5,-1,0,1,3,5,7,9,10,10,10,12,11,10,9,6,5,4,3,3,2,2,6,19,13,14,15,15,13,10,5,-2,-14,-26,-25,-18,-11,-5,-1,0,2,4,6,8,9,9,10,12,12,10,8,7,7,6,5,4,3,2,7,24,11,12,14,14,11,8,3,-2,-17,-31,-33,-28,-19,-9,-3,0,1,2,2,3,4,5,6,7,8,8,8,9,9,8,6,4,3,4,11,28,9,11,12,12,9,5,1,-5,-19,-33,-38,-35,-26,-13,-5,0,1,0,0,0,0,1,2,2,4,6,8,10,11,10,9,5,4,7,16,31,8,9,10,10,7,1,-7,-16,-24,-30,-35,-35,-26,-12,-4,0,1,2,2,2,1,1,1,2,3,6,8,10,11,12,12,10,11,17,25,33,7,8,8,7,4,-2,-14,-27,-28,-25,-29,-33,-24,-8,-1,0,1,3,4,2,1,0,0,1,3,6,8,10,12,13,14,15,18,26,32,34,7,6,5,4,3,0,-8,-18,-20,-17,-14,-10,-4,1,1,0,0,0,-1,-5,-4,0,1,1,3,8,11,12,12,13,15,20,25,29,32,33,6,5,4,3,3,2,-3,-9,-11,-8,0,10,13,11,6,0,-2,-3,-7,-13,-10,0,3,2,4,10,13,13,13,12,15,25,31,32,32,32,5,4,3,3,3,2,0,-3,-4,-2,2,9,15,18,13,3,0,0,-4,-11,-10,-3,2,5,10,16,17,15,14,12,14,22,26,26,27,29,4,4,4,3,3,3,3,2,1,1,3,6,15,25,21,8,2,1,-2,-10,-11,-6,0,9,16,21,22,18,15,13,14,18,21,21,22,26,5,4,4,4,4,4,3,3,2,2,2,2,4,4,4,2,1,1,0,-5,-6,-3,0,7,15,25,30,29,25,19,15,17,18,19,20,23],
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
