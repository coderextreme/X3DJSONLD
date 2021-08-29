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
        texture=ImageTexture(url=['../../images/5/singapore3-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.238458400333982,103.81964454606431,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[-2,0,4,10,9,8,9,10,8,4,1,-1,-1,0,0,1,2,3,2,1,0,0,0,0,2,6,7,7,7,7,7,7,8,8,8,8,-2,-2,1,4,3,2,5,8,4,0,0,-1,-2,-1,0,1,2,2,2,1,1,2,2,1,3,6,7,5,5,5,6,7,8,7,7,8,-1,0,1,3,2,1,1,0,0,-1,-2,-2,-2,-2,-1,0,0,1,1,0,0,0,1,1,3,6,7,6,6,7,8,9,8,7,7,8,0,0,1,3,2,0,-2,-6,-5,-4,-3,-2,-2,-3,-3,-2,0,0,0,0,0,0,0,2,4,5,6,7,8,9,9,9,9,7,7,8,0,0,1,2,2,1,-1,-4,-4,-3,-2,0,0,0,0,0,0,1,0,0,0,0,1,2,3,6,7,9,10,12,12,12,11,8,7,8,0,0,1,2,2,2,0,-2,-3,-3,0,1,1,2,3,4,3,1,0,0,0,2,2,2,3,7,9,11,13,15,15,14,12,9,8,9,0,0,0,1,1,2,0,-1,-2,-2,0,4,5,5,5,5,5,4,4,4,4,5,5,3,4,8,11,13,15,16,16,14,11,8,8,8,0,0,0,0,0,0,0,0,0,-1,2,7,8,9,8,6,7,8,9,9,9,8,6,5,5,9,12,15,17,18,17,13,10,7,7,7,0,0,0,0,0,0,0,0,0,0,2,6,7,8,7,6,6,8,9,9,9,9,9,9,10,12,15,18,18,18,16,12,9,7,7,7,0,0,0,0,0,0,0,-1,0,0,2,4,5,6,6,5,5,7,8,8,8,10,12,13,14,16,18,20,20,18,14,10,8,7,7,7,1,1,0,0,0,0,0,-1,0,0,1,4,5,5,5,5,6,8,8,8,10,13,15,17,18,19,19,20,19,16,13,10,8,7,7,8,1,1,3,3,1,0,-1,-1,-1,-1,0,3,4,3,4,5,7,8,9,10,12,15,18,21,22,22,22,21,18,15,12,9,7,7,8,10,2,2,3,3,1,0,0,-1,0,0,1,3,4,4,5,6,7,8,10,12,15,19,21,24,24,24,22,21,18,15,11,9,7,7,8,10,3,3,3,2,1,0,0,0,0,3,3,4,5,5,7,8,8,8,11,14,18,23,25,27,27,25,23,22,18,14,11,9,8,7,7,10,4,4,3,2,1,1,2,3,4,5,5,5,5,6,7,9,10,11,15,20,24,28,28,28,26,23,21,20,17,14,11,10,9,9,9,11,4,3,2,2,2,3,7,10,10,7,6,5,5,6,7,9,12,14,20,28,32,33,32,28,25,21,18,18,16,13,12,11,11,11,11,13,4,4,3,3,3,4,8,10,10,10,8,5,5,6,8,12,16,19,25,31,33,33,31,28,24,20,17,15,14,13,12,12,12,12,12,14,5,5,5,5,5,6,7,8,10,12,9,6,5,6,10,14,19,24,29,33,34,32,29,27,23,19,15,13,12,12,13,12,11,11,12,15,5,6,6,5,5,6,6,6,7,8,7,5,5,7,12,18,23,28,31,33,32,29,26,24,20,16,13,12,11,11,12,11,11,12,14,17,5,5,6,6,6,5,5,5,3,1,2,2,5,7,15,23,28,31,32,32,29,26,22,20,17,13,11,11,10,10,9,9,9,13,16,19,5,5,5,5,6,5,5,4,3,1,2,4,7,11,17,25,29,31,31,29,27,24,23,21,17,13,10,11,11,11,11,11,12,16,20,23,5,4,4,4,4,5,5,4,4,6,7,8,12,16,20,25,28,30,29,26,25,24,24,26,22,14,10,12,15,17,18,17,18,21,26,31,5,4,3,3,3,4,5,4,8,11,12,13,16,20,23,26,27,28,27,24,23,23,26,30,27,16,12,14,18,22,24,24,25,28,33,39],
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
