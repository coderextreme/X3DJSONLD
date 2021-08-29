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
        texture=ImageTexture(url=['../../images/5/singapore8-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2821169622239519,103.94891185322548,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[15,16,16,14,12,9,7,4,3,1,1,0,1,4,6,10,10,8,5,1,1,2,4,6,12,19,21,14,9,9,10,13,14,8,2,3,5,11,10,13,15,14,11,7,3,1,0,0,0,1,5,8,9,8,5,2,0,0,3,5,7,10,15,17,13,10,10,12,15,16,8,2,3,4,5,3,10,15,15,14,8,1,0,-2,-3,-2,1,6,9,9,7,3,1,0,2,5,7,7,8,10,10,10,11,12,13,16,16,9,3,2,2,4,2,8,16,20,22,9,-3,-4,-3,-3,-2,1,8,10,10,8,5,4,3,4,6,7,6,6,6,7,7,9,12,14,14,13,6,1,0,0,4,2,9,17,25,28,10,-7,-7,-2,-1,-1,3,9,11,10,9,8,8,8,7,6,6,5,5,4,4,4,7,11,14,12,9,4,0,-1,-2,5,3,10,18,22,23,10,-1,-1,1,2,3,6,10,11,9,9,8,8,8,7,6,5,5,5,4,3,3,5,9,12,11,9,4,0,-1,-4,7,5,12,18,18,15,10,5,5,7,8,8,10,11,10,9,8,7,7,7,7,6,6,6,5,4,3,3,3,7,10,10,9,6,2,0,-4,12,12,14,17,16,13,8,5,5,7,9,11,13,15,13,9,6,3,3,5,7,7,7,6,5,4,5,7,9,10,11,9,7,7,6,3,0,18,19,17,15,14,11,7,3,4,6,9,12,16,19,16,10,5,0,1,4,7,8,7,5,4,5,7,12,15,14,12,7,5,8,11,8,6,15,17,16,13,12,9,7,4,5,6,8,11,14,15,13,9,6,5,7,10,11,10,8,5,4,4,7,12,15,13,10,5,3,7,10,11,13,9,12,12,12,10,8,6,5,5,6,8,10,9,8,7,7,9,13,16,17,16,12,8,5,3,4,6,9,12,10,8,4,1,4,8,14,19,8,10,10,10,8,7,6,6,6,6,8,9,9,9,9,11,14,18,18,17,14,11,8,7,6,8,9,12,13,10,7,4,3,7,12,16,20,8,9,8,6,6,6,6,6,6,6,7,9,11,12,14,16,19,21,18,14,10,9,9,9,10,12,13,15,14,11,7,4,4,11,17,18,19,5,5,5,5,5,6,6,6,7,7,8,10,11,13,14,15,16,16,14,11,10,10,12,15,17,17,17,17,16,11,7,5,6,16,23,18,12,2,1,2,3,5,6,7,8,8,9,9,10,12,13,13,13,11,9,8,8,9,12,17,22,25,23,21,19,16,11,7,6,8,20,28,17,5,2,1,3,4,6,8,9,10,10,11,10,11,11,10,11,11,8,4,4,6,8,11,15,22,25,22,19,17,14,11,8,8,11,22,28,15,2,3,4,5,6,7,9,11,11,12,13,11,10,9,7,8,8,5,1,1,4,7,9,12,18,20,17,15,14,13,10,9,11,15,22,26,14,3,5,4,5,6,9,11,11,11,13,14,13,11,9,7,7,7,5,2,2,6,8,9,11,14,15,12,9,11,11,10,10,14,18,21,22,13,5,8,4,4,6,9,12,11,10,12,15,15,12,10,8,7,7,6,5,6,10,11,11,11,12,11,5,3,6,8,8,10,16,21,20,18,12,7,3,-1,3,8,10,12,11,10,13,15,14,12,11,10,9,7,6,6,7,11,12,10,9,7,6,3,2,6,9,11,14,18,21,18,15,10,7,-4,-10,0,11,12,11,11,11,13,14,13,12,13,14,12,9,6,6,6,9,10,9,6,2,1,2,4,8,11,16,19,20,20,17,13,8,5,-4,-10,0,10,12,12,13,14,13,11,11,12,14,15,13,8,5,4,4,6,7,8,7,3,2,6,9,12,14,17,18,16,14,14,13,9,6,0,-4,1,8,11,14,17,18,14,8,9,11,14,15,13,8,4,1,1,3,5,8,9,8,8,12,15,16,17,16,14,8,4,9,13,11,9],
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
