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
        texture=ImageTexture(url=['../../images/5/singapore25-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4305560726498494,103.8914597167094,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[68,70,70,69,66,61,55,49,45,43,43,43,43,41,32,18,5,-6,-10,-8,-6,-5,-7,-11,-14,-17,-18,-15,-12,-7,-2,1,7,16,24,27,28,67,68,70,70,69,65,60,54,48,44,43,43,42,41,33,19,5,-7,-12,-8,-5,-3,-3,-5,-9,-15,-16,-11,-6,-2,1,3,6,12,19,25,28,62,66,68,69,70,68,63,58,52,47,44,43,42,40,34,23,9,-6,-12,-9,-5,-1,0,-1,-5,-11,-13,-7,-2,1,3,5,6,10,15,21,25,56,63,66,67,69,69,66,61,55,49,46,43,40,38,35,28,14,-4,-13,-13,-8,0,3,1,-1,-7,-8,-2,1,2,4,5,6,8,11,15,20,49,57,62,65,67,68,68,64,58,51,45,41,38,36,32,27,14,-2,-11,-11,-7,0,4,2,0,-2,-2,1,4,4,5,6,7,8,10,13,16,41,49,57,63,65,66,67,67,61,51,44,38,35,33,28,21,10,-1,-8,-8,-5,0,3,3,2,1,1,3,5,6,6,7,8,8,9,11,14,36,42,50,57,62,64,66,64,56,45,37,31,28,26,22,15,7,0,-4,-6,-5,0,2,3,3,2,3,4,6,5,6,7,7,8,9,10,12,33,37,42,49,57,62,62,57,46,33,26,21,19,17,14,10,6,2,-1,-6,-5,0,2,3,2,1,1,4,6,5,5,6,7,8,9,10,11,34,36,37,41,49,55,52,44,34,22,16,13,11,10,8,7,6,6,3,-1,-2,1,2,3,2,1,2,5,7,6,6,7,8,9,10,11,11,35,37,34,33,39,43,38,29,20,12,8,5,5,6,6,7,9,12,10,5,2,3,3,4,4,4,4,7,9,9,9,9,9,10,11,12,12,33,34,28,24,29,32,26,17,10,6,3,2,2,3,5,8,12,16,14,8,5,5,5,5,5,6,6,8,10,10,10,9,10,11,11,11,11,26,25,19,15,18,21,16,10,6,4,2,2,2,4,6,9,14,18,15,8,5,6,8,8,8,7,7,9,11,10,9,9,9,10,10,11,11,18,17,12,8,10,12,10,6,4,3,3,3,3,4,7,10,13,16,14,8,6,7,9,10,10,9,8,10,11,10,9,8,8,9,10,10,10,11,10,8,6,8,9,9,7,6,5,5,5,5,6,6,7,9,11,11,9,8,9,9,10,10,9,8,9,10,10,10,8,7,8,9,10,10,6,6,6,6,6,7,8,8,7,6,6,7,7,7,6,6,6,8,9,9,9,8,9,10,10,8,8,9,9,10,10,8,7,7,9,9,9,8,8,8,8,8,8,8,7,7,7,7,7,7,8,8,6,6,8,9,8,8,7,8,9,9,8,7,8,8,9,9,8,8,8,9,9,8,8,9,9,9,8,8,8,7,7,7,7,7,8,9,8,6,6,8,8,8,8,7,7,8,8,7,7,7,8,9,10,9,9,9,9,9,8,9,9,9,9,9,9,9,8,7,7,7,7,8,9,8,7,7,8,8,9,8,7,7,7,7,8,7,6,7,9,11,10,10,10,10,11,10,9,9,9,8,9,9,9,9,8,7,7,8,9,9,8,8,7,7,8,9,9,8,7,7,7,8,7,6,6,9,10,10,10,10,11,12,12,9,8,8,7,7,8,8,9,8,8,8,9,10,10,9,8,7,6,7,8,9,9,9,8,8,8,7,6,6,8,9,10,11,11,11,11,11,8,8,7,7,7,8,8,9,9,9,9,10,10,10,10,8,7,6,6,8,9,10,10,9,9,8,7,6,6,7,9,10,11,11,11,11,10,7,7,8,8,8,8,9,9,9,9,9,8,9,9,9,9,8,7,7,7,8,8,8,9,9,9,8,7,7,8,9,10,11,11,11,11,10,6,7,8,9,9,9,9,9,9,9,9,8,8,7,8,9,9,8,8,7,7,7,8,9,9,8,8,7,7,8,9,10,10,10,10,10,10],
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
