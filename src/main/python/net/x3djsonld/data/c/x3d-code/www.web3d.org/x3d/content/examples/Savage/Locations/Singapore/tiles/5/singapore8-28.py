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
        texture=ImageTexture(url=['../../images/5/singapore8-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2821169622239519,103.99200095561254,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[3,0,4,9,7,4,8,12,16,20,19,18,16,15,12,7,7,9,15,24,22,13,5,0,-1,2,5,4,4,7,8,5,4,8,11,8,3,0,9,18,11,4,6,8,14,19,18,17,16,16,13,10,11,14,18,24,25,21,13,2,-1,1,4,4,4,4,4,3,3,6,9,6,2,2,13,23,13,2,3,4,9,15,15,14,14,14,14,12,15,19,23,24,26,26,20,6,0,1,3,6,6,1,0,0,2,5,8,5,1,2,13,22,11,-1,0,0,4,7,8,9,9,9,10,12,16,20,23,25,25,22,17,10,6,6,7,10,8,0,-2,-2,0,5,10,6,1,3,12,19,7,-5,-3,-1,0,0,2,4,4,3,7,13,16,19,22,25,23,16,13,12,11,11,12,13,10,0,-5,-5,-1,5,11,6,4,7,11,14,8,1,1,0,0,1,3,5,4,2,7,15,19,23,23,22,17,12,9,9,10,10,12,13,11,2,-2,-1,0,4,7,3,6,11,9,8,9,11,7,3,3,4,5,6,5,3,9,18,24,28,24,17,11,8,6,6,6,8,10,12,11,4,1,2,2,4,3,2,3,7,6,7,9,12,9,7,7,6,5,3,5,7,18,33,36,33,26,14,8,6,3,2,2,5,7,10,9,3,0,0,0,4,7,7,0,2,4,6,8,10,10,11,10,8,4,0,4,12,29,50,49,38,26,13,6,4,2,0,0,2,5,8,7,1,-1,-2,0,6,13,14,2,3,4,5,8,12,11,11,10,9,4,0,10,21,35,50,47,36,24,13,7,6,4,1,0,-1,-1,3,4,2,1,3,5,11,16,16,7,5,5,5,9,14,12,10,9,8,5,4,16,31,39,45,41,32,22,13,9,10,8,5,0,-7,-9,-2,1,3,6,11,15,17,18,17,12,10,9,7,9,13,11,9,9,8,9,11,24,39,41,39,34,26,20,14,11,9,9,8,4,-2,-5,0,1,4,7,10,13,15,16,16,16,16,13,9,9,11,9,7,8,10,14,19,32,46,43,33,26,21,17,15,12,8,8,10,8,4,0,0,1,5,8,7,8,11,13,14,11,16,13,10,11,13,11,10,11,12,19,28,36,44,39,29,22,16,14,15,13,8,8,9,9,5,2,2,3,6,8,8,9,10,12,13,2,14,12,10,12,16,15,14,14,14,25,37,39,38,32,26,19,12,10,13,12,9,8,8,6,5,3,4,5,7,9,10,11,10,10,14,-2,9,12,16,19,23,23,22,22,21,30,39,37,34,28,21,16,11,10,11,11,9,8,6,5,5,5,7,8,8,8,10,12,11,12,17,-6,3,13,23,28,34,33,32,32,32,35,39,35,30,24,16,13,11,10,10,9,8,7,4,4,4,7,11,12,8,6,9,12,12,14,22,-4,1,15,30,39,49,45,39,37,35,34,32,29,26,19,12,8,6,6,7,8,8,5,1,0,4,7,12,13,8,5,9,12,11,12,19,0,0,18,35,51,67,56,44,38,34,29,24,22,21,15,8,2,-1,0,5,7,7,3,-1,-2,2,8,12,13,7,5,8,11,8,8,13,1,1,15,29,44,59,50,40,34,28,23,19,16,14,11,7,1,-3,0,7,9,7,3,-1,-2,2,7,10,10,5,3,5,7,6,6,9,2,3,9,15,25,37,34,32,27,21,18,15,11,7,7,8,4,-1,2,12,13,8,3,0,0,2,5,6,6,2,0,1,2,3,5,6,2,3,5,8,14,21,21,23,19,14,10,6,4,2,4,7,4,0,2,13,14,9,4,1,1,3,5,6,6,2,0,0,0,2,4,5,1,2,3,4,8,11,12,13,11,9,1,-7,-4,0,2,3,1,-2,2,12,13,10,6,3,2,4,7,9,9,4,0,0,0,1,3,5],
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
