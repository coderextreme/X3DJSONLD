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
        texture=ImageTexture(url=['../../images/5/singapore6-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.264653537467964,103.97763792148352,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[9,11,12,12,11,12,11,10,8,8,8,5,1,4,8,6,3,1,1,2,6,7,8,8,4,0,-2,-3,0,3,4,6,8,9,10,11,12,7,11,13,11,10,9,7,7,7,6,5,5,4,9,14,12,9,7,5,6,9,10,9,8,4,2,0,0,0,1,4,8,8,9,9,9,9,7,10,13,11,9,7,5,5,4,4,3,5,7,12,17,16,13,10,8,8,11,11,9,8,5,4,3,2,0,0,5,9,8,8,9,9,7,10,9,8,9,9,8,6,4,3,2,2,6,10,14,17,15,11,9,8,8,9,8,5,5,7,7,5,3,0,0,2,5,7,8,9,11,8,12,8,6,8,9,8,8,5,2,2,2,6,11,13,13,11,8,7,7,8,8,7,3,4,9,11,8,5,2,0,1,2,5,8,10,12,9,12,11,10,10,10,8,8,6,4,5,5,7,10,7,4,4,5,6,7,8,10,9,5,6,12,14,10,8,9,9,6,3,5,7,10,12,9,12,12,13,11,10,8,7,7,8,8,8,8,7,2,-2,0,3,5,6,8,12,11,9,9,14,14,11,11,16,16,10,6,6,7,10,11,10,10,10,10,10,9,7,5,7,9,7,6,6,7,3,0,0,3,4,3,5,8,9,8,8,10,9,7,7,13,16,12,9,8,8,13,17,13,7,7,6,8,9,6,4,7,10,7,4,4,6,4,1,1,2,2,2,3,5,7,7,7,5,4,3,4,10,14,13,12,10,10,16,20,15,2,3,3,6,8,7,6,7,9,7,4,4,5,4,3,2,2,2,4,5,6,6,4,3,1,1,2,4,7,10,12,13,12,12,13,15,13,0,0,1,5,9,9,9,8,7,6,4,3,3,4,5,3,1,3,6,8,8,6,2,0,-1,0,1,4,5,7,11,14,14,14,11,8,10,0,0,1,6,9,9,9,8,8,7,6,4,3,4,5,3,1,2,5,7,7,6,1,0,-3,-3,1,5,6,8,11,14,19,20,15,10,10,2,2,3,7,10,9,9,9,9,9,7,5,3,4,5,4,1,2,3,5,6,5,2,0,-5,-4,2,7,8,9,11,15,23,27,20,14,11,3,5,8,8,9,9,8,10,13,12,10,7,4,4,5,4,4,4,4,6,9,8,4,0,-3,-2,4,9,9,10,14,18,23,25,19,15,15,2,8,14,10,7,8,8,12,16,15,12,9,6,4,4,5,8,8,6,8,13,12,7,3,0,1,7,11,10,11,17,22,22,21,17,15,18,3,8,12,10,8,10,13,14,16,13,10,7,3,5,8,10,11,10,9,10,13,13,13,10,7,7,10,12,11,13,20,25,23,21,17,14,20,3,7,10,9,8,13,18,16,14,11,7,3,0,5,13,15,14,13,12,12,12,14,18,18,15,13,13,13,12,15,23,28,24,21,17,14,22,2,4,7,8,9,12,15,13,10,8,6,3,1,6,14,15,14,14,13,13,12,14,19,19,14,10,8,10,15,21,24,26,23,21,17,14,21,1,2,3,8,11,11,10,8,5,5,5,4,4,8,13,15,15,14,14,13,13,15,20,19,12,6,3,6,18,27,24,23,22,20,17,15,19,0,0,0,4,7,5,2,3,5,7,9,7,5,7,11,12,13,14,15,15,14,15,18,17,11,8,8,11,23,30,27,23,21,18,16,14,14,0,-1,-4,0,1,-2,-6,0,6,10,14,10,5,6,8,9,10,13,16,17,15,15,15,14,11,11,14,19,29,33,29,24,20,16,14,12,9,1,0,0,0,1,-2,-6,0,7,11,14,11,8,7,7,7,7,10,15,16,15,13,10,10,12,16,21,26,30,32,28,24,19,16,11,7,4,2,3,4,3,2,0,-3,2,8,11,14,12,11,9,7,6,4,7,12,14,12,10,6,7,13,20,27,30,29,29,26,23,19,16,8,1,0],
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
