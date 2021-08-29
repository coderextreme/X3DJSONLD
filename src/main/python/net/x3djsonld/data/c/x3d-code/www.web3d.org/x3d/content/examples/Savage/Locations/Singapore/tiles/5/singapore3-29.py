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
        texture=ImageTexture(url=['../../images/5/singapore3-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.238458400333982,104.00636398974156,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[3,2,2,2,4,7,6,3,6,9,6,1,3,7,10,13,14,13,11,9,5,2,2,3,6,8,9,9,7,3,3,7,9,7,5,3,2,1,1,1,3,4,5,6,6,10,15,10,3,4,7,9,12,13,13,12,12,5,-1,-5,-6,-3,0,4,7,7,2,0,4,7,8,8,7,6,4,2,1,1,2,5,5,4,8,13,11,9,8,9,10,10,12,15,16,16,10,1,-2,-3,-1,0,3,5,6,3,2,4,6,7,7,5,4,6,4,1,0,1,5,4,2,6,10,11,13,13,11,9,6,11,18,21,22,15,5,0,0,0,0,2,3,4,4,4,5,5,6,7,3,1,0,0,0,2,5,7,6,5,6,8,9,9,8,7,7,6,11,18,19,20,15,8,5,4,5,5,5,5,5,5,5,5,5,8,10,11,11,-7,-4,1,8,9,10,9,7,7,7,6,4,3,2,3,6,11,17,18,18,15,12,11,11,11,10,9,8,7,6,5,5,6,10,14,20,21,-1,-1,4,11,11,11,10,9,8,7,5,2,2,2,7,12,13,13,13,12,11,10,10,9,8,6,5,5,5,5,5,6,8,10,13,15,16,2,1,8,14,13,12,11,11,9,7,4,0,1,4,10,18,15,8,6,6,6,7,8,6,4,2,2,2,2,4,6,8,9,11,12,12,11,5,4,6,10,14,17,16,15,9,3,1,0,1,5,10,15,13,8,5,3,3,4,5,5,4,2,2,4,6,6,8,10,10,10,9,9,8,8,5,5,7,15,23,21,19,9,0,0,-1,1,7,9,11,10,8,4,0,0,0,1,3,4,3,4,8,9,9,10,12,12,8,5,5,6,10,7,6,7,14,19,16,11,2,-7,-7,-7,0,6,8,9,9,8,5,1,0,1,2,4,4,3,3,8,9,9,8,8,8,4,1,1,1,12,9,8,8,11,14,9,3,-5,-15,-15,-12,-4,4,6,7,8,9,7,4,3,3,4,5,5,2,2,7,9,7,5,4,3,0,-1,-1,-1,10,8,8,8,10,13,3,-5,-11,-16,-15,-12,-3,4,6,8,9,9,6,2,2,3,5,7,6,2,2,6,7,6,5,4,4,1,0,-1,0,8,7,7,7,10,11,-1,-16,-16,-16,-13,-10,-2,4,7,9,9,9,4,0,0,4,7,9,8,3,2,4,5,5,5,7,7,2,0,0,1,6,4,4,5,6,5,-4,-15,-12,-8,-5,-3,1,7,9,11,11,11,6,0,0,4,7,9,8,3,2,5,6,7,8,9,9,5,3,5,7,4,1,2,3,0,-2,-6,-9,-4,0,2,4,7,11,12,12,13,13,9,2,2,5,7,9,7,2,2,5,9,10,12,12,12,8,7,10,13,5,3,4,4,0,-5,-6,-6,0,3,5,7,9,10,11,10,10,10,7,4,3,3,5,7,7,4,3,7,9,10,11,11,11,10,9,9,10,5,7,7,7,0,-6,-5,-4,0,4,6,9,9,10,8,5,4,3,4,4,4,2,2,4,5,5,6,9,9,8,7,8,8,9,9,7,2,3,5,5,3,0,-5,-4,-2,1,6,8,10,10,7,5,3,2,1,1,3,2,0,0,1,3,5,6,7,6,5,4,4,5,6,6,3,0,0,0,0,-3,-3,-4,-2,0,4,8,10,12,9,5,4,3,2,2,2,2,0,-1,-1,-1,0,5,6,2,1,1,2,3,3,1,0,0,0,0,-1,-4,-7,-3,0,0,2,5,8,9,10,7,3,3,4,4,2,2,2,1,0,0,0,0,4,5,1,0,1,3,3,3,2,1,1,1,0,-3,-6,-8,-1,4,5,7,7,7,7,8,5,1,3,8,6,1,1,3,4,3,3,3,3,4,4,3,3,5,5,5,4,6,8,7,6,-3,-8,-8,-7,0,6,6,7,6,4,5,6,4,1,3,8,6,1,2,5,6,6,5,4,4,4,4,4,5,6,6,7,7,9,10,10,9],
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
