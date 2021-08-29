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
        texture=ImageTexture(url=['../../images/5/singapore26-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4392877850278434,103.84837061432235,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[8,8,8,9,10,10,9,9,8,8,8,10,13,9,2,2,7,7,6,5,6,5,3,1,-1,0,2,3,1,0,-2,-3,-3,-2,-1,0,9,8,8,9,9,10,10,10,10,9,8,9,11,9,6,5,6,5,3,3,4,4,3,2,1,1,3,3,3,1,0,-1,-2,-3,-2,-1,10,8,8,8,9,10,10,10,11,10,9,8,7,8,9,8,6,3,1,2,3,3,2,3,5,5,3,3,4,3,1,0,-2,-3,-3,-2,11,9,9,9,10,10,10,10,11,10,9,7,6,7,8,9,9,7,4,5,7,7,5,4,4,4,5,5,4,4,3,1,0,-2,-3,-4,10,10,10,10,11,11,10,10,10,10,10,7,4,4,7,10,12,10,6,7,11,11,8,5,4,4,5,5,4,4,4,3,1,0,-2,-4,10,10,10,9,9,9,9,9,9,9,9,7,4,5,8,10,12,11,9,14,23,23,17,11,7,5,5,5,5,5,5,4,3,1,0,-2,9,10,10,9,9,9,9,8,8,8,9,7,4,5,9,11,11,11,11,21,34,34,26,17,9,6,5,5,5,6,5,5,5,3,1,0,9,9,10,9,8,9,9,9,9,9,10,8,5,7,9,11,10,10,10,16,23,24,21,16,10,6,6,5,5,5,5,5,5,4,3,1,9,9,10,9,8,9,10,10,9,9,10,9,7,8,10,10,10,9,9,10,12,14,15,13,9,7,6,5,5,5,5,6,5,5,5,3,8,9,10,9,9,9,10,11,11,11,11,10,9,9,9,9,8,8,9,7,3,2,2,1,1,1,1,3,4,5,5,5,5,5,5,4,8,8,9,9,9,10,11,12,12,12,11,11,11,10,9,8,6,7,8,3,-2,-7,-10,-9,-6,-3,-1,0,3,5,5,5,5,6,5,5,7,7,7,7,8,9,10,11,11,11,11,11,11,11,10,9,7,7,8,2,-8,-13,-14,-13,-11,-9,-7,-5,-1,1,3,5,5,5,5,5,7,6,6,7,8,9,9,10,10,10,11,10,10,10,11,10,9,9,9,0,-14,-19,-17,-16,-16,-15,-13,-11,-7,-2,2,5,5,5,5,6,9,7,6,7,8,8,8,9,9,10,10,10,9,9,10,10,9,9,9,2,-8,-14,-17,-18,-18,-17,-17,-15,-12,-8,-3,0,3,4,5,5,11,8,7,7,8,7,7,7,8,9,10,9,8,8,10,10,9,9,9,6,0,-7,-16,-20,-20,-19,-19,-18,-17,-14,-9,-4,1,4,5,5,10,9,9,9,9,8,7,7,8,9,9,8,7,8,9,9,9,9,10,8,5,-1,-9,-15,-18,-20,-20,-20,-19,-17,-15,-10,-4,0,2,4,9,9,10,10,9,9,8,8,8,8,9,8,7,7,8,8,8,9,10,10,9,5,0,-7,-17,-21,-21,-21,-21,-20,-19,-16,-11,-5,0,4,8,9,11,11,10,10,9,8,7,7,8,8,8,8,8,8,7,8,9,10,10,8,4,-1,-10,-16,-19,-21,-21,-21,-21,-19,-16,-11,-4,0,7,9,11,12,12,11,10,8,6,6,7,8,9,9,8,7,6,7,8,9,10,10,8,4,-1,-9,-17,-21,-22,-22,-22,-21,-20,-17,-12,-6,8,10,11,9,8,9,10,8,7,7,7,9,12,13,12,10,8,8,9,9,10,11,10,8,3,-1,-10,-16,-19,-21,-22,-22,-21,-19,-16,-11,11,11,9,4,1,4,8,8,7,7,8,12,17,18,17,14,12,11,10,10,10,10,10,9,8,4,-1,-9,-17,-21,-22,-22,-22,-21,-19,-17,9,10,9,4,0,3,7,8,8,9,10,14,20,22,22,20,16,13,11,10,10,10,11,10,10,8,3,-1,-10,-17,-20,-21,-22,-21,-21,-19,6,7,8,6,5,5,7,8,9,11,13,16,20,24,27,25,20,17,14,12,11,11,11,11,10,9,8,4,-1,-9,-17,-21,-22,-22,-21,-21],
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
