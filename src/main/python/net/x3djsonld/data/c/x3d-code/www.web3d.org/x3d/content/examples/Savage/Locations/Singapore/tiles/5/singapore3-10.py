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
        texture=ImageTexture(url=['../../images/5/singapore3-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.238458400333982,103.7334663412902,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[4,1,0,0,3,5,7,7,6,6,7,8,7,6,3,2,1,1,1,0,0,0,4,9,10,9,5,1,-1,-3,0,4,5,6,1,-2,6,2,0,0,4,7,9,8,6,6,7,7,7,6,5,4,4,4,4,2,0,-1,3,8,8,6,1,-3,-6,-6,0,6,7,6,-1,-6,10,8,5,6,7,8,7,6,5,5,6,7,8,8,7,6,5,4,2,1,0,0,2,4,3,1,-6,-11,-11,-9,-2,2,0,-3,-9,-12,14,14,12,11,10,8,6,4,4,4,5,7,9,9,9,8,5,3,1,0,0,0,2,2,0,-3,-13,-20,-16,-11,-5,-1,-7,-13,-17,-19,11,13,14,13,12,9,5,3,1,3,7,9,9,9,8,5,1,0,0,0,0,0,0,0,-2,-6,-14,-19,-15,-11,-10,-10,-16,-21,-16,-10,8,12,15,15,13,9,5,1,0,3,8,10,9,8,6,2,-1,-4,-3,-3,-3,-3,-2,-3,-6,-10,-15,-18,-14,-11,-14,-18,-25,-28,-14,-2,5,8,12,14,13,10,7,6,6,7,10,10,9,8,4,1,-1,-4,-5,-5,-2,-1,-1,-3,-7,-11,-15,-18,-16,-16,-22,-26,-25,-23,-13,-4,1,5,9,11,12,11,11,12,12,12,12,11,10,7,3,0,0,-4,-8,-7,-2,0,0,-3,-8,-12,-16,-18,-17,-19,-28,-34,-26,-17,-11,-6,3,6,9,8,8,8,8,9,10,11,10,9,5,3,1,0,-3,-8,-12,-11,-5,-1,0,-2,-10,-15,-17,-19,-19,-21,-27,-30,-23,-17,-13,-10,7,8,9,6,4,4,5,6,7,8,8,5,0,0,0,-1,-7,-12,-15,-15,-10,-5,0,-1,-11,-18,-17,-18,-21,-23,-24,-25,-21,-17,-15,-14,5,8,10,8,5,4,5,6,8,8,8,5,1,0,0,-1,-9,-14,-15,-14,-12,-8,-4,-4,-11,-16,-17,-19,-21,-23,-23,-22,-19,-16,-14,-13,3,8,11,11,8,7,6,7,9,10,10,6,2,1,1,-1,-10,-14,-14,-13,-12,-11,-8,-8,-10,-13,-16,-19,-21,-21,-20,-19,-17,-14,-13,-11,2,7,11,10,9,6,5,5,7,8,7,6,3,1,0,-4,-10,-12,-11,-11,-11,-10,-6,-4,-4,-4,-7,-9,-10,-12,-12,-12,-10,-10,-10,-10,2,5,9,10,9,5,2,2,4,5,5,5,4,1,-3,-7,-10,-11,-8,-8,-8,-7,-3,0,2,3,2,1,0,0,0,-1,-2,-3,-6,-7,3,5,8,9,8,6,3,3,4,5,5,4,3,-1,-6,-10,-10,-9,-6,-4,-3,-1,1,4,6,6,5,4,3,2,1,0,1,1,0,0,4,5,7,8,7,6,5,5,5,6,6,5,1,-3,-10,-13,-11,-9,-5,-1,1,4,7,8,7,7,5,4,3,2,1,1,5,8,7,6,3,4,7,8,7,6,6,6,7,7,6,2,-1,-6,-11,-11,-9,-5,-1,1,5,9,9,9,8,7,6,4,3,1,0,0,4,7,9,10,3,4,7,8,7,7,7,8,8,8,5,0,-6,-9,-9,-7,-4,-1,0,4,9,12,10,9,8,7,6,5,2,0,0,0,0,3,6,10,3,4,5,6,6,6,7,8,9,8,4,0,-6,-8,-6,-4,-1,0,2,5,9,11,9,7,6,6,6,5,2,0,0,-1,0,0,3,6,5,4,3,3,4,5,6,7,8,6,3,0,-3,-4,-3,-2,0,1,2,3,6,7,6,5,3,3,6,6,2,-1,-2,-2,-1,0,0,1,7,4,1,1,1,3,6,7,7,5,2,0,-1,-2,-1,0,1,1,2,3,4,6,6,5,4,4,6,7,3,0,0,-2,-1,-1,0,0,8,5,2,0,0,2,7,8,7,5,3,1,0,0,0,1,1,2,2,3,3,4,6,7,7,7,7,7,6,5,1,0,-1,0,1,3,8,6,4,1,0,3,7,7,6,5,3,1,0,0,1,1,2,2,3,3,3,3,6,7,7,7,7,7,6,6,3,0,0,0,1,4],
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
