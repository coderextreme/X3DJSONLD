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
        texture=ImageTexture(url=['../../images/5/singapore1-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.220994975577994,103.86273364845137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[5,4,4,4,3,3,4,3,3,4,5,6,7,5,4,4,5,4,3,5,9,9,6,4,5,6,8,8,9,8,4,0,-5,-8,-7,-4,0,6,5,4,3,3,3,4,4,3,5,6,7,7,6,3,3,3,3,3,6,9,9,5,4,5,6,7,8,9,8,4,-1,-8,-9,-3,1,4,9,6,3,3,3,4,3,3,3,3,4,4,4,3,1,1,1,2,2,4,7,8,9,9,7,7,6,5,6,5,2,0,-3,-3,0,4,6,10,6,3,3,3,4,3,3,3,2,2,2,1,1,0,0,1,1,2,3,5,8,12,12,9,7,5,4,4,3,0,0,0,1,4,7,7,8,5,3,3,4,4,5,4,3,2,1,1,1,1,2,3,4,4,1,2,5,8,12,12,9,6,4,4,6,5,1,0,1,3,5,6,7,7,5,4,4,4,6,6,5,3,2,1,1,1,2,3,5,8,6,1,1,4,8,12,12,8,5,4,4,8,7,1,0,2,4,5,6,7,6,6,6,5,4,5,5,5,5,5,4,4,4,5,7,8,9,6,2,0,0,4,11,12,8,6,6,6,6,5,2,1,2,3,5,6,6,6,7,8,6,4,4,5,5,6,7,7,7,7,9,11,11,9,6,3,1,-2,1,10,12,8,7,8,7,5,4,4,3,2,2,4,6,6,6,8,10,7,4,4,4,4,4,4,4,5,7,12,16,14,9,6,4,3,2,5,13,14,10,7,6,5,6,6,6,5,4,4,6,8,8,6,10,11,8,4,3,4,4,3,2,2,4,8,15,21,17,9,6,5,6,6,10,16,16,11,7,4,5,7,8,7,6,6,6,9,10,10,7,9,8,4,1,2,4,4,4,2,2,5,11,19,27,21,9,3,2,2,4,7,10,10,6,3,2,4,6,7,5,4,3,4,7,9,9,7,8,6,1,0,1,4,5,4,2,2,6,14,24,33,25,8,0,0,0,2,4,6,5,1,0,1,3,5,5,4,2,2,3,5,7,7,4,4,4,2,1,2,3,4,5,4,5,12,23,30,32,24,9,2,1,2,3,5,7,7,3,2,2,4,7,8,7,5,4,4,4,5,7,0,1,3,4,5,3,2,3,5,6,9,19,31,34,31,21,10,5,4,4,5,7,9,9,5,3,3,5,9,10,9,8,7,6,4,4,6,0,3,5,6,5,3,1,2,3,6,11,18,25,26,21,15,9,5,3,3,3,5,7,7,3,1,1,3,8,10,10,8,5,3,3,4,5,2,5,7,6,4,2,1,1,2,6,12,16,18,16,12,10,9,6,2,1,2,3,5,4,1,0,0,2,7,10,10,7,2,0,3,5,4,2,4,5,4,3,3,3,5,8,13,17,16,12,8,6,5,5,4,2,2,3,3,4,3,1,0,0,2,6,9,11,10,6,4,5,6,5,2,2,3,1,0,3,7,11,15,19,22,16,7,3,2,1,2,3,3,4,4,4,3,3,3,3,3,3,5,8,11,12,9,7,7,7,5,1,2,3,1,0,2,6,10,15,18,19,13,5,2,1,1,3,4,4,5,7,6,5,4,4,4,4,4,6,9,13,14,13,11,8,5,4,0,3,4,2,0,2,5,10,14,15,13,9,4,2,1,2,5,5,6,8,10,9,7,6,5,5,5,5,7,10,13,16,16,14,8,3,4,0,6,12,13,12,10,10,11,12,10,7,5,3,1,0,1,3,5,7,9,11,11,7,5,5,5,6,7,7,9,11,13,14,13,8,4,5,0,12,24,27,26,23,18,14,10,6,3,1,0,0,0,0,0,3,8,11,13,11,7,5,4,5,7,8,7,7,8,9,11,10,8,6,6,7,22,35,41,40,30,19,11,5,2,0,0,0,-1,-1,-1,-1,1,6,9,9,8,6,4,3,4,6,7,7,7,9,10,11,11,9,7,4],
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
