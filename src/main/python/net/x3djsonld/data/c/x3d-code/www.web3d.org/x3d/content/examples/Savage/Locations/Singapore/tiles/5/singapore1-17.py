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
        texture=ImageTexture(url=['../../images/5/singapore1-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.220994975577994,103.83400758019333,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[1,1,2,4,6,6,5,3,3,4,5,5,5,5,6,7,6,4,2,0,0,-2,0,1,10,21,30,35,36,34,30,25,20,14,10,8,7,3,3,4,6,7,6,5,3,3,4,5,6,6,6,6,5,4,2,1,0,0,0,1,5,14,26,34,37,36,31,26,22,17,11,7,5,4,10,7,8,10,11,11,9,7,5,4,5,6,7,8,6,5,4,3,1,0,0,-1,1,6,15,25,31,32,29,24,20,15,11,7,5,4,3,15,11,11,12,13,13,12,9,7,4,5,7,8,9,7,4,4,3,1,0,0,-1,1,7,15,23,27,27,23,18,14,10,7,4,3,2,2,18,14,8,4,5,8,9,8,6,4,3,4,5,6,6,4,3,3,2,0,0,0,2,7,11,15,18,19,18,14,11,8,5,3,1,0,1,19,15,4,-1,0,4,6,7,6,4,3,2,3,4,4,4,3,2,2,1,1,1,3,6,8,8,9,11,11,10,9,7,4,1,0,0,0,16,11,2,-3,-3,0,4,9,8,5,4,3,3,4,4,3,3,2,1,2,2,1,2,4,4,4,4,5,5,5,5,5,3,1,0,0,1,12,8,1,-5,-6,-3,3,11,10,7,5,4,4,5,4,3,2,1,1,2,2,1,1,2,2,0,0,0,0,1,2,2,2,1,1,1,3,9,8,1,-3,-4,-1,5,11,11,8,6,5,5,6,6,5,4,4,4,4,5,3,3,2,2,0,0,0,0,0,1,2,3,3,3,3,3,8,8,1,-2,-2,0,6,12,12,11,8,5,6,8,8,7,6,6,6,7,7,5,4,2,2,1,0,0,0,0,0,2,4,5,6,5,4,7,5,1,-1,0,2,5,9,9,7,6,4,5,7,7,6,6,5,5,5,5,3,2,1,2,2,1,0,0,0,0,3,4,5,6,5,4,6,2,0,0,1,4,5,6,5,4,3,3,4,5,6,6,6,5,5,4,2,0,0,1,2,2,1,0,0,0,0,3,5,5,5,5,4,4,0,0,-1,0,2,2,2,3,4,3,2,4,5,6,7,6,5,4,5,3,2,2,2,2,1,1,1,1,1,1,3,4,4,4,4,4,2,0,-1,-2,0,0,0,0,1,4,3,2,4,6,6,7,6,4,4,5,5,3,2,2,2,1,1,2,2,3,2,3,3,3,3,4,4,-1,-4,-5,-6,-3,0,0,0,0,2,1,0,1,4,4,4,4,3,3,5,4,2,1,2,3,2,2,3,4,3,2,1,0,1,2,4,4,-4,-7,-9,-9,-6,-3,-1,0,0,0,0,-1,0,1,2,2,1,1,2,5,4,1,0,2,2,2,3,4,4,3,1,0,0,0,1,4,4,-2,-2,-4,-5,-5,-5,-2,0,0,0,0,0,1,3,3,2,2,2,2,2,1,0,0,1,1,2,2,3,3,2,0,0,0,0,1,3,3,0,3,1,-1,-4,-7,-5,0,0,0,1,4,6,6,4,3,3,3,2,0,-1,-2,-1,0,1,2,2,2,1,1,0,0,0,0,1,2,2,3,7,5,2,0,-1,-1,0,0,0,2,5,7,8,7,4,4,4,2,0,0,-1,0,1,2,3,3,2,1,0,0,0,0,1,2,3,3,7,11,9,7,6,5,3,1,1,1,3,6,10,13,10,6,4,4,3,2,1,0,1,4,4,4,4,2,0,0,0,0,0,2,3,3,4,5,9,9,9,8,7,5,2,2,2,6,10,12,13,10,6,4,5,4,2,1,1,1,2,2,2,2,1,1,0,0,0,0,1,2,3,3,3,6,8,9,8,7,6,4,4,4,8,13,14,13,9,5,4,5,4,2,2,2,1,0,0,0,0,0,1,1,1,1,1,1,1,2,3,2,4,6,8,7,6,6,6,6,6,9,13,12,10,7,4,3,4,4,2,2,2,1,0,0,-1,-1,0,1,2,2,2,2,1,1,2,3],
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
