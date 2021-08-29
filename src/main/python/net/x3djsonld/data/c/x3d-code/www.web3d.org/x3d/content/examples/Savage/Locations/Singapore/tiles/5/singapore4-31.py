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
        texture=ImageTexture(url=['../../images/5/singapore4-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.247190112711976,104.0350900579996,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[1,7,12,13,13,9,4,2,1,-1,-4,-9,-14,-9,-2,6,17,24,29,23,12,7,6,5,5,5,5,6,6,6,8,9,9,9,10,11,0,4,9,9,9,7,6,5,5,2,0,-5,-12,-6,2,10,19,29,42,36,22,14,11,7,3,0,0,1,3,5,8,10,10,10,10,10,2,6,8,7,5,6,8,8,7,5,3,-1,-6,-1,6,11,16,28,43,40,28,19,13,6,1,-1,-1,0,1,4,8,11,11,11,8,8,10,13,12,7,3,6,10,9,7,6,6,5,2,5,9,11,11,19,30,33,30,22,11,3,-1,-4,-4,-2,0,3,8,11,12,11,7,6,19,22,22,15,8,9,13,10,7,8,9,9,7,9,11,10,9,13,21,25,27,19,7,0,-5,-6,-6,-4,-2,0,5,9,11,11,7,5,25,37,43,33,20,16,12,10,8,8,10,8,6,8,12,12,11,14,17,18,17,9,-1,-7,-10,-10,-10,-8,-6,-2,1,5,8,9,8,7,27,40,47,37,24,16,9,8,7,8,9,8,5,7,10,11,12,13,14,12,9,1,-8,-12,-13,-13,-12,-11,-9,-5,-1,2,6,8,9,9,22,26,27,20,13,6,1,2,5,6,8,8,6,6,6,8,11,12,13,9,3,-2,-8,-12,-14,-14,-12,-10,-8,-5,-1,2,4,6,10,11,17,14,10,7,4,0,-3,0,2,3,5,6,7,5,3,5,8,9,10,5,-1,-6,-7,-10,-12,-13,-11,-8,-6,-3,0,3,4,6,12,13,15,12,7,4,1,0,0,0,0,0,0,3,8,8,6,5,6,3,0,-2,-6,-7,-5,-5,-6,-6,-6,-5,-3,0,3,6,8,10,15,16,12,9,5,2,0,0,0,0,-2,-3,-4,1,9,10,9,7,4,0,-7,-9,-9,-7,-4,-2,-1,-1,-2,0,1,3,6,8,10,13,16,16,10,7,2,1,0,0,0,-2,-3,-3,-1,2,7,11,14,11,7,0,-9,-10,-7,-6,-5,-4,-1,0,1,3,4,6,7,8,9,10,11,9,8,4,1,0,0,0,0,-2,-3,-1,0,3,6,11,17,14,7,0,-10,-10,-5,-4,-6,-5,-2,0,4,7,7,8,8,8,9,7,5,3,1,1,1,1,3,3,3,1,0,0,1,3,4,8,11,7,1,-2,-7,-6,-1,-1,-3,-3,-1,1,4,8,10,10,9,9,9,8,5,1,-2,0,0,3,5,5,5,5,5,4,3,3,3,4,6,1,-3,-6,-7,-3,0,1,0,0,0,2,5,8,11,12,10,9,10,9,4,0,0,0,0,0,1,2,3,6,9,6,2,2,5,3,1,-4,-13,-15,-14,-9,-4,0,0,2,4,4,4,5,9,13,14,13,12,9,4,0,3,2,0,0,-2,-1,0,6,11,7,1,3,6,3,-1,-10,-20,-22,-21,-15,-9,-3,1,5,9,9,4,4,8,12,17,17,14,9,4,2,10,7,4,2,1,0,0,4,7,6,4,4,5,2,-2,-8,-15,-15,-14,-10,-5,-1,2,9,18,20,17,14,11,11,12,13,12,9,6,5,17,12,8,7,6,3,1,2,4,6,8,7,5,1,-3,-5,-8,-8,-7,-5,-1,0,2,12,25,32,32,26,16,10,7,8,9,10,8,9,13,11,10,9,9,10,9,5,2,4,7,4,1,-2,-5,-6,-7,-4,0,1,1,2,3,13,29,41,49,46,35,25,17,12,10,8,3,3,9,10,10,11,13,16,18,10,1,3,6,1,-4,-6,-8,-8,-7,-1,7,8,5,4,3,15,32,49,66,66,53,40,27,18,11,4,-1,-2,6,8,10,11,11,11,10,5,0,1,3,0,-4,-6,-6,-4,-1,3,8,8,5,4,5,14,28,42,54,53,39,25,12,2,-5,-10,-12,-7],
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
