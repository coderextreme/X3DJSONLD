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
        texture=ImageTexture(url=['../../images/5/singapore4-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.247190112711976,103.86273364845137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[-4,-5,-5,-3,0,7,15,22,29,31,31,32,32,32,33,33,33,33,32,31,30,26,21,16,12,9,8,7,6,7,9,11,10,8,3,-1,-7,-5,-5,-3,0,6,15,23,27,30,31,31,31,31,32,32,32,33,33,32,32,31,29,26,22,17,13,10,8,7,7,8,8,7,3,-5,-12,-17,-5,-3,0,6,14,21,27,28,29,30,30,30,30,31,31,32,32,33,33,33,32,31,29,26,21,17,14,11,10,9,8,7,6,2,-7,-16,-21,-3,0,5,14,21,25,27,28,28,29,29,29,29,30,30,31,31,32,32,33,32,32,30,28,26,23,18,16,16,14,10,8,7,4,-3,-11,-17,0,5,12,19,24,25,26,26,27,27,27,27,28,28,29,29,30,30,31,31,32,32,31,30,29,26,23,20,19,16,12,8,8,6,1,-5,-12,4,11,17,21,23,24,25,25,25,25,26,26,26,27,27,28,28,29,29,30,31,31,32,31,29,27,26,23,19,15,11,8,8,7,5,1,-6,11,16,20,21,22,22,23,23,23,23,24,24,25,25,26,26,27,27,27,28,28,30,31,31,29,28,27,24,19,14,10,8,8,7,7,4,-4,16,18,19,20,20,20,21,21,21,21,22,22,22,23,23,24,24,24,25,25,26,27,28,29,31,29,25,21,16,12,9,8,8,7,5,1,-5,20,18,18,18,18,18,18,18,19,19,19,19,20,20,21,21,21,21,21,22,23,24,24,25,28,27,22,17,12,10,9,8,8,6,4,1,-3,21,18,15,15,16,16,16,16,16,16,17,17,17,17,17,18,18,18,18,18,19,19,20,20,22,20,16,12,8,6,6,6,7,6,5,4,4,24,19,14,13,13,13,13,13,13,13,14,14,14,14,14,14,15,15,15,15,15,15,15,15,14,12,10,7,4,3,3,4,5,6,6,7,11,30,21,13,11,11,11,11,11,11,11,11,11,11,11,11,11,11,12,12,11,11,11,11,10,8,7,5,4,3,3,3,3,4,5,7,9,12,35,23,12,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,8,8,8,7,7,6,4,3,2,2,3,3,2,2,3,5,8,11,13,35,21,10,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,5,5,4,3,2,2,2,2,3,2,2,3,5,7,9,11,35,20,8,5,5,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4,3,3,3,2,2,2,2,2,2,2,2,4,5,6,8,9,35,20,7,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,3,3,3,3,2,2,2,2,2,2,2,2,2,2,4,6,6,7,8,35,20,6,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,3,5,6,7,7,7,35,20,6,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,3,5,6,6,6,7,35,20,6,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,3,4,5,6,6,6,6,35,20,6,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,3,4,4,5,6,6,6,5,35,20,6,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,3,4,5,5,5,6,6,5,4,35,20,6,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,3,4,4,5,6,6,6,6,5,5],
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
