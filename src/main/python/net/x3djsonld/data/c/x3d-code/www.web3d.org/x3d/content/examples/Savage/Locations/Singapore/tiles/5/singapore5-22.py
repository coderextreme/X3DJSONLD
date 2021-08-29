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
        texture=ImageTexture(url=['../../images/5/singapore5-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.25592182508997,103.90582275083842,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[6,10,13,12,10,7,4,1,0,0,1,1,2,5,10,14,17,15,10,9,13,16,18,15,6,2,7,10,9,9,10,10,10,9,6,4,8,10,11,9,7,3,0,-1,-3,-1,0,2,3,5,6,7,6,7,9,12,16,18,16,12,7,6,13,16,12,10,10,10,13,13,10,6,4,5,6,4,2,0,0,-2,-3,-2,-1,0,3,6,8,8,9,10,11,13,15,13,10,7,7,8,12,15,12,10,9,9,10,10,8,6,0,0,1,0,-1,-1,-1,-1,-1,-2,-3,-1,2,6,9,12,13,14,14,14,13,9,4,2,6,9,11,12,11,10,8,6,6,6,5,5,0,0,0,-2,-2,0,1,2,1,0,0,0,3,6,10,14,17,18,17,15,12,9,5,4,7,9,10,11,11,10,7,6,6,6,7,7,1,0,-2,-3,-2,2,6,7,5,3,2,2,3,6,10,15,22,23,19,15,12,10,8,7,7,8,8,8,10,10,7,5,6,7,9,10,3,0,-1,-4,-4,1,7,8,7,5,3,3,4,5,7,12,17,19,17,14,11,9,8,9,11,14,18,18,14,10,7,5,6,8,10,11,6,3,0,-3,-5,0,6,9,10,7,4,3,4,3,3,6,10,13,14,13,11,9,9,11,16,23,30,30,19,11,7,5,7,9,11,11,8,7,4,0,-1,2,7,9,10,8,6,5,6,6,6,7,8,9,10,11,11,10,11,15,24,31,32,29,19,11,6,4,7,9,11,13,10,11,11,7,4,5,8,9,10,9,8,9,9,10,10,9,8,7,7,8,10,12,13,20,35,40,31,23,17,11,5,2,5,8,13,16,12,13,13,11,8,7,8,9,9,8,6,6,6,6,7,7,4,4,4,5,8,11,17,26,39,43,32,23,16,10,4,1,3,6,12,15,14,15,15,12,10,9,8,9,9,6,4,1,0,0,1,1,0,1,3,4,5,10,21,32,42,44,34,26,18,11,4,1,2,4,9,12,15,15,15,14,12,11,9,9,8,5,2,0,-2,-2,0,0,0,1,3,3,3,10,23,33,37,36,30,24,17,11,5,1,3,5,9,9,15,16,15,15,14,12,10,8,6,4,1,0,-2,-2,-1,1,3,4,3,3,4,11,26,33,29,24,21,18,16,13,6,2,4,7,9,6,16,16,16,15,15,12,10,8,6,5,3,1,0,-2,-1,1,4,5,3,4,8,16,26,29,23,17,15,13,12,9,3,1,4,7,8,5,16,16,16,15,14,12,10,8,8,8,8,4,0,-1,0,1,3,4,3,8,16,22,23,22,18,14,12,9,5,2,0,0,3,6,6,4,16,16,15,14,13,12,10,9,9,9,8,4,-1,-2,0,0,2,4,6,12,21,25,22,20,16,14,12,8,3,0,0,0,2,4,5,5,16,15,14,13,12,11,10,11,11,8,4,0,-4,-4,-1,0,0,4,10,17,23,27,24,21,18,16,13,10,6,3,3,4,3,3,5,7,15,15,14,13,12,11,11,11,9,5,0,-4,-6,-5,-1,0,0,4,12,18,22,25,24,22,20,17,13,10,6,4,5,5,3,3,6,9,15,14,13,12,12,12,12,9,5,0,-4,-6,-6,-3,0,0,1,5,11,16,19,21,21,22,21,19,13,8,4,2,2,3,3,4,8,12,14,13,13,12,12,11,9,5,0,-2,-4,-3,0,2,3,4,4,7,12,15,17,19,19,19,19,17,12,6,3,1,2,3,3,4,9,12,14,13,13,13,12,9,4,0,-3,-2,1,8,14,14,12,11,11,12,14,16,18,18,16,15,14,12,8,5,2,1,3,5,4,4,6,8,14,13,13,12,10,5,0,-4,-5,-1,6,15,23,23,19,16,15,14,14,16,18,17,13,10,8,7,6,4,2,1,5,7,6,4,5,5],
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
