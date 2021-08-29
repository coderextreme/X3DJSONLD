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
        texture=ImageTexture(url=['../../images/5/singapore6-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.264653537467964,104.00636398974156,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[7,7,9,10,7,4,5,7,4,1,5,9,10,8,10,14,12,10,9,7,7,7,3,-2,-4,-2,-1,0,2,7,11,13,12,7,4,8,13,4,4,6,8,6,4,5,6,2,0,2,6,7,8,9,12,13,13,12,11,10,11,7,2,0,0,0,3,6,13,16,17,15,11,9,12,14,3,3,5,6,6,4,4,4,0,-2,0,3,5,7,9,10,12,13,13,12,11,11,10,5,2,1,2,5,10,16,20,19,17,14,11,11,13,4,8,8,8,7,6,2,0,-1,-2,0,4,7,10,7,4,5,9,8,6,5,6,5,2,1,0,1,5,10,16,18,17,14,11,7,5,5,6,12,11,10,8,7,1,-3,-2,-2,0,5,8,11,7,1,3,6,5,1,1,2,2,0,0,0,1,5,10,14,17,14,11,6,2,0,0,5,10,11,11,10,8,5,3,0,0,1,5,7,10,9,7,7,9,7,5,3,3,2,2,2,1,2,7,10,13,13,10,6,2,0,-1,-1,4,6,8,10,10,9,9,9,5,2,3,6,7,8,10,11,12,13,11,9,7,5,5,5,5,3,3,7,10,11,10,5,1,0,-1,-2,0,2,1,2,4,6,8,5,3,4,3,7,10,9,7,8,10,12,14,13,11,8,5,4,5,5,4,4,6,7,8,7,4,2,1,0,0,1,0,0,0,0,3,7,3,0,2,4,9,13,10,5,6,8,12,17,15,13,9,5,4,5,5,4,4,5,5,4,4,3,2,2,3,4,4,1,1,1,2,7,11,6,0,1,3,6,8,6,4,5,8,13,18,16,12,8,5,4,5,6,5,5,6,5,3,2,2,2,3,4,5,5,3,5,5,6,11,16,9,2,1,2,3,4,4,4,7,10,14,18,16,10,7,5,5,5,6,6,6,7,6,2,1,1,3,5,7,6,6,6,8,7,7,10,13,11,9,7,5,6,8,10,13,14,16,16,17,11,4,2,3,4,3,5,9,11,9,6,2,1,4,7,11,13,10,7,8,11,9,7,8,10,12,14,12,8,10,12,15,21,21,21,18,14,6,-2,-2,1,3,1,4,13,15,10,6,3,2,6,12,17,19,14,8,10,12,8,4,6,7,8,9,8,8,9,11,13,15,16,16,15,14,5,-3,-2,3,6,4,6,11,12,10,7,7,6,4,6,13,18,16,12,11,13,8,1,3,5,3,1,4,7,9,9,8,8,8,9,12,13,6,-2,-1,6,9,7,7,9,9,9,10,12,10,2,1,8,16,18,17,12,11,6,2,2,4,2,0,5,10,10,9,8,7,6,5,6,9,5,0,1,7,10,11,11,10,8,6,8,12,12,6,2,5,11,16,18,13,8,5,2,2,3,2,1,7,13,13,11,9,7,4,1,1,3,4,2,4,8,11,14,14,11,7,3,5,12,15,11,7,4,4,13,19,9,4,3,2,4,6,4,2,7,12,12,11,10,11,10,8,8,9,9,8,9,10,11,13,12,9,6,1,3,9,13,12,9,7,8,13,17,4,0,0,2,6,10,6,3,6,10,10,10,12,15,17,18,17,16,15,15,13,12,11,10,9,8,4,0,0,6,10,11,11,12,13,15,16,1,-4,-1,3,8,13,11,9,10,11,11,11,14,17,17,15,16,18,17,13,11,9,8,7,8,9,6,0,0,6,10,9,8,9,9,10,9,-1,-10,-3,4,10,17,17,15,15,14,14,14,16,18,14,9,13,19,16,11,7,5,5,5,7,11,9,1,0,6,9,6,4,4,4,2,2,0,-4,0,6,13,20,19,16,13,11,12,14,15,17,14,9,13,20,17,10,7,4,4,5,7,10,9,2,0,4,5,2,0,2,2,2,1,2,3,5,8,16,23,20,14,10,6,9,13,15,17,15,10,14,20,18,12,7,4,4,6,8,10,9,5,2,2,1,-1,-2,0,3,4,4],
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
