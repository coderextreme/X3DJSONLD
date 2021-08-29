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
        texture=ImageTexture(url=['../../images/5/singapore4-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.247190112711976,103.61856206825804,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[3,4,5,4,3,1,0,0,-2,0,1,1,0,0,-1,0,3,6,8,7,3,0,-3,-3,0,1,1,1,2,4,7,10,11,11,8,5,1,4,6,6,6,3,1,0,-1,-1,0,0,-3,-3,-2,0,1,5,8,6,1,-4,-9,-9,-3,0,1,3,4,7,10,13,13,12,9,7,1,5,8,9,9,6,2,0,0,0,0,-1,-4,-4,-2,-1,0,2,5,3,0,-7,-14,-14,-8,-3,1,4,8,11,14,17,16,14,11,8,4,7,11,13,14,10,4,2,1,0,0,-1,-3,-3,-2,-1,0,0,1,0,-1,-7,-16,-18,-14,-7,0,6,11,15,19,21,19,16,12,9,6,10,13,14,14,10,5,3,3,2,0,0,-1,-2,-1,0,0,0,0,0,0,-6,-15,-19,-16,-9,0,8,15,19,22,22,20,17,12,7,8,12,15,12,9,7,5,6,7,5,2,0,0,0,1,1,0,0,0,1,1,-2,-11,-16,-15,-8,2,11,16,20,21,21,20,17,10,3,8,13,16,11,4,4,5,6,8,5,2,0,0,0,2,2,1,1,1,2,3,0,-7,-12,-13,-7,4,13,18,19,19,19,19,16,9,2,8,12,15,10,3,2,4,5,5,2,0,0,-1,0,0,0,1,1,1,1,3,1,-2,-5,-7,-4,5,12,15,16,17,16,16,14,9,4,8,11,13,9,3,2,4,4,3,1,0,-1,-2,-2,-1,0,0,0,0,1,3,3,1,0,-2,0,6,11,13,13,15,16,16,13,10,6,9,9,8,8,6,6,6,5,3,1,0,-1,-3,-3,-2,-2,-2,0,0,1,2,3,2,2,3,5,9,11,10,12,17,21,20,16,10,5,9,6,4,6,9,9,7,5,3,1,0,0,-2,-3,-3,-3,-3,-1,0,1,2,3,4,6,9,11,11,11,8,10,18,23,21,16,9,3,8,5,3,4,6,7,6,3,1,1,2,2,0,1,2,0,-2,-1,0,2,3,6,9,12,12,12,12,11,8,8,11,13,10,6,1,-1,5,4,3,3,4,5,5,3,0,1,4,4,4,5,7,4,0,0,0,2,4,7,13,15,15,14,14,12,9,7,7,7,3,0,-2,-4,3,2,2,3,5,6,7,4,0,1,3,4,5,5,6,6,5,4,2,2,3,7,13,16,16,15,13,11,8,9,14,16,9,4,4,5,1,0,0,2,5,8,10,6,1,1,3,5,7,7,6,8,10,8,4,3,4,7,12,15,16,15,13,11,8,10,19,23,14,8,10,14,-1,0,0,1,4,7,9,6,2,2,3,6,10,11,10,12,15,13,10,7,6,6,9,11,12,13,14,14,10,9,13,16,11,6,8,10,-3,-2,0,0,2,6,8,6,3,2,3,7,14,15,14,16,17,16,15,11,7,5,6,7,10,13,16,17,11,7,8,9,7,5,5,6,0,-3,-5,-3,0,2,5,5,4,4,5,9,14,16,15,16,16,14,12,9,5,3,3,5,9,15,23,24,16,9,8,9,7,6,5,5,1,-5,-11,-7,-2,0,2,4,5,6,7,10,15,16,16,15,13,11,9,6,2,0,0,4,8,17,29,31,20,11,9,8,7,6,5,5,0,-4,-8,-5,0,1,4,5,7,8,9,7,6,9,14,14,12,8,4,1,1,0,0,4,12,19,25,24,15,7,6,6,7,7,6,5,0,-2,-4,-2,1,3,5,7,9,10,10,5,-2,1,10,13,10,4,-1,-1,0,1,1,6,16,21,20,15,9,4,3,4,7,8,7,5,3,2,1,3,4,4,5,10,15,13,10,1,-10,-7,0,4,6,1,-6,-7,-2,0,3,8,16,19,17,13,8,5,5,7,8,9,8,6],
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
