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
        texture=ImageTexture(url=['../../images/5/singapore8-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2821169622239519,103.97763792148352,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[9,1,-4,-2,0,2,4,4,4,5,6,3,0,-5,-11,-12,-10,-7,-3,-1,0,0,0,2,5,5,1,0,-1,-1,0,3,6,9,9,8,3,8,1,-2,-2,-1,0,0,0,2,2,2,-3,-11,-13,-11,-10,-7,-5,-3,-1,0,0,-1,0,4,5,0,0,0,2,2,4,6,7,7,6,3,6,3,0,0,-1,-1,-1,0,1,0,0,-9,-21,-18,-11,-6,-3,-3,-2,-1,0,0,-2,0,4,4,0,0,3,5,3,3,5,6,5,3,2,9,7,7,3,1,1,1,3,4,3,1,-6,-16,-14,-8,-4,0,-1,-4,-2,2,3,0,0,7,8,3,1,5,6,2,0,5,8,4,1,1,13,12,13,8,5,5,6,7,9,6,3,-2,-8,-8,-5,-2,0,0,-4,-1,6,8,3,3,9,10,6,4,6,6,1,0,5,9,4,0,1,16,15,15,11,8,5,3,6,11,6,1,-1,-3,-3,-2,-1,-1,-1,0,3,12,13,7,5,7,7,5,4,5,4,1,0,4,6,2,0,4,18,16,16,13,10,4,0,4,11,6,0,0,0,0,0,-2,-5,-2,2,9,17,17,11,6,5,4,4,3,2,2,3,3,3,1,0,0,6,14,13,13,12,9,1,-5,0,7,3,-1,0,0,0,-2,-3,-4,0,3,10,15,13,7,3,1,1,2,3,0,0,2,4,3,2,0,-2,3,9,10,11,9,7,-1,-9,-4,1,0,-1,0,0,-1,-4,-4,-2,0,5,8,10,7,1,-1,-1,0,1,2,0,-1,0,3,4,4,0,-5,0,8,9,9,7,4,-2,-9,-4,0,1,2,2,3,1,-1,-1,0,1,5,7,8,5,1,0,0,0,1,3,2,1,1,2,3,4,2,0,2,8,8,7,4,1,-3,-8,-4,0,3,8,8,7,5,3,2,2,3,5,6,7,6,3,1,0,0,2,4,5,5,2,1,1,2,6,10,7,8,8,8,8,7,2,-1,0,0,4,7,6,5,3,2,2,3,4,6,7,7,6,4,3,3,4,6,8,12,12,9,7,7,8,11,13,12,8,9,10,13,15,10,5,3,2,4,5,2,0,0,1,2,3,4,7,8,7,6,5,4,5,7,10,13,19,21,17,14,14,15,15,15,16,2,6,9,13,16,12,7,5,3,3,2,1,0,0,0,0,0,4,7,9,11,10,7,6,8,9,9,12,17,19,17,15,12,10,6,4,11,-3,1,7,12,16,12,7,5,3,2,0,0,0,-1,-3,-2,0,2,6,10,14,13,9,8,10,10,8,8,12,15,15,13,6,1,-5,-10,2,-4,0,3,9,13,9,5,6,7,3,0,-1,0,-1,-2,0,1,4,6,9,12,10,6,5,10,10,7,6,8,10,9,8,3,-1,-9,-15,-2,-3,0,0,6,10,6,2,7,11,5,-1,-2,0,0,0,2,5,7,6,7,8,6,0,1,8,11,8,5,4,4,3,2,0,-1,-9,-16,-6,-2,0,0,4,9,6,3,7,11,5,0,0,1,2,2,4,7,8,9,8,6,1,-4,-2,6,10,6,3,0,0,-1,-2,-1,-1,-6,-9,-4,0,-1,-2,3,9,8,6,7,8,5,1,2,5,5,5,5,8,10,12,10,3,-2,-8,-6,3,8,3,0,-3,-5,-5,-6,-4,-1,-1,0,0,0,0,0,4,9,8,6,7,8,7,5,5,6,6,5,5,5,8,11,10,4,0,-4,-3,3,5,0,-3,-4,-4,-3,-2,-1,0,1,3,1,2,3,3,6,10,7,3,7,11,10,8,7,6,6,5,3,2,3,7,8,7,6,3,3,4,2,-3,-6,-3,0,2,4,2,1,2,2,2,5,5,4,7,9,6,3,6,8,7,6,6,6,5,4,2,1,2,3,6,8,9,7,5,4,1,-3,-5,-1,1,5,8,5,3,2,0,2,8,6,5,6,8,6,4,3,3,1,0,2,5,5,3,2,1,1,1,4,9,9,6,4,3,1,0,-2,0,2,6,9,6,4,2,0,1],
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
