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
        texture=ImageTexture(url=['../../images/5/singapore0-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2122632632,103.76219240954823,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[4,5,5,4,4,4,4,5,8,10,7,2,1,1,1,2,2,3,3,3,3,2,2,2,3,2,2,2,1,0,-4,-12,-21,-25,-26,-15,3,3,3,3,3,4,7,11,11,11,6,1,0,0,0,1,1,2,2,3,2,2,2,2,2,2,2,1,0,-2,-9,-21,-30,-26,-21,-14,1,0,0,1,3,5,9,13,11,9,5,1,0,0,0,0,0,0,1,2,3,3,2,2,2,2,2,1,0,-5,-12,-24,-31,-24,-18,-13,-1,-4,-2,0,2,7,10,13,10,6,3,2,1,0,0,0,0,0,0,2,3,3,2,2,2,2,1,1,0,-8,-16,-23,-28,-22,-16,-12,0,-3,0,3,5,8,10,11,8,4,3,2,1,0,0,0,2,6,7,5,4,4,3,2,2,2,1,0,0,-9,-16,-20,-23,-18,-14,-12,3,0,3,9,10,10,9,8,6,4,3,2,1,0,1,4,9,16,16,8,4,4,3,3,2,2,1,0,-1,-9,-14,-16,-17,-14,-12,-13,4,1,5,11,12,11,10,7,6,4,3,3,2,2,5,10,14,18,18,10,6,5,4,3,3,2,2,1,-1,-7,-11,-13,-14,-12,-12,-13,2,1,5,10,11,12,11,9,7,5,4,4,4,5,10,18,20,18,15,11,8,6,4,4,3,3,2,2,0,-5,-9,-11,-13,-13,-13,-12,0,0,4,8,10,12,12,11,9,6,5,4,6,8,13,20,21,17,14,12,9,7,5,4,4,3,3,2,0,-4,-8,-11,-13,-13,-13,-12,0,0,2,5,8,11,12,12,10,8,6,5,7,11,15,19,20,17,14,11,9,8,5,4,4,4,3,3,0,-4,-9,-11,-13,-13,-13,-12,0,0,0,2,5,9,11,12,11,10,8,6,8,12,15,18,18,17,14,11,9,8,6,4,4,4,4,3,1,-4,-10,-12,-13,-13,-12,-12,0,0,0,0,2,6,9,12,12,12,11,9,9,12,15,16,17,16,14,11,9,8,6,5,4,4,4,3,1,-6,-12,-12,-12,-12,-12,-11,0,0,0,0,0,3,6,10,11,13,12,11,11,12,14,15,15,15,14,11,9,8,6,5,4,4,4,3,1,-5,-11,-10,-10,-9,-6,-3,1,0,0,0,0,0,3,6,10,13,13,13,13,13,14,15,15,15,13,11,9,8,6,5,4,4,4,4,3,-1,-6,-6,-5,-2,2,10,2,0,0,0,-1,-1,0,4,9,13,16,17,17,18,19,21,21,18,15,11,9,8,6,5,4,4,4,6,6,5,3,3,3,6,9,18,6,3,1,0,0,0,0,1,8,17,21,24,26,28,31,34,32,25,19,13,10,8,7,6,5,5,6,10,14,18,21,21,21,17,14,19,9,8,6,6,6,6,6,7,14,23,28,31,34,35,38,41,39,32,26,21,18,17,18,17,17,16,17,20,24,30,34,34,33,26,20,20,13,14,17,20,22,24,25,26,30,34,36,38,39,40,41,42,41,38,36,36,37,38,40,41,41,40,39,38,38,39,40,39,38,32,27,23,16,20,25,29,32,35,37,39,40,42,42,43,43,43,43,42,41,41,43,46,49,52,55,57,57,55,53,49,46,44,43,42,41,37,33,26,20,24,27,30,32,35,37,39,41,42,43,43,43,42,42,41,40,40,42,45,49,53,56,58,58,56,53,50,47,44,42,43,42,40,37,32,23,27,28,30,32,35,37,39,41,42,43,43,43,42,41,40,40,40,41,44,49,54,58,60,59,57,54,51,47,44,41,42,42,41,40,36,27,26,28,30,32,35,37,40,42,43,43,43,42,42,41,40,40,40,40,42,47,55,61,61,59,57,55,51,48,43,40,39,39,40,41,39],
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
