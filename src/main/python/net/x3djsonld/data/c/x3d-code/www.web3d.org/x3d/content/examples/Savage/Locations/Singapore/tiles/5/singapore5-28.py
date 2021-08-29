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
        texture=ImageTexture(url=['../../images/5/singapore5-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.25592182508997,103.99200095561254,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[6,4,4,4,4,5,7,11,8,5,5,5,8,12,11,7,5,3,2,2,0,0,-3,-5,-2,5,11,17,21,24,26,26,26,28,29,29,9,6,5,4,5,4,7,10,7,4,3,2,5,9,8,5,3,1,1,1,1,0,-5,-12,-6,10,22,23,23,25,26,28,30,33,33,28,10,5,5,4,4,5,6,8,6,4,4,5,6,8,6,3,3,1,1,1,1,1,0,-2,3,20,30,31,30,30,30,31,32,33,32,24,9,3,3,3,5,8,7,5,5,4,6,9,8,7,4,2,2,3,2,0,0,4,7,8,16,30,38,39,38,36,34,34,34,34,30,18,7,3,4,6,6,7,7,5,5,4,6,8,8,8,6,3,3,6,4,1,2,7,10,12,17,26,33,35,37,37,36,36,35,31,25,15,5,5,7,9,7,5,6,7,6,5,6,6,8,12,9,5,6,9,7,3,4,9,12,14,16,20,24,30,34,35,37,39,37,29,21,11,3,3,6,9,7,5,5,7,7,6,5,4,6,10,9,6,7,7,7,4,5,7,9,12,14,15,18,23,27,31,33,31,28,19,10,5,2,0,4,7,6,5,5,7,7,6,4,1,3,6,7,7,6,4,5,6,6,3,4,8,11,12,14,17,21,25,26,21,15,6,0,0,2,0,3,6,6,7,9,11,8,5,3,0,2,3,4,5,5,4,4,8,6,4,3,5,7,8,11,14,18,21,21,16,11,5,1,2,2,1,3,6,8,10,14,17,10,3,1,0,0,1,1,2,3,4,6,9,8,5,3,1,2,5,8,12,16,17,16,13,11,7,7,10,4,4,5,7,10,12,11,10,5,1,1,3,3,2,1,2,2,4,6,7,8,7,5,2,1,4,7,11,14,15,15,13,11,9,8,11,6,7,8,9,11,14,6,-1,-1,0,3,9,8,6,4,3,3,4,4,3,6,9,8,4,2,4,7,11,13,14,15,13,12,9,8,9,6,7,8,9,10,11,0,-14,-8,-1,2,8,9,8,6,4,4,6,5,3,4,8,8,3,2,4,7,10,12,13,12,11,9,7,6,7,7,7,8,9,7,4,-9,-26,-16,-4,1,6,8,10,8,5,6,9,7,4,4,5,4,0,1,3,6,9,11,11,9,6,4,3,3,6,7,6,6,7,7,5,-6,-20,-12,-2,0,3,6,8,7,4,6,9,8,4,2,2,1,0,0,2,5,8,10,10,9,6,4,3,3,6,5,3,3,3,7,12,5,-2,-1,0,1,2,3,3,3,2,4,8,7,3,1,0,0,0,0,2,5,7,9,10,9,7,5,4,4,6,4,1,2,2,7,13,12,9,6,3,2,2,3,3,3,2,3,5,4,3,1,0,-1,-1,0,1,4,6,9,9,10,8,7,6,5,7,3,1,2,4,7,11,12,15,10,5,4,5,5,6,5,3,3,1,2,2,1,0,-1,-1,-1,0,2,6,9,9,9,9,8,7,6,8,3,1,3,6,7,10,12,15,11,7,5,6,6,7,6,5,3,1,1,1,1,0,0,-1,-1,0,3,8,10,9,9,9,9,8,7,8,6,2,5,8,8,9,12,14,10,7,5,4,5,6,6,7,6,4,2,2,1,0,0,-1,0,3,7,11,12,11,10,10,10,7,6,7,8,6,7,8,8,7,10,13,10,7,5,3,4,5,6,8,7,6,4,2,1,0,-1,0,1,4,8,12,13,11,9,9,8,7,6,7,11,11,9,8,5,2,7,12,10,8,5,1,3,5,6,8,7,7,5,5,0,-6,-7,0,3,4,7,13,13,7,3,3,4,6,6,7,12,12,10,8,4,0,6,13,11,9,5,0,2,6,7,6,5,5,5,4,0,-9,-8,0,5,5,7,14,14,7,1,1,1,4,6,7],
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
