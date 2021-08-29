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
        texture=ImageTexture(url=['../../images/5/singapore29-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4654829221618253,103.80528151193529,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[13,11,10,10,10,10,9,10,12,13,12,12,11,11,10,10,12,12,12,12,11,10,8,10,15,17,17,16,15,14,13,12,12,12,11,11,11,13,11,9,9,10,10,10,10,11,12,13,12,11,11,10,11,12,13,12,12,11,10,8,10,16,17,16,14,13,13,15,16,14,13,12,12,11,12,11,10,9,9,9,10,10,10,11,11,12,13,12,11,11,11,11,12,11,11,10,9,11,14,15,13,12,11,12,16,17,15,12,12,12,9,11,10,10,9,9,9,11,11,9,10,11,13,14,14,12,12,11,11,11,11,11,10,10,11,13,13,11,10,10,11,16,17,14,12,12,12,9,9,9,9,10,9,11,13,12,10,10,11,13,16,15,15,14,14,13,12,11,11,10,10,10,12,13,11,10,11,12,14,15,13,12,12,12,10,8,8,9,10,10,12,14,13,12,12,11,14,16,16,17,16,16,14,11,11,11,11,10,10,12,13,12,11,11,12,12,12,12,12,12,11,10,9,10,10,10,11,13,15,15,14,13,13,13,14,15,16,16,15,13,9,9,10,11,10,10,11,12,12,12,12,12,11,11,11,11,10,9,9,8,10,10,10,11,13,15,16,15,15,14,12,10,12,13,14,14,11,8,8,10,11,10,10,12,13,13,12,11,10,10,10,10,10,8,8,8,0,1,3,7,10,12,13,13,13,13,13,9,4,5,9,11,13,12,9,8,9,10,11,13,16,16,12,10,9,9,9,10,10,10,9,9,7,-10,-7,-3,1,8,10,10,10,10,11,11,5,0,0,4,7,12,12,10,9,9,10,12,16,19,18,12,8,7,7,8,9,10,10,10,10,6,-21,-15,-9,-3,3,4,5,5,5,6,7,4,0,1,4,6,10,11,10,9,9,10,13,15,16,14,10,7,6,6,6,6,6,6,8,10,8,-29,-23,-16,-9,-2,0,1,1,1,2,3,3,2,3,4,6,8,9,9,10,10,11,13,14,12,10,6,5,5,5,4,3,2,3,6,9,9,-32,-24,-16,-9,-2,0,1,1,1,1,2,2,3,3,4,5,7,8,9,9,10,10,12,11,9,7,6,5,5,4,4,3,2,2,5,7,8,-33,-25,-16,-9,-2,0,2,2,2,2,2,2,2,3,3,5,7,8,8,9,10,10,10,8,6,5,5,5,4,4,3,3,2,2,4,6,7,-39,-30,-20,-10,-1,1,2,2,2,2,2,2,2,2,3,4,6,7,8,9,9,9,8,7,6,5,5,4,4,3,3,3,2,2,4,5,4,-44,-35,-23,-10,1,2,2,3,3,2,2,2,2,2,2,3,4,5,7,8,8,7,6,5,5,5,4,4,3,3,2,2,2,3,4,4,1,-45,-39,-31,-19,-7,-1,2,3,3,3,2,2,2,2,2,2,3,4,6,7,7,6,5,5,5,4,4,3,3,3,2,2,3,3,4,3,1,-44,-43,-39,-28,-17,-7,1,3,3,3,3,2,2,2,2,2,2,3,5,5,5,5,5,5,4,4,3,3,2,2,2,2,3,4,3,2,1,-44,-43,-41,-35,-28,-17,-6,0,2,3,3,3,2,2,2,2,2,2,3,4,5,5,5,4,4,3,3,3,2,2,3,3,3,4,3,2,1,-43,-43,-42,-41,-38,-28,-16,-6,2,3,3,3,2,2,2,2,2,2,3,4,4,5,4,4,3,3,2,2,2,2,3,4,4,3,2,2,1,-44,-43,-43,-42,-41,-35,-28,-16,-6,0,2,3,3,3,2,2,2,2,3,3,4,4,4,3,3,3,2,2,3,3,3,4,3,3,2,1,1,-44,-43,-43,-43,-42,-41,-39,-28,-16,-7,1,2,3,3,2,2,2,2,2,3,3,4,3,3,2,2,2,2,3,4,4,4,3,3,2,1,0],
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
