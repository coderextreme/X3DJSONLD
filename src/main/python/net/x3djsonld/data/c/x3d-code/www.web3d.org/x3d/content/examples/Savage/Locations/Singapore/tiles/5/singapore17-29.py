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
        texture=ImageTexture(url=['../../images/5/singapore17-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3607023736258976,104.00636398974156,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[8,10,10,10,11,12,12,13,9,6,7,9,8,7,7,7,7,6,7,8,8,8,7,7,5,3,4,6,7,7,6,4,4,5,6,7,7,9,9,9,9,9,10,10,10,7,3,5,9,9,8,8,7,7,6,7,8,10,12,10,8,5,3,3,6,7,7,6,4,4,6,7,7,8,10,9,8,7,7,8,6,6,2,0,3,9,9,8,8,7,7,8,8,8,11,14,14,12,9,5,4,6,7,7,6,5,5,7,8,8,8,12,9,8,6,7,7,4,1,-1,-3,0,6,7,7,7,7,7,8,8,8,10,14,14,12,9,5,5,6,7,7,7,6,6,7,8,8,8,14,12,10,8,9,9,4,-2,-4,-7,-2,2,4,6,6,6,7,8,8,7,9,10,10,7,5,5,5,6,7,8,8,8,7,7,8,8,8,15,13,12,10,10,10,4,-2,-4,-6,-3,0,2,5,6,6,7,8,8,7,7,8,7,5,5,6,7,7,7,8,8,8,8,8,8,8,8,13,13,11,10,9,8,6,3,1,0,0,1,3,5,6,5,6,7,7,7,7,8,8,6,7,9,10,8,7,7,7,7,7,7,8,8,8,12,12,9,7,6,6,6,7,5,4,3,3,4,5,5,5,6,7,7,7,7,8,7,6,7,10,11,8,7,6,5,6,6,7,8,8,8,11,10,4,0,2,5,6,8,8,8,7,6,5,5,5,6,7,8,8,8,8,7,5,3,4,8,9,8,6,4,4,5,6,7,8,8,8,10,9,3,-1,1,5,7,8,9,10,8,7,6,5,5,7,8,9,9,9,8,6,4,3,3,6,8,8,6,4,4,5,6,7,8,8,8,9,8,5,3,5,7,7,7,7,6,6,6,5,5,4,4,6,8,9,10,9,7,6,5,5,8,8,8,7,6,5,5,6,7,7,7,7,9,8,7,7,8,8,7,6,5,4,4,4,5,5,4,4,6,8,9,9,8,7,7,7,7,8,8,7,7,6,5,6,7,6,6,6,7,9,8,8,8,8,9,6,4,4,4,4,4,4,5,6,6,7,7,6,5,5,6,7,7,7,8,8,7,5,2,2,7,9,6,4,5,7,8,8,8,8,9,9,7,4,5,5,5,4,5,5,6,7,7,7,6,5,5,7,8,8,9,10,9,7,3,0,0,6,10,4,1,3,6,8,8,8,9,10,10,10,9,8,8,8,7,6,4,5,5,7,8,10,12,12,11,10,10,13,16,15,9,2,-2,-2,3,7,1,-1,1,4,8,8,8,9,10,11,11,11,10,10,9,8,7,4,4,4,6,9,13,16,16,14,12,13,15,19,17,8,0,-6,-7,-1,3,0,-2,1,4,7,7,8,9,10,11,10,8,7,7,7,7,7,5,5,5,7,9,11,14,14,13,14,15,15,15,11,3,-5,-15,-18,-10,-3,-2,-1,3,6,7,7,7,8,9,10,8,6,5,3,5,6,7,7,7,7,8,8,10,11,12,12,13,15,14,9,4,-2,-11,-21,-25,-18,-10,-4,1,7,13,7,8,8,8,8,8,7,6,4,1,3,5,7,9,10,9,9,8,8,9,10,10,10,11,9,3,-1,-8,-14,-21,-25,-24,-19,-6,5,17,27,7,8,8,8,7,6,6,6,4,1,2,4,7,11,12,11,10,8,7,7,8,8,8,7,4,-1,-7,-12,-16,-20,-24,-27,-24,-7,9,25,38,7,8,9,9,7,5,5,5,3,1,1,2,6,11,11,11,9,8,7,7,7,7,6,5,1,-4,-9,-13,-17,-20,-24,-28,-23,-5,12,27,37,7,8,9,10,8,5,5,4,3,1,1,1,5,10,10,10,8,7,7,7,7,7,6,4,0,-4,-9,-13,-16,-20,-23,-25,-19,0,16,26,32],
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
