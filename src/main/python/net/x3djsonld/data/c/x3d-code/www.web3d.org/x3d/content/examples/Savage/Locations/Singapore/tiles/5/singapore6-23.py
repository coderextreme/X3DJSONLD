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
        texture=ImageTexture(url=['../../images/5/singapore6-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.264653537467964,103.92018578496744,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[5,6,6,6,6,7,6,3,0,1,4,4,4,3,5,6,7,7,5,2,-2,-4,-2,0,1,4,6,7,6,4,1,1,5,7,5,3,3,5,6,8,9,10,10,9,7,6,7,8,6,2,1,3,5,7,8,8,6,2,0,0,1,1,3,7,9,7,6,6,5,7,7,6,5,5,5,6,9,12,14,14,13,11,10,10,9,5,0,0,3,5,8,9,9,8,5,4,4,2,0,1,6,9,8,8,9,9,8,6,6,6,5,3,6,10,15,19,20,20,16,12,8,4,1,0,1,4,8,10,11,9,8,7,6,4,1,-1,-1,4,7,7,7,9,9,7,4,4,3,3,3,6,10,17,22,23,22,17,12,6,1,0,0,3,6,9,12,11,9,8,7,6,4,0,-3,-3,2,6,6,6,8,9,6,3,1,1,2,4,5,8,13,18,17,15,11,8,3,0,1,4,5,6,7,9,10,9,9,8,6,3,0,-2,-3,1,4,4,4,6,7,6,4,4,5,5,6,5,6,9,12,9,4,4,4,2,0,2,7,8,5,5,6,8,10,10,8,6,3,1,0,0,1,3,2,2,5,7,7,7,8,9,9,8,7,6,6,5,0,-3,0,2,0,-3,0,6,8,7,7,7,8,8,7,5,4,5,4,2,1,1,2,2,3,5,7,7,7,8,8,9,10,10,7,3,0,-6,-9,-3,2,0,-6,-2,5,9,8,8,8,7,6,5,3,3,6,7,6,4,3,2,3,4,5,7,8,9,8,9,10,10,10,9,6,3,0,-1,0,0,-1,-5,-1,6,8,7,6,7,6,5,4,3,3,4,6,7,7,5,5,6,6,5,5,6,8,10,11,12,9,9,9,9,8,7,6,3,0,-2,-3,0,6,7,4,4,5,5,5,4,4,3,2,3,7,9,8,8,10,10,5,3,4,7,11,14,13,9,8,8,8,7,9,10,7,4,3,3,4,7,8,8,8,7,7,5,6,7,7,5,4,6,8,10,10,10,9,4,1,2,4,9,13,12,8,7,6,5,6,9,12,11,8,9,11,11,9,9,10,11,10,8,6,7,10,10,6,4,5,6,11,13,11,8,3,0,0,1,6,10,10,7,7,7,6,6,8,9,6,3,8,13,13,11,9,9,9,9,8,5,5,6,5,2,1,2,5,10,12,8,4,2,1,0,0,1,3,5,5,6,7,7,6,6,5,1,-1,4,13,14,11,9,7,6,8,7,4,3,2,0,-1,-2,0,4,10,11,4,0,1,2,0,-2,-2,-2,0,4,5,5,5,5,6,6,3,1,5,10,9,4,3,3,4,7,8,9,7,4,1,0,1,4,7,10,10,4,0,3,5,2,0,-2,-3,-1,3,3,2,3,4,6,7,7,6,6,6,2,-2,-2,0,3,6,10,14,13,7,3,4,6,9,11,11,9,4,2,5,8,6,3,-1,-3,-2,6,5,5,7,9,10,10,9,7,8,7,1,-5,-5,0,1,4,8,13,13,10,8,9,9,10,10,9,8,5,4,6,8,6,5,2,1,1,10,9,9,12,15,15,14,10,8,9,10,2,-7,-7,-1,1,1,5,9,12,12,13,13,12,9,6,7,7,5,5,6,7,6,6,8,8,6,10,9,11,15,18,18,17,14,10,9,8,2,-4,-5,-1,0,0,2,6,9,10,11,12,10,6,4,8,10,9,8,8,9,8,8,9,8,4,8,9,12,16,19,21,21,18,13,9,5,1,0,-1,-1,-1,-1,0,3,5,6,8,9,8,3,2,8,13,12,12,11,11,11,11,9,6,1,7,4,3,8,14,19,22,20,17,12,6,2,0,0,-2,-2,-2,-1,1,3,5,8,10,8,3,2,7,10,8,7,7,7,7,7,7,7,2,7,-2,-8,0,8,15,20,22,21,16,9,5,1,0,-2,-4,-4,-3,-1,1,6,10,12,11,4,1,4,5,3,1,1,1,0,1,5,8,4],
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
