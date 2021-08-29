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
        texture=ImageTexture(url=['../../images/5/singapore10-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2995803869799398,103.61856206825804,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[8,7,7,7,8,7,7,7,8,8,9,9,10,9,9,9,8,8,7,7,7,7,7,8,9,9,9,9,10,9,8,7,7,7,7,7,7,7,7,7,8,8,8,8,7,8,9,10,11,10,9,8,8,8,7,7,7,7,8,8,8,9,9,9,9,9,7,6,7,8,7,7,7,7,8,8,9,8,8,7,7,8,9,10,12,11,8,8,8,8,8,8,8,8,9,9,9,9,9,9,9,8,6,5,6,8,8,8,7,7,8,8,8,7,6,6,7,7,8,9,11,10,7,7,8,8,8,8,8,8,9,9,9,9,9,9,9,8,5,4,6,8,8,9,7,8,9,8,7,6,5,6,6,7,7,8,9,8,6,6,7,7,7,7,7,8,8,9,9,9,9,10,10,8,5,3,5,8,9,10,8,7,6,5,4,5,5,5,5,6,6,7,9,8,7,6,6,5,5,5,6,7,8,8,8,9,9,10,9,8,6,5,6,8,9,11,8,6,2,1,1,3,5,5,4,5,6,7,8,8,7,7,5,4,3,3,4,5,6,7,8,9,10,9,8,7,7,7,8,8,9,10,4,0,-2,-3,-4,-2,0,1,3,5,6,7,8,8,8,7,6,4,3,3,4,5,6,7,8,9,10,9,8,8,9,9,9,9,9,10,-2,-6,-9,-10,-10,-11,-10,-4,2,5,6,7,7,7,8,7,6,5,4,4,5,6,7,8,8,9,10,10,9,9,10,10,9,9,8,8,-9,-13,-15,-16,-17,-18,-19,-10,0,3,5,6,7,7,8,7,6,6,5,5,5,6,7,8,9,9,10,11,10,10,10,11,10,9,8,8,-17,-19,-21,-22,-24,-26,-27,-17,-5,0,4,6,6,7,6,5,4,5,6,6,6,6,7,9,10,10,11,11,10,10,10,11,10,9,8,8,-22,-24,-25,-26,-28,-30,-31,-21,-9,-2,3,5,6,7,6,5,4,5,6,7,6,6,7,8,10,10,11,11,10,10,10,11,10,8,8,8,-27,-28,-29,-30,-31,-33,-33,-25,-15,-6,1,4,7,7,7,6,5,5,6,6,6,7,6,7,8,10,10,10,10,10,10,10,9,8,8,8,-30,-31,-31,-32,-33,-32,-31,-25,-18,-9,0,3,6,7,8,7,7,6,6,6,6,7,6,7,8,9,10,10,10,10,10,9,8,7,7,8,-32,-32,-33,-33,-33,-30,-27,-24,-20,-11,-1,2,5,7,7,8,8,8,7,7,7,7,7,8,8,9,10,10,11,11,10,8,7,5,6,8,-33,-33,-33,-33,-32,-28,-24,-22,-21,-12,-2,1,3,5,7,8,8,9,8,7,7,7,8,8,8,9,10,10,11,11,10,8,6,5,7,8,-33,-34,-34,-31,-28,-25,-22,-21,-21,-13,-3,0,2,4,5,7,7,8,8,8,8,8,8,7,7,8,9,10,10,10,10,9,7,6,8,8,-34,-33,-32,-28,-24,-22,-21,-20,-18,-12,-4,0,2,4,5,6,6,7,7,8,8,7,6,6,6,7,8,9,10,10,10,9,8,7,8,9,-34,-31,-28,-25,-22,-22,-21,-18,-13,-9,-5,-1,3,5,6,7,6,6,7,7,6,5,4,4,5,6,7,9,9,10,10,9,8,8,8,8,-32,-28,-25,-23,-21,-20,-19,-14,-9,-7,-5,-1,4,7,8,7,6,6,7,7,6,5,4,4,5,6,7,8,10,10,10,10,9,9,8,8,-28,-25,-23,-22,-21,-17,-14,-10,-6,-5,-4,0,6,8,9,8,7,7,8,7,6,5,5,6,6,7,8,9,10,11,11,10,10,9,8,7,-25,-23,-21,-20,-19,-15,-10,-7,-4,-4,-4,0,6,8,9,9,8,8,8,8,7,7,7,7,7,8,8,9,10,11,12,11,11,10,9,8,-23,-22,-21,-18,-14,-10,-6,-5,-4,-4,-3,0,6,8,9,9,8,8,8,8,9,9,9,8,8,8,9,9,10,11,11,12,12,12,10,10],
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
