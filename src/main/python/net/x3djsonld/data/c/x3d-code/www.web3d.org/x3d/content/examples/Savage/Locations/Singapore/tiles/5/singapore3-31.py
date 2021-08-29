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
        texture=ImageTexture(url=['../../images/5/singapore3-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.238458400333982,104.0350900579996,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[3,3,3,6,9,6,3,6,9,7,4,5,7,8,9,10,11,9,6,6,5,6,8,9,11,13,15,15,12,9,4,3,5,7,8,8,7,3,1,3,5,3,1,7,13,11,7,6,6,6,5,7,11,8,4,5,7,7,6,6,8,11,15,16,13,10,7,6,7,7,5,5,6,5,4,5,6,3,1,1,2,2,2,4,7,7,6,7,9,7,3,3,6,5,3,3,4,7,10,11,12,11,8,6,6,6,6,7,5,6,6,6,6,4,1,-2,-6,-4,0,3,8,8,6,6,8,5,2,2,4,3,0,0,0,2,4,7,10,12,9,7,4,4,7,10,5,7,8,8,6,1,-3,-4,-5,-1,2,5,8,6,4,4,6,4,1,0,2,2,0,0,0,2,6,9,11,10,7,5,3,3,6,11,6,8,10,9,5,-1,-9,-7,-3,1,6,7,7,4,1,2,5,3,0,0,0,0,0,0,0,1,8,11,11,9,6,3,1,2,7,12,7,8,9,7,4,0,-5,-6,-4,0,3,4,4,4,2,3,5,4,1,0,0,0,1,0,0,2,8,12,12,12,11,10,6,4,7,10,8,8,7,5,3,0,-1,-4,-5,-2,0,0,1,2,3,4,6,5,2,0,0,0,1,1,0,2,8,12,13,14,17,16,11,7,7,8,4,4,5,5,5,3,0,0,-1,0,4,5,6,6,6,6,6,6,4,2,1,0,1,1,0,2,7,11,15,16,17,15,12,10,10,12,0,1,5,6,6,5,3,2,1,4,8,11,12,12,11,9,8,7,6,5,4,3,2,1,1,3,6,10,16,17,16,14,12,12,14,15,1,1,2,4,5,5,4,3,3,6,9,10,10,10,11,10,8,7,5,5,5,5,4,4,3,5,10,12,13,14,13,13,13,15,18,19,5,2,1,2,3,4,4,5,6,7,8,7,6,9,13,11,7,6,4,5,6,7,7,6,5,7,14,15,10,8,9,11,14,18,21,23,6,2,1,2,6,9,12,14,14,13,10,8,5,8,12,10,6,5,4,7,10,11,9,6,3,4,9,9,5,4,8,13,19,23,24,24,5,2,1,4,8,15,21,24,24,19,12,9,6,8,11,8,4,3,5,9,15,14,10,5,1,0,2,2,0,1,8,16,23,28,28,25,4,0,0,3,11,18,25,28,28,24,17,9,0,3,10,8,5,5,6,10,16,15,11,6,1,0,0,0,0,3,7,14,24,29,28,23,3,-1,-4,2,13,21,27,29,30,27,23,8,-8,-2,8,10,8,7,7,11,16,17,14,8,1,0,0,1,4,6,7,12,24,30,26,20,2,-2,-5,1,11,16,19,21,23,22,19,6,-7,-3,5,8,8,10,13,14,15,15,12,8,2,0,2,5,9,11,11,15,26,31,26,18,0,-3,-4,0,6,7,7,9,11,13,13,6,-2,-1,2,3,5,11,20,19,15,11,9,6,3,4,8,12,15,16,16,20,29,33,26,17,1,0,-1,1,4,3,2,4,6,7,7,2,-2,0,0,2,5,11,19,18,14,10,7,5,4,6,11,14,15,16,16,18,26,29,22,15,2,2,2,3,4,2,0,2,4,3,1,-1,-5,-3,1,3,5,9,13,14,12,9,6,4,4,7,13,14,12,12,12,14,18,20,17,12,3,5,7,7,7,4,0,1,2,0,-1,-5,-9,-6,-1,3,9,12,14,13,10,7,4,4,5,8,12,13,10,9,9,11,13,14,13,11,2,7,11,13,13,8,3,1,0,-2,-5,-9,-14,-10,-3,4,15,19,19,15,8,4,4,4,5,7,9,9,7,7,8,9,10,10,12,12,1,7,12,13,13,9,4,2,1,-1,-4,-9,-14,-9,-2,6,17,24,29,23,12,7,6,5,5,5,5,6,6,6,8,9,9,9,10,11],
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
