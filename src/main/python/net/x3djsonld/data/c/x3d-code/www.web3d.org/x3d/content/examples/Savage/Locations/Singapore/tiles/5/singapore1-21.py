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
        texture=ImageTexture(url=['../../images/5/singapore1-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.220994975577994,103.8914597167094,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[9,10,10,9,8,6,4,2,2,4,6,6,6,5,4,4,5,8,14,21,22,17,12,9,8,8,7,6,6,8,10,11,10,7,5,5,5,9,10,11,10,9,6,3,1,2,4,5,4,3,3,3,4,6,9,14,20,19,11,7,8,8,7,6,5,6,7,9,12,12,9,6,5,5,12,13,12,10,8,6,3,0,1,3,3,1,1,1,2,3,6,12,15,16,13,8,6,9,10,9,8,9,8,8,8,9,10,8,6,6,6,12,13,10,8,7,6,3,0,1,3,3,2,1,2,3,5,9,15,15,12,9,6,6,9,10,10,10,11,11,8,7,8,8,8,7,7,7,6,6,3,1,1,2,2,1,3,6,7,8,9,10,12,16,19,18,16,12,10,8,6,6,7,9,10,10,9,7,6,7,8,9,10,9,9,3,2,-1,-3,-1,0,1,3,6,9,13,15,16,17,20,25,25,20,15,11,9,8,6,4,4,8,10,9,8,5,4,6,8,10,11,11,9,5,4,1,0,0,2,4,7,12,17,21,24,23,21,21,21,18,13,8,5,4,6,7,5,5,6,7,6,5,4,4,5,7,8,8,8,8,6,5,3,2,2,4,6,11,17,23,28,32,31,26,21,17,11,6,1,0,0,5,7,6,5,4,4,3,3,3,3,4,6,6,7,6,7,6,5,4,4,4,6,7,9,15,22,30,37,35,26,19,12,4,-2,-5,-3,0,2,4,4,3,3,3,4,4,4,4,5,7,8,7,6,5,6,6,5,5,6,7,7,9,13,20,32,42,38,25,15,7,-1,-10,-11,-6,-2,0,2,2,3,2,2,5,6,5,4,7,8,9,8,5,4,6,7,7,6,5,4,4,5,8,13,21,28,26,16,5,-3,-8,-8,-6,-3,-1,0,1,2,3,2,3,8,10,7,6,7,7,6,5,4,4,7,8,9,8,5,2,1,2,3,5,11,15,13,7,-2,-13,-13,-7,-2,0,0,0,1,3,3,2,4,10,12,9,6,6,5,2,1,2,4,11,12,12,11,10,8,7,6,6,6,8,10,8,4,-1,-6,-7,-3,0,2,4,7,9,9,9,5,4,6,7,5,4,4,3,1,0,2,4,15,16,15,14,15,14,12,10,8,6,5,5,4,1,0,0,0,0,2,5,10,16,18,16,14,9,5,3,2,2,2,1,0,0,0,3,5,22,23,19,14,13,13,11,9,6,4,4,4,4,4,4,4,4,5,5,6,10,19,23,21,18,12,7,3,2,3,4,3,2,2,2,5,8,29,30,21,12,10,10,9,7,5,3,3,4,5,7,8,8,8,10,8,6,10,22,27,25,21,15,10,5,2,4,5,5,5,4,4,8,11,26,22,15,8,6,6,6,5,2,-1,-1,0,3,6,7,8,9,9,8,5,8,17,21,19,16,11,6,2,0,0,1,2,3,3,5,10,13,22,12,6,4,3,4,5,4,-1,-6,-7,-3,0,3,6,8,9,8,6,3,5,12,15,13,10,5,1,-1,-3,-3,-2,-1,0,2,6,11,15,14,6,4,4,2,0,-1,-3,-7,-9,-6,-1,0,1,3,6,7,7,5,3,5,11,13,12,9,6,2,-1,-2,-3,-2,0,3,4,7,11,14,5,2,4,5,2,-3,-10,-14,-14,-10,-4,1,1,0,0,3,5,4,4,2,5,11,13,11,9,8,5,1,-1,-3,-2,2,7,8,8,10,10,3,2,3,4,2,-2,-9,-14,-12,-5,0,1,1,0,1,5,5,4,4,5,7,10,10,9,9,10,8,3,0,0,2,7,11,12,11,11,10,3,3,3,2,1,-1,-6,-10,-6,1,3,2,2,2,4,8,7,4,5,9,10,8,7,7,8,10,10,6,4,4,6,11,15,15,14,12,9,4,5,3,1,0,0,-4,-5,-1,4,7,7,6,6,6,7,6,3,4,8,8,6,5,6,7,8,8,6,4,5,7,12,15,15,15,13,11],
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
