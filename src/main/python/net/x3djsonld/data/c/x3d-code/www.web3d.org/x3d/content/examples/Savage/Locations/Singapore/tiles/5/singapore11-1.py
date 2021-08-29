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
        texture=ImageTexture(url=['../../images/5/singapore11-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3083120993579338,103.60419903412902,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[4,7,8,9,9,9,9,8,8,8,8,8,8,8,8,7,6,5,3,2,0,0,0,0,0,0,0,-3,-9,-19,-27,-31,-33,-31,-28,-25,-23,6,9,9,9,9,9,9,8,8,8,8,8,8,8,7,6,5,3,2,0,0,0,0,0,0,0,0,0,-4,-13,-22,-28,-31,-28,-25,-23,-21,8,9,9,9,9,9,9,8,8,8,8,8,8,7,6,5,3,2,0,0,0,0,0,0,0,0,0,0,-2,-9,-16,-23,-27,-25,-23,-22,-21,9,9,9,9,9,9,9,9,8,8,8,8,7,6,5,3,2,0,0,0,0,0,0,0,0,0,0,0,-1,-4,-10,-18,-23,-23,-21,-20,-19,8,9,9,8,8,9,9,9,9,8,8,7,6,5,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-5,-12,-18,-20,-20,-18,-15,8,8,8,7,8,9,9,9,9,8,7,6,5,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-6,-12,-16,-17,-15,-11,7,8,7,6,8,10,10,9,8,7,6,4,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-4,-8,-10,-9,-8,7,6,5,4,7,12,10,8,7,6,4,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,0,-2,-4,-5,5,3,1,1,5,10,9,7,5,4,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,5,6,7,6,4,0,-3,4,1,0,0,3,7,6,5,3,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,5,8,10,12,12,10,4,0,3,0,2,4,4,5,3,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,4,7,10,12,13,14,12,8,2,2,0,5,11,8,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,7,9,12,13,13,14,13,10,6,2,0,6,13,11,9,6,4,1,0,0,0,1,2,1,0,0,0,0,0,0,0,0,0,0,2,3,6,9,11,12,13,14,15,15,14,12,2,1,7,13,14,15,12,9,4,0,0,1,2,4,3,1,0,0,0,0,0,0,0,0,1,3,5,8,10,12,13,14,15,16,17,17,17,0,1,4,8,11,14,12,11,7,2,2,5,6,6,6,6,4,1,0,0,0,0,0,1,2,4,7,9,11,12,14,15,16,17,18,18,17,0,0,1,2,5,9,10,11,8,5,7,11,10,8,9,11,8,2,0,0,0,0,1,2,3,6,8,9,11,13,15,16,17,18,19,17,16,0,0,-1,-2,0,4,7,9,9,8,10,12,10,8,9,12,8,1,0,0,0,0,1,2,3,5,8,10,12,14,16,17,18,18,18,16,14,-1,-1,-4,-7,-3,0,3,7,8,10,11,10,9,8,9,9,6,0,0,0,1,1,1,2,3,5,8,11,14,15,17,18,19,17,16,14,13,-1,-2,-4,-6,-2,3,3,4,6,8,9,9,8,7,7,7,5,3,2,3,3,2,1,0,2,6,10,13,15,17,18,18,18,16,14,13,13,-1,-1,-2,-1,2,7,5,2,2,4,6,8,7,6,5,4,5,8,8,8,7,4,1,0,1,7,13,14,15,18,18,17,15,14,12,12,13,0,0,0,1,3,5,5,4,4,3,5,6,5,5,5,5,6,9,9,8,7,6,5,2,3,8,13,15,17,17,16,14,13,12,12,12,12,3,4,4,3,1,0,3,9,8,5,4,3,3,4,5,6,7,8,7,6,6,9,10,7,6,8,12,16,17,14,12,11,11,12,13,12,11,5,9,8,6,1,-2,3,11,8,5,2,0,0,3,5,6,7,8,7,6,7,10,11,10,9,10,11,13,13,11,9,10,11,12,11,11,10],
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
