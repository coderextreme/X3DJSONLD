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
        texture=ImageTexture(url=['../../images/5/singapore10-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2995803869799398,103.60419903412902,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[1,-1,-3,-6,-7,-8,-5,-1,0,2,6,9,10,8,8,8,8,7,7,7,6,4,3,3,3,3,3,3,3,3,3,4,5,6,7,7,8,1,0,-1,-4,-5,-5,-3,0,0,2,5,9,10,10,9,9,9,8,8,8,7,4,3,3,3,3,3,3,3,3,4,5,5,6,7,7,7,1,1,0,-1,-1,-2,-1,0,0,3,5,7,9,10,10,10,9,9,9,9,7,4,3,3,3,3,3,3,3,4,4,5,6,6,7,7,7,2,2,0,0,0,0,0,0,0,2,4,6,8,9,10,10,10,10,10,9,8,5,4,3,3,3,3,3,4,5,5,6,6,7,7,7,7,2,2,1,1,1,1,0,0,0,2,4,6,7,9,10,11,11,11,10,10,9,7,5,4,3,3,3,3,4,5,6,6,7,7,7,7,7,2,2,2,2,2,2,1,0,1,2,3,5,7,8,9,11,11,11,11,11,10,8,7,4,3,3,4,4,5,6,6,7,7,7,7,7,8,2,2,2,2,2,2,2,1,1,2,3,5,7,8,9,10,10,11,11,11,10,10,8,5,3,4,5,5,6,6,7,7,7,7,7,8,8,2,2,2,2,2,2,2,2,2,2,3,4,6,8,8,9,10,11,11,11,11,11,9,6,4,5,5,6,6,7,7,7,7,7,8,6,4,2,2,2,2,2,2,2,2,2,2,2,4,5,7,8,9,10,10,11,11,11,11,9,7,6,6,6,6,7,7,7,7,7,8,8,2,-2,2,2,2,2,2,2,2,2,2,2,2,3,4,6,8,9,9,10,11,11,11,11,10,8,7,7,7,7,7,7,7,7,8,5,2,-4,-9,2,2,2,2,2,2,2,2,2,2,2,2,3,5,6,8,9,10,11,11,11,11,10,9,7,7,7,7,7,7,7,8,7,1,-6,-12,-17,2,2,2,2,2,2,2,2,2,2,2,2,2,4,5,7,9,10,10,11,11,11,10,9,8,7,7,7,7,7,7,5,1,-6,-14,-19,-22,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,5,7,9,10,10,11,11,10,9,8,7,7,7,7,8,6,0,-8,-16,-23,-25,-27,2,2,2,1,1,1,1,2,2,2,2,2,2,2,2,4,6,8,9,10,10,10,9,8,8,7,7,7,7,4,0,-8,-17,-23,-28,-29,-30,2,2,1,0,0,0,1,1,2,2,2,2,2,2,2,4,6,7,8,8,8,8,8,7,7,7,7,8,6,-1,-9,-18,-25,-28,-30,-31,-32,2,1,0,0,0,0,2,3,4,3,2,2,2,2,4,5,6,7,8,8,8,8,7,7,7,7,6,4,0,-9,-18,-26,-30,-31,-32,-32,-33,1,0,0,-2,0,1,4,7,7,5,4,4,4,4,5,6,7,7,8,8,8,7,7,6,6,8,5,-1,-10,-19,-26,-30,-32,-32,-33,-33,-33,0,0,0,-1,0,3,6,9,8,6,6,5,5,6,6,7,7,8,8,8,7,6,5,4,4,5,1,-9,-19,-26,-31,-32,-32,-33,-33,-34,-34,-1,-2,0,0,4,7,8,9,9,8,7,7,7,7,7,7,8,8,8,7,6,5,3,2,1,0,-6,-17,-27,-30,-32,-33,-33,-33,-34,-34,-34,-1,-1,0,3,6,9,9,9,9,9,8,8,8,8,8,8,8,8,7,6,5,3,2,0,0,-2,-8,-19,-28,-31,-32,-33,-34,-34,-34,-33,-32,0,0,4,7,8,9,9,9,9,8,8,8,8,8,8,8,8,7,6,5,3,2,0,0,0,0,-5,-15,-23,-29,-33,-33,-34,-34,-34,-31,-28,0,3,6,9,9,9,9,9,8,8,8,8,8,8,8,8,7,6,5,3,2,0,0,0,0,0,-2,-8,-16,-25,-31,-33,-33,-33,-32,-28,-25,4,7,8,9,9,9,9,8,8,8,8,8,8,8,8,7,6,5,3,2,0,0,0,0,0,0,0,-3,-9,-19,-27,-31,-33,-31,-28,-25,-23],
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
