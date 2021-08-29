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
        texture=ImageTexture(url=['../../images/5/singapore9-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2908486746019459,103.70474027303216,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[-11,-8,-5,-2,1,6,7,8,8,9,8,7,4,2,1,1,3,7,8,6,4,1,0,1,1,2,3,3,3,4,5,6,8,8,8,9,-14,-11,-6,-2,1,4,7,7,6,4,3,2,-1,-6,-6,-1,2,5,6,3,1,0,0,0,0,1,3,3,3,3,4,5,6,7,8,8,-13,-10,-6,-3,-1,1,4,6,3,-1,-4,-6,-14,-24,-22,-10,-1,0,0,-5,-7,-4,-2,-1,0,0,2,3,3,3,3,4,5,6,8,8,-11,-8,-5,-3,-1,0,2,3,0,-5,-8,-10,-19,-30,-28,-14,-6,-3,-4,-9,-10,-8,-6,-4,-2,0,0,2,3,3,3,3,4,5,6,7,-9,-6,-3,-1,0,1,1,1,-1,-6,-8,-9,-15,-24,-24,-15,-9,-4,-3,-6,-9,-11,-11,-8,-6,-3,0,0,2,3,3,3,3,4,5,6,-6,-4,-1,0,1,1,0,0,-2,-5,-6,-7,-10,-16,-16,-12,-8,-3,-2,-4,-6,-9,-11,-10,-9,-6,-3,0,0,2,3,3,3,3,4,5,-4,-1,0,1,1,1,0,0,-2,-4,-6,-6,-8,-9,-9,-7,-4,-2,-1,-2,-3,-5,-8,-11,-12,-9,-5,-2,0,0,2,3,3,3,3,4,-1,0,1,1,1,0,0,0,-2,-4,-5,-5,-5,-5,-3,0,0,1,1,0,0,-1,-4,-9,-11,-9,-7,-4,-1,0,1,2,3,3,3,4,0,1,1,2,1,0,0,0,-2,-3,-4,-4,-3,-1,1,4,7,7,7,7,5,2,0,-4,-6,-6,-6,-4,-3,0,0,2,3,3,3,4,1,1,2,1,0,0,0,0,-1,0,0,1,2,3,5,9,11,11,11,10,8,4,0,-1,-3,-4,-4,-4,-3,0,1,3,3,4,4,4,1,2,2,1,0,0,0,0,1,5,10,16,16,13,11,10,11,12,11,8,5,2,0,0,-1,-2,-2,-1,-1,1,2,4,4,4,4,5,17,13,10,9,6,4,3,3,6,12,21,29,29,22,17,12,10,11,9,5,2,0,-1,-1,-1,-1,0,0,1,3,4,5,5,5,5,5,57,44,36,29,22,16,14,13,16,21,27,32,33,29,24,16,11,9,5,2,0,0,-1,-1,0,0,0,1,2,4,5,6,6,5,5,5,95,77,65,56,42,30,25,23,24,27,30,32,34,34,29,21,14,8,3,0,-1,-1,-1,-1,0,0,1,3,4,5,6,6,6,6,5,5,113,102,95,86,67,45,33,26,24,26,28,30,32,33,32,28,21,10,2,0,-1,-1,-1,-1,0,1,2,4,5,5,6,6,6,6,6,5,122,119,115,106,82,54,37,28,24,24,26,27,29,30,32,32,25,12,2,0,0,-1,0,0,0,2,4,4,5,5,6,6,6,6,6,6,124,121,111,95,72,49,35,28,25,24,24,25,25,26,28,29,23,10,2,1,0,0,0,0,2,4,6,5,5,6,6,7,7,6,6,6,122,115,98,76,57,40,32,28,26,24,24,24,23,22,22,22,17,9,3,2,1,0,0,3,5,6,7,6,5,6,7,7,7,7,6,6,112,99,80,61,47,38,32,28,26,24,24,24,23,21,18,13,10,7,5,4,4,4,4,6,7,8,8,7,6,6,6,7,8,7,7,6,99,80,62,49,40,36,32,29,26,24,24,24,23,21,15,6,2,5,6,6,7,8,9,9,9,9,9,8,7,6,5,7,8,8,7,7,83,65,52,44,39,35,32,29,26,23,23,23,21,16,10,3,0,2,4,5,7,9,11,10,9,9,9,10,10,7,5,7,8,7,6,5,67,53,46,43,39,36,33,29,25,22,22,22,18,11,5,1,0,0,1,3,5,9,10,10,9,8,9,12,13,8,5,7,8,7,5,4],
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
