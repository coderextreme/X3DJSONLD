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
        texture=ImageTexture(url=['../../images/5/singapore0-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2122632632,103.79091847780627,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[-2,0,0,3,5,5,4,6,9,7,4,-2,-10,-13,-14,-9,-1,10,25,34,41,36,21,6,-5,-13,-14,-13,-10,-5,1,7,14,18,18,16,-3,-2,0,3,8,6,5,7,10,9,7,4,2,0,-1,-1,-1,4,12,17,20,16,8,-3,-18,-27,-28,-24,-15,-4,3,10,15,19,22,21,-4,-1,0,2,4,3,2,5,8,8,9,7,5,3,1,0,-1,0,4,6,8,6,1,-6,-18,-24,-23,-19,-11,-2,4,11,17,21,22,20,-4,-1,1,0,0,0,0,2,6,8,9,8,6,4,2,0,-2,-1,0,0,0,0,-3,-7,-13,-15,-14,-10,-5,0,5,11,19,24,21,16,-5,0,2,2,1,0,0,3,8,9,9,9,7,6,5,2,0,0,0,-2,-3,-4,-5,-7,-10,-9,-6,-2,0,4,9,13,20,24,19,11,-5,0,3,4,5,2,0,4,10,9,8,8,9,9,9,7,3,0,-1,-3,-4,-5,-6,-7,-7,-4,0,3,6,8,12,16,21,23,15,5,-4,0,5,5,5,3,0,4,10,8,7,7,7,8,9,7,3,0,-5,-6,-5,-4,-4,-4,-3,0,3,7,9,10,12,15,19,19,9,-3,-3,0,6,4,2,1,0,4,8,8,7,6,4,5,7,5,1,-3,-9,-9,-5,-2,0,0,0,2,6,9,10,11,11,12,15,14,1,-13,-2,0,5,3,1,0,0,2,6,7,8,6,5,6,6,3,-1,-7,-13,-11,-4,0,0,1,3,5,8,10,10,10,9,9,11,8,-4,-21,0,0,2,0,0,0,0,0,3,6,8,8,8,8,6,0,-7,-12,-16,-12,-3,0,1,2,5,8,9,10,9,8,7,6,6,2,-10,-28,1,1,0,0,0,0,0,1,3,5,7,8,8,7,4,-3,-16,-18,-18,-12,-3,0,1,3,5,7,7,7,6,6,5,4,3,0,-12,-26,2,1,0,0,0,0,0,1,3,4,5,6,7,4,1,-10,-26,-26,-18,-10,-3,0,0,2,3,3,3,2,2,2,3,3,1,-1,-10,-19,3,2,0,1,1,1,0,1,2,3,3,5,6,0,-5,-16,-29,-26,-16,-9,-2,0,0,0,0,0,0,1,2,2,2,3,1,0,-5,-10,4,2,1,2,2,2,1,1,0,1,2,3,3,-5,-16,-22,-26,-21,-12,-7,-2,0,0,0,0,0,1,2,3,3,3,3,3,2,0,0,4,3,2,3,3,3,3,2,0,1,1,0,0,-11,-24,-25,-20,-14,-7,-3,0,1,1,0,0,0,3,5,4,3,3,3,3,4,4,3,4,4,3,3,4,5,6,5,4,3,2,-3,-8,-18,-30,-25,-13,-6,-1,0,2,3,4,2,0,1,7,9,6,3,3,3,3,4,3,2,5,5,4,4,4,5,6,6,6,4,2,-7,-18,-24,-29,-20,-7,-1,1,2,3,3,4,4,1,2,7,9,5,3,2,3,3,3,2,1,6,5,4,4,4,4,4,5,7,4,1,-12,-28,-27,-20,-11,-3,0,2,3,1,1,3,4,2,2,2,2,1,1,2,3,3,1,1,0,7,5,3,3,4,4,4,6,8,3,0,-17,-34,-27,-13,-5,0,1,3,3,1,1,3,4,4,3,1,0,0,0,2,3,2,0,0,0,6,4,2,3,4,4,5,7,10,0,-10,-21,-31,-22,-8,-1,1,2,3,4,3,4,5,7,9,8,5,3,0,0,1,2,1,0,0,-1,5,3,1,3,5,5,5,7,9,-2,-18,-23,-26,-16,-3,0,2,3,4,3,3,5,6,8,10,9,7,4,1,0,0,1,0,0,0,-1,4,2,1,3,7,5,2,1,1,-9,-23,-22,-19,-11,-2,1,3,4,4,3,3,3,3,4,6,5,3,1,0,1,1,1,0,0,0,0],
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
