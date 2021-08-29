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
        texture=ImageTexture(url=['../../images/5/singapore3-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.238458400333982,103.92018578496744,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[13,7,2,2,2,1,0,0,0,0,1,3,5,6,5,4,3,1,0,-1,0,1,5,8,8,8,8,7,7,7,8,8,6,4,4,4,5,14,7,0,0,0,0,-1,-2,-2,-2,0,2,6,6,3,3,3,2,0,0,0,4,7,10,11,11,8,6,5,5,7,8,8,7,5,3,5,8,4,0,0,0,0,0,-1,-1,0,0,2,5,5,4,4,5,4,3,1,2,3,6,8,10,10,7,6,7,7,6,6,5,5,5,5,7,3,2,0,0,0,0,0,0,0,0,1,3,4,4,4,5,7,7,6,5,3,3,5,6,9,9,6,5,8,9,6,3,2,2,5,7,8,4,4,4,1,0,0,0,0,0,1,3,3,4,4,4,4,5,5,3,3,3,3,5,7,8,7,5,4,7,9,5,3,4,7,11,13,12,6,7,6,3,1,1,1,0,0,2,4,4,4,4,4,4,3,2,1,1,2,4,6,7,5,4,4,4,7,8,4,3,7,11,17,20,17,6,7,7,7,6,5,5,3,2,3,5,8,9,7,3,2,3,2,0,0,1,2,5,7,6,5,2,1,4,6,5,6,8,9,11,11,10,7,8,9,10,10,10,8,5,2,3,7,11,15,11,3,0,2,2,0,0,0,0,3,6,7,5,1,0,1,4,7,9,8,8,5,3,4,6,7,9,10,11,9,6,4,3,4,6,9,11,8,3,2,3,3,2,2,1,1,4,6,6,5,2,1,4,7,8,9,11,11,7,4,4,5,6,8,10,11,8,4,4,4,4,6,6,7,6,3,3,3,4,5,5,3,3,5,5,4,4,3,4,7,9,8,9,13,14,10,6,5,4,6,8,10,11,11,11,8,6,6,6,6,7,6,5,5,5,6,7,7,4,4,5,5,4,4,4,4,7,9,8,9,14,16,10,5,5,3,6,8,10,12,16,18,14,9,7,7,7,7,6,7,7,7,8,8,8,5,4,5,5,5,5,4,4,7,9,8,9,15,17,9,3,4,5,6,6,7,9,13,16,14,10,9,9,9,8,8,8,7,7,7,8,8,8,7,6,6,6,5,3,3,5,8,10,13,15,15,8,3,4,8,5,3,3,5,8,12,11,10,11,11,11,11,10,9,8,6,6,7,9,12,11,9,7,7,6,3,2,3,7,13,18,15,11,7,4,5,2,2,2,4,6,9,11,10,8,8,9,10,10,9,8,6,4,4,7,9,12,13,10,8,7,7,4,3,5,9,15,18,13,9,6,4,6,-4,-1,2,7,11,11,10,8,6,5,5,6,8,8,6,4,3,3,7,10,12,12,9,7,8,8,6,6,10,14,16,17,12,7,5,4,7,-3,0,3,9,12,11,8,6,5,4,4,5,6,7,7,7,5,6,8,10,10,9,6,5,8,9,6,7,15,20,20,18,11,4,2,1,5,1,3,6,10,12,9,5,4,4,5,5,5,5,7,10,11,11,11,10,9,6,3,2,3,7,9,6,9,20,27,25,21,10,2,0,0,0,5,7,10,12,13,9,4,2,3,5,7,6,5,7,10,12,12,11,9,7,5,3,2,3,7,9,8,12,25,32,26,18,10,4,1,0,0,7,11,14,16,15,9,3,1,3,6,9,8,6,7,10,10,9,8,5,5,5,4,4,5,8,11,12,18,30,35,23,14,11,8,4,2,3,9,13,16,17,16,10,5,2,3,7,10,9,6,6,8,7,6,5,2,3,6,7,6,7,11,14,17,22,29,30,18,9,10,9,6,4,5,10,13,15,17,17,14,10,7,5,7,9,8,5,4,4,3,2,1,0,3,9,11,8,9,14,19,24,27,25,20,11,4,5,6,5,4,5,13,15,16,17,17,15,12,8,6,6,7,5,2,0,0,0,0,0,0,3,9,12,9,10,16,22,28,28,19,11,6,2,3,5,5,5,5],
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
