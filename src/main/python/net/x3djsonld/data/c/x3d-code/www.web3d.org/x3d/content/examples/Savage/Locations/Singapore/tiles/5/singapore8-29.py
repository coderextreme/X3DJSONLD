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
        texture=ImageTexture(url=['../../images/5/singapore8-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2821169622239519,104.00636398974156,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[8,5,5,5,6,8,12,15,14,12,5,0,-2,-3,-2,0,3,6,7,7,7,7,7,8,7,6,5,4,5,8,12,12,10,6,2,1,1,6,4,5,7,9,11,11,10,10,10,5,0,0,0,1,0,1,3,4,5,6,7,8,9,8,7,6,5,6,9,11,14,14,10,6,3,1,5,3,6,9,10,11,8,4,6,8,6,1,3,6,4,1,0,0,1,3,5,7,8,10,10,9,8,7,7,10,12,15,16,14,10,5,1,6,2,6,10,5,1,0,0,3,9,8,6,7,7,4,0,-1,-2,0,3,5,7,8,10,11,11,10,9,9,12,15,15,14,12,9,4,2,6,1,6,11,1,-7,-6,-4,2,10,10,10,9,8,4,0,-1,-3,0,5,7,7,8,11,12,12,11,9,9,14,16,14,12,10,7,4,2,3,1,5,9,5,0,0,0,5,11,11,10,10,9,8,6,3,0,4,9,11,8,9,11,11,9,8,7,8,11,12,11,10,9,8,8,8,2,1,4,7,9,12,9,5,9,12,11,9,9,11,12,13,11,8,10,14,14,10,10,11,9,5,4,5,7,7,8,7,8,8,9,12,14,7,8,9,11,13,14,9,4,9,15,14,11,10,10,11,13,13,13,14,16,15,12,9,8,6,5,6,7,7,4,3,3,4,6,8,12,14,14,15,15,16,15,14,8,1,9,18,16,13,11,8,9,11,13,16,18,18,16,12,7,4,4,7,9,10,7,2,0,0,0,3,7,10,13,16,16,13,10,8,6,4,1,7,13,12,10,6,2,3,6,10,13,15,16,14,11,8,7,8,12,13,13,9,2,0,-1,0,2,5,8,11,17,14,8,2,0,-2,0,2,4,6,5,5,0,-4,-2,0,5,9,11,13,13,11,10,11,13,16,17,16,11,3,0,-1,0,0,2,5,8,16,14,8,3,2,1,2,2,1,1,1,1,0,-2,-1,1,3,6,7,8,8,7,8,9,11,15,17,17,13,4,0,-1,0,1,3,5,7,14,13,10,7,9,9,6,2,0,-2,-1,0,0,1,2,2,3,3,3,3,3,4,5,6,8,12,15,17,14,5,0,-1,0,3,6,6,6,13,14,10,6,11,15,9,3,0,-4,-2,0,0,3,3,3,2,1,0,0,0,2,4,4,6,7,9,10,6,0,-2,-2,0,3,7,6,5,14,16,9,4,12,19,12,4,0,-5,-3,0,1,4,4,3,1,0,-1,-1,0,1,2,3,3,3,2,0,-2,-5,-6,-3,0,4,6,5,4,17,21,13,5,10,13,10,5,2,0,0,0,1,4,3,3,1,0,-1,-2,-2,0,1,4,5,2,0,-2,-5,-7,-9,-8,-5,0,6,4,2,22,27,19,10,7,5,5,5,7,9,6,2,2,2,2,3,1,0,-1,-3,-4,-4,0,7,8,2,0,-3,-5,-8,-11,-14,-13,-2,5,4,1,19,24,13,3,1,0,5,9,11,12,9,4,3,2,2,2,2,0,0,0,-1,-3,0,6,8,3,1,0,-1,-2,-6,-11,-11,-1,5,3,0,13,16,2,-10,-5,0,6,14,14,13,10,7,5,2,2,2,2,2,3,6,4,0,0,4,6,4,4,7,6,4,0,-3,-3,2,6,2,0,9,10,0,-8,-5,-1,5,12,12,12,10,6,4,2,2,2,2,3,5,7,5,1,0,3,5,6,7,8,9,8,6,3,2,6,8,5,2,6,6,3,0,-1,-4,0,6,9,12,8,4,3,3,3,3,4,4,5,5,4,2,2,4,6,8,9,7,8,10,10,8,8,10,12,11,8,5,6,6,7,1,-3,0,5,8,11,8,3,3,3,3,4,4,5,4,3,3,3,4,6,8,9,9,7,7,9,11,12,12,12,11,10,8,5,8,10,12,5,0,2,7,9,11,8,4,3,2,3,6,5,3,2,2,2,3,6,8,10,9,8,7,7,9,10,13,13,10,8,6,4],
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
